/*
** Automatically generated from `getopt_io.m'
** by the Mercury compiler,
** version rotd-2017-06-13
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


/* :- module getopt_io. */
/* :- implementation. */

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

static MR_bool MR_CALL 
mercury__getopt_io____Unify____maybe_option_table_1_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3);

static void MR_CALL 
mercury__getopt_io____Compare____maybe_option_table_1_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box * mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3,
  MR_Box mercury__getopt_io__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt_io____Unify____maybe_option_table_se_1_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3);

static void MR_CALL 
mercury__getopt_io____Compare____maybe_option_table_se_1_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box * mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3,
  MR_Box mercury__getopt_io__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_data_0_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box mercury__getopt_io__wrapper_arg_2);

static void MR_CALL 
mercury__getopt_io____Compare____option_data_0_0_10001(
  MR_Box * mercury__getopt_io__wrapper_arg_1,
  MR_Box mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_error_1_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3);

static void MR_CALL 
mercury__getopt_io____Compare____option_error_1_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box * mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3,
  MR_Box mercury__getopt_io__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_error_reason_0_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box mercury__getopt_io__wrapper_arg_2);

static void MR_CALL 
mercury__getopt_io____Compare____option_error_reason_0_0_10001(
  MR_Box * mercury__getopt_io__wrapper_arg_1,
  MR_Box mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_1_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3);

static void MR_CALL 
mercury__getopt_io____Compare____option_ops_1_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box * mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3,
  MR_Box mercury__getopt_io__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_internal_1_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3);

static void MR_CALL 
mercury__getopt_io____Compare____option_ops_internal_1_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box * mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3,
  MR_Box mercury__getopt_io__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_special_1_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3);

static void MR_CALL 
mercury__getopt_io____Compare____option_ops_special_1_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box * mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3,
  MR_Box mercury__getopt_io__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_track_1_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3);

static void MR_CALL 
mercury__getopt_io____Compare____option_ops_track_1_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box * mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3,
  MR_Box mercury__getopt_io__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_table_1_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3);

static void MR_CALL 
mercury__getopt_io____Compare____option_table_1_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box * mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3,
  MR_Box mercury__getopt_io__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt_io____Unify____special_data_0_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box mercury__getopt_io__wrapper_arg_2);

static void MR_CALL 
mercury__getopt_io____Compare____special_data_0_0_10001(
  MR_Box * mercury__getopt_io__wrapper_arg_1,
  MR_Box mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3);

static MR_Integer MR_CALL 
mercury__getopt_io__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__getopt_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(
  MR_Box mercury__getopt_io__Flag_5,
  MR_String mercury__getopt_io__Option_6,
  MR_String mercury__getopt_io__Arg_7,
  MR_Word * mercury__getopt_io__Result_8);

static void MR_CALL 
mercury__getopt_io__skip_to_word_end__ho18_4_p_in__string_0(
  MR_String mercury__getopt_io__V_6_6,
  MR_Integer mercury__getopt_io__V_7_7,
  MR_Integer * mercury__getopt_io__V_8_8);

static void MR_CALL 
mercury__getopt_io__skip_to_next_word_start__ho17_4_p_in__string_0(
  MR_String mercury__getopt_io__V_6_6,
  MR_Integer mercury__getopt_io__V_7_7,
  MR_Integer * mercury__getopt_io__V_8_8);

static void MR_CALL 
mercury__getopt_io__words_loop__ho16_4_p_in__string_0(
  MR_String mercury__getopt_io__V_6_6,
  MR_Integer mercury__getopt_io__V_7_7,
  MR_Word * mercury__getopt_io__V_8_8);

static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_2(
  void * mercury__getopt_io__env_ptr_arg);

static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_1(
  void * mercury__getopt_io__env_ptr_arg);

static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_12,
  MR_Word mercury__getopt_io__OptionDefaultsPred_3,
  MR_Word * mercury__getopt_io__LambdaHeadVar__1_10,
  MR_Cont mercury__getopt_io__cont,
  void * mercury__getopt_io__cont_env_ptr);

static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_2(
  void * mercury__getopt_io__env_ptr_arg);

static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_1(
  void * mercury__getopt_io__env_ptr_arg);

static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_12,
  MR_Word mercury__getopt_io__OptionDefaultsPred_3,
  MR_Word * mercury__getopt_io__LambdaHeadVar__1_10,
  MR_Cont mercury__getopt_io__cont,
  void * mercury__getopt_io__cont_env_ptr);

static void MR_CALL 
mercury__getopt_io__process_special_8_p_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_54,
  MR_String mercury__getopt_io__Option_9,
  MR_Box mercury__getopt_io__Flag_10,
  MR_Word mercury__getopt_io__OptionData_11,
  MR_Word mercury__getopt_io__OptionOps_12,
  MR_Word mercury__getopt_io__OptionTable0_13,
  MR_Word * mercury__getopt_io__Result_14,
  MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_26,
  MR_Word * mercury__getopt_io__STATE_VARIABLE_OptionsSet_27);

static void MR_CALL 
mercury__getopt_io__process_negated_option_7_p_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_51,
  MR_String mercury__getopt_io__Option_8,
  MR_Box mercury__getopt_io__Flag_9,
  MR_Word mercury__getopt_io__OptionOps_10,
  MR_Word mercury__getopt_io__OptionTable0_11,
  MR_Word * mercury__getopt_io__Result_12,
  MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_23,
  MR_Word * mercury__getopt_io__STATE_VARIABLE_OptionsSet_24);

static void MR_CALL 
mercury__getopt_io__process_option_11_p_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_280,
  MR_Word mercury__getopt_io__HeadVar__1_1,
  MR_String mercury__getopt_io__HeadVar__2_2,
  MR_Box mercury__getopt_io__Flag_3,
  MR_Word mercury__getopt_io__MaybeArg_4,
  MR_Word mercury__getopt_io__HeadVar__5_5,
  MR_Word mercury__getopt_io__HeadVar__6_6,
  MR_Word * mercury__getopt_io__Result_7,
  MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8,
  MR_Word * mercury__getopt_io__STATE_VARIABLE_OptionsSet_9);

static void MR_CALL 
mercury__getopt_io__handle_short_options_12_p_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_70,
  MR_Word mercury__getopt_io__HeadVar__1_1,
  MR_Word mercury__getopt_io__OptionOps_2,
  MR_Word mercury__getopt_io__HeadVar__3_3,
  MR_Word * mercury__getopt_io__Args_4,
  MR_Word mercury__getopt_io__HeadVar__5_5,
  MR_Word * mercury__getopt_io__OptionArgs_6,
  MR_Word mercury__getopt_io__HeadVar__7_7,
  MR_Word * mercury__getopt_io__HeadVar__8_8,
  MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_9,
  MR_Word * mercury__getopt_io__STATE_VARIABLE_OptionsSet_10);

static void MR_CALL 
mercury__getopt_io__handle_long_option_15_p_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_55,
  MR_String mercury__getopt_io__Option_16,
  MR_Box mercury__getopt_io__Flag_17,
  MR_Word mercury__getopt_io__OptionData_18,
  MR_Word mercury__getopt_io__MaybeOptionArg0_19,
  MR_Word mercury__getopt_io__Args0_20,
  MR_Word * mercury__getopt_io__Args_21,
  MR_Word mercury__getopt_io__OptionOps_22,
  MR_Word mercury__getopt_io__OptionArgs0_23,
  MR_Word * mercury__getopt_io__OptionArgs_24,
  MR_Word mercury__getopt_io__OptionTable0_25,
  MR_Word * mercury__getopt_io__Result_26,
  MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_40,
  MR_Word * mercury__getopt_io__STATE_VARIABLE_OptionsSet_41);

static void MR_CALL 
mercury__getopt_io__init_option_table_multi_2_p_0_3(
  MR_Box mercury__getopt_io__closure_arg,
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box mercury__getopt_io__wrapper_arg_2,
  MR_Box * mercury__getopt_io__wrapper_arg_3);

static void MR_CALL 
mercury__getopt_io__init_option_table_multi_2_p_0_1(
  void * mercury__getopt_io__env_ptr_arg);

static void MR_CALL 
mercury__getopt_io__init_option_table_multi_2_p_0_2(
  MR_Box mercury__getopt_io__closure_arg,
  MR_Box * mercury__getopt_io__wrapper_arg_1,
  MR_Cont mercury__getopt_io__cont,
  void * mercury__getopt_io__cont_env_ptr);

static void MR_CALL 
mercury__getopt_io__init_option_table_2_p_0_3(
  MR_Box mercury__getopt_io__closure_arg,
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box mercury__getopt_io__wrapper_arg_2,
  MR_Box * mercury__getopt_io__wrapper_arg_3);

static void MR_CALL 
mercury__getopt_io__init_option_table_2_p_0_1(
  void * mercury__getopt_io__env_ptr_arg);

static void MR_CALL 
mercury__getopt_io__init_option_table_2_p_0_2(
  MR_Box mercury__getopt_io__closure_arg,
  MR_Box * mercury__getopt_io__wrapper_arg_1,
  MR_Cont mercury__getopt_io__cont,
  void * mercury__getopt_io__cont_env_ptr);


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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__getopt_io__getopt_io__field_types_maybe_option_table_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_maybe_option_table_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_maybe_option_table_1_1 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__getopt_io__getopt_io__field_types_maybe_option_table_1_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_maybe_option_table_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__getopt_io__getopt_io__field_types_maybe_option_table_se_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__getopt_io__getopt_io__field_types_maybe_option_table_se_1_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_maybe_option_table_se_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__getopt_io__getopt_io__field_types_option_data_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_data_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_1 = {
  (MR_String) "int",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__getopt_io__getopt_io__field_types_option_data_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_data_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_2 = {
  (MR_String) "string",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  mercury__getopt_io__getopt_io__field_types_option_data_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 3,
  mercury__getopt_io__getopt_io__field_types_option_data_0_3,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__getopt_io__getopt_io__field_types_option_data_0_4,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 5,
  mercury__getopt_io__getopt_io__field_types_option_data_0_5,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_6 = {
  (MR_String) "special",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 6,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_7 = {
  (MR_String) "bool_special",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 7,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_8 = {
  (MR_String) "int_special",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 8,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_9 = {
  (MR_String) "string_special",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 9,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_10 = {
  (MR_String) "maybe_string_special",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 10,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_11 = {
  (MR_String) "file_special",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 11,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_data_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_data_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_data_0_2
  },
  {
    (MR_Integer) 4,
    mercury__private_builtin__MR_SECTAG_REMOTE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__getopt_io__getopt_io__field_types_option_error_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__getopt_io__getopt_io__field_types_option_error_1_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_error_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_1 = {
  (MR_String) "requires_argument",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_reason_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_2 = {
  (MR_String) "does_not_allow_argument",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__getopt_io__getopt_io__field_types_option_error_reason_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_3 = {
  (MR_String) "cannot_negate",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_4 = {
  (MR_String) "special_handler_failed",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_5 = {
  (MR_String) "special_handler_missing",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_reason_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_6 = {
  (MR_String) "special_handler_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 6,
  mercury__getopt_io__getopt_io__field_types_option_error_reason_0_6,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_reason_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_7 = {
  (MR_String) "requires_numeric_argument",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 7,
  mercury__getopt_io__getopt_io__field_types_option_error_reason_0_7,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_reason_0_8[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_8 = {
  (MR_String) "file_special_cannot_open",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 8,
  mercury__getopt_io__getopt_io__field_types_option_error_reason_0_8,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_reason_0_9[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_9 = {
  (MR_String) "file_special_cannot_read",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 9,
  mercury__getopt_io__getopt_io__field_types_option_error_reason_0_9,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_reason_0_10[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_10 = {
  (MR_String) "file_special_contains_non_option_args",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 10,
  mercury__getopt_io__getopt_io__field_types_option_error_reason_0_10,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_error_reason_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_error_reason_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_error_reason_0_2
  },
  {
    (MR_Integer) 4,
    mercury__private_builtin__MR_SECTAG_REMOTE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__getopt_io__getopt_io__field_types_option_ops_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__getopt_io__getopt_io__field_types_option_ops_1_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__getopt_io__getopt_io__field_types_option_ops_1_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  mercury__getopt_io__getopt_io__field_types_option_ops_1_3,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_1_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__getopt_io__getopt_io__field_types_option_ops_internal_1_0,
  mercury__getopt_io__getopt_io__field_names_option_ops_internal_1_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_internal_1_0[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_internal_1_0
};

static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_option_ops_internal_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_special_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_4__pseudo_1__plain_getopt_io__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0__pseudo_getopt_io__pti_maybe_option_table_1__pseudo_1
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_ops_special_1_1 = {
  (MR_String) "notrack",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__getopt_io__getopt_io__field_types_option_ops_special_1_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__getopt_io__getopt_io__field_types_option_ops_special_1_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_special_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_special_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__getopt_io__getopt_io__field_types_option_ops_track_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_track_1_0[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_track_1_0
};

static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_option_ops_track_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
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
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_special_data_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_1 = {
  (MR_String) "bool",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__getopt_io__getopt_io__field_types_special_data_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_special_data_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_2 = {
  (MR_String) "int",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__getopt_io__getopt_io__field_types_special_data_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_special_data_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_3 = {
  (MR_String) "string",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  mercury__getopt_io__getopt_io__field_types_special_data_0_3,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_special_data_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt_io__maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_4 = {
  (MR_String) "maybe_string",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__getopt_io__getopt_io__field_types_special_data_0_4,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__getopt_io__getopt_io__du_stag_ordered_special_data_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_special_data_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_special_data_0_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

static MR_bool MR_CALL 
mercury__getopt_io____Unify____maybe_option_table_1_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3)
{
  {
    MR_bool mercury__getopt_io__succeeded;

    {
      mercury__getopt_io__succeeded = mercury__getopt_io____Unify____maybe_option_table_1_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), ((MR_Word) mercury__getopt_io__wrapper_arg_2), ((MR_Word) mercury__getopt_io__wrapper_arg_3));
    }
    return mercury__getopt_io__succeeded;
  }
}

static void MR_CALL 
mercury__getopt_io____Compare____maybe_option_table_1_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box * mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3,
  MR_Box mercury__getopt_io__wrapper_arg_4)
{
  {
    MR_Word mercury__getopt_io__conv0_HeadVar__1_1;

    {
      mercury__getopt_io____Compare____maybe_option_table_1_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), &mercury__getopt_io__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt_io__wrapper_arg_3), ((MR_Word) mercury__getopt_io__wrapper_arg_4));
    }
    *mercury__getopt_io__wrapper_arg_2 = ((MR_Box) (mercury__getopt_io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt_io____Unify____maybe_option_table_se_1_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3)
{
  {
    MR_bool mercury__getopt_io__succeeded;

    {
      mercury__getopt_io__succeeded = mercury__getopt_io____Unify____maybe_option_table_se_1_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), ((MR_Word) mercury__getopt_io__wrapper_arg_2), ((MR_Word) mercury__getopt_io__wrapper_arg_3));
    }
    return mercury__getopt_io__succeeded;
  }
}

static void MR_CALL 
mercury__getopt_io____Compare____maybe_option_table_se_1_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box * mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3,
  MR_Box mercury__getopt_io__wrapper_arg_4)
{
  {
    MR_Word mercury__getopt_io__conv0_HeadVar__1_1;

    {
      mercury__getopt_io____Compare____maybe_option_table_se_1_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), &mercury__getopt_io__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt_io__wrapper_arg_3), ((MR_Word) mercury__getopt_io__wrapper_arg_4));
    }
    *mercury__getopt_io__wrapper_arg_2 = ((MR_Box) (mercury__getopt_io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_data_0_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box mercury__getopt_io__wrapper_arg_2)
{
  {
    MR_bool mercury__getopt_io__succeeded;

    {
      mercury__getopt_io__succeeded = mercury__getopt_io____Unify____option_data_0_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), ((MR_Word) mercury__getopt_io__wrapper_arg_2));
    }
    return mercury__getopt_io__succeeded;
  }
}

static void MR_CALL 
mercury__getopt_io____Compare____option_data_0_0_10001(
  MR_Box * mercury__getopt_io__wrapper_arg_1,
  MR_Box mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3)
{
  {
    MR_Word mercury__getopt_io__conv0_HeadVar__1_1;

    {
      mercury__getopt_io____Compare____option_data_0_0(&mercury__getopt_io__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt_io__wrapper_arg_2), ((MR_Word) mercury__getopt_io__wrapper_arg_3));
    }
    *mercury__getopt_io__wrapper_arg_1 = ((MR_Box) (mercury__getopt_io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_error_1_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3)
{
  {
    MR_bool mercury__getopt_io__succeeded;

    {
      mercury__getopt_io__succeeded = mercury__getopt_io____Unify____option_error_1_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), ((MR_Word) mercury__getopt_io__wrapper_arg_2), ((MR_Word) mercury__getopt_io__wrapper_arg_3));
    }
    return mercury__getopt_io__succeeded;
  }
}

static void MR_CALL 
mercury__getopt_io____Compare____option_error_1_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box * mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3,
  MR_Box mercury__getopt_io__wrapper_arg_4)
{
  {
    MR_Word mercury__getopt_io__conv0_HeadVar__1_1;

    {
      mercury__getopt_io____Compare____option_error_1_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), &mercury__getopt_io__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt_io__wrapper_arg_3), ((MR_Word) mercury__getopt_io__wrapper_arg_4));
    }
    *mercury__getopt_io__wrapper_arg_2 = ((MR_Box) (mercury__getopt_io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_error_reason_0_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box mercury__getopt_io__wrapper_arg_2)
{
  {
    MR_bool mercury__getopt_io__succeeded;

    {
      mercury__getopt_io__succeeded = mercury__getopt_io____Unify____option_error_reason_0_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), ((MR_Word) mercury__getopt_io__wrapper_arg_2));
    }
    return mercury__getopt_io__succeeded;
  }
}

static void MR_CALL 
mercury__getopt_io____Compare____option_error_reason_0_0_10001(
  MR_Box * mercury__getopt_io__wrapper_arg_1,
  MR_Box mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3)
{
  {
    MR_Word mercury__getopt_io__conv0_HeadVar__1_1;

    {
      mercury__getopt_io____Compare____option_error_reason_0_0(&mercury__getopt_io__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt_io__wrapper_arg_2), ((MR_Word) mercury__getopt_io__wrapper_arg_3));
    }
    *mercury__getopt_io__wrapper_arg_1 = ((MR_Box) (mercury__getopt_io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_1_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3)
{
  {
    MR_bool mercury__getopt_io__succeeded;

    {
      mercury__getopt_io__succeeded = mercury__getopt_io____Unify____option_ops_1_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), ((MR_Word) mercury__getopt_io__wrapper_arg_2), ((MR_Word) mercury__getopt_io__wrapper_arg_3));
    }
    return mercury__getopt_io__succeeded;
  }
}

static void MR_CALL 
mercury__getopt_io____Compare____option_ops_1_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box * mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3,
  MR_Box mercury__getopt_io__wrapper_arg_4)
{
  {
    MR_Word mercury__getopt_io__conv0_HeadVar__1_1;

    {
      mercury__getopt_io____Compare____option_ops_1_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), &mercury__getopt_io__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt_io__wrapper_arg_3), ((MR_Word) mercury__getopt_io__wrapper_arg_4));
    }
    *mercury__getopt_io__wrapper_arg_2 = ((MR_Box) (mercury__getopt_io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_internal_1_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3)
{
  {
    MR_bool mercury__getopt_io__succeeded;

    {
      mercury__getopt_io__succeeded = mercury__getopt_io____Unify____option_ops_internal_1_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), ((MR_Word) mercury__getopt_io__wrapper_arg_2), ((MR_Word) mercury__getopt_io__wrapper_arg_3));
    }
    return mercury__getopt_io__succeeded;
  }
}

static void MR_CALL 
mercury__getopt_io____Compare____option_ops_internal_1_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box * mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3,
  MR_Box mercury__getopt_io__wrapper_arg_4)
{
  {
    MR_Word mercury__getopt_io__conv0_HeadVar__1_1;

    {
      mercury__getopt_io____Compare____option_ops_internal_1_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), &mercury__getopt_io__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt_io__wrapper_arg_3), ((MR_Word) mercury__getopt_io__wrapper_arg_4));
    }
    *mercury__getopt_io__wrapper_arg_2 = ((MR_Box) (mercury__getopt_io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_special_1_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3)
{
  {
    MR_bool mercury__getopt_io__succeeded;

    {
      mercury__getopt_io__succeeded = mercury__getopt_io____Unify____option_ops_special_1_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), ((MR_Word) mercury__getopt_io__wrapper_arg_2), ((MR_Word) mercury__getopt_io__wrapper_arg_3));
    }
    return mercury__getopt_io__succeeded;
  }
}

static void MR_CALL 
mercury__getopt_io____Compare____option_ops_special_1_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box * mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3,
  MR_Box mercury__getopt_io__wrapper_arg_4)
{
  {
    MR_Word mercury__getopt_io__conv0_HeadVar__1_1;

    {
      mercury__getopt_io____Compare____option_ops_special_1_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), &mercury__getopt_io__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt_io__wrapper_arg_3), ((MR_Word) mercury__getopt_io__wrapper_arg_4));
    }
    *mercury__getopt_io__wrapper_arg_2 = ((MR_Box) (mercury__getopt_io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_track_1_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3)
{
  {
    MR_bool mercury__getopt_io__succeeded;

    {
      mercury__getopt_io__succeeded = mercury__getopt_io____Unify____option_ops_track_1_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), ((MR_Word) mercury__getopt_io__wrapper_arg_2), ((MR_Word) mercury__getopt_io__wrapper_arg_3));
    }
    return mercury__getopt_io__succeeded;
  }
}

static void MR_CALL 
mercury__getopt_io____Compare____option_ops_track_1_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box * mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3,
  MR_Box mercury__getopt_io__wrapper_arg_4)
{
  {
    MR_Word mercury__getopt_io__conv0_HeadVar__1_1;

    {
      mercury__getopt_io____Compare____option_ops_track_1_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), &mercury__getopt_io__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt_io__wrapper_arg_3), ((MR_Word) mercury__getopt_io__wrapper_arg_4));
    }
    *mercury__getopt_io__wrapper_arg_2 = ((MR_Box) (mercury__getopt_io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_table_1_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3)
{
  {
    MR_bool mercury__getopt_io__succeeded;

    {
      mercury__getopt_io__succeeded = mercury__getopt_io____Unify____option_table_1_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), ((MR_Word) mercury__getopt_io__wrapper_arg_2), ((MR_Word) mercury__getopt_io__wrapper_arg_3));
    }
    return mercury__getopt_io__succeeded;
  }
}

static void MR_CALL 
mercury__getopt_io____Compare____option_table_1_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box * mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3,
  MR_Box mercury__getopt_io__wrapper_arg_4)
{
  {
    MR_Word mercury__getopt_io__conv0_HeadVar__1_1;

    {
      mercury__getopt_io____Compare____option_table_1_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), &mercury__getopt_io__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt_io__wrapper_arg_3), ((MR_Word) mercury__getopt_io__wrapper_arg_4));
    }
    *mercury__getopt_io__wrapper_arg_2 = ((MR_Box) (mercury__getopt_io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt_io____Unify____special_data_0_0_10001(
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box mercury__getopt_io__wrapper_arg_2)
{
  {
    MR_bool mercury__getopt_io__succeeded;

    {
      mercury__getopt_io__succeeded = mercury__getopt_io____Unify____special_data_0_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), ((MR_Word) mercury__getopt_io__wrapper_arg_2));
    }
    return mercury__getopt_io__succeeded;
  }
}

static void MR_CALL 
mercury__getopt_io____Compare____special_data_0_0_10001(
  MR_Box * mercury__getopt_io__wrapper_arg_1,
  MR_Box mercury__getopt_io__wrapper_arg_2,
  MR_Box mercury__getopt_io__wrapper_arg_3)
{
  {
    MR_Word mercury__getopt_io__conv0_HeadVar__1_1;

    {
      mercury__getopt_io____Compare____special_data_0_0(&mercury__getopt_io__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt_io__wrapper_arg_2), ((MR_Word) mercury__getopt_io__wrapper_arg_3));
    }
    *mercury__getopt_io__wrapper_arg_1 = ((MR_Box) (mercury__getopt_io__conv0_HeadVar__1_1));
  }
}

static MR_Integer MR_CALL 
mercury__getopt_io__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__getopt_io__succeeded;

    return (MR_Integer) 1200;
  }
}

static void MR_CALL 
mercury__getopt_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(
  MR_Box mercury__getopt_io__Flag_5,
  MR_String mercury__getopt_io__Option_6,
  MR_String mercury__getopt_io__Arg_7,
  MR_Word * mercury__getopt_io__Result_8)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Word mercury__getopt_io__Reason_9;
    MR_Word mercury__getopt_io__Error_10;

    {
      mercury__getopt_io__Reason_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_9, 1) = ((MR_Box) (mercury__getopt_io__Arg_7));
    }
    {
      mercury__getopt_io__Error_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_10, 0) = mercury__getopt_io__Flag_5;
      MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_10, 1) = ((MR_Box) (mercury__getopt_io__Option_6));
      MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_10, 2) = ((MR_Box) (mercury__getopt_io__Reason_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *mercury__getopt_io__Result_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_10));
    }
  }
}

static void MR_CALL 
mercury__getopt_io__skip_to_word_end__ho18_4_p_in__string_0(
  MR_String mercury__getopt_io__V_6_6,
  MR_Integer mercury__getopt_io__V_7_7,
  MR_Integer * mercury__getopt_io__V_8_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__getopt_io__succeeded;
        MR_Integer mercury__getopt_io__V_9_9;
        MR_Char mercury__getopt_io__V_10_10;

{
#define MR_PROC_LABEL mercury__getopt_io__skip_to_word_end__ho18_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__getopt_io__V_6_6 ;
	Index =  mercury__getopt_io__V_7_7 ;
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
	 mercury__getopt_io__V_9_9  = NextIndex;
	 mercury__getopt_io__V_10_10  = Ch;
	}
mercury__getopt_io__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__getopt_io__succeeded)
          {
            {
              mercury__getopt_io__succeeded = mercury__char__is_whitespace_1_p_0(mercury__getopt_io__V_10_10);
            }
            if (mercury__getopt_io__succeeded)
              *mercury__getopt_io__V_8_8 = mercury__getopt_io__V_7_7;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__getopt_io__next_value_of_V_7_7 = mercury__getopt_io__V_9_9;

                  mercury__getopt_io__V_7_7 = mercury__getopt_io__next_value_of_V_7_7;
                }
                continue;
              }
          }
        else
          *mercury__getopt_io__V_8_8 = mercury__getopt_io__V_7_7;
      }
      break;
    }
}

static void MR_CALL 
mercury__getopt_io__skip_to_next_word_start__ho17_4_p_in__string_0(
  MR_String mercury__getopt_io__V_6_6,
  MR_Integer mercury__getopt_io__V_7_7,
  MR_Integer * mercury__getopt_io__V_8_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__getopt_io__succeeded;
        MR_Integer mercury__getopt_io__V_9_9;
        MR_Char mercury__getopt_io__V_10_10;

{
#define MR_PROC_LABEL mercury__getopt_io__skip_to_next_word_start__ho17_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__getopt_io__V_6_6 ;
	Index =  mercury__getopt_io__V_7_7 ;
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
	 mercury__getopt_io__V_9_9  = NextIndex;
	 mercury__getopt_io__V_10_10  = Ch;
	}
mercury__getopt_io__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__getopt_io__succeeded)
          {
            mercury__getopt_io__succeeded = mercury__char__is_whitespace_1_p_0(mercury__getopt_io__V_10_10);
          }
        if (mercury__getopt_io__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__getopt_io__next_value_of_V_7_7 = mercury__getopt_io__V_9_9;

              mercury__getopt_io__V_7_7 = mercury__getopt_io__next_value_of_V_7_7;
            }
            continue;
          }
        else
          *mercury__getopt_io__V_8_8 = mercury__getopt_io__V_7_7;
      }
      break;
    }
}

static void MR_CALL 
mercury__getopt_io__words_loop__ho16_4_p_in__string_0(
  MR_String mercury__getopt_io__V_6_6,
  MR_Integer mercury__getopt_io__V_7_7,
  MR_Word * mercury__getopt_io__V_8_8)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Integer mercury__getopt_io__V_9_9;

    {
      mercury__getopt_io__skip_to_word_end__ho18_4_p_in__string_0(mercury__getopt_io__V_6_6, mercury__getopt_io__V_7_7, &mercury__getopt_io__V_9_9);
    }
    mercury__getopt_io__succeeded = (mercury__getopt_io__V_9_9 == mercury__getopt_io__V_7_7);
    if (mercury__getopt_io__succeeded)
      *mercury__getopt_io__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_String mercury__getopt_io__V_10_10;
        MR_Integer mercury__getopt_io__V_11_11;

{
#define MR_PROC_LABEL mercury__getopt_io__words_loop__ho16_4_p_in__string_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__getopt_io__V_6_6 ;
	Start =  mercury__getopt_io__V_7_7 ;
	End =  mercury__getopt_io__V_9_9 ;
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
	 mercury__getopt_io__V_10_10  = SubString;
}
        {
          mercury__getopt_io__skip_to_next_word_start__ho17_4_p_in__string_0(mercury__getopt_io__V_6_6, mercury__getopt_io__V_9_9, &mercury__getopt_io__V_11_11);
        }
        mercury__getopt_io__succeeded = (mercury__getopt_io__V_9_9 == mercury__getopt_io__V_11_11);
        if (mercury__getopt_io__succeeded)
          {
            MR_Word mercury__getopt_io__V_13_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__getopt_io__V_8_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__V_10_10));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__getopt_io__V_13_12));
            }
          }
        else
          {
            MR_Word mercury__getopt_io__V_12_13;

            {
              mercury__getopt_io__words_loop__ho16_4_p_in__string_0(mercury__getopt_io__V_6_6, mercury__getopt_io__V_11_11, &mercury__getopt_io__V_12_13);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__getopt_io__V_8_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__V_10_10));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__getopt_io__V_12_13));
            }
          }
      }
  }
}

static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_2(
  void * mercury__getopt_io__env_ptr_arg)
{
  {
    struct mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0_s * mercury__getopt_io__env_ptr = (struct mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0_s *) mercury__getopt_io__env_ptr_arg;

    (mercury__getopt_io__env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__OptionData_7 = ((MR_Word) (mercury__getopt_io__env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__conv1_OptionData_7);
    {
      mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_1(mercury__getopt_io__env_ptr);
    }
  }
}

static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_1(
  void * mercury__getopt_io__env_ptr_arg)
{
  {
    struct mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0_s * mercury__getopt_io__env_ptr = (struct mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0_s *) mercury__getopt_io__env_ptr_arg;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *((mercury__getopt_io__env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__LambdaHeadVar__1_10) = base;
      MR_hl_field(MR_mktag(0), base, 0) = (mercury__getopt_io__env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__Option_6;
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((mercury__getopt_io__env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__OptionData_7));
    }
    {
      ((mercury__getopt_io__env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__cont)((mercury__getopt_io__env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_12,
  MR_Word mercury__getopt_io__OptionDefaultsPred_3,
  MR_Word * mercury__getopt_io__LambdaHeadVar__1_10,
  MR_Cont mercury__getopt_io__cont,
  void * mercury__getopt_io__cont_env_ptr)
{
  {
    struct mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0_s mercury__getopt_io__env;

    (mercury__getopt_io__env).mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__LambdaHeadVar__1_10 = mercury__getopt_io__LambdaHeadVar__1_10;
    (mercury__getopt_io__env).mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__cont = mercury__getopt_io__cont;
    (mercury__getopt_io__env).mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__cont_env_ptr = mercury__getopt_io__cont_env_ptr;
    {
      MR_bool mercury__getopt_io__succeeded;
      void MR_CALL (* mercury__getopt_io__func_0)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionDefaultsPred_3, (MR_Integer) 1)));

      {
        mercury__getopt_io__func_0(((MR_Box) mercury__getopt_io__OptionDefaultsPred_3), &(mercury__getopt_io__env).mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__Option_6, &(mercury__getopt_io__env).mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__conv1_OptionData_7, mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_2, &mercury__getopt_io__env);
      }
    }
  }
}

static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_2(
  void * mercury__getopt_io__env_ptr_arg)
{
  {
    struct mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0_s * mercury__getopt_io__env_ptr = (struct mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0_s *) mercury__getopt_io__env_ptr_arg;

    (mercury__getopt_io__env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__OptionData_7 = ((MR_Word) (mercury__getopt_io__env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__conv1_OptionData_7);
    {
      mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_1(mercury__getopt_io__env_ptr);
    }
  }
}

static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_1(
  void * mercury__getopt_io__env_ptr_arg)
{
  {
    struct mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0_s * mercury__getopt_io__env_ptr = (struct mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0_s *) mercury__getopt_io__env_ptr_arg;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *((mercury__getopt_io__env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__LambdaHeadVar__1_10) = base;
      MR_hl_field(MR_mktag(0), base, 0) = (mercury__getopt_io__env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__Option_6;
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((mercury__getopt_io__env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__OptionData_7));
    }
    {
      ((mercury__getopt_io__env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__cont)((mercury__getopt_io__env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_12,
  MR_Word mercury__getopt_io__OptionDefaultsPred_3,
  MR_Word * mercury__getopt_io__LambdaHeadVar__1_10,
  MR_Cont mercury__getopt_io__cont,
  void * mercury__getopt_io__cont_env_ptr)
{
  {
    struct mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0_s mercury__getopt_io__env;

    (mercury__getopt_io__env).mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__LambdaHeadVar__1_10 = mercury__getopt_io__LambdaHeadVar__1_10;
    (mercury__getopt_io__env).mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__cont = mercury__getopt_io__cont;
    (mercury__getopt_io__env).mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__cont_env_ptr = mercury__getopt_io__cont_env_ptr;
    {
      MR_bool mercury__getopt_io__succeeded;
      void MR_CALL (* mercury__getopt_io__func_0)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionDefaultsPred_3, (MR_Integer) 1)));

      {
        mercury__getopt_io__func_0(((MR_Box) mercury__getopt_io__OptionDefaultsPred_3), &(mercury__getopt_io__env).mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__Option_6, &(mercury__getopt_io__env).mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__conv1_OptionData_7, mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_2, &mercury__getopt_io__env);
      }
    }
  }
}

void MR_CALL 
mercury__getopt_io____Compare____special_data_0_0(
  MR_Word * mercury__getopt_io__HeadVar__1_1,
  MR_Word mercury__getopt_io__HeadVar__2_2,
  MR_Word mercury__getopt_io__HeadVar__3_3)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Integer mercury__getopt_io__CastX_44 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;
    MR_Integer mercury__getopt_io__CastY_45 = (MR_Integer) mercury__getopt_io__HeadVar__3_3;

    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_44 == mercury__getopt_io__CastY_45);
    if (mercury__getopt_io__succeeded)
      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__getopt_io__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mercury__getopt_io__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mercury__getopt_io__Var_54 = (MR_Integer) mercury__getopt_io__Var_50;
                  MR_Integer mercury__getopt_io__Var_55 = (MR_Integer) mercury__getopt_io__Var_10;

                  mercury__getopt_io__succeeded = (mercury__getopt_io__Var_54 < mercury__getopt_io__Var_55);
                  if (mercury__getopt_io__succeeded)
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                  else
                    {
                      mercury__getopt_io__succeeded = (mercury__getopt_io__Var_54 == mercury__getopt_io__Var_55);
                      if (mercury__getopt_io__succeeded)
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    }
                }
                break;
              case (MR_Integer) 2:
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mercury__getopt_io__Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer mercury__getopt_io__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));

                  mercury__getopt_io__succeeded = (mercury__getopt_io__Var_51 < mercury__getopt_io__Var_21);
                  if (mercury__getopt_io__succeeded)
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                  else
                    {
                      mercury__getopt_io__succeeded = (mercury__getopt_io__Var_51 == mercury__getopt_io__Var_21);
                      if (mercury__getopt_io__succeeded)
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String mercury__getopt_io__Var_53 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_String mercury__getopt_io__Var_32 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer mercury__getopt_io__V_7_65;

{
#define MR_PROC_LABEL mercury__getopt_io____Compare____special_data_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt_io__Var_53 ;
	S2 =  mercury__getopt_io__Var_32 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__getopt_io__V_7_65  = Res;
}
                          mercury__getopt_io__succeeded = (mercury__getopt_io__V_7_65 < (MR_Integer) 0);
                          if (mercury__getopt_io__succeeded)
                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                          else
                            {
                              mercury__getopt_io__succeeded = (mercury__getopt_io__V_7_65 == (MR_Integer) 0);
                              if (mercury__getopt_io__succeeded)
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
                              else
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                            }
                        }
                        break;
                      case (MR_Integer) 1:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mercury__getopt_io__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word mercury__getopt_io__TypeInfo_46_46 = (MR_Word) &mercury__getopt_io_scalar_common_1[1];
                          MR_Word mercury__getopt_io__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__builtin__compare_3_p_0(mercury__getopt_io__TypeInfo_46_46, mercury__getopt_io__HeadVar__1_1, ((MR_Box) (mercury__getopt_io__Var_52)), ((MR_Box) (mercury__getopt_io__Var_43)));
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
mercury__getopt_io____Unify____special_data_0_0(
  MR_Word mercury__getopt_io__HeadVar__1_1,
  MR_Word mercury__getopt_io__HeadVar__2_2)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Integer mercury__getopt_io__CastX_13 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
    MR_Integer mercury__getopt_io__CastY_14 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_13 == mercury__getopt_io__CastY_14);
    if (mercury__getopt_io__succeeded)
      mercury__getopt_io__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer mercury__getopt_io__CastX_3 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
            MR_Integer mercury__getopt_io__CastY_4 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

            mercury__getopt_io__succeeded = (mercury__getopt_io__CastY_4 == mercury__getopt_io__CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__getopt_io__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__getopt_io__Var_6;

            mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__getopt_io__succeeded)
              {
                mercury__getopt_io__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
                mercury__getopt_io__succeeded = (mercury__getopt_io__Var_5 == mercury__getopt_io__Var_6);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mercury__getopt_io__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mercury__getopt_io__Var_8;

            mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mercury__getopt_io__succeeded)
              {
                mercury__getopt_io__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
                mercury__getopt_io__succeeded = (mercury__getopt_io__Var_7 == mercury__getopt_io__Var_8);
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String mercury__getopt_io__Var_9 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
                MR_String mercury__getopt_io__Var_10;

                mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (mercury__getopt_io__succeeded)
                  {
                    mercury__getopt_io__Var_10 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__getopt_io__succeeded = (strcmp(mercury__getopt_io__Var_9, mercury__getopt_io__Var_10) == 0);
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mercury__getopt_io__TypeInfo_15_15;
                MR_Word mercury__getopt_io__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mercury__getopt_io__Var_12;

                mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (mercury__getopt_io__succeeded)
                  {
                    mercury__getopt_io__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__getopt_io__TypeInfo_15_15 = (MR_Word) &mercury__getopt_io_scalar_common_1[1];
                    {
                      mercury__getopt_io__succeeded = mercury__builtin__unify_2_p_0(mercury__getopt_io__TypeInfo_15_15, ((MR_Box) (mercury__getopt_io__Var_11)), ((MR_Box) (mercury__getopt_io__Var_12)));
                    }
                  }
              }
              break;
          }
          break;
      }
    return mercury__getopt_io__succeeded;
  }
}

void MR_CALL 
mercury__getopt_io____Compare____option_table_1_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_6,
  MR_Word * mercury__getopt_io__HeadVar__1_1,
  MR_Word mercury__getopt_io__HeadVar__2_2,
  MR_Word mercury__getopt_io__HeadVar__3_3)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Word mercury__getopt_io__TypeCtorInfo_7_7 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    MR_Word mercury__getopt_io__Cast_HeadVar1_4 = mercury__getopt_io__HeadVar__2_2;
    MR_Word mercury__getopt_io__Cast_HeadVar2_5 = mercury__getopt_io__HeadVar__3_3;

    {
      mercury__tree234____Compare____tree234_2_0(mercury__getopt_io__TypeInfo_for_OptionType_6, mercury__getopt_io__TypeCtorInfo_7_7, mercury__getopt_io__HeadVar__1_1, mercury__getopt_io__Cast_HeadVar1_4, mercury__getopt_io__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__getopt_io____Unify____option_table_1_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_5,
  MR_Word mercury__getopt_io__HeadVar__1_1,
  MR_Word mercury__getopt_io__HeadVar__2_2)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Word mercury__getopt_io__TypeCtorInfo_6_6 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    MR_Word mercury__getopt_io__Cast_HeadVar1_3 = mercury__getopt_io__HeadVar__1_1;
    MR_Word mercury__getopt_io__Cast_HeadVar2_4 = mercury__getopt_io__HeadVar__2_2;

    {
      mercury__getopt_io__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__getopt_io__TypeInfo_for_OptionType_5, mercury__getopt_io__TypeCtorInfo_6_6, mercury__getopt_io__Cast_HeadVar1_3, mercury__getopt_io__Cast_HeadVar2_4);
    }
    return mercury__getopt_io__succeeded;
  }
}

void MR_CALL 
mercury__getopt_io____Compare____option_ops_track_1_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_14,
  MR_Word * mercury__getopt_io__HeadVar__1_1,
  MR_Word mercury__getopt_io__HeadVar__2_2,
  MR_Word mercury__getopt_io__HeadVar__3_3)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Integer mercury__getopt_io__CastX_12 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;
    MR_Integer mercury__getopt_io__CastY_13 = (MR_Integer) mercury__getopt_io__HeadVar__3_3;

    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_12 == mercury__getopt_io__CastY_13);
    if (mercury__getopt_io__succeeded)
      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mercury__getopt_io__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__getopt_io__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__getopt_io__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mercury__getopt_io__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mercury__getopt_io__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mercury__getopt_io__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mercury__getopt_io__Var_10;

        {
          mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt_io__Var_10, (MR_Word) mercury__getopt_io__Var_4, (MR_Word) mercury__getopt_io__Var_7);
        }
        mercury__getopt_io__succeeded = (mercury__getopt_io__Var_10 == (MR_Integer) 0);
        mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
        if (mercury__getopt_io__succeeded)
          *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__Var_10;
        else
          {
            MR_Word mercury__getopt_io__Var_11;

            {
              mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt_io__Var_11, (MR_Word) mercury__getopt_io__Var_5, (MR_Word) mercury__getopt_io__Var_8);
            }
            mercury__getopt_io__succeeded = (mercury__getopt_io__Var_11 == (MR_Integer) 0);
            mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
            if (mercury__getopt_io__succeeded)
              *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__Var_11;
            else
              {
                mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt_io__HeadVar__1_1, (MR_Word) mercury__getopt_io__Var_6, (MR_Word) mercury__getopt_io__Var_9);
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_track_1_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_11,
  MR_Word mercury__getopt_io__HeadVar__1_1,
  MR_Word mercury__getopt_io__HeadVar__2_2)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Integer mercury__getopt_io__CastX_9 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
    MR_Integer mercury__getopt_io__CastY_10 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_9 == mercury__getopt_io__CastY_10);
    if (mercury__getopt_io__succeeded)
      mercury__getopt_io__succeeded = MR_TRUE;
    else
      {
        MR_Word mercury__getopt_io__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__getopt_io__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__getopt_io__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mercury__getopt_io__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__getopt_io__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__getopt_io__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));

        {
          mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__Var_3, (MR_Word) mercury__getopt_io__Var_6);
        }
        if (mercury__getopt_io__succeeded)
          {
            {
              mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__Var_4, (MR_Word) mercury__getopt_io__Var_7);
            }
            if (mercury__getopt_io__succeeded)
              {
                mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__Var_5, (MR_Word) mercury__getopt_io__Var_8);
              }
          }
      }
    return mercury__getopt_io__succeeded;
  }
}

void MR_CALL 
mercury__getopt_io____Compare____option_ops_special_1_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_18,
  MR_Word * mercury__getopt_io__HeadVar__1_1,
  MR_Word mercury__getopt_io__HeadVar__2_2,
  MR_Word mercury__getopt_io__HeadVar__3_3)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Integer mercury__getopt_io__CastX_16 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;
    MR_Integer mercury__getopt_io__CastY_17 = (MR_Integer) mercury__getopt_io__HeadVar__3_3;

    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_16 == mercury__getopt_io__CastY_17);
    if (mercury__getopt_io__succeeded)
      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__getopt_io__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mercury__getopt_io__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt_io__HeadVar__1_1, (MR_Word) mercury__getopt_io__Var_39, (MR_Word) mercury__getopt_io__Var_8);
                  }
                }
                break;
              case (MR_Integer) 2:
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mercury__getopt_io__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mercury__getopt_io__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt_io__HeadVar__1_1, (MR_Word) mercury__getopt_io__Var_40, (MR_Word) mercury__getopt_io__Var_15);
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
mercury__getopt_io____Unify____option_ops_special_1_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_11,
  MR_Word mercury__getopt_io__HeadVar__1_1,
  MR_Word mercury__getopt_io__HeadVar__2_2)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Integer mercury__getopt_io__CastX_9 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
    MR_Integer mercury__getopt_io__CastY_10 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_9 == mercury__getopt_io__CastY_10);
    if (mercury__getopt_io__succeeded)
      mercury__getopt_io__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer mercury__getopt_io__CastX_3 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
            MR_Integer mercury__getopt_io__CastY_4 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

            mercury__getopt_io__succeeded = (mercury__getopt_io__CastY_4 == mercury__getopt_io__CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__getopt_io__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__getopt_io__Var_6;

            mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__getopt_io__succeeded)
              {
                mercury__getopt_io__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
                {
                  mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__Var_5, (MR_Word) mercury__getopt_io__Var_6);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mercury__getopt_io__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__getopt_io__Var_8;

            mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mercury__getopt_io__succeeded)
              {
                mercury__getopt_io__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
                {
                  mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__Var_7, (MR_Word) mercury__getopt_io__Var_8);
                }
              }
          }
          break;
      }
    return mercury__getopt_io__succeeded;
  }
}

void MR_CALL 
mercury__getopt_io____Compare____option_ops_internal_1_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_14,
  MR_Word * mercury__getopt_io__HeadVar__1_1,
  MR_Word mercury__getopt_io__HeadVar__2_2,
  MR_Word mercury__getopt_io__HeadVar__3_3)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Integer mercury__getopt_io__CastX_12 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;
    MR_Integer mercury__getopt_io__CastY_13 = (MR_Integer) mercury__getopt_io__HeadVar__3_3;

    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_12 == mercury__getopt_io__CastY_13);
    if (mercury__getopt_io__succeeded)
      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mercury__getopt_io__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__getopt_io__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__getopt_io__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mercury__getopt_io__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mercury__getopt_io__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mercury__getopt_io__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mercury__getopt_io__Var_10;

        {
          mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt_io__Var_10, (MR_Word) mercury__getopt_io__Var_4, (MR_Word) mercury__getopt_io__Var_7);
        }
        mercury__getopt_io__succeeded = (mercury__getopt_io__Var_10 == (MR_Integer) 0);
        mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
        if (mercury__getopt_io__succeeded)
          *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__Var_10;
        else
          {
            MR_Word mercury__getopt_io__Var_11;

            {
              mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt_io__Var_11, (MR_Word) mercury__getopt_io__Var_5, (MR_Word) mercury__getopt_io__Var_8);
            }
            mercury__getopt_io__succeeded = (mercury__getopt_io__Var_11 == (MR_Integer) 0);
            mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
            if (mercury__getopt_io__succeeded)
              *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__Var_11;
            else
              {
                mercury__getopt_io____Compare____option_ops_special_1_0(mercury__getopt_io__TypeInfo_for_OptionType_14, mercury__getopt_io__HeadVar__1_1, mercury__getopt_io__Var_6, mercury__getopt_io__Var_9);
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_internal_1_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_11,
  MR_Word mercury__getopt_io__HeadVar__1_1,
  MR_Word mercury__getopt_io__HeadVar__2_2)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Integer mercury__getopt_io__CastX_9 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
    MR_Integer mercury__getopt_io__CastY_10 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_9 == mercury__getopt_io__CastY_10);
    if (mercury__getopt_io__succeeded)
      mercury__getopt_io__succeeded = MR_TRUE;
    else
      {
        MR_Word mercury__getopt_io__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__getopt_io__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__getopt_io__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mercury__getopt_io__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__getopt_io__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__getopt_io__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));

        {
          mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__Var_3, (MR_Word) mercury__getopt_io__Var_6);
        }
        if (mercury__getopt_io__succeeded)
          {
            {
              mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__Var_4, (MR_Word) mercury__getopt_io__Var_7);
            }
            if (mercury__getopt_io__succeeded)
              {
                mercury__getopt_io__succeeded = mercury__getopt_io____Unify____option_ops_special_1_0(mercury__getopt_io__TypeInfo_for_OptionType_11, mercury__getopt_io__Var_5, mercury__getopt_io__Var_8);
              }
          }
      }
    return mercury__getopt_io__succeeded;
  }
}

void MR_CALL 
mercury__getopt_io____Compare____option_ops_1_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_128,
  MR_Word * mercury__getopt_io__HeadVar__1_1,
  MR_Word mercury__getopt_io__HeadVar__2_2,
  MR_Word mercury__getopt_io__HeadVar__3_3)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Integer mercury__getopt_io__CastX_126 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;
    MR_Integer mercury__getopt_io__CastY_127 = (MR_Integer) mercury__getopt_io__HeadVar__3_3;

    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_126 == mercury__getopt_io__CastY_127);
    if (mercury__getopt_io__succeeded)
      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word mercury__getopt_io__Var_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word mercury__getopt_io__Var_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__getopt_io__Var_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word mercury__getopt_io__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mercury__getopt_io__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mercury__getopt_io__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mercury__getopt_io__Var_10;

                  {
                    mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt_io__Var_10, (MR_Word) mercury__getopt_io__Var_197, (MR_Word) mercury__getopt_io__Var_7);
                  }
                  mercury__getopt_io__succeeded = (mercury__getopt_io__Var_10 == (MR_Integer) 0);
                  mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
                  if (mercury__getopt_io__succeeded)
                    *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__Var_10;
                  else
                    {
                      MR_Word mercury__getopt_io__Var_11;

                      {
                        mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt_io__Var_11, (MR_Word) mercury__getopt_io__Var_196, (MR_Word) mercury__getopt_io__Var_8);
                      }
                      mercury__getopt_io__succeeded = (mercury__getopt_io__Var_11 == (MR_Integer) 0);
                      mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
                      if (mercury__getopt_io__succeeded)
                        *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__Var_11;
                      else
                        {
                          mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt_io__HeadVar__1_1, (MR_Word) mercury__getopt_io__Var_195, (MR_Word) mercury__getopt_io__Var_9);
                        }
                    }
                }
                break;
              case (MR_Integer) 1:
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__getopt_io__Var_198 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 3)));
            MR_Word mercury__getopt_io__Var_199 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word mercury__getopt_io__Var_200 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__getopt_io__Var_201 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mercury__getopt_io__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mercury__getopt_io__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mercury__getopt_io__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mercury__getopt_io__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 3)));
                  MR_Word mercury__getopt_io__Var_47;

                  {
                    mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt_io__Var_47, (MR_Word) mercury__getopt_io__Var_201, (MR_Word) mercury__getopt_io__Var_43);
                  }
                  mercury__getopt_io__succeeded = (mercury__getopt_io__Var_47 == (MR_Integer) 0);
                  mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
                  if (mercury__getopt_io__succeeded)
                    *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__Var_47;
                  else
                    {
                      MR_Word mercury__getopt_io__Var_48;

                      {
                        mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt_io__Var_48, (MR_Word) mercury__getopt_io__Var_200, (MR_Word) mercury__getopt_io__Var_44);
                      }
                      mercury__getopt_io__succeeded = (mercury__getopt_io__Var_48 == (MR_Integer) 0);
                      mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
                      if (mercury__getopt_io__succeeded)
                        *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__Var_48;
                      else
                        {
                          MR_Word mercury__getopt_io__Var_49;

                          {
                            mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt_io__Var_49, (MR_Word) mercury__getopt_io__Var_199, (MR_Word) mercury__getopt_io__Var_45);
                          }
                          mercury__getopt_io__succeeded = (mercury__getopt_io__Var_49 == (MR_Integer) 0);
                          mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
                          if (mercury__getopt_io__succeeded)
                            *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__Var_49;
                          else
                            {
                              mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt_io__HeadVar__1_1, (MR_Word) mercury__getopt_io__Var_198, (MR_Word) mercury__getopt_io__Var_46);
                            }
                        }
                    }
                }
                break;
              case (MR_Integer) 2:
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mercury__getopt_io__Var_202 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word mercury__getopt_io__Var_203 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__getopt_io__Var_204 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mercury__getopt_io__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mercury__getopt_io__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mercury__getopt_io__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mercury__getopt_io__Var_84;

                  {
                    mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt_io__Var_84, (MR_Word) mercury__getopt_io__Var_204, (MR_Word) mercury__getopt_io__Var_81);
                  }
                  mercury__getopt_io__succeeded = (mercury__getopt_io__Var_84 == (MR_Integer) 0);
                  mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
                  if (mercury__getopt_io__succeeded)
                    *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__Var_84;
                  else
                    {
                      MR_Word mercury__getopt_io__Var_85;

                      {
                        mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt_io__Var_85, (MR_Word) mercury__getopt_io__Var_203, (MR_Word) mercury__getopt_io__Var_82);
                      }
                      mercury__getopt_io__succeeded = (mercury__getopt_io__Var_85 == (MR_Integer) 0);
                      mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
                      if (mercury__getopt_io__succeeded)
                        *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__Var_85;
                      else
                        {
                          mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt_io__HeadVar__1_1, (MR_Word) mercury__getopt_io__Var_202, (MR_Word) mercury__getopt_io__Var_83);
                        }
                    }
                }
                break;
              case (MR_Integer) 3:
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word mercury__getopt_io__Var_205 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 3)));
            MR_Word mercury__getopt_io__Var_206 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word mercury__getopt_io__Var_207 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__getopt_io__Var_208 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word mercury__getopt_io__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mercury__getopt_io__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mercury__getopt_io__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mercury__getopt_io__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 3)));
                  MR_Word mercury__getopt_io__Var_123;

                  {
                    mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt_io__Var_123, (MR_Word) mercury__getopt_io__Var_208, (MR_Word) mercury__getopt_io__Var_119);
                  }
                  mercury__getopt_io__succeeded = (mercury__getopt_io__Var_123 == (MR_Integer) 0);
                  mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
                  if (mercury__getopt_io__succeeded)
                    *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__Var_123;
                  else
                    {
                      MR_Word mercury__getopt_io__Var_124;

                      {
                        mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt_io__Var_124, (MR_Word) mercury__getopt_io__Var_207, (MR_Word) mercury__getopt_io__Var_120);
                      }
                      mercury__getopt_io__succeeded = (mercury__getopt_io__Var_124 == (MR_Integer) 0);
                      mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
                      if (mercury__getopt_io__succeeded)
                        *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__Var_124;
                      else
                        {
                          MR_Word mercury__getopt_io__Var_125;

                          {
                            mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt_io__Var_125, (MR_Word) mercury__getopt_io__Var_206, (MR_Word) mercury__getopt_io__Var_121);
                          }
                          mercury__getopt_io__succeeded = (mercury__getopt_io__Var_125 == (MR_Integer) 0);
                          mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
                          if (mercury__getopt_io__succeeded)
                            *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__Var_125;
                          else
                            {
                              mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt_io__HeadVar__1_1, (MR_Word) mercury__getopt_io__Var_205, (MR_Word) mercury__getopt_io__Var_122);
                            }
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
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_33,
  MR_Word mercury__getopt_io__HeadVar__1_1,
  MR_Word mercury__getopt_io__HeadVar__2_2)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Integer mercury__getopt_io__CastX_31 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
    MR_Integer mercury__getopt_io__CastY_32 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_31 == mercury__getopt_io__CastY_32);
    if (mercury__getopt_io__succeeded)
      mercury__getopt_io__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word mercury__getopt_io__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__getopt_io__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__getopt_io__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mercury__getopt_io__Var_6;
            MR_Word mercury__getopt_io__Var_7;
            MR_Word mercury__getopt_io__Var_8;

            mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (mercury__getopt_io__succeeded)
              {
                mercury__getopt_io__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
                mercury__getopt_io__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
                mercury__getopt_io__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));
                {
                  mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__Var_3, (MR_Word) mercury__getopt_io__Var_6);
                }
                if (mercury__getopt_io__succeeded)
                  {
                    {
                      mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__Var_4, (MR_Word) mercury__getopt_io__Var_7);
                    }
                    if (mercury__getopt_io__succeeded)
                      {
                        mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__Var_5, (MR_Word) mercury__getopt_io__Var_8);
                      }
                  }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__getopt_io__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__getopt_io__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__getopt_io__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mercury__getopt_io__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 3)));
            MR_Word mercury__getopt_io__Var_13;
            MR_Word mercury__getopt_io__Var_14;
            MR_Word mercury__getopt_io__Var_15;
            MR_Word mercury__getopt_io__Var_16;

            mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__getopt_io__succeeded)
              {
                mercury__getopt_io__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
                mercury__getopt_io__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
                mercury__getopt_io__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));
                mercury__getopt_io__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 3)));
                {
                  mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__Var_9, (MR_Word) mercury__getopt_io__Var_13);
                }
                if (mercury__getopt_io__succeeded)
                  {
                    {
                      mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__Var_10, (MR_Word) mercury__getopt_io__Var_14);
                    }
                    if (mercury__getopt_io__succeeded)
                      {
                        {
                          mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__Var_11, (MR_Word) mercury__getopt_io__Var_15);
                        }
                        if (mercury__getopt_io__succeeded)
                          {
                            mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__Var_12, (MR_Word) mercury__getopt_io__Var_16);
                          }
                      }
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mercury__getopt_io__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__getopt_io__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__getopt_io__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mercury__getopt_io__Var_20;
            MR_Word mercury__getopt_io__Var_21;
            MR_Word mercury__getopt_io__Var_22;

            mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mercury__getopt_io__succeeded)
              {
                mercury__getopt_io__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
                mercury__getopt_io__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
                mercury__getopt_io__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));
                {
                  mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__Var_17, (MR_Word) mercury__getopt_io__Var_20);
                }
                if (mercury__getopt_io__succeeded)
                  {
                    {
                      mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__Var_18, (MR_Word) mercury__getopt_io__Var_21);
                    }
                    if (mercury__getopt_io__succeeded)
                      {
                        mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__Var_19, (MR_Word) mercury__getopt_io__Var_22);
                      }
                  }
              }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word mercury__getopt_io__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__getopt_io__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__getopt_io__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mercury__getopt_io__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 3)));
            MR_Word mercury__getopt_io__Var_27;
            MR_Word mercury__getopt_io__Var_28;
            MR_Word mercury__getopt_io__Var_29;
            MR_Word mercury__getopt_io__Var_30;

            mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (mercury__getopt_io__succeeded)
              {
                mercury__getopt_io__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
                mercury__getopt_io__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
                mercury__getopt_io__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));
                mercury__getopt_io__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 3)));
                {
                  mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__Var_23, (MR_Word) mercury__getopt_io__Var_27);
                }
                if (mercury__getopt_io__succeeded)
                  {
                    {
                      mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__Var_24, (MR_Word) mercury__getopt_io__Var_28);
                    }
                    if (mercury__getopt_io__succeeded)
                      {
                        {
                          mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__Var_25, (MR_Word) mercury__getopt_io__Var_29);
                        }
                        if (mercury__getopt_io__succeeded)
                          {
                            mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__Var_26, (MR_Word) mercury__getopt_io__Var_30);
                          }
                      }
                  }
              }
          }
          break;
      }
    return mercury__getopt_io__succeeded;
  }
}

void MR_CALL 
mercury__getopt_io____Compare____option_error_reason_0_0(
  MR_Word * mercury__getopt_io__HeadVar__1_1,
  MR_Word mercury__getopt_io__HeadVar__2_2,
  MR_Word mercury__getopt_io__HeadVar__3_3)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Integer mercury__getopt_io__CastX_182 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;
    MR_Integer mercury__getopt_io__CastY_183 = (MR_Integer) mercury__getopt_io__HeadVar__3_3;

    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_182 == mercury__getopt_io__CastY_183);
    if (mercury__getopt_io__succeeded)
      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mercury__getopt_io__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__getopt_io__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__getopt_io__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__getopt_io__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 3:
              switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__getopt_io__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 4:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 4:
              switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__getopt_io__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String mercury__getopt_io__Var_192 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mercury__getopt_io__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String mercury__getopt_io__Var_23 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mercury__getopt_io__V_7_207;

{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt_io__Var_192 ;
	S2 =  mercury__getopt_io__Var_23 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__getopt_io__V_7_207  = Res;
}
                  mercury__getopt_io__succeeded = (mercury__getopt_io__V_7_207 < (MR_Integer) 0);
                  if (mercury__getopt_io__succeeded)
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                  else
                    {
                      mercury__getopt_io__succeeded = (mercury__getopt_io__V_7_207 == (MR_Integer) 0);
                      if (mercury__getopt_io__succeeded)
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    }
                }
                break;
              case (MR_Integer) 2:
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String mercury__getopt_io__Var_199 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mercury__getopt_io__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_String mercury__getopt_io__Var_71 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mercury__getopt_io__V_7_242;

{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt_io__Var_199 ;
	S2 =  mercury__getopt_io__Var_71 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__getopt_io__V_7_242  = Res;
}
                  mercury__getopt_io__succeeded = (mercury__getopt_io__V_7_242 < (MR_Integer) 0);
                  if (mercury__getopt_io__succeeded)
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                  else
                    {
                      mercury__getopt_io__succeeded = (mercury__getopt_io__V_7_242 == (MR_Integer) 0);
                      if (mercury__getopt_io__succeeded)
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String mercury__getopt_io__Var_198 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mercury__getopt_io__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_String mercury__getopt_io__Var_92 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer mercury__getopt_io__V_7_237;

{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt_io__Var_198 ;
	S2 =  mercury__getopt_io__Var_92 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__getopt_io__V_7_237  = Res;
}
                          mercury__getopt_io__succeeded = (mercury__getopt_io__V_7_237 < (MR_Integer) 0);
                          if (mercury__getopt_io__succeeded)
                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                          else
                            {
                              mercury__getopt_io__succeeded = (mercury__getopt_io__V_7_237 == (MR_Integer) 0);
                              if (mercury__getopt_io__succeeded)
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
                              else
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                            }
                        }
                        break;
                      case (MR_Integer) 1:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mercury__getopt_io__Var_193 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));
                MR_String mercury__getopt_io__Var_194 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mercury__getopt_io__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_String mercury__getopt_io__Var_122 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word mercury__getopt_io__Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word mercury__getopt_io__Var_124;
                          MR_Integer mercury__getopt_io__V_7_212;

{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt_io__Var_194 ;
	S2 =  mercury__getopt_io__Var_122 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__getopt_io__V_7_212  = Res;
}
                          mercury__getopt_io__succeeded = (mercury__getopt_io__V_7_212 < (MR_Integer) 0);
                          if (mercury__getopt_io__succeeded)
                            mercury__getopt_io__Var_124 = (MR_Integer) 1;
                          else
                            {
                              mercury__getopt_io__succeeded = (mercury__getopt_io__V_7_212 == (MR_Integer) 0);
                              if (mercury__getopt_io__succeeded)
                                mercury__getopt_io__Var_124 = (MR_Integer) 0;
                              else
                                mercury__getopt_io__Var_124 = (MR_Integer) 2;
                            }
                          mercury__getopt_io__succeeded = (mercury__getopt_io__Var_124 == (MR_Integer) 0);
                          mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
                          if (mercury__getopt_io__succeeded)
                            *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__Var_124;
                          else
                            {
                              MR_String mercury__getopt_io__Var_200 = (MR_String) mercury__getopt_io__Var_193;
                              MR_String mercury__getopt_io__Var_201 = (MR_String) mercury__getopt_io__Var_123;
                              MR_Integer mercury__getopt_io__V_7_217;

{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt_io__Var_200 ;
	S2 =  mercury__getopt_io__Var_201 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__getopt_io__V_7_217  = Res;
}
                              mercury__getopt_io__succeeded = (mercury__getopt_io__V_7_217 < (MR_Integer) 0);
                              if (mercury__getopt_io__succeeded)
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                              else
                                {
                                  mercury__getopt_io__succeeded = (mercury__getopt_io__V_7_217 == (MR_Integer) 0);
                                  if (mercury__getopt_io__succeeded)
                                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
                                  else
                                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                                }
                            }
                        }
                        break;
                      case (MR_Integer) 2:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mercury__getopt_io__Var_195 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));
                MR_String mercury__getopt_io__Var_196 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mercury__getopt_io__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_String mercury__getopt_io__Var_157 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word mercury__getopt_io__Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word mercury__getopt_io__Var_159;
                          MR_Integer mercury__getopt_io__V_7_222;

{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt_io__Var_196 ;
	S2 =  mercury__getopt_io__Var_157 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__getopt_io__V_7_222  = Res;
}
                          mercury__getopt_io__succeeded = (mercury__getopt_io__V_7_222 < (MR_Integer) 0);
                          if (mercury__getopt_io__succeeded)
                            mercury__getopt_io__Var_159 = (MR_Integer) 1;
                          else
                            {
                              mercury__getopt_io__succeeded = (mercury__getopt_io__V_7_222 == (MR_Integer) 0);
                              if (mercury__getopt_io__succeeded)
                                mercury__getopt_io__Var_159 = (MR_Integer) 0;
                              else
                                mercury__getopt_io__Var_159 = (MR_Integer) 2;
                            }
                          mercury__getopt_io__succeeded = (mercury__getopt_io__Var_159 == (MR_Integer) 0);
                          mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
                          if (mercury__getopt_io__succeeded)
                            *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__Var_159;
                          else
                            {
                              MR_String mercury__getopt_io__Var_202 = (MR_String) mercury__getopt_io__Var_195;
                              MR_String mercury__getopt_io__Var_203 = (MR_String) mercury__getopt_io__Var_158;
                              MR_Integer mercury__getopt_io__V_7_227;

{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt_io__Var_202 ;
	S2 =  mercury__getopt_io__Var_203 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__getopt_io__V_7_227  = Res;
}
                              mercury__getopt_io__succeeded = (mercury__getopt_io__V_7_227 < (MR_Integer) 0);
                              if (mercury__getopt_io__succeeded)
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                              else
                                {
                                  mercury__getopt_io__succeeded = (mercury__getopt_io__V_7_227 == (MR_Integer) 0);
                                  if (mercury__getopt_io__succeeded)
                                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
                                  else
                                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                                }
                            }
                        }
                        break;
                      case (MR_Integer) 3:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_String mercury__getopt_io__Var_197 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mercury__getopt_io__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_String mercury__getopt_io__Var_181 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer mercury__getopt_io__V_7_232;

{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt_io__Var_197 ;
	S2 =  mercury__getopt_io__Var_181 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__getopt_io__V_7_232  = Res;
}
                          mercury__getopt_io__succeeded = (mercury__getopt_io__V_7_232 < (MR_Integer) 0);
                          if (mercury__getopt_io__succeeded)
                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                          else
                            {
                              mercury__getopt_io__succeeded = (mercury__getopt_io__V_7_232 == (MR_Integer) 0);
                              if (mercury__getopt_io__succeeded)
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
                              else
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
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
mercury__getopt_io____Unify____option_error_reason_0_0(
  MR_Word mercury__getopt_io__HeadVar__1_1,
  MR_Word mercury__getopt_io__HeadVar__2_2)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Integer mercury__getopt_io__CastX_29 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
    MR_Integer mercury__getopt_io__CastY_30 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_29 == mercury__getopt_io__CastY_30);
    if (mercury__getopt_io__succeeded)
      mercury__getopt_io__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mercury__getopt_io__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mercury__getopt_io__CastX_3 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
                MR_Integer mercury__getopt_io__CastY_4 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

                mercury__getopt_io__succeeded = (mercury__getopt_io__CastY_4 == mercury__getopt_io__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mercury__getopt_io__CastX_5 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
                MR_Integer mercury__getopt_io__CastY_6 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

                mercury__getopt_io__succeeded = (mercury__getopt_io__CastY_6 == mercury__getopt_io__CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer mercury__getopt_io__CastX_9 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
                MR_Integer mercury__getopt_io__CastY_10 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

                mercury__getopt_io__succeeded = (mercury__getopt_io__CastY_10 == mercury__getopt_io__CastX_9);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer mercury__getopt_io__CastX_11 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
                MR_Integer mercury__getopt_io__CastY_12 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

                mercury__getopt_io__succeeded = (mercury__getopt_io__CastY_12 == mercury__getopt_io__CastX_11);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer mercury__getopt_io__CastX_13 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
                MR_Integer mercury__getopt_io__CastY_14 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

                mercury__getopt_io__succeeded = (mercury__getopt_io__CastY_14 == mercury__getopt_io__CastX_13);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String mercury__getopt_io__Var_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mercury__getopt_io__Var_8;

            mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__getopt_io__succeeded)
              {
                mercury__getopt_io__Var_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
                mercury__getopt_io__succeeded = (strcmp(mercury__getopt_io__Var_7, mercury__getopt_io__Var_8) == 0);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String mercury__getopt_io__Var_15 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mercury__getopt_io__Var_16;

            mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mercury__getopt_io__succeeded)
              {
                mercury__getopt_io__Var_16 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
                mercury__getopt_io__succeeded = (strcmp(mercury__getopt_io__Var_15, mercury__getopt_io__Var_16) == 0);
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String mercury__getopt_io__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
                MR_String mercury__getopt_io__Var_18;

                mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (mercury__getopt_io__succeeded)
                  {
                    mercury__getopt_io__Var_18 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__getopt_io__succeeded = (strcmp(mercury__getopt_io__Var_17, mercury__getopt_io__Var_18) == 0);
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String mercury__getopt_io__Var_19 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mercury__getopt_io__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 2)));
                MR_String mercury__getopt_io__Var_21;
                MR_Word mercury__getopt_io__Var_22;
                MR_String mercury__getopt_io__Var_33;
                MR_String mercury__getopt_io__Var_34;

                mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (mercury__getopt_io__succeeded)
                  {
                    mercury__getopt_io__Var_21 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__getopt_io__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));
                    mercury__getopt_io__succeeded = (strcmp(mercury__getopt_io__Var_19, mercury__getopt_io__Var_21) == 0);
                    if (mercury__getopt_io__succeeded)
                      {
                        mercury__getopt_io__Var_33 = (MR_String) mercury__getopt_io__Var_20;
                        mercury__getopt_io__Var_34 = (MR_String) mercury__getopt_io__Var_22;
                        mercury__getopt_io__succeeded = (strcmp(mercury__getopt_io__Var_33, mercury__getopt_io__Var_34) == 0);
                      }
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String mercury__getopt_io__Var_23 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mercury__getopt_io__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 2)));
                MR_String mercury__getopt_io__Var_25;
                MR_Word mercury__getopt_io__Var_26;
                MR_String mercury__getopt_io__Var_35;
                MR_String mercury__getopt_io__Var_36;

                mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (mercury__getopt_io__succeeded)
                  {
                    mercury__getopt_io__Var_25 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__getopt_io__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));
                    mercury__getopt_io__succeeded = (strcmp(mercury__getopt_io__Var_23, mercury__getopt_io__Var_25) == 0);
                    if (mercury__getopt_io__succeeded)
                      {
                        mercury__getopt_io__Var_35 = (MR_String) mercury__getopt_io__Var_24;
                        mercury__getopt_io__Var_36 = (MR_String) mercury__getopt_io__Var_26;
                        mercury__getopt_io__succeeded = (strcmp(mercury__getopt_io__Var_35, mercury__getopt_io__Var_36) == 0);
                      }
                  }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_String mercury__getopt_io__Var_27 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
                MR_String mercury__getopt_io__Var_28;

                mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (mercury__getopt_io__succeeded)
                  {
                    mercury__getopt_io__Var_28 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__getopt_io__succeeded = (strcmp(mercury__getopt_io__Var_27, mercury__getopt_io__Var_28) == 0);
                  }
              }
              break;
          }
          break;
      }
    return mercury__getopt_io__succeeded;
  }
}

void MR_CALL 
mercury__getopt_io____Compare____option_error_1_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_24,
  MR_Word * mercury__getopt_io__HeadVar__1_1,
  MR_Word mercury__getopt_io__HeadVar__2_2,
  MR_Word mercury__getopt_io__HeadVar__3_3)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Integer mercury__getopt_io__CastX_22 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;
    MR_Integer mercury__getopt_io__CastY_23 = (MR_Integer) mercury__getopt_io__HeadVar__3_3;

    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_22 == mercury__getopt_io__CastY_23);
    if (mercury__getopt_io__succeeded)
      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__getopt_io__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));
        MR_String mercury__getopt_io__Var_29 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
        MR_Box mercury__getopt_io__Var_30 = (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0));

        if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Box mercury__getopt_io__Var_17 = (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0));
            MR_String mercury__getopt_io__Var_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word mercury__getopt_io__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 2)));
            MR_Word mercury__getopt_io__Var_20;

            {
              mercury__builtin__compare_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_24, &mercury__getopt_io__Var_20, mercury__getopt_io__Var_30, mercury__getopt_io__Var_17);
            }
            mercury__getopt_io__succeeded = (mercury__getopt_io__Var_20 == (MR_Integer) 0);
            mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
            if (mercury__getopt_io__succeeded)
              *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__Var_20;
            else
              {
                MR_Word mercury__getopt_io__Var_21;
                MR_Integer mercury__getopt_io__V_7_35;

{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt_io__Var_29 ;
	S2 =  mercury__getopt_io__Var_18 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__getopt_io__V_7_35  = Res;
}
                mercury__getopt_io__succeeded = (mercury__getopt_io__V_7_35 < (MR_Integer) 0);
                if (mercury__getopt_io__succeeded)
                  mercury__getopt_io__Var_21 = (MR_Integer) 1;
                else
                  {
                    mercury__getopt_io__succeeded = (mercury__getopt_io__V_7_35 == (MR_Integer) 0);
                    if (mercury__getopt_io__succeeded)
                      mercury__getopt_io__Var_21 = (MR_Integer) 0;
                    else
                      mercury__getopt_io__Var_21 = (MR_Integer) 2;
                  }
                mercury__getopt_io__succeeded = (mercury__getopt_io__Var_21 == (MR_Integer) 0);
                mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
                if (mercury__getopt_io__succeeded)
                  *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__Var_21;
                else
                  {
                    mercury__getopt_io____Compare____option_error_reason_0_0(mercury__getopt_io__HeadVar__1_1, mercury__getopt_io__Var_28, mercury__getopt_io__Var_19);
                  }
              }
          }
        else
          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
      }
    else
      {
        MR_String mercury__getopt_io__Var_31 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_String mercury__getopt_io__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));
            MR_Integer mercury__getopt_io__V_7_40;

{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt_io__Var_31 ;
	S2 =  mercury__getopt_io__Var_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__getopt_io__V_7_40  = Res;
}
            mercury__getopt_io__succeeded = (mercury__getopt_io__V_7_40 < (MR_Integer) 0);
            if (mercury__getopt_io__succeeded)
              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
            else
              {
                mercury__getopt_io__succeeded = (mercury__getopt_io__V_7_40 == (MR_Integer) 0);
                if (mercury__getopt_io__succeeded)
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
                else
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__getopt_io____Unify____option_error_1_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_13,
  MR_Word mercury__getopt_io__HeadVar__1_1,
  MR_Word mercury__getopt_io__HeadVar__2_2)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Integer mercury__getopt_io__CastX_11 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
    MR_Integer mercury__getopt_io__CastY_12 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_11 == mercury__getopt_io__CastY_12);
    if (mercury__getopt_io__succeeded)
      mercury__getopt_io__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Box mercury__getopt_io__Var_5 = (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0));
        MR_String mercury__getopt_io__Var_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__getopt_io__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 2)));
        MR_Box mercury__getopt_io__Var_8;
        MR_String mercury__getopt_io__Var_9;
        MR_Word mercury__getopt_io__Var_10;

        mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__getopt_io__succeeded)
          {
            mercury__getopt_io__Var_8 = (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0));
            mercury__getopt_io__Var_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
            mercury__getopt_io__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));
            {
              mercury__getopt_io__succeeded = mercury__builtin__unify_2_p_0(mercury__getopt_io__TypeInfo_for_OptionType_13, mercury__getopt_io__Var_5, mercury__getopt_io__Var_8);
            }
            if (mercury__getopt_io__succeeded)
              {
                mercury__getopt_io__succeeded = (strcmp(mercury__getopt_io__Var_6, mercury__getopt_io__Var_9) == 0);
                if (mercury__getopt_io__succeeded)
                  {
                    mercury__getopt_io__succeeded = mercury__getopt_io____Unify____option_error_reason_0_0(mercury__getopt_io__Var_7, mercury__getopt_io__Var_10);
                  }
              }
          }
      }
    else
      {
        MR_String mercury__getopt_io__Var_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
        MR_String mercury__getopt_io__Var_4;

        mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (mercury__getopt_io__succeeded)
          {
            mercury__getopt_io__Var_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
            mercury__getopt_io__succeeded = (strcmp(mercury__getopt_io__Var_3, mercury__getopt_io__Var_4) == 0);
          }
      }
    return mercury__getopt_io__succeeded;
  }
}

void MR_CALL 
mercury__getopt_io____Compare____option_data_0_0(
  MR_Word * mercury__getopt_io__HeadVar__1_1,
  MR_Word mercury__getopt_io__HeadVar__2_2,
  MR_Word mercury__getopt_io__HeadVar__3_3)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Integer mercury__getopt_io__CastX_148 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;
    MR_Integer mercury__getopt_io__CastY_149 = (MR_Integer) mercury__getopt_io__HeadVar__3_3;

    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_148 == mercury__getopt_io__CastY_149);
    if (mercury__getopt_io__succeeded)
      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mercury__getopt_io__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__getopt_io__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__getopt_io__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__getopt_io__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 3:
              switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__getopt_io__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 4:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 4:
              switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__getopt_io__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 5:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 5:
              switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__getopt_io__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__getopt_io__Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mercury__getopt_io__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mercury__getopt_io__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mercury__getopt_io__Var_162 = (MR_Integer) mercury__getopt_io__Var_157;
                  MR_Integer mercury__getopt_io__Var_163 = (MR_Integer) mercury__getopt_io__Var_5;

                  mercury__getopt_io__succeeded = (mercury__getopt_io__Var_162 < mercury__getopt_io__Var_163);
                  if (mercury__getopt_io__succeeded)
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                  else
                    {
                      mercury__getopt_io__succeeded = (mercury__getopt_io__Var_162 == mercury__getopt_io__Var_163);
                      if (mercury__getopt_io__succeeded)
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    }
                }
                break;
              case (MR_Integer) 2:
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mercury__getopt_io__Var_158 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mercury__getopt_io__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer mercury__getopt_io__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));

                  mercury__getopt_io__succeeded = (mercury__getopt_io__Var_158 < mercury__getopt_io__Var_25);
                  if (mercury__getopt_io__succeeded)
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                  else
                    {
                      mercury__getopt_io__succeeded = (mercury__getopt_io__Var_158 == mercury__getopt_io__Var_25);
                      if (mercury__getopt_io__succeeded)
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String mercury__getopt_io__Var_161 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mercury__getopt_io__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_String mercury__getopt_io__Var_45 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer mercury__getopt_io__V_7_173;

{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_data_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt_io__Var_161 ;
	S2 =  mercury__getopt_io__Var_45 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__getopt_io__V_7_173  = Res;
}
                          mercury__getopt_io__succeeded = (mercury__getopt_io__V_7_173 < (MR_Integer) 0);
                          if (mercury__getopt_io__succeeded)
                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                          else
                            {
                              mercury__getopt_io__succeeded = (mercury__getopt_io__V_7_173 == (MR_Integer) 0);
                              if (mercury__getopt_io__succeeded)
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
                              else
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                            }
                        }
                        break;
                      case (MR_Integer) 1:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mercury__getopt_io__Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mercury__getopt_io__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word mercury__getopt_io__TypeInfo_152_152 = (MR_Word) &mercury__getopt_io_scalar_common_1[2];
                          MR_Word mercury__getopt_io__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__builtin__compare_3_p_0(mercury__getopt_io__TypeInfo_152_152, mercury__getopt_io__HeadVar__1_1, ((MR_Box) (mercury__getopt_io__Var_159)), ((MR_Box) (mercury__getopt_io__Var_65)));
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mercury__getopt_io__Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mercury__getopt_io__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word mercury__getopt_io__TypeInfo_151_151 = (MR_Word) &mercury__getopt_io_scalar_common_1[1];
                          MR_Word mercury__getopt_io__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__builtin__compare_3_p_0(mercury__getopt_io__TypeInfo_151_151, mercury__getopt_io__HeadVar__1_1, ((MR_Box) (mercury__getopt_io__Var_160)), ((MR_Box) (mercury__getopt_io__Var_85)));
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word mercury__getopt_io__Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mercury__getopt_io__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word mercury__getopt_io__TypeInfo_150_150 = (MR_Word) &mercury__getopt_io_scalar_common_1[0];
                          MR_Word mercury__getopt_io__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__builtin__compare_3_p_0(mercury__getopt_io__TypeInfo_150_150, mercury__getopt_io__HeadVar__1_1, ((MR_Box) (mercury__getopt_io__Var_156)), ((MR_Box) (mercury__getopt_io__Var_105)));
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
mercury__getopt_io____Unify____option_data_0_0(
  MR_Word mercury__getopt_io__HeadVar__1_1,
  MR_Word mercury__getopt_io__HeadVar__2_2)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Integer mercury__getopt_io__CastX_27 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
    MR_Integer mercury__getopt_io__CastY_28 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_27 == mercury__getopt_io__CastY_28);
    if (mercury__getopt_io__succeeded)
      mercury__getopt_io__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mercury__getopt_io__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mercury__getopt_io__CastX_15 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
                MR_Integer mercury__getopt_io__CastY_16 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

                mercury__getopt_io__succeeded = (mercury__getopt_io__CastY_16 == mercury__getopt_io__CastX_15);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mercury__getopt_io__CastX_17 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
                MR_Integer mercury__getopt_io__CastY_18 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

                mercury__getopt_io__succeeded = (mercury__getopt_io__CastY_18 == mercury__getopt_io__CastX_17);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer mercury__getopt_io__CastX_19 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
                MR_Integer mercury__getopt_io__CastY_20 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

                mercury__getopt_io__succeeded = (mercury__getopt_io__CastY_20 == mercury__getopt_io__CastX_19);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer mercury__getopt_io__CastX_21 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
                MR_Integer mercury__getopt_io__CastY_22 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

                mercury__getopt_io__succeeded = (mercury__getopt_io__CastY_22 == mercury__getopt_io__CastX_21);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer mercury__getopt_io__CastX_23 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
                MR_Integer mercury__getopt_io__CastY_24 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

                mercury__getopt_io__succeeded = (mercury__getopt_io__CastY_24 == mercury__getopt_io__CastX_23);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer mercury__getopt_io__CastX_25 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
                MR_Integer mercury__getopt_io__CastY_26 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

                mercury__getopt_io__succeeded = (mercury__getopt_io__CastY_26 == mercury__getopt_io__CastX_25);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__getopt_io__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__getopt_io__Var_4;

            mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__getopt_io__succeeded)
              {
                mercury__getopt_io__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
                mercury__getopt_io__succeeded = (mercury__getopt_io__Var_3 == mercury__getopt_io__Var_4);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mercury__getopt_io__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mercury__getopt_io__Var_6;

            mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mercury__getopt_io__succeeded)
              {
                mercury__getopt_io__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
                mercury__getopt_io__succeeded = (mercury__getopt_io__Var_5 == mercury__getopt_io__Var_6);
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String mercury__getopt_io__Var_7 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
                MR_String mercury__getopt_io__Var_8;

                mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (mercury__getopt_io__succeeded)
                  {
                    mercury__getopt_io__Var_8 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__getopt_io__succeeded = (strcmp(mercury__getopt_io__Var_7, mercury__getopt_io__Var_8) == 0);
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mercury__getopt_io__TypeInfo_30_30;
                MR_Word mercury__getopt_io__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mercury__getopt_io__Var_10;

                mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (mercury__getopt_io__succeeded)
                  {
                    mercury__getopt_io__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__getopt_io__TypeInfo_30_30 = (MR_Word) &mercury__getopt_io_scalar_common_1[2];
                    {
                      mercury__getopt_io__succeeded = mercury__builtin__unify_2_p_0(mercury__getopt_io__TypeInfo_30_30, ((MR_Box) (mercury__getopt_io__Var_9)), ((MR_Box) (mercury__getopt_io__Var_10)));
                    }
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mercury__getopt_io__TypeInfo_31_31;
                MR_Word mercury__getopt_io__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mercury__getopt_io__Var_12;

                mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (mercury__getopt_io__succeeded)
                  {
                    mercury__getopt_io__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__getopt_io__TypeInfo_31_31 = (MR_Word) &mercury__getopt_io_scalar_common_1[1];
                    {
                      mercury__getopt_io__succeeded = mercury__builtin__unify_2_p_0(mercury__getopt_io__TypeInfo_31_31, ((MR_Box) (mercury__getopt_io__Var_11)), ((MR_Box) (mercury__getopt_io__Var_12)));
                    }
                  }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word mercury__getopt_io__TypeInfo_29_29;
                MR_Word mercury__getopt_io__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mercury__getopt_io__Var_14;

                mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (mercury__getopt_io__succeeded)
                  {
                    mercury__getopt_io__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__getopt_io__TypeInfo_29_29 = (MR_Word) &mercury__getopt_io_scalar_common_1[0];
                    {
                      mercury__getopt_io__succeeded = mercury__builtin__unify_2_p_0(mercury__getopt_io__TypeInfo_29_29, ((MR_Box) (mercury__getopt_io__Var_13)), ((MR_Box) (mercury__getopt_io__Var_14)));
                    }
                  }
              }
              break;
          }
          break;
      }
    return mercury__getopt_io__succeeded;
  }
}

void MR_CALL 
mercury__getopt_io____Compare____maybe_option_table_se_1_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_14,
  MR_Word * mercury__getopt_io__HeadVar__1_1,
  MR_Word mercury__getopt_io__HeadVar__2_2,
  MR_Word mercury__getopt_io__HeadVar__3_3)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Integer mercury__getopt_io__CastX_12 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;
    MR_Integer mercury__getopt_io__CastY_13 = (MR_Integer) mercury__getopt_io__HeadVar__3_3;

    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_12 == mercury__getopt_io__CastY_13);
    if (mercury__getopt_io__succeeded)
      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__getopt_io__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word mercury__getopt_io__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__getopt_io____Compare____option_error_1_0(mercury__getopt_io__TypeInfo_for_OptionType_14, mercury__getopt_io__HeadVar__1_1, mercury__getopt_io__Var_20, mercury__getopt_io__Var_11);
            }
          }
        else
          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
      }
    else
      {
        MR_Word mercury__getopt_io__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word mercury__getopt_io__TypeCtorInfo_17_17 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
            MR_Word mercury__getopt_io__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__tree234____Compare____tree234_2_0(mercury__getopt_io__TypeInfo_for_OptionType_14, mercury__getopt_io__TypeCtorInfo_17_17, mercury__getopt_io__HeadVar__1_1, mercury__getopt_io__Var_21, mercury__getopt_io__Var_5);
            }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__getopt_io____Unify____maybe_option_table_se_1_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_9,
  MR_Word mercury__getopt_io__HeadVar__1_1,
  MR_Word mercury__getopt_io__HeadVar__2_2)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Integer mercury__getopt_io__CastX_7 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
    MR_Integer mercury__getopt_io__CastY_8 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_7 == mercury__getopt_io__CastY_8);
    if (mercury__getopt_io__succeeded)
      mercury__getopt_io__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__getopt_io__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__getopt_io__Var_6;

        mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__getopt_io__succeeded)
          {
            mercury__getopt_io__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
            {
              mercury__getopt_io__succeeded = mercury__getopt_io____Unify____option_error_1_0(mercury__getopt_io__TypeInfo_for_OptionType_9, mercury__getopt_io__Var_5, mercury__getopt_io__Var_6);
            }
          }
      }
    else
      {
        MR_Word mercury__getopt_io__TypeCtorInfo_10_10;
        MR_Word mercury__getopt_io__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__getopt_io__Var_4;

        mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (mercury__getopt_io__succeeded)
          {
            mercury__getopt_io__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
            mercury__getopt_io__TypeCtorInfo_10_10 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
            {
              mercury__getopt_io__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__getopt_io__TypeInfo_for_OptionType_9, mercury__getopt_io__TypeCtorInfo_10_10, mercury__getopt_io__Var_3, mercury__getopt_io__Var_4);
            }
          }
      }
    return mercury__getopt_io__succeeded;
  }
}

void MR_CALL 
mercury__getopt_io____Compare____maybe_option_table_1_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_14,
  MR_Word * mercury__getopt_io__HeadVar__1_1,
  MR_Word mercury__getopt_io__HeadVar__2_2,
  MR_Word mercury__getopt_io__HeadVar__3_3)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Integer mercury__getopt_io__CastX_12 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;
    MR_Integer mercury__getopt_io__CastY_13 = (MR_Integer) mercury__getopt_io__HeadVar__3_3;

    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_12 == mercury__getopt_io__CastY_13);
    if (mercury__getopt_io__succeeded)
      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String mercury__getopt_io__Var_19 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String mercury__getopt_io__Var_11 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));
            MR_Integer mercury__getopt_io__V_7_24;

{
#define MR_PROC_LABEL mercury__getopt_io____Compare____maybe_option_table_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt_io__Var_19 ;
	S2 =  mercury__getopt_io__Var_11 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__getopt_io__V_7_24  = Res;
}
            mercury__getopt_io__succeeded = (mercury__getopt_io__V_7_24 < (MR_Integer) 0);
            if (mercury__getopt_io__succeeded)
              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
            else
              {
                mercury__getopt_io__succeeded = (mercury__getopt_io__V_7_24 == (MR_Integer) 0);
                if (mercury__getopt_io__succeeded)
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
                else
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
              }
          }
        else
          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
      }
    else
      {
        MR_Word mercury__getopt_io__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word mercury__getopt_io__TypeCtorInfo_16_16 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
            MR_Word mercury__getopt_io__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__tree234____Compare____tree234_2_0(mercury__getopt_io__TypeInfo_for_OptionType_14, mercury__getopt_io__TypeCtorInfo_16_16, mercury__getopt_io__HeadVar__1_1, mercury__getopt_io__Var_20, mercury__getopt_io__Var_5);
            }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__getopt_io____Unify____maybe_option_table_1_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_9,
  MR_Word mercury__getopt_io__HeadVar__1_1,
  MR_Word mercury__getopt_io__HeadVar__2_2)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Integer mercury__getopt_io__CastX_7 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
    MR_Integer mercury__getopt_io__CastY_8 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_7 == mercury__getopt_io__CastY_8);
    if (mercury__getopt_io__succeeded)
      mercury__getopt_io__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String mercury__getopt_io__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
        MR_String mercury__getopt_io__Var_6;

        mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__getopt_io__succeeded)
          {
            mercury__getopt_io__Var_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
            mercury__getopt_io__succeeded = (strcmp(mercury__getopt_io__Var_5, mercury__getopt_io__Var_6) == 0);
          }
      }
    else
      {
        MR_Word mercury__getopt_io__TypeCtorInfo_10_10;
        MR_Word mercury__getopt_io__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__getopt_io__Var_4;

        mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (mercury__getopt_io__succeeded)
          {
            mercury__getopt_io__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
            mercury__getopt_io__TypeCtorInfo_10_10 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
            {
              mercury__getopt_io__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__getopt_io__TypeInfo_for_OptionType_9, mercury__getopt_io__TypeCtorInfo_10_10, mercury__getopt_io__Var_3, mercury__getopt_io__Var_4);
            }
          }
      }
    return mercury__getopt_io__succeeded;
  }
}

static void MR_CALL 
mercury__getopt_io__process_special_8_p_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_54,
  MR_String mercury__getopt_io__Option_9,
  MR_Box mercury__getopt_io__Flag_10,
  MR_Word mercury__getopt_io__OptionData_11,
  MR_Word mercury__getopt_io__OptionOps_12,
  MR_Word mercury__getopt_io__OptionTable0_13,
  MR_Word * mercury__getopt_io__Result_14,
  MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_26,
  MR_Word * mercury__getopt_io__STATE_VARIABLE_OptionsSet_27)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Word mercury__getopt_io__MaybeHandler_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_12, (MR_Integer) 2)));
    MR_Word mercury__getopt_io__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_12, (MR_Integer) 0)));
    MR_Word mercury__getopt_io__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_12, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) mercury__getopt_io__MaybeHandler_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mercury__getopt_io__Var_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
          MR_Word mercury__getopt_io__Error_51;

          {
            mercury__getopt_io__Error_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_51, 0) = mercury__getopt_io__Flag_10;
            MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_51, 1) = ((MR_Box) (mercury__getopt_io__Option_9));
            MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_51, 2) = ((MR_Box) (mercury__getopt_io__Var_28));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mercury__getopt_io__Result_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_51));
          }
          *mercury__getopt_io__STATE_VARIABLE_OptionsSet_27 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_26;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__getopt_io__Handler_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__MaybeHandler_16, (MR_Integer) 0)));
          MR_Word mercury__getopt_io__Result0_18;
          MR_bool MR_CALL (* mercury__getopt_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt_io__Handler_17, (MR_Integer) 1)));
          MR_Box mercury__getopt_io__conv1_Result0_18;

          {
            mercury__getopt_io__succeeded = mercury__getopt_io__func_0(((MR_Box) mercury__getopt_io__Handler_17), mercury__getopt_io__Flag_10, ((MR_Box) (mercury__getopt_io__OptionData_11)), ((MR_Box) (mercury__getopt_io__OptionTable0_13)), &mercury__getopt_io__conv1_Result0_18);
          }
          if (mercury__getopt_io__succeeded)
            {
              mercury__getopt_io__Result0_18 = ((MR_Word) mercury__getopt_io__conv1_Result0_18);
              mercury__getopt_io__succeeded = MR_TRUE;
            }
          if (mercury__getopt_io__succeeded)
            if (((MR_tag((MR_Word) mercury__getopt_io__Result0_18)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_String mercury__getopt_io__HandlerMsg_20 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__Result0_18, (MR_Integer) 0)));
                MR_Word mercury__getopt_io__Reason_21;
                MR_Word mercury__getopt_io__Error_22;

                {
                  mercury__getopt_io__Reason_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), mercury__getopt_io__Reason_21, 0) = ((MR_Box) (mercury__getopt_io__HandlerMsg_20));
                }
                {
                  mercury__getopt_io__Error_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_22, 0) = mercury__getopt_io__Flag_10;
                  MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_22, 1) = ((MR_Box) (mercury__getopt_io__Option_9));
                  MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_22, 2) = ((MR_Box) (mercury__getopt_io__Reason_21));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__getopt_io__Result_14 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_22));
                }
              }
            else
              {
                MR_Word mercury__getopt_io__OptionTable_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__Result0_18, (MR_Integer) 0)));

                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *mercury__getopt_io__Result_14 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__OptionTable_19));
                }
              }
          else
            {
              MR_Word mercury__getopt_io__Var_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
              MR_Word mercury__getopt_io__Error_32;

              {
                mercury__getopt_io__Error_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_32, 0) = mercury__getopt_io__Flag_10;
                MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_32, 1) = ((MR_Box) (mercury__getopt_io__Option_9));
                MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_32, 2) = ((MR_Box) (mercury__getopt_io__Var_31));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mercury__getopt_io__Result_14 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_32));
              }
            }
          *mercury__getopt_io__STATE_VARIABLE_OptionsSet_27 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_26;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__getopt_io__TrackHandler_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__MaybeHandler_16, (MR_Integer) 0)));
          MR_Word mercury__getopt_io__NewOptionsSet_24;
          MR_Word mercury__getopt_io__Result0_43;
          MR_bool MR_CALL (* mercury__getopt_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt_io__TrackHandler_23, (MR_Integer) 1)));
          MR_Box mercury__getopt_io__conv4_Result0_43;
          MR_Box mercury__getopt_io__conv3_NewOptionsSet_24;

          {
            mercury__getopt_io__succeeded = mercury__getopt_io__func_2(((MR_Box) mercury__getopt_io__TrackHandler_23), mercury__getopt_io__Flag_10, ((MR_Box) (mercury__getopt_io__OptionData_11)), ((MR_Box) (mercury__getopt_io__OptionTable0_13)), &mercury__getopt_io__conv4_Result0_43, &mercury__getopt_io__conv3_NewOptionsSet_24);
          }
          if (mercury__getopt_io__succeeded)
            {
              mercury__getopt_io__Result0_43 = ((MR_Word) mercury__getopt_io__conv4_Result0_43);
              mercury__getopt_io__NewOptionsSet_24 = ((MR_Word) mercury__getopt_io__conv3_NewOptionsSet_24);
              mercury__getopt_io__succeeded = MR_TRUE;
            }
          if (mercury__getopt_io__succeeded)
            {
              MR_Word mercury__getopt_io__V_4_58 = (MR_Word) mercury__getopt_io__NewOptionsSet_24;
              MR_Word mercury__getopt_io__V_5_59 = (MR_Word) mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_26;
              MR_Word mercury__getopt_io__V_6_60;

              {
                mercury__list__merge_and_remove_dups_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_54, mercury__getopt_io__V_4_58, mercury__getopt_io__V_5_59, &mercury__getopt_io__V_6_60);
              }
              *mercury__getopt_io__STATE_VARIABLE_OptionsSet_27 = (MR_Word) mercury__getopt_io__V_6_60;
              if (((MR_tag((MR_Word) mercury__getopt_io__Result0_43)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_String mercury__getopt_io__TrackHandlerMsg_25 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__Result0_43, (MR_Integer) 0)));
                  MR_Word mercury__getopt_io__Reason_34;
                  MR_Word mercury__getopt_io__Error_35;

                  {
                    mercury__getopt_io__Reason_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), mercury__getopt_io__Reason_34, 0) = ((MR_Box) (mercury__getopt_io__TrackHandlerMsg_25));
                  }
                  {
                    mercury__getopt_io__Error_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_35, 0) = mercury__getopt_io__Flag_10;
                    MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_35, 1) = ((MR_Box) (mercury__getopt_io__Option_9));
                    MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_35, 2) = ((MR_Box) (mercury__getopt_io__Reason_34));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__getopt_io__Result_14 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_35));
                  }
                }
              else
                {
                  MR_Word mercury__getopt_io__OptionTable_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__Result0_43, (MR_Integer) 0)));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *mercury__getopt_io__Result_14 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__OptionTable_33));
                  }
                }
            }
          else
            {
              MR_Word mercury__getopt_io__Var_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
              MR_Word mercury__getopt_io__Error_42;

              {
                mercury__getopt_io__Error_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_42, 0) = mercury__getopt_io__Flag_10;
                MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_42, 1) = ((MR_Box) (mercury__getopt_io__Option_9));
                MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_42, 2) = ((MR_Box) (mercury__getopt_io__Var_30));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mercury__getopt_io__Result_14 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_42));
              }
              *mercury__getopt_io__STATE_VARIABLE_OptionsSet_27 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_26;
            }
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__getopt_io__process_negated_option_7_p_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_51,
  MR_String mercury__getopt_io__Option_8,
  MR_Box mercury__getopt_io__Flag_9,
  MR_Word mercury__getopt_io__OptionOps_10,
  MR_Word mercury__getopt_io__OptionTable0_11,
  MR_Word * mercury__getopt_io__Result_12,
  MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_23,
  MR_Word * mercury__getopt_io__STATE_VARIABLE_OptionsSet_24)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Word mercury__getopt_io__OptionData_14;
    MR_Word mercury__getopt_io__TypeCtorInfo_52_52 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    MR_Box mercury__getopt_io__conv0_OptionData_14;

    {
      mercury__getopt_io__succeeded = mercury__tree234__search_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_51, mercury__getopt_io__TypeCtorInfo_52_52, mercury__getopt_io__OptionTable0_11, mercury__getopt_io__Flag_9, &mercury__getopt_io__conv0_OptionData_14);
    }
    if (mercury__getopt_io__succeeded)
      {
        mercury__getopt_io__OptionData_14 = ((MR_Word) mercury__getopt_io__conv0_OptionData_14);
        mercury__getopt_io__succeeded = MR_TRUE;
      }
    if (mercury__getopt_io__succeeded)
      switch (MR_tag((MR_Word) mercury__getopt_io__OptionData_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mercury__getopt_io__OptionData_14)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
            case (MR_Integer) 5:
              {
                MR_Word mercury__getopt_io__Error_22;
                MR_Word mercury__getopt_io__Var_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));

                {
                  mercury__getopt_io__Error_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_22, 0) = mercury__getopt_io__Flag_9;
                  MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_22, 1) = ((MR_Box) (mercury__getopt_io__Option_8));
                  MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_22, 2) = ((MR_Box) (mercury__getopt_io__Var_25));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__getopt_io__Result_12 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_22));
                }
                *mercury__getopt_io__STATE_VARIABLE_OptionsSet_24 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_23;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_30_30;
                MR_Word mercury__getopt_io__Var_31;
                MR_Word mercury__getopt_io__V_5_84 = (MR_Word) mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_23;
                MR_Word mercury__getopt_io__V_6_85;

                {
                  mercury__set_ordlist__insert_loop_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_51, mercury__getopt_io__V_5_84, mercury__getopt_io__Flag_9, &mercury__getopt_io__V_6_85);
                }
                mercury__getopt_io__STATE_VARIABLE_OptionsSet_30_30 = (MR_Word) mercury__getopt_io__V_6_85;
                mercury__getopt_io__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_io_scalar_common_8[1]);
                {
                  mercury__getopt_io__process_special_8_p_0(mercury__getopt_io__TypeInfo_for_OptionType_51, mercury__getopt_io__Option_8, mercury__getopt_io__Flag_9, mercury__getopt_io__Var_31, mercury__getopt_io__OptionOps_10, mercury__getopt_io__OptionTable0_11, mercury__getopt_io__Result_12, mercury__getopt_io__STATE_VARIABLE_OptionsSet_30_30, mercury__getopt_io__STATE_VARIABLE_OptionsSet_24);
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_26_26;
                MR_Word mercury__getopt_io__Var_27;
                MR_Word mercury__getopt_io__Var_29;

                {
                  mercury__set__insert_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_51, mercury__getopt_io__Flag_9, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_23, &mercury__getopt_io__STATE_VARIABLE_OptionsSet_26_26);
                }
                mercury__getopt_io__Var_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__getopt_io__Var_27 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__getopt_io_scalar_common_1[6]);
                {
                  mercury__getopt_io__process_special_8_p_0(mercury__getopt_io__TypeInfo_for_OptionType_51, mercury__getopt_io__Option_8, mercury__getopt_io__Flag_9, mercury__getopt_io__Var_27, mercury__getopt_io__OptionOps_10, mercury__getopt_io__OptionTable0_11, mercury__getopt_io__Result_12, mercury__getopt_io__STATE_VARIABLE_OptionsSet_26_26, mercury__getopt_io__STATE_VARIABLE_OptionsSet_24);
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__getopt_io__TypeCtorInfo_53_53;
            MR_Word mercury__getopt_io__OptionTable_16;
            MR_Word mercury__getopt_io__Var_44;
            MR_Word mercury__getopt_io__V_5_74 = (MR_Word) mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_23;
            MR_Word mercury__getopt_io__V_6_75;

            {
              mercury__set_ordlist__insert_loop_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_51, mercury__getopt_io__V_5_74, mercury__getopt_io__Flag_9, &mercury__getopt_io__V_6_75);
            }
            *mercury__getopt_io__STATE_VARIABLE_OptionsSet_24 = (MR_Word) mercury__getopt_io__V_6_75;
            mercury__getopt_io__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_io_scalar_common_8[1]);
            mercury__getopt_io__TypeCtorInfo_53_53 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
            {
              mercury__tree234__set_4_p_0(mercury__getopt_io__TypeInfo_for_OptionType_51, mercury__getopt_io__TypeCtorInfo_53_53, mercury__getopt_io__Flag_9, ((MR_Box) (mercury__getopt_io__Var_44)), mercury__getopt_io__OptionTable0_11, &mercury__getopt_io__OptionTable_16);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *mercury__getopt_io__Result_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__OptionTable_16));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mercury__getopt_io__Error_22;
            MR_Word mercury__getopt_io__Var_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));

            {
              mercury__getopt_io__Error_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_22, 0) = mercury__getopt_io__Flag_9;
              MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_22, 1) = ((MR_Box) (mercury__getopt_io__Option_8));
              MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_22, 2) = ((MR_Box) (mercury__getopt_io__Var_25));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__getopt_io__Result_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_22));
            }
            *mercury__getopt_io__STATE_VARIABLE_OptionsSet_24 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_23;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__OptionData_14, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word mercury__getopt_io__Error_22;
                MR_Word mercury__getopt_io__Var_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));

                {
                  mercury__getopt_io__Error_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_22, 0) = mercury__getopt_io__Flag_9;
                  MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_22, 1) = ((MR_Box) (mercury__getopt_io__Option_8));
                  MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_22, 2) = ((MR_Box) (mercury__getopt_io__Var_25));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__getopt_io__Result_12 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_22));
                }
                *mercury__getopt_io__STATE_VARIABLE_OptionsSet_24 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_23;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mercury__getopt_io__TypeCtorInfo_54_54;
                MR_Word mercury__getopt_io__Var_41;
                MR_Word mercury__getopt_io__Var_42;
                MR_Word mercury__getopt_io__OptionTable_47;
                MR_Word mercury__getopt_io__V_5_90 = (MR_Word) mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_23;
                MR_Word mercury__getopt_io__V_6_91;

                {
                  mercury__set_ordlist__insert_loop_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_51, mercury__getopt_io__V_5_90, mercury__getopt_io__Flag_9, &mercury__getopt_io__V_6_91);
                }
                *mercury__getopt_io__STATE_VARIABLE_OptionsSet_24 = (MR_Word) mercury__getopt_io__V_6_91;
                mercury__getopt_io__Var_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__getopt_io__Var_41 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__getopt_io_scalar_common_1[4]);
                mercury__getopt_io__TypeCtorInfo_54_54 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
                {
                  mercury__map__set_4_p_0(mercury__getopt_io__TypeInfo_for_OptionType_51, mercury__getopt_io__TypeCtorInfo_54_54, mercury__getopt_io__Flag_9, ((MR_Box) (mercury__getopt_io__Var_41)), mercury__getopt_io__OptionTable0_11, &mercury__getopt_io__OptionTable_47);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *mercury__getopt_io__Result_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__OptionTable_47));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mercury__getopt_io__TypeCtorInfo_55_55;
                MR_Word mercury__getopt_io__Var_38;
                MR_Word mercury__getopt_io__Var_39;
                MR_Word mercury__getopt_io__OptionTable_48;

                {
                  mercury__set__insert_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_51, mercury__getopt_io__Flag_9, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_23, mercury__getopt_io__STATE_VARIABLE_OptionsSet_24);
                }
                mercury__getopt_io__Var_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__getopt_io__Var_38 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__getopt_io_scalar_common_1[5]);
                mercury__getopt_io__TypeCtorInfo_55_55 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
                {
                  mercury__map__set_4_p_0(mercury__getopt_io__TypeInfo_for_OptionType_51, mercury__getopt_io__TypeCtorInfo_55_55, mercury__getopt_io__Flag_9, ((MR_Box) (mercury__getopt_io__Var_38)), mercury__getopt_io__OptionTable0_11, &mercury__getopt_io__OptionTable_48);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *mercury__getopt_io__Result_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__OptionTable_48));
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word mercury__getopt_io__TypeCtorInfo_56_56;
                MR_Word mercury__getopt_io__Var_35;
                MR_Word mercury__getopt_io__Var_36;
                MR_Word mercury__getopt_io__OptionTable_49;
                MR_Word mercury__getopt_io__V_5_64 = (MR_Word) mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_23;
                MR_Word mercury__getopt_io__V_6_65;

                {
                  mercury__set_ordlist__insert_loop_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_51, mercury__getopt_io__V_5_64, mercury__getopt_io__Flag_9, &mercury__getopt_io__V_6_65);
                }
                *mercury__getopt_io__STATE_VARIABLE_OptionsSet_24 = (MR_Word) mercury__getopt_io__V_6_65;
                mercury__getopt_io__Var_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__getopt_io__Var_35 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__getopt_io_scalar_common_1[3]);
                mercury__getopt_io__TypeCtorInfo_56_56 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
                {
                  mercury__tree234__set_4_p_0(mercury__getopt_io__TypeInfo_for_OptionType_51, mercury__getopt_io__TypeCtorInfo_56_56, mercury__getopt_io__Flag_9, ((MR_Box) (mercury__getopt_io__Var_35)), mercury__getopt_io__OptionTable0_11, &mercury__getopt_io__OptionTable_49);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *mercury__getopt_io__Result_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__OptionTable_49));
                }
              }
              break;
          }
          break;
      }
    else
      {
        MR_Word mercury__getopt_io__Var_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__getopt_io__Error_50;

        {
          mercury__getopt_io__Error_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_50, 0) = mercury__getopt_io__Flag_9;
          MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_50, 1) = ((MR_Box) (mercury__getopt_io__Option_8));
          MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_50, 2) = ((MR_Box) (mercury__getopt_io__Var_46));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__getopt_io__Result_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_50));
        }
        *mercury__getopt_io__STATE_VARIABLE_OptionsSet_24 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_23;
      }
  }
}

static void MR_CALL 
mercury__getopt_io__process_option_11_p_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_280,
  MR_Word mercury__getopt_io__HeadVar__1_1,
  MR_String mercury__getopt_io__HeadVar__2_2,
  MR_Box mercury__getopt_io__Flag_3,
  MR_Word mercury__getopt_io__MaybeArg_4,
  MR_Word mercury__getopt_io__HeadVar__5_5,
  MR_Word mercury__getopt_io__HeadVar__6_6,
  MR_Word * mercury__getopt_io__Result_7,
  MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8,
  MR_Word * mercury__getopt_io__STATE_VARIABLE_OptionsSet_9)
{
  {
    MR_bool mercury__getopt_io__succeeded;

    switch (MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__getopt_io__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_164_164;

              {
                mercury__set__insert_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_280, mercury__getopt_io__Flag_3, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt_io__STATE_VARIABLE_OptionsSet_164_164);
              }
              if ((mercury__getopt_io__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word mercury__getopt_io__Var_165 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                  {
                    mercury__getopt_io__process_special_8_p_0(mercury__getopt_io__TypeInfo_for_OptionType_280, mercury__getopt_io__HeadVar__2_2, mercury__getopt_io__Flag_3, mercury__getopt_io__Var_165, mercury__getopt_io__HeadVar__5_5, mercury__getopt_io__HeadVar__6_6, mercury__getopt_io__Result_7, mercury__getopt_io__STATE_VARIABLE_OptionsSet_164_164, mercury__getopt_io__STATE_VARIABLE_OptionsSet_9);
                  }
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
              MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_181_181;

              {
                mercury__set__insert_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_280, mercury__getopt_io__Flag_3, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt_io__STATE_VARIABLE_OptionsSet_181_181);
              }
              if ((mercury__getopt_io__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word mercury__getopt_io__Var_182 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_io_scalar_common_8[0]);

                  {
                    mercury__getopt_io__process_special_8_p_0(mercury__getopt_io__TypeInfo_for_OptionType_280, mercury__getopt_io__HeadVar__2_2, mercury__getopt_io__Flag_3, mercury__getopt_io__Var_182, mercury__getopt_io__HeadVar__5_5, mercury__getopt_io__HeadVar__6_6, mercury__getopt_io__Result_7, mercury__getopt_io__STATE_VARIABLE_OptionsSet_181_181, mercury__getopt_io__STATE_VARIABLE_OptionsSet_9);
                  }
                }
              else
                {
                  MR_Word mercury__getopt_io__Var_185 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_io_scalar_common_8[1]);

                  {
                    mercury__getopt_io__process_special_8_p_0(mercury__getopt_io__TypeInfo_for_OptionType_280, mercury__getopt_io__HeadVar__2_2, mercury__getopt_io__Flag_3, mercury__getopt_io__Var_185, mercury__getopt_io__HeadVar__5_5, mercury__getopt_io__HeadVar__6_6, mercury__getopt_io__Result_7, mercury__getopt_io__STATE_VARIABLE_OptionsSet_181_181, mercury__getopt_io__STATE_VARIABLE_OptionsSet_9);
                  }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_202_202;

              {
                mercury__set__insert_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_280, mercury__getopt_io__Flag_3, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt_io__STATE_VARIABLE_OptionsSet_202_202);
              }
              if ((mercury__getopt_io__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__require__error_1_p_0((MR_String) "int_special argument expected in getopt_io.process_option");
                    return;
                  }
                }
              else
                {
                  MR_String mercury__getopt_io__Arg_196 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__MaybeArg_4, (MR_Integer) 0)));
                  MR_Integer mercury__getopt_io__IntArg_197;

                  {
                    mercury__getopt_io__succeeded = mercury__string__to_int_2_p_0(mercury__getopt_io__Arg_196, &mercury__getopt_io__IntArg_197);
                  }
                  if (mercury__getopt_io__succeeded)
                    {
                      MR_Word mercury__getopt_io__Var_204;

                      {
                        mercury__getopt_io__Var_204 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), mercury__getopt_io__Var_204, 0) = ((MR_Box) (mercury__getopt_io__IntArg_197));
                      }
                      {
                        mercury__getopt_io__process_special_8_p_0(mercury__getopt_io__TypeInfo_for_OptionType_280, mercury__getopt_io__HeadVar__2_2, mercury__getopt_io__Flag_3, mercury__getopt_io__Var_204, mercury__getopt_io__HeadVar__5_5, mercury__getopt_io__HeadVar__6_6, mercury__getopt_io__Result_7, mercury__getopt_io__STATE_VARIABLE_OptionsSet_202_202, mercury__getopt_io__STATE_VARIABLE_OptionsSet_9);
                      }
                    }
                  else
                    {
                      {
                        mercury__getopt_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(mercury__getopt_io__Flag_3, mercury__getopt_io__HeadVar__2_2, mercury__getopt_io__Arg_196, mercury__getopt_io__Result_7);
                      }
                      *mercury__getopt_io__STATE_VARIABLE_OptionsSet_9 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_202_202;
                    }
                }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_219_219;

              {
                mercury__set__insert_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_280, mercury__getopt_io__Flag_3, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt_io__STATE_VARIABLE_OptionsSet_219_219);
              }
              if ((mercury__getopt_io__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__require__error_1_p_0((MR_String) "string_special argument expected in getopt_io.process_option");
                    return;
                  }
                }
              else
                {
                  MR_String mercury__getopt_io__Arg_214 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__MaybeArg_4, (MR_Integer) 0)));
                  MR_Word mercury__getopt_io__Var_221;

                  {
                    mercury__getopt_io__Var_221 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), mercury__getopt_io__Var_221, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), mercury__getopt_io__Var_221, 1) = ((MR_Box) (mercury__getopt_io__Arg_214));
                  }
                  {
                    mercury__getopt_io__process_special_8_p_0(mercury__getopt_io__TypeInfo_for_OptionType_280, mercury__getopt_io__HeadVar__2_2, mercury__getopt_io__Flag_3, mercury__getopt_io__Var_221, mercury__getopt_io__HeadVar__5_5, mercury__getopt_io__HeadVar__6_6, mercury__getopt_io__Result_7, mercury__getopt_io__STATE_VARIABLE_OptionsSet_219_219, mercury__getopt_io__STATE_VARIABLE_OptionsSet_9);
                  }
                }
            }
            break;
          case (MR_Integer) 4:
            if ((mercury__getopt_io__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__error_1_p_0((MR_String) "maybe_string_special argument expected in getopt_io.process_option");
                  return;
                }
              }
            else
              {
                MR_Word mercury__getopt_io__Var_239;

                {
                  mercury__getopt_io__Var_239 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), mercury__getopt_io__Var_239, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), mercury__getopt_io__Var_239, 1) = ((MR_Box) (mercury__getopt_io__MaybeArg_4));
                }
                {
                  mercury__getopt_io__process_special_8_p_0(mercury__getopt_io__TypeInfo_for_OptionType_280, mercury__getopt_io__HeadVar__2_2, mercury__getopt_io__Flag_3, mercury__getopt_io__Var_239, mercury__getopt_io__HeadVar__5_5, mercury__getopt_io__HeadVar__6_6, mercury__getopt_io__Result_7, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt_io__STATE_VARIABLE_OptionsSet_9);
                }
              }
            break;
          case (MR_Integer) 5:
            if ((mercury__getopt_io__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__error_1_p_0((MR_String) "file_special argument expected in getopt_io.process_option");
                  return;
                }
              }
            else
              {
                MR_String mercury__getopt_io__FileName_249 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__MaybeArg_4, (MR_Integer) 0)));
                MR_Word mercury__getopt_io__OpenRes_250;

                {
                  mercury__io__open_input_4_p_0(mercury__getopt_io__FileName_249, &mercury__getopt_io__OpenRes_250);
                }
                if (((MR_tag((MR_Word) mercury__getopt_io__OpenRes_250)) == (MR_mktag((MR_Integer) 1))))
                  {
                    MR_Word mercury__getopt_io__Reason_277;
                    MR_Word mercury__getopt_io__Error_278;
                    MR_Word mercury__getopt_io__IO_Error_279 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__OpenRes_250, (MR_Integer) 0)));

                    {
                      mercury__getopt_io__Reason_277 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_277, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_277, 1) = ((MR_Box) (mercury__getopt_io__FileName_249));
                      MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_277, 2) = ((MR_Box) (mercury__getopt_io__IO_Error_279));
                    }
                    {
                      mercury__getopt_io__Error_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_278, 0) = mercury__getopt_io__Flag_3;
                      MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_278, 1) = ((MR_Box) (mercury__getopt_io__HeadVar__2_2));
                      MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_278, 2) = ((MR_Box) (mercury__getopt_io__Reason_277));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *mercury__getopt_io__Result_7 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_278));
                    }
                    *mercury__getopt_io__STATE_VARIABLE_OptionsSet_9 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8;
                  }
                else
                  {
                    MR_Word mercury__getopt_io__FileStream_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OpenRes_250, (MR_Integer) 0)));
                    MR_Word mercury__getopt_io__ReadRes_252;

                    {
                      mercury__io__read_file_as_string_4_p_0(mercury__getopt_io__FileStream_251, &mercury__getopt_io__ReadRes_252);
                    }
                    if (((MR_tag((MR_Word) mercury__getopt_io__ReadRes_252)) == (MR_mktag((MR_Integer) 1))))
                      {
                        MR_Word mercury__getopt_io__IO_Error_263 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__ReadRes_252, (MR_Integer) 1)));
                        MR_Word mercury__getopt_io__Reason_275;
                        MR_Word mercury__getopt_io__Error_276;
                        MR_String mercury__getopt_io__Var_262 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__ReadRes_252, (MR_Integer) 0)));

                        {
                          mercury__getopt_io__Reason_275 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_275, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_275, 1) = ((MR_Box) (mercury__getopt_io__FileName_249));
                          MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_275, 2) = ((MR_Box) (mercury__getopt_io__IO_Error_263));
                        }
                        {
                          mercury__getopt_io__Error_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_276, 0) = mercury__getopt_io__Flag_3;
                          MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_276, 1) = ((MR_Box) (mercury__getopt_io__HeadVar__2_2));
                          MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_276, 2) = ((MR_Box) (mercury__getopt_io__Reason_275));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *mercury__getopt_io__Result_7 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_276));
                        }
                        *mercury__getopt_io__STATE_VARIABLE_OptionsSet_9 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8;
                      }
                    else
                      {
                        MR_String mercury__getopt_io__Contents_253 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__getopt_io__ReadRes_252, (MR_Integer) 0)));
                        MR_Word mercury__getopt_io__Words_254;
                        MR_Word mercury__getopt_io__Args_255;
                        MR_Word mercury__getopt_io__Result0_257;
                        MR_Word mercury__getopt_io__Var_271;
                        MR_Word mercury__getopt_io___OptionArgs_256;

                        {
                          mercury__getopt_io__Words_254 = mercury__string__words_1_f_0(mercury__getopt_io__Contents_253);
                        }
                        mercury__getopt_io__Var_271 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        {
                          mercury__getopt_io__process_arguments_11_p_0(mercury__getopt_io__TypeInfo_for_OptionType_280, mercury__getopt_io__Words_254, &mercury__getopt_io__Args_255, mercury__getopt_io__HeadVar__5_5, mercury__getopt_io__Var_271, &mercury__getopt_io___OptionArgs_256, mercury__getopt_io__HeadVar__6_6, &mercury__getopt_io__Result0_257, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt_io__STATE_VARIABLE_OptionsSet_9);
                        }
                        if ((mercury__getopt_io__Args_255 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          *mercury__getopt_io__Result_7 = mercury__getopt_io__Result0_257;
                        else
                          {
                            MR_Word mercury__getopt_io__Reason_260;
                            MR_Word mercury__getopt_io__Error_261;

                            {
                              mercury__getopt_io__Reason_260 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_260, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                              MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_260, 1) = ((MR_Box) (mercury__getopt_io__FileName_249));
                            }
                            {
                              mercury__getopt_io__Error_261 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_261, 0) = mercury__getopt_io__Flag_3;
                              MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_261, 1) = ((MR_Box) (mercury__getopt_io__HeadVar__2_2));
                              MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_261, 2) = ((MR_Box) (mercury__getopt_io__Reason_260));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                              *mercury__getopt_io__Result_7 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_261));
                            }
                          }
                      }
                    {
                      mercury__io__close_input_3_p_0(mercury__getopt_io__FileStream_251);
                    }
                  }
              }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__set__insert_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_280, mercury__getopt_io__Flag_3, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt_io__STATE_VARIABLE_OptionsSet_9);
          }
          if ((mercury__getopt_io__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word mercury__getopt_io__TypeCtorInfo_282_282 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
              MR_Word mercury__getopt_io__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_io_scalar_common_8[0]);
              MR_Word mercury__getopt_io__STATE_VARIABLE_OptionTable_32_34;

              {
                mercury__map__set_4_p_0(mercury__getopt_io__TypeInfo_for_OptionType_280, mercury__getopt_io__TypeCtorInfo_282_282, mercury__getopt_io__Flag_3, ((MR_Box) (mercury__getopt_io__Var_28)), mercury__getopt_io__HeadVar__6_6, &mercury__getopt_io__STATE_VARIABLE_OptionTable_32_34);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *mercury__getopt_io__Result_7 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__STATE_VARIABLE_OptionTable_32_34));
              }
            }
          else
            {
              MR_Word mercury__getopt_io__TypeCtorInfo_281_281 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
              MR_Word mercury__getopt_io__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_io_scalar_common_8[1]);
              MR_Word mercury__getopt_io__STATE_VARIABLE_OptionTable_32_32;

              {
                mercury__map__set_4_p_0(mercury__getopt_io__TypeInfo_for_OptionType_280, mercury__getopt_io__TypeCtorInfo_281_281, mercury__getopt_io__Flag_3, ((MR_Box) (mercury__getopt_io__Var_31)), mercury__getopt_io__HeadVar__6_6, &mercury__getopt_io__STATE_VARIABLE_OptionTable_32_32);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *mercury__getopt_io__Result_7 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__STATE_VARIABLE_OptionTable_32_32));
              }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__set__insert_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_280, mercury__getopt_io__Flag_3, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt_io__STATE_VARIABLE_OptionsSet_9);
          }
          if ((mercury__getopt_io__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__error_1_p_0((MR_String) "integer argument expected in getopt_io.process_option");
                return;
              }
            }
          else
            {
              MR_String mercury__getopt_io__Arg_44 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__MaybeArg_4, (MR_Integer) 0)));
              MR_Integer mercury__getopt_io__IntArg_45;

              {
                mercury__getopt_io__succeeded = mercury__string__to_int_2_p_0(mercury__getopt_io__Arg_44, &mercury__getopt_io__IntArg_45);
              }
              if (mercury__getopt_io__succeeded)
                {
                  MR_Word mercury__getopt_io__TypeCtorInfo_283_283;
                  MR_Word mercury__getopt_io__Var_53;
                  MR_Word mercury__getopt_io__STATE_VARIABLE_OptionTable_54_54;

                  {
                    mercury__getopt_io__Var_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), mercury__getopt_io__Var_53, 0) = ((MR_Box) (mercury__getopt_io__IntArg_45));
                  }
                  mercury__getopt_io__TypeCtorInfo_283_283 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
                  {
                    mercury__map__set_4_p_0(mercury__getopt_io__TypeInfo_for_OptionType_280, mercury__getopt_io__TypeCtorInfo_283_283, mercury__getopt_io__Flag_3, ((MR_Box) (mercury__getopt_io__Var_53)), mercury__getopt_io__HeadVar__6_6, &mercury__getopt_io__STATE_VARIABLE_OptionTable_54_54);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *mercury__getopt_io__Result_7 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__STATE_VARIABLE_OptionTable_54_54));
                  }
                }
              else
                {
                  mercury__getopt_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(mercury__getopt_io__Flag_3, mercury__getopt_io__HeadVar__2_2, mercury__getopt_io__Arg_44, mercury__getopt_io__Result_7);
                }
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__set__insert_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_280, mercury__getopt_io__Flag_3, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt_io__STATE_VARIABLE_OptionsSet_9);
              }
              if ((mercury__getopt_io__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__require__error_1_p_0((MR_String) "string argument expected in getopt_io.process_option");
                    return;
                  }
                }
              else
                {
                  MR_Word mercury__getopt_io__TypeCtorInfo_284_284;
                  MR_String mercury__getopt_io__Arg_68 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__MaybeArg_4, (MR_Integer) 0)));
                  MR_Word mercury__getopt_io__Var_76;
                  MR_Word mercury__getopt_io__STATE_VARIABLE_OptionTable_77_77;

                  {
                    mercury__getopt_io__Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), mercury__getopt_io__Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), mercury__getopt_io__Var_76, 1) = ((MR_Box) (mercury__getopt_io__Arg_68));
                  }
                  mercury__getopt_io__TypeCtorInfo_284_284 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
                  {
                    mercury__map__set_4_p_0(mercury__getopt_io__TypeInfo_for_OptionType_280, mercury__getopt_io__TypeCtorInfo_284_284, mercury__getopt_io__Flag_3, ((MR_Box) (mercury__getopt_io__Var_76)), mercury__getopt_io__HeadVar__6_6, &mercury__getopt_io__STATE_VARIABLE_OptionTable_77_77);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *mercury__getopt_io__Result_7 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__STATE_VARIABLE_OptionTable_77_77));
                  }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__set__insert_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_280, mercury__getopt_io__Flag_3, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt_io__STATE_VARIABLE_OptionsSet_9);
              }
              if ((mercury__getopt_io__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__require__error_1_p_0((MR_String) "integer argument expected in getopt_io.process_option");
                    return;
                  }
                }
              else
                {
                  MR_String mercury__getopt_io__Arg_89 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__MaybeArg_4, (MR_Integer) 0)));
                  MR_Integer mercury__getopt_io__IntArg_90;

                  {
                    mercury__getopt_io__succeeded = mercury__string__to_int_2_p_0(mercury__getopt_io__Arg_89, &mercury__getopt_io__IntArg_90);
                  }
                  if (mercury__getopt_io__succeeded)
                    {
                      MR_Word mercury__getopt_io__TypeCtorInfo_285_285;
                      MR_Word mercury__getopt_io__Var_98;
                      MR_Word mercury__getopt_io__STATE_VARIABLE_OptionTable_99_99;
                      MR_Word mercury__getopt_io__Var_100;

                      {
                        mercury__getopt_io__Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__getopt_io__Var_100, 0) = ((MR_Box) (mercury__getopt_io__IntArg_90));
                      }
                      {
                        mercury__getopt_io__Var_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), mercury__getopt_io__Var_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), mercury__getopt_io__Var_98, 1) = ((MR_Box) (mercury__getopt_io__Var_100));
                      }
                      mercury__getopt_io__TypeCtorInfo_285_285 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
                      {
                        mercury__map__set_4_p_0(mercury__getopt_io__TypeInfo_for_OptionType_280, mercury__getopt_io__TypeCtorInfo_285_285, mercury__getopt_io__Flag_3, ((MR_Box) (mercury__getopt_io__Var_98)), mercury__getopt_io__HeadVar__6_6, &mercury__getopt_io__STATE_VARIABLE_OptionTable_99_99);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *mercury__getopt_io__Result_7 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__STATE_VARIABLE_OptionTable_99_99));
                      }
                    }
                  else
                    {
                      mercury__getopt_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(mercury__getopt_io__Flag_3, mercury__getopt_io__HeadVar__2_2, mercury__getopt_io__Arg_89, mercury__getopt_io__Result_7);
                    }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__set__insert_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_280, mercury__getopt_io__Flag_3, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt_io__STATE_VARIABLE_OptionsSet_9);
              }
              if ((mercury__getopt_io__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__require__error_1_p_0((MR_String) "string argument expected in getopt_io.process_option");
                    return;
                  }
                }
              else
                {
                  MR_Word mercury__getopt_io__TypeCtorInfo_286_286;
                  MR_Word mercury__getopt_io__Var_122;
                  MR_Word mercury__getopt_io__STATE_VARIABLE_OptionTable_123_123;

                  {
                    mercury__getopt_io__Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), mercury__getopt_io__Var_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), mercury__getopt_io__Var_122, 1) = ((MR_Box) (mercury__getopt_io__MaybeArg_4));
                  }
                  mercury__getopt_io__TypeCtorInfo_286_286 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
                  {
                    mercury__map__set_4_p_0(mercury__getopt_io__TypeInfo_for_OptionType_280, mercury__getopt_io__TypeCtorInfo_286_286, mercury__getopt_io__Flag_3, ((MR_Box) (mercury__getopt_io__Var_122)), mercury__getopt_io__HeadVar__6_6, &mercury__getopt_io__STATE_VARIABLE_OptionTable_123_123);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *mercury__getopt_io__Result_7 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__STATE_VARIABLE_OptionTable_123_123));
                  }
                }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word mercury__getopt_io__List0_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));

              {
                mercury__set__insert_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_280, mercury__getopt_io__Flag_3, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt_io__STATE_VARIABLE_OptionsSet_9);
              }
              if ((mercury__getopt_io__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__require__error_1_p_0((MR_String) "acumulating argument expected in getopt_io.process_option");
                    return;
                  }
                }
              else
                {
                  MR_Word mercury__getopt_io__TypeCtorInfo_287_287;
                  MR_Word mercury__getopt_io__TypeCtorInfo_288_288;
                  MR_String mercury__getopt_io__Arg_136 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__MaybeArg_4, (MR_Integer) 0)));
                  MR_Word mercury__getopt_io__List_137;
                  MR_Word mercury__getopt_io__Var_145;
                  MR_Word mercury__getopt_io__Var_146 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  MR_Word mercury__getopt_io__Var_147;
                  MR_Word mercury__getopt_io__STATE_VARIABLE_OptionTable_148_148;

                  {
                    mercury__getopt_io__Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__getopt_io__Var_145, 0) = ((MR_Box) (mercury__getopt_io__Arg_136));
                    MR_hl_field(MR_mktag(1), mercury__getopt_io__Var_145, 1) = ((MR_Box) (mercury__getopt_io__Var_146));
                  }
                  mercury__getopt_io__TypeCtorInfo_287_287 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                  {
                    mercury__list__append_3_p_1(mercury__getopt_io__TypeCtorInfo_287_287, mercury__getopt_io__List0_127, mercury__getopt_io__Var_145, &mercury__getopt_io__List_137);
                  }
                  {
                    mercury__getopt_io__Var_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), mercury__getopt_io__Var_147, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), mercury__getopt_io__Var_147, 1) = ((MR_Box) (mercury__getopt_io__List_137));
                  }
                  mercury__getopt_io__TypeCtorInfo_288_288 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
                  {
                    mercury__map__set_4_p_0(mercury__getopt_io__TypeInfo_for_OptionType_280, mercury__getopt_io__TypeCtorInfo_288_288, mercury__getopt_io__Flag_3, ((MR_Box) (mercury__getopt_io__Var_147)), mercury__getopt_io__HeadVar__6_6, &mercury__getopt_io__STATE_VARIABLE_OptionTable_148_148);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *mercury__getopt_io__Result_7 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__STATE_VARIABLE_OptionTable_148_148));
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
mercury__getopt_io__handle_short_options_12_p_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_70,
  MR_Word mercury__getopt_io__HeadVar__1_1,
  MR_Word mercury__getopt_io__OptionOps_2,
  MR_Word mercury__getopt_io__HeadVar__3_3,
  MR_Word * mercury__getopt_io__Args_4,
  MR_Word mercury__getopt_io__HeadVar__5_5,
  MR_Word * mercury__getopt_io__OptionArgs_6,
  MR_Word mercury__getopt_io__HeadVar__7_7,
  MR_Word * mercury__getopt_io__HeadVar__8_8,
  MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_9,
  MR_Word * mercury__getopt_io__STATE_VARIABLE_OptionsSet_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__getopt_io__succeeded;

        if ((mercury__getopt_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__getopt_io__Args_4 = mercury__getopt_io__HeadVar__3_3;
            *mercury__getopt_io__OptionArgs_6 = mercury__getopt_io__HeadVar__5_5;
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *mercury__getopt_io__HeadVar__8_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__HeadVar__7_7));
            }
            *mercury__getopt_io__STATE_VARIABLE_OptionsSet_10 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_9;
          }
        else
          {
            MR_Char mercury__getopt_io__Opt_23 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__getopt_io__Opts0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__getopt_io__ShortOptionPred_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_2, (MR_Integer) 0)));
            MR_Word mercury__getopt_io__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_2, (MR_Integer) 1)));
            MR_Word mercury__getopt_io__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_2, (MR_Integer) 2)));
            MR_Box mercury__getopt_io__Flag_35;
            MR_bool MR_CALL (* mercury__getopt_io__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt_io__ShortOptionPred_34, (MR_Integer) 1)));

            {
              mercury__getopt_io__succeeded = mercury__getopt_io__func_0(((MR_Box) mercury__getopt_io__ShortOptionPred_34), ((MR_Box) (MR_Word) (mercury__getopt_io__Opt_23)), &mercury__getopt_io__Flag_35);
            }
            if (mercury__getopt_io__succeeded)
              {
                MR_Word mercury__getopt_io__OptionData_36;
                MR_Word mercury__getopt_io__TypeCtorInfo_71_71 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
                MR_Box mercury__getopt_io__conv1_OptionData_36;

                {
                  mercury__getopt_io__succeeded = mercury__tree234__search_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_70, mercury__getopt_io__TypeCtorInfo_71_71, mercury__getopt_io__HeadVar__7_7, mercury__getopt_io__Flag_35, &mercury__getopt_io__conv1_OptionData_36);
                }
                if (mercury__getopt_io__succeeded)
                  {
                    mercury__getopt_io__OptionData_36 = ((MR_Word) mercury__getopt_io__conv1_OptionData_36);
                    mercury__getopt_io__succeeded = MR_TRUE;
                  }
                if (mercury__getopt_io__succeeded)
                  {
                    MR_Word mercury__getopt_io__Args1_38;
                    MR_Word mercury__getopt_io__OptionArgs1_39;
                    MR_Word mercury__getopt_io__MaybeOptionArg_40;
                    MR_Word mercury__getopt_io__Opts1_41;
                    MR_String mercury__getopt_io__Option_42;
                    MR_Word mercury__getopt_io__Result1_43;
                    MR_Word mercury__getopt_io__Var_53;
                    MR_Word mercury__getopt_io__Var_55;
                    MR_Word mercury__getopt_io__Var_56;
                    MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_57_57;
                    MR_Word mercury__getopt_io__Var_72;

                    switch (MR_tag((MR_Word) mercury__getopt_io__OptionData_36)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(mercury__getopt_io__OptionData_36)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            mercury__getopt_io__Var_72 = (MR_Integer) 0;
                            break;
                          case (MR_Integer) 1:
                            mercury__getopt_io__Var_72 = (MR_Integer) 0;
                            break;
                          case (MR_Integer) 2:
                            mercury__getopt_io__Var_72 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 3:
                            mercury__getopt_io__Var_72 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 4:
                            mercury__getopt_io__Var_72 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 5:
                            mercury__getopt_io__Var_72 = (MR_Integer) 1;
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        mercury__getopt_io__Var_72 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 2:
                        mercury__getopt_io__Var_72 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__OptionData_36, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            mercury__getopt_io__Var_72 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 1:
                            mercury__getopt_io__Var_72 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 2:
                            mercury__getopt_io__Var_72 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 3:
                            mercury__getopt_io__Var_72 = (MR_Integer) 1;
                            break;
                        }
                        break;
                    }
                    mercury__getopt_io__succeeded = ((MR_Integer) 1 == mercury__getopt_io__Var_72);
                    if (mercury__getopt_io__succeeded)
                      {
                        MR_String mercury__getopt_io__Arg_37;
                        MR_String mercury__getopt_io__ArgPrime_88;
                        MR_Word mercury__getopt_io__ArgsPrime_89;

                        mercury__getopt_io__succeeded = (mercury__getopt_io__Opts0_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (mercury__getopt_io__succeeded)
                          {
                            mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
                            if (mercury__getopt_io__succeeded)
                              {
                                mercury__getopt_io__ArgPrime_88 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));
                                mercury__getopt_io__ArgsPrime_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));
                              }
                          }
                        if (mercury__getopt_io__succeeded)
                          {
                            {
                              mercury__getopt_io__OptionArgs1_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), mercury__getopt_io__OptionArgs1_39, 0) = ((MR_Box) (mercury__getopt_io__ArgPrime_88));
                              MR_hl_field(MR_mktag(1), mercury__getopt_io__OptionArgs1_39, 1) = ((MR_Box) (mercury__getopt_io__HeadVar__5_5));
                            }
                            mercury__getopt_io__Arg_37 = mercury__getopt_io__ArgPrime_88;
                            mercury__getopt_io__Args1_38 = mercury__getopt_io__ArgsPrime_89;
                          }
                        else
                          {
                            {
                              mercury__string__from_char_list_2_p_0(mercury__getopt_io__Opts0_24, &mercury__getopt_io__Arg_37);
                            }
                            mercury__getopt_io__OptionArgs1_39 = mercury__getopt_io__HeadVar__5_5;
                            mercury__getopt_io__Args1_38 = mercury__getopt_io__HeadVar__3_3;
                          }
                        {
                          mercury__getopt_io__MaybeOptionArg_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__getopt_io__MaybeOptionArg_40, 0) = ((MR_Box) (mercury__getopt_io__Arg_37));
                        }
                        mercury__getopt_io__Opts1_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      }
                    else
                      {
                        mercury__getopt_io__MaybeOptionArg_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        mercury__getopt_io__Opts1_41 = mercury__getopt_io__Opts0_24;
                        mercury__getopt_io__OptionArgs1_39 = mercury__getopt_io__HeadVar__5_5;
                        mercury__getopt_io__Args1_38 = mercury__getopt_io__HeadVar__3_3;
                      }
                    mercury__getopt_io__Var_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      mercury__getopt_io__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__getopt_io__Var_55, 0) = ((MR_Box) (MR_Word) (mercury__getopt_io__Opt_23));
                      MR_hl_field(MR_mktag(1), mercury__getopt_io__Var_55, 1) = ((MR_Box) (mercury__getopt_io__Var_56));
                    }
                    {
                      mercury__getopt_io__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__getopt_io__Var_53, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
                      MR_hl_field(MR_mktag(1), mercury__getopt_io__Var_53, 1) = ((MR_Box) (mercury__getopt_io__Var_55));
                    }
                    {
                      mercury__string__from_char_list_2_p_0(mercury__getopt_io__Var_53, &mercury__getopt_io__Option_42);
                    }
                    {
                      mercury__getopt_io__process_option_11_p_0(mercury__getopt_io__TypeInfo_for_OptionType_70, mercury__getopt_io__OptionData_36, mercury__getopt_io__Option_42, mercury__getopt_io__Flag_35, mercury__getopt_io__MaybeOptionArg_40, mercury__getopt_io__OptionOps_2, mercury__getopt_io__HeadVar__7_7, &mercury__getopt_io__Result1_43, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_9, &mercury__getopt_io__STATE_VARIABLE_OptionsSet_57_57);
                    }
                    if (((MR_tag((MR_Word) mercury__getopt_io__Result1_43)) == (MR_mktag((MR_Integer) 1))))
                      {
                        *mercury__getopt_io__HeadVar__8_8 = mercury__getopt_io__Result1_43;
                        *mercury__getopt_io__OptionArgs_6 = mercury__getopt_io__OptionArgs1_39;
                        *mercury__getopt_io__Args_4 = mercury__getopt_io__Args1_38;
                        *mercury__getopt_io__STATE_VARIABLE_OptionsSet_10 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_57_57;
                      }
                    else
                      {
                        MR_Word mercury__getopt_io__OptionTable1_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__Result1_43, (MR_Integer) 0)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word mercury__getopt_io__next_value_of_HeadVar__1_1 = mercury__getopt_io__Opts1_41;
                          MR_Word mercury__getopt_io__next_value_of_HeadVar__3_3 = mercury__getopt_io__Args1_38;
                          MR_Word mercury__getopt_io__next_value_of_HeadVar__5_5 = mercury__getopt_io__OptionArgs1_39;
                          MR_Word mercury__getopt_io__next_value_of_HeadVar__7_7 = mercury__getopt_io__OptionTable1_44;
                          MR_Word mercury__getopt_io__next_value_of_STATE_VARIABLE_OptionsSet_0_9 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_57_57;

                          mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_9 = mercury__getopt_io__next_value_of_STATE_VARIABLE_OptionsSet_0_9;
                          mercury__getopt_io__HeadVar__7_7 = mercury__getopt_io__next_value_of_HeadVar__7_7;
                          mercury__getopt_io__HeadVar__5_5 = mercury__getopt_io__next_value_of_HeadVar__5_5;
                          mercury__getopt_io__HeadVar__3_3 = mercury__getopt_io__next_value_of_HeadVar__3_3;
                          mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                  }
                else
                  {
                    MR_String mercury__getopt_io__OptString_46;
                    MR_Word mercury__getopt_io__Error_47;
                    MR_String mercury__getopt_io__Var_61;
                    MR_Word mercury__getopt_io__Var_63;
                    MR_Word mercury__getopt_io__V_5_92;
                    MR_Word mercury__getopt_io__V_6_93 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                    {
                      mercury__getopt_io__V_5_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__getopt_io__V_5_92, 0) = ((MR_Box) (MR_Word) (mercury__getopt_io__Opt_23));
                      MR_hl_field(MR_mktag(1), mercury__getopt_io__V_5_92, 1) = ((MR_Box) (mercury__getopt_io__V_6_93));
                    }
                    {
                      mercury__string__to_char_list_2_p_1(&mercury__getopt_io__OptString_46, mercury__getopt_io__V_5_92);
                    }
                    {
                      mercury__getopt_io__Var_61 = mercury__string__f_43_43_2_f_0((MR_String) "-", mercury__getopt_io__OptString_46);
                    }
                    mercury__getopt_io__Var_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      mercury__getopt_io__Error_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_47, 0) = mercury__getopt_io__Flag_35;
                      MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_47, 1) = ((MR_Box) (mercury__getopt_io__Var_61));
                      MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_47, 2) = ((MR_Box) (mercury__getopt_io__Var_63));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *mercury__getopt_io__HeadVar__8_8 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_47));
                    }
                    *mercury__getopt_io__OptionArgs_6 = mercury__getopt_io__HeadVar__5_5;
                    *mercury__getopt_io__Args_4 = mercury__getopt_io__HeadVar__3_3;
                    *mercury__getopt_io__STATE_VARIABLE_OptionsSet_10 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_9;
                  }
              }
            else
              {
                MR_String mercury__getopt_io__Var_64;
                MR_String mercury__getopt_io__OptString_66;
                MR_Word mercury__getopt_io__Error_67;
                MR_Word mercury__getopt_io__V_5_96;
                MR_Word mercury__getopt_io__V_6_97 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                {
                  mercury__getopt_io__V_5_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__getopt_io__V_5_96, 0) = ((MR_Box) (MR_Word) (mercury__getopt_io__Opt_23));
                  MR_hl_field(MR_mktag(1), mercury__getopt_io__V_5_96, 1) = ((MR_Box) (mercury__getopt_io__V_6_97));
                }
                {
                  mercury__string__to_char_list_2_p_1(&mercury__getopt_io__OptString_66, mercury__getopt_io__V_5_96);
                }
                {
                  mercury__getopt_io__Var_64 = mercury__string__f_43_43_2_f_0((MR_String) "-", mercury__getopt_io__OptString_66);
                }
                {
                  mercury__getopt_io__Error_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__getopt_io__Error_67, 0) = ((MR_Box) (mercury__getopt_io__Var_64));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__getopt_io__HeadVar__8_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_67));
                }
                *mercury__getopt_io__OptionArgs_6 = mercury__getopt_io__HeadVar__5_5;
                *mercury__getopt_io__Args_4 = mercury__getopt_io__HeadVar__3_3;
                *mercury__getopt_io__STATE_VARIABLE_OptionsSet_10 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_9;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__getopt_io__handle_long_option_15_p_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_55,
  MR_String mercury__getopt_io__Option_16,
  MR_Box mercury__getopt_io__Flag_17,
  MR_Word mercury__getopt_io__OptionData_18,
  MR_Word mercury__getopt_io__MaybeOptionArg0_19,
  MR_Word mercury__getopt_io__Args0_20,
  MR_Word * mercury__getopt_io__Args_21,
  MR_Word mercury__getopt_io__OptionOps_22,
  MR_Word mercury__getopt_io__OptionArgs0_23,
  MR_Word * mercury__getopt_io__OptionArgs_24,
  MR_Word mercury__getopt_io__OptionTable0_25,
  MR_Word * mercury__getopt_io__Result_26,
  MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_40,
  MR_Word * mercury__getopt_io__STATE_VARIABLE_OptionsSet_41)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Word mercury__getopt_io__MaybeOptionArg_31;
    MR_Word mercury__getopt_io__Args1_32;
    MR_Word mercury__getopt_io__MissingArg_33;
    MR_Word mercury__getopt_io__OptionArgs1_34;
    MR_Word mercury__getopt_io__Var_56;

    switch (MR_tag((MR_Word) mercury__getopt_io__OptionData_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__getopt_io__OptionData_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__getopt_io__Var_56 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            mercury__getopt_io__Var_56 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            mercury__getopt_io__Var_56 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            mercury__getopt_io__Var_56 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            mercury__getopt_io__Var_56 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            mercury__getopt_io__Var_56 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        mercury__getopt_io__Var_56 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        mercury__getopt_io__Var_56 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__OptionData_18, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__getopt_io__Var_56 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            mercury__getopt_io__Var_56 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            mercury__getopt_io__Var_56 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            mercury__getopt_io__Var_56 = (MR_Integer) 1;
            break;
        }
        break;
    }
    mercury__getopt_io__succeeded = ((MR_Integer) 1 == mercury__getopt_io__Var_56);
    if (mercury__getopt_io__succeeded)
      mercury__getopt_io__succeeded = (mercury__getopt_io__MaybeOptionArg0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (mercury__getopt_io__succeeded)
      if ((mercury__getopt_io__Args0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          mercury__getopt_io__MaybeOptionArg_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          mercury__getopt_io__Args1_32 = mercury__getopt_io__Args0_20;
          mercury__getopt_io__OptionArgs1_34 = mercury__getopt_io__OptionArgs0_23;
          mercury__getopt_io__MissingArg_33 = (MR_Integer) 1;
        }
      else
        {
          MR_String mercury__getopt_io__Arg_29 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__Args0_20, (MR_Integer) 0)));

          mercury__getopt_io__Args1_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__Args0_20, (MR_Integer) 1)));
          {
            mercury__getopt_io__MaybeOptionArg_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__getopt_io__MaybeOptionArg_31, 0) = ((MR_Box) (mercury__getopt_io__Arg_29));
          }
          mercury__getopt_io__MissingArg_33 = (MR_Integer) 0;
          {
            mercury__getopt_io__OptionArgs1_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__getopt_io__OptionArgs1_34, 0) = ((MR_Box) (mercury__getopt_io__Arg_29));
            MR_hl_field(MR_mktag(1), mercury__getopt_io__OptionArgs1_34, 1) = ((MR_Box) (mercury__getopt_io__OptionArgs0_23));
          }
        }
    else
      {
        mercury__getopt_io__MaybeOptionArg_31 = mercury__getopt_io__MaybeOptionArg0_19;
        mercury__getopt_io__Args1_32 = mercury__getopt_io__Args0_20;
        mercury__getopt_io__OptionArgs1_34 = mercury__getopt_io__OptionArgs0_23;
        mercury__getopt_io__MissingArg_33 = (MR_Integer) 0;
      }
    switch (mercury__getopt_io__MissingArg_33) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String mercury__getopt_io__ArgVal_36;
          MR_Word mercury__getopt_io__Var_57;

          switch (MR_tag((MR_Word) mercury__getopt_io__OptionData_18)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(mercury__getopt_io__OptionData_18)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  mercury__getopt_io__Var_57 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  mercury__getopt_io__Var_57 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 2:
                  mercury__getopt_io__Var_57 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  mercury__getopt_io__Var_57 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 4:
                  mercury__getopt_io__Var_57 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 5:
                  mercury__getopt_io__Var_57 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              mercury__getopt_io__Var_57 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              mercury__getopt_io__Var_57 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__OptionData_18, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  mercury__getopt_io__Var_57 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  mercury__getopt_io__Var_57 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  mercury__getopt_io__Var_57 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  mercury__getopt_io__Var_57 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          mercury__getopt_io__succeeded = ((MR_Integer) 0 == mercury__getopt_io__Var_57);
          if (mercury__getopt_io__succeeded)
            {
              mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__MaybeOptionArg_31)) == (MR_mktag((MR_Integer) 1)));
              if (mercury__getopt_io__succeeded)
                mercury__getopt_io__ArgVal_36 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__MaybeOptionArg_31, (MR_Integer) 0)));
            }
          if (mercury__getopt_io__succeeded)
            {
              MR_Word mercury__getopt_io__Var_46;
              MR_Word mercury__getopt_io__Error_52;

              *mercury__getopt_io__Args_21 = mercury__getopt_io__Args0_20;
              *mercury__getopt_io__OptionArgs_24 = mercury__getopt_io__OptionArgs1_34;
              {
                mercury__getopt_io__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__getopt_io__Var_46, 0) = ((MR_Box) (mercury__getopt_io__ArgVal_36));
              }
              {
                mercury__getopt_io__Error_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_52, 0) = mercury__getopt_io__Flag_17;
                MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_52, 1) = ((MR_Box) (mercury__getopt_io__Option_16));
                MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_52, 2) = ((MR_Box) (mercury__getopt_io__Var_46));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mercury__getopt_io__Result_26 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_52));
              }
              *mercury__getopt_io__STATE_VARIABLE_OptionsSet_41 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_40;
            }
          else
            {
              MR_Word mercury__getopt_io__Result1_37;
              MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_47_47;

              {
                mercury__getopt_io__process_option_11_p_0(mercury__getopt_io__TypeInfo_for_OptionType_55, mercury__getopt_io__OptionData_18, mercury__getopt_io__Option_16, mercury__getopt_io__Flag_17, mercury__getopt_io__MaybeOptionArg_31, mercury__getopt_io__OptionOps_22, mercury__getopt_io__OptionTable0_25, &mercury__getopt_io__Result1_37, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_40, &mercury__getopt_io__STATE_VARIABLE_OptionsSet_47_47);
              }
              if (((MR_tag((MR_Word) mercury__getopt_io__Result1_37)) == (MR_mktag((MR_Integer) 1))))
                {
                  *mercury__getopt_io__Result_26 = mercury__getopt_io__Result1_37;
                  *mercury__getopt_io__OptionArgs_24 = mercury__getopt_io__OptionArgs1_34;
                  *mercury__getopt_io__Args_21 = mercury__getopt_io__Args1_32;
                  *mercury__getopt_io__STATE_VARIABLE_OptionsSet_41 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_47_47;
                }
              else
                {
                  MR_Word mercury__getopt_io__OptionTable1_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__Result1_37, (MR_Integer) 0)));

                  {
                    mercury__getopt_io__process_arguments_11_p_0(mercury__getopt_io__TypeInfo_for_OptionType_55, mercury__getopt_io__Args1_32, mercury__getopt_io__Args_21, mercury__getopt_io__OptionOps_22, mercury__getopt_io__OptionArgs1_34, mercury__getopt_io__OptionArgs_24, mercury__getopt_io__OptionTable1_38, mercury__getopt_io__Result_26, mercury__getopt_io__STATE_VARIABLE_OptionsSet_47_47, mercury__getopt_io__STATE_VARIABLE_OptionsSet_41);
                  }
                }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__getopt_io__Error_35;
          MR_Word mercury__getopt_io__Var_51;

          *mercury__getopt_io__Args_21 = mercury__getopt_io__Args0_20;
          *mercury__getopt_io__OptionArgs_24 = mercury__getopt_io__OptionArgs1_34;
          mercury__getopt_io__Var_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          {
            mercury__getopt_io__Error_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_35, 0) = mercury__getopt_io__Flag_17;
            MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_35, 1) = ((MR_Box) (mercury__getopt_io__Option_16));
            MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_35, 2) = ((MR_Box) (mercury__getopt_io__Var_51));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mercury__getopt_io__Result_26 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_35));
          }
          *mercury__getopt_io__STATE_VARIABLE_OptionsSet_41 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_40;
        }
        break;
    }
  }
}

void MR_CALL 
mercury__getopt_io__process_arguments_11_p_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_152,
  MR_Word mercury__getopt_io__HeadVar__1_1,
  MR_Word * mercury__getopt_io__HeadVar__2_2,
  MR_Word mercury__getopt_io__OptionOps_3,
  MR_Word mercury__getopt_io__HeadVar__4_4,
  MR_Word * mercury__getopt_io__OptionArgs_5,
  MR_Word mercury__getopt_io__HeadVar__6_6,
  MR_Word * mercury__getopt_io__HeadVar__7_7,
  MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8,
  MR_Word * mercury__getopt_io__STATE_VARIABLE_OptionsSet_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__getopt_io__succeeded;

        if ((mercury__getopt_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__getopt_io__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *mercury__getopt_io__OptionArgs_5 = mercury__getopt_io__HeadVar__4_4;
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *mercury__getopt_io__HeadVar__7_7 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__HeadVar__6_6));
            }
            *mercury__getopt_io__STATE_VARIABLE_OptionsSet_9 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8;
          }
        else
          {
            MR_String mercury__getopt_io__Option_21 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__getopt_io__Args0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));

            mercury__getopt_io__succeeded = (strcmp(mercury__getopt_io__Option_21, (MR_String) "--") == 0);
            if (mercury__getopt_io__succeeded)
              {
                *mercury__getopt_io__OptionArgs_5 = mercury__getopt_io__HeadVar__4_4;
                *mercury__getopt_io__HeadVar__2_2 = mercury__getopt_io__Args0_22;
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *mercury__getopt_io__HeadVar__7_7 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__HeadVar__6_6));
                }
                *mercury__getopt_io__STATE_VARIABLE_OptionsSet_9 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8;
              }
            else
              {
                MR_String mercury__getopt_io__LongOption_31;

                {
                  mercury__getopt_io__succeeded = mercury__string__append_3_p_1((MR_String) "--no-", &mercury__getopt_io__LongOption_31, mercury__getopt_io__Option_21);
                }
                if (mercury__getopt_io__succeeded)
                  {
                    MR_Word mercury__getopt_io__LongOptionPred_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_3, (MR_Integer) 1)));
                    MR_Word mercury__getopt_io__Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_3, (MR_Integer) 0)));
                    MR_Word mercury__getopt_io__Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_3, (MR_Integer) 2)));
                    MR_Box mercury__getopt_io__Flag_33;
                    MR_bool MR_CALL (* mercury__getopt_io__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt_io__LongOptionPred_32, (MR_Integer) 1)));

                    {
                      mercury__getopt_io__succeeded = mercury__getopt_io__func_0(((MR_Box) mercury__getopt_io__LongOptionPred_32), ((MR_Box) (mercury__getopt_io__LongOption_31)), &mercury__getopt_io__Flag_33);
                    }
                    if (mercury__getopt_io__succeeded)
                      {
                        MR_String mercury__getopt_io__OptName_34;
                        MR_Word mercury__getopt_io__Result1_35;
                        MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_60_60;

                        {
                          mercury__string__append_3_p_2((MR_String) "--", mercury__getopt_io__LongOption_31, &mercury__getopt_io__OptName_34);
                        }
                        {
                          mercury__getopt_io__process_negated_option_7_p_0(mercury__getopt_io__TypeInfo_for_OptionType_152, mercury__getopt_io__OptName_34, mercury__getopt_io__Flag_33, mercury__getopt_io__OptionOps_3, mercury__getopt_io__HeadVar__6_6, &mercury__getopt_io__Result1_35, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt_io__STATE_VARIABLE_OptionsSet_60_60);
                        }
                        if (((MR_tag((MR_Word) mercury__getopt_io__Result1_35)) == (MR_mktag((MR_Integer) 1))))
                          {
                            *mercury__getopt_io__HeadVar__7_7 = mercury__getopt_io__Result1_35;
                            *mercury__getopt_io__OptionArgs_5 = mercury__getopt_io__HeadVar__4_4;
                            *mercury__getopt_io__HeadVar__2_2 = mercury__getopt_io__Args0_22;
                            *mercury__getopt_io__STATE_VARIABLE_OptionsSet_9 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_60_60;
                          }
                        else
                          {
                            MR_Word mercury__getopt_io__OptionTable1_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__Result1_35, (MR_Integer) 0)));
                            MR_Word mercury__getopt_io__Var_61;

                            {
                              mercury__getopt_io__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), mercury__getopt_io__Var_61, 0) = ((MR_Box) (mercury__getopt_io__Option_21));
                              MR_hl_field(MR_mktag(1), mercury__getopt_io__Var_61, 1) = ((MR_Box) (mercury__getopt_io__HeadVar__4_4));
                            }
                            /* direct tailcall eliminated */
                            {
                              MR_Word mercury__getopt_io__next_value_of_HeadVar__1_1 = mercury__getopt_io__Args0_22;
                              MR_Word mercury__getopt_io__next_value_of_HeadVar__4_4 = mercury__getopt_io__Var_61;
                              MR_Word mercury__getopt_io__next_value_of_HeadVar__6_6 = mercury__getopt_io__OptionTable1_36;
                              MR_Word mercury__getopt_io__next_value_of_STATE_VARIABLE_OptionsSet_0_8 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_60_60;

                              mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8 = mercury__getopt_io__next_value_of_STATE_VARIABLE_OptionsSet_0_8;
                              mercury__getopt_io__HeadVar__6_6 = mercury__getopt_io__next_value_of_HeadVar__6_6;
                              mercury__getopt_io__HeadVar__4_4 = mercury__getopt_io__next_value_of_HeadVar__4_4;
                              mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__next_value_of_HeadVar__1_1;
                            }
                            continue;
                          }
                      }
                    else
                      {
                        MR_Word mercury__getopt_io__Error_38;

                        {
                          mercury__getopt_io__Error_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), mercury__getopt_io__Error_38, 0) = ((MR_Box) (mercury__getopt_io__Option_21));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *mercury__getopt_io__HeadVar__7_7 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_38));
                        }
                        *mercury__getopt_io__OptionArgs_5 = mercury__getopt_io__HeadVar__4_4;
                        *mercury__getopt_io__HeadVar__2_2 = mercury__getopt_io__Args0_22;
                        *mercury__getopt_io__STATE_VARIABLE_OptionsSet_9 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8;
                      }
                  }
                else
                  {
                    MR_String mercury__getopt_io__LongOptionStr_39;

                    {
                      mercury__getopt_io__succeeded = mercury__string__append_3_p_1((MR_String) "--", &mercury__getopt_io__LongOptionStr_39, mercury__getopt_io__Option_21);
                    }
                    if (mercury__getopt_io__succeeded)
                      {
                        MR_Word mercury__getopt_io__MaybeArg_43;
                        MR_String mercury__getopt_io__OptionName_44;
                        MR_String mercury__getopt_io__LongOption_99;
                        MR_Word mercury__getopt_io__LongOptionPred_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_3, (MR_Integer) 1)));
                        MR_Word mercury__getopt_io__Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_3, (MR_Integer) 0)));
                        MR_Word mercury__getopt_io__Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_3, (MR_Integer) 2)));
                        MR_Integer mercury__getopt_io__OptionLen_40;
                        MR_Box mercury__getopt_io__Flag_97;
                        MR_bool MR_CALL (* mercury__getopt_io__func_1)(MR_Box, MR_Box, MR_Box *);

                        {
                          mercury__getopt_io__succeeded = mercury__string__sub_string_search_3_p_0(mercury__getopt_io__LongOptionStr_39, (MR_String) "=", &mercury__getopt_io__OptionLen_40);
                        }
                        if (mercury__getopt_io__succeeded)
                          {
                            MR_String mercury__getopt_io__EqualOptionArg_41;
                            MR_String mercury__getopt_io__OptionArg_42;

                            {
                              mercury__string__split_4_p_0(mercury__getopt_io__LongOptionStr_39, mercury__getopt_io__OptionLen_40, &mercury__getopt_io__LongOption_99, &mercury__getopt_io__EqualOptionArg_41);
                            }
                            {
                              mercury__getopt_io__succeeded = mercury__string__first_char_3_p_2(mercury__getopt_io__EqualOptionArg_41, (MR_Char) 61, &mercury__getopt_io__OptionArg_42);
                            }
                            if (mercury__getopt_io__succeeded)
                              {
                                mercury__getopt_io__MaybeArg_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), mercury__getopt_io__MaybeArg_43, 0) = ((MR_Box) (mercury__getopt_io__OptionArg_42));
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
                            mercury__getopt_io__LongOption_99 = mercury__getopt_io__LongOptionStr_39;
                            mercury__getopt_io__MaybeArg_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          }
                        {
                          mercury__getopt_io__OptionName_44 = mercury__string__f_43_43_2_f_0((MR_String) "--", mercury__getopt_io__LongOption_99);
                        }
                        mercury__getopt_io__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt_io__LongOptionPred_100, (MR_Integer) 1)));
                        {
                          mercury__getopt_io__succeeded = mercury__getopt_io__func_1(((MR_Box) mercury__getopt_io__LongOptionPred_100), ((MR_Box) (mercury__getopt_io__LongOption_99)), &mercury__getopt_io__Flag_97);
                        }
                        if (mercury__getopt_io__succeeded)
                          {
                            MR_Word mercury__getopt_io__OptionData_45;
                            MR_Word mercury__getopt_io__TypeCtorInfo_153_153 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
                            MR_Box mercury__getopt_io__conv2_OptionData_45;

                            {
                              mercury__getopt_io__succeeded = mercury__map__search_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_152, mercury__getopt_io__TypeCtorInfo_153_153, mercury__getopt_io__HeadVar__6_6, mercury__getopt_io__Flag_97, &mercury__getopt_io__conv2_OptionData_45);
                            }
                            if (mercury__getopt_io__succeeded)
                              {
                                mercury__getopt_io__OptionData_45 = ((MR_Word) mercury__getopt_io__conv2_OptionData_45);
                                mercury__getopt_io__succeeded = MR_TRUE;
                              }
                            if (mercury__getopt_io__succeeded)
                              {
                                MR_Word mercury__getopt_io__Var_69;

                                {
                                  mercury__getopt_io__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), mercury__getopt_io__Var_69, 0) = ((MR_Box) (mercury__getopt_io__Option_21));
                                  MR_hl_field(MR_mktag(1), mercury__getopt_io__Var_69, 1) = ((MR_Box) (mercury__getopt_io__HeadVar__4_4));
                                }
                                {
                                  mercury__getopt_io__handle_long_option_15_p_0(mercury__getopt_io__TypeInfo_for_OptionType_152, mercury__getopt_io__OptionName_44, mercury__getopt_io__Flag_97, mercury__getopt_io__OptionData_45, mercury__getopt_io__MaybeArg_43, mercury__getopt_io__Args0_22, mercury__getopt_io__HeadVar__2_2, mercury__getopt_io__OptionOps_3, mercury__getopt_io__Var_69, mercury__getopt_io__OptionArgs_5, mercury__getopt_io__HeadVar__6_6, mercury__getopt_io__HeadVar__7_7, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt_io__STATE_VARIABLE_OptionsSet_9);
                                }
                              }
                            else
                              {
                                MR_Word mercury__getopt_io__Var_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                MR_Word mercury__getopt_io__Error_94;

                                {
                                  mercury__getopt_io__Error_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_94, 0) = mercury__getopt_io__Flag_97;
                                  MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_94, 1) = ((MR_Box) (mercury__getopt_io__Option_21));
                                  MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_94, 2) = ((MR_Box) (mercury__getopt_io__Var_72));
                                }
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                  *mercury__getopt_io__HeadVar__7_7 = base;
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_94));
                                }
                                *mercury__getopt_io__OptionArgs_5 = mercury__getopt_io__HeadVar__4_4;
                                *mercury__getopt_io__HeadVar__2_2 = mercury__getopt_io__Args0_22;
                                *mercury__getopt_io__STATE_VARIABLE_OptionsSet_9 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8;
                              }
                          }
                        else
                          {
                            MR_Word mercury__getopt_io__Error_96;

                            {
                              mercury__getopt_io__Error_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), mercury__getopt_io__Error_96, 0) = ((MR_Box) (mercury__getopt_io__OptionName_44));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                              *mercury__getopt_io__HeadVar__7_7 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_96));
                            }
                            *mercury__getopt_io__OptionArgs_5 = mercury__getopt_io__HeadVar__4_4;
                            *mercury__getopt_io__HeadVar__2_2 = mercury__getopt_io__Args0_22;
                            *mercury__getopt_io__STATE_VARIABLE_OptionsSet_9 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8;
                          }
                      }
                    else
                      {
                        MR_String mercury__getopt_io__ShortOptions_46;

                        {
                          mercury__getopt_io__succeeded = mercury__string__first_char_3_p_2(mercury__getopt_io__Option_21, (MR_Char) 45, &mercury__getopt_io__ShortOptions_46);
                        }
                        if (mercury__getopt_io__succeeded)
                          {
                            mercury__getopt_io__succeeded = (strcmp(mercury__getopt_io__ShortOptions_46, (MR_String) "") == 0);
                            mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
                          }
                        if (mercury__getopt_io__succeeded)
                          {
                            MR_Word mercury__getopt_io__ShortOptionsList_47;
                            MR_Char mercury__getopt_io__SingleShortOpt_48;
                            MR_Word mercury__getopt_io__Var_74;
                            MR_Char mercury__getopt_io__Var_75;
                            MR_Word mercury__getopt_io__Var_76;

                            {
                              mercury__string__to_char_list_2_p_0(mercury__getopt_io__ShortOptions_46, &mercury__getopt_io__ShortOptionsList_47);
                            }
                            mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__ShortOptionsList_47)) == (MR_mktag((MR_Integer) 1)));
                            if (mercury__getopt_io__succeeded)
                              {
                                mercury__getopt_io__SingleShortOpt_48 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__ShortOptionsList_47, (MR_Integer) 0)));
                                mercury__getopt_io__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__ShortOptionsList_47, (MR_Integer) 1)));
                                mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__Var_74)) == (MR_mktag((MR_Integer) 1)));
                                if (mercury__getopt_io__succeeded)
                                  {
                                    mercury__getopt_io__Var_75 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__Var_74, (MR_Integer) 0)));
                                    mercury__getopt_io__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__Var_74, (MR_Integer) 1)));
                                    mercury__getopt_io__succeeded = (mercury__getopt_io__Var_75 == (MR_Char) 45);
                                    if (mercury__getopt_io__succeeded)
                                      mercury__getopt_io__succeeded = (mercury__getopt_io__Var_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  }
                              }
                            if (mercury__getopt_io__succeeded)
                              {
                                MR_Word mercury__getopt_io__ShortOptionPred_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_3, (MR_Integer) 0)));
                                MR_Word mercury__getopt_io__Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_3, (MR_Integer) 1)));
                                MR_Word mercury__getopt_io__Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_3, (MR_Integer) 2)));
                                MR_Box mercury__getopt_io__Flag_109;
                                MR_bool MR_CALL (* mercury__getopt_io__func_3)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt_io__ShortOptionPred_49, (MR_Integer) 1)));

                                {
                                  mercury__getopt_io__succeeded = mercury__getopt_io__func_3(((MR_Box) mercury__getopt_io__ShortOptionPred_49), ((MR_Box) (MR_Word) (mercury__getopt_io__SingleShortOpt_48)), &mercury__getopt_io__Flag_109);
                                }
                                if (mercury__getopt_io__succeeded)
                                  {
                                    MR_Word mercury__getopt_io__Var_77;
                                    MR_Word mercury__getopt_io__Var_79;
                                    MR_Word mercury__getopt_io__Var_80 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                    MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_81_81;
                                    MR_String mercury__getopt_io__OptName_105;
                                    MR_Word mercury__getopt_io__Result1_106;

                                    {
                                      mercury__getopt_io__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), mercury__getopt_io__Var_79, 0) = ((MR_Box) (MR_Word) (mercury__getopt_io__SingleShortOpt_48));
                                      MR_hl_field(MR_mktag(1), mercury__getopt_io__Var_79, 1) = ((MR_Box) (mercury__getopt_io__Var_80));
                                    }
                                    {
                                      mercury__getopt_io__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), mercury__getopt_io__Var_77, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
                                      MR_hl_field(MR_mktag(1), mercury__getopt_io__Var_77, 1) = ((MR_Box) (mercury__getopt_io__Var_79));
                                    }
                                    {
                                      mercury__string__from_char_list_2_p_0(mercury__getopt_io__Var_77, &mercury__getopt_io__OptName_105);
                                    }
                                    {
                                      mercury__getopt_io__process_negated_option_7_p_0(mercury__getopt_io__TypeInfo_for_OptionType_152, mercury__getopt_io__OptName_105, mercury__getopt_io__Flag_109, mercury__getopt_io__OptionOps_3, mercury__getopt_io__HeadVar__6_6, &mercury__getopt_io__Result1_106, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt_io__STATE_VARIABLE_OptionsSet_81_81);
                                    }
                                    if (((MR_tag((MR_Word) mercury__getopt_io__Result1_106)) == (MR_mktag((MR_Integer) 1))))
                                      {
                                        *mercury__getopt_io__HeadVar__7_7 = mercury__getopt_io__Result1_106;
                                        *mercury__getopt_io__OptionArgs_5 = mercury__getopt_io__HeadVar__4_4;
                                        *mercury__getopt_io__HeadVar__2_2 = mercury__getopt_io__Args0_22;
                                        *mercury__getopt_io__STATE_VARIABLE_OptionsSet_9 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_81_81;
                                      }
                                    else
                                      {
                                        MR_Word mercury__getopt_io__Var_82;
                                        MR_Word mercury__getopt_io__OptionTable1_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__Result1_106, (MR_Integer) 0)));

                                        {
                                          mercury__getopt_io__Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(1), mercury__getopt_io__Var_82, 0) = ((MR_Box) (mercury__getopt_io__Option_21));
                                          MR_hl_field(MR_mktag(1), mercury__getopt_io__Var_82, 1) = ((MR_Box) (mercury__getopt_io__HeadVar__4_4));
                                        }
                                        /* direct tailcall eliminated */
                                        {
                                          MR_Word mercury__getopt_io__next_value_of_HeadVar__1_1 = mercury__getopt_io__Args0_22;
                                          MR_Word mercury__getopt_io__next_value_of_HeadVar__4_4 = mercury__getopt_io__Var_82;
                                          MR_Word mercury__getopt_io__next_value_of_HeadVar__6_6 = mercury__getopt_io__OptionTable1_103;
                                          MR_Word mercury__getopt_io__next_value_of_STATE_VARIABLE_OptionsSet_0_8 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_81_81;

                                          mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8 = mercury__getopt_io__next_value_of_STATE_VARIABLE_OptionsSet_0_8;
                                          mercury__getopt_io__HeadVar__6_6 = mercury__getopt_io__next_value_of_HeadVar__6_6;
                                          mercury__getopt_io__HeadVar__4_4 = mercury__getopt_io__next_value_of_HeadVar__4_4;
                                          mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__next_value_of_HeadVar__1_1;
                                        }
                                        continue;
                                      }
                                  }
                                else
                                  {
                                    MR_String mercury__getopt_io__Var_85;
                                    MR_Word mercury__getopt_io__Error_108;

                                    {
                                      mercury__getopt_io__Var_85 = mercury__string__f_43_43_2_f_0((MR_String) "-", mercury__getopt_io__ShortOptions_46);
                                    }
                                    {
                                      mercury__getopt_io__Error_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(MR_mktag(0), mercury__getopt_io__Error_108, 0) = ((MR_Box) (mercury__getopt_io__Var_85));
                                    }
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                      *mercury__getopt_io__HeadVar__7_7 = base;
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_108));
                                    }
                                    *mercury__getopt_io__OptionArgs_5 = mercury__getopt_io__HeadVar__4_4;
                                    *mercury__getopt_io__HeadVar__2_2 = mercury__getopt_io__Args0_22;
                                    *mercury__getopt_io__STATE_VARIABLE_OptionsSet_9 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8;
                                  }
                              }
                            else
                              {
                                MR_Word mercury__getopt_io__Args1_51;
                                MR_Word mercury__getopt_io__OptionArgs1_52;
                                MR_Word mercury__getopt_io__Var_87;
                                MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_88_88;
                                MR_Word mercury__getopt_io__Result1_121;

                                {
                                  mercury__getopt_io__Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), mercury__getopt_io__Var_87, 0) = ((MR_Box) (mercury__getopt_io__Option_21));
                                  MR_hl_field(MR_mktag(1), mercury__getopt_io__Var_87, 1) = ((MR_Box) (mercury__getopt_io__HeadVar__4_4));
                                }
                                {
                                  mercury__getopt_io__handle_short_options_12_p_0(mercury__getopt_io__TypeInfo_for_OptionType_152, mercury__getopt_io__ShortOptionsList_47, mercury__getopt_io__OptionOps_3, mercury__getopt_io__Args0_22, &mercury__getopt_io__Args1_51, mercury__getopt_io__Var_87, &mercury__getopt_io__OptionArgs1_52, mercury__getopt_io__HeadVar__6_6, &mercury__getopt_io__Result1_121, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt_io__STATE_VARIABLE_OptionsSet_88_88);
                                }
                                if (((MR_tag((MR_Word) mercury__getopt_io__Result1_121)) == (MR_mktag((MR_Integer) 1))))
                                  {
                                    *mercury__getopt_io__HeadVar__7_7 = mercury__getopt_io__Result1_121;
                                    *mercury__getopt_io__OptionArgs_5 = mercury__getopt_io__OptionArgs1_52;
                                    *mercury__getopt_io__HeadVar__2_2 = mercury__getopt_io__Args0_22;
                                    *mercury__getopt_io__STATE_VARIABLE_OptionsSet_9 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_88_88;
                                  }
                                else
                                  {
                                    MR_Word mercury__getopt_io__OptionTable1_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__Result1_121, (MR_Integer) 0)));

                                    /* direct tailcall eliminated */
                                    {
                                      MR_Word mercury__getopt_io__next_value_of_HeadVar__1_1 = mercury__getopt_io__Args1_51;
                                      MR_Word mercury__getopt_io__next_value_of_HeadVar__4_4 = mercury__getopt_io__OptionArgs1_52;
                                      MR_Word mercury__getopt_io__next_value_of_HeadVar__6_6 = mercury__getopt_io__OptionTable1_119;
                                      MR_Word mercury__getopt_io__next_value_of_STATE_VARIABLE_OptionsSet_0_8 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_88_88;

                                      mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8 = mercury__getopt_io__next_value_of_STATE_VARIABLE_OptionsSet_0_8;
                                      mercury__getopt_io__HeadVar__6_6 = mercury__getopt_io__next_value_of_HeadVar__6_6;
                                      mercury__getopt_io__HeadVar__4_4 = mercury__getopt_io__next_value_of_HeadVar__4_4;
                                      mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__next_value_of_HeadVar__1_1;
                                    }
                                    continue;
                                  }
                              }
                          }
                        else
                          {
                            MR_Word mercury__getopt_io__Args1_133;

                            {
                              mercury__getopt_io__process_arguments_11_p_0(mercury__getopt_io__TypeInfo_for_OptionType_152, mercury__getopt_io__Args0_22, &mercury__getopt_io__Args1_133, mercury__getopt_io__OptionOps_3, mercury__getopt_io__HeadVar__4_4, mercury__getopt_io__OptionArgs_5, mercury__getopt_io__HeadVar__6_6, mercury__getopt_io__HeadVar__7_7, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt_io__STATE_VARIABLE_OptionsSet_9);
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              *mercury__getopt_io__HeadVar__2_2 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Option_21));
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__getopt_io__Args1_133));
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

MR_Word MR_CALL 
mercury__getopt_io__lookup_accumulating_option_2_f_0(
  MR_Word mercury__getopt_io__TypeInfo_for_Option_7,
  MR_Word mercury__getopt_io__OT_4,
  MR_Box mercury__getopt_io__Opt_5)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Word mercury__getopt_io__Ss_6;
    MR_Word mercury__getopt_io__Val0_11;
    MR_Word mercury__getopt_io__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    MR_Word mercury__getopt_io__Var_12;
    MR_Box mercury__getopt_io__conv0_Var_12;

    {
      mercury__map__lookup_3_p_0(mercury__getopt_io__TypeInfo_for_Option_7, mercury__getopt_io__TypeCtorInfo_11_14, mercury__getopt_io__OT_4, mercury__getopt_io__Opt_5, &mercury__getopt_io__conv0_Var_12);
    }
    mercury__getopt_io__Var_12 = ((MR_Word) mercury__getopt_io__conv0_Var_12);
    mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__Var_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__Var_12, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (mercury__getopt_io__succeeded)
      {
        mercury__getopt_io__Val0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__Var_12, (MR_Integer) 1)));
        mercury__getopt_io__Ss_6 = mercury__getopt_io__Val0_11;
      }
    else
      {
        {
          mercury__require__error_1_p_0((MR_String) "Expected accumulating option and didn\'t get one.");
        }
      }
    return mercury__getopt_io__Ss_6;
  }
}

void MR_CALL 
mercury__getopt_io__lookup_accumulating_option_3_p_0(
  MR_Word mercury__getopt_io__TypeInfo_for_Option_10,
  MR_Word mercury__getopt_io__OptionTable_4,
  MR_Box mercury__getopt_io__Opt_5,
  MR_Word * mercury__getopt_io__Val_6)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Word mercury__getopt_io__Val0_7;
    MR_Word mercury__getopt_io__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    MR_Word mercury__getopt_io__Var_8;
    MR_Box mercury__getopt_io__conv0_Var_8;

    {
      mercury__map__lookup_3_p_0(mercury__getopt_io__TypeInfo_for_Option_10, mercury__getopt_io__TypeCtorInfo_11_11, mercury__getopt_io__OptionTable_4, mercury__getopt_io__Opt_5, &mercury__getopt_io__conv0_Var_8);
    }
    mercury__getopt_io__Var_8 = ((MR_Word) mercury__getopt_io__conv0_Var_8);
    mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__Var_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__Var_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (mercury__getopt_io__succeeded)
      {
        mercury__getopt_io__Val0_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__Var_8, (MR_Integer) 1)));
        *mercury__getopt_io__Val_6 = mercury__getopt_io__Val0_7;
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
  MR_Word mercury__getopt_io__TypeInfo_for_Option_7,
  MR_Word mercury__getopt_io__OT_4,
  MR_Box mercury__getopt_io__Opt_5)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Word mercury__getopt_io__MS_6;
    MR_Word mercury__getopt_io__Val0_11;
    MR_Word mercury__getopt_io__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    MR_Word mercury__getopt_io__Var_12;
    MR_Box mercury__getopt_io__conv0_Var_12;

    {
      mercury__map__lookup_3_p_0(mercury__getopt_io__TypeInfo_for_Option_7, mercury__getopt_io__TypeCtorInfo_11_14, mercury__getopt_io__OT_4, mercury__getopt_io__Opt_5, &mercury__getopt_io__conv0_Var_12);
    }
    mercury__getopt_io__Var_12 = ((MR_Word) mercury__getopt_io__conv0_Var_12);
    mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__Var_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__Var_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (mercury__getopt_io__succeeded)
      {
        mercury__getopt_io__Val0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__Var_12, (MR_Integer) 1)));
        mercury__getopt_io__MS_6 = mercury__getopt_io__Val0_11;
      }
    else
      {
        {
          mercury__require__error_1_p_0((MR_String) "Expected maybe_string option and didn\'t get one.");
        }
      }
    return mercury__getopt_io__MS_6;
  }
}

void MR_CALL 
mercury__getopt_io__lookup_maybe_string_option_3_p_0(
  MR_Word mercury__getopt_io__TypeInfo_for_Option_10,
  MR_Word mercury__getopt_io__OptionTable_4,
  MR_Box mercury__getopt_io__Opt_5,
  MR_Word * mercury__getopt_io__Val_6)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Word mercury__getopt_io__Val0_7;
    MR_Word mercury__getopt_io__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    MR_Word mercury__getopt_io__Var_8;
    MR_Box mercury__getopt_io__conv0_Var_8;

    {
      mercury__map__lookup_3_p_0(mercury__getopt_io__TypeInfo_for_Option_10, mercury__getopt_io__TypeCtorInfo_11_11, mercury__getopt_io__OptionTable_4, mercury__getopt_io__Opt_5, &mercury__getopt_io__conv0_Var_8);
    }
    mercury__getopt_io__Var_8 = ((MR_Word) mercury__getopt_io__conv0_Var_8);
    mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__Var_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__Var_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (mercury__getopt_io__succeeded)
      {
        mercury__getopt_io__Val0_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__Var_8, (MR_Integer) 1)));
        *mercury__getopt_io__Val_6 = mercury__getopt_io__Val0_7;
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
  MR_Word mercury__getopt_io__TypeInfo_for_Option_7,
  MR_Word mercury__getopt_io__OT_4,
  MR_Box mercury__getopt_io__Opt_5)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Word mercury__getopt_io__MN_6;
    MR_Word mercury__getopt_io__Val0_11;
    MR_Word mercury__getopt_io__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    MR_Word mercury__getopt_io__Var_12;
    MR_Box mercury__getopt_io__conv0_Var_12;

    {
      mercury__map__lookup_3_p_0(mercury__getopt_io__TypeInfo_for_Option_7, mercury__getopt_io__TypeCtorInfo_11_14, mercury__getopt_io__OT_4, mercury__getopt_io__Opt_5, &mercury__getopt_io__conv0_Var_12);
    }
    mercury__getopt_io__Var_12 = ((MR_Word) mercury__getopt_io__conv0_Var_12);
    mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__Var_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__Var_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (mercury__getopt_io__succeeded)
      {
        mercury__getopt_io__Val0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__Var_12, (MR_Integer) 1)));
        mercury__getopt_io__MN_6 = mercury__getopt_io__Val0_11;
      }
    else
      {
        {
          mercury__require__error_1_p_0((MR_String) "Expected maybe_int option and didn\'t get one.");
        }
      }
    return mercury__getopt_io__MN_6;
  }
}

void MR_CALL 
mercury__getopt_io__lookup_maybe_int_option_3_p_0(
  MR_Word mercury__getopt_io__TypeInfo_for_Option_10,
  MR_Word mercury__getopt_io__OptionTable_4,
  MR_Box mercury__getopt_io__Opt_5,
  MR_Word * mercury__getopt_io__Val_6)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Word mercury__getopt_io__Val0_7;
    MR_Word mercury__getopt_io__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    MR_Word mercury__getopt_io__Var_8;
    MR_Box mercury__getopt_io__conv0_Var_8;

    {
      mercury__map__lookup_3_p_0(mercury__getopt_io__TypeInfo_for_Option_10, mercury__getopt_io__TypeCtorInfo_11_11, mercury__getopt_io__OptionTable_4, mercury__getopt_io__Opt_5, &mercury__getopt_io__conv0_Var_8);
    }
    mercury__getopt_io__Var_8 = ((MR_Word) mercury__getopt_io__conv0_Var_8);
    mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__Var_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__Var_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (mercury__getopt_io__succeeded)
      {
        mercury__getopt_io__Val0_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__Var_8, (MR_Integer) 1)));
        *mercury__getopt_io__Val_6 = mercury__getopt_io__Val0_7;
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
  MR_Word mercury__getopt_io__TypeInfo_for_Option_7,
  MR_Word mercury__getopt_io__OT_4,
  MR_Box mercury__getopt_io__Opt_5)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_String mercury__getopt_io__S_6;
    MR_String mercury__getopt_io__Val0_11;
    MR_Word mercury__getopt_io__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    MR_Word mercury__getopt_io__Var_12;
    MR_Box mercury__getopt_io__conv0_Var_12;

    {
      mercury__map__lookup_3_p_0(mercury__getopt_io__TypeInfo_for_Option_7, mercury__getopt_io__TypeCtorInfo_11_14, mercury__getopt_io__OT_4, mercury__getopt_io__Opt_5, &mercury__getopt_io__conv0_Var_12);
    }
    mercury__getopt_io__Var_12 = ((MR_Word) mercury__getopt_io__conv0_Var_12);
    mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__Var_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__Var_12, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (mercury__getopt_io__succeeded)
      {
        mercury__getopt_io__Val0_11 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__Var_12, (MR_Integer) 1)));
        mercury__getopt_io__S_6 = mercury__getopt_io__Val0_11;
      }
    else
      {
        {
          mercury__require__error_1_p_0((MR_String) "Expected string option and didn\'t get one.");
        }
      }
    return mercury__getopt_io__S_6;
  }
}

void MR_CALL 
mercury__getopt_io__lookup_string_option_3_p_0(
  MR_Word mercury__getopt_io__TypeInfo_for_Option_10,
  MR_Word mercury__getopt_io__OptionTable_4,
  MR_Box mercury__getopt_io__Opt_5,
  MR_String * mercury__getopt_io__Val_6)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_String mercury__getopt_io__Val0_7;
    MR_Word mercury__getopt_io__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    MR_Word mercury__getopt_io__Var_8;
    MR_Box mercury__getopt_io__conv0_Var_8;

    {
      mercury__map__lookup_3_p_0(mercury__getopt_io__TypeInfo_for_Option_10, mercury__getopt_io__TypeCtorInfo_11_11, mercury__getopt_io__OptionTable_4, mercury__getopt_io__Opt_5, &mercury__getopt_io__conv0_Var_8);
    }
    mercury__getopt_io__Var_8 = ((MR_Word) mercury__getopt_io__conv0_Var_8);
    mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__Var_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__Var_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (mercury__getopt_io__succeeded)
      {
        mercury__getopt_io__Val0_7 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__Var_8, (MR_Integer) 1)));
        *mercury__getopt_io__Val_6 = mercury__getopt_io__Val0_7;
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
  MR_Word mercury__getopt_io__TypeInfo_for_Option_7,
  MR_Word mercury__getopt_io__OT_4,
  MR_Box mercury__getopt_io__Opt_5)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Integer mercury__getopt_io__N_6;
    MR_Integer mercury__getopt_io__Val0_11;
    MR_Word mercury__getopt_io__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    MR_Word mercury__getopt_io__Var_12;
    MR_Box mercury__getopt_io__conv0_Var_12;

    {
      mercury__map__lookup_3_p_0(mercury__getopt_io__TypeInfo_for_Option_7, mercury__getopt_io__TypeCtorInfo_11_14, mercury__getopt_io__OT_4, mercury__getopt_io__Opt_5, &mercury__getopt_io__conv0_Var_12);
    }
    mercury__getopt_io__Var_12 = ((MR_Word) mercury__getopt_io__conv0_Var_12);
    mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__Var_12)) == (MR_mktag((MR_Integer) 2)));
    if (mercury__getopt_io__succeeded)
      {
        mercury__getopt_io__Val0_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt_io__Var_12, (MR_Integer) 0)));
        mercury__getopt_io__N_6 = mercury__getopt_io__Val0_11;
      }
    else
      {
        {
          mercury__require__error_1_p_0((MR_String) "Expected int option and didn\'t get one.");
        }
      }
    return mercury__getopt_io__N_6;
  }
}

void MR_CALL 
mercury__getopt_io__lookup_int_option_3_p_0(
  MR_Word mercury__getopt_io__TypeInfo_for_Option_10,
  MR_Word mercury__getopt_io__OptionTable_4,
  MR_Box mercury__getopt_io__Opt_5,
  MR_Integer * mercury__getopt_io__Val_6)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Integer mercury__getopt_io__Val0_7;
    MR_Word mercury__getopt_io__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    MR_Word mercury__getopt_io__Var_8;
    MR_Box mercury__getopt_io__conv0_Var_8;

    {
      mercury__map__lookup_3_p_0(mercury__getopt_io__TypeInfo_for_Option_10, mercury__getopt_io__TypeCtorInfo_11_11, mercury__getopt_io__OptionTable_4, mercury__getopt_io__Opt_5, &mercury__getopt_io__conv0_Var_8);
    }
    mercury__getopt_io__Var_8 = ((MR_Word) mercury__getopt_io__conv0_Var_8);
    mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__Var_8)) == (MR_mktag((MR_Integer) 2)));
    if (mercury__getopt_io__succeeded)
      {
        mercury__getopt_io__Val0_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt_io__Var_8, (MR_Integer) 0)));
        *mercury__getopt_io__Val_6 = mercury__getopt_io__Val0_7;
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
  MR_Word mercury__getopt_io__TypeInfo_for_Option_7,
  MR_Word mercury__getopt_io__OT_4,
  MR_Box mercury__getopt_io__Opt_5)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Word mercury__getopt_io__B_6;
    MR_Word mercury__getopt_io__Val0_11;
    MR_Word mercury__getopt_io__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    MR_Word mercury__getopt_io__Var_12;
    MR_Box mercury__getopt_io__conv0_Var_12;

    {
      mercury__map__lookup_3_p_0(mercury__getopt_io__TypeInfo_for_Option_7, mercury__getopt_io__TypeCtorInfo_11_14, mercury__getopt_io__OT_4, mercury__getopt_io__Opt_5, &mercury__getopt_io__conv0_Var_12);
    }
    mercury__getopt_io__Var_12 = ((MR_Word) mercury__getopt_io__conv0_Var_12);
    mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__Var_12)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__getopt_io__succeeded)
      {
        mercury__getopt_io__Val0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__Var_12, (MR_Integer) 0)));
        mercury__getopt_io__B_6 = mercury__getopt_io__Val0_11;
      }
    else
      {
        {
          mercury__require__error_1_p_0((MR_String) "Expected bool option and didn\'t get one.");
        }
      }
    return mercury__getopt_io__B_6;
  }
}

void MR_CALL 
mercury__getopt_io__lookup_bool_option_3_p_0(
  MR_Word mercury__getopt_io__TypeInfo_for_Option_10,
  MR_Word mercury__getopt_io__OptionTable_4,
  MR_Box mercury__getopt_io__Opt_5,
  MR_Word * mercury__getopt_io__Val_6)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Word mercury__getopt_io__Val0_7;
    MR_Word mercury__getopt_io__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    MR_Word mercury__getopt_io__Var_8;
    MR_Box mercury__getopt_io__conv0_Var_8;

    {
      mercury__map__lookup_3_p_0(mercury__getopt_io__TypeInfo_for_Option_10, mercury__getopt_io__TypeCtorInfo_11_11, mercury__getopt_io__OptionTable_4, mercury__getopt_io__Opt_5, &mercury__getopt_io__conv0_Var_8);
    }
    mercury__getopt_io__Var_8 = ((MR_Word) mercury__getopt_io__conv0_Var_8);
    mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__Var_8)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__getopt_io__succeeded)
      {
        mercury__getopt_io__Val0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__Var_8, (MR_Integer) 0)));
        *mercury__getopt_io__Val_6 = mercury__getopt_io__Val0_7;
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

MR_String MR_CALL 
mercury__getopt_io__option_error_to_string_1_f_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_70,
  MR_Word mercury__getopt_io__Error_3)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_String mercury__getopt_io__String_4;

    if (((MR_tag((MR_Word) mercury__getopt_io__Error_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__getopt_io__Reason_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_3, (MR_Integer) 2)));
        MR_String mercury__getopt_io__OptionName_69 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_3, (MR_Integer) 1)));
        MR_Box mercury__getopt_io__Var_6 = (MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_3, (MR_Integer) 0));

        switch (MR_tag((MR_Word) mercury__getopt_io__Reason_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(mercury__getopt_io__Reason_7)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String mercury__getopt_io__Var_75;

                  {
                    mercury__getopt_io__Var_75 = mercury__string__f_43_43_2_f_0(mercury__getopt_io__OptionName_69, (MR_String) "\'");
                  }
                  {
                    mercury__getopt_io__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "unknown type for option \140", mercury__getopt_io__Var_75);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String mercury__getopt_io__Var_90;

                  {
                    mercury__getopt_io__Var_90 = mercury__string__f_43_43_2_f_0(mercury__getopt_io__OptionName_69, (MR_String) "\' needs an argument");
                  }
                  {
                    mercury__getopt_io__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", mercury__getopt_io__Var_90);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String mercury__getopt_io__Var_105;

                  {
                    mercury__getopt_io__Var_105 = mercury__string__f_43_43_2_f_0(mercury__getopt_io__OptionName_69, (MR_String) "\' -- only boolean, maybe and accumulating options can be negated");
                  }
                  {
                    mercury__getopt_io__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "cannot negate option \140", mercury__getopt_io__Var_105);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_String mercury__getopt_io__Var_81;

                  {
                    mercury__getopt_io__Var_81 = mercury__string__f_43_43_2_f_0(mercury__getopt_io__OptionName_69, (MR_String) "\' failed");
                  }
                  {
                    mercury__getopt_io__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "the handler of option \140", mercury__getopt_io__Var_81);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_String mercury__getopt_io__Var_78;

                  {
                    mercury__getopt_io__Var_78 = mercury__string__f_43_43_2_f_0(mercury__getopt_io__OptionName_69, (MR_String) "\' has no handler");
                  }
                  {
                    mercury__getopt_io__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", mercury__getopt_io__Var_78);
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String mercury__getopt_io__Var_102;

              {
                mercury__getopt_io__Var_102 = mercury__string__f_43_43_2_f_0(mercury__getopt_io__OptionName_69, (MR_String) "\' does not allow an argument");
              }
              {
                mercury__getopt_io__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", mercury__getopt_io__Var_102);
              }
            }
            break;
          case (MR_Integer) 2:
            mercury__getopt_io__String_4 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__getopt_io__Reason_7, (MR_Integer) 0)));
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_7, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String mercury__getopt_io__Arg_9 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_7, (MR_Integer) 1)));
                  MR_String mercury__getopt_io__Var_84;
                  MR_String mercury__getopt_io__Var_86;
                  MR_String mercury__getopt_io__Var_87;

                  {
                    mercury__getopt_io__Var_84 = mercury__string__f_43_43_2_f_0(mercury__getopt_io__Arg_9, (MR_String) "\' is not numeric");
                  }
                  {
                    mercury__getopt_io__Var_86 = mercury__string__f_43_43_2_f_0((MR_String) "\' requires a numeric argument; \140", mercury__getopt_io__Var_84);
                  }
                  {
                    mercury__getopt_io__Var_87 = mercury__string__f_43_43_2_f_0(mercury__getopt_io__OptionName_69, mercury__getopt_io__Var_86);
                  }
                  {
                    mercury__getopt_io__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", mercury__getopt_io__Var_87);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String mercury__getopt_io__FileName_10 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_7, (MR_Integer) 1)));
                  MR_Word mercury__getopt_io__IO_Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_7, (MR_Integer) 2)));
                  MR_String mercury__getopt_io__Msg_12;
                  MR_String mercury__getopt_io__Var_98;
                  MR_String mercury__getopt_io__Var_99;

                  {
                    mercury__io__error_message_2_p_0(mercury__getopt_io__IO_Error_11, &mercury__getopt_io__Msg_12);
                  }
                  {
                    mercury__getopt_io__Var_98 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mercury__getopt_io__Msg_12);
                  }
                  {
                    mercury__getopt_io__Var_99 = mercury__string__f_43_43_2_f_0(mercury__getopt_io__FileName_10, mercury__getopt_io__Var_98);
                  }
                  {
                    mercury__getopt_io__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "cannot open ", mercury__getopt_io__Var_99);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String mercury__getopt_io__FileName_65 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_7, (MR_Integer) 1)));
                  MR_Word mercury__getopt_io__IO_Error_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_7, (MR_Integer) 2)));
                  MR_String mercury__getopt_io__Msg_67;
                  MR_String mercury__getopt_io__Var_94;
                  MR_String mercury__getopt_io__Var_95;

                  {
                    mercury__io__error_message_2_p_0(mercury__getopt_io__IO_Error_66, &mercury__getopt_io__Msg_67);
                  }
                  {
                    mercury__getopt_io__Var_94 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mercury__getopt_io__Msg_67);
                  }
                  {
                    mercury__getopt_io__Var_95 = mercury__string__f_43_43_2_f_0(mercury__getopt_io__FileName_65, mercury__getopt_io__Var_94);
                  }
                  {
                    mercury__getopt_io__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "cannot read ", mercury__getopt_io__Var_95);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_String mercury__getopt_io__FileName_68 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_7, (MR_Integer) 1)));

                  {
                    mercury__getopt_io__String_4 = mercury__string__f_43_43_2_f_0(mercury__getopt_io__FileName_68, (MR_String) " contains non-option arguments");
                  }
                }
                break;
            }
            break;
        }
      }
    else
      {
        MR_String mercury__getopt_io__OptionName_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__getopt_io__Error_3, (MR_Integer) 0)));
        MR_String mercury__getopt_io__Var_72;

        {
          mercury__getopt_io__Var_72 = mercury__string__f_43_43_2_f_0(mercury__getopt_io__OptionName_5, (MR_String) "\'");
        }
        {
          mercury__getopt_io__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "unrecognized option \140", mercury__getopt_io__Var_72);
        }
      }
    return mercury__getopt_io__String_4;
  }
}

static void MR_CALL 
mercury__getopt_io__init_option_table_multi_2_p_0_3(
  MR_Box mercury__getopt_io__closure_arg,
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box mercury__getopt_io__wrapper_arg_2,
  MR_Box * mercury__getopt_io__wrapper_arg_3)
{
  {
    MR_Box mercury__getopt_io__closure = mercury__getopt_io__closure_arg;
    MR_Word mercury__getopt_io__conv1_HeadVar__3_3;

    {
      mercury__list__cons_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__closure, (MR_Integer) 3))), mercury__getopt_io__wrapper_arg_1, ((MR_Word) mercury__getopt_io__wrapper_arg_2), &mercury__getopt_io__conv1_HeadVar__3_3);
    }
    *mercury__getopt_io__wrapper_arg_3 = ((MR_Box) (mercury__getopt_io__conv1_HeadVar__3_3));
  }
}

static void MR_CALL 
mercury__getopt_io__init_option_table_multi_2_p_0_1(
  void * mercury__getopt_io__env_ptr_arg)
{
  {
    struct mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0_s * mercury__getopt_io__env_ptr = (struct mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0_s *) mercury__getopt_io__env_ptr_arg;

    *((mercury__getopt_io__env_ptr)->mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((mercury__getopt_io__env_ptr)->mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10));
    {
      ((mercury__getopt_io__env_ptr)->mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0__cont)((mercury__getopt_io__env_ptr)->mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
mercury__getopt_io__init_option_table_multi_2_p_0_2(
  MR_Box mercury__getopt_io__closure_arg,
  MR_Box * mercury__getopt_io__wrapper_arg_1,
  MR_Cont mercury__getopt_io__cont,
  void * mercury__getopt_io__cont_env_ptr)
{
  {
    struct mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0_s mercury__getopt_io__env;

    (mercury__getopt_io__env).mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0__wrapper_arg_1 = mercury__getopt_io__wrapper_arg_1;
    (mercury__getopt_io__env).mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0__cont = mercury__getopt_io__cont;
    (mercury__getopt_io__env).mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0__cont_env_ptr = mercury__getopt_io__cont_env_ptr;
    {
      MR_Box mercury__getopt_io__closure = mercury__getopt_io__closure_arg;

      {
        mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__closure, (MR_Integer) 4))), &(mercury__getopt_io__env).mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10, mercury__getopt_io__init_option_table_multi_2_p_0_1, &mercury__getopt_io__env);
      }
    }
  }
}

void MR_CALL 
mercury__getopt_io__init_option_table_multi_2_p_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_12,
  MR_Word mercury__getopt_io__OptionDefaultsPred_3,
  MR_Word * mercury__getopt_io__OptionTable_4)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Word mercury__getopt_io__TypeCtorInfo_13_13;
    MR_Word mercury__getopt_io__TypeCtorInfo_14_14;
    MR_Word mercury__getopt_io__TypeInfo_15_15;
    MR_Word mercury__getopt_io__OptionDefaultsList_8;
    MR_Word mercury__getopt_io__Var_9;
    MR_Word mercury__getopt_io__V_5_18;
    MR_Word mercury__getopt_io__V_5_73;
    MR_Word mercury__getopt_io__TypeCtorInfo_13_31;
    MR_Word mercury__getopt_io__TypeInfo_14_32;
    MR_Word mercury__getopt_io__V_6_19;
    MR_Word mercury__getopt_io__V_6_24;
    MR_Word mercury__getopt_io__V_7_26;
    MR_Word mercury__getopt_io__V_5_27;
    MR_Integer mercury__getopt_io__V_5_50;
    MR_Box mercury__getopt_io__conv2_V_5_27;
    MR_Word mercury__getopt_io__conv3_V_5_18;

    {
      mercury__getopt_io__Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__getopt_io__Var_9, 0) = ((MR_Box) (&mercury__getopt_io_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), mercury__getopt_io__Var_9, 1) = ((MR_Box) (mercury__getopt_io__init_option_table_multi_2_p_0_2));
      MR_hl_field(MR_mktag(0), mercury__getopt_io__Var_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), mercury__getopt_io__Var_9, 3) = ((MR_Box) (mercury__getopt_io__TypeInfo_for_OptionType_12));
      MR_hl_field(MR_mktag(0), mercury__getopt_io__Var_9, 4) = ((MR_Box) (mercury__getopt_io__OptionDefaultsPred_3));
    }
    mercury__getopt_io__TypeCtorInfo_14_14 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
    mercury__getopt_io__TypeCtorInfo_13_13 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    {
      mercury__getopt_io__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__getopt_io__TypeInfo_15_15, 0) = ((MR_Box) (mercury__getopt_io__TypeCtorInfo_14_14));
      MR_hl_field(MR_mktag(0), mercury__getopt_io__TypeInfo_15_15, 1) = ((MR_Box) (mercury__getopt_io__TypeInfo_for_OptionType_12));
      MR_hl_field(MR_mktag(0), mercury__getopt_io__TypeInfo_15_15, 2) = ((MR_Box) (mercury__getopt_io__TypeCtorInfo_13_13));
    }
    {
      mercury__getopt_io__V_6_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__getopt_io__V_6_24, 0) = ((MR_Box) (&mercury__getopt_io_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), mercury__getopt_io__V_6_24, 1) = ((MR_Box) (mercury__getopt_io__init_option_table_multi_2_p_0_3));
      MR_hl_field(MR_mktag(0), mercury__getopt_io__V_6_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mercury__getopt_io__V_6_24, 3) = ((MR_Box) (mercury__getopt_io__TypeInfo_15_15));
    }
    mercury__getopt_io__V_7_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__getopt_io__TypeCtorInfo_13_31 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    {
      mercury__getopt_io__TypeInfo_14_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__getopt_io__TypeInfo_14_32, 0) = ((MR_Box) (mercury__getopt_io__TypeCtorInfo_13_31));
      MR_hl_field(MR_mktag(0), mercury__getopt_io__TypeInfo_14_32, 1) = ((MR_Box) (mercury__getopt_io__TypeInfo_15_15));
    }
    {
      mercury__solutions__builtin_aggregate_4_p_0(mercury__getopt_io__TypeInfo_15_15, mercury__getopt_io__TypeInfo_14_32, (MR_Word) mercury__getopt_io__Var_9, (MR_Word) mercury__getopt_io__V_6_24, ((MR_Box) (mercury__getopt_io__V_7_26)), &mercury__getopt_io__conv2_V_5_27);
    }
    mercury__getopt_io__V_5_27 = ((MR_Word) mercury__getopt_io__conv2_V_5_27);
    if ((mercury__getopt_io__V_5_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "solutions", (MR_String) "predicate \140solutions.assert_num_solutions\'/3", (MR_String) "no solutions");
          return;
        }
      }
    else
      mercury__getopt_io__V_6_19 = mercury__getopt_io__V_5_27;
    {
      mercury__list__length_acc_3_p_0(mercury__getopt_io__TypeInfo_15_15, (MR_Word) mercury__getopt_io__V_6_19, (MR_Integer) 0, &mercury__getopt_io__V_5_50);
    }
    {
      mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__getopt_io__TypeInfo_15_15, mercury__getopt_io__V_5_50, (MR_Word) mercury__getopt_io__V_6_19, &mercury__getopt_io__conv3_V_5_18);
    }
    mercury__getopt_io__V_5_18 = (MR_Word) mercury__getopt_io__conv3_V_5_18;
    if ((mercury__getopt_io__V_5_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "solutions", (MR_String) "predicate \140solutions.assert_num_solutions\'/3", (MR_String) "no solutions");
          return;
        }
      }
    else
      mercury__getopt_io__OptionDefaultsList_8 = mercury__getopt_io__V_5_18;
    mercury__getopt_io__V_5_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_12, mercury__getopt_io__TypeCtorInfo_13_13, mercury__getopt_io__OptionDefaultsList_8, mercury__getopt_io__V_5_73, mercury__getopt_io__OptionTable_4);
    }
  }
}

static void MR_CALL 
mercury__getopt_io__init_option_table_2_p_0_3(
  MR_Box mercury__getopt_io__closure_arg,
  MR_Box mercury__getopt_io__wrapper_arg_1,
  MR_Box mercury__getopt_io__wrapper_arg_2,
  MR_Box * mercury__getopt_io__wrapper_arg_3)
{
  {
    MR_Box mercury__getopt_io__closure = mercury__getopt_io__closure_arg;
    MR_Word mercury__getopt_io__conv1_HeadVar__3_3;

    {
      mercury__list__cons_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__closure, (MR_Integer) 3))), mercury__getopt_io__wrapper_arg_1, ((MR_Word) mercury__getopt_io__wrapper_arg_2), &mercury__getopt_io__conv1_HeadVar__3_3);
    }
    *mercury__getopt_io__wrapper_arg_3 = ((MR_Box) (mercury__getopt_io__conv1_HeadVar__3_3));
  }
}

static void MR_CALL 
mercury__getopt_io__init_option_table_2_p_0_1(
  void * mercury__getopt_io__env_ptr_arg)
{
  {
    struct mercury__getopt_io__init_option_table_2_p_0_2_env_0_s * mercury__getopt_io__env_ptr = (struct mercury__getopt_io__init_option_table_2_p_0_2_env_0_s *) mercury__getopt_io__env_ptr_arg;

    *((mercury__getopt_io__env_ptr)->mercury__getopt_io__init_option_table_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((mercury__getopt_io__env_ptr)->mercury__getopt_io__init_option_table_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10));
    {
      ((mercury__getopt_io__env_ptr)->mercury__getopt_io__init_option_table_2_p_0_2_env_0__cont)((mercury__getopt_io__env_ptr)->mercury__getopt_io__init_option_table_2_p_0_2_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
mercury__getopt_io__init_option_table_2_p_0_2(
  MR_Box mercury__getopt_io__closure_arg,
  MR_Box * mercury__getopt_io__wrapper_arg_1,
  MR_Cont mercury__getopt_io__cont,
  void * mercury__getopt_io__cont_env_ptr)
{
  {
    struct mercury__getopt_io__init_option_table_2_p_0_2_env_0_s mercury__getopt_io__env;

    (mercury__getopt_io__env).mercury__getopt_io__init_option_table_2_p_0_2_env_0__wrapper_arg_1 = mercury__getopt_io__wrapper_arg_1;
    (mercury__getopt_io__env).mercury__getopt_io__init_option_table_2_p_0_2_env_0__cont = mercury__getopt_io__cont;
    (mercury__getopt_io__env).mercury__getopt_io__init_option_table_2_p_0_2_env_0__cont_env_ptr = mercury__getopt_io__cont_env_ptr;
    {
      MR_Box mercury__getopt_io__closure = mercury__getopt_io__closure_arg;

      {
        mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__closure, (MR_Integer) 4))), &(mercury__getopt_io__env).mercury__getopt_io__init_option_table_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10, mercury__getopt_io__init_option_table_2_p_0_1, &mercury__getopt_io__env);
      }
    }
  }
}

void MR_CALL 
mercury__getopt_io__init_option_table_2_p_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_12,
  MR_Word mercury__getopt_io__OptionDefaultsPred_3,
  MR_Word * mercury__getopt_io__OptionTable_4)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Word mercury__getopt_io__TypeCtorInfo_13_13;
    MR_Word mercury__getopt_io__TypeCtorInfo_14_14;
    MR_Word mercury__getopt_io__TypeInfo_15_15;
    MR_Word mercury__getopt_io__OptionDefaultsList_8;
    MR_Word mercury__getopt_io__Var_9;
    MR_Word mercury__getopt_io__V_5_73;
    MR_Word mercury__getopt_io__TypeCtorInfo_13_31;
    MR_Word mercury__getopt_io__TypeInfo_14_32;
    MR_Word mercury__getopt_io__V_6_19;
    MR_Word mercury__getopt_io__V_6_24;
    MR_Word mercury__getopt_io__V_7_26;
    MR_Integer mercury__getopt_io__V_5_50;
    MR_Box mercury__getopt_io__conv2_V_6_19;
    MR_Word mercury__getopt_io__conv3_OptionDefaultsList_8;

    {
      mercury__getopt_io__Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__getopt_io__Var_9, 0) = ((MR_Box) (&mercury__getopt_io_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), mercury__getopt_io__Var_9, 1) = ((MR_Box) (mercury__getopt_io__init_option_table_2_p_0_2));
      MR_hl_field(MR_mktag(0), mercury__getopt_io__Var_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), mercury__getopt_io__Var_9, 3) = ((MR_Box) (mercury__getopt_io__TypeInfo_for_OptionType_12));
      MR_hl_field(MR_mktag(0), mercury__getopt_io__Var_9, 4) = ((MR_Box) (mercury__getopt_io__OptionDefaultsPred_3));
    }
    mercury__getopt_io__TypeCtorInfo_14_14 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
    mercury__getopt_io__TypeCtorInfo_13_13 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    {
      mercury__getopt_io__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__getopt_io__TypeInfo_15_15, 0) = ((MR_Box) (mercury__getopt_io__TypeCtorInfo_14_14));
      MR_hl_field(MR_mktag(0), mercury__getopt_io__TypeInfo_15_15, 1) = ((MR_Box) (mercury__getopt_io__TypeInfo_for_OptionType_12));
      MR_hl_field(MR_mktag(0), mercury__getopt_io__TypeInfo_15_15, 2) = ((MR_Box) (mercury__getopt_io__TypeCtorInfo_13_13));
    }
    {
      mercury__getopt_io__V_6_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__getopt_io__V_6_24, 0) = ((MR_Box) (&mercury__getopt_io_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), mercury__getopt_io__V_6_24, 1) = ((MR_Box) (mercury__getopt_io__init_option_table_2_p_0_3));
      MR_hl_field(MR_mktag(0), mercury__getopt_io__V_6_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mercury__getopt_io__V_6_24, 3) = ((MR_Box) (mercury__getopt_io__TypeInfo_15_15));
    }
    mercury__getopt_io__V_7_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__getopt_io__TypeCtorInfo_13_31 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    {
      mercury__getopt_io__TypeInfo_14_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__getopt_io__TypeInfo_14_32, 0) = ((MR_Box) (mercury__getopt_io__TypeCtorInfo_13_31));
      MR_hl_field(MR_mktag(0), mercury__getopt_io__TypeInfo_14_32, 1) = ((MR_Box) (mercury__getopt_io__TypeInfo_15_15));
    }
    {
      mercury__solutions__builtin_aggregate_4_p_7(mercury__getopt_io__TypeInfo_15_15, mercury__getopt_io__TypeInfo_14_32, (MR_Word) mercury__getopt_io__Var_9, (MR_Word) mercury__getopt_io__V_6_24, ((MR_Box) (mercury__getopt_io__V_7_26)), &mercury__getopt_io__conv2_V_6_19);
    }
    mercury__getopt_io__V_6_19 = ((MR_Word) mercury__getopt_io__conv2_V_6_19);
    {
      mercury__list__length_acc_3_p_0(mercury__getopt_io__TypeInfo_15_15, (MR_Word) mercury__getopt_io__V_6_19, (MR_Integer) 0, &mercury__getopt_io__V_5_50);
    }
    {
      mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__getopt_io__TypeInfo_15_15, mercury__getopt_io__V_5_50, (MR_Word) mercury__getopt_io__V_6_19, &mercury__getopt_io__conv3_OptionDefaultsList_8);
    }
    mercury__getopt_io__OptionDefaultsList_8 = (MR_Word) mercury__getopt_io__conv3_OptionDefaultsList_8;
    mercury__getopt_io__V_5_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_12, mercury__getopt_io__TypeCtorInfo_13_13, mercury__getopt_io__OptionDefaultsList_8, mercury__getopt_io__V_5_73, mercury__getopt_io__OptionTable_4);
    }
  }
}

void MR_CALL 
mercury__getopt_io__process_options_track_se_9_p_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_29,
  MR_Word mercury__getopt_io__OptionOps_10,
  MR_Word mercury__getopt_io__Args0_11,
  MR_Word * mercury__getopt_io__OptionArgs_12,
  MR_Word * mercury__getopt_io__NonOptionArgs_13,
  MR_Word mercury__getopt_io__OptionTable0_14,
  MR_Word * mercury__getopt_io__Result_15,
  MR_Word * mercury__getopt_io__OptionsSet_16)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Word mercury__getopt_io__TypeCtorInfo_30_30;
    MR_Word mercury__getopt_io__Short_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_10, (MR_Integer) 0)));
    MR_Word mercury__getopt_io__Long_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_10, (MR_Integer) 1)));
    MR_Word mercury__getopt_io__Special_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_10, (MR_Integer) 2)));
    MR_Word mercury__getopt_io__Internal_21;
    MR_Word mercury__getopt_io__RevOptionArgs_22;
    MR_Word mercury__getopt_io__Var_25;
    MR_Word mercury__getopt_io__Var_26;
    MR_Word mercury__getopt_io__Var_27;
    MR_Word mercury__getopt_io__V_2_33;

    {
      mercury__getopt_io__Var_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), mercury__getopt_io__Var_25, 0) = ((MR_Box) (mercury__getopt_io__Special_20));
    }
    {
      mercury__getopt_io__Internal_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__getopt_io__Internal_21, 0) = ((MR_Box) (mercury__getopt_io__Short_18));
      MR_hl_field(MR_mktag(0), mercury__getopt_io__Internal_21, 1) = ((MR_Box) (mercury__getopt_io__Long_19));
      MR_hl_field(MR_mktag(0), mercury__getopt_io__Internal_21, 2) = ((MR_Box) (mercury__getopt_io__Var_25));
    }
    mercury__getopt_io__Var_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__getopt_io__V_2_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__getopt_io__Var_27 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    {
      mercury__getopt_io__process_arguments_11_p_0(mercury__getopt_io__TypeInfo_for_OptionType_29, mercury__getopt_io__Args0_11, mercury__getopt_io__NonOptionArgs_13, mercury__getopt_io__Internal_21, mercury__getopt_io__Var_26, &mercury__getopt_io__RevOptionArgs_22, mercury__getopt_io__OptionTable0_14, mercury__getopt_io__Result_15, mercury__getopt_io__Var_27, mercury__getopt_io__OptionsSet_16);
    }
    mercury__getopt_io__TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__list__reverse_2_p_0(mercury__getopt_io__TypeCtorInfo_30_30, mercury__getopt_io__RevOptionArgs_22, mercury__getopt_io__OptionArgs_12);
    }
  }
}

void MR_CALL 
mercury__getopt_io__process_options_se_7_p_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_32,
  MR_Word mercury__getopt_io__OptionOps_8,
  MR_Word mercury__getopt_io__Args0_9,
  MR_Word * mercury__getopt_io__OptionArgs_10,
  MR_Word * mercury__getopt_io__NonOptionArgs_11,
  MR_Word * mercury__getopt_io__Result_12)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Word mercury__getopt_io__TypeCtorInfo_33_33;
    MR_Word mercury__getopt_io__Short_14;
    MR_Word mercury__getopt_io__Long_15;
    MR_Word mercury__getopt_io__MaybeSpecial_17;
    MR_Word mercury__getopt_io__OptionTable0_18;
    MR_Word mercury__getopt_io__Internal_20;
    MR_Word mercury__getopt_io__RevOptionArgs_21;
    MR_Word mercury__getopt_io__Var_25;
    MR_Word mercury__getopt_io__Var_26;
    MR_Word mercury__getopt_io__V_2_36;
    MR_Word mercury__getopt_io___OptionsSet_22;

    switch (MR_tag((MR_Word) mercury__getopt_io__OptionOps_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mercury__getopt_io__Defaults_16;

          mercury__getopt_io__Short_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_8, (MR_Integer) 0)));
          mercury__getopt_io__Long_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_8, (MR_Integer) 1)));
          mercury__getopt_io__Defaults_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_8, (MR_Integer) 2)));
          mercury__getopt_io__MaybeSpecial_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            mercury__getopt_io__init_option_table_2_p_0(mercury__getopt_io__TypeInfo_for_OptionType_32, mercury__getopt_io__Defaults_16, &mercury__getopt_io__OptionTable0_18);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__getopt_io__Special_19;
          MR_Word mercury__getopt_io__Defaults_28;

          mercury__getopt_io__Short_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__OptionOps_8, (MR_Integer) 0)));
          mercury__getopt_io__Long_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__OptionOps_8, (MR_Integer) 1)));
          mercury__getopt_io__Defaults_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__OptionOps_8, (MR_Integer) 2)));
          mercury__getopt_io__Special_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__OptionOps_8, (MR_Integer) 3)));
          {
            mercury__getopt_io__MaybeSpecial_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__getopt_io__MaybeSpecial_17, 0) = ((MR_Box) (mercury__getopt_io__Special_19));
          }
          {
            mercury__getopt_io__init_option_table_2_p_0(mercury__getopt_io__TypeInfo_for_OptionType_32, mercury__getopt_io__Defaults_28, &mercury__getopt_io__OptionTable0_18);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__getopt_io__Defaults_29;

          mercury__getopt_io__Short_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__OptionOps_8, (MR_Integer) 0)));
          mercury__getopt_io__Long_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__OptionOps_8, (MR_Integer) 1)));
          mercury__getopt_io__Defaults_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__OptionOps_8, (MR_Integer) 2)));
          mercury__getopt_io__MaybeSpecial_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            mercury__getopt_io__init_option_table_multi_2_p_0(mercury__getopt_io__TypeInfo_for_OptionType_32, mercury__getopt_io__Defaults_29, &mercury__getopt_io__OptionTable0_18);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word mercury__getopt_io__Defaults_30;
          MR_Word mercury__getopt_io__Special_31;

          mercury__getopt_io__Short_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__OptionOps_8, (MR_Integer) 0)));
          mercury__getopt_io__Long_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__OptionOps_8, (MR_Integer) 1)));
          mercury__getopt_io__Defaults_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__OptionOps_8, (MR_Integer) 2)));
          mercury__getopt_io__Special_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__OptionOps_8, (MR_Integer) 3)));
          {
            mercury__getopt_io__MaybeSpecial_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__getopt_io__MaybeSpecial_17, 0) = ((MR_Box) (mercury__getopt_io__Special_31));
          }
          {
            mercury__getopt_io__init_option_table_multi_2_p_0(mercury__getopt_io__TypeInfo_for_OptionType_32, mercury__getopt_io__Defaults_30, &mercury__getopt_io__OptionTable0_18);
          }
        }
        break;
    }
    {
      mercury__getopt_io__Internal_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__getopt_io__Internal_20, 0) = ((MR_Box) (mercury__getopt_io__Short_14));
      MR_hl_field(MR_mktag(0), mercury__getopt_io__Internal_20, 1) = ((MR_Box) (mercury__getopt_io__Long_15));
      MR_hl_field(MR_mktag(0), mercury__getopt_io__Internal_20, 2) = ((MR_Box) (mercury__getopt_io__MaybeSpecial_17));
    }
    mercury__getopt_io__Var_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__getopt_io__V_2_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__getopt_io__Var_26 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    {
      mercury__getopt_io__process_arguments_11_p_0(mercury__getopt_io__TypeInfo_for_OptionType_32, mercury__getopt_io__Args0_9, mercury__getopt_io__NonOptionArgs_11, mercury__getopt_io__Internal_20, mercury__getopt_io__Var_25, &mercury__getopt_io__RevOptionArgs_21, mercury__getopt_io__OptionTable0_18, mercury__getopt_io__Result_12, mercury__getopt_io__Var_26, &mercury__getopt_io___OptionsSet_22);
    }
    mercury__getopt_io__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__list__reverse_2_p_0(mercury__getopt_io__TypeCtorInfo_33_33, mercury__getopt_io__RevOptionArgs_21, mercury__getopt_io__OptionArgs_10);
    }
  }
}

void MR_CALL 
mercury__getopt_io__process_options_se_6_p_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_16,
  MR_Word mercury__getopt_io__OptionOps_7,
  MR_Word mercury__getopt_io__Args0_8,
  MR_Word * mercury__getopt_io__NonOptionArgs_9,
  MR_Word * mercury__getopt_io__Result_10)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Word mercury__getopt_io___OptionArgs_12;

    {
      mercury__getopt_io__process_options_se_7_p_0(mercury__getopt_io__TypeInfo_for_OptionType_16, mercury__getopt_io__OptionOps_7, mercury__getopt_io__Args0_8, &mercury__getopt_io___OptionArgs_12, mercury__getopt_io__NonOptionArgs_9, mercury__getopt_io__Result_10);
    }
  }
}

void MR_CALL 
mercury__getopt_io__process_options_track_9_p_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_25,
  MR_Word mercury__getopt_io__OptionOps_10,
  MR_Word mercury__getopt_io__Args0_11,
  MR_Word * mercury__getopt_io__OptionArgs_12,
  MR_Word * mercury__getopt_io__NonOptionArgs_13,
  MR_Word mercury__getopt_io__OptionTable0_14,
  MR_Word * mercury__getopt_io__Result_15,
  MR_Word * mercury__getopt_io__OptionsSet_16)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Word mercury__getopt_io__Result0_18;

    {
      mercury__getopt_io__process_options_track_se_9_p_0(mercury__getopt_io__TypeInfo_for_OptionType_25, mercury__getopt_io__OptionOps_10, mercury__getopt_io__Args0_11, mercury__getopt_io__OptionArgs_12, mercury__getopt_io__NonOptionArgs_13, mercury__getopt_io__OptionTable0_14, &mercury__getopt_io__Result0_18, mercury__getopt_io__OptionsSet_16);
    }
    if (((MR_tag((MR_Word) mercury__getopt_io__Result0_18)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__getopt_io__Error_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__Result0_18, (MR_Integer) 0)));
        MR_String mercury__getopt_io__Msg_21;

        {
          mercury__getopt_io__Msg_21 = mercury__getopt_io__option_error_to_string_1_f_0(mercury__getopt_io__TypeInfo_for_OptionType_25, mercury__getopt_io__Error_20);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__getopt_io__Result_15 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Msg_21));
        }
      }
    else
      {
        MR_Word mercury__getopt_io__OptionTable_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__Result0_18, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *mercury__getopt_io__Result_15 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__OptionTable_19));
        }
      }
  }
}

void MR_CALL 
mercury__getopt_io__process_options_7_p_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_21,
  MR_Word mercury__getopt_io__OptionOps_8,
  MR_Word mercury__getopt_io__Args0_9,
  MR_Word * mercury__getopt_io__OptionArgs_10,
  MR_Word * mercury__getopt_io__NonOptionArgs_11,
  MR_Word * mercury__getopt_io__Result_12)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Word mercury__getopt_io__Result0_14;

    {
      mercury__getopt_io__process_options_se_7_p_0(mercury__getopt_io__TypeInfo_for_OptionType_21, mercury__getopt_io__OptionOps_8, mercury__getopt_io__Args0_9, mercury__getopt_io__OptionArgs_10, mercury__getopt_io__NonOptionArgs_11, &mercury__getopt_io__Result0_14);
    }
    if (((MR_tag((MR_Word) mercury__getopt_io__Result0_14)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__getopt_io__Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__Result0_14, (MR_Integer) 0)));
        MR_String mercury__getopt_io__Msg_17;

        {
          mercury__getopt_io__Msg_17 = mercury__getopt_io__option_error_to_string_1_f_0(mercury__getopt_io__TypeInfo_for_OptionType_21, mercury__getopt_io__Error_16);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__getopt_io__Result_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Msg_17));
        }
      }
    else
      {
        MR_Word mercury__getopt_io__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__Result0_14, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *mercury__getopt_io__Result_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__OptionTable_15));
        }
      }
  }
}

void MR_CALL 
mercury__getopt_io__process_options_6_p_0(
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_19,
  MR_Word mercury__getopt_io__OptionOps_7,
  MR_Word mercury__getopt_io__Args0_8,
  MR_Word * mercury__getopt_io__NonOptionArgs_9,
  MR_Word * mercury__getopt_io__Result_10)
{
  {
    MR_bool mercury__getopt_io__succeeded;
    MR_Word mercury__getopt_io__Result0_12;
    MR_Word mercury__getopt_io___OptionArgs_27;

    {
      mercury__getopt_io__process_options_se_7_p_0(mercury__getopt_io__TypeInfo_for_OptionType_19, mercury__getopt_io__OptionOps_7, mercury__getopt_io__Args0_8, &mercury__getopt_io___OptionArgs_27, mercury__getopt_io__NonOptionArgs_9, &mercury__getopt_io__Result0_12);
    }
    if (((MR_tag((MR_Word) mercury__getopt_io__Result0_12)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__getopt_io__Error_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__Result0_12, (MR_Integer) 0)));
        MR_String mercury__getopt_io__Msg_15;

        {
          mercury__getopt_io__Msg_15 = mercury__getopt_io__option_error_to_string_1_f_0(mercury__getopt_io__TypeInfo_for_OptionType_19, mercury__getopt_io__Error_14);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__getopt_io__Result_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Msg_15));
        }
      }
    else
      {
        MR_Word mercury__getopt_io__OptionTable_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__Result0_12, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *mercury__getopt_io__Result_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__OptionTable_13));
        }
      }
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

/* :- end_module getopt_io. */
