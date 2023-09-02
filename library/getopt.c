/*
** Automatically generated from `getopt.m'
** by the Mercury compiler,
** version rotd-2023-09-02
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
#include "counter.mih"
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



struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0_env_0_s {
  MR_Word * mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0_env_0__LambdaHeadVar__1_10;
  MR_Cont mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0_env_0__cont;
  void * mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0_env_0__cont_env_ptr;
  MR_Box mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0_env_0__Flag_6;
  MR_Word mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0_env_0__OptionData_7;
  MR_Box mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0_env_0__conv1_OptionData_7;
};

struct mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0_env_0_s {
  MR_Word * mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0_env_0__LambdaHeadVar__1_10;
  MR_Cont mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0_env_0__cont;
  void * mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0_env_0__cont_env_ptr;
  MR_Box mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0_env_0__Flag_6;
  MR_Word mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0_env_0__OptionData_7;
  MR_Box mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0_env_0__conv1_OptionData_7;
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

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__getopt__pti_option_value_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__getopt__pti_go_cord_1__pseudo_getopt__pti_option_value_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_file_options_or_error_1_0[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_file_options_or_error_1_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__getopt__pti_option_error_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_file_options_or_error_1_1[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_file_options_or_error_1_1;

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_file_options_or_error_1_0[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_file_options_or_error_1_1[1];

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_file_options_or_error_1[2];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_file_options_or_error_1[2];

static const MR_Integer mercury__getopt__getopt__functor_number_map_file_options_or_error_1[2];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_go_cord_1_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__getopt__pti_go_cord_node_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_go_cord_1_1[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_go_cord_1_1;

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_go_cord_1_0[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_go_cord_1_1[1];

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_go_cord_1[2];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_go_cord_1[2];

static const MR_Integer mercury__getopt__getopt__functor_number_map_go_cord_1[2];

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_go_cord_node_1_0[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_go_cord_node_1_0;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_go_cord_node_1_1[2];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_go_cord_node_1_1;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_go_cord_node_1_2[2];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_go_cord_node_1_2;

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_go_cord_node_1_0[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_go_cord_node_1_1[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_go_cord_node_1_2[1];

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_go_cord_node_1[3];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_go_cord_node_1[3];

static const MR_Integer mercury__getopt__getopt__functor_number_map_go_cord_node_1[3];

static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1;

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_arg_0_0;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_arg_0_1[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_arg_0_1;

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_arg_0_0[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_arg_0_1[1];

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_maybe_option_arg_0[2];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_maybe_option_arg_0[2];

static const MR_Integer mercury__getopt__getopt__functor_number_map_maybe_option_arg_0[2];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_error_1_0;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_error_1_1[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_error_1_1;

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_error_1_0[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_error_1_1[1];

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_maybe_option_error_1[2];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_maybe_option_error_1[2];

static const MR_Integer mercury__getopt__getopt__functor_number_map_maybe_option_error_1[2];

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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_se_1_1[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_table_se_1_1;

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_se_1_0[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_se_1_1[1];

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_maybe_option_table_se_1[2];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_maybe_option_table_se_1[2];

static const MR_Integer mercury__getopt__getopt__functor_number_map_maybe_option_table_se_1[2];

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_arg_or_error_1_0[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_arg_or_error_1_0;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_arg_or_error_1_1[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_arg_or_error_1_1;

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_arg_or_error_1_0[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_arg_or_error_1_1[1];

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_arg_or_error_1[2];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_arg_or_error_1[2];

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_arg_or_error_1[2];

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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_12[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_12;

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_0[5];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_1[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_2[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_3[6];

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_error_reason_0[4];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_error_reason_0[13];

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_error_reason_0[13];

static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1;

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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_value_1_0[3];

static const MR_DuArgLocn mercury__getopt__getopt__field_locns_option_value_1_0[3];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_value_1_0;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_value_1_1[3];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_value_1_1;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_value_1_2[3];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_value_1_2;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_value_1_3[3];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_value_1_3;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_value_1_4[3];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_value_1_4;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_value_1_5[3];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_value_1_5;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_value_1_6[2];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_value_1_6;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_value_1_7[2];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_value_1_7;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_value_1_8[3];

static const MR_DuArgLocn mercury__getopt__getopt__field_locns_option_value_1_8[3];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_value_1_8;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_value_1_9[3];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_value_1_9;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_value_1_10[3];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_value_1_10;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_value_1_11[3];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_value_1_11;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_value_1_12[3];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_value_1_12;

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_value_1_0[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_value_1_1[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_value_1_2[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_value_1_3[10];

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_value_1[4];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_value_1[13];

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_value_1[13];

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

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0(
  MR_Word TypeInfo_for_OptionType_12,
  MR_Word OptionDefaultsPred_3,
  MR_Word * LambdaHeadVar__1_10,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0(
  MR_Word TypeInfo_for_OptionType_12,
  MR_Word OptionDefaultsPred_3,
  MR_Word * LambdaHeadVar__1_10,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_115_112_101_99_105_97_108_95_111_112_116_105_111_110_95_95_91_50_93_95_48_11_p_0(
  MR_Word TypeInfo_for_OptionType_79,
  MR_Word SpecialHandler_12,
  MR_Box Flag_13,
  MR_String OptName_14,
  MR_Word OptionData_15,
  MR_Word * MaybeError_16,
  MR_Word STATE_VARIABLE_OptionTable_0_32,
  MR_Word * STATE_VARIABLE_OptionTable_33,
  MR_Word STATE_VARIABLE_OptionsSet_0_34,
  MR_Word * STATE_VARIABLE_OptionsSet_35,
  MR_Box STATE_VARIABLE_UserData_0_36,
  MR_Box * STATE_VARIABLE_UserData_37);

static MR_Word MR_CALL 
mercury__getopt__go_cord_to_list_2_2_f_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__getopt__expand_file_special_option_10_p_0(
  MR_Word TypeInfo_for_OptionType_45,
  MR_Word TypeClassInfo_for_read_file_contents_44,
  MR_Word ShortOptionPred_11,
  MR_Word LongOptionPred_12,
  MR_Word OptionTable_13,
  MR_Word SeenFileNames_14,
  MR_Box Flag_15,
  MR_String OptName_16,
  MR_String FileName_17,
  MR_Word * FileOptionsOrError_18,
  MR_Box STATE_VARIABLE_MaybeIO_0_35,
  MR_Box * STATE_VARIABLE_MaybeIO_36);

static void MR_CALL 
mercury__getopt__words_loop__ho17_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Word * HeadVar__4_8);

static void MR_CALL 
mercury__getopt__LCMC__pred__words_loop__ho17__1_4_p_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Word * AddrOfHeadVar__4_15);

static void MR_CALL 
mercury__getopt__skip_to_word_end__ho19_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Integer * HeadVar__4_8);

static void MR_CALL 
mercury__getopt__skip_to_next_word_start__ho18_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Integer * HeadVar__4_8);

static void MR_CALL 
mercury__getopt__record_unnegated_short_options_10_p_0(
  MR_Word TypeInfo_for_OptionType_68,
  MR_Word ShortOptionPred_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * Args_5,
  MR_Word STATE_VARIABLE_RevOptionArgs_0_6,
  MR_Word * STATE_VARIABLE_RevOptionArgs_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_OptionValues_0_9,
  MR_Word * STATE_VARIABLE_OptionValues_10);

static void MR_CALL 
mercury__getopt__record_option_int_7_p_0(
  MR_Word TypeInfo_for_OptionType_31,
  MR_Word OptionData_8,
  MR_Box Flag_9,
  MR_String OptName_10,
  MR_String Arg_11,
  MR_Word * MaybeError_12,
  MR_Word STATE_VARIABLE_OptionValues_0_18,
  MR_Word * STATE_VARIABLE_OptionValues_19);

static void MR_CALL 
mercury__getopt__record_unnegated_long_option_11_p_0(
  MR_Word TypeInfo_for_OptionType_46,
  MR_Box Flag_12,
  MR_String OptName_13,
  MR_Word OptionData_14,
  MR_Word MaybeOptionArg0_15,
  MR_Word Args0_16,
  MR_Word * Args1_17,
  MR_Word STATE_VARIABLE_RevOptionArgs_0_30,
  MR_Word * STATE_VARIABLE_RevOptionArgs_31,
  MR_Word * MaybeError_19,
  MR_Word STATE_VARIABLE_OptionValues_0_32,
  MR_Word * STATE_VARIABLE_OptionValues_33);

static void MR_CALL 
mercury__getopt__record_negated_option_6_p_0(
  MR_Word TypeInfo_for_OptionType_32,
  MR_Word OptionTable_7,
  MR_Box Flag_8,
  MR_String OptName_9,
  MR_Word * MaybeError_10,
  MR_Word STATE_VARIABLE_OptionValues_0_21,
  MR_Word * STATE_VARIABLE_OptionValues_22);

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
mercury__getopt____Unify____file_options_or_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__getopt____Compare____file_options_or_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt____Unify____go_cord_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__getopt____Compare____go_cord_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt____Unify____go_cord_node_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__getopt____Compare____go_cord_node_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt____Unify____long_option_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__getopt____Compare____long_option_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__getopt____Compare____maybe_option_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__getopt____Compare____maybe_option_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

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
mercury__getopt____Unify____option_arg_or_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__getopt____Compare____option_arg_or_error_1_0_10001(
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
mercury__getopt____Unify____option_default_value_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__getopt____Compare____option_default_value_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

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
mercury__getopt____Unify____option_value_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__getopt____Compare____option_value_1_0_10001(
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
mercury__getopt____Unify____short_option_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__getopt____Compare____short_option_1_0_10001(
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

static MR_bool MR_CALL 
mercury__getopt____Unify____special_handler_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__getopt____Compare____special_handler_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt____Unify____special_handler_track_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__getopt____Compare____special_handler_track_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt____Unify____user_data_handler_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__getopt____Compare____user_data_handler_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

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


static /* final */ const MR_Box mercury__getopt_scalar_common_1[6][2];

static /* final */ const MR_Box mercury__getopt_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__getopt_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__getopt_scalar_common_4[1][5];

static /* final */ const MR_Integer mercury__getopt_scalar_common_5[1][2];

static /* final */ const MR_Box mercury__getopt_scalar_common_6[1][6];

static /* final */ const MR_Box mercury__getopt_scalar_common_7[1][7];




static /* final */ const MR_Box mercury__getopt_scalar_common_1[6][2] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_getopt__read_file_contents__arity1__unit__unit__arity0__)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_getopt__read_file_contents__arity1__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box mercury__getopt_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__getopt_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__getopt_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__getopt_scalar_common_4[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__getopt_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Integer mercury__getopt_scalar_common_5[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mercury__getopt_scalar_common_6[1][6] = {
  /* row   0 */
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
  /* row   0 */
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
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__getopt__pti_option_value_1__pseudo_1 = {
  &mercury__getopt__getopt__type_ctor_info_option_value_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__getopt__pti_go_cord_1__pseudo_getopt__pti_option_value_1__pseudo_1 = {
  &mercury__getopt__getopt__type_ctor_info_go_cord_1,
  { (MR_PseudoTypeInfo) (&mercury__getopt__getopt__pti_option_value_1__pseudo_1) }
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_file_options_or_error_1_0[1] = { (MR_PseudoTypeInfo) (&mercury__getopt__getopt__pti_go_cord_1__pseudo_getopt__pti_option_value_1__pseudo_1) };

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_file_options_or_error_1_0 = {
  (MR_String) "file_options_no_error",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__getopt__getopt__field_types_file_options_or_error_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__getopt__pti_option_error_1__pseudo_1 = {
  &mercury__getopt__getopt__type_ctor_info_option_error_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_file_options_or_error_1_1[1] = { (MR_PseudoTypeInfo) (&mercury__getopt__getopt__pti_option_error_1__pseudo_1) };

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_file_options_or_error_1_1 = {
  (MR_String) "file_options_error",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__getopt__getopt__field_types_file_options_or_error_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_file_options_or_error_1_0[1] = { &mercury__getopt__getopt__du_functor_desc_file_options_or_error_1_0 };

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_file_options_or_error_1_1[1] = { &mercury__getopt__getopt__du_functor_desc_file_options_or_error_1_1 };

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_file_options_or_error_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_file_options_or_error_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_file_options_or_error_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_file_options_or_error_1[2] = {
  &mercury__getopt__getopt__du_functor_desc_file_options_or_error_1_1,
  &mercury__getopt__getopt__du_functor_desc_file_options_or_error_1_0
};

static const MR_Integer mercury__getopt__getopt__functor_number_map_file_options_or_error_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_file_options_or_error_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____file_options_or_error_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____file_options_or_error_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "file_options_or_error",
  { mercury__getopt__getopt__du_name_ordered_file_options_or_error_1 },
  { mercury__getopt__getopt__du_ptag_ordered_file_options_or_error_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__getopt__getopt__functor_number_map_file_options_or_error_1,

};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_go_cord_1_0 = {
  (MR_String) "go_empty_cord",
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

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__getopt__pti_go_cord_node_1__pseudo_1 = {
  &mercury__getopt__getopt__type_ctor_info_go_cord_node_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_go_cord_1_1[1] = { (MR_PseudoTypeInfo) (&mercury__getopt__getopt__pti_go_cord_node_1__pseudo_1) };

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_go_cord_1_1 = {
  (MR_String) "go_nonempty_cord",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__getopt__getopt__field_types_go_cord_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_go_cord_1_0[1] = { &mercury__getopt__getopt__du_functor_desc_go_cord_1_0 };

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_go_cord_1_1[1] = { &mercury__getopt__getopt__du_functor_desc_go_cord_1_1 };

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_go_cord_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__getopt__getopt__du_stag_ordered_go_cord_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_go_cord_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_go_cord_1[2] = {
  &mercury__getopt__getopt__du_functor_desc_go_cord_1_0,
  &mercury__getopt__getopt__du_functor_desc_go_cord_1_1
};

static const MR_Integer mercury__getopt__getopt__functor_number_map_go_cord_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_go_cord_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____go_cord_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____go_cord_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "go_cord",
  { mercury__getopt__getopt__du_name_ordered_go_cord_1 },
  { mercury__getopt__getopt__du_ptag_ordered_go_cord_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__getopt__getopt__functor_number_map_go_cord_1,

};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_go_cord_node_1_0[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 1) };

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_go_cord_node_1_0 = {
  (MR_String) "go_unit_node",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__getopt__getopt__field_types_go_cord_node_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_go_cord_node_1_1[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__getopt__list__pti_list_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_go_cord_node_1_1 = {
  (MR_String) "go_list_node",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__getopt__getopt__field_types_go_cord_node_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_go_cord_node_1_2[2] = {
  (MR_PseudoTypeInfo) (&mercury__getopt__getopt__pti_go_cord_node_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__getopt__getopt__pti_go_cord_node_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_go_cord_node_1_2 = {
  (MR_String) "go_branch_node",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__getopt__getopt__field_types_go_cord_node_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_go_cord_node_1_0[1] = { &mercury__getopt__getopt__du_functor_desc_go_cord_node_1_0 };

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_go_cord_node_1_1[1] = { &mercury__getopt__getopt__du_functor_desc_go_cord_node_1_1 };

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_go_cord_node_1_2[1] = { &mercury__getopt__getopt__du_functor_desc_go_cord_node_1_2 };

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_go_cord_node_1[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_go_cord_node_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_go_cord_node_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_go_cord_node_1_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_go_cord_node_1[3] = {
  &mercury__getopt__getopt__du_functor_desc_go_cord_node_1_2,
  &mercury__getopt__getopt__du_functor_desc_go_cord_node_1_1,
  &mercury__getopt__getopt__du_functor_desc_go_cord_node_1_0
};

static const MR_Integer mercury__getopt__getopt__functor_number_map_go_cord_node_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_go_cord_node_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____go_cord_node_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____go_cord_node_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "go_cord_node",
  { mercury__getopt__getopt__du_name_ordered_go_cord_node_1 },
  { mercury__getopt__getopt__du_ptag_ordered_go_cord_node_1 },
  (MR_Integer) 3,
  UINT16_C(12),
  mercury__getopt__getopt__functor_number_map_go_cord_node_1,

};

static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_long_option_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__getopt____Unify____long_option_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____long_option_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "long_option",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_arg_0_0 = {
  (MR_String) "no_option_arg",
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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_arg_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_arg_0_1 = {
  (MR_String) "option_arg",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__getopt__getopt__field_types_maybe_option_arg_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_arg_0_0[1] = { &mercury__getopt__getopt__du_functor_desc_maybe_option_arg_0_0 };

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_arg_0_1[1] = { &mercury__getopt__getopt__du_functor_desc_maybe_option_arg_0_1 };

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_maybe_option_arg_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__getopt__getopt__du_stag_ordered_maybe_option_arg_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_maybe_option_arg_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_maybe_option_arg_0[2] = {
  &mercury__getopt__getopt__du_functor_desc_maybe_option_arg_0_0,
  &mercury__getopt__getopt__du_functor_desc_maybe_option_arg_0_1
};

static const MR_Integer mercury__getopt__getopt__functor_number_map_maybe_option_arg_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_maybe_option_arg_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____maybe_option_arg_0_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____maybe_option_arg_0_0_10001)),
  (MR_String) "getopt",
  (MR_String) "maybe_option_arg",
  { mercury__getopt__getopt__du_name_ordered_maybe_option_arg_0 },
  { mercury__getopt__getopt__du_ptag_ordered_maybe_option_arg_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__getopt__getopt__functor_number_map_maybe_option_arg_0,

};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_error_1_0 = {
  (MR_String) "no_option_error",
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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_error_1_1[1] = { (MR_PseudoTypeInfo) (&mercury__getopt__getopt__pti_option_error_1__pseudo_1) };

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_error_1_1 = {
  (MR_String) "found_option_error",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__getopt__getopt__field_types_maybe_option_error_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_error_1_0[1] = { &mercury__getopt__getopt__du_functor_desc_maybe_option_error_1_0 };

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_error_1_1[1] = { &mercury__getopt__getopt__du_functor_desc_maybe_option_error_1_1 };

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_maybe_option_error_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__getopt__getopt__du_stag_ordered_maybe_option_error_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_maybe_option_error_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_maybe_option_error_1[2] = {
  &mercury__getopt__getopt__du_functor_desc_maybe_option_error_1_1,
  &mercury__getopt__getopt__du_functor_desc_maybe_option_error_1_0
};

static const MR_Integer mercury__getopt__getopt__functor_number_map_maybe_option_error_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_maybe_option_error_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____maybe_option_error_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____maybe_option_error_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "maybe_option_error",
  { mercury__getopt__getopt__du_name_ordered_maybe_option_error_1 },
  { mercury__getopt__getopt__du_ptag_ordered_maybe_option_error_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__getopt__getopt__functor_number_map_maybe_option_error_1,

};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__getopt__tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_1_0[1] = { (MR_PseudoTypeInfo) (&mercury__getopt__tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0) };

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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_1_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

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

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_1_0[1] = { &mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_0 };

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_1_1[1] = { &mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_1 };

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_maybe_option_table_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_maybe_option_table_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_maybe_option_table_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____maybe_option_table_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____maybe_option_table_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "maybe_option_table",
  { mercury__getopt__getopt__du_name_ordered_maybe_option_table_1 },
  { mercury__getopt__getopt__du_ptag_ordered_maybe_option_table_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__getopt__getopt__functor_number_map_maybe_option_table_1,

};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_se_1_0[1] = { (MR_PseudoTypeInfo) (&mercury__getopt__tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0) };

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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_se_1_1[1] = { (MR_PseudoTypeInfo) (&mercury__getopt__getopt__pti_option_error_1__pseudo_1) };

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

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_se_1_0[1] = { &mercury__getopt__getopt__du_functor_desc_maybe_option_table_se_1_0 };

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_se_1_1[1] = { &mercury__getopt__getopt__du_functor_desc_maybe_option_table_se_1_1 };

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_maybe_option_table_se_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_maybe_option_table_se_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_maybe_option_table_se_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____maybe_option_table_se_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____maybe_option_table_se_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "maybe_option_table_se",
  { mercury__getopt__getopt__du_name_ordered_maybe_option_table_se_1 },
  { mercury__getopt__getopt__du_ptag_ordered_maybe_option_table_se_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__getopt__getopt__functor_number_map_maybe_option_table_se_1,

};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_arg_or_error_1_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_arg_or_error_1_0 = {
  (MR_String) "option_arg_no_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__getopt__getopt__field_types_option_arg_or_error_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_arg_or_error_1_1[1] = { (MR_PseudoTypeInfo) (&mercury__getopt__getopt__pti_option_error_1__pseudo_1) };

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_arg_or_error_1_1 = {
  (MR_String) "option_arg_error",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__getopt__getopt__field_types_option_arg_or_error_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_arg_or_error_1_0[1] = { &mercury__getopt__getopt__du_functor_desc_option_arg_or_error_1_0 };

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_arg_or_error_1_1[1] = { &mercury__getopt__getopt__du_functor_desc_option_arg_or_error_1_1 };

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_arg_or_error_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_arg_or_error_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_arg_or_error_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_arg_or_error_1[2] = {
  &mercury__getopt__getopt__du_functor_desc_option_arg_or_error_1_1,
  &mercury__getopt__getopt__du_functor_desc_option_arg_or_error_1_0
};

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_arg_or_error_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_option_arg_or_error_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____option_arg_or_error_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_arg_or_error_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_arg_or_error",
  { mercury__getopt__getopt__du_name_ordered_option_arg_or_error_1 },
  { mercury__getopt__getopt__du_ptag_ordered_option_arg_or_error_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__getopt__getopt__functor_number_map_option_arg_or_error_1,

};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0) };

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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

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
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_3[1] = { (MR_PseudoTypeInfo) (&mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_int_0) };

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
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_4[1] = { (MR_PseudoTypeInfo) (&mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_string_0) };

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
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_5[1] = { (MR_PseudoTypeInfo) (&mercury__getopt__list__ti_list_1builtin__type_ctor_info_string_0) };

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

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_1[1] = { &mercury__getopt__getopt__du_functor_desc_option_data_0_0 };

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_2[1] = { &mercury__getopt__getopt__du_functor_desc_option_data_0_1 };

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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_data_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_data_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(4),
    MR_SECTAG_REMOTE_FULL_WORD,
    mercury__getopt__getopt__du_stag_ordered_option_data_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____option_data_0_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_data_0_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_data",
  { mercury__getopt__getopt__du_name_ordered_option_data_0 },
  { mercury__getopt__getopt__du_ptag_ordered_option_data_0 },
  (MR_Integer) 12,
  UINT16_C(12),
  mercury__getopt__getopt__functor_number_map_option_data_0,

};

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_option_default_value_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__getopt____Unify____option_default_value_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_default_value_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_default_value",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_1_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

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

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_1_0[1] = { &mercury__getopt__getopt__du_functor_desc_option_error_1_0 };

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_1_1[1] = { &mercury__getopt__getopt__du_functor_desc_option_error_1_1 };

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_error_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_error_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_error_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____option_error_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_error_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_error",
  { mercury__getopt__getopt__du_name_ordered_option_error_1 },
  { mercury__getopt__getopt__du_ptag_ordered_option_error_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__getopt__getopt__functor_number_map_option_error_1,

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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_6[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_7[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_8[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_11[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_12[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_12 = {
  (MR_String) "file_special_circular_inclusion",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(12),
  mercury__getopt__getopt__field_types_option_error_reason_0_12,
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

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_1[1] = { &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_2 };

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_2[1] = { &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_6 };

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_3[6] = {
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_7,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_8,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_9,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_10,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_11,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_12
};

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_error_reason_0[4] = {
  {
    UINT32_C(5),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(6),
    MR_SECTAG_REMOTE_FULL_WORD,
    mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_error_reason_0[13] = {
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_3,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_2,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_8,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_9,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_10,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_12,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_11,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_1,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_7,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_6,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_4,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_5,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_0
};

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_error_reason_0[13] = {
  (MR_Integer) 12,
  (MR_Integer) 7,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 10,
  (MR_Integer) 11,
  (MR_Integer) 9,
  (MR_Integer) 8,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 6,
  (MR_Integer) 5
};

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_option_error_reason_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____option_error_reason_0_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_error_reason_0_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_error_reason",
  { mercury__getopt__getopt__du_name_ordered_option_error_reason_0 },
  { mercury__getopt__getopt__du_ptag_ordered_option_error_reason_0 },
  (MR_Integer) 13,
  UINT16_C(12),
  mercury__getopt__getopt__functor_number_map_option_error_reason_0,

};

static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0),
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
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
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

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_0[1] = { &mercury__getopt__getopt__du_functor_desc_option_ops_1_0 };

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_1[1] = { &mercury__getopt__getopt__du_functor_desc_option_ops_1_1 };

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_2[1] = { &mercury__getopt__getopt__du_functor_desc_option_ops_1_2 };

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_3[1] = { &mercury__getopt__getopt__du_functor_desc_option_ops_1_3 };

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_1[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_1_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_1_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____option_ops_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_ops_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_ops",
  { mercury__getopt__getopt__du_name_ordered_option_ops_1 },
  { mercury__getopt__getopt__du_ptag_ordered_option_ops_1 },
  (MR_Integer) 4,
  UINT16_C(12),
  mercury__getopt__getopt__functor_number_map_option_ops_1,

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

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_internal_2_0[1] = { &mercury__getopt__getopt__du_functor_desc_option_ops_internal_2_0 };

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_internal_2[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_internal_2_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_internal_2[1] = { &mercury__getopt__getopt__du_functor_desc_option_ops_internal_2_0 };

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_internal_2[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_option_ops_internal_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____option_ops_internal_2_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_ops_internal_2_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_ops_internal",
  { mercury__getopt__getopt__du_name_ordered_option_ops_internal_2 },
  { mercury__getopt__getopt__du_ptag_ordered_option_ops_internal_2 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__getopt__getopt__functor_number_map_option_ops_internal_2,

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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_special_2_1[1] = { (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_4__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1) };

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
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_special_2_2[1] = { (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_5__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1) };

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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_special_2_3[1] = { (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_6__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1__pseudo_2__pseudo_2) };

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

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_2_0[1] = { &mercury__getopt__getopt__du_functor_desc_option_ops_special_2_0 };

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_2_1[1] = { &mercury__getopt__getopt__du_functor_desc_option_ops_special_2_1 };

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_2_2[1] = { &mercury__getopt__getopt__du_functor_desc_option_ops_special_2_2 };

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_2_3[1] = { &mercury__getopt__getopt__du_functor_desc_option_ops_special_2_3 };

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_special_2[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__getopt__getopt__du_stag_ordered_option_ops_special_2_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_special_2_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_special_2_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_special_2_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____option_ops_special_2_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_ops_special_2_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_ops_special",
  { mercury__getopt__getopt__du_name_ordered_option_ops_special_2 },
  { mercury__getopt__getopt__du_ptag_ordered_option_ops_special_2 },
  (MR_Integer) 4,
  UINT16_C(12),
  mercury__getopt__getopt__functor_number_map_option_ops_special_2,

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

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_track_1_0[1] = { &mercury__getopt__getopt__du_functor_desc_option_ops_track_1_0 };

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_track_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_track_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_track_1[1] = { &mercury__getopt__getopt__du_functor_desc_option_ops_track_1_0 };

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_track_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_option_ops_track_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____option_ops_track_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_ops_track_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_ops_track",
  { mercury__getopt__getopt__du_name_ordered_option_ops_track_1 },
  { mercury__getopt__getopt__du_ptag_ordered_option_ops_track_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__getopt__getopt__functor_number_map_option_ops_track_1,

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

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_userdata_2_0[1] = { &mercury__getopt__getopt__du_functor_desc_option_ops_userdata_2_0 };

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_userdata_2[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_userdata_2_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_userdata_2[1] = { &mercury__getopt__getopt__du_functor_desc_option_ops_userdata_2_0 };

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_userdata_2[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_option_ops_userdata_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____option_ops_userdata_2_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_ops_userdata_2_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_ops_userdata",
  { mercury__getopt__getopt__du_name_ordered_option_ops_userdata_2 },
  { mercury__getopt__getopt__du_ptag_ordered_option_ops_userdata_2 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__getopt__getopt__functor_number_map_option_ops_userdata_2,

};

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_option_table_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__getopt____Unify____option_table_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_table_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_table",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__getopt__tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_value_1_0[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_DuArgLocn mercury__getopt__getopt__field_locns_option_value_1_0[3] = {
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
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_value_1_0 = {
  (MR_String) "ov_bool",
  INT16_C(3),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__getopt__getopt__field_types_option_value_1_0,
  NULL,
  mercury__getopt__getopt__field_locns_option_value_1_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_value_1_1[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_value_1_1 = {
  (MR_String) "ov_int",
  INT16_C(3),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__getopt__getopt__field_types_option_value_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_value_1_2[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_value_1_2 = {
  (MR_String) "ov_string",
  INT16_C(3),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__getopt__getopt__field_types_option_value_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_value_1_3[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_value_1_3 = {
  (MR_String) "ov_maybe_int",
  INT16_C(3),
  UINT16_C(1),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  mercury__getopt__getopt__field_types_option_value_1_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_value_1_4[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_value_1_4 = {
  (MR_String) "ov_maybe_string",
  INT16_C(3),
  UINT16_C(1),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  mercury__getopt__getopt__field_types_option_value_1_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_value_1_5[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_value_1_5 = {
  (MR_String) "ov_accumulating",
  INT16_C(3),
  UINT16_C(1),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  mercury__getopt__getopt__field_types_option_value_1_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_value_1_6[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_value_1_6 = {
  (MR_String) "ov_accumulating_reset",
  INT16_C(2),
  UINT16_C(1),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(6),
  mercury__getopt__getopt__field_types_option_value_1_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_value_1_7[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_value_1_7 = {
  (MR_String) "ov_special",
  INT16_C(2),
  UINT16_C(1),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(7),
  mercury__getopt__getopt__field_types_option_value_1_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_value_1_8[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_DuArgLocn mercury__getopt__getopt__field_locns_option_value_1_8[3] = {
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
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_value_1_8 = {
  (MR_String) "ov_bool_special",
  INT16_C(3),
  UINT16_C(1),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(8),
  mercury__getopt__getopt__field_types_option_value_1_8,
  NULL,
  mercury__getopt__getopt__field_locns_option_value_1_8,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_value_1_9[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_value_1_9 = {
  (MR_String) "ov_int_special",
  INT16_C(3),
  UINT16_C(1),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(9),
  mercury__getopt__getopt__field_types_option_value_1_9,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_value_1_10[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_value_1_10 = {
  (MR_String) "ov_string_special",
  INT16_C(3),
  UINT16_C(1),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(10),
  mercury__getopt__getopt__field_types_option_value_1_10,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_value_1_11[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_value_1_11 = {
  (MR_String) "ov_maybe_string_special",
  INT16_C(3),
  UINT16_C(1),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 8,
  INT32_C(11),
  mercury__getopt__getopt__field_types_option_value_1_11,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_value_1_12[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_value_1_12 = {
  (MR_String) "ov_file_special",
  INT16_C(3),
  UINT16_C(1),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 9,
  INT32_C(12),
  mercury__getopt__getopt__field_types_option_value_1_12,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_value_1_0[1] = { &mercury__getopt__getopt__du_functor_desc_option_value_1_0 };

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_value_1_1[1] = { &mercury__getopt__getopt__du_functor_desc_option_value_1_1 };

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_value_1_2[1] = { &mercury__getopt__getopt__du_functor_desc_option_value_1_2 };

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_value_1_3[10] = {
  &mercury__getopt__getopt__du_functor_desc_option_value_1_3,
  &mercury__getopt__getopt__du_functor_desc_option_value_1_4,
  &mercury__getopt__getopt__du_functor_desc_option_value_1_5,
  &mercury__getopt__getopt__du_functor_desc_option_value_1_6,
  &mercury__getopt__getopt__du_functor_desc_option_value_1_7,
  &mercury__getopt__getopt__du_functor_desc_option_value_1_8,
  &mercury__getopt__getopt__du_functor_desc_option_value_1_9,
  &mercury__getopt__getopt__du_functor_desc_option_value_1_10,
  &mercury__getopt__getopt__du_functor_desc_option_value_1_11,
  &mercury__getopt__getopt__du_functor_desc_option_value_1_12
};

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_value_1[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_value_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_value_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_value_1_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(10),
    MR_SECTAG_REMOTE_FULL_WORD,
    mercury__getopt__getopt__du_stag_ordered_option_value_1_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_value_1[13] = {
  &mercury__getopt__getopt__du_functor_desc_option_value_1_5,
  &mercury__getopt__getopt__du_functor_desc_option_value_1_6,
  &mercury__getopt__getopt__du_functor_desc_option_value_1_0,
  &mercury__getopt__getopt__du_functor_desc_option_value_1_8,
  &mercury__getopt__getopt__du_functor_desc_option_value_1_12,
  &mercury__getopt__getopt__du_functor_desc_option_value_1_1,
  &mercury__getopt__getopt__du_functor_desc_option_value_1_9,
  &mercury__getopt__getopt__du_functor_desc_option_value_1_3,
  &mercury__getopt__getopt__du_functor_desc_option_value_1_4,
  &mercury__getopt__getopt__du_functor_desc_option_value_1_11,
  &mercury__getopt__getopt__du_functor_desc_option_value_1_7,
  &mercury__getopt__getopt__du_functor_desc_option_value_1_2,
  &mercury__getopt__getopt__du_functor_desc_option_value_1_10
};

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_value_1[13] = {
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 11,
  (MR_Integer) 7,
  (MR_Integer) 8,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 10,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 12,
  (MR_Integer) 9,
  (MR_Integer) 4
};

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_option_value_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____option_value_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_value_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_value",
  { mercury__getopt__getopt__du_name_ordered_option_value_1 },
  { mercury__getopt__getopt__du_ptag_ordered_option_value_1 },
  (MR_Integer) 13,
  UINT16_C(12),
  mercury__getopt__getopt__functor_number_map_option_value_1,

};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_read_file_contents_result_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_read_file_contents_result_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_error_0) };

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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_read_file_contents_result_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_error_0) };

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

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_read_file_contents_result_0_0[1] = { &mercury__getopt__getopt__du_functor_desc_read_file_contents_result_0_3 };

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_read_file_contents_result_0_1[1] = { &mercury__getopt__getopt__du_functor_desc_read_file_contents_result_0_0 };

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_read_file_contents_result_0_2[1] = { &mercury__getopt__getopt__du_functor_desc_read_file_contents_result_0_1 };

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_read_file_contents_result_0_3[1] = { &mercury__getopt__getopt__du_functor_desc_read_file_contents_result_0_2 };

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_read_file_contents_result_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__getopt__getopt__du_stag_ordered_read_file_contents_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_read_file_contents_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_read_file_contents_result_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_read_file_contents_result_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____read_file_contents_result_0_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____read_file_contents_result_0_0_10001)),
  (MR_String) "getopt",
  (MR_String) "read_file_contents_result",
  { mercury__getopt__getopt__du_name_ordered_read_file_contents_result_0 },
  { mercury__getopt__getopt__du_ptag_ordered_read_file_contents_result_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  mercury__getopt__getopt__functor_number_map_read_file_contents_result_0,

};

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_short_option_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__getopt____Unify____short_option_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____short_option_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "short_option",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0) };

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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_3[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_4[1] = { (MR_PseudoTypeInfo) (&mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_string_0) };

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

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_0[1] = { &mercury__getopt__getopt__du_functor_desc_special_data_0_0 };

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_1[1] = { &mercury__getopt__getopt__du_functor_desc_special_data_0_1 };

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_2[1] = { &mercury__getopt__getopt__du_functor_desc_special_data_0_2 };

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_3[2] = {
  &mercury__getopt__getopt__du_functor_desc_special_data_0_3,
  &mercury__getopt__getopt__du_functor_desc_special_data_0_4
};

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_special_data_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__getopt__getopt__du_stag_ordered_special_data_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_special_data_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_special_data_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    mercury__getopt__getopt__du_stag_ordered_special_data_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____special_data_0_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____special_data_0_0_10001)),
  (MR_String) "getopt",
  (MR_String) "special_data",
  { mercury__getopt__getopt__du_name_ordered_special_data_0 },
  { mercury__getopt__getopt__du_ptag_ordered_special_data_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  mercury__getopt__getopt__functor_number_map_special_data_0,

};

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_special_handler_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__getopt____Unify____special_handler_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____special_handler_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "special_handler",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_4__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_special_handler_track_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__getopt____Unify____special_handler_track_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____special_handler_track_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "special_handler_track",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_5__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_user_data_handler_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__getopt____Unify____user_data_handler_2_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____user_data_handler_2_0_10001)),
  (MR_String) "getopt",
  (MR_String) "user_data_handler",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_6__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1__pseudo_2__pseudo_2) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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

static const MR_ConstString mercury__getopt__getopt__type_class_id_var_names_read_file_contents_1[1] = { (MR_String) "MaybeIO" };

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

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0_2(
  void * env_ptr_arg)
{
  struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0_env_0_s * env_ptr = (struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0_env_0__OptionData_7 = ((MR_Word) ((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0_env_0__conv1_OptionData_7));
  mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0_1(env_ptr);
}

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0_1(
  void * env_ptr_arg)
{
  struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0_env_0_s * env_ptr = (struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0_env_0__LambdaHeadVar__1_10) = base;
    MR_hl_field(0, base, 0) = (env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0_env_0__Flag_6;
    MR_hl_field(0, base, 1) = ((MR_Box) ((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0_env_0__OptionData_7));
  }
  ((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0_env_0__cont)((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0(
  MR_Word TypeInfo_for_OptionType_12,
  MR_Word OptionDefaultsPred_3,
  MR_Word * LambdaHeadVar__1_10,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0_env_0_s env;

  (env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0_env_0__LambdaHeadVar__1_10 = LambdaHeadVar__1_10;
  (env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0_env_0__cont = cont;
  (env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *)) ((MR_hl_field(0, OptionDefaultsPred_3, (MR_Integer) 1))));

    func_0(((MR_Box) (OptionDefaultsPred_3)), &(env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0_env_0__Flag_6, &(env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0_env_0__conv1_OptionData_7, mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0_2, &env);
  }
}

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0_2(
  void * env_ptr_arg)
{
  struct mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0_env_0_s * env_ptr = (struct mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0_env_0__OptionData_7 = ((MR_Word) ((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0_env_0__conv1_OptionData_7));
  mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0_1(env_ptr);
}

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0_1(
  void * env_ptr_arg)
{
  struct mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0_env_0_s * env_ptr = (struct mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0_env_0__LambdaHeadVar__1_10) = base;
    MR_hl_field(0, base, 0) = (env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0_env_0__Flag_6;
    MR_hl_field(0, base, 1) = ((MR_Box) ((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0_env_0__OptionData_7));
  }
  ((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0_env_0__cont)((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0(
  MR_Word TypeInfo_for_OptionType_12,
  MR_Word OptionDefaultsPred_3,
  MR_Word * LambdaHeadVar__1_10,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0_env_0_s env;

  (env).mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0_env_0__LambdaHeadVar__1_10 = LambdaHeadVar__1_10;
  (env).mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0_env_0__cont = cont;
  (env).mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *)) ((MR_hl_field(0, OptionDefaultsPred_3, (MR_Integer) 1))));

    func_0(((MR_Box) (OptionDefaultsPred_3)), &(env).mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0_env_0__Flag_6, &(env).mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0_env_0__conv1_OptionData_7, mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0_2, &env);
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
  *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
}

void MR_CALL 
mercury__getopt____Compare____user_data_handler_2_0(
  MR_Word TypeInfo_for_OptionType_6,
  MR_Word TypeInfo_for_UserDataType_7,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
mercury__getopt____Unify____user_data_handler_2_0(
  MR_Word TypeInfo_for_OptionType_5,
  MR_Word TypeInfo_for_UserDataType_6,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
mercury__getopt____Compare____special_handler_track_1_0(
  MR_Word TypeInfo_for_OptionType_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
mercury__getopt____Unify____special_handler_track_1_0(
  MR_Word TypeInfo_for_OptionType_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
mercury__getopt____Compare____special_handler_1_0(
  MR_Word TypeInfo_for_OptionType_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
mercury__getopt____Unify____special_handler_1_0(
  MR_Word TypeInfo_for_OptionType_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
mercury__getopt____Compare____special_data_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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
            switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
          MR_Word Var_50 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_10 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
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
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
          MR_Integer Var_51 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Integer ArgY1_21 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

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
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_53 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_String ArgY1_32 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                        MR_Integer Var_56;

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
	Var_56  = Res;
}
                        succeeded = (Var_56 < (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_56 == (MR_Integer) 0);
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
              MR_Word Var_52 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ArgY1_43 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

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

MR_bool MR_CALL 
mercury__getopt____Unify____special_data_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
          MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ArgX1_7 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_7 == ArgY1_8);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ArgX1_9 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_10;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_10 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (strcmp(ArgX1_9, ArgY1_10) == 0);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_15_15;
              MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
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

void MR_CALL 
mercury__getopt____Compare____short_option_1_0(
  MR_Word TypeInfo_for_OptionType_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
mercury__getopt____Unify____short_option_1_0(
  MR_Word TypeInfo_for_OptionType_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
mercury__getopt____Compare____read_file_contents_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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
          MR_String Var_35 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              {
                MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
                MR_Integer Var_36;

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
	Var_36  = Res;
}
                succeeded = (Var_36 < (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_36 == (MR_Integer) 0);
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
          MR_Word Var_33 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

                mercury__io____Compare____error_0_0(HeadVar__1_1, Var_33, ArgY1_14);
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
          MR_Word Var_34 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_23 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))));

                mercury__io____Compare____error_0_0(HeadVar__1_1, Var_34, ArgY1_23);
              }
              break;
          }
        }
        break;
    }
}

MR_bool MR_CALL 
mercury__getopt____Unify____read_file_contents_result_0_0(
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
          MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mercury__io____Unify____error_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mercury__io____Unify____error_0_0(ArgX1_7, ArgY1_8);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mercury__getopt____Compare____option_value_1_0(
  MR_Word TypeInfo_for_OptionType_992,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_990 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_991 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_990 == CastY_991);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_1022 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
          MR_String Var_1023 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
          MR_Box Var_1024 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0));
                MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Word SubResult1_6;

                mercury__builtin__compare_3_p_0(TypeInfo_for_OptionType_992, &SubResult1_6, Var_1024, ArgY1_5);
                succeeded = (SubResult1_6 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_6;
                else
                {
                  MR_Word SubResult2_9;
                  MR_Integer Var_1064;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_value_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_1023 ;
	S2 = ArgY2_8 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_1064  = Res;
}
                  succeeded = (Var_1064 < (MR_Integer) 0);
                  if (succeeded)
                    SubResult2_9 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_1064 == (MR_Integer) 0);
                    if (succeeded)
                      SubResult2_9 = (MR_Integer) 0;
                    else
                      SubResult2_9 = (MR_Integer) 2;
                  }
                  succeeded = (SubResult2_9 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_9;
                  else
                  {
                    MR_Integer Var_1054 = (MR_Integer) (Var_1022);
                    MR_Integer Var_1055 = (MR_Integer) (ArgY3_11);

                    succeeded = (Var_1054 < Var_1055);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_1054 == Var_1055);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *HeadVar__1_1 = (MR_Integer) 2;
                    }
                  }
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
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                case (MR_Integer) 6:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 7:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 8:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 9:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_1031 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
          MR_String Var_1032 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_Box Var_1033 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Box ArgY1_89 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));
                MR_String ArgY2_92 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                MR_Integer ArgY3_95 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_90;

                mercury__builtin__compare_3_p_0(TypeInfo_for_OptionType_992, &SubResult1_90, Var_1033, ArgY1_89);
                succeeded = (SubResult1_90 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_90;
                else
                {
                  MR_Word SubResult2_93;
                  MR_Integer Var_1072;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_value_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_1032 ;
	S2 = ArgY2_92 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_1072  = Res;
}
                  succeeded = (Var_1072 < (MR_Integer) 0);
                  if (succeeded)
                    SubResult2_93 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_1072 == (MR_Integer) 0);
                    if (succeeded)
                      SubResult2_93 = (MR_Integer) 0;
                    else
                      SubResult2_93 = (MR_Integer) 2;
                  }
                  succeeded = (SubResult2_93 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_93;
                  else
                  {
                    succeeded = (Var_1031 < ArgY3_95);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_1031 == ArgY3_95);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *HeadVar__1_1 = (MR_Integer) 2;
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                case (MR_Integer) 6:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 7:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 8:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 9:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String Var_1048 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
          MR_String Var_1049 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
          MR_Box Var_1050 = (MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0));

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
                MR_Box ArgY1_173 = (MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0));
                MR_String ArgY2_176 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
                MR_String ArgY3_179 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_174;

                mercury__builtin__compare_3_p_0(TypeInfo_for_OptionType_992, &SubResult1_174, Var_1050, ArgY1_173);
                succeeded = (SubResult1_174 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_174;
                else
                {
                  MR_Word SubResult2_177;
                  MR_Integer Var_1084;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_value_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_1049 ;
	S2 = ArgY2_176 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_1084  = Res;
}
                  succeeded = (Var_1084 < (MR_Integer) 0);
                  if (succeeded)
                    SubResult2_177 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_1084 == (MR_Integer) 0);
                    if (succeeded)
                      SubResult2_177 = (MR_Integer) 0;
                    else
                      SubResult2_177 = (MR_Integer) 2;
                  }
                  succeeded = (SubResult2_177 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_177;
                  else
                  {
                    MR_Integer Var_1086;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_value_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_1048 ;
	S2 = ArgY3_179 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_1086  = Res;
}
                    succeeded = (Var_1086 < (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_1086 == (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *HeadVar__1_1 = (MR_Integer) 2;
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                case (MR_Integer) 6:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 7:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 8:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 9:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_1037 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
              MR_String Var_1038 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
              MR_Box Var_1039 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Box ArgY1_257 = (MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1));
                        MR_String ArgY2_260 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word ArgY3_263 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                        MR_Word SubResult1_258;

                        mercury__builtin__compare_3_p_0(TypeInfo_for_OptionType_992, &SubResult1_258, Var_1039, ArgY1_257);
                        succeeded = (SubResult1_258 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_258;
                        else
                        {
                          MR_Word SubResult2_261;
                          MR_Integer Var_1076;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_value_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_1038 ;
	S2 = ArgY2_260 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_1076  = Res;
}
                          succeeded = (Var_1076 < (MR_Integer) 0);
                          if (succeeded)
                            SubResult2_261 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_1076 == (MR_Integer) 0);
                            if (succeeded)
                              SubResult2_261 = (MR_Integer) 0;
                            else
                              SubResult2_261 = (MR_Integer) 2;
                          }
                          succeeded = (SubResult2_261 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult2_261;
                          else
                            mercury__builtin__compare_3_p_0((MR_Word) (&mercury__getopt_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Var_1037)), ((MR_Box) (ArgY3_263)));
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
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 9:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_1040 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
              MR_String Var_1041 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
              MR_Box Var_1042 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Box ArgY1_341 = (MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1));
                        MR_String ArgY2_344 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word ArgY3_347 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                        MR_Word SubResult1_342;

                        mercury__builtin__compare_3_p_0(TypeInfo_for_OptionType_992, &SubResult1_342, Var_1042, ArgY1_341);
                        succeeded = (SubResult1_342 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_342;
                        else
                        {
                          MR_Word SubResult2_345;
                          MR_Integer Var_1078;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_value_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_1041 ;
	S2 = ArgY2_344 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_1078  = Res;
}
                          succeeded = (Var_1078 < (MR_Integer) 0);
                          if (succeeded)
                            SubResult2_345 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_1078 == (MR_Integer) 0);
                            if (succeeded)
                              SubResult2_345 = (MR_Integer) 0;
                            else
                              SubResult2_345 = (MR_Integer) 2;
                          }
                          succeeded = (SubResult2_345 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult2_345;
                          else
                            mercury__builtin__compare_3_p_0((MR_Word) (&mercury__getopt_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Var_1040)), ((MR_Box) (ArgY3_347)));
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
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 9:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String Var_1017 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
              MR_String Var_1018 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
              MR_Box Var_1019 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Box ArgY1_425 = (MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1));
                        MR_String ArgY2_428 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                        MR_String ArgY3_431 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                        MR_Word SubResult1_426;

                        mercury__builtin__compare_3_p_0(TypeInfo_for_OptionType_992, &SubResult1_426, Var_1019, ArgY1_425);
                        succeeded = (SubResult1_426 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_426;
                        else
                        {
                          MR_Word SubResult2_429;
                          MR_Integer Var_1058;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_value_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_1018 ;
	S2 = ArgY2_428 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_1058  = Res;
}
                          succeeded = (Var_1058 < (MR_Integer) 0);
                          if (succeeded)
                            SubResult2_429 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_1058 == (MR_Integer) 0);
                            if (succeeded)
                              SubResult2_429 = (MR_Integer) 0;
                            else
                              SubResult2_429 = (MR_Integer) 2;
                          }
                          succeeded = (SubResult2_429 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult2_429;
                          else
                          {
                            MR_Integer Var_1060;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_value_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_1017 ;
	S2 = ArgY3_431 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_1060  = Res;
}
                            succeeded = (Var_1060 < (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (Var_1060 == (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = (MR_Integer) 0;
                              else
                                *HeadVar__1_1 = (MR_Integer) 2;
                            }
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
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 9:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String Var_1020 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
              MR_Box Var_1021 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                        MR_Box ArgY1_503 = (MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1));
                        MR_String ArgY2_506 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word SubResult1_504;

                        mercury__builtin__compare_3_p_0(TypeInfo_for_OptionType_992, &SubResult1_504, Var_1021, ArgY1_503);
                        succeeded = (SubResult1_504 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_504;
                        else
                        {
                          MR_Integer Var_1062;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_value_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_1020 ;
	S2 = ArgY2_506 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_1062  = Res;
}
                          succeeded = (Var_1062 < (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_1062 == (MR_Integer) 0);
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
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 9:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_String Var_1046 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
              MR_Box Var_1047 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                        MR_Box ArgY1_571 = (MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1));
                        MR_String ArgY2_574 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word SubResult1_572;

                        mercury__builtin__compare_3_p_0(TypeInfo_for_OptionType_992, &SubResult1_572, Var_1047, ArgY1_571);
                        succeeded = (SubResult1_572 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_572;
                        else
                        {
                          MR_Integer Var_1082;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_value_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_1046 ;
	S2 = ArgY2_574 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_1082  = Res;
}
                          succeeded = (Var_1082 < (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_1082 == (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 0;
                            else
                              *HeadVar__1_1 = (MR_Integer) 2;
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 9:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Var_1025 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
              MR_String Var_1026 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
              MR_Box Var_1027 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                      {
                        MR_Box ArgY1_647 = (MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1));
                        MR_String ArgY2_650 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word ArgY3_653 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 1);
                        MR_Word SubResult1_648;

                        mercury__builtin__compare_3_p_0(TypeInfo_for_OptionType_992, &SubResult1_648, Var_1027, ArgY1_647);
                        succeeded = (SubResult1_648 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_648;
                        else
                        {
                          MR_Word SubResult2_651;
                          MR_Integer Var_1066;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_value_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_1026 ;
	S2 = ArgY2_650 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_1066  = Res;
}
                          succeeded = (Var_1066 < (MR_Integer) 0);
                          if (succeeded)
                            SubResult2_651 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_1066 == (MR_Integer) 0);
                            if (succeeded)
                              SubResult2_651 = (MR_Integer) 0;
                            else
                              SubResult2_651 = (MR_Integer) 2;
                          }
                          succeeded = (SubResult2_651 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult2_651;
                          else
                          {
                            MR_Integer Var_1056 = (MR_Integer) (Var_1025);
                            MR_Integer Var_1057 = (MR_Integer) (ArgY3_653);

                            succeeded = (Var_1056 < Var_1057);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (Var_1056 == Var_1057);
                              if (succeeded)
                                *HeadVar__1_1 = (MR_Integer) 0;
                              else
                                *HeadVar__1_1 = (MR_Integer) 2;
                            }
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 9:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Integer Var_1034 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
              MR_String Var_1035 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
              MR_Box Var_1036 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Box ArgY1_731 = (MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1));
                        MR_String ArgY2_734 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                        MR_Integer ArgY3_737 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                        MR_Word SubResult1_732;

                        mercury__builtin__compare_3_p_0(TypeInfo_for_OptionType_992, &SubResult1_732, Var_1036, ArgY1_731);
                        succeeded = (SubResult1_732 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_732;
                        else
                        {
                          MR_Word SubResult2_735;
                          MR_Integer Var_1074;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_value_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_1035 ;
	S2 = ArgY2_734 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_1074  = Res;
}
                          succeeded = (Var_1074 < (MR_Integer) 0);
                          if (succeeded)
                            SubResult2_735 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_1074 == (MR_Integer) 0);
                            if (succeeded)
                              SubResult2_735 = (MR_Integer) 0;
                            else
                              SubResult2_735 = (MR_Integer) 2;
                          }
                          succeeded = (SubResult2_735 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult2_735;
                          else
                          {
                            succeeded = (Var_1034 < ArgY3_737);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (Var_1034 == ArgY3_737);
                              if (succeeded)
                                *HeadVar__1_1 = (MR_Integer) 0;
                              else
                                *HeadVar__1_1 = (MR_Integer) 2;
                            }
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 9:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_String Var_1051 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
              MR_String Var_1052 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
              MR_Box Var_1053 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 7:
                      {
                        MR_Box ArgY1_815 = (MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1));
                        MR_String ArgY2_818 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                        MR_String ArgY3_821 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                        MR_Word SubResult1_816;

                        mercury__builtin__compare_3_p_0(TypeInfo_for_OptionType_992, &SubResult1_816, Var_1053, ArgY1_815);
                        succeeded = (SubResult1_816 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_816;
                        else
                        {
                          MR_Word SubResult2_819;
                          MR_Integer Var_1088;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_value_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_1052 ;
	S2 = ArgY2_818 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_1088  = Res;
}
                          succeeded = (Var_1088 < (MR_Integer) 0);
                          if (succeeded)
                            SubResult2_819 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_1088 == (MR_Integer) 0);
                            if (succeeded)
                              SubResult2_819 = (MR_Integer) 0;
                            else
                              SubResult2_819 = (MR_Integer) 2;
                          }
                          succeeded = (SubResult2_819 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult2_819;
                          else
                          {
                            MR_Integer Var_1090;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_value_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_1051 ;
	S2 = ArgY3_821 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_1090  = Res;
}
                            succeeded = (Var_1090 < (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (Var_1090 == (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = (MR_Integer) 0;
                              else
                                *HeadVar__1_1 = (MR_Integer) 2;
                            }
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 9:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Var_1043 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
              MR_String Var_1044 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
              MR_Box Var_1045 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Box ArgY1_899 = (MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1));
                        MR_String ArgY2_902 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word ArgY3_905 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                        MR_Word SubResult1_900;

                        mercury__builtin__compare_3_p_0(TypeInfo_for_OptionType_992, &SubResult1_900, Var_1045, ArgY1_899);
                        succeeded = (SubResult1_900 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_900;
                        else
                        {
                          MR_Word SubResult2_903;
                          MR_Integer Var_1080;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_value_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_1044 ;
	S2 = ArgY2_902 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_1080  = Res;
}
                          succeeded = (Var_1080 < (MR_Integer) 0);
                          if (succeeded)
                            SubResult2_903 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_1080 == (MR_Integer) 0);
                            if (succeeded)
                              SubResult2_903 = (MR_Integer) 0;
                            else
                              SubResult2_903 = (MR_Integer) 2;
                          }
                          succeeded = (SubResult2_903 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult2_903;
                          else
                            mercury__builtin__compare_3_p_0((MR_Word) (&mercury__getopt_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Var_1043)), ((MR_Box) (ArgY3_905)));
                        }
                      }
                      break;
                    case (MR_Integer) 9:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_String Var_1028 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
              MR_String Var_1029 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
              MR_Box Var_1030 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 9:
                      {
                        MR_Box ArgY1_983 = (MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1));
                        MR_String ArgY2_986 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                        MR_String ArgY3_989 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                        MR_Word SubResult1_984;

                        mercury__builtin__compare_3_p_0(TypeInfo_for_OptionType_992, &SubResult1_984, Var_1030, ArgY1_983);
                        succeeded = (SubResult1_984 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_984;
                        else
                        {
                          MR_Word SubResult2_987;
                          MR_Integer Var_1068;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_value_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_1029 ;
	S2 = ArgY2_986 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_1068  = Res;
}
                          succeeded = (Var_1068 < (MR_Integer) 0);
                          if (succeeded)
                            SubResult2_987 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_1068 == (MR_Integer) 0);
                            if (succeeded)
                              SubResult2_987 = (MR_Integer) 0;
                            else
                              SubResult2_987 = (MR_Integer) 2;
                          }
                          succeeded = (SubResult2_987 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult2_987;
                          else
                          {
                            MR_Integer Var_1070;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_value_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_1028 ;
	S2 = ArgY3_989 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_1070  = Res;
}
                            succeeded = (Var_1070 < (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (Var_1070 == (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = (MR_Integer) 0;
                              else
                                *HeadVar__1_1 = (MR_Integer) 2;
                            }
                          }
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

MR_bool MR_CALL 
mercury__getopt____Unify____option_value_1_0(
  MR_Word TypeInfo_for_OptionType_79,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_77 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_78 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_77 == CastY_78);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0));
          MR_Box ArgY1_4;
          MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
          MR_String ArgY2_6;
          MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
          MR_Word ArgY3_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
            ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_OptionType_79, ArgX1_3, ArgY1_4);
            if (succeeded)
            {
              succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
              if (succeeded)
                succeeded = (ArgX3_7 == ArgY3_8);
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box ArgX1_9 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
          MR_Box ArgY1_10;
          MR_String ArgX2_11 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_String ArgY2_12;
          MR_Integer ArgX3_13 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
          MR_Integer ArgY3_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_10 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
            ArgY2_12 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_14 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_OptionType_79, ArgX1_9, ArgY1_10);
            if (succeeded)
            {
              succeeded = (strcmp(ArgX2_11, ArgY2_12) == 0);
              if (succeeded)
                succeeded = (ArgX3_13 == ArgY3_14);
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box ArgX1_15 = (MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0));
          MR_Box ArgY1_16;
          MR_String ArgX2_17 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_String ArgY2_18;
          MR_String ArgX3_19 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 2))));
          MR_String ArgY3_20;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_16 = (MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0));
            ArgY2_18 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_20 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_OptionType_79, ArgX1_15, ArgY1_16);
            if (succeeded)
            {
              succeeded = (strcmp(ArgX2_17, ArgY2_18) == 0);
              if (succeeded)
                succeeded = (strcmp(ArgX3_19, ArgY3_20) == 0);
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_80_80;
              MR_Box ArgX1_21 = (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1));
              MR_Box ArgY1_22;
              MR_String ArgX2_23 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_String ArgY2_24;
              MR_Word ArgX3_25 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_26;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_22 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1));
                ArgY2_24 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_26 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_OptionType_79, ArgX1_21, ArgY1_22);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_23, ArgY2_24) == 0);
                  if (succeeded)
                  {
                    TypeInfo_80_80 = (MR_Word) (&mercury__getopt_scalar_common_1[4]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_80_80, ((MR_Box) (ArgX3_25)), ((MR_Box) (ArgY3_26)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_81_81;
              MR_Box ArgX1_27 = (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1));
              MR_Box ArgY1_28;
              MR_String ArgX2_29 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_String ArgY2_30;
              MR_Word ArgX3_31 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_32;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_28 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1));
                ArgY2_30 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_32 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_OptionType_79, ArgX1_27, ArgY1_28);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_29, ArgY2_30) == 0);
                  if (succeeded)
                  {
                    TypeInfo_81_81 = (MR_Word) (&mercury__getopt_scalar_common_1[3]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_81_81, ((MR_Box) (ArgX3_31)), ((MR_Box) (ArgY3_32)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box ArgX1_33 = (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1));
              MR_Box ArgY1_34;
              MR_String ArgX2_35 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_String ArgY2_36;
              MR_String ArgX3_37 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_String ArgY3_38;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_34 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1));
                ArgY2_36 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_38 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_OptionType_79, ArgX1_33, ArgY1_34);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_35, ArgY2_36) == 0);
                  if (succeeded)
                    succeeded = (strcmp(ArgX3_37, ArgY3_38) == 0);
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Box ArgX1_39 = (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1));
              MR_Box ArgY1_40;
              MR_String ArgX2_41 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_String ArgY2_42;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_40 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1));
                ArgY2_42 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_OptionType_79, ArgX1_39, ArgY1_40);
                if (succeeded)
                  succeeded = (strcmp(ArgX2_41, ArgY2_42) == 0);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Box ArgX1_43 = (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1));
              MR_Box ArgY1_44;
              MR_String ArgX2_45 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_String ArgY2_46;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_44 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1));
                ArgY2_46 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_OptionType_79, ArgX1_43, ArgY1_44);
                if (succeeded)
                  succeeded = (strcmp(ArgX2_45, ArgY2_46) == 0);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Box ArgX1_47 = (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1));
              MR_Box ArgY1_48;
              MR_String ArgX2_49 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_String ArgY2_50;
              MR_Word ArgX3_51 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 1);
              MR_Word ArgY3_52;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_48 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1));
                ArgY2_50 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_52 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_OptionType_79, ArgX1_47, ArgY1_48);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_49, ArgY2_50) == 0);
                  if (succeeded)
                    succeeded = (ArgX3_51 == ArgY3_52);
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Box ArgX1_53 = (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1));
              MR_Box ArgY1_54;
              MR_String ArgX2_55 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_String ArgY2_56;
              MR_Integer ArgX3_57 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Integer ArgY3_58;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_54 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1));
                ArgY2_56 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_58 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_OptionType_79, ArgX1_53, ArgY1_54);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_55, ArgY2_56) == 0);
                  if (succeeded)
                    succeeded = (ArgX3_57 == ArgY3_58);
                }
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Box ArgX1_59 = (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1));
              MR_Box ArgY1_60;
              MR_String ArgX2_61 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_String ArgY2_62;
              MR_String ArgX3_63 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_String ArgY3_64;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ArgY1_60 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1));
                ArgY2_62 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_64 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_OptionType_79, ArgX1_59, ArgY1_60);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_61, ArgY2_62) == 0);
                  if (succeeded)
                    succeeded = (strcmp(ArgX3_63, ArgY3_64) == 0);
                }
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word TypeInfo_82_82;
              MR_Box ArgX1_65 = (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1));
              MR_Box ArgY1_66;
              MR_String ArgX2_67 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_String ArgY2_68;
              MR_Word ArgX3_69 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_70;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
              if (succeeded)
              {
                ArgY1_66 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1));
                ArgY2_68 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_70 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_OptionType_79, ArgX1_65, ArgY1_66);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_67, ArgY2_68) == 0);
                  if (succeeded)
                  {
                    TypeInfo_82_82 = (MR_Word) (&mercury__getopt_scalar_common_1[3]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_82_82, ((MR_Box) (ArgX3_69)), ((MR_Box) (ArgY3_70)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Box ArgX1_71 = (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1));
              MR_Box ArgY1_72;
              MR_String ArgX2_73 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_String ArgY2_74;
              MR_String ArgX3_75 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_String ArgY3_76;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ArgY1_72 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1));
                ArgY2_74 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_76 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_OptionType_79, ArgX1_71, ArgY1_72);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_73, ArgY2_74) == 0);
                  if (succeeded)
                    succeeded = (strcmp(ArgX3_75, ArgY3_76) == 0);
                }
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mercury__getopt____Compare____option_table_1_0(
  MR_Word TypeInfo_for_OptionType_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__tree234____Compare____tree234_2_0(TypeInfo_for_OptionType_6, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mercury__getopt____Unify____option_table_1_0(
  MR_Word TypeInfo_for_OptionType_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_OptionType_5, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__getopt____Compare____option_ops_userdata_2_0(
  MR_Word TypeInfo_for_OptionType_14,
  MR_Word TypeInfo_for_UserDataType_15,
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
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

MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_userdata_2_0(
  MR_Word TypeInfo_for_OptionType_11,
  MR_Word TypeInfo_for_UserDataType_12,
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

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

void MR_CALL 
mercury__getopt____Compare____option_ops_track_1_0(
  MR_Word TypeInfo_for_OptionType_14,
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
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

MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_track_1_0(
  MR_Word TypeInfo_for_OptionType_11,
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

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

void MR_CALL 
mercury__getopt____Compare____option_ops_internal_2_0(
  MR_Word TypeInfo_for_OptionType_14,
  MR_Word TypeInfo_for_UserDataType_15,
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
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

void MR_CALL 
mercury__getopt____Compare____option_ops_special_2_0(
  MR_Word TypeInfo_for_OptionType_30,
  MR_Word TypeInfo_for_UserDataType_31,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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
          MR_Word Var_61 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

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
          MR_Word Var_62 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

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
          MR_Word Var_63 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_27 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))));

                mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Var_63), (MR_Word) (ArgY1_27));
              }
              break;
          }
        }
        break;
    }
}

MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_internal_2_0(
  MR_Word TypeInfo_for_OptionType_11,
  MR_Word TypeInfo_for_UserDataType_12,
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

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

MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_special_2_0(
  MR_Word TypeInfo_for_OptionType_13,
  MR_Word TypeInfo_for_UserDataType_14,
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
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_5), (MR_Word) (ArgY1_6));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_7), (MR_Word) (ArgY1_8));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_9), (MR_Word) (ArgY1_10));
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mercury__getopt____Compare____option_ops_1_0(
  MR_Word TypeInfo_for_OptionType_128,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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
          MR_Word Var_195 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_196 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_197 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
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
          MR_Word Var_198 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_199 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_200 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_201 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_43 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_46 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word ArgY4_49 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 3))));
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
          MR_Word Var_202 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_203 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_204 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_79 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_82 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_85 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 2))));
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
          MR_Word Var_205 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_206 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_207 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_208 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_116 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_119 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_122 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word ArgY4_125 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
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

MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_1_0(
  MR_Word TypeInfo_for_OptionType_33,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_6;
          MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
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
          MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_10;
          MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_12;
          MR_Word ArgX3_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_14;
          MR_Word ArgX4_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 3))));
          MR_Word ArgY4_16;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
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
          MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_18;
          MR_Word ArgX2_19 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_20;
          MR_Word ArgX3_21 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_22;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_20 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_22 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
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
          MR_Word ArgX1_23 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_24;
          MR_Word ArgX2_25 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_26;
          MR_Word ArgX3_27 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_28;
          MR_Word ArgX4_29 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
          MR_Word ArgY4_30;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_26 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_28 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_30 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
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

void MR_CALL 
mercury__getopt____Compare____option_default_value_1_0(
  MR_Word TypeInfo_for_OptionType_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
mercury__getopt____Unify____option_default_value_1_0(
  MR_Word TypeInfo_for_OptionType_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
mercury__getopt____Compare____option_data_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
          MR_Word Var_157 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

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
                MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
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
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
          MR_Integer Var_158 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Integer ArgY1_25 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

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
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_161 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_String ArgY1_45 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                        MR_Integer Var_164;

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
	Var_164  = Res;
}
                        succeeded = (Var_164 < (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_164 == (MR_Integer) 0);
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
              MR_Word Var_159 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ArgY1_65 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

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
              MR_Word Var_160 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word ArgY1_85 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

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
              MR_Word Var_156 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                        MR_Word ArgY1_105 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

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

MR_bool MR_CALL 
mercury__getopt____Unify____option_data_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_8;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_8 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_30_30;
              MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_10;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                TypeInfo_30_30 = (MR_Word) (&mercury__getopt_scalar_common_1[4]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeInfo_31_31;
              MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                TypeInfo_31_31 = (MR_Word) (&mercury__getopt_scalar_common_1[3]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (ArgX1_11)), ((MR_Box) (ArgY1_12)));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_29_29;
              MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
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

void MR_CALL 
mercury__getopt____Compare____option_arg_or_error_1_0(
  MR_Word TypeInfo_for_OptionType_14,
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      mercury__getopt____Compare____option_error_1_0(TypeInfo_for_OptionType_14, HeadVar__1_1, Var_18, ArgY1_11);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_String Var_19 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer Var_20;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_arg_or_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_19 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_20  = Res;
}
      succeeded = (Var_20 < (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_20 == (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 0;
        else
          *HeadVar__1_1 = (MR_Integer) 2;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__getopt____Unify____option_arg_or_error_1_0(
  MR_Word TypeInfo_for_OptionType_9,
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = mercury__getopt____Unify____option_error_1_0(TypeInfo_for_OptionType_9, ArgX1_5, ArgY1_6);
    }
  }
  else
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__getopt____Compare____maybe_option_table_se_1_0(
  MR_Word TypeInfo_for_OptionType_14,
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      mercury__getopt____Compare____option_error_1_0(TypeInfo_for_OptionType_14, HeadVar__1_1, Var_20, ArgY1_11);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      mercury__tree234____Compare____tree234_2_0(TypeInfo_for_OptionType_14, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), HeadVar__1_1, Var_21, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_table_se_1_0(
  MR_Word TypeInfo_for_OptionType_9,
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = mercury__getopt____Unify____option_error_1_0(TypeInfo_for_OptionType_9, ArgX1_5, ArgY1_6);
    }
  }
  else
  {
    MR_Word TypeCtorInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      TypeCtorInfo_10_10 = (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0);
      succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_OptionType_9, TypeCtorInfo_10_10, ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__getopt____Compare____maybe_option_table_1_0(
  MR_Word TypeInfo_for_OptionType_14,
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_String Var_19 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_String ArgY1_11 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer Var_21;

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
	Var_21  = Res;
}
      succeeded = (Var_21 < (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_21 == (MR_Integer) 0);
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
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      mercury__tree234____Compare____tree234_2_0(TypeInfo_for_OptionType_14, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), HeadVar__1_1, Var_20, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_table_1_0(
  MR_Word TypeInfo_for_OptionType_9,
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
    }
  }
  else
  {
    MR_Word TypeCtorInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      TypeCtorInfo_10_10 = (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0);
      succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_OptionType_9, TypeCtorInfo_10_10, ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__getopt____Compare____maybe_option_error_1_0(
  MR_Word TypeInfo_for_OptionType_10,
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
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      mercury__getopt____Compare____option_error_1_0(TypeInfo_for_OptionType_10, HeadVar__1_1, Var_13, ArgY1_7);
    }
  }
}

MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_error_1_0(
  MR_Word TypeInfo_for_OptionType_9,
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

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = mercury__getopt____Unify____option_error_1_0(TypeInfo_for_OptionType_9, ArgX1_5, ArgY1_6);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__getopt____Compare____maybe_option_arg_0_0(
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
    MR_String Var_11 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_String ArgY1_7 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer Var_12;

{
#define MR_PROC_LABEL mercury__getopt____Compare____maybe_option_arg_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_11 ;
	S2 = ArgY1_7 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_12  = Res;
}
      succeeded = (Var_12 < (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_12 == (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 0;
        else
          *HeadVar__1_1 = (MR_Integer) 2;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_arg_0_0(
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
    MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__getopt____Compare____long_option_1_0(
  MR_Word TypeInfo_for_OptionType_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
mercury__getopt____Unify____long_option_1_0(
  MR_Word TypeInfo_for_OptionType_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
mercury__getopt____Compare____file_options_or_error_1_0(
  MR_Word TypeInfo_for_OptionType_14,
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      mercury__getopt____Compare____option_error_1_0(TypeInfo_for_OptionType_14, HeadVar__1_1, Var_21, ArgY1_11);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word TypeInfo_18_18;
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      {
        TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
        MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_OptionType_14));
      }
      mercury__getopt____Compare____go_cord_1_0(TypeInfo_18_18, HeadVar__1_1, (MR_Word) (Var_22), (MR_Word) (ArgY1_5));
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
  MR_bool succeeded;
  MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_22 == CastY_23);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_String Var_29 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Box Var_30 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Box ArgY1_15 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));
      MR_String ArgY2_18 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgY3_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_16;

      mercury__builtin__compare_3_p_0(TypeInfo_for_OptionType_24, &SubResult1_16, Var_30, ArgY1_15);
      succeeded = (SubResult1_16 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_16;
      else
      {
        MR_Word SubResult2_19;
        MR_Integer Var_32;

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
	Var_32  = Res;
}
        succeeded = (Var_32 < (MR_Integer) 0);
        if (succeeded)
          SubResult2_19 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_32 == (MR_Integer) 0);
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
    MR_String Var_31 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer Var_34;

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
	Var_34  = Res;
}
      succeeded = (Var_34 < (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_34 == (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 0;
        else
          *HeadVar__1_1 = (MR_Integer) 2;
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
  MR_bool succeeded;
  MR_Integer CastX_266 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_267 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_266 == CastY_267);
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
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_278 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_String ArgY1_27 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
                MR_Integer Var_288;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_278 ;
	S2 = ArgY1_27 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_288  = Res;
}
                succeeded = (Var_288 < (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_288 == (MR_Integer) 0);
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
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String Var_287 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_String ArgY1_85 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
                MR_Integer Var_302;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_287 ;
	S2 = ArgY1_85 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_302  = Res;
}
                succeeded = (Var_302 < (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_302 == (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 0;
                  else
                    *HeadVar__1_1 = (MR_Integer) 2;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_286 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_String ArgY1_110 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                        MR_Integer Var_300;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_286 ;
	S2 = ArgY1_110 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_300  = Res;
}
                        succeeded = (Var_300 < (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_300 == (MR_Integer) 0);
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
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_279 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String ArgY1_135 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                        MR_Integer Var_290;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_279 ;
	S2 = ArgY1_135 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_290  = Res;
}
                        succeeded = (Var_290 < (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_290 == (MR_Integer) 0);
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
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_280 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
              MR_String Var_281 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_String ArgY1_169 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                        MR_Word ArgY2_172 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word SubResult1_170;
                        MR_Integer Var_292;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_281 ;
	S2 = ArgY1_169 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_292  = Res;
}
                        succeeded = (Var_292 < (MR_Integer) 0);
                        if (succeeded)
                          SubResult1_170 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_292 == (MR_Integer) 0);
                          if (succeeded)
                            SubResult1_170 = (MR_Integer) 0;
                          else
                            SubResult1_170 = (MR_Integer) 2;
                        }
                        succeeded = (SubResult1_170 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_170;
                        else
                          mercury__io____Compare____error_0_0(HeadVar__1_1, Var_280, ArgY2_172);
                      }
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
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_282 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
              MR_String Var_283 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                        MR_String ArgY1_210 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                        MR_Word ArgY2_213 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word SubResult1_211;
                        MR_Integer Var_294;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_283 ;
	S2 = ArgY1_210 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_294  = Res;
}
                        succeeded = (Var_294 < (MR_Integer) 0);
                        if (succeeded)
                          SubResult1_211 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_294 == (MR_Integer) 0);
                          if (succeeded)
                            SubResult1_211 = (MR_Integer) 0;
                          else
                            SubResult1_211 = (MR_Integer) 2;
                        }
                        succeeded = (SubResult1_211 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_211;
                        else
                          mercury__io____Compare____error_0_0(HeadVar__1_1, Var_282, ArgY2_213);
                      }
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_String Var_285 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                        MR_String ArgY1_240 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                        MR_Integer Var_298;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_285 ;
	S2 = ArgY1_240 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_298  = Res;
}
                        succeeded = (Var_298 < (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_298 == (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 0;
                          else
                            *HeadVar__1_1 = (MR_Integer) 2;
                        }
                      }
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_String Var_284 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                      {
                        MR_String ArgY1_265 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                        MR_Integer Var_296;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_284 ;
	S2 = ArgY1_265 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_296  = Res;
}
                        succeeded = (Var_296 < (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_296 == (MR_Integer) 0);
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

void MR_CALL 
mercury__getopt____Compare____go_cord_1_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      mercury__getopt____Compare____go_cord_node_1_0(TypeInfo_for_T_10, HeadVar__1_1, Var_13, ArgY1_7);
    }
  }
}

void MR_CALL 
mercury__getopt____Compare____go_cord_node_1_0(
  MR_Word TypeInfo_for_T_38,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_36 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_37 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (CastX_36 == CastY_37);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box Var_49 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0));

                  mercury__builtin__compare_3_p_0(TypeInfo_for_T_38, HeadVar__1_1, Var_49, ArgY1_5);
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_47 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            MR_Box Var_48 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box ArgY1_16 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));
                  MR_Word ArgY2_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_17;

                  mercury__builtin__compare_3_p_0(TypeInfo_for_T_38, &SubResult1_17, Var_48, ArgY1_16);
                  succeeded = (SubResult1_17 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_17;
                  else
                    mercury__list____Compare____list_1_0(TypeInfo_for_T_38, HeadVar__1_1, Var_47, ArgY2_19);
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
            MR_Word Var_45 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_46 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_32 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_35 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_33;

                  mercury__getopt____Compare____go_cord_node_1_0(TypeInfo_for_T_38, &SubResult1_33, Var_46, ArgY1_32);
                  succeeded = (SubResult1_33 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_33;
                  else
                  {
                    MR_Word next_value_of_HeadVar__2_2 = Var_45;
                    MR_Word next_value_of_HeadVar__3_3 = ArgY2_35;

                    // direct tailcall eliminated
                    ;
                    HeadVar__2_2 = next_value_of_HeadVar__2_2;
                    HeadVar__3_3 = next_value_of_HeadVar__3_3;
                    continue;
                  }
                }
                break;
            }
          }
          break;
      }
    break;
  }
}

MR_bool MR_CALL 
mercury__getopt____Unify____file_options_or_error_1_0(
  MR_Word TypeInfo_for_OptionType_9,
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = mercury__getopt____Unify____option_error_1_0(TypeInfo_for_OptionType_9, ArgX1_5, ArgY1_6);
    }
  }
  else
  {
    MR_Word TypeCtorInfo_10_10;
    MR_Word TypeInfo_11_11;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      TypeCtorInfo_10_10 = (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_value_1);
      {
        TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_11_11, 0) = ((MR_Box) (TypeCtorInfo_10_10));
        MR_hl_field(0, TypeInfo_11_11, 1) = ((MR_Box) (TypeInfo_for_OptionType_9));
      }
      succeeded = mercury__getopt____Unify____go_cord_1_0(TypeInfo_11_11, (MR_Word) (ArgX1_3), (MR_Word) (ArgY1_4));
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__getopt____Unify____option_error_1_0(
  MR_Word TypeInfo_for_OptionType_13,
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Box ArgX1_5 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_6;
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY2_8;
    MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_10;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
      ArgY2_8 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__getopt____Unify____option_error_reason_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_33 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_34 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_33 == CastY_34);
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
          MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ArgX1_15 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_16;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_16 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_15, ArgY1_16) == 0);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ArgX1_17 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_18;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (strcmp(ArgX1_17, ArgY1_18) == 0);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ArgX1_19 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_20;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_20 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (strcmp(ArgX1_19, ArgY1_20) == 0);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String ArgX1_21 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_22;
              MR_Word ArgX2_23 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_24;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_22 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (strcmp(ArgX1_21, ArgY1_22) == 0);
                if (succeeded)
                  succeeded = mercury__io____Unify____error_0_0(ArgX2_23, ArgY2_24);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String ArgX1_25 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_26;
              MR_Word ArgX2_27 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_28;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_26 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_28 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (strcmp(ArgX1_25, ArgY1_26) == 0);
                if (succeeded)
                  succeeded = mercury__io____Unify____error_0_0(ArgX2_27, ArgY2_28);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_String ArgX1_29 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_30;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_30 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (strcmp(ArgX1_29, ArgY1_30) == 0);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_String ArgX1_31 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_32;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_32 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (strcmp(ArgX1_31, ArgY1_32) == 0);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
mercury__getopt____Unify____go_cord_1_0(
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

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = mercury__getopt____Unify____go_cord_node_1_0(TypeInfo_for_T_9, ArgX1_5, ArgY1_6);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__getopt____Unify____go_cord_node_1_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_15, ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box ArgX1_5 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_6;
            MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
              ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_15, ArgX1_5, ArgY1_6);
              if (succeeded)
                succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_15, ArgX2_7, ArgY2_8);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_10;
            MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_12;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_HeadVar__2_2;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
              succeeded = mercury__getopt____Unify____go_cord_node_1_0(TypeInfo_for_T_15, ArgX1_9, ArgY1_10);
              if (succeeded)
              {
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__1_1 = ArgX2_11;
                next_value_of_HeadVar__2_2 = ArgY2_12;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                HeadVar__2_2 = next_value_of_HeadVar__2_2;
                continue;
              }
            }
          }
          break;
      }
    return succeeded;
    break;
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
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_read_file_contents_5, (MR_Integer) 0)), (MR_Integer) 5))));
  MR_Box conv1_HeadVar__2_2;

  func_0(((MR_Box) (TypeClassInfo_for_read_file_contents_5)), ((MR_Box) (HeadVar__1_1)), &conv1_HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
  *HeadVar__2_2 = ((MR_Word) (conv1_HeadVar__2_2));
}

MR_Word MR_CALL 
mercury__getopt__go_cord_to_list_1_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word N_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_4;

    {
      Var_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_4, 0) = ((MR_Box) (N_3));
      MR_hl_field(1, Var_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    HeadVar__2_2 = mercury__getopt__go_cord_to_list_2_2_f_0(TypeInfo_for_T_7, Var_4, (MR_Word) ((MR_Unsigned) 0U));
  }
  return HeadVar__2_2;
}

void MR_CALL 
mercury__getopt__return_maybe_option_error_2_p_0(
  MR_Word TypeInfo_for_OptionType_4,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Error_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Error_3));
    }
  }
}

void MR_CALL 
mercury__getopt__return_option_table_if_ok_3_p_0(
  MR_Word TypeInfo_for_OptionType_8,
  MR_Word MaybeOptionError_4,
  MR_Word OptionTable_5,
  MR_Word * Result_6)
{
  if ((MaybeOptionError_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (OptionTable_5));
    }
  else
  {
    MR_Word Error_7 = ((MR_Word) ((MR_hl_field(1, MaybeOptionError_4, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Error_7));
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
  MR_bool succeeded;
  MR_Word OpenResult_8;

  mercury__io__open_input_4_p_0(FileName_5, &OpenResult_8);
  if (((MR_tag((MR_Word) OpenResult_8)) == (MR_Integer) 1))
  {
    MR_Word IO_Error_19 = ((MR_Word) ((MR_hl_field(1, OpenResult_8, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(2, base, 0) = ((MR_Box) (IO_Error_19));
    }
  }
  else
  {
    MR_Word FileStream_9 = ((MR_Word) ((MR_hl_field(0, OpenResult_8, (MR_Integer) 0))));
    MR_Word ReadResult_10;
    MR_Box Var_20;
    MR_Box Var_22;

    mercury__io__read_file_as_string_4_p_0(FileStream_9, &ReadResult_10);
    if (((MR_tag((MR_Word) ReadResult_10)) == (MR_Integer) 1))
    {
      MR_Word IO_Error_13 = ((MR_Word) ((MR_hl_field(1, ReadResult_10, (MR_Integer) 1))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) (IO_Error_13));
      }
    }
    else
    {
      MR_String Contents_11 = ((MR_String) ((MR_hl_field(0, ReadResult_10, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Contents_11));
      }
    }
    Var_20 = (MR_Box) (FileStream_9);
    mercury__io__stream_db__maybe_delete_stream_info_3_p_0(Var_20);
{
#define MR_PROC_LABEL mercury__getopt__do_read_file_contents_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_20 ;
		{

    if (mercury_close(Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Var_22  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__getopt__do_read_file_contents_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Var_22 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (!(succeeded))
    {
      MR_Word Var_25;

      mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Var_22, (MR_String) "error closing file: ", &Var_25);
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_25)));
        return;
      }
    }
  }
}

MR_Word MR_CALL 
mercury__getopt__convert_to_maybe_option_table_1_f_0(
  MR_Word TypeInfo_for_OptionType_8,
  MR_Word MaybeStructuredError_3)
{
  MR_Word MaybeError_4;

  if (((MR_tag((MR_Word) MaybeStructuredError_3)) == (MR_Integer) 1))
  {
    MR_Word Error_6 = ((MR_Word) ((MR_hl_field(1, MaybeStructuredError_3, (MR_Integer) 0))));
    MR_String Var_7;

    Var_7 = mercury__getopt__option_error_to_string_1_f_0(TypeInfo_for_OptionType_8, Error_6);
    {
      MaybeError_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeError_4, 0) = ((MR_Box) (Var_7));
    }
  }
  else
  {
    MR_Word OptionTable_5 = ((MR_Word) ((MR_hl_field(0, MaybeStructuredError_3, (MR_Integer) 0))));

    {
      MaybeError_4 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MaybeError_4, 0) = ((MR_Box) (OptionTable_5));
    }
  }
  return MaybeError_4;
}

MR_String MR_CALL 
mercury__getopt__option_error_to_string_1_f_0(
  MR_Word TypeInfo_for_OptionType_83,
  MR_Word Error_3)
{
  MR_String String_4;

  if (((MR_tag((MR_Word) Error_3)) == (MR_Integer) 1))
  {
    MR_Word Reason_7 = ((MR_Word) ((MR_hl_field(1, Error_3, (MR_Integer) 2))));
    MR_String OptionName_82 = ((MR_String) ((MR_hl_field(1, Error_3, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) Reason_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Reason_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_88;

              Var_88 = mercury__string__f_43_43_2_f_0(OptionName_82, (MR_String) "\'");
              String_4 = mercury__string__f_43_43_2_f_0((MR_String) "unknown type for option \140", Var_88);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_103;

              Var_103 = mercury__string__f_43_43_2_f_0(OptionName_82, (MR_String) "\' needs an argument");
              String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", Var_103);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String Var_123;

              Var_123 = mercury__string__f_43_43_2_f_0(OptionName_82, (MR_String) "\' -- only boolean, maybe and accumulating options can be negated");
              String_4 = mercury__string__f_43_43_2_f_0((MR_String) "cannot negate option \140", Var_123);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String Var_94;

              Var_94 = mercury__string__f_43_43_2_f_0(OptionName_82, (MR_String) "\' failed");
              String_4 = mercury__string__f_43_43_2_f_0((MR_String) "the handler of option \140", Var_94);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_String Var_91;

              Var_91 = mercury__string__f_43_43_2_f_0(OptionName_82, (MR_String) "\' has no handler");
              String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", Var_91);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_120;

          Var_120 = mercury__string__f_43_43_2_f_0(OptionName_82, (MR_String) "\' does not allow an argument");
          String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", Var_120);
        }
        break;
      case (MR_Integer) 2:
        String_4 = ((MR_String) ((MR_hl_field(2, Reason_7, (MR_Integer) 0))));
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Reason_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Arg_9 = ((MR_String) ((MR_hl_field(3, Reason_7, (MR_Integer) 1))));
              MR_String Var_97;
              MR_String Var_99;
              MR_String Var_100;

              Var_97 = mercury__string__f_43_43_2_f_0(Arg_9, (MR_String) "\' is not numeric");
              Var_99 = mercury__string__f_43_43_2_f_0((MR_String) "\' requires a numeric argument; \140", Var_97);
              Var_100 = mercury__string__f_43_43_2_f_0(OptionName_82, Var_99);
              String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", Var_100);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String FileName_10 = ((MR_String) ((MR_hl_field(3, Reason_7, (MR_Integer) 1))));
              MR_String Var_117;

              Var_117 = mercury__string__f_43_43_2_f_0(FileName_10, (MR_String) ": the option processing predicate has no access to I/O");
              String_4 = mercury__string__f_43_43_2_f_0((MR_String) "cannot open ", Var_117);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word IO_Error_12 = ((MR_Word) ((MR_hl_field(3, Reason_7, (MR_Integer) 2))));
              MR_String FileName_75 = ((MR_String) ((MR_hl_field(3, Reason_7, (MR_Integer) 1))));
              MR_String Msg_76;
              MR_String Var_112;
              MR_String Var_113;

              mercury__io__error_message_2_p_0(IO_Error_12, &Msg_76);
              Var_112 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Msg_76);
              Var_113 = mercury__string__f_43_43_2_f_0(FileName_75, Var_112);
              String_4 = mercury__string__f_43_43_2_f_0((MR_String) "cannot open ", Var_113);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String FileName_77 = ((MR_String) ((MR_hl_field(3, Reason_7, (MR_Integer) 1))));
              MR_String Msg_78;
              MR_Word IO_Error_79 = ((MR_Word) ((MR_hl_field(3, Reason_7, (MR_Integer) 2))));
              MR_String Var_108;
              MR_String Var_109;

              mercury__io__error_message_2_p_0(IO_Error_79, &Msg_78);
              Var_108 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Msg_78);
              Var_109 = mercury__string__f_43_43_2_f_0(FileName_77, Var_108);
              String_4 = mercury__string__f_43_43_2_f_0((MR_String) "cannot read ", Var_109);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_String FileName_80 = ((MR_String) ((MR_hl_field(3, Reason_7, (MR_Integer) 1))));

              String_4 = mercury__string__f_43_43_2_f_0(FileName_80, (MR_String) " contains non-option arguments");
            }
            break;
          case (MR_Integer) 5:
            {
              MR_String FileName_81 = ((MR_String) ((MR_hl_field(3, Reason_7, (MR_Integer) 1))));

              String_4 = mercury__string__f_43_43_2_f_0(FileName_81, (MR_String) " includes itself either directly or indirectly");
            }
            break;
        }
        break;
    }
  }
  else
  {
    MR_String OptionName_5 = ((MR_String) ((MR_hl_field(0, Error_3, (MR_Integer) 0))));
    MR_String Var_85;

    Var_85 = mercury__string__f_43_43_2_f_0(OptionName_5, (MR_String) "\'");
    String_4 = mercury__string__f_43_43_2_f_0((MR_String) "unrecognized option \140", Var_85);
  }
  return String_4;
}

void MR_CALL 
mercury__getopt__lookup_accumulating_option_3_p_0(
  MR_Word TypeInfo_for_Option_10,
  MR_Word OptionTable_4,
  MR_Box Opt_5,
  MR_Word * Acc_6)
{
  MR_bool succeeded;
  MR_Word AccPrime_7;
  MR_Word Var_8;
  MR_Box conv0_Var_8;

  mercury__map__lookup_3_p_0(TypeInfo_for_Option_10, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_4, Opt_5, &conv0_Var_8);
  Var_8 = ((MR_Word) (conv0_Var_8));
  succeeded = ((((MR_tag((MR_Word) Var_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
  if (succeeded)
  {
    AccPrime_7 = ((MR_Word) ((MR_hl_field(3, Var_8, (MR_Integer) 1))));
    *Acc_6 = AccPrime_7;
  }
  else
    {
      mercury__require__error_1_p_0((MR_String) "Expected accumulating option and didn\'t get one.");
      return;
    }
}

MR_Word MR_CALL 
mercury__getopt__lookup_accumulating_option_2_f_0(
  MR_Word TypeInfo_for_Option_7,
  MR_Word OptionTable_4,
  MR_Box Opt_5)
{
  MR_bool succeeded;
  MR_Word Acc_6;
  MR_Word AccPrime_8;
  MR_Word Var_9;
  MR_Box conv0_Var_9;

  mercury__map__lookup_3_p_0(TypeInfo_for_Option_7, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_4, Opt_5, &conv0_Var_9);
  Var_9 = ((MR_Word) (conv0_Var_9));
  succeeded = ((((MR_tag((MR_Word) Var_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_9, (MR_Integer) 0)))) == (MR_Integer) 3)));
  if (succeeded)
  {
    AccPrime_8 = ((MR_Word) ((MR_hl_field(3, Var_9, (MR_Integer) 1))));
    Acc_6 = AccPrime_8;
  }
  else
    mercury__require__error_1_p_0((MR_String) "Expected accumulating option and didn\'t get one.");
  return Acc_6;
}

void MR_CALL 
mercury__getopt__lookup_maybe_string_option_3_p_0(
  MR_Word TypeInfo_for_Option_10,
  MR_Word OptionTable_4,
  MR_Box Opt_5,
  MR_Word * MaybeString_6)
{
  MR_bool succeeded;
  MR_Word MaybeStringPrime_7;
  MR_Word Var_8;
  MR_Box conv0_Var_8;

  mercury__map__lookup_3_p_0(TypeInfo_for_Option_10, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_4, Opt_5, &conv0_Var_8);
  Var_8 = ((MR_Word) (conv0_Var_8));
  succeeded = ((((MR_tag((MR_Word) Var_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    MaybeStringPrime_7 = ((MR_Word) ((MR_hl_field(3, Var_8, (MR_Integer) 1))));
    *MaybeString_6 = MaybeStringPrime_7;
  }
  else
    {
      mercury__require__error_1_p_0((MR_String) "Expected maybe_string option and didn\'t get one.");
      return;
    }
}

MR_Word MR_CALL 
mercury__getopt__lookup_maybe_string_option_2_f_0(
  MR_Word TypeInfo_for_Option_7,
  MR_Word OptionTable_4,
  MR_Box Opt_5)
{
  MR_bool succeeded;
  MR_Word MaybeString_6;
  MR_Word MaybeStringPrime_8;
  MR_Word Var_9;
  MR_Box conv0_Var_9;

  mercury__map__lookup_3_p_0(TypeInfo_for_Option_7, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_4, Opt_5, &conv0_Var_9);
  Var_9 = ((MR_Word) (conv0_Var_9));
  succeeded = ((((MR_tag((MR_Word) Var_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    MaybeStringPrime_8 = ((MR_Word) ((MR_hl_field(3, Var_9, (MR_Integer) 1))));
    MaybeString_6 = MaybeStringPrime_8;
  }
  else
    mercury__require__error_1_p_0((MR_String) "Expected maybe_string option and didn\'t get one.");
  return MaybeString_6;
}

void MR_CALL 
mercury__getopt__lookup_maybe_int_option_3_p_0(
  MR_Word TypeInfo_for_Option_10,
  MR_Word OptionTable_4,
  MR_Box Opt_5,
  MR_Word * MaybeInt_6)
{
  MR_bool succeeded;
  MR_Word MaybeIntPrime_7;
  MR_Word Var_8;
  MR_Box conv0_Var_8;

  mercury__map__lookup_3_p_0(TypeInfo_for_Option_10, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_4, Opt_5, &conv0_Var_8);
  Var_8 = ((MR_Word) (conv0_Var_8));
  succeeded = ((((MR_tag((MR_Word) Var_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
  if (succeeded)
  {
    MaybeIntPrime_7 = ((MR_Word) ((MR_hl_field(3, Var_8, (MR_Integer) 1))));
    *MaybeInt_6 = MaybeIntPrime_7;
  }
  else
    {
      mercury__require__error_1_p_0((MR_String) "Expected maybe_int option and didn\'t get one.");
      return;
    }
}

MR_Word MR_CALL 
mercury__getopt__lookup_maybe_int_option_2_f_0(
  MR_Word TypeInfo_for_Option_7,
  MR_Word OptionTable_4,
  MR_Box Opt_5)
{
  MR_bool succeeded;
  MR_Word MaybeInt_6;
  MR_Word MaybeIntPrime_8;
  MR_Word Var_9;
  MR_Box conv0_Var_9;

  mercury__map__lookup_3_p_0(TypeInfo_for_Option_7, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_4, Opt_5, &conv0_Var_9);
  Var_9 = ((MR_Word) (conv0_Var_9));
  succeeded = ((((MR_tag((MR_Word) Var_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
  if (succeeded)
  {
    MaybeIntPrime_8 = ((MR_Word) ((MR_hl_field(3, Var_9, (MR_Integer) 1))));
    MaybeInt_6 = MaybeIntPrime_8;
  }
  else
    mercury__require__error_1_p_0((MR_String) "Expected maybe_int option and didn\'t get one.");
  return MaybeInt_6;
}

void MR_CALL 
mercury__getopt__lookup_string_option_3_p_0(
  MR_Word TypeInfo_for_Option_10,
  MR_Word OptionTable_4,
  MR_Box Opt_5,
  MR_String * Str_6)
{
  MR_bool succeeded;
  MR_String StrPrime_7;
  MR_Word Var_8;
  MR_Box conv0_Var_8;

  mercury__map__lookup_3_p_0(TypeInfo_for_Option_10, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_4, Opt_5, &conv0_Var_8);
  Var_8 = ((MR_Word) (conv0_Var_8));
  succeeded = ((((MR_tag((MR_Word) Var_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
  if (succeeded)
  {
    StrPrime_7 = ((MR_String) ((MR_hl_field(3, Var_8, (MR_Integer) 1))));
    *Str_6 = StrPrime_7;
  }
  else
    {
      mercury__require__error_1_p_0((MR_String) "Expected string option and didn\'t get one.");
      return;
    }
}

MR_String MR_CALL 
mercury__getopt__lookup_string_option_2_f_0(
  MR_Word TypeInfo_for_Option_7,
  MR_Word OptionTable_4,
  MR_Box Opt_5)
{
  MR_bool succeeded;
  MR_String Str_6;
  MR_String StrPrime_8;
  MR_Word Var_9;
  MR_Box conv0_Var_9;

  mercury__map__lookup_3_p_0(TypeInfo_for_Option_7, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_4, Opt_5, &conv0_Var_9);
  Var_9 = ((MR_Word) (conv0_Var_9));
  succeeded = ((((MR_tag((MR_Word) Var_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
  if (succeeded)
  {
    StrPrime_8 = ((MR_String) ((MR_hl_field(3, Var_9, (MR_Integer) 1))));
    Str_6 = StrPrime_8;
  }
  else
    mercury__require__error_1_p_0((MR_String) "Expected string option and didn\'t get one.");
  return Str_6;
}

void MR_CALL 
mercury__getopt__lookup_int_option_3_p_0(
  MR_Word TypeInfo_for_Option_10,
  MR_Word OptionTable_4,
  MR_Box Opt_5,
  MR_Integer * Int_6)
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
    IntPrime_7 = ((MR_Integer) ((MR_hl_field(2, Var_8, (MR_Integer) 0))));
    *Int_6 = IntPrime_7;
  }
  else
    {
      mercury__require__error_1_p_0((MR_String) "Expected int option and didn\'t get one.");
      return;
    }
}

MR_Integer MR_CALL 
mercury__getopt__lookup_int_option_2_f_0(
  MR_Word TypeInfo_for_Option_7,
  MR_Word OptionTable_4,
  MR_Box Opt_5)
{
  MR_bool succeeded;
  MR_Integer Int_6;
  MR_Integer IntPrime_8;
  MR_Word Var_9;
  MR_Box conv0_Var_9;

  mercury__map__lookup_3_p_0(TypeInfo_for_Option_7, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_4, Opt_5, &conv0_Var_9);
  Var_9 = ((MR_Word) (conv0_Var_9));
  succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_Integer) 2);
  if (succeeded)
  {
    IntPrime_8 = ((MR_Integer) ((MR_hl_field(2, Var_9, (MR_Integer) 0))));
    Int_6 = IntPrime_8;
  }
  else
    mercury__require__error_1_p_0((MR_String) "Expected int option and didn\'t get one.");
  return Int_6;
}

void MR_CALL 
mercury__getopt__lookup_bool_option_3_p_0(
  MR_Word TypeInfo_for_Option_10,
  MR_Word OptionTable_4,
  MR_Box Opt_5,
  MR_Word * Bool_6)
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
    BoolPrime_7 = ((MR_Unsigned) ((MR_hl_field(1, Var_8, (MR_Integer) 0))) & (MR_Integer) 1);
    *Bool_6 = BoolPrime_7;
  }
  else
    {
      mercury__require__error_1_p_0((MR_String) "Expected bool option and didn\'t get one.");
      return;
    }
}

MR_Word MR_CALL 
mercury__getopt__lookup_bool_option_2_f_0(
  MR_Word TypeInfo_for_Option_7,
  MR_Word OptionTable_4,
  MR_Box Opt_5)
{
  MR_bool succeeded;
  MR_Word Bool_6;
  MR_Word BoolPrime_8;
  MR_Word Var_9;
  MR_Box conv0_Var_9;

  mercury__map__lookup_3_p_0(TypeInfo_for_Option_7, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_4, Opt_5, &conv0_Var_9);
  Var_9 = ((MR_Word) (conv0_Var_9));
  succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_Integer) 1);
  if (succeeded)
  {
    BoolPrime_8 = ((MR_Unsigned) ((MR_hl_field(1, Var_9, (MR_Integer) 0))) & (MR_Integer) 1);
    Bool_6 = BoolPrime_8;
  }
  else
    mercury__require__error_1_p_0((MR_String) "Expected bool option and didn\'t get one.");
  return Bool_6;
}

void MR_CALL 
mercury__getopt__expand_file_specials_8_p_0(
  MR_Word TypeInfo_for_OptionType_19,
  MR_Word ShortOptionPred_9,
  MR_Word LongOptionPred_10,
  MR_Word OptionTable_11,
  MR_Word OVs_12,
  MR_Word * MaybeError_13,
  MR_Word * NFSOVs_14)
{
  MR_Box conv0_STATE_VARIABLE_MaybeIO_17;

  mercury__getopt__expand_file_specials_check_9_p_0(TypeInfo_for_OptionType_19, (MR_Word) (&mercury__getopt_scalar_common_1[1]), ShortOptionPred_9, LongOptionPred_10, OptionTable_11, OVs_12, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), MaybeError_13, NFSOVs_14, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_MaybeIO_17);
}

void MR_CALL 
mercury__getopt__process_options_userdata_io_12_p_0(
  MR_Word TypeInfo_for_OptionType_35,
  MR_Word TypeInfo_for_UserDataType_36,
  MR_Word OptionOps_13,
  MR_Word Args_14,
  MR_Word * OptionArgs_15,
  MR_Word * NonOptionArgs_16,
  MR_Word * MaybeError_17,
  MR_Word * OptionsSet_18,
  MR_Word STATE_VARIABLE_OptionTable_0_26,
  MR_Word * STATE_VARIABLE_OptionTable_27,
  MR_Box STATE_VARIABLE_UserData_0_28,
  MR_Box * STATE_VARIABLE_UserData_29)
{
  MR_Word Short_22 = ((MR_Word) ((MR_hl_field(0, OptionOps_13, (MR_Integer) 0))));
  MR_Word Long_23 = ((MR_Word) ((MR_hl_field(0, OptionOps_13, (MR_Integer) 1))));
  MR_Word Special_24 = ((MR_Word) ((MR_hl_field(0, OptionOps_13, (MR_Integer) 2))));
  MR_Word MaybeOptionError_25;
  MR_Word Var_32;
  MR_Box conv0_STATE_VARIABLE_IO_31;

  {
    Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_32, 0) = ((MR_Box) (Special_24));
  }
  mercury__getopt__process_arguments_15_p_0(TypeInfo_for_OptionType_35, TypeInfo_for_UserDataType_36, (MR_Word) (&mercury__getopt_scalar_common_1[1]), Short_22, Long_23, Var_32, Args_14, NonOptionArgs_16, OptionArgs_15, &MaybeOptionError_25, STATE_VARIABLE_OptionTable_0_26, STATE_VARIABLE_OptionTable_27, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), OptionsSet_18, STATE_VARIABLE_UserData_0_28, STATE_VARIABLE_UserData_29, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_31);
  if ((MaybeOptionError_25 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeError_17 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Error_39 = ((MR_Word) ((MR_hl_field(1, MaybeOptionError_25, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeError_17 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Error_39));
    }
  }
}

void MR_CALL 
mercury__getopt__process_options_userdata_10_p_0(
  MR_Word TypeInfo_for_OptionType_33,
  MR_Word TypeInfo_for_UserDataType_34,
  MR_Word OptionOps_11,
  MR_Word Args_12,
  MR_Word * OptionArgs_13,
  MR_Word * NonOptionArgs_14,
  MR_Word * MaybeError_15,
  MR_Word * OptionsSet_16,
  MR_Word STATE_VARIABLE_OptionTable_0_24,
  MR_Word * STATE_VARIABLE_OptionTable_25,
  MR_Box STATE_VARIABLE_UserData_0_26,
  MR_Box * STATE_VARIABLE_UserData_27)
{
  MR_Word Short_19 = ((MR_Word) ((MR_hl_field(0, OptionOps_11, (MR_Integer) 0))));
  MR_Word Long_20 = ((MR_Word) ((MR_hl_field(0, OptionOps_11, (MR_Integer) 1))));
  MR_Word Special_21 = ((MR_Word) ((MR_hl_field(0, OptionOps_11, (MR_Integer) 2))));
  MR_Word MaybeOptionError_22;
  MR_Word Var_28;
  MR_Box conv0_Var_23;

  {
    Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_28, 0) = ((MR_Box) (Special_21));
  }
  mercury__getopt__process_arguments_15_p_0(TypeInfo_for_OptionType_33, TypeInfo_for_UserDataType_34, (MR_Word) (&mercury__getopt_scalar_common_1[0]), Short_19, Long_20, Var_28, Args_12, NonOptionArgs_14, OptionArgs_13, &MaybeOptionError_22, STATE_VARIABLE_OptionTable_0_24, STATE_VARIABLE_OptionTable_25, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), OptionsSet_16, STATE_VARIABLE_UserData_0_26, STATE_VARIABLE_UserData_27, ((MR_Box) ((MR_Integer) 0)), &conv0_Var_23);
  if ((MaybeOptionError_22 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeError_15 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Error_37 = ((MR_Word) ((MR_hl_field(1, MaybeOptionError_22, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeError_15 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Error_37));
    }
  }
}

void MR_CALL 
mercury__getopt__process_options_track_io_9_p_0(
  MR_Word TypeInfo_for_OptionType_29,
  MR_Word OptionOps_10,
  MR_Word Args_11,
  MR_Word * OptionArgs_12,
  MR_Word * NonOptionArgs_13,
  MR_Word OptionTable0_14,
  MR_Word * Result_15,
  MR_Word * OptionsSet_16)
{
  MR_Word Short_18 = ((MR_Word) ((MR_hl_field(0, OptionOps_10, (MR_Integer) 0))));
  MR_Word Long_19 = ((MR_Word) ((MR_hl_field(0, OptionOps_10, (MR_Integer) 1))));
  MR_Word Special_20 = ((MR_Word) ((MR_hl_field(0, OptionOps_10, (MR_Integer) 2))));
  MR_Word MaybeOptionError_21;
  MR_Word OptionTable_22;
  MR_Word Var_26;
  MR_Box conv1_Var_23;
  MR_Box conv0_STATE_VARIABLE_IO_25;

  {
    Var_26 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_26, 0) = ((MR_Box) (Special_20));
  }
  mercury__getopt__process_arguments_15_p_0(TypeInfo_for_OptionType_29, (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Word) (&mercury__getopt_scalar_common_1[1]), Short_18, Long_19, Var_26, Args_11, NonOptionArgs_13, OptionArgs_12, &MaybeOptionError_21, OptionTable0_14, &OptionTable_22, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), OptionsSet_16, ((MR_Box) ((MR_Integer) 0)), &conv1_Var_23, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_25);
  if ((MaybeOptionError_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_15 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (OptionTable_22));
    }
  else
  {
    MR_Word Error_33 = ((MR_Word) ((MR_hl_field(1, MaybeOptionError_21, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_15 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Error_33));
    }
  }
}

void MR_CALL 
mercury__getopt__process_options_track_7_p_0(
  MR_Word TypeInfo_for_OptionType_26,
  MR_Word OptionOps_8,
  MR_Word Args_9,
  MR_Word * OptionArgs_10,
  MR_Word * NonOptionArgs_11,
  MR_Word OptionTable0_12,
  MR_Word * Result_13,
  MR_Word * OptionsSet_14)
{
  MR_Word Short_15 = ((MR_Word) ((MR_hl_field(0, OptionOps_8, (MR_Integer) 0))));
  MR_Word Long_16 = ((MR_Word) ((MR_hl_field(0, OptionOps_8, (MR_Integer) 1))));
  MR_Word Special_17 = ((MR_Word) ((MR_hl_field(0, OptionOps_8, (MR_Integer) 2))));
  MR_Word MaybeOptionError_18;
  MR_Word OptionTable_19;
  MR_Word Var_22;
  MR_Box conv1_Var_20;
  MR_Box conv0_Var_21;

  {
    Var_22 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_22, 0) = ((MR_Box) (Special_17));
  }
  mercury__getopt__process_arguments_15_p_0(TypeInfo_for_OptionType_26, (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Word) (&mercury__getopt_scalar_common_1[0]), Short_15, Long_16, Var_22, Args_9, NonOptionArgs_11, OptionArgs_10, &MaybeOptionError_18, OptionTable0_12, &OptionTable_19, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), OptionsSet_14, ((MR_Box) ((MR_Integer) 0)), &conv1_Var_20, ((MR_Box) ((MR_Integer) 0)), &conv0_Var_21);
  if ((MaybeOptionError_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_13 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (OptionTable_19));
    }
  else
  {
    MR_Word Error_30 = ((MR_Word) ((MR_hl_field(1, MaybeOptionError_18, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_13 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Error_30));
    }
  }
}

void MR_CALL 
mercury__getopt__process_options_io_6_p_0(
  MR_Word TypeInfo_for_OptionType_15,
  MR_Word OptionOps_7,
  MR_Word Args_8,
  MR_Word * NonOptionArgs_9,
  MR_Word * Result_10)
{
  MR_Word _OptionArgs_12;

  mercury__getopt__process_options_io_7_p_0(TypeInfo_for_OptionType_15, OptionOps_7, Args_8, &_OptionArgs_12, NonOptionArgs_9, Result_10);
}

void MR_CALL 
mercury__getopt__process_options_io_7_p_0(
  MR_Word TypeInfo_for_OptionType_26,
  MR_Word OptionOps_8,
  MR_Word Args_9,
  MR_Word * OptionArgs_10,
  MR_Word * NonOptionArgs_11,
  MR_Word * Result_12)
{
  MR_Word Short_14;
  MR_Word Long_15;
  MR_Word Special_16;
  MR_Word OptionTable0_17;
  MR_Word MaybeOptionError_18;
  MR_Word OptionTable_19;
  MR_Word _OptionsSet_20;
  MR_Box conv1_Var_21;
  MR_Box conv0_STATE_VARIABLE_IO_23;

  mercury__getopt__option_ops_to_internal_and_option_table_5_p_0(TypeInfo_for_OptionType_26, (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), OptionOps_8, &Short_14, &Long_15, &Special_16, &OptionTable0_17);
  mercury__getopt__process_arguments_15_p_0(TypeInfo_for_OptionType_26, (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Word) (&mercury__getopt_scalar_common_1[1]), Short_14, Long_15, Special_16, Args_9, NonOptionArgs_11, OptionArgs_10, &MaybeOptionError_18, OptionTable0_17, &OptionTable_19, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &_OptionsSet_20, ((MR_Box) ((MR_Integer) 0)), &conv1_Var_21, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_23);
  if ((MaybeOptionError_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (OptionTable_19));
    }
  else
  {
    MR_Word Error_30 = ((MR_Word) ((MR_hl_field(1, MaybeOptionError_18, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Error_30));
    }
  }
}

void MR_CALL 
mercury__getopt__process_options_4_p_0(
  MR_Word TypeInfo_for_OptionType_10,
  MR_Word OptionOps_5,
  MR_Word Args_6,
  MR_Word * NonOptionArgs_7,
  MR_Word * Result_8)
{
  MR_Word _OptionArgs_9;

  mercury__getopt__process_options_5_p_0(TypeInfo_for_OptionType_10, OptionOps_5, Args_6, &_OptionArgs_9, NonOptionArgs_7, Result_8);
}

void MR_CALL 
mercury__getopt__process_options_5_p_0(
  MR_Word TypeInfo_for_OptionType_23,
  MR_Word OptionOps_6,
  MR_Word Args_7,
  MR_Word * OptionArgs_8,
  MR_Word * NonOptionArgs_9,
  MR_Word * Result_10)
{
  MR_Word Short_11;
  MR_Word Long_12;
  MR_Word Special_13;
  MR_Word OptionTable0_14;
  MR_Word MaybeOptionError_15;
  MR_Word OptionTable_16;
  MR_Word _OptionsSet_17;
  MR_Box conv1_Var_18;
  MR_Box conv0_Var_19;

  mercury__getopt__option_ops_to_internal_and_option_table_5_p_0(TypeInfo_for_OptionType_23, (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), OptionOps_6, &Short_11, &Long_12, &Special_13, &OptionTable0_14);
  mercury__getopt__process_arguments_15_p_0(TypeInfo_for_OptionType_23, (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Word) (&mercury__getopt_scalar_common_1[0]), Short_11, Long_12, Special_13, Args_7, NonOptionArgs_9, OptionArgs_8, &MaybeOptionError_15, OptionTable0_14, &OptionTable_16, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &_OptionsSet_17, ((MR_Box) ((MR_Integer) 0)), &conv1_Var_18, ((MR_Box) ((MR_Integer) 0)), &conv0_Var_19);
  if ((MaybeOptionError_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (OptionTable_16));
    }
  else
  {
    MR_Word Error_27 = ((MR_Word) ((MR_hl_field(1, MaybeOptionError_15, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Error_27));
    }
  }
}

void MR_CALL 
mercury__getopt__process_arguments_15_p_0(
  MR_Word TypeInfo_for_OptionType_47,
  MR_Word TypeInfo_for_UserDataType_48,
  MR_Word TypeClassInfo_for_read_file_contents_46,
  MR_Word ShortOptionPred_16,
  MR_Word LongOptionPred_17,
  MR_Word SpecialHandler_18,
  MR_Word Args_19,
  MR_Word * NonOptionArgs_20,
  MR_Word * OptionArgs_21,
  MR_Word * MaybeError_22,
  MR_Word STATE_VARIABLE_OptionTable_0_32,
  MR_Word * STATE_VARIABLE_OptionTable_33,
  MR_Word STATE_VARIABLE_OptionsSet_0_34,
  MR_Word * STATE_VARIABLE_OptionsSet_35,
  MR_Box STATE_VARIABLE_UserData_0_36,
  MR_Box * STATE_VARIABLE_UserData_37,
  MR_Box STATE_VARIABLE_MaybeIO_0_38,
  MR_Box * STATE_VARIABLE_MaybeIO_39)
{
  MR_Word MaybeRecordError_27;
  MR_Word OptionValues_28;

  mercury__getopt__record_arguments_8_p_0(TypeInfo_for_OptionType_47, ShortOptionPred_16, LongOptionPred_17, STATE_VARIABLE_OptionTable_0_32, Args_19, NonOptionArgs_20, OptionArgs_21, &MaybeRecordError_27, &OptionValues_28);
  if ((MaybeRecordError_27 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MaybeExpandError_29;
    MR_Word NFSOptionValues_30;

    mercury__getopt__expand_file_specials_check_9_p_0(TypeInfo_for_OptionType_47, TypeClassInfo_for_read_file_contents_46, ShortOptionPred_16, LongOptionPred_17, STATE_VARIABLE_OptionTable_0_32, OptionValues_28, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &MaybeExpandError_29, &NFSOptionValues_30, STATE_VARIABLE_MaybeIO_0_38, STATE_VARIABLE_MaybeIO_39);
    if ((MaybeExpandError_29 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__getopt__process_option_values_9_p_0(TypeInfo_for_OptionType_47, TypeInfo_for_UserDataType_48, SpecialHandler_18, NFSOptionValues_30, MaybeError_22, STATE_VARIABLE_OptionTable_0_32, STATE_VARIABLE_OptionTable_33, STATE_VARIABLE_OptionsSet_0_34, STATE_VARIABLE_OptionsSet_35, STATE_VARIABLE_UserData_0_36, STATE_VARIABLE_UserData_37);
    else
    {
      *MaybeError_22 = MaybeExpandError_29;
      *STATE_VARIABLE_OptionTable_33 = STATE_VARIABLE_OptionTable_0_32;
      *STATE_VARIABLE_OptionsSet_35 = STATE_VARIABLE_OptionsSet_0_34;
      *STATE_VARIABLE_UserData_37 = STATE_VARIABLE_UserData_0_36;
    }
  }
  else
  {
    *MaybeError_22 = MaybeRecordError_27;
    *STATE_VARIABLE_OptionTable_33 = STATE_VARIABLE_OptionTable_0_32;
    *STATE_VARIABLE_OptionsSet_35 = STATE_VARIABLE_OptionsSet_0_34;
    *STATE_VARIABLE_UserData_37 = STATE_VARIABLE_UserData_0_36;
    *STATE_VARIABLE_MaybeIO_39 = STATE_VARIABLE_MaybeIO_0_38;
  }
}

void MR_CALL 
mercury__getopt__process_option_values_9_p_0(
  MR_Word TypeInfo_for_OptionType_99,
  MR_Word TypeInfo_for_UserDataType_100,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_OptionTable_0_4,
  MR_Word * STATE_VARIABLE_OptionTable_5,
  MR_Word STATE_VARIABLE_OptionsSet_0_6,
  MR_Word * STATE_VARIABLE_OptionsSet_7,
  MR_Box STATE_VARIABLE_UserData_0_8,
  MR_Box * STATE_VARIABLE_UserData_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_UserData_9 = STATE_VARIABLE_UserData_0_8;
      *STATE_VARIABLE_OptionsSet_7 = STATE_VARIABLE_OptionsSet_0_6;
      *STATE_VARIABLE_OptionTable_5 = STATE_VARIABLE_OptionTable_0_4;
    }
    else
    {
      MR_Word OV_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word OVs_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) OV_21)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word BoolValue_29 = ((MR_Unsigned) ((MR_hl_field(0, OV_21, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Var_47;
            MR_Box Flag_112 = (MR_hl_field(0, OV_21, (MR_Integer) 0));
            MR_Word STATE_VARIABLE_OptionTable_48_113;
            MR_Word STATE_VARIABLE_OptionsSet_66_114;
            MR_Word next_value_of_HeadVar__2_2;
            MR_Word next_value_of_STATE_VARIABLE_OptionTable_0_4;
            MR_Word next_value_of_STATE_VARIABLE_OptionsSet_0_6;

            {
              Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_47, 0) = (MR_Box) ((MR_Unsigned) (BoolValue_29));
            }
            mercury__map__set_4_p_0(TypeInfo_for_OptionType_99, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), Flag_112, ((MR_Box) (Var_47)), STATE_VARIABLE_OptionTable_0_4, &STATE_VARIABLE_OptionTable_48_113);
            mercury__set__insert_3_p_0(TypeInfo_for_OptionType_99, Flag_112, STATE_VARIABLE_OptionsSet_0_6, &STATE_VARIABLE_OptionsSet_66_114);
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__2_2 = OVs_22;
            next_value_of_STATE_VARIABLE_OptionTable_0_4 = STATE_VARIABLE_OptionTable_48_113;
            next_value_of_STATE_VARIABLE_OptionsSet_0_6 = STATE_VARIABLE_OptionsSet_66_114;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            STATE_VARIABLE_OptionTable_0_4 = next_value_of_STATE_VARIABLE_OptionTable_0_4;
            STATE_VARIABLE_OptionsSet_0_6 = next_value_of_STATE_VARIABLE_OptionsSet_0_6;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer IntValue_30 = ((MR_Integer) ((MR_hl_field(1, OV_21, (MR_Integer) 2))));
            MR_Word Var_49;
            MR_Box Flag_115 = (MR_hl_field(1, OV_21, (MR_Integer) 0));
            MR_Word STATE_VARIABLE_OptionTable_48_116;
            MR_Word STATE_VARIABLE_OptionsSet_66_117;
            MR_Word next_value_of_HeadVar__2_2;
            MR_Word next_value_of_STATE_VARIABLE_OptionTable_0_4;
            MR_Word next_value_of_STATE_VARIABLE_OptionsSet_0_6;

            {
              Var_49 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_49, 0) = ((MR_Box) (IntValue_30));
            }
            mercury__map__set_4_p_0(TypeInfo_for_OptionType_99, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), Flag_115, ((MR_Box) (Var_49)), STATE_VARIABLE_OptionTable_0_4, &STATE_VARIABLE_OptionTable_48_116);
            mercury__set__insert_3_p_0(TypeInfo_for_OptionType_99, Flag_115, STATE_VARIABLE_OptionsSet_0_6, &STATE_VARIABLE_OptionsSet_66_117);
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__2_2 = OVs_22;
            next_value_of_STATE_VARIABLE_OptionTable_0_4 = STATE_VARIABLE_OptionTable_48_116;
            next_value_of_STATE_VARIABLE_OptionsSet_0_6 = STATE_VARIABLE_OptionsSet_66_117;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            STATE_VARIABLE_OptionTable_0_4 = next_value_of_STATE_VARIABLE_OptionTable_0_4;
            STATE_VARIABLE_OptionsSet_0_6 = next_value_of_STATE_VARIABLE_OptionsSet_0_6;
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String StringValue_32 = ((MR_String) ((MR_hl_field(2, OV_21, (MR_Integer) 2))));
            MR_Word Var_53;
            MR_Box Flag_160 = (MR_hl_field(2, OV_21, (MR_Integer) 0));
            MR_Word STATE_VARIABLE_OptionTable_48_161;
            MR_Word STATE_VARIABLE_OptionsSet_66_162;
            MR_Word next_value_of_HeadVar__2_2;
            MR_Word next_value_of_STATE_VARIABLE_OptionTable_0_4;
            MR_Word next_value_of_STATE_VARIABLE_OptionsSet_0_6;

            {
              Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_53, 1) = ((MR_Box) (StringValue_32));
            }
            mercury__map__set_4_p_0(TypeInfo_for_OptionType_99, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), Flag_160, ((MR_Box) (Var_53)), STATE_VARIABLE_OptionTable_0_4, &STATE_VARIABLE_OptionTable_48_161);
            mercury__set__insert_3_p_0(TypeInfo_for_OptionType_99, Flag_160, STATE_VARIABLE_OptionsSet_0_6, &STATE_VARIABLE_OptionsSet_66_162);
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__2_2 = OVs_22;
            next_value_of_STATE_VARIABLE_OptionTable_0_4 = STATE_VARIABLE_OptionTable_48_161;
            next_value_of_STATE_VARIABLE_OptionsSet_0_6 = STATE_VARIABLE_OptionsSet_66_162;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            STATE_VARIABLE_OptionTable_0_4 = next_value_of_STATE_VARIABLE_OptionTable_0_4;
            STATE_VARIABLE_OptionsSet_0_6 = next_value_of_STATE_VARIABLE_OptionsSet_0_6;
            continue;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, OV_21, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word MaybeIntValue_31 = ((MR_Word) ((MR_hl_field(3, OV_21, (MR_Integer) 3))));
                MR_Word Var_51;
                MR_Box Flag_130 = (MR_hl_field(3, OV_21, (MR_Integer) 1));
                MR_Word STATE_VARIABLE_OptionTable_48_131;
                MR_Word STATE_VARIABLE_OptionsSet_66_132;
                MR_Word next_value_of_HeadVar__2_2;
                MR_Word next_value_of_STATE_VARIABLE_OptionTable_0_4;
                MR_Word next_value_of_STATE_VARIABLE_OptionsSet_0_6;

                {
                  Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, Var_51, 1) = ((MR_Box) (MaybeIntValue_31));
                }
                mercury__map__set_4_p_0(TypeInfo_for_OptionType_99, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), Flag_130, ((MR_Box) (Var_51)), STATE_VARIABLE_OptionTable_0_4, &STATE_VARIABLE_OptionTable_48_131);
                mercury__set__insert_3_p_0(TypeInfo_for_OptionType_99, Flag_130, STATE_VARIABLE_OptionsSet_0_6, &STATE_VARIABLE_OptionsSet_66_132);
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__2_2 = OVs_22;
                next_value_of_STATE_VARIABLE_OptionTable_0_4 = STATE_VARIABLE_OptionTable_48_131;
                next_value_of_STATE_VARIABLE_OptionsSet_0_6 = STATE_VARIABLE_OptionsSet_66_132;
                HeadVar__2_2 = next_value_of_HeadVar__2_2;
                STATE_VARIABLE_OptionTable_0_4 = next_value_of_STATE_VARIABLE_OptionTable_0_4;
                STATE_VARIABLE_OptionsSet_0_6 = next_value_of_STATE_VARIABLE_OptionsSet_0_6;
                continue;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word MaybeStringValue_33 = ((MR_Word) ((MR_hl_field(3, OV_21, (MR_Integer) 3))));
                MR_Word Var_55;
                MR_Box Flag_133 = (MR_hl_field(3, OV_21, (MR_Integer) 1));
                MR_Word STATE_VARIABLE_OptionTable_48_134;
                MR_Word STATE_VARIABLE_OptionsSet_66_135;
                MR_Word next_value_of_HeadVar__2_2;
                MR_Word next_value_of_STATE_VARIABLE_OptionTable_0_4;
                MR_Word next_value_of_STATE_VARIABLE_OptionsSet_0_6;

                {
                  Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(3, Var_55, 1) = ((MR_Box) (MaybeStringValue_33));
                }
                mercury__map__set_4_p_0(TypeInfo_for_OptionType_99, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), Flag_133, ((MR_Box) (Var_55)), STATE_VARIABLE_OptionTable_0_4, &STATE_VARIABLE_OptionTable_48_134);
                mercury__set__insert_3_p_0(TypeInfo_for_OptionType_99, Flag_133, STATE_VARIABLE_OptionsSet_0_6, &STATE_VARIABLE_OptionsSet_66_135);
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__2_2 = OVs_22;
                next_value_of_STATE_VARIABLE_OptionTable_0_4 = STATE_VARIABLE_OptionTable_48_134;
                next_value_of_STATE_VARIABLE_OptionsSet_0_6 = STATE_VARIABLE_OptionsSet_66_135;
                HeadVar__2_2 = next_value_of_HeadVar__2_2;
                STATE_VARIABLE_OptionTable_0_4 = next_value_of_STATE_VARIABLE_OptionTable_0_4;
                STATE_VARIABLE_OptionsSet_0_6 = next_value_of_STATE_VARIABLE_OptionsSet_0_6;
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Box Flag_27 = (MR_hl_field(3, OV_21, (MR_Integer) 1));
                MR_Word Value0_34;
                MR_Word STATE_VARIABLE_OptionTable_48_48;
                MR_Word STATE_VARIABLE_OptionsSet_66_66;
                MR_String StringValue_87 = ((MR_String) ((MR_hl_field(3, OV_21, (MR_Integer) 3))));
                MR_Box conv0_Value0_34;
                MR_Word AccStrings0_35;
                MR_Word next_value_of_HeadVar__2_2;
                MR_Word next_value_of_STATE_VARIABLE_OptionTable_0_4;
                MR_Word next_value_of_STATE_VARIABLE_OptionsSet_0_6;

                mercury__map__lookup_3_p_0(TypeInfo_for_OptionType_99, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), STATE_VARIABLE_OptionTable_0_4, Flag_27, &conv0_Value0_34);
                Value0_34 = ((MR_Word) (conv0_Value0_34));
                succeeded = ((((MR_tag((MR_Word) Value0_34)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Value0_34, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  AccStrings0_35 = ((MR_Word) ((MR_hl_field(3, Value0_34, (MR_Integer) 1))));
                  {
                    MR_Word AccStrings_36;
                    MR_Word Var_57;
                    MR_Word Var_59;

                    {
                      Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_57, 0) = ((MR_Box) (StringValue_87));
                      MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    AccStrings_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AccStrings0_35, Var_57);
                    {
                      Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                      MR_hl_field(3, Var_59, 1) = ((MR_Box) (AccStrings_36));
                    }
                    mercury__map__set_4_p_0(TypeInfo_for_OptionType_99, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), Flag_27, ((MR_Box) (Var_59)), STATE_VARIABLE_OptionTable_0_4, &STATE_VARIABLE_OptionTable_48_48);
                  }
                }
                else
                  {
                    mercury__require__error_2_p_0((MR_String) "predicate \140getopt.process_option_values\'/9", (MR_String) "ov_accumulating but not accumulating");
                    return;
                  }
                mercury__set__insert_3_p_0(TypeInfo_for_OptionType_99, Flag_27, STATE_VARIABLE_OptionsSet_0_6, &STATE_VARIABLE_OptionsSet_66_66);
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__2_2 = OVs_22;
                next_value_of_STATE_VARIABLE_OptionTable_0_4 = STATE_VARIABLE_OptionTable_48_48;
                next_value_of_STATE_VARIABLE_OptionsSet_0_6 = STATE_VARIABLE_OptionsSet_66_66;
                HeadVar__2_2 = next_value_of_HeadVar__2_2;
                STATE_VARIABLE_OptionTable_0_4 = next_value_of_STATE_VARIABLE_OptionTable_0_4;
                STATE_VARIABLE_OptionsSet_0_6 = next_value_of_STATE_VARIABLE_OptionsSet_0_6;
                continue;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Box Flag_109 = (MR_hl_field(3, OV_21, (MR_Integer) 1));
                MR_Word STATE_VARIABLE_OptionTable_48_110;
                MR_Word STATE_VARIABLE_OptionsSet_66_111;
                MR_Word next_value_of_HeadVar__2_2;
                MR_Word next_value_of_STATE_VARIABLE_OptionTable_0_4;
                MR_Word next_value_of_STATE_VARIABLE_OptionsSet_0_6;

                mercury__map__set_4_p_0(TypeInfo_for_OptionType_99, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), Flag_109, ((MR_Box) (MR_mkword(3, &mercury__getopt_scalar_common_1[5]))), STATE_VARIABLE_OptionTable_0_4, &STATE_VARIABLE_OptionTable_48_110);
                mercury__set__insert_3_p_0(TypeInfo_for_OptionType_99, Flag_109, STATE_VARIABLE_OptionsSet_0_6, &STATE_VARIABLE_OptionsSet_66_111);
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__2_2 = OVs_22;
                next_value_of_STATE_VARIABLE_OptionTable_0_4 = STATE_VARIABLE_OptionTable_48_110;
                next_value_of_STATE_VARIABLE_OptionsSet_0_6 = STATE_VARIABLE_OptionsSet_66_111;
                HeadVar__2_2 = next_value_of_HeadVar__2_2;
                STATE_VARIABLE_OptionTable_0_4 = next_value_of_STATE_VARIABLE_OptionTable_0_4;
                STATE_VARIABLE_OptionsSet_0_6 = next_value_of_STATE_VARIABLE_OptionsSet_0_6;
                continue;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_String OptName_151 = ((MR_String) ((MR_hl_field(3, OV_21, (MR_Integer) 2))));
                MR_Word MaybeSpecialError_153;
                MR_Word STATE_VARIABLE_OptionsSet_70_155;
                MR_Word STATE_VARIABLE_OptionTable_71_156;
                MR_Word STATE_VARIABLE_OptionsSet_72_157;
                MR_Box STATE_VARIABLE_UserData_73_158;
                MR_Box Flag_159 = (MR_hl_field(3, OV_21, (MR_Integer) 1));

                mercury__set__insert_3_p_0(TypeInfo_for_OptionType_99, Flag_159, STATE_VARIABLE_OptionsSet_0_6, &STATE_VARIABLE_OptionsSet_70_155);
                mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_115_112_101_99_105_97_108_95_111_112_116_105_111_110_95_95_91_50_93_95_48_11_p_0(TypeInfo_for_OptionType_99, HeadVar__1_1, Flag_159, OptName_151, (MR_Word) ((MR_Unsigned) 0U), &MaybeSpecialError_153, STATE_VARIABLE_OptionTable_0_4, &STATE_VARIABLE_OptionTable_71_156, STATE_VARIABLE_OptionsSet_70_155, &STATE_VARIABLE_OptionsSet_72_157, STATE_VARIABLE_UserData_0_8, &STATE_VARIABLE_UserData_73_158);
                if ((MaybeSpecialError_153 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word next_value_of_HeadVar__2_2 = OVs_22;
                  MR_Word next_value_of_STATE_VARIABLE_OptionTable_0_4 = STATE_VARIABLE_OptionTable_71_156;
                  MR_Word next_value_of_STATE_VARIABLE_OptionsSet_0_6 = STATE_VARIABLE_OptionsSet_72_157;
                  MR_Box next_value_of_STATE_VARIABLE_UserData_0_8 = STATE_VARIABLE_UserData_73_158;

                  // direct tailcall eliminated
                  ;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  STATE_VARIABLE_OptionTable_0_4 = next_value_of_STATE_VARIABLE_OptionTable_0_4;
                  STATE_VARIABLE_OptionsSet_0_6 = next_value_of_STATE_VARIABLE_OptionsSet_0_6;
                  STATE_VARIABLE_UserData_0_8 = next_value_of_STATE_VARIABLE_UserData_0_8;
                  continue;
                }
                else
                {
                  *HeadVar__3_3 = MaybeSpecialError_153;
                  *STATE_VARIABLE_OptionTable_5 = STATE_VARIABLE_OptionTable_71_156;
                  *STATE_VARIABLE_OptionsSet_7 = STATE_VARIABLE_OptionsSet_72_157;
                  *STATE_VARIABLE_UserData_9 = STATE_VARIABLE_UserData_73_158;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_String OptName_37 = ((MR_String) ((MR_hl_field(3, OV_21, (MR_Integer) 2))));
                MR_Word OptionData_38;
                MR_Word MaybeSpecialError_39;
                MR_Word STATE_VARIABLE_OptionsSet_70_70;
                MR_Word STATE_VARIABLE_OptionTable_71_71;
                MR_Word STATE_VARIABLE_OptionsSet_72_72;
                MR_Box STATE_VARIABLE_UserData_73_73;
                MR_Word BoolValue_90 = ((MR_Unsigned) ((MR_hl_field(3, OV_21, (MR_Integer) 3))) & (MR_Integer) 1);
                MR_Box Flag_98 = (MR_hl_field(3, OV_21, (MR_Integer) 1));

                {
                  OptionData_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, OptionData_38, 0) = (MR_Box) ((MR_Unsigned) (BoolValue_90));
                }
                mercury__set__insert_3_p_0(TypeInfo_for_OptionType_99, Flag_98, STATE_VARIABLE_OptionsSet_0_6, &STATE_VARIABLE_OptionsSet_70_70);
                mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_115_112_101_99_105_97_108_95_111_112_116_105_111_110_95_95_91_50_93_95_48_11_p_0(TypeInfo_for_OptionType_99, HeadVar__1_1, Flag_98, OptName_37, OptionData_38, &MaybeSpecialError_39, STATE_VARIABLE_OptionTable_0_4, &STATE_VARIABLE_OptionTable_71_71, STATE_VARIABLE_OptionsSet_70_70, &STATE_VARIABLE_OptionsSet_72_72, STATE_VARIABLE_UserData_0_8, &STATE_VARIABLE_UserData_73_73);
                if ((MaybeSpecialError_39 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word next_value_of_HeadVar__2_2 = OVs_22;
                  MR_Word next_value_of_STATE_VARIABLE_OptionTable_0_4 = STATE_VARIABLE_OptionTable_71_71;
                  MR_Word next_value_of_STATE_VARIABLE_OptionsSet_0_6 = STATE_VARIABLE_OptionsSet_72_72;
                  MR_Box next_value_of_STATE_VARIABLE_UserData_0_8 = STATE_VARIABLE_UserData_73_73;

                  // direct tailcall eliminated
                  ;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  STATE_VARIABLE_OptionTable_0_4 = next_value_of_STATE_VARIABLE_OptionTable_0_4;
                  STATE_VARIABLE_OptionsSet_0_6 = next_value_of_STATE_VARIABLE_OptionsSet_0_6;
                  STATE_VARIABLE_UserData_0_8 = next_value_of_STATE_VARIABLE_UserData_0_8;
                  continue;
                }
                else
                {
                  *HeadVar__3_3 = MaybeSpecialError_39;
                  *STATE_VARIABLE_OptionTable_5 = STATE_VARIABLE_OptionTable_71_71;
                  *STATE_VARIABLE_OptionsSet_7 = STATE_VARIABLE_OptionsSet_72_72;
                  *STATE_VARIABLE_UserData_9 = STATE_VARIABLE_UserData_73_73;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Integer IntValue_91 = ((MR_Integer) ((MR_hl_field(3, OV_21, (MR_Integer) 3))));
                MR_String OptName_121 = ((MR_String) ((MR_hl_field(3, OV_21, (MR_Integer) 2))));
                MR_Word OptionData_122;
                MR_Word MaybeSpecialError_123;
                MR_Word STATE_VARIABLE_OptionsSet_70_125;
                MR_Word STATE_VARIABLE_OptionTable_71_126;
                MR_Word STATE_VARIABLE_OptionsSet_72_127;
                MR_Box STATE_VARIABLE_UserData_73_128;
                MR_Box Flag_129 = (MR_hl_field(3, OV_21, (MR_Integer) 1));

                {
                  OptionData_122 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, OptionData_122, 0) = ((MR_Box) (IntValue_91));
                }
                mercury__set__insert_3_p_0(TypeInfo_for_OptionType_99, Flag_129, STATE_VARIABLE_OptionsSet_0_6, &STATE_VARIABLE_OptionsSet_70_125);
                mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_115_112_101_99_105_97_108_95_111_112_116_105_111_110_95_95_91_50_93_95_48_11_p_0(TypeInfo_for_OptionType_99, HeadVar__1_1, Flag_129, OptName_121, OptionData_122, &MaybeSpecialError_123, STATE_VARIABLE_OptionTable_0_4, &STATE_VARIABLE_OptionTable_71_126, STATE_VARIABLE_OptionsSet_70_125, &STATE_VARIABLE_OptionsSet_72_127, STATE_VARIABLE_UserData_0_8, &STATE_VARIABLE_UserData_73_128);
                if ((MaybeSpecialError_123 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word next_value_of_HeadVar__2_2 = OVs_22;
                  MR_Word next_value_of_STATE_VARIABLE_OptionTable_0_4 = STATE_VARIABLE_OptionTable_71_126;
                  MR_Word next_value_of_STATE_VARIABLE_OptionsSet_0_6 = STATE_VARIABLE_OptionsSet_72_127;
                  MR_Box next_value_of_STATE_VARIABLE_UserData_0_8 = STATE_VARIABLE_UserData_73_128;

                  // direct tailcall eliminated
                  ;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  STATE_VARIABLE_OptionTable_0_4 = next_value_of_STATE_VARIABLE_OptionTable_0_4;
                  STATE_VARIABLE_OptionsSet_0_6 = next_value_of_STATE_VARIABLE_OptionsSet_0_6;
                  STATE_VARIABLE_UserData_0_8 = next_value_of_STATE_VARIABLE_UserData_0_8;
                  continue;
                }
                else
                {
                  *HeadVar__3_3 = MaybeSpecialError_123;
                  *STATE_VARIABLE_OptionTable_5 = STATE_VARIABLE_OptionTable_71_126;
                  *STATE_VARIABLE_OptionsSet_7 = STATE_VARIABLE_OptionsSet_72_127;
                  *STATE_VARIABLE_UserData_9 = STATE_VARIABLE_UserData_73_128;
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_String StringValue_92 = ((MR_String) ((MR_hl_field(3, OV_21, (MR_Integer) 3))));
                MR_String OptName_166 = ((MR_String) ((MR_hl_field(3, OV_21, (MR_Integer) 2))));
                MR_Word OptionData_167;
                MR_Word MaybeSpecialError_168;
                MR_Word STATE_VARIABLE_OptionsSet_70_170;
                MR_Word STATE_VARIABLE_OptionTable_71_171;
                MR_Word STATE_VARIABLE_OptionsSet_72_172;
                MR_Box STATE_VARIABLE_UserData_73_173;
                MR_Box Flag_174 = (MR_hl_field(3, OV_21, (MR_Integer) 1));

                {
                  OptionData_167 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, OptionData_167, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, OptionData_167, 1) = ((MR_Box) (StringValue_92));
                }
                mercury__set__insert_3_p_0(TypeInfo_for_OptionType_99, Flag_174, STATE_VARIABLE_OptionsSet_0_6, &STATE_VARIABLE_OptionsSet_70_170);
                mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_115_112_101_99_105_97_108_95_111_112_116_105_111_110_95_95_91_50_93_95_48_11_p_0(TypeInfo_for_OptionType_99, HeadVar__1_1, Flag_174, OptName_166, OptionData_167, &MaybeSpecialError_168, STATE_VARIABLE_OptionTable_0_4, &STATE_VARIABLE_OptionTable_71_171, STATE_VARIABLE_OptionsSet_70_170, &STATE_VARIABLE_OptionsSet_72_172, STATE_VARIABLE_UserData_0_8, &STATE_VARIABLE_UserData_73_173);
                if ((MaybeSpecialError_168 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word next_value_of_HeadVar__2_2 = OVs_22;
                  MR_Word next_value_of_STATE_VARIABLE_OptionTable_0_4 = STATE_VARIABLE_OptionTable_71_171;
                  MR_Word next_value_of_STATE_VARIABLE_OptionsSet_0_6 = STATE_VARIABLE_OptionsSet_72_172;
                  MR_Box next_value_of_STATE_VARIABLE_UserData_0_8 = STATE_VARIABLE_UserData_73_173;

                  // direct tailcall eliminated
                  ;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  STATE_VARIABLE_OptionTable_0_4 = next_value_of_STATE_VARIABLE_OptionTable_0_4;
                  STATE_VARIABLE_OptionsSet_0_6 = next_value_of_STATE_VARIABLE_OptionsSet_0_6;
                  STATE_VARIABLE_UserData_0_8 = next_value_of_STATE_VARIABLE_UserData_0_8;
                  continue;
                }
                else
                {
                  *HeadVar__3_3 = MaybeSpecialError_168;
                  *STATE_VARIABLE_OptionTable_5 = STATE_VARIABLE_OptionTable_71_171;
                  *STATE_VARIABLE_OptionsSet_7 = STATE_VARIABLE_OptionsSet_72_172;
                  *STATE_VARIABLE_UserData_9 = STATE_VARIABLE_UserData_73_173;
                }
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word MaybeStringValue_93 = ((MR_Word) ((MR_hl_field(3, OV_21, (MR_Integer) 3))));
                MR_String OptName_139 = ((MR_String) ((MR_hl_field(3, OV_21, (MR_Integer) 2))));
                MR_Word OptionData_140;
                MR_Word MaybeSpecialError_141;
                MR_Word STATE_VARIABLE_OptionsSet_70_143;
                MR_Word STATE_VARIABLE_OptionTable_71_144;
                MR_Word STATE_VARIABLE_OptionsSet_72_145;
                MR_Box STATE_VARIABLE_UserData_73_146;
                MR_Box Flag_147 = (MR_hl_field(3, OV_21, (MR_Integer) 1));

                {
                  OptionData_140 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, OptionData_140, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, OptionData_140, 1) = ((MR_Box) (MaybeStringValue_93));
                }
                mercury__set__insert_3_p_0(TypeInfo_for_OptionType_99, Flag_147, STATE_VARIABLE_OptionsSet_0_6, &STATE_VARIABLE_OptionsSet_70_143);
                mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_115_112_101_99_105_97_108_95_111_112_116_105_111_110_95_95_91_50_93_95_48_11_p_0(TypeInfo_for_OptionType_99, HeadVar__1_1, Flag_147, OptName_139, OptionData_140, &MaybeSpecialError_141, STATE_VARIABLE_OptionTable_0_4, &STATE_VARIABLE_OptionTable_71_144, STATE_VARIABLE_OptionsSet_70_143, &STATE_VARIABLE_OptionsSet_72_145, STATE_VARIABLE_UserData_0_8, &STATE_VARIABLE_UserData_73_146);
                if ((MaybeSpecialError_141 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word next_value_of_HeadVar__2_2 = OVs_22;
                  MR_Word next_value_of_STATE_VARIABLE_OptionTable_0_4 = STATE_VARIABLE_OptionTable_71_144;
                  MR_Word next_value_of_STATE_VARIABLE_OptionsSet_0_6 = STATE_VARIABLE_OptionsSet_72_145;
                  MR_Box next_value_of_STATE_VARIABLE_UserData_0_8 = STATE_VARIABLE_UserData_73_146;

                  // direct tailcall eliminated
                  ;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  STATE_VARIABLE_OptionTable_0_4 = next_value_of_STATE_VARIABLE_OptionTable_0_4;
                  STATE_VARIABLE_OptionsSet_0_6 = next_value_of_STATE_VARIABLE_OptionsSet_0_6;
                  STATE_VARIABLE_UserData_0_8 = next_value_of_STATE_VARIABLE_UserData_0_8;
                  continue;
                }
                else
                {
                  *HeadVar__3_3 = MaybeSpecialError_141;
                  *STATE_VARIABLE_OptionTable_5 = STATE_VARIABLE_OptionTable_71_144;
                  *STATE_VARIABLE_OptionsSet_7 = STATE_VARIABLE_OptionsSet_72_145;
                  *STATE_VARIABLE_UserData_9 = STATE_VARIABLE_UserData_73_146;
                }
              }
              break;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_115_112_101_99_105_97_108_95_111_112_116_105_111_110_95_95_91_50_93_95_48_11_p_0(
  MR_Word TypeInfo_for_OptionType_79,
  MR_Word SpecialHandler_12,
  MR_Box Flag_13,
  MR_String OptName_14,
  MR_Word OptionData_15,
  MR_Word * MaybeError_16,
  MR_Word STATE_VARIABLE_OptionTable_0_32,
  MR_Word * STATE_VARIABLE_OptionTable_33,
  MR_Word STATE_VARIABLE_OptionsSet_0_34,
  MR_Word * STATE_VARIABLE_OptionsSet_35,
  MR_Box STATE_VARIABLE_UserData_0_36,
  MR_Box * STATE_VARIABLE_UserData_37)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) SpecialHandler_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Error_20;

        {
          Error_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Error_20, 0) = Flag_13;
          MR_hl_field(1, Error_20, 1) = ((MR_Box) (OptName_14));
          MR_hl_field(1, Error_20, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeError_16 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Error_20));
        }
        *STATE_VARIABLE_OptionTable_33 = STATE_VARIABLE_OptionTable_0_32;
        *STATE_VARIABLE_OptionsSet_35 = STATE_VARIABLE_OptionsSet_0_34;
        *STATE_VARIABLE_UserData_37 = STATE_VARIABLE_UserData_0_36;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Handler_21 = ((MR_Word) ((MR_hl_field(1, SpecialHandler_12, (MR_Integer) 0))));
        MR_Word Result0_22;
        MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Handler_21, (MR_Integer) 1))));
        MR_Box conv1_Result0_22;

        succeeded = func_0(((MR_Box) (Handler_21)), Flag_13, ((MR_Box) (OptionData_15)), ((MR_Box) (STATE_VARIABLE_OptionTable_0_32)), &conv1_Result0_22);
        if (succeeded)
        {
          Result0_22 = ((MR_Word) (conv1_Result0_22));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          if (((MR_tag((MR_Word) Result0_22)) == (MR_Integer) 1))
          {
            MR_String HandlerMsg_24 = ((MR_String) ((MR_hl_field(1, Result0_22, (MR_Integer) 0))));
            MR_Word Reason_25;
            MR_Word Error_47;

            {
              Reason_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Reason_25, 0) = ((MR_Box) (HandlerMsg_24));
            }
            {
              Error_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Error_47, 0) = Flag_13;
              MR_hl_field(1, Error_47, 1) = ((MR_Box) (OptName_14));
              MR_hl_field(1, Error_47, 2) = ((MR_Box) (Reason_25));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeError_16 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_47));
            }
            *STATE_VARIABLE_OptionTable_33 = STATE_VARIABLE_OptionTable_0_32;
          }
          else
          {
            *STATE_VARIABLE_OptionTable_33 = ((MR_Word) ((MR_hl_field(0, Result0_22, (MR_Integer) 0))));
            *MaybeError_16 = (MR_Word) ((MR_Unsigned) 0U);
          }
        else
        {
          MR_Word Error_49;

          {
            Error_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Error_49, 0) = Flag_13;
            MR_hl_field(1, Error_49, 1) = ((MR_Box) (OptName_14));
            MR_hl_field(1, Error_49, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeError_16 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_49));
          }
          *STATE_VARIABLE_OptionTable_33 = STATE_VARIABLE_OptionTable_0_32;
        }
        *STATE_VARIABLE_OptionsSet_35 = STATE_VARIABLE_OptionsSet_0_34;
        *STATE_VARIABLE_UserData_37 = STATE_VARIABLE_UserData_0_36;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TrackHandler_26 = ((MR_Word) ((MR_hl_field(2, SpecialHandler_12, (MR_Integer) 0))));
        MR_Word NewOptionsSet_27;
        MR_Word Result0_63;
        MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, TrackHandler_26, (MR_Integer) 1))));
        MR_Box conv4_Result0_63;
        MR_Box conv3_NewOptionsSet_27;

        succeeded = func_2(((MR_Box) (TrackHandler_26)), Flag_13, ((MR_Box) (OptionData_15)), ((MR_Box) (STATE_VARIABLE_OptionTable_0_32)), &conv4_Result0_63, &conv3_NewOptionsSet_27);
        if (succeeded)
        {
          Result0_63 = ((MR_Word) (conv4_Result0_63));
          NewOptionsSet_27 = ((MR_Word) (conv3_NewOptionsSet_27));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Var_81 = (MR_Word) (NewOptionsSet_27);
          MR_Word Var_82 = (MR_Word) (STATE_VARIABLE_OptionsSet_0_34);
          MR_Word Var_83;

          mercury__list__merge_and_remove_dups_3_p_0(TypeInfo_for_OptionType_79, Var_81, Var_82, &Var_83);
          *STATE_VARIABLE_OptionsSet_35 = (MR_Word) (Var_83);
          if (((MR_tag((MR_Word) Result0_63)) == (MR_Integer) 1))
          {
            MR_String TrackHandlerMsg_28 = ((MR_String) ((MR_hl_field(1, Result0_63, (MR_Integer) 0))));
            MR_Word Error_53;
            MR_Word Reason_54;

            {
              Reason_54 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Reason_54, 0) = ((MR_Box) (TrackHandlerMsg_28));
            }
            {
              Error_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Error_53, 0) = Flag_13;
              MR_hl_field(1, Error_53, 1) = ((MR_Box) (OptName_14));
              MR_hl_field(1, Error_53, 2) = ((MR_Box) (Reason_54));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeError_16 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_53));
            }
            *STATE_VARIABLE_OptionTable_33 = STATE_VARIABLE_OptionTable_0_32;
          }
          else
          {
            *STATE_VARIABLE_OptionTable_33 = ((MR_Word) ((MR_hl_field(0, Result0_63, (MR_Integer) 0))));
            *MaybeError_16 = (MR_Word) ((MR_Unsigned) 0U);
          }
        }
        else
        {
          MR_Word Error_61;

          {
            Error_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Error_61, 0) = Flag_13;
            MR_hl_field(1, Error_61, 1) = ((MR_Box) (OptName_14));
            MR_hl_field(1, Error_61, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeError_16 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_61));
          }
          *STATE_VARIABLE_OptionsSet_35 = STATE_VARIABLE_OptionsSet_0_34;
          *STATE_VARIABLE_OptionTable_33 = STATE_VARIABLE_OptionTable_0_32;
        }
        *STATE_VARIABLE_UserData_37 = STATE_VARIABLE_UserData_0_36;
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word UserDataHandler_29 = ((MR_Word) ((MR_hl_field(3, SpecialHandler_12, (MR_Integer) 0))));
        MR_Box NewUserData_30;
        MR_Word Result0_78;
        MR_bool MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, UserDataHandler_29, (MR_Integer) 1))));
        MR_Box conv6_Result0_78;

        succeeded = func_5(((MR_Box) (UserDataHandler_29)), Flag_13, ((MR_Box) (OptionData_15)), ((MR_Box) (STATE_VARIABLE_OptionTable_0_32)), &conv6_Result0_78, STATE_VARIABLE_UserData_0_36, &NewUserData_30);
        if (succeeded)
        {
          Result0_78 = ((MR_Word) (conv6_Result0_78));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          if (((MR_tag((MR_Word) Result0_78)) == (MR_Integer) 1))
          {
            MR_String UserDataHandlerMsg_31 = ((MR_String) ((MR_hl_field(1, Result0_78, (MR_Integer) 0))));
            MR_Word Error_71;
            MR_Word Reason_72;

            {
              Reason_72 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Reason_72, 0) = ((MR_Box) (UserDataHandlerMsg_31));
            }
            {
              Error_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Error_71, 0) = Flag_13;
              MR_hl_field(1, Error_71, 1) = ((MR_Box) (OptName_14));
              MR_hl_field(1, Error_71, 2) = ((MR_Box) (Reason_72));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeError_16 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_71));
            }
            *STATE_VARIABLE_OptionTable_33 = STATE_VARIABLE_OptionTable_0_32;
            *STATE_VARIABLE_UserData_37 = STATE_VARIABLE_UserData_0_36;
          }
          else
          {
            *STATE_VARIABLE_OptionTable_33 = ((MR_Word) ((MR_hl_field(0, Result0_78, (MR_Integer) 0))));
            *MaybeError_16 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_UserData_37 = NewUserData_30;
          }
        else
        {
          MR_Word Error_76;

          {
            Error_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Error_76, 0) = Flag_13;
            MR_hl_field(1, Error_76, 1) = ((MR_Box) (OptName_14));
            MR_hl_field(1, Error_76, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeError_16 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_76));
          }
          *STATE_VARIABLE_UserData_37 = STATE_VARIABLE_UserData_0_36;
          *STATE_VARIABLE_OptionTable_33 = STATE_VARIABLE_OptionTable_0_32;
        }
        *STATE_VARIABLE_OptionsSet_35 = STATE_VARIABLE_OptionsSet_0_34;
      }
      break;
  }
}

void MR_CALL 
mercury__getopt__expand_file_specials_check_9_p_0(
  MR_Word TypeInfo_for_OptionType_23,
  MR_Word TypeClassInfo_for_read_file_contents_22,
  MR_Word ShortOptionPred_10,
  MR_Word LongOptionPred_11,
  MR_Word OptionTable_12,
  MR_Word OVs_13,
  MR_Word SeenFileNames_14,
  MR_Word * MaybeError_15,
  MR_Word * NFSOVs_16,
  MR_Box STATE_VARIABLE_MaybeIO_0_19,
  MR_Box * STATE_VARIABLE_MaybeIO_20)
{
  MR_Word TypeInfo_25_25;
  MR_Word NFSOVsCord_18;

  mercury__getopt__expand_file_specials_loop_10_p_0(TypeInfo_for_OptionType_23, TypeClassInfo_for_read_file_contents_22, ShortOptionPred_10, LongOptionPred_11, OptionTable_12, OVs_13, SeenFileNames_14, MaybeError_15, (MR_Word) ((MR_Unsigned) 0U), &NFSOVsCord_18, STATE_VARIABLE_MaybeIO_0_19, STATE_VARIABLE_MaybeIO_20);
  {
    TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_25_25, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
    MR_hl_field(0, TypeInfo_25_25, 1) = ((MR_Box) (TypeInfo_for_OptionType_23));
  }
  if ((NFSOVsCord_18 == (MR_Word) ((MR_Unsigned) 0U)))
    *NFSOVs_16 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word N_26 = ((MR_Word) ((MR_hl_field(1, NFSOVsCord_18, (MR_Integer) 0))));
    MR_Word Var_27;
    MR_Word conv0_NFSOVs_16;

    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (N_26));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    conv0_NFSOVs_16 = mercury__getopt__go_cord_to_list_2_2_f_0(TypeInfo_25_25, (MR_Word) (Var_27), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)));
    *NFSOVs_16 = (MR_Word) (conv0_NFSOVs_16);
  }
}

static MR_Word MR_CALL 
mercury__getopt__go_cord_to_list_2_2_f_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_Word L_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      L_3 = HeadVar__2_2;
    else
    {
      MR_Word N_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Ns_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) N_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box X_9 = (MR_hl_field(0, N_5, (MR_Integer) 0));
            MR_Word Var_15;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_HeadVar__2_2;

            {
              Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_15, 0) = X_9;
              MR_hl_field(1, Var_15, 1) = ((MR_Box) (HeadVar__2_2));
            }
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Ns_6;
            next_value_of_HeadVar__2_2 = Var_15;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box H_10 = (MR_hl_field(1, N_5, (MR_Integer) 0));
            MR_Word T_11 = ((MR_Word) ((MR_hl_field(1, N_5, (MR_Integer) 1))));
            MR_Word TL0_12;
            MR_Word Var_16;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_HeadVar__2_2;

            TL0_12 = mercury__list__inst_preserving_append_2_f_0(TypeInfo_for_T_19, T_11, HeadVar__2_2);
            {
              Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_16, 0) = H_10;
              MR_hl_field(1, Var_16, 1) = ((MR_Box) (TL0_12));
            }
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Ns_6;
            next_value_of_HeadVar__2_2 = Var_16;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word A_13 = ((MR_Word) ((MR_hl_field(2, N_5, (MR_Integer) 0))));
            MR_Word B_14 = ((MR_Word) ((MR_hl_field(2, N_5, (MR_Integer) 1))));
            MR_Word Var_17;
            MR_Word Var_18;
            MR_Word next_value_of_HeadVar__1_1;

            {
              Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_18, 0) = ((MR_Box) (A_13));
              MR_hl_field(1, Var_18, 1) = ((MR_Box) (Ns_6));
            }
            {
              Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_17, 0) = ((MR_Box) (B_14));
              MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_18));
            }
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Var_17;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
      }
    }
    return L_3;
    break;
  }
}

void MR_CALL 
mercury__getopt__expand_file_specials_loop_10_p_0(
  MR_Word TypeInfo_for_OptionType_85,
  MR_Word TypeClassInfo_for_read_file_contents_84,
  MR_Word ShortOptionPred_1,
  MR_Word LongOptionPred_2,
  MR_Word OptionTable_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_NFSOVsCord_0_7,
  MR_Word * STATE_VARIABLE_NFSOVsCord_8,
  MR_Box STATE_VARIABLE_MaybeIO_0_9,
  MR_Box * STATE_VARIABLE_MaybeIO_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_MaybeIO_10 = STATE_VARIABLE_MaybeIO_0_9;
      *STATE_VARIABLE_NFSOVsCord_8 = STATE_VARIABLE_NFSOVsCord_0_7;
    }
    else
    {
      MR_Word OV0_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word OVs0_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) OV0_24)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word STATE_VARIABLE_NFSOVsCord_76_76;
            MR_Word next_value_of_HeadVar__4_4;
            MR_Word next_value_of_STATE_VARIABLE_NFSOVsCord_0_7;

            if ((STATE_VARIABLE_NFSOVsCord_0_7 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_92;

              {
                Var_92 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_92, 0) = ((MR_Box) (OV0_24));
              }
              {
                STATE_VARIABLE_NFSOVsCord_76_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_NFSOVsCord_76_76, 0) = ((MR_Box) (Var_92));
              }
            }
            else
            {
              MR_Word N_91 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_NFSOVsCord_0_7, (MR_Integer) 0))));
              MR_Word Var_93;
              MR_Word Var_94;

              {
                Var_94 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_94, 0) = ((MR_Box) (OV0_24));
              }
              {
                Var_93 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_93, 0) = ((MR_Box) (N_91));
                MR_hl_field(2, Var_93, 1) = ((MR_Box) (Var_94));
              }
              {
                STATE_VARIABLE_NFSOVsCord_76_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_NFSOVsCord_76_76, 0) = ((MR_Box) (Var_93));
              }
            }
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__4_4 = OVs0_25;
            next_value_of_STATE_VARIABLE_NFSOVsCord_0_7 = STATE_VARIABLE_NFSOVsCord_76_76;
            HeadVar__4_4 = next_value_of_HeadVar__4_4;
            STATE_VARIABLE_NFSOVsCord_0_7 = next_value_of_STATE_VARIABLE_NFSOVsCord_0_7;
            continue;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, OV0_24, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
            case (MR_Integer) 6:
            case (MR_Integer) 7:
            case (MR_Integer) 8:
              {
                MR_Word STATE_VARIABLE_NFSOVsCord_76_76;
                MR_Word next_value_of_HeadVar__4_4;
                MR_Word next_value_of_STATE_VARIABLE_NFSOVsCord_0_7;

                if ((STATE_VARIABLE_NFSOVsCord_0_7 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_92;

                  {
                    Var_92 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_92, 0) = ((MR_Box) (OV0_24));
                  }
                  {
                    STATE_VARIABLE_NFSOVsCord_76_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_NFSOVsCord_76_76, 0) = ((MR_Box) (Var_92));
                  }
                }
                else
                {
                  MR_Word N_91 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_NFSOVsCord_0_7, (MR_Integer) 0))));
                  MR_Word Var_93;
                  MR_Word Var_94;

                  {
                    Var_94 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_94, 0) = ((MR_Box) (OV0_24));
                  }
                  {
                    Var_93 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_93, 0) = ((MR_Box) (N_91));
                    MR_hl_field(2, Var_93, 1) = ((MR_Box) (Var_94));
                  }
                  {
                    STATE_VARIABLE_NFSOVsCord_76_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_NFSOVsCord_76_76, 0) = ((MR_Box) (Var_93));
                  }
                }
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__4_4 = OVs0_25;
                next_value_of_STATE_VARIABLE_NFSOVsCord_0_7 = STATE_VARIABLE_NFSOVsCord_76_76;
                HeadVar__4_4 = next_value_of_HeadVar__4_4;
                STATE_VARIABLE_NFSOVsCord_0_7 = next_value_of_STATE_VARIABLE_NFSOVsCord_0_7;
                continue;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Box Flag_64 = (MR_hl_field(3, OV0_24, (MR_Integer) 1));
                MR_String OptName_65 = ((MR_String) ((MR_hl_field(3, OV0_24, (MR_Integer) 2))));
                MR_String FileName_66 = ((MR_String) ((MR_hl_field(3, OV0_24, (MR_Integer) 3))));
                MR_Word SeenFileNames_67;
                MR_Word Var_95 = (MR_Word) (HeadVar__5_5);
                MR_Word Var_96;

                succeeded = mercury__set_ordlist__insert_new_loop_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_95, ((MR_Box) (FileName_66)), &Var_96);
                if (succeeded)
                {
                  SeenFileNames_67 = (MR_Word) (Var_96);
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Word FileOptionsOrError_68;
                  MR_Box STATE_VARIABLE_MaybeIO_79_79;

                  mercury__getopt__expand_file_special_option_10_p_0(TypeInfo_for_OptionType_85, TypeClassInfo_for_read_file_contents_84, ShortOptionPred_1, LongOptionPred_2, OptionTable_3, SeenFileNames_67, Flag_64, OptName_65, FileName_66, &FileOptionsOrError_68, STATE_VARIABLE_MaybeIO_0_9, &STATE_VARIABLE_MaybeIO_79_79);
                  if (((MR_tag((MR_Word) FileOptionsOrError_68)) == (MR_Integer) 1))
                  {
                    MR_Word Error_70 = ((MR_Word) ((MR_hl_field(1, FileOptionsOrError_68, (MR_Integer) 0))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__6_6 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (Error_70));
                    }
                    *STATE_VARIABLE_NFSOVsCord_8 = STATE_VARIABLE_NFSOVsCord_0_7;
                    *STATE_VARIABLE_MaybeIO_10 = STATE_VARIABLE_MaybeIO_79_79;
                  }
                  else
                  {
                    MR_Word NFSFileOVsCord_69 = ((MR_Word) ((MR_hl_field(0, FileOptionsOrError_68, (MR_Integer) 0))));
                    MR_Word STATE_VARIABLE_NFSOVsCord_80_80;
                    MR_Word next_value_of_HeadVar__4_4;
                    MR_Word next_value_of_STATE_VARIABLE_NFSOVsCord_0_7;
                    MR_Box next_value_of_STATE_VARIABLE_MaybeIO_0_9;

                    if ((STATE_VARIABLE_NFSOVsCord_0_7 == (MR_Word) ((MR_Unsigned) 0U)))
                      STATE_VARIABLE_NFSOVsCord_80_80 = NFSFileOVsCord_69;
                    else
                    {
                      MR_Word Var_101 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_NFSOVsCord_0_7, (MR_Integer) 0))));

                      if ((NFSFileOVsCord_69 == (MR_Word) ((MR_Unsigned) 0U)))
                        STATE_VARIABLE_NFSOVsCord_80_80 = STATE_VARIABLE_NFSOVsCord_0_7;
                      else
                      {
                        MR_Word BN_99 = ((MR_Word) ((MR_hl_field(1, NFSFileOVsCord_69, (MR_Integer) 0))));
                        MR_Word Var_100;

                        {
                          Var_100 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, Var_100, 0) = ((MR_Box) (Var_101));
                          MR_hl_field(2, Var_100, 1) = ((MR_Box) (BN_99));
                        }
                        {
                          STATE_VARIABLE_NFSOVsCord_80_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, STATE_VARIABLE_NFSOVsCord_80_80, 0) = ((MR_Box) (Var_100));
                        }
                      }
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_HeadVar__4_4 = OVs0_25;
                    next_value_of_STATE_VARIABLE_NFSOVsCord_0_7 = STATE_VARIABLE_NFSOVsCord_80_80;
                    next_value_of_STATE_VARIABLE_MaybeIO_0_9 = STATE_VARIABLE_MaybeIO_79_79;
                    HeadVar__4_4 = next_value_of_HeadVar__4_4;
                    STATE_VARIABLE_NFSOVsCord_0_7 = next_value_of_STATE_VARIABLE_NFSOVsCord_0_7;
                    STATE_VARIABLE_MaybeIO_0_9 = next_value_of_STATE_VARIABLE_MaybeIO_0_9;
                    continue;
                  }
                }
                else
                {
                  MR_Word Reason_71;
                  MR_Word Error_83;

                  {
                    Reason_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Reason_71, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, Reason_71, 1) = ((MR_Box) (FileName_66));
                  }
                  {
                    Error_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Error_83, 0) = Flag_64;
                    MR_hl_field(1, Error_83, 1) = ((MR_Box) (OptName_65));
                    MR_hl_field(1, Error_83, 2) = ((MR_Box) (Reason_71));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__6_6 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Error_83));
                  }
                  *STATE_VARIABLE_MaybeIO_10 = STATE_VARIABLE_MaybeIO_0_9;
                  *STATE_VARIABLE_NFSOVsCord_8 = STATE_VARIABLE_NFSOVsCord_0_7;
                }
              }
              break;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__getopt__expand_file_special_option_10_p_0(
  MR_Word TypeInfo_for_OptionType_45,
  MR_Word TypeClassInfo_for_read_file_contents_44,
  MR_Word ShortOptionPred_11,
  MR_Word LongOptionPred_12,
  MR_Word OptionTable_13,
  MR_Word SeenFileNames_14,
  MR_Box Flag_15,
  MR_String OptName_16,
  MR_String FileName_17,
  MR_Word * FileOptionsOrError_18,
  MR_Box STATE_VARIABLE_MaybeIO_0_35,
  MR_Box * STATE_VARIABLE_MaybeIO_36)
{
  MR_Word ReadFromFileResult_20;
  MR_Box STATE_VARIABLE_MaybeIO_37_37;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_read_file_contents_44, (MR_Integer) 0)), (MR_Integer) 5))));
  MR_Box conv1_ReadFromFileResult_20;

  func_0(((MR_Box) (TypeClassInfo_for_read_file_contents_44)), ((MR_Box) (FileName_17)), &conv1_ReadFromFileResult_20, STATE_VARIABLE_MaybeIO_0_35, &STATE_VARIABLE_MaybeIO_37_37);
  ReadFromFileResult_20 = ((MR_Word) (conv1_ReadFromFileResult_20));
  switch (MR_tag((MR_Word) ReadFromFileResult_20)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Error_42;
        MR_Word Reason_43;

        {
          Reason_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Reason_43, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Reason_43, 1) = ((MR_Box) (FileName_17));
        }
        {
          Error_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Error_42, 0) = Flag_15;
          MR_hl_field(1, Error_42, 1) = ((MR_Box) (OptName_16));
          MR_hl_field(1, Error_42, 2) = ((MR_Box) (Reason_43));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *FileOptionsOrError_18 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Error_42));
        }
        *STATE_VARIABLE_MaybeIO_36 = STATE_VARIABLE_MaybeIO_37_37;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String Contents_21 = ((MR_String) ((MR_hl_field(1, ReadFromFileResult_20, (MR_Integer) 0))));
        MR_Word Words_22;
        MR_Word NonOptionArgs_23;
        MR_Word FileMaybeError_25;
        MR_Word FileOVs_26;
        MR_Integer Var_53;
        MR_Word _OptionArgs_24;

        mercury__getopt__skip_to_next_word_start__ho18_4_p_in__string_0(Contents_21, (MR_Integer) 0, &Var_53);
        mercury__getopt__words_loop__ho17_4_p_in__string_0(Contents_21, Var_53, &Words_22);
        mercury__getopt__record_arguments_8_p_0(TypeInfo_for_OptionType_45, ShortOptionPred_11, LongOptionPred_12, OptionTable_13, Words_22, &NonOptionArgs_23, &_OptionArgs_24, &FileMaybeError_25, &FileOVs_26);
        if ((FileMaybeError_25 == (MR_Word) ((MR_Unsigned) 0U)))
          if ((NonOptionArgs_23 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word MaybeError_27;
            MR_Word NFSOVsCord_28;

            mercury__getopt__expand_file_specials_loop_10_p_0(TypeInfo_for_OptionType_45, TypeClassInfo_for_read_file_contents_44, ShortOptionPred_11, LongOptionPred_12, OptionTable_13, FileOVs_26, SeenFileNames_14, &MaybeError_27, (MR_Word) ((MR_Unsigned) 0U), &NFSOVsCord_28, STATE_VARIABLE_MaybeIO_37_37, STATE_VARIABLE_MaybeIO_36);
            if ((MaybeError_27 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *FileOptionsOrError_18 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (NFSOVsCord_28));
              }
            else
            {
              MR_Word Error_29 = ((MR_Word) ((MR_hl_field(1, MaybeError_27, (MR_Integer) 0))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *FileOptionsOrError_18 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Error_29));
              }
            }
          }
          else
          {
            MR_Word Reason_32;
            MR_Word Error_40;

            {
              Reason_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Reason_32, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, Reason_32, 1) = ((MR_Box) (FileName_17));
            }
            {
              Error_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Error_40, 0) = Flag_15;
              MR_hl_field(1, Error_40, 1) = ((MR_Box) (OptName_16));
              MR_hl_field(1, Error_40, 2) = ((MR_Box) (Reason_32));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *FileOptionsOrError_18 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_40));
            }
            *STATE_VARIABLE_MaybeIO_36 = STATE_VARIABLE_MaybeIO_37_37;
          }
        else
        {
          MR_Word FileError_33 = ((MR_Word) ((MR_hl_field(1, FileMaybeError_25, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *FileOptionsOrError_18 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (FileError_33));
          }
          *STATE_VARIABLE_MaybeIO_36 = STATE_VARIABLE_MaybeIO_37_37;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word IO_Error_34 = ((MR_Word) ((MR_hl_field(2, ReadFromFileResult_20, (MR_Integer) 0))));
        MR_Word Error_46;
        MR_Word Reason_47;

        {
          Reason_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Reason_47, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Reason_47, 1) = ((MR_Box) (FileName_17));
          MR_hl_field(3, Reason_47, 2) = ((MR_Box) (IO_Error_34));
        }
        {
          Error_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Error_46, 0) = Flag_15;
          MR_hl_field(1, Error_46, 1) = ((MR_Box) (OptName_16));
          MR_hl_field(1, Error_46, 2) = ((MR_Box) (Reason_47));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *FileOptionsOrError_18 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Error_46));
        }
        *STATE_VARIABLE_MaybeIO_36 = STATE_VARIABLE_MaybeIO_37_37;
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word IO_Error_41 = ((MR_Word) ((MR_hl_field(3, ReadFromFileResult_20, (MR_Integer) 0))));
        MR_Word Error_48;
        MR_Word Reason_49;

        {
          Reason_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Reason_49, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Reason_49, 1) = ((MR_Box) (FileName_17));
          MR_hl_field(3, Reason_49, 2) = ((MR_Box) (IO_Error_41));
        }
        {
          Error_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Error_48, 0) = Flag_15;
          MR_hl_field(1, Error_48, 1) = ((MR_Box) (OptName_16));
          MR_hl_field(1, Error_48, 2) = ((MR_Box) (Reason_49));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *FileOptionsOrError_18 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Error_48));
        }
        *STATE_VARIABLE_MaybeIO_36 = STATE_VARIABLE_MaybeIO_37_37;
      }
      break;
  }
}

static void MR_CALL 
mercury__getopt__words_loop__ho17_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Word * HeadVar__4_8)
{
  MR_bool succeeded;
  MR_Integer Var_9;

  mercury__getopt__skip_to_word_end__ho19_4_p_in__string_0(HeadVar__2_6, HeadVar__3_7, &Var_9);
  succeeded = (Var_9 == HeadVar__3_7);
  if (succeeded)
    *HeadVar__4_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String Var_10;
    MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__getopt__words_loop__ho17_4_p_in__string_0

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
    mercury__getopt__skip_to_next_word_start__ho18_4_p_in__string_0(HeadVar__2_6, Var_9, &Var_11);
    succeeded = (Var_9 == Var_11);
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_10));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    else
    {
      MR_Word * AddrSCCcallarg_13_14;

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_10));
        MR_hl_field(1, base, 1) = NULL;
      }
      AddrSCCcallarg_13_14 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_8, (MR_Integer) 1)));
      mercury__getopt__LCMC__pred__words_loop__ho17__1_4_p_0(HeadVar__2_6, Var_11, AddrSCCcallarg_13_14);
    }
  }
}

static void MR_CALL 
mercury__getopt__LCMC__pred__words_loop__ho17__1_4_p_0(
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
    mercury__getopt__skip_to_word_end__ho19_4_p_in__string_0(HeadVar__2_6, HeadVar__3_7, &Var_9);
    succeeded = (Var_9 == HeadVar__3_7);
    if (succeeded)
      *AddrOfHeadVar__4_15 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String Var_10;
      MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__getopt__LCMC__pred__words_loop__ho17__1_4_p_0

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
      mercury__getopt__skip_to_next_word_start__ho18_4_p_in__string_0(HeadVar__2_6, Var_9, &Var_11);
      succeeded = (Var_9 == Var_11);
      if (succeeded)
      {
        MR_Word HeadVar__4_16;

        {
          HeadVar__4_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__4_16, 0) = ((MR_Box) (Var_10));
          MR_hl_field(1, HeadVar__4_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *AddrOfHeadVar__4_15 = HeadVar__4_16;
      }
      else
      {
        MR_Word * AddrSCCcallarg_13_14;
        MR_Word HeadVar__4_17;
        MR_Integer next_value_of_HeadVar__3_7;
        MR_Word * next_value_of_AddrOfHeadVar__4_15;

        {
          HeadVar__4_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__4_17, 0) = ((MR_Box) (Var_10));
          MR_hl_field(1, HeadVar__4_17, 1) = NULL;
        }
        AddrSCCcallarg_13_14 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_17, (MR_Integer) 1)));
        *AddrOfHeadVar__4_15 = HeadVar__4_17;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_7 = Var_11;
        next_value_of_AddrOfHeadVar__4_15 = AddrSCCcallarg_13_14;
        HeadVar__3_7 = next_value_of_HeadVar__3_7;
        AddrOfHeadVar__4_15 = next_value_of_AddrOfHeadVar__4_15;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__getopt__skip_to_word_end__ho19_4_p_in__string_0(
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
    MR_Integer Var_12;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__getopt__skip_to_word_end__ho19_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = HeadVar__2_6 ;
	Index = HeadVar__3_7 ;
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
	Var_9  = NextIndex;
	Var_10  = Ch;
	Var_12  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (Var_12 == (MR_Integer) -1);
      if (succeeded)
        Var_11 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t Var_13;

{
#define MR_PROC_LABEL mercury__getopt__skip_to_word_end__ho19_4_p_in__string_0

	MR_Integer I;
	uint8_t U8;

	I = Var_12 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	Var_13  = U8;
}
        {
          Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_11, 0) = ((MR_Box) (MR_Word) (Var_13));
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
mercury__getopt__skip_to_next_word_start__ho18_4_p_in__string_0(
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
    MR_Integer Var_14;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__getopt__skip_to_next_word_start__ho18_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = HeadVar__2_6 ;
	Index = HeadVar__3_7 ;
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
	Var_14  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (Var_14 == (MR_Integer) -1);
      if (succeeded)
        Var_12 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t Var_15;

{
#define MR_PROC_LABEL mercury__getopt__skip_to_next_word_start__ho18_4_p_in__string_0

	MR_Integer I;
	uint8_t U8;

	I = Var_14 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	Var_15  = U8;
}
        {
          Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_12, 0) = ((MR_Box) (MR_Word) (Var_15));
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

void MR_CALL 
mercury__getopt__record_arguments_8_p_0(
  MR_Word TypeInfo_for_OptionType_21,
  MR_Word ShortOptionPred_9,
  MR_Word LongOptionPred_10,
  MR_Word OptionTable_11,
  MR_Word Args_12,
  MR_Word * NonOptionArgs_13,
  MR_Word * OptionArgs_14,
  MR_Word * MaybeError_15,
  MR_Word * OptionValues_16)
{
  MR_Word TypeInfo_23_23;
  MR_Word RevOptionArgs_17;
  MR_Word OptionValuesCord_18;
  MR_Word conv0_OptionValues_16;

  {
    TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_23_23, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
    MR_hl_field(0, TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_OptionType_21));
  }
  mercury__getopt__record_arguments_loop_10_p_0(TypeInfo_for_OptionType_21, ShortOptionPred_9, LongOptionPred_10, OptionTable_11, Args_12, NonOptionArgs_13, (MR_Word) ((MR_Unsigned) 0U), &RevOptionArgs_17, MaybeError_15, (MR_Word) ((MR_Unsigned) 0U), &OptionValuesCord_18);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevOptionArgs_17, OptionArgs_14);
  conv0_OptionValues_16 = mercury__cord__to_list_1_f_0(TypeInfo_23_23, (MR_Word) (OptionValuesCord_18));
  *OptionValues_16 = (MR_Word) (conv0_OptionValues_16);
}

void MR_CALL 
mercury__getopt__record_arguments_loop_10_p_0(
  MR_Word TypeInfo_for_OptionType_110,
  MR_Word ShortOptionPred_1,
  MR_Word LongOptionPred_2,
  MR_Word OptionTable_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_RevOptionArgs_0_6,
  MR_Word * STATE_VARIABLE_RevOptionArgs_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_OptionValues_0_9,
  MR_Word * STATE_VARIABLE_OptionValues_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_OptionValues_10 = STATE_VARIABLE_OptionValues_0_9;
      *STATE_VARIABLE_RevOptionArgs_7 = STATE_VARIABLE_RevOptionArgs_0_6;
    }
    else
    {
      MR_String Arg0_23 = ((MR_String) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Args0_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));

      succeeded = (strcmp(Arg0_23, (MR_String) "--") == 0);
      if (succeeded)
      {
        *HeadVar__5_5 = Args0_24;
        *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_OptionValues_10 = STATE_VARIABLE_OptionValues_0_9;
        *STATE_VARIABLE_RevOptionArgs_7 = STATE_VARIABLE_RevOptionArgs_0_6;
      }
      else
      {
        MR_String LongOption_29;

        succeeded = mercury__string__append_3_p_1((MR_String) "--no-", &LongOption_29, Arg0_23);
        if (succeeded)
        {
          MR_Box Flag_30;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, LongOptionPred_2, (MR_Integer) 1))));

          succeeded = func_0(((MR_Box) (LongOptionPred_2)), ((MR_Box) (LongOption_29)), &Flag_30);
          if (succeeded)
          {
            MR_String OptName_31;
            MR_Word NegMaybeError_32;
            MR_Word STATE_VARIABLE_OptionValues_57_57;

            mercury__string__append_3_p_2((MR_String) "--", LongOption_29, &OptName_31);
            mercury__getopt__record_negated_option_6_p_0(TypeInfo_for_OptionType_110, OptionTable_3, Flag_30, OptName_31, &NegMaybeError_32, STATE_VARIABLE_OptionValues_0_9, &STATE_VARIABLE_OptionValues_57_57);
            if ((NegMaybeError_32 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word STATE_VARIABLE_RevOptionArgs_58_58;
              MR_Word next_value_of_HeadVar__4_4;
              MR_Word next_value_of_STATE_VARIABLE_RevOptionArgs_0_6;
              MR_Word next_value_of_STATE_VARIABLE_OptionValues_0_9;

              {
                STATE_VARIABLE_RevOptionArgs_58_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevOptionArgs_58_58, 0) = ((MR_Box) (Arg0_23));
                MR_hl_field(1, STATE_VARIABLE_RevOptionArgs_58_58, 1) = ((MR_Box) (STATE_VARIABLE_RevOptionArgs_0_6));
              }
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__4_4 = Args0_24;
              next_value_of_STATE_VARIABLE_RevOptionArgs_0_6 = STATE_VARIABLE_RevOptionArgs_58_58;
              next_value_of_STATE_VARIABLE_OptionValues_0_9 = STATE_VARIABLE_OptionValues_57_57;
              HeadVar__4_4 = next_value_of_HeadVar__4_4;
              STATE_VARIABLE_RevOptionArgs_0_6 = next_value_of_STATE_VARIABLE_RevOptionArgs_0_6;
              STATE_VARIABLE_OptionValues_0_9 = next_value_of_STATE_VARIABLE_OptionValues_0_9;
              continue;
            }
            else
            {
              *HeadVar__8_8 = NegMaybeError_32;
              *HeadVar__5_5 = Args0_24;
              *STATE_VARIABLE_RevOptionArgs_7 = STATE_VARIABLE_RevOptionArgs_0_6;
              *STATE_VARIABLE_OptionValues_10 = STATE_VARIABLE_OptionValues_57_57;
            }
          }
          else
          {
            MR_Word Error_34;

            {
              Error_34 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Error_34, 0) = ((MR_Box) (Arg0_23));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__8_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_34));
            }
            *HeadVar__5_5 = Args0_24;
            *STATE_VARIABLE_OptionValues_10 = STATE_VARIABLE_OptionValues_0_9;
            *STATE_VARIABLE_RevOptionArgs_7 = STATE_VARIABLE_RevOptionArgs_0_6;
          }
        }
        else
        {
          MR_String LongOptionStr_35;

          succeeded = mercury__string__append_3_p_1((MR_String) "--", &LongOptionStr_35, Arg0_23);
          if (succeeded)
          {
            MR_Word MaybeArg_39;
            MR_String LongOption_98;
            MR_String OptName_100;
            MR_Integer OptionLen_36;
            MR_Box Flag_96;
            MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *);

            succeeded = mercury__string__sub_string_search_start_4_p_0(LongOptionStr_35, (MR_String) "=", (MR_Integer) 0, &OptionLen_36);
            if (succeeded)
            {
              MR_String EqualOptionArg_37;
              MR_String OptionArg_38;

              mercury__string__split_4_p_0(LongOptionStr_35, OptionLen_36, &LongOption_98, &EqualOptionArg_37);
              succeeded = mercury__string__first_char_3_p_2(EqualOptionArg_37, (MR_Char) 61, &OptionArg_38);
              if (succeeded)
                {
                  MaybeArg_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybeArg_39, 0) = ((MR_Box) (OptionArg_38));
                }
              else
                {
                  mercury__require__error_1_p_0((MR_String) "bad split of --longoption=arg");
                  return;
                }
            }
            else
            {
              LongOption_98 = LongOptionStr_35;
              MaybeArg_39 = (MR_Word) ((MR_Unsigned) 0U);
            }
            mercury__string__append_3_p_2((MR_String) "--", LongOption_98, &OptName_100);
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, LongOptionPred_2, (MR_Integer) 1))));
            succeeded = func_1(((MR_Box) (LongOptionPred_2)), ((MR_Box) (LongOption_98)), &Flag_96);
            if (succeeded)
            {
              MR_Word OptionData_40;
              MR_Box conv2_OptionData_40;

              succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_OptionType_110, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_3, Flag_96, &conv2_OptionData_40);
              if (succeeded)
              {
                OptionData_40 = ((MR_Word) (conv2_OptionData_40));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word Args1_41;
                MR_Word LongMaybeError_42;
                MR_Word STATE_VARIABLE_RevOptionArgs_66_66;
                MR_Word STATE_VARIABLE_RevOptionArgs_67_67;
                MR_Word STATE_VARIABLE_OptionValues_68_68;

                {
                  STATE_VARIABLE_RevOptionArgs_66_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevOptionArgs_66_66, 0) = ((MR_Box) (Arg0_23));
                  MR_hl_field(1, STATE_VARIABLE_RevOptionArgs_66_66, 1) = ((MR_Box) (STATE_VARIABLE_RevOptionArgs_0_6));
                }
                mercury__getopt__record_unnegated_long_option_11_p_0(TypeInfo_for_OptionType_110, Flag_96, OptName_100, OptionData_40, MaybeArg_39, Args0_24, &Args1_41, STATE_VARIABLE_RevOptionArgs_66_66, &STATE_VARIABLE_RevOptionArgs_67_67, &LongMaybeError_42, STATE_VARIABLE_OptionValues_0_9, &STATE_VARIABLE_OptionValues_68_68);
                if ((LongMaybeError_42 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word next_value_of_HeadVar__4_4 = Args1_41;
                  MR_Word next_value_of_STATE_VARIABLE_RevOptionArgs_0_6 = STATE_VARIABLE_RevOptionArgs_67_67;
                  MR_Word next_value_of_STATE_VARIABLE_OptionValues_0_9 = STATE_VARIABLE_OptionValues_68_68;

                  // direct tailcall eliminated
                  ;
                  HeadVar__4_4 = next_value_of_HeadVar__4_4;
                  STATE_VARIABLE_RevOptionArgs_0_6 = next_value_of_STATE_VARIABLE_RevOptionArgs_0_6;
                  STATE_VARIABLE_OptionValues_0_9 = next_value_of_STATE_VARIABLE_OptionValues_0_9;
                  continue;
                }
                else
                {
                  *HeadVar__8_8 = LongMaybeError_42;
                  *HeadVar__5_5 = Args0_24;
                  *STATE_VARIABLE_RevOptionArgs_7 = STATE_VARIABLE_RevOptionArgs_67_67;
                  *STATE_VARIABLE_OptionValues_10 = STATE_VARIABLE_OptionValues_68_68;
                }
              }
              else
              {
                MR_Word Error_93;

                {
                  Error_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Error_93, 0) = Flag_96;
                  MR_hl_field(1, Error_93, 1) = ((MR_Box) (Arg0_23));
                  MR_hl_field(1, Error_93, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__8_8 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Error_93));
                }
                *HeadVar__5_5 = Args0_24;
                *STATE_VARIABLE_OptionValues_10 = STATE_VARIABLE_OptionValues_0_9;
                *STATE_VARIABLE_RevOptionArgs_7 = STATE_VARIABLE_RevOptionArgs_0_6;
              }
            }
            else
            {
              MR_Word Error_95;

              {
                Error_95 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Error_95, 0) = ((MR_Box) (OptName_100));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__8_8 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Error_95));
              }
              *HeadVar__5_5 = Args0_24;
              *STATE_VARIABLE_OptionValues_10 = STATE_VARIABLE_OptionValues_0_9;
              *STATE_VARIABLE_RevOptionArgs_7 = STATE_VARIABLE_RevOptionArgs_0_6;
            }
          }
          else
          {
            MR_String ShortOptions_44;

            succeeded = mercury__string__first_char_3_p_2(Arg0_23, (MR_Char) 45, &ShortOptions_44);
            if (succeeded)
            {
              succeeded = (strcmp(ShortOptions_44, (MR_String) "") == 0);
              succeeded = !(succeeded);
            }
            if (succeeded)
            {
              MR_Word ShortOptionsList_45;
              MR_Integer Var_113;
              MR_Char SingleShortOpt_46;
              MR_Word Var_73;
              MR_Char Var_74;
              MR_Word Var_75;

{
#define MR_PROC_LABEL mercury__getopt__record_arguments_loop_10_p_0

	MR_String Str;
	MR_Integer Length;

	Str = ShortOptions_44 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_113  = Length;
}
              mercury__string__do_to_char_list_loop_4_p_0(ShortOptions_44, Var_113, (MR_Word) ((MR_Unsigned) 0U), &ShortOptionsList_45);
              succeeded = (ShortOptionsList_45 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SingleShortOpt_46 = ((MR_Char) (MR_Word) (MR_hl_field(1, ShortOptionsList_45, (MR_Integer) 0)));
                Var_73 = ((MR_Word) ((MR_hl_field(1, ShortOptionsList_45, (MR_Integer) 1))));
                succeeded = (Var_73 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_74 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_73, (MR_Integer) 0)));
                  Var_75 = ((MR_Word) ((MR_hl_field(1, Var_73, (MR_Integer) 1))));
                  succeeded = (Var_74 == (MR_Char) 45);
                  if (succeeded)
                    succeeded = (Var_75 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Box Flag_105;
                MR_bool MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, ShortOptionPred_1, (MR_Integer) 1))));

                succeeded = func_3(((MR_Box) (ShortOptionPred_1)), ((MR_Box) (MR_Word) (SingleShortOpt_46)), &Flag_105);
                if (succeeded)
                {
                  MR_Word Var_76;
                  MR_Word Var_78;
                  MR_Word STATE_VARIABLE_OptionValues_80_80;
                  MR_String OptName_102;
                  MR_Word NegMaybeError_103;

                  {
                    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_78, 0) = ((MR_Box) (MR_Word) (SingleShortOpt_46));
                    MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
                    MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_78));
                  }
                  mercury__string__from_char_list_2_p_0(Var_76, &OptName_102);
                  mercury__getopt__record_negated_option_6_p_0(TypeInfo_for_OptionType_110, OptionTable_3, Flag_105, OptName_102, &NegMaybeError_103, STATE_VARIABLE_OptionValues_0_9, &STATE_VARIABLE_OptionValues_80_80);
                  if ((NegMaybeError_103 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word STATE_VARIABLE_RevOptionArgs_81_81;
                    MR_Word next_value_of_HeadVar__4_4;
                    MR_Word next_value_of_STATE_VARIABLE_RevOptionArgs_0_6;
                    MR_Word next_value_of_STATE_VARIABLE_OptionValues_0_9;

                    {
                      STATE_VARIABLE_RevOptionArgs_81_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, STATE_VARIABLE_RevOptionArgs_81_81, 0) = ((MR_Box) (Arg0_23));
                      MR_hl_field(1, STATE_VARIABLE_RevOptionArgs_81_81, 1) = ((MR_Box) (STATE_VARIABLE_RevOptionArgs_0_6));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_HeadVar__4_4 = Args0_24;
                    next_value_of_STATE_VARIABLE_RevOptionArgs_0_6 = STATE_VARIABLE_RevOptionArgs_81_81;
                    next_value_of_STATE_VARIABLE_OptionValues_0_9 = STATE_VARIABLE_OptionValues_80_80;
                    HeadVar__4_4 = next_value_of_HeadVar__4_4;
                    STATE_VARIABLE_RevOptionArgs_0_6 = next_value_of_STATE_VARIABLE_RevOptionArgs_0_6;
                    STATE_VARIABLE_OptionValues_0_9 = next_value_of_STATE_VARIABLE_OptionValues_0_9;
                    continue;
                  }
                  else
                  {
                    *HeadVar__8_8 = NegMaybeError_103;
                    *HeadVar__5_5 = Args0_24;
                    *STATE_VARIABLE_RevOptionArgs_7 = STATE_VARIABLE_RevOptionArgs_0_6;
                    *STATE_VARIABLE_OptionValues_10 = STATE_VARIABLE_OptionValues_80_80;
                  }
                }
                else
                {
                  MR_String Var_84;
                  MR_Word Error_104;

                  mercury__string__append_3_p_2((MR_String) "-", ShortOptions_44, &Var_84);
                  {
                    Error_104 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Error_104, 0) = ((MR_Box) (Var_84));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__8_8 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Error_104));
                  }
                  *HeadVar__5_5 = Args0_24;
                  *STATE_VARIABLE_OptionValues_10 = STATE_VARIABLE_OptionValues_0_9;
                  *STATE_VARIABLE_RevOptionArgs_7 = STATE_VARIABLE_RevOptionArgs_0_6;
                }
              }
              else
              {
                MR_Word ShortMaybeError_48;
                MR_Word STATE_VARIABLE_RevOptionArgs_86_86;
                MR_Word STATE_VARIABLE_RevOptionArgs_87_87;
                MR_Word STATE_VARIABLE_OptionValues_88_88;
                MR_Word Args1_109;

                {
                  STATE_VARIABLE_RevOptionArgs_86_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevOptionArgs_86_86, 0) = ((MR_Box) (Arg0_23));
                  MR_hl_field(1, STATE_VARIABLE_RevOptionArgs_86_86, 1) = ((MR_Box) (STATE_VARIABLE_RevOptionArgs_0_6));
                }
                mercury__getopt__record_unnegated_short_options_10_p_0(TypeInfo_for_OptionType_110, ShortOptionPred_1, OptionTable_3, ShortOptionsList_45, Args0_24, &Args1_109, STATE_VARIABLE_RevOptionArgs_86_86, &STATE_VARIABLE_RevOptionArgs_87_87, &ShortMaybeError_48, STATE_VARIABLE_OptionValues_0_9, &STATE_VARIABLE_OptionValues_88_88);
                if ((ShortMaybeError_48 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word next_value_of_HeadVar__4_4 = Args1_109;
                  MR_Word next_value_of_STATE_VARIABLE_RevOptionArgs_0_6 = STATE_VARIABLE_RevOptionArgs_87_87;
                  MR_Word next_value_of_STATE_VARIABLE_OptionValues_0_9 = STATE_VARIABLE_OptionValues_88_88;

                  // direct tailcall eliminated
                  ;
                  HeadVar__4_4 = next_value_of_HeadVar__4_4;
                  STATE_VARIABLE_RevOptionArgs_0_6 = next_value_of_STATE_VARIABLE_RevOptionArgs_0_6;
                  STATE_VARIABLE_OptionValues_0_9 = next_value_of_STATE_VARIABLE_OptionValues_0_9;
                  continue;
                }
                else
                {
                  *HeadVar__8_8 = ShortMaybeError_48;
                  *HeadVar__5_5 = Args0_24;
                  *STATE_VARIABLE_RevOptionArgs_7 = STATE_VARIABLE_RevOptionArgs_87_87;
                  *STATE_VARIABLE_OptionValues_10 = STATE_VARIABLE_OptionValues_88_88;
                }
              }
            }
            else
            {
              MR_Word * AddrNonOptionArgsTail_115;

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__5_5 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Arg0_23));
                MR_hl_field(1, base, 1) = NULL;
              }
              AddrNonOptionArgsTail_115 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__5_5, (MR_Integer) 1)));
              mercury__getopt__LCMC__pred__record_arguments_loop__1_10_p_0(TypeInfo_for_OptionType_110, ShortOptionPred_1, LongOptionPred_2, OptionTable_3, Args0_24, AddrNonOptionArgsTail_115, STATE_VARIABLE_RevOptionArgs_0_6, STATE_VARIABLE_RevOptionArgs_7, HeadVar__8_8, STATE_VARIABLE_OptionValues_0_9, STATE_VARIABLE_OptionValues_10);
            }
          }
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__getopt__LCMC__pred__record_arguments_loop__1_10_p_0(
  MR_Word TypeInfo_for_OptionType_110,
  MR_Word ShortOptionPred_1,
  MR_Word LongOptionPred_2,
  MR_Word OptionTable_3,
  MR_Word HeadVar__4_4,
  MR_Word * AddrOfHeadVar__5_116,
  MR_Word STATE_VARIABLE_RevOptionArgs_0_6,
  MR_Word * STATE_VARIABLE_RevOptionArgs_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_OptionValues_0_9,
  MR_Word * STATE_VARIABLE_OptionValues_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__5_116 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_OptionValues_10 = STATE_VARIABLE_OptionValues_0_9;
      *STATE_VARIABLE_RevOptionArgs_7 = STATE_VARIABLE_RevOptionArgs_0_6;
    }
    else
    {
      MR_String Arg0_23 = ((MR_String) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Args0_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));

      succeeded = (strcmp(Arg0_23, (MR_String) "--") == 0);
      if (succeeded)
      {
        *AddrOfHeadVar__5_116 = Args0_24;
        *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_OptionValues_10 = STATE_VARIABLE_OptionValues_0_9;
        *STATE_VARIABLE_RevOptionArgs_7 = STATE_VARIABLE_RevOptionArgs_0_6;
      }
      else
      {
        MR_String LongOption_29;

        succeeded = mercury__string__append_3_p_1((MR_String) "--no-", &LongOption_29, Arg0_23);
        if (succeeded)
        {
          MR_Box Flag_30;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, LongOptionPred_2, (MR_Integer) 1))));

          succeeded = func_0(((MR_Box) (LongOptionPred_2)), ((MR_Box) (LongOption_29)), &Flag_30);
          if (succeeded)
          {
            MR_String OptName_31;
            MR_Word NegMaybeError_32;
            MR_Word STATE_VARIABLE_OptionValues_57_57;

            mercury__string__append_3_p_2((MR_String) "--", LongOption_29, &OptName_31);
            mercury__getopt__record_negated_option_6_p_0(TypeInfo_for_OptionType_110, OptionTable_3, Flag_30, OptName_31, &NegMaybeError_32, STATE_VARIABLE_OptionValues_0_9, &STATE_VARIABLE_OptionValues_57_57);
            if ((NegMaybeError_32 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word STATE_VARIABLE_RevOptionArgs_58_58;
              MR_Word next_value_of_HeadVar__4_4;
              MR_Word next_value_of_STATE_VARIABLE_RevOptionArgs_0_6;
              MR_Word next_value_of_STATE_VARIABLE_OptionValues_0_9;

              {
                STATE_VARIABLE_RevOptionArgs_58_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevOptionArgs_58_58, 0) = ((MR_Box) (Arg0_23));
                MR_hl_field(1, STATE_VARIABLE_RevOptionArgs_58_58, 1) = ((MR_Box) (STATE_VARIABLE_RevOptionArgs_0_6));
              }
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__4_4 = Args0_24;
              next_value_of_STATE_VARIABLE_RevOptionArgs_0_6 = STATE_VARIABLE_RevOptionArgs_58_58;
              next_value_of_STATE_VARIABLE_OptionValues_0_9 = STATE_VARIABLE_OptionValues_57_57;
              HeadVar__4_4 = next_value_of_HeadVar__4_4;
              STATE_VARIABLE_RevOptionArgs_0_6 = next_value_of_STATE_VARIABLE_RevOptionArgs_0_6;
              STATE_VARIABLE_OptionValues_0_9 = next_value_of_STATE_VARIABLE_OptionValues_0_9;
              continue;
            }
            else
            {
              *HeadVar__8_8 = NegMaybeError_32;
              *AddrOfHeadVar__5_116 = Args0_24;
              *STATE_VARIABLE_RevOptionArgs_7 = STATE_VARIABLE_RevOptionArgs_0_6;
              *STATE_VARIABLE_OptionValues_10 = STATE_VARIABLE_OptionValues_57_57;
            }
          }
          else
          {
            MR_Word Error_34;

            {
              Error_34 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Error_34, 0) = ((MR_Box) (Arg0_23));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__8_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_34));
            }
            *AddrOfHeadVar__5_116 = Args0_24;
            *STATE_VARIABLE_OptionValues_10 = STATE_VARIABLE_OptionValues_0_9;
            *STATE_VARIABLE_RevOptionArgs_7 = STATE_VARIABLE_RevOptionArgs_0_6;
          }
        }
        else
        {
          MR_String LongOptionStr_35;

          succeeded = mercury__string__append_3_p_1((MR_String) "--", &LongOptionStr_35, Arg0_23);
          if (succeeded)
          {
            MR_Word MaybeArg_39;
            MR_String LongOption_98;
            MR_String OptName_100;
            MR_Integer OptionLen_36;
            MR_Box Flag_96;
            MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *);

            succeeded = mercury__string__sub_string_search_start_4_p_0(LongOptionStr_35, (MR_String) "=", (MR_Integer) 0, &OptionLen_36);
            if (succeeded)
            {
              MR_String EqualOptionArg_37;
              MR_String OptionArg_38;

              mercury__string__split_4_p_0(LongOptionStr_35, OptionLen_36, &LongOption_98, &EqualOptionArg_37);
              succeeded = mercury__string__first_char_3_p_2(EqualOptionArg_37, (MR_Char) 61, &OptionArg_38);
              if (succeeded)
                {
                  MaybeArg_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybeArg_39, 0) = ((MR_Box) (OptionArg_38));
                }
              else
                {
                  mercury__require__error_1_p_0((MR_String) "bad split of --longoption=arg");
                  return;
                }
            }
            else
            {
              LongOption_98 = LongOptionStr_35;
              MaybeArg_39 = (MR_Word) ((MR_Unsigned) 0U);
            }
            mercury__string__append_3_p_2((MR_String) "--", LongOption_98, &OptName_100);
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, LongOptionPred_2, (MR_Integer) 1))));
            succeeded = func_1(((MR_Box) (LongOptionPred_2)), ((MR_Box) (LongOption_98)), &Flag_96);
            if (succeeded)
            {
              MR_Word OptionData_40;
              MR_Box conv2_OptionData_40;

              succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_OptionType_110, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_3, Flag_96, &conv2_OptionData_40);
              if (succeeded)
              {
                OptionData_40 = ((MR_Word) (conv2_OptionData_40));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word Args1_41;
                MR_Word LongMaybeError_42;
                MR_Word STATE_VARIABLE_RevOptionArgs_66_66;
                MR_Word STATE_VARIABLE_RevOptionArgs_67_67;
                MR_Word STATE_VARIABLE_OptionValues_68_68;

                {
                  STATE_VARIABLE_RevOptionArgs_66_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevOptionArgs_66_66, 0) = ((MR_Box) (Arg0_23));
                  MR_hl_field(1, STATE_VARIABLE_RevOptionArgs_66_66, 1) = ((MR_Box) (STATE_VARIABLE_RevOptionArgs_0_6));
                }
                mercury__getopt__record_unnegated_long_option_11_p_0(TypeInfo_for_OptionType_110, Flag_96, OptName_100, OptionData_40, MaybeArg_39, Args0_24, &Args1_41, STATE_VARIABLE_RevOptionArgs_66_66, &STATE_VARIABLE_RevOptionArgs_67_67, &LongMaybeError_42, STATE_VARIABLE_OptionValues_0_9, &STATE_VARIABLE_OptionValues_68_68);
                if ((LongMaybeError_42 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word next_value_of_HeadVar__4_4 = Args1_41;
                  MR_Word next_value_of_STATE_VARIABLE_RevOptionArgs_0_6 = STATE_VARIABLE_RevOptionArgs_67_67;
                  MR_Word next_value_of_STATE_VARIABLE_OptionValues_0_9 = STATE_VARIABLE_OptionValues_68_68;

                  // direct tailcall eliminated
                  ;
                  HeadVar__4_4 = next_value_of_HeadVar__4_4;
                  STATE_VARIABLE_RevOptionArgs_0_6 = next_value_of_STATE_VARIABLE_RevOptionArgs_0_6;
                  STATE_VARIABLE_OptionValues_0_9 = next_value_of_STATE_VARIABLE_OptionValues_0_9;
                  continue;
                }
                else
                {
                  *HeadVar__8_8 = LongMaybeError_42;
                  *AddrOfHeadVar__5_116 = Args0_24;
                  *STATE_VARIABLE_RevOptionArgs_7 = STATE_VARIABLE_RevOptionArgs_67_67;
                  *STATE_VARIABLE_OptionValues_10 = STATE_VARIABLE_OptionValues_68_68;
                }
              }
              else
              {
                MR_Word Error_93;

                {
                  Error_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Error_93, 0) = Flag_96;
                  MR_hl_field(1, Error_93, 1) = ((MR_Box) (Arg0_23));
                  MR_hl_field(1, Error_93, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__8_8 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Error_93));
                }
                *AddrOfHeadVar__5_116 = Args0_24;
                *STATE_VARIABLE_OptionValues_10 = STATE_VARIABLE_OptionValues_0_9;
                *STATE_VARIABLE_RevOptionArgs_7 = STATE_VARIABLE_RevOptionArgs_0_6;
              }
            }
            else
            {
              MR_Word Error_95;

              {
                Error_95 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Error_95, 0) = ((MR_Box) (OptName_100));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__8_8 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Error_95));
              }
              *AddrOfHeadVar__5_116 = Args0_24;
              *STATE_VARIABLE_OptionValues_10 = STATE_VARIABLE_OptionValues_0_9;
              *STATE_VARIABLE_RevOptionArgs_7 = STATE_VARIABLE_RevOptionArgs_0_6;
            }
          }
          else
          {
            MR_String ShortOptions_44;

            succeeded = mercury__string__first_char_3_p_2(Arg0_23, (MR_Char) 45, &ShortOptions_44);
            if (succeeded)
            {
              succeeded = (strcmp(ShortOptions_44, (MR_String) "") == 0);
              succeeded = !(succeeded);
            }
            if (succeeded)
            {
              MR_Word ShortOptionsList_45;
              MR_Integer Var_113;
              MR_Char SingleShortOpt_46;
              MR_Word Var_73;
              MR_Char Var_74;
              MR_Word Var_75;

{
#define MR_PROC_LABEL mercury__getopt__LCMC__pred__record_arguments_loop__1_10_p_0

	MR_String Str;
	MR_Integer Length;

	Str = ShortOptions_44 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_113  = Length;
}
              mercury__string__do_to_char_list_loop_4_p_0(ShortOptions_44, Var_113, (MR_Word) ((MR_Unsigned) 0U), &ShortOptionsList_45);
              succeeded = (ShortOptionsList_45 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SingleShortOpt_46 = ((MR_Char) (MR_Word) (MR_hl_field(1, ShortOptionsList_45, (MR_Integer) 0)));
                Var_73 = ((MR_Word) ((MR_hl_field(1, ShortOptionsList_45, (MR_Integer) 1))));
                succeeded = (Var_73 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_74 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_73, (MR_Integer) 0)));
                  Var_75 = ((MR_Word) ((MR_hl_field(1, Var_73, (MR_Integer) 1))));
                  succeeded = (Var_74 == (MR_Char) 45);
                  if (succeeded)
                    succeeded = (Var_75 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Box Flag_105;
                MR_bool MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, ShortOptionPred_1, (MR_Integer) 1))));

                succeeded = func_3(((MR_Box) (ShortOptionPred_1)), ((MR_Box) (MR_Word) (SingleShortOpt_46)), &Flag_105);
                if (succeeded)
                {
                  MR_Word Var_76;
                  MR_Word Var_78;
                  MR_Word STATE_VARIABLE_OptionValues_80_80;
                  MR_String OptName_102;
                  MR_Word NegMaybeError_103;

                  {
                    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_78, 0) = ((MR_Box) (MR_Word) (SingleShortOpt_46));
                    MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
                    MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_78));
                  }
                  mercury__string__from_char_list_2_p_0(Var_76, &OptName_102);
                  mercury__getopt__record_negated_option_6_p_0(TypeInfo_for_OptionType_110, OptionTable_3, Flag_105, OptName_102, &NegMaybeError_103, STATE_VARIABLE_OptionValues_0_9, &STATE_VARIABLE_OptionValues_80_80);
                  if ((NegMaybeError_103 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word STATE_VARIABLE_RevOptionArgs_81_81;
                    MR_Word next_value_of_HeadVar__4_4;
                    MR_Word next_value_of_STATE_VARIABLE_RevOptionArgs_0_6;
                    MR_Word next_value_of_STATE_VARIABLE_OptionValues_0_9;

                    {
                      STATE_VARIABLE_RevOptionArgs_81_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, STATE_VARIABLE_RevOptionArgs_81_81, 0) = ((MR_Box) (Arg0_23));
                      MR_hl_field(1, STATE_VARIABLE_RevOptionArgs_81_81, 1) = ((MR_Box) (STATE_VARIABLE_RevOptionArgs_0_6));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_HeadVar__4_4 = Args0_24;
                    next_value_of_STATE_VARIABLE_RevOptionArgs_0_6 = STATE_VARIABLE_RevOptionArgs_81_81;
                    next_value_of_STATE_VARIABLE_OptionValues_0_9 = STATE_VARIABLE_OptionValues_80_80;
                    HeadVar__4_4 = next_value_of_HeadVar__4_4;
                    STATE_VARIABLE_RevOptionArgs_0_6 = next_value_of_STATE_VARIABLE_RevOptionArgs_0_6;
                    STATE_VARIABLE_OptionValues_0_9 = next_value_of_STATE_VARIABLE_OptionValues_0_9;
                    continue;
                  }
                  else
                  {
                    *HeadVar__8_8 = NegMaybeError_103;
                    *AddrOfHeadVar__5_116 = Args0_24;
                    *STATE_VARIABLE_RevOptionArgs_7 = STATE_VARIABLE_RevOptionArgs_0_6;
                    *STATE_VARIABLE_OptionValues_10 = STATE_VARIABLE_OptionValues_80_80;
                  }
                }
                else
                {
                  MR_String Var_84;
                  MR_Word Error_104;

                  mercury__string__append_3_p_2((MR_String) "-", ShortOptions_44, &Var_84);
                  {
                    Error_104 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Error_104, 0) = ((MR_Box) (Var_84));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__8_8 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Error_104));
                  }
                  *AddrOfHeadVar__5_116 = Args0_24;
                  *STATE_VARIABLE_OptionValues_10 = STATE_VARIABLE_OptionValues_0_9;
                  *STATE_VARIABLE_RevOptionArgs_7 = STATE_VARIABLE_RevOptionArgs_0_6;
                }
              }
              else
              {
                MR_Word ShortMaybeError_48;
                MR_Word STATE_VARIABLE_RevOptionArgs_86_86;
                MR_Word STATE_VARIABLE_RevOptionArgs_87_87;
                MR_Word STATE_VARIABLE_OptionValues_88_88;
                MR_Word Args1_109;

                {
                  STATE_VARIABLE_RevOptionArgs_86_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevOptionArgs_86_86, 0) = ((MR_Box) (Arg0_23));
                  MR_hl_field(1, STATE_VARIABLE_RevOptionArgs_86_86, 1) = ((MR_Box) (STATE_VARIABLE_RevOptionArgs_0_6));
                }
                mercury__getopt__record_unnegated_short_options_10_p_0(TypeInfo_for_OptionType_110, ShortOptionPred_1, OptionTable_3, ShortOptionsList_45, Args0_24, &Args1_109, STATE_VARIABLE_RevOptionArgs_86_86, &STATE_VARIABLE_RevOptionArgs_87_87, &ShortMaybeError_48, STATE_VARIABLE_OptionValues_0_9, &STATE_VARIABLE_OptionValues_88_88);
                if ((ShortMaybeError_48 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word next_value_of_HeadVar__4_4 = Args1_109;
                  MR_Word next_value_of_STATE_VARIABLE_RevOptionArgs_0_6 = STATE_VARIABLE_RevOptionArgs_87_87;
                  MR_Word next_value_of_STATE_VARIABLE_OptionValues_0_9 = STATE_VARIABLE_OptionValues_88_88;

                  // direct tailcall eliminated
                  ;
                  HeadVar__4_4 = next_value_of_HeadVar__4_4;
                  STATE_VARIABLE_RevOptionArgs_0_6 = next_value_of_STATE_VARIABLE_RevOptionArgs_0_6;
                  STATE_VARIABLE_OptionValues_0_9 = next_value_of_STATE_VARIABLE_OptionValues_0_9;
                  continue;
                }
                else
                {
                  *HeadVar__8_8 = ShortMaybeError_48;
                  *AddrOfHeadVar__5_116 = Args0_24;
                  *STATE_VARIABLE_RevOptionArgs_7 = STATE_VARIABLE_RevOptionArgs_87_87;
                  *STATE_VARIABLE_OptionValues_10 = STATE_VARIABLE_OptionValues_88_88;
                }
              }
            }
            else
            {
              MR_Word * AddrNonOptionArgsTail_115;
              MR_Word HeadVar__5_141;
              MR_Word next_value_of_HeadVar__4_4;
              MR_Word * next_value_of_AddrOfHeadVar__5_116;

              {
                HeadVar__5_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, HeadVar__5_141, 0) = ((MR_Box) (Arg0_23));
                MR_hl_field(1, HeadVar__5_141, 1) = NULL;
              }
              AddrNonOptionArgsTail_115 = (MR_Word *) (&(MR_hl_field(1, HeadVar__5_141, (MR_Integer) 1)));
              *AddrOfHeadVar__5_116 = HeadVar__5_141;
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__4_4 = Args0_24;
              next_value_of_AddrOfHeadVar__5_116 = AddrNonOptionArgsTail_115;
              HeadVar__4_4 = next_value_of_HeadVar__4_4;
              AddrOfHeadVar__5_116 = next_value_of_AddrOfHeadVar__5_116;
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
mercury__getopt__record_unnegated_short_options_10_p_0(
  MR_Word TypeInfo_for_OptionType_68,
  MR_Word ShortOptionPred_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * Args_5,
  MR_Word STATE_VARIABLE_RevOptionArgs_0_6,
  MR_Word * STATE_VARIABLE_RevOptionArgs_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_OptionValues_0_9,
  MR_Word * STATE_VARIABLE_OptionValues_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Args_5 = HeadVar__4_4;
      *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_OptionValues_10 = STATE_VARIABLE_OptionValues_0_9;
      *STATE_VARIABLE_RevOptionArgs_7 = STATE_VARIABLE_RevOptionArgs_0_6;
    }
    else
    {
      MR_Char Opt_22 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Opts0_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Box Flag_29;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, ShortOptionPred_1, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (ShortOptionPred_1)), ((MR_Box) (MR_Word) (Opt_22)), &Flag_29);
      if (succeeded)
      {
        MR_Word OptionData_30;
        MR_Box conv1_OptionData_30;

        succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_OptionType_68, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), HeadVar__2_2, Flag_29, &conv1_OptionData_30);
        if (succeeded)
        {
          OptionData_30 = ((MR_Word) (conv1_OptionData_30));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_String OptName_31;
          MR_Word Var_45;
          MR_Word Var_47;

          {
            Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_Word) (Opt_22));
            MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
            MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_47));
          }
          mercury__string__from_char_list_2_p_0(Var_45, &OptName_31);
          switch (MR_tag((MR_Word) OptionData_30)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(OptionData_30)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word TypeInfo_15_88;
                    MR_Word STATE_VARIABLE_OptionValues_49_49;
                    MR_Word OV_86;
                    MR_Word conv10_STATE_VARIABLE_OptionValues_49_49;
                    MR_Word next_value_of_HeadVar__3_3;
                    MR_Word next_value_of_STATE_VARIABLE_OptionValues_0_9;

                    {
                      OV_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, OV_86, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(3, OV_86, 1) = Flag_29;
                      MR_hl_field(3, OV_86, 2) = ((MR_Box) (OptName_31));
                    }
                    {
                      TypeInfo_15_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, TypeInfo_15_88, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
                      MR_hl_field(0, TypeInfo_15_88, 1) = ((MR_Box) (TypeInfo_for_OptionType_68));
                    }
                    conv10_STATE_VARIABLE_OptionValues_49_49 = mercury__cord__snoc_2_f_0(TypeInfo_15_88, (MR_Word) (STATE_VARIABLE_OptionValues_0_9), ((MR_Box) (OV_86)));
                    STATE_VARIABLE_OptionValues_49_49 = (MR_Word) (conv10_STATE_VARIABLE_OptionValues_49_49);
                    // direct tailcall eliminated
                    ;
                    next_value_of_HeadVar__3_3 = Opts0_23;
                    next_value_of_STATE_VARIABLE_OptionValues_0_9 = STATE_VARIABLE_OptionValues_49_49;
                    HeadVar__3_3 = next_value_of_HeadVar__3_3;
                    STATE_VARIABLE_OptionValues_0_9 = next_value_of_STATE_VARIABLE_OptionValues_0_9;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word TypeInfo_18_133;
                    MR_Word STATE_VARIABLE_OptionValues_53_130;
                    MR_Word OV_131;
                    MR_Word conv9_STATE_VARIABLE_OptionValues_53_130;
                    MR_Word next_value_of_HeadVar__3_3;
                    MR_Word next_value_of_STATE_VARIABLE_OptionValues_0_9;

                    {
                      OV_131 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, OV_131, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(3, OV_131, 1) = Flag_29;
                      MR_hl_field(3, OV_131, 2) = ((MR_Box) (OptName_31));
                      MR_hl_field(3, OV_131, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                    }
                    {
                      TypeInfo_18_133 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, TypeInfo_18_133, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
                      MR_hl_field(0, TypeInfo_18_133, 1) = ((MR_Box) (TypeInfo_for_OptionType_68));
                    }
                    conv9_STATE_VARIABLE_OptionValues_53_130 = mercury__cord__snoc_2_f_0(TypeInfo_18_133, (MR_Word) (STATE_VARIABLE_OptionValues_0_9), ((MR_Box) (OV_131)));
                    STATE_VARIABLE_OptionValues_53_130 = (MR_Word) (conv9_STATE_VARIABLE_OptionValues_53_130);
                    // direct tailcall eliminated
                    ;
                    next_value_of_HeadVar__3_3 = Opts0_23;
                    next_value_of_STATE_VARIABLE_OptionValues_0_9 = STATE_VARIABLE_OptionValues_53_130;
                    HeadVar__3_3 = next_value_of_HeadVar__3_3;
                    STATE_VARIABLE_OptionValues_0_9 = next_value_of_STATE_VARIABLE_OptionValues_0_9;
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_String Arg_35;
                    MR_String ArgPrime_84;
                    MR_Word ArgsPrime_85;

                    succeeded = (Opts0_23 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        ArgPrime_84 = ((MR_String) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
                        ArgsPrime_85 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
                      }
                    }
                    if (succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *STATE_VARIABLE_RevOptionArgs_7 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (ArgPrime_84));
                        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevOptionArgs_0_6));
                      }
                      Arg_35 = ArgPrime_84;
                      *Args_5 = ArgsPrime_85;
                    }
                    else
                    {
                      mercury__string__from_char_list_2_p_0(Opts0_23, &Arg_35);
                      *Args_5 = HeadVar__4_4;
                      *STATE_VARIABLE_RevOptionArgs_7 = STATE_VARIABLE_RevOptionArgs_0_6;
                    }
                    mercury__getopt__record_option_int_7_p_0(TypeInfo_for_OptionType_68, OptionData_30, Flag_29, OptName_31, Arg_35, HeadVar__8_8, STATE_VARIABLE_OptionValues_0_9, STATE_VARIABLE_OptionValues_10);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word TypeInfo_22_128;
                    MR_String Arg_123;
                    MR_Word OV_126;
                    MR_String ArgPrime_121;
                    MR_Word ArgsPrime_122;
                    MR_Word conv7_STATE_VARIABLE_OptionValues_10;

                    succeeded = (Opts0_23 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        ArgPrime_121 = ((MR_String) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
                        ArgsPrime_122 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
                      }
                    }
                    if (succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *STATE_VARIABLE_RevOptionArgs_7 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (ArgPrime_121));
                        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevOptionArgs_0_6));
                      }
                      Arg_123 = ArgPrime_121;
                      *Args_5 = ArgsPrime_122;
                    }
                    else
                    {
                      mercury__string__from_char_list_2_p_0(Opts0_23, &Arg_123);
                      *Args_5 = HeadVar__4_4;
                      *STATE_VARIABLE_RevOptionArgs_7 = STATE_VARIABLE_RevOptionArgs_0_6;
                    }
                    {
                      OV_126 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, OV_126, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                      MR_hl_field(3, OV_126, 1) = Flag_29;
                      MR_hl_field(3, OV_126, 2) = ((MR_Box) (OptName_31));
                      MR_hl_field(3, OV_126, 3) = ((MR_Box) (Arg_123));
                    }
                    {
                      TypeInfo_22_128 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, TypeInfo_22_128, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
                      MR_hl_field(0, TypeInfo_22_128, 1) = ((MR_Box) (TypeInfo_for_OptionType_68));
                    }
                    conv7_STATE_VARIABLE_OptionValues_10 = mercury__cord__snoc_2_f_0(TypeInfo_22_128, (MR_Word) (STATE_VARIABLE_OptionValues_0_9), ((MR_Box) (OV_126)));
                    *STATE_VARIABLE_OptionValues_10 = (MR_Word) (conv7_STATE_VARIABLE_OptionValues_10);
                    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word TypeInfo_22_112;
                    MR_Word Var_77;
                    MR_String Arg_107;
                    MR_Word OV_110;
                    MR_String ArgPrime_105;
                    MR_Word ArgsPrime_106;
                    MR_Word conv5_STATE_VARIABLE_OptionValues_10;

                    succeeded = (Opts0_23 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        ArgPrime_105 = ((MR_String) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
                        ArgsPrime_106 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
                      }
                    }
                    if (succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *STATE_VARIABLE_RevOptionArgs_7 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (ArgPrime_105));
                        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevOptionArgs_0_6));
                      }
                      Arg_107 = ArgPrime_105;
                      *Args_5 = ArgsPrime_106;
                    }
                    else
                    {
                      mercury__string__from_char_list_2_p_0(Opts0_23, &Arg_107);
                      *Args_5 = HeadVar__4_4;
                      *STATE_VARIABLE_RevOptionArgs_7 = STATE_VARIABLE_RevOptionArgs_0_6;
                    }
                    {
                      Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_77, 0) = ((MR_Box) (Arg_107));
                    }
                    {
                      OV_110 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, OV_110, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                      MR_hl_field(3, OV_110, 1) = Flag_29;
                      MR_hl_field(3, OV_110, 2) = ((MR_Box) (OptName_31));
                      MR_hl_field(3, OV_110, 3) = ((MR_Box) (Var_77));
                    }
                    {
                      TypeInfo_22_112 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, TypeInfo_22_112, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
                      MR_hl_field(0, TypeInfo_22_112, 1) = ((MR_Box) (TypeInfo_for_OptionType_68));
                    }
                    conv5_STATE_VARIABLE_OptionValues_10 = mercury__cord__snoc_2_f_0(TypeInfo_22_112, (MR_Word) (STATE_VARIABLE_OptionValues_0_9), ((MR_Box) (OV_110)));
                    *STATE_VARIABLE_OptionValues_10 = (MR_Word) (conv5_STATE_VARIABLE_OptionValues_10);
                    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word TypeInfo_22_96;
                    MR_String Arg_91;
                    MR_Word OV_94;
                    MR_String ArgPrime_89;
                    MR_Word ArgsPrime_90;
                    MR_Word conv3_STATE_VARIABLE_OptionValues_10;

                    succeeded = (Opts0_23 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        ArgPrime_89 = ((MR_String) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
                        ArgsPrime_90 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
                      }
                    }
                    if (succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *STATE_VARIABLE_RevOptionArgs_7 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (ArgPrime_89));
                        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevOptionArgs_0_6));
                      }
                      Arg_91 = ArgPrime_89;
                      *Args_5 = ArgsPrime_90;
                    }
                    else
                    {
                      mercury__string__from_char_list_2_p_0(Opts0_23, &Arg_91);
                      *Args_5 = HeadVar__4_4;
                      *STATE_VARIABLE_RevOptionArgs_7 = STATE_VARIABLE_RevOptionArgs_0_6;
                    }
                    {
                      OV_94 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, OV_94, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                      MR_hl_field(3, OV_94, 1) = Flag_29;
                      MR_hl_field(3, OV_94, 2) = ((MR_Box) (OptName_31));
                      MR_hl_field(3, OV_94, 3) = ((MR_Box) (Arg_91));
                    }
                    {
                      TypeInfo_22_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, TypeInfo_22_96, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
                      MR_hl_field(0, TypeInfo_22_96, 1) = ((MR_Box) (TypeInfo_for_OptionType_68));
                    }
                    conv3_STATE_VARIABLE_OptionValues_10 = mercury__cord__snoc_2_f_0(TypeInfo_22_96, (MR_Word) (STATE_VARIABLE_OptionValues_0_9), ((MR_Box) (OV_94)));
                    *STATE_VARIABLE_OptionValues_10 = (MR_Word) (conv3_STATE_VARIABLE_OptionValues_10);
                    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeInfo_18_83;
                MR_Word STATE_VARIABLE_OptionValues_53_53;
                MR_Word OV_81;
                MR_Word conv8_STATE_VARIABLE_OptionValues_53_53;
                MR_Word next_value_of_HeadVar__3_3;
                MR_Word next_value_of_STATE_VARIABLE_OptionValues_0_9;

                {
                  OV_81 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, OV_81, 0) = Flag_29;
                  MR_hl_field(0, OV_81, 1) = ((MR_Box) (OptName_31));
                  MR_hl_field(0, OV_81, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                }
                {
                  TypeInfo_18_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, TypeInfo_18_83, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
                  MR_hl_field(0, TypeInfo_18_83, 1) = ((MR_Box) (TypeInfo_for_OptionType_68));
                }
                conv8_STATE_VARIABLE_OptionValues_53_53 = mercury__cord__snoc_2_f_0(TypeInfo_18_83, (MR_Word) (STATE_VARIABLE_OptionValues_0_9), ((MR_Box) (OV_81)));
                STATE_VARIABLE_OptionValues_53_53 = (MR_Word) (conv8_STATE_VARIABLE_OptionValues_53_53);
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__3_3 = Opts0_23;
                next_value_of_STATE_VARIABLE_OptionValues_0_9 = STATE_VARIABLE_OptionValues_53_53;
                HeadVar__3_3 = next_value_of_HeadVar__3_3;
                STATE_VARIABLE_OptionValues_0_9 = next_value_of_STATE_VARIABLE_OptionValues_0_9;
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String Arg_35;
                MR_String ArgPrime_84;
                MR_Word ArgsPrime_85;

                succeeded = (Opts0_23 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    ArgPrime_84 = ((MR_String) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
                    ArgsPrime_85 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
                  }
                }
                if (succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_RevOptionArgs_7 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (ArgPrime_84));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevOptionArgs_0_6));
                  }
                  Arg_35 = ArgPrime_84;
                  *Args_5 = ArgsPrime_85;
                }
                else
                {
                  mercury__string__from_char_list_2_p_0(Opts0_23, &Arg_35);
                  *Args_5 = HeadVar__4_4;
                  *STATE_VARIABLE_RevOptionArgs_7 = STATE_VARIABLE_RevOptionArgs_0_6;
                }
                mercury__getopt__record_option_int_7_p_0(TypeInfo_for_OptionType_68, OptionData_30, Flag_29, OptName_31, Arg_35, HeadVar__8_8, STATE_VARIABLE_OptionValues_0_9, STATE_VARIABLE_OptionValues_10);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, OptionData_30, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word TypeInfo_22_120;
                    MR_String Arg_115;
                    MR_Word OV_118;
                    MR_String ArgPrime_113;
                    MR_Word ArgsPrime_114;
                    MR_Word conv6_STATE_VARIABLE_OptionValues_10;

                    succeeded = (Opts0_23 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        ArgPrime_113 = ((MR_String) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
                        ArgsPrime_114 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
                      }
                    }
                    if (succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *STATE_VARIABLE_RevOptionArgs_7 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (ArgPrime_113));
                        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevOptionArgs_0_6));
                      }
                      Arg_115 = ArgPrime_113;
                      *Args_5 = ArgsPrime_114;
                    }
                    else
                    {
                      mercury__string__from_char_list_2_p_0(Opts0_23, &Arg_115);
                      *Args_5 = HeadVar__4_4;
                      *STATE_VARIABLE_RevOptionArgs_7 = STATE_VARIABLE_RevOptionArgs_0_6;
                    }
                    {
                      OV_118 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, OV_118, 0) = Flag_29;
                      MR_hl_field(2, OV_118, 1) = ((MR_Box) (OptName_31));
                      MR_hl_field(2, OV_118, 2) = ((MR_Box) (Arg_115));
                    }
                    {
                      TypeInfo_22_120 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, TypeInfo_22_120, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
                      MR_hl_field(0, TypeInfo_22_120, 1) = ((MR_Box) (TypeInfo_for_OptionType_68));
                    }
                    conv6_STATE_VARIABLE_OptionValues_10 = mercury__cord__snoc_2_f_0(TypeInfo_22_120, (MR_Word) (STATE_VARIABLE_OptionValues_0_9), ((MR_Box) (OV_118)));
                    *STATE_VARIABLE_OptionValues_10 = (MR_Word) (conv6_STATE_VARIABLE_OptionValues_10);
                    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String Arg_35;
                    MR_String ArgPrime_84;
                    MR_Word ArgsPrime_85;

                    succeeded = (Opts0_23 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        ArgPrime_84 = ((MR_String) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
                        ArgsPrime_85 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
                      }
                    }
                    if (succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *STATE_VARIABLE_RevOptionArgs_7 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (ArgPrime_84));
                        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevOptionArgs_0_6));
                      }
                      Arg_35 = ArgPrime_84;
                      *Args_5 = ArgsPrime_85;
                    }
                    else
                    {
                      mercury__string__from_char_list_2_p_0(Opts0_23, &Arg_35);
                      *Args_5 = HeadVar__4_4;
                      *STATE_VARIABLE_RevOptionArgs_7 = STATE_VARIABLE_RevOptionArgs_0_6;
                    }
                    mercury__getopt__record_option_int_7_p_0(TypeInfo_for_OptionType_68, OptionData_30, Flag_29, OptName_31, Arg_35, HeadVar__8_8, STATE_VARIABLE_OptionValues_0_9, STATE_VARIABLE_OptionValues_10);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word TypeInfo_22_104;
                    MR_Word Var_76;
                    MR_String Arg_99;
                    MR_Word OV_102;
                    MR_String ArgPrime_97;
                    MR_Word ArgsPrime_98;
                    MR_Word conv4_STATE_VARIABLE_OptionValues_10;

                    succeeded = (Opts0_23 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        ArgPrime_97 = ((MR_String) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
                        ArgsPrime_98 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
                      }
                    }
                    if (succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *STATE_VARIABLE_RevOptionArgs_7 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (ArgPrime_97));
                        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevOptionArgs_0_6));
                      }
                      Arg_99 = ArgPrime_97;
                      *Args_5 = ArgsPrime_98;
                    }
                    else
                    {
                      mercury__string__from_char_list_2_p_0(Opts0_23, &Arg_99);
                      *Args_5 = HeadVar__4_4;
                      *STATE_VARIABLE_RevOptionArgs_7 = STATE_VARIABLE_RevOptionArgs_0_6;
                    }
                    {
                      Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_76, 0) = ((MR_Box) (Arg_99));
                    }
                    {
                      OV_102 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, OV_102, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, OV_102, 1) = Flag_29;
                      MR_hl_field(3, OV_102, 2) = ((MR_Box) (OptName_31));
                      MR_hl_field(3, OV_102, 3) = ((MR_Box) (Var_76));
                    }
                    {
                      TypeInfo_22_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, TypeInfo_22_104, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
                      MR_hl_field(0, TypeInfo_22_104, 1) = ((MR_Box) (TypeInfo_for_OptionType_68));
                    }
                    conv4_STATE_VARIABLE_OptionValues_10 = mercury__cord__snoc_2_f_0(TypeInfo_22_104, (MR_Word) (STATE_VARIABLE_OptionValues_0_9), ((MR_Box) (OV_102)));
                    *STATE_VARIABLE_OptionValues_10 = (MR_Word) (conv4_STATE_VARIABLE_OptionValues_10);
                    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word TypeInfo_22_79;
                    MR_String Arg_65;
                    MR_Word OV_73;
                    MR_String ArgPrime_70;
                    MR_Word ArgsPrime_71;
                    MR_Word conv2_STATE_VARIABLE_OptionValues_10;

                    succeeded = (Opts0_23 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        ArgPrime_70 = ((MR_String) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
                        ArgsPrime_71 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
                      }
                    }
                    if (succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *STATE_VARIABLE_RevOptionArgs_7 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (ArgPrime_70));
                        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevOptionArgs_0_6));
                      }
                      Arg_65 = ArgPrime_70;
                      *Args_5 = ArgsPrime_71;
                    }
                    else
                    {
                      mercury__string__from_char_list_2_p_0(Opts0_23, &Arg_65);
                      *Args_5 = HeadVar__4_4;
                      *STATE_VARIABLE_RevOptionArgs_7 = STATE_VARIABLE_RevOptionArgs_0_6;
                    }
                    {
                      OV_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, OV_73, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, OV_73, 1) = Flag_29;
                      MR_hl_field(3, OV_73, 2) = ((MR_Box) (OptName_31));
                      MR_hl_field(3, OV_73, 3) = ((MR_Box) (Arg_65));
                    }
                    {
                      TypeInfo_22_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, TypeInfo_22_79, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
                      MR_hl_field(0, TypeInfo_22_79, 1) = ((MR_Box) (TypeInfo_for_OptionType_68));
                    }
                    conv2_STATE_VARIABLE_OptionValues_10 = mercury__cord__snoc_2_f_0(TypeInfo_22_79, (MR_Word) (STATE_VARIABLE_OptionValues_0_9), ((MR_Box) (OV_73)));
                    *STATE_VARIABLE_OptionValues_10 = (MR_Word) (conv2_STATE_VARIABLE_OptionValues_10);
                    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
              }
              break;
          }
        }
        else
        {
          MR_String OptString_39;
          MR_Word Error_40;
          MR_String Var_60;

          mercury__string__char_to_string_2_p_0(Opt_22, &OptString_39);
          *Args_5 = HeadVar__4_4;
          mercury__string__append_3_p_2((MR_String) "-", OptString_39, &Var_60);
          {
            Error_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Error_40, 0) = Flag_29;
            MR_hl_field(1, Error_40, 1) = ((MR_Box) (Var_60));
            MR_hl_field(1, Error_40, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__8_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_40));
          }
          *STATE_VARIABLE_OptionValues_10 = STATE_VARIABLE_OptionValues_0_9;
          *STATE_VARIABLE_RevOptionArgs_7 = STATE_VARIABLE_RevOptionArgs_0_6;
        }
      }
      else
      {
        MR_String Var_63;
        MR_String OptString_66;
        MR_Word Error_67;

        *Args_5 = HeadVar__4_4;
        mercury__string__char_to_string_2_p_0(Opt_22, &OptString_66);
        mercury__string__append_3_p_2((MR_String) "-", OptString_66, &Var_63);
        {
          Error_67 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Error_67, 0) = ((MR_Box) (Var_63));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__8_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Error_67));
        }
        *STATE_VARIABLE_OptionValues_10 = STATE_VARIABLE_OptionValues_0_9;
        *STATE_VARIABLE_RevOptionArgs_7 = STATE_VARIABLE_RevOptionArgs_0_6;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__getopt__record_option_int_7_p_0(
  MR_Word TypeInfo_for_OptionType_31,
  MR_Word OptionData_8,
  MR_Box Flag_9,
  MR_String OptName_10,
  MR_String Arg_11,
  MR_Word * MaybeError_12,
  MR_Word STATE_VARIABLE_OptionValues_0_18,
  MR_Word * STATE_VARIABLE_OptionValues_19)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) OptionData_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer IntValue_30;

        succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, Arg_11, &IntValue_30);
        if (succeeded)
        {
          MR_Word TypeInfo_37_37;
          MR_Word OV_29;
          MR_Word conv1_STATE_VARIABLE_OptionValues_19;

          *MaybeError_12 = (MR_Word) ((MR_Unsigned) 0U);
          {
            OV_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, OV_29, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, OV_29, 1) = Flag_9;
            MR_hl_field(3, OV_29, 2) = ((MR_Box) (OptName_10));
            MR_hl_field(3, OV_29, 3) = ((MR_Box) (IntValue_30));
          }
          {
            TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_37_37, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
            MR_hl_field(0, TypeInfo_37_37, 1) = ((MR_Box) (TypeInfo_for_OptionType_31));
          }
          conv1_STATE_VARIABLE_OptionValues_19 = mercury__cord__snoc_2_f_0(TypeInfo_37_37, (MR_Word) (STATE_VARIABLE_OptionValues_0_18), ((MR_Box) (OV_29)));
          *STATE_VARIABLE_OptionValues_19 = (MR_Word) (conv1_STATE_VARIABLE_OptionValues_19);
        }
        else
        {
          MR_Word Reason_42;
          MR_Word Error_43;

          {
            Reason_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Reason_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Reason_42, 1) = ((MR_Box) (Arg_11));
          }
          {
            Error_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Error_43, 0) = Flag_9;
            MR_hl_field(1, Error_43, 1) = ((MR_Box) (OptName_10));
            MR_hl_field(1, Error_43, 2) = ((MR_Box) (Reason_42));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeError_12 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_43));
          }
          *STATE_VARIABLE_OptionValues_19 = STATE_VARIABLE_OptionValues_0_18;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer IntValue_15;

        succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, Arg_11, &IntValue_15);
        if (succeeded)
        {
          MR_Word TypeInfo_33_33;
          MR_Word OV_16;
          MR_Word conv0_STATE_VARIABLE_OptionValues_19;

          *MaybeError_12 = (MR_Word) ((MR_Unsigned) 0U);
          {
            OV_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, OV_16, 0) = Flag_9;
            MR_hl_field(1, OV_16, 1) = ((MR_Box) (OptName_10));
            MR_hl_field(1, OV_16, 2) = ((MR_Box) (IntValue_15));
          }
          {
            TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_33_33, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
            MR_hl_field(0, TypeInfo_33_33, 1) = ((MR_Box) (TypeInfo_for_OptionType_31));
          }
          conv0_STATE_VARIABLE_OptionValues_19 = mercury__cord__snoc_2_f_0(TypeInfo_33_33, (MR_Word) (STATE_VARIABLE_OptionValues_0_18), ((MR_Box) (OV_16)));
          *STATE_VARIABLE_OptionValues_19 = (MR_Word) (conv0_STATE_VARIABLE_OptionValues_19);
        }
        else
        {
          MR_Word Reason_39;
          MR_Word Error_40;

          {
            Reason_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Reason_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Reason_39, 1) = ((MR_Box) (Arg_11));
          }
          {
            Error_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Error_40, 0) = Flag_9;
            MR_hl_field(1, Error_40, 1) = ((MR_Box) (OptName_10));
            MR_hl_field(1, Error_40, 2) = ((MR_Box) (Reason_39));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeError_12 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_40));
          }
          *STATE_VARIABLE_OptionValues_19 = STATE_VARIABLE_OptionValues_0_18;
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Integer IntValue_25;

        succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, Arg_11, &IntValue_25);
        if (succeeded)
        {
          MR_Word TypeInfo_35_35;
          MR_Word Var_21;
          MR_Word OV_24;
          MR_Word conv2_STATE_VARIABLE_OptionValues_19;

          *MaybeError_12 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_21, 0) = ((MR_Box) (IntValue_25));
          }
          {
            OV_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, OV_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, OV_24, 1) = Flag_9;
            MR_hl_field(3, OV_24, 2) = ((MR_Box) (OptName_10));
            MR_hl_field(3, OV_24, 3) = ((MR_Box) (Var_21));
          }
          {
            TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_35_35, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
            MR_hl_field(0, TypeInfo_35_35, 1) = ((MR_Box) (TypeInfo_for_OptionType_31));
          }
          conv2_STATE_VARIABLE_OptionValues_19 = mercury__cord__snoc_2_f_0(TypeInfo_35_35, (MR_Word) (STATE_VARIABLE_OptionValues_0_18), ((MR_Box) (OV_24)));
          *STATE_VARIABLE_OptionValues_19 = (MR_Word) (conv2_STATE_VARIABLE_OptionValues_19);
        }
        else
        {
          MR_Word Reason_45;
          MR_Word Error_46;

          {
            Reason_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Reason_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Reason_45, 1) = ((MR_Box) (Arg_11));
          }
          {
            Error_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Error_46, 0) = Flag_9;
            MR_hl_field(1, Error_46, 1) = ((MR_Box) (OptName_10));
            MR_hl_field(1, Error_46, 2) = ((MR_Box) (Reason_45));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeError_12 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_46));
          }
          *STATE_VARIABLE_OptionValues_19 = STATE_VARIABLE_OptionValues_0_18;
        }
      }
      break;
  }
}

static void MR_CALL 
mercury__getopt__record_unnegated_long_option_11_p_0(
  MR_Word TypeInfo_for_OptionType_46,
  MR_Box Flag_12,
  MR_String OptName_13,
  MR_Word OptionData_14,
  MR_Word MaybeOptionArg0_15,
  MR_Word Args0_16,
  MR_Word * Args1_17,
  MR_Word STATE_VARIABLE_RevOptionArgs_0_30,
  MR_Word * STATE_VARIABLE_RevOptionArgs_31,
  MR_Word * MaybeError_19,
  MR_Word STATE_VARIABLE_OptionValues_0_32,
  MR_Word * STATE_VARIABLE_OptionValues_33)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) OptionData_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OptionData_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeInfo_15_96;
            MR_Word OV_94;
            MR_Word conv11_STATE_VARIABLE_OptionValues_33;

            *Args1_17 = Args0_16;
            {
              OV_94 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, OV_94, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, OV_94, 1) = Flag_12;
              MR_hl_field(3, OV_94, 2) = ((MR_Box) (OptName_13));
            }
            {
              TypeInfo_15_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_15_96, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
              MR_hl_field(0, TypeInfo_15_96, 1) = ((MR_Box) (TypeInfo_for_OptionType_46));
            }
            conv11_STATE_VARIABLE_OptionValues_33 = mercury__cord__snoc_2_f_0(TypeInfo_15_96, (MR_Word) (STATE_VARIABLE_OptionValues_0_32), ((MR_Box) (OV_94)));
            *STATE_VARIABLE_OptionValues_33 = (MR_Word) (conv11_STATE_VARIABLE_OptionValues_33);
            if ((MaybeOptionArg0_15 == (MR_Word) ((MR_Unsigned) 0U)))
              *MaybeError_19 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_String Arg_97 = ((MR_String) ((MR_hl_field(1, MaybeOptionArg0_15, (MR_Integer) 0))));
              MR_Word ErrorReason_98;
              MR_Word Error_99;

              {
                ErrorReason_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, ErrorReason_98, 0) = ((MR_Box) (Arg_97));
              }
              {
                Error_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Error_99, 0) = Flag_12;
                MR_hl_field(1, Error_99, 1) = ((MR_Box) (OptName_13));
                MR_hl_field(1, Error_99, 2) = ((MR_Box) (ErrorReason_98));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeError_19 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Error_99));
              }
            }
            *STATE_VARIABLE_RevOptionArgs_31 = STATE_VARIABLE_RevOptionArgs_0_30;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_18_264;
            MR_Word OV_262;
            MR_Word conv7_STATE_VARIABLE_OptionValues_33;

            *Args1_17 = Args0_16;
            {
              OV_262 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, OV_262, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, OV_262, 1) = Flag_12;
              MR_hl_field(3, OV_262, 2) = ((MR_Box) (OptName_13));
              MR_hl_field(3, OV_262, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            }
            {
              TypeInfo_18_264 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_18_264, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
              MR_hl_field(0, TypeInfo_18_264, 1) = ((MR_Box) (TypeInfo_for_OptionType_46));
            }
            conv7_STATE_VARIABLE_OptionValues_33 = mercury__cord__snoc_2_f_0(TypeInfo_18_264, (MR_Word) (STATE_VARIABLE_OptionValues_0_32), ((MR_Box) (OV_262)));
            *STATE_VARIABLE_OptionValues_33 = (MR_Word) (conv7_STATE_VARIABLE_OptionValues_33);
            if ((MaybeOptionArg0_15 == (MR_Word) ((MR_Unsigned) 0U)))
              *MaybeError_19 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_String Arg_255 = ((MR_String) ((MR_hl_field(1, MaybeOptionArg0_15, (MR_Integer) 0))));
              MR_Word ErrorReason_256;
              MR_Word Error_257;

              {
                ErrorReason_256 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, ErrorReason_256, 0) = ((MR_Box) (Arg_255));
              }
              {
                Error_257 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Error_257, 0) = Flag_12;
                MR_hl_field(1, Error_257, 1) = ((MR_Box) (OptName_13));
                MR_hl_field(1, Error_257, 2) = ((MR_Box) (ErrorReason_256));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeError_19 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Error_257));
              }
            }
            *STATE_VARIABLE_RevOptionArgs_31 = STATE_VARIABLE_RevOptionArgs_0_30;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word OptionArgOrError_283;

            if ((MaybeOptionArg0_15 == (MR_Word) ((MR_Unsigned) 0U)))
              if ((Args0_16 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Error_268;

                {
                  Error_268 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Error_268, 0) = Flag_12;
                  MR_hl_field(1, Error_268, 1) = ((MR_Box) (OptName_13));
                  MR_hl_field(1, Error_268, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                }
                {
                  OptionArgOrError_283 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, OptionArgOrError_283, 0) = ((MR_Box) (Error_268));
                }
                *Args1_17 = Args0_16;
                *STATE_VARIABLE_RevOptionArgs_31 = STATE_VARIABLE_RevOptionArgs_0_30;
              }
              else
              {
                MR_String Arg_270 = ((MR_String) ((MR_hl_field(1, Args0_16, (MR_Integer) 0))));

                *Args1_17 = ((MR_Word) ((MR_hl_field(1, Args0_16, (MR_Integer) 1))));
                {
                  OptionArgOrError_283 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, OptionArgOrError_283, 0) = ((MR_Box) (Arg_270));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_RevOptionArgs_31 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Arg_270));
                  MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevOptionArgs_0_30));
                }
              }
            else
            {
              MR_String Arg_274 = ((MR_String) ((MR_hl_field(1, MaybeOptionArg0_15, (MR_Integer) 0))));

              {
                OptionArgOrError_283 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, OptionArgOrError_283, 0) = ((MR_Box) (Arg_274));
              }
              *Args1_17 = Args0_16;
              *STATE_VARIABLE_RevOptionArgs_31 = STATE_VARIABLE_RevOptionArgs_0_30;
            }
            if (((MR_tag((MR_Word) OptionArgOrError_283)) == (MR_Integer) 1))
            {
              MR_Word Error_279 = ((MR_Word) ((MR_hl_field(1, OptionArgOrError_283, (MR_Integer) 0))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeError_19 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Error_279));
              }
              *STATE_VARIABLE_OptionValues_33 = STATE_VARIABLE_OptionValues_0_32;
            }
            else
            {
              MR_String Arg_280 = ((MR_String) ((MR_hl_field(0, OptionArgOrError_283, (MR_Integer) 0))));
              MR_Integer IntValue_78;

              succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, Arg_280, &IntValue_78);
              if (succeeded)
              {
                MR_Word TypeInfo_37_84;
                MR_Word OV_77;
                MR_Word conv9_STATE_VARIABLE_OptionValues_33;

                *MaybeError_19 = (MR_Word) ((MR_Unsigned) 0U);
                {
                  OV_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, OV_77, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(3, OV_77, 1) = Flag_12;
                  MR_hl_field(3, OV_77, 2) = ((MR_Box) (OptName_13));
                  MR_hl_field(3, OV_77, 3) = ((MR_Box) (IntValue_78));
                }
                {
                  TypeInfo_37_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, TypeInfo_37_84, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
                  MR_hl_field(0, TypeInfo_37_84, 1) = ((MR_Box) (TypeInfo_for_OptionType_46));
                }
                conv9_STATE_VARIABLE_OptionValues_33 = mercury__cord__snoc_2_f_0(TypeInfo_37_84, (MR_Word) (STATE_VARIABLE_OptionValues_0_32), ((MR_Box) (OV_77)));
                *STATE_VARIABLE_OptionValues_33 = (MR_Word) (conv9_STATE_VARIABLE_OptionValues_33);
              }
              else
              {
                MR_Word Reason_89;
                MR_Word Error_90;

                {
                  Reason_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Reason_89, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, Reason_89, 1) = ((MR_Box) (Arg_280));
                }
                {
                  Error_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Error_90, 0) = Flag_12;
                  MR_hl_field(1, Error_90, 1) = ((MR_Box) (OptName_13));
                  MR_hl_field(1, Error_90, 2) = ((MR_Box) (Reason_89));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeError_19 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Error_90));
                }
                *STATE_VARIABLE_OptionValues_33 = STATE_VARIABLE_OptionValues_0_32;
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word OptionArgOrError_247;

            if ((MaybeOptionArg0_15 == (MR_Word) ((MR_Unsigned) 0U)))
              if ((Args0_16 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Error_224;

                {
                  Error_224 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Error_224, 0) = Flag_12;
                  MR_hl_field(1, Error_224, 1) = ((MR_Box) (OptName_13));
                  MR_hl_field(1, Error_224, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                }
                {
                  OptionArgOrError_247 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, OptionArgOrError_247, 0) = ((MR_Box) (Error_224));
                }
                *Args1_17 = Args0_16;
                *STATE_VARIABLE_RevOptionArgs_31 = STATE_VARIABLE_RevOptionArgs_0_30;
              }
              else
              {
                MR_String Arg_226 = ((MR_String) ((MR_hl_field(1, Args0_16, (MR_Integer) 0))));

                *Args1_17 = ((MR_Word) ((MR_hl_field(1, Args0_16, (MR_Integer) 1))));
                {
                  OptionArgOrError_247 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, OptionArgOrError_247, 0) = ((MR_Box) (Arg_226));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_RevOptionArgs_31 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Arg_226));
                  MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevOptionArgs_0_30));
                }
              }
            else
            {
              MR_String Arg_230 = ((MR_String) ((MR_hl_field(1, MaybeOptionArg0_15, (MR_Integer) 0))));

              {
                OptionArgOrError_247 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, OptionArgOrError_247, 0) = ((MR_Box) (Arg_230));
              }
              *Args1_17 = Args0_16;
              *STATE_VARIABLE_RevOptionArgs_31 = STATE_VARIABLE_RevOptionArgs_0_30;
            }
            if (((MR_tag((MR_Word) OptionArgOrError_247)) == (MR_Integer) 1))
            {
              MR_Word Error_235 = ((MR_Word) ((MR_hl_field(1, OptionArgOrError_247, (MR_Integer) 0))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeError_19 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Error_235));
              }
              *STATE_VARIABLE_OptionValues_33 = STATE_VARIABLE_OptionValues_0_32;
            }
            else
            {
              MR_Word TypeInfo_22_239;
              MR_String Arg_236 = ((MR_String) ((MR_hl_field(0, OptionArgOrError_247, (MR_Integer) 0))));
              MR_Word OV_237;
              MR_Word conv5_STATE_VARIABLE_OptionValues_33;

              {
                OV_237 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, OV_237, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(3, OV_237, 1) = Flag_12;
                MR_hl_field(3, OV_237, 2) = ((MR_Box) (OptName_13));
                MR_hl_field(3, OV_237, 3) = ((MR_Box) (Arg_236));
              }
              {
                TypeInfo_22_239 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_22_239, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
                MR_hl_field(0, TypeInfo_22_239, 1) = ((MR_Box) (TypeInfo_for_OptionType_46));
              }
              conv5_STATE_VARIABLE_OptionValues_33 = mercury__cord__snoc_2_f_0(TypeInfo_22_239, (MR_Word) (STATE_VARIABLE_OptionValues_0_32), ((MR_Box) (OV_237)));
              *STATE_VARIABLE_OptionValues_33 = (MR_Word) (conv5_STATE_VARIABLE_OptionValues_33);
              *MaybeError_19 = (MR_Word) ((MR_Unsigned) 0U);
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word OptionArgOrError_185;

            if ((MaybeOptionArg0_15 == (MR_Word) ((MR_Unsigned) 0U)))
              if ((Args0_16 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Error_162;

                {
                  Error_162 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Error_162, 0) = Flag_12;
                  MR_hl_field(1, Error_162, 1) = ((MR_Box) (OptName_13));
                  MR_hl_field(1, Error_162, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                }
                {
                  OptionArgOrError_185 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, OptionArgOrError_185, 0) = ((MR_Box) (Error_162));
                }
                *Args1_17 = Args0_16;
                *STATE_VARIABLE_RevOptionArgs_31 = STATE_VARIABLE_RevOptionArgs_0_30;
              }
              else
              {
                MR_String Arg_164 = ((MR_String) ((MR_hl_field(1, Args0_16, (MR_Integer) 0))));

                *Args1_17 = ((MR_Word) ((MR_hl_field(1, Args0_16, (MR_Integer) 1))));
                {
                  OptionArgOrError_185 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, OptionArgOrError_185, 0) = ((MR_Box) (Arg_164));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_RevOptionArgs_31 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Arg_164));
                  MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevOptionArgs_0_30));
                }
              }
            else
            {
              MR_String Arg_168 = ((MR_String) ((MR_hl_field(1, MaybeOptionArg0_15, (MR_Integer) 0))));

              {
                OptionArgOrError_185 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, OptionArgOrError_185, 0) = ((MR_Box) (Arg_168));
              }
              *Args1_17 = Args0_16;
              *STATE_VARIABLE_RevOptionArgs_31 = STATE_VARIABLE_RevOptionArgs_0_30;
            }
            if (((MR_tag((MR_Word) OptionArgOrError_185)) == (MR_Integer) 1))
            {
              MR_Word Error_173 = ((MR_Word) ((MR_hl_field(1, OptionArgOrError_185, (MR_Integer) 0))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeError_19 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Error_173));
              }
              *STATE_VARIABLE_OptionValues_33 = STATE_VARIABLE_OptionValues_0_32;
            }
            else
            {
              MR_Word TypeInfo_22_177;
              MR_Word Var_56;
              MR_String Arg_174 = ((MR_String) ((MR_hl_field(0, OptionArgOrError_185, (MR_Integer) 0))));
              MR_Word OV_175;
              MR_Word conv3_STATE_VARIABLE_OptionValues_33;

              {
                Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_56, 0) = ((MR_Box) (Arg_174));
              }
              {
                OV_175 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, OV_175, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                MR_hl_field(3, OV_175, 1) = Flag_12;
                MR_hl_field(3, OV_175, 2) = ((MR_Box) (OptName_13));
                MR_hl_field(3, OV_175, 3) = ((MR_Box) (Var_56));
              }
              {
                TypeInfo_22_177 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_22_177, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
                MR_hl_field(0, TypeInfo_22_177, 1) = ((MR_Box) (TypeInfo_for_OptionType_46));
              }
              conv3_STATE_VARIABLE_OptionValues_33 = mercury__cord__snoc_2_f_0(TypeInfo_22_177, (MR_Word) (STATE_VARIABLE_OptionValues_0_32), ((MR_Box) (OV_175)));
              *STATE_VARIABLE_OptionValues_33 = (MR_Word) (conv3_STATE_VARIABLE_OptionValues_33);
              *MaybeError_19 = (MR_Word) ((MR_Unsigned) 0U);
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word OptionArgOrError_123;

            if ((MaybeOptionArg0_15 == (MR_Word) ((MR_Unsigned) 0U)))
              if ((Args0_16 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Error_100;

                {
                  Error_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Error_100, 0) = Flag_12;
                  MR_hl_field(1, Error_100, 1) = ((MR_Box) (OptName_13));
                  MR_hl_field(1, Error_100, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                }
                {
                  OptionArgOrError_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, OptionArgOrError_123, 0) = ((MR_Box) (Error_100));
                }
                *Args1_17 = Args0_16;
                *STATE_VARIABLE_RevOptionArgs_31 = STATE_VARIABLE_RevOptionArgs_0_30;
              }
              else
              {
                MR_String Arg_102 = ((MR_String) ((MR_hl_field(1, Args0_16, (MR_Integer) 0))));

                *Args1_17 = ((MR_Word) ((MR_hl_field(1, Args0_16, (MR_Integer) 1))));
                {
                  OptionArgOrError_123 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, OptionArgOrError_123, 0) = ((MR_Box) (Arg_102));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_RevOptionArgs_31 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Arg_102));
                  MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevOptionArgs_0_30));
                }
              }
            else
            {
              MR_String Arg_106 = ((MR_String) ((MR_hl_field(1, MaybeOptionArg0_15, (MR_Integer) 0))));

              {
                OptionArgOrError_123 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, OptionArgOrError_123, 0) = ((MR_Box) (Arg_106));
              }
              *Args1_17 = Args0_16;
              *STATE_VARIABLE_RevOptionArgs_31 = STATE_VARIABLE_RevOptionArgs_0_30;
            }
            if (((MR_tag((MR_Word) OptionArgOrError_123)) == (MR_Integer) 1))
            {
              MR_Word Error_111 = ((MR_Word) ((MR_hl_field(1, OptionArgOrError_123, (MR_Integer) 0))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeError_19 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Error_111));
              }
              *STATE_VARIABLE_OptionValues_33 = STATE_VARIABLE_OptionValues_0_32;
            }
            else
            {
              MR_Word TypeInfo_22_115;
              MR_String Arg_112 = ((MR_String) ((MR_hl_field(0, OptionArgOrError_123, (MR_Integer) 0))));
              MR_Word OV_113;
              MR_Word conv1_STATE_VARIABLE_OptionValues_33;

              {
                OV_113 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, OV_113, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(3, OV_113, 1) = Flag_12;
                MR_hl_field(3, OV_113, 2) = ((MR_Box) (OptName_13));
                MR_hl_field(3, OV_113, 3) = ((MR_Box) (Arg_112));
              }
              {
                TypeInfo_22_115 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_22_115, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
                MR_hl_field(0, TypeInfo_22_115, 1) = ((MR_Box) (TypeInfo_for_OptionType_46));
              }
              conv1_STATE_VARIABLE_OptionValues_33 = mercury__cord__snoc_2_f_0(TypeInfo_22_115, (MR_Word) (STATE_VARIABLE_OptionValues_0_32), ((MR_Box) (OV_113)));
              *STATE_VARIABLE_OptionValues_33 = (MR_Word) (conv1_STATE_VARIABLE_OptionValues_33);
              *MaybeError_19 = (MR_Word) ((MR_Unsigned) 0U);
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeInfo_18_62;
        MR_Word OV_60;
        MR_Word conv6_STATE_VARIABLE_OptionValues_33;

        *Args1_17 = Args0_16;
        {
          OV_60 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, OV_60, 0) = Flag_12;
          MR_hl_field(0, OV_60, 1) = ((MR_Box) (OptName_13));
          MR_hl_field(0, OV_60, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        {
          TypeInfo_18_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_18_62, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
          MR_hl_field(0, TypeInfo_18_62, 1) = ((MR_Box) (TypeInfo_for_OptionType_46));
        }
        conv6_STATE_VARIABLE_OptionValues_33 = mercury__cord__snoc_2_f_0(TypeInfo_18_62, (MR_Word) (STATE_VARIABLE_OptionValues_0_32), ((MR_Box) (OV_60)));
        *STATE_VARIABLE_OptionValues_33 = (MR_Word) (conv6_STATE_VARIABLE_OptionValues_33);
        if ((MaybeOptionArg0_15 == (MR_Word) ((MR_Unsigned) 0U)))
          *MaybeError_19 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_String Arg_63 = ((MR_String) ((MR_hl_field(1, MaybeOptionArg0_15, (MR_Integer) 0))));
          MR_Word ErrorReason_64;
          MR_Word Error_65;

          {
            ErrorReason_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ErrorReason_64, 0) = ((MR_Box) (Arg_63));
          }
          {
            Error_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Error_65, 0) = Flag_12;
            MR_hl_field(1, Error_65, 1) = ((MR_Box) (OptName_13));
            MR_hl_field(1, Error_65, 2) = ((MR_Box) (ErrorReason_64));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeError_19 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_65));
          }
        }
        *STATE_VARIABLE_RevOptionArgs_31 = STATE_VARIABLE_RevOptionArgs_0_30;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word OptionArgOrError_24;

        if ((MaybeOptionArg0_15 == (MR_Word) ((MR_Unsigned) 0U)))
          if ((Args0_16 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Error_67;

            {
              Error_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Error_67, 0) = Flag_12;
              MR_hl_field(1, Error_67, 1) = ((MR_Box) (OptName_13));
              MR_hl_field(1, Error_67, 2) = ((MR_Box) ((MR_Unsigned) 4U));
            }
            {
              OptionArgOrError_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, OptionArgOrError_24, 0) = ((MR_Box) (Error_67));
            }
            *Args1_17 = Args0_16;
            *STATE_VARIABLE_RevOptionArgs_31 = STATE_VARIABLE_RevOptionArgs_0_30;
          }
          else
          {
            MR_String Arg_66 = ((MR_String) ((MR_hl_field(1, Args0_16, (MR_Integer) 0))));

            *Args1_17 = ((MR_Word) ((MR_hl_field(1, Args0_16, (MR_Integer) 1))));
            {
              OptionArgOrError_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, OptionArgOrError_24, 0) = ((MR_Box) (Arg_66));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_RevOptionArgs_31 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Arg_66));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevOptionArgs_0_30));
            }
          }
        else
        {
          MR_String Arg_69 = ((MR_String) ((MR_hl_field(1, MaybeOptionArg0_15, (MR_Integer) 0))));

          {
            OptionArgOrError_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, OptionArgOrError_24, 0) = ((MR_Box) (Arg_69));
          }
          *Args1_17 = Args0_16;
          *STATE_VARIABLE_RevOptionArgs_31 = STATE_VARIABLE_RevOptionArgs_0_30;
        }
        if (((MR_tag((MR_Word) OptionArgOrError_24)) == (MR_Integer) 1))
        {
          MR_Word Error_26 = ((MR_Word) ((MR_hl_field(1, OptionArgOrError_24, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeError_19 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_26));
          }
          *STATE_VARIABLE_OptionValues_33 = STATE_VARIABLE_OptionValues_0_32;
        }
        else
        {
          MR_String Arg_25 = ((MR_String) ((MR_hl_field(0, OptionArgOrError_24, (MR_Integer) 0))));
          MR_Integer IntValue_71;

          succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, Arg_25, &IntValue_71);
          if (succeeded)
          {
            MR_Word TypeInfo_33_80;
            MR_Word OV_72;
            MR_Word conv8_STATE_VARIABLE_OptionValues_33;

            *MaybeError_19 = (MR_Word) ((MR_Unsigned) 0U);
            {
              OV_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, OV_72, 0) = Flag_12;
              MR_hl_field(1, OV_72, 1) = ((MR_Box) (OptName_13));
              MR_hl_field(1, OV_72, 2) = ((MR_Box) (IntValue_71));
            }
            {
              TypeInfo_33_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_33_80, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
              MR_hl_field(0, TypeInfo_33_80, 1) = ((MR_Box) (TypeInfo_for_OptionType_46));
            }
            conv8_STATE_VARIABLE_OptionValues_33 = mercury__cord__snoc_2_f_0(TypeInfo_33_80, (MR_Word) (STATE_VARIABLE_OptionValues_0_32), ((MR_Box) (OV_72)));
            *STATE_VARIABLE_OptionValues_33 = (MR_Word) (conv8_STATE_VARIABLE_OptionValues_33);
          }
          else
          {
            MR_Word Reason_86;
            MR_Word Error_87;

            {
              Reason_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Reason_86, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Reason_86, 1) = ((MR_Box) (Arg_25));
            }
            {
              Error_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Error_87, 0) = Flag_12;
              MR_hl_field(1, Error_87, 1) = ((MR_Box) (OptName_13));
              MR_hl_field(1, Error_87, 2) = ((MR_Box) (Reason_86));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeError_19 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_87));
            }
            *STATE_VARIABLE_OptionValues_33 = STATE_VARIABLE_OptionValues_0_32;
          }
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, OptionData_14, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word OptionArgOrError_216;

            if ((MaybeOptionArg0_15 == (MR_Word) ((MR_Unsigned) 0U)))
              if ((Args0_16 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Error_193;

                {
                  Error_193 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Error_193, 0) = Flag_12;
                  MR_hl_field(1, Error_193, 1) = ((MR_Box) (OptName_13));
                  MR_hl_field(1, Error_193, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                }
                {
                  OptionArgOrError_216 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, OptionArgOrError_216, 0) = ((MR_Box) (Error_193));
                }
                *Args1_17 = Args0_16;
                *STATE_VARIABLE_RevOptionArgs_31 = STATE_VARIABLE_RevOptionArgs_0_30;
              }
              else
              {
                MR_String Arg_195 = ((MR_String) ((MR_hl_field(1, Args0_16, (MR_Integer) 0))));

                *Args1_17 = ((MR_Word) ((MR_hl_field(1, Args0_16, (MR_Integer) 1))));
                {
                  OptionArgOrError_216 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, OptionArgOrError_216, 0) = ((MR_Box) (Arg_195));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_RevOptionArgs_31 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Arg_195));
                  MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevOptionArgs_0_30));
                }
              }
            else
            {
              MR_String Arg_199 = ((MR_String) ((MR_hl_field(1, MaybeOptionArg0_15, (MR_Integer) 0))));

              {
                OptionArgOrError_216 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, OptionArgOrError_216, 0) = ((MR_Box) (Arg_199));
              }
              *Args1_17 = Args0_16;
              *STATE_VARIABLE_RevOptionArgs_31 = STATE_VARIABLE_RevOptionArgs_0_30;
            }
            if (((MR_tag((MR_Word) OptionArgOrError_216)) == (MR_Integer) 1))
            {
              MR_Word Error_204 = ((MR_Word) ((MR_hl_field(1, OptionArgOrError_216, (MR_Integer) 0))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeError_19 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Error_204));
              }
              *STATE_VARIABLE_OptionValues_33 = STATE_VARIABLE_OptionValues_0_32;
            }
            else
            {
              MR_Word TypeInfo_22_208;
              MR_String Arg_205 = ((MR_String) ((MR_hl_field(0, OptionArgOrError_216, (MR_Integer) 0))));
              MR_Word OV_206;
              MR_Word conv4_STATE_VARIABLE_OptionValues_33;

              {
                OV_206 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, OV_206, 0) = Flag_12;
                MR_hl_field(2, OV_206, 1) = ((MR_Box) (OptName_13));
                MR_hl_field(2, OV_206, 2) = ((MR_Box) (Arg_205));
              }
              {
                TypeInfo_22_208 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_22_208, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
                MR_hl_field(0, TypeInfo_22_208, 1) = ((MR_Box) (TypeInfo_for_OptionType_46));
              }
              conv4_STATE_VARIABLE_OptionValues_33 = mercury__cord__snoc_2_f_0(TypeInfo_22_208, (MR_Word) (STATE_VARIABLE_OptionValues_0_32), ((MR_Box) (OV_206)));
              *STATE_VARIABLE_OptionValues_33 = (MR_Word) (conv4_STATE_VARIABLE_OptionValues_33);
              *MaybeError_19 = (MR_Word) ((MR_Unsigned) 0U);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word OptionArgOrError_305;

            if ((MaybeOptionArg0_15 == (MR_Word) ((MR_Unsigned) 0U)))
              if ((Args0_16 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Error_290;

                {
                  Error_290 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Error_290, 0) = Flag_12;
                  MR_hl_field(1, Error_290, 1) = ((MR_Box) (OptName_13));
                  MR_hl_field(1, Error_290, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                }
                {
                  OptionArgOrError_305 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, OptionArgOrError_305, 0) = ((MR_Box) (Error_290));
                }
                *Args1_17 = Args0_16;
                *STATE_VARIABLE_RevOptionArgs_31 = STATE_VARIABLE_RevOptionArgs_0_30;
              }
              else
              {
                MR_String Arg_292 = ((MR_String) ((MR_hl_field(1, Args0_16, (MR_Integer) 0))));

                *Args1_17 = ((MR_Word) ((MR_hl_field(1, Args0_16, (MR_Integer) 1))));
                {
                  OptionArgOrError_305 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, OptionArgOrError_305, 0) = ((MR_Box) (Arg_292));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_RevOptionArgs_31 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Arg_292));
                  MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevOptionArgs_0_30));
                }
              }
            else
            {
              MR_String Arg_296 = ((MR_String) ((MR_hl_field(1, MaybeOptionArg0_15, (MR_Integer) 0))));

              {
                OptionArgOrError_305 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, OptionArgOrError_305, 0) = ((MR_Box) (Arg_296));
              }
              *Args1_17 = Args0_16;
              *STATE_VARIABLE_RevOptionArgs_31 = STATE_VARIABLE_RevOptionArgs_0_30;
            }
            if (((MR_tag((MR_Word) OptionArgOrError_305)) == (MR_Integer) 1))
            {
              MR_Word Error_301 = ((MR_Word) ((MR_hl_field(1, OptionArgOrError_305, (MR_Integer) 0))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeError_19 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Error_301));
              }
              *STATE_VARIABLE_OptionValues_33 = STATE_VARIABLE_OptionValues_0_32;
            }
            else
            {
              MR_String Arg_302 = ((MR_String) ((MR_hl_field(0, OptionArgOrError_305, (MR_Integer) 0))));
              MR_Integer IntValue_76;

              succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, Arg_302, &IntValue_76);
              if (succeeded)
              {
                MR_Word TypeInfo_35_82;
                MR_Word Var_74;
                MR_Word OV_75;
                MR_Word conv10_STATE_VARIABLE_OptionValues_33;

                *MaybeError_19 = (MR_Word) ((MR_Unsigned) 0U);
                {
                  Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_74, 0) = ((MR_Box) (IntValue_76));
                }
                {
                  OV_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, OV_75, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, OV_75, 1) = Flag_12;
                  MR_hl_field(3, OV_75, 2) = ((MR_Box) (OptName_13));
                  MR_hl_field(3, OV_75, 3) = ((MR_Box) (Var_74));
                }
                {
                  TypeInfo_35_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, TypeInfo_35_82, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
                  MR_hl_field(0, TypeInfo_35_82, 1) = ((MR_Box) (TypeInfo_for_OptionType_46));
                }
                conv10_STATE_VARIABLE_OptionValues_33 = mercury__cord__snoc_2_f_0(TypeInfo_35_82, (MR_Word) (STATE_VARIABLE_OptionValues_0_32), ((MR_Box) (OV_75)));
                *STATE_VARIABLE_OptionValues_33 = (MR_Word) (conv10_STATE_VARIABLE_OptionValues_33);
              }
              else
              {
                MR_Word Reason_92;
                MR_Word Error_93;

                {
                  Reason_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Reason_92, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, Reason_92, 1) = ((MR_Box) (Arg_302));
                }
                {
                  Error_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Error_93, 0) = Flag_12;
                  MR_hl_field(1, Error_93, 1) = ((MR_Box) (OptName_13));
                  MR_hl_field(1, Error_93, 2) = ((MR_Box) (Reason_92));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeError_19 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Error_93));
                }
                *STATE_VARIABLE_OptionValues_33 = STATE_VARIABLE_OptionValues_0_32;
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word OptionArgOrError_154;

            if ((MaybeOptionArg0_15 == (MR_Word) ((MR_Unsigned) 0U)))
              if ((Args0_16 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Error_131;

                {
                  Error_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Error_131, 0) = Flag_12;
                  MR_hl_field(1, Error_131, 1) = ((MR_Box) (OptName_13));
                  MR_hl_field(1, Error_131, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                }
                {
                  OptionArgOrError_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, OptionArgOrError_154, 0) = ((MR_Box) (Error_131));
                }
                *Args1_17 = Args0_16;
                *STATE_VARIABLE_RevOptionArgs_31 = STATE_VARIABLE_RevOptionArgs_0_30;
              }
              else
              {
                MR_String Arg_133 = ((MR_String) ((MR_hl_field(1, Args0_16, (MR_Integer) 0))));

                *Args1_17 = ((MR_Word) ((MR_hl_field(1, Args0_16, (MR_Integer) 1))));
                {
                  OptionArgOrError_154 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, OptionArgOrError_154, 0) = ((MR_Box) (Arg_133));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_RevOptionArgs_31 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Arg_133));
                  MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevOptionArgs_0_30));
                }
              }
            else
            {
              MR_String Arg_137 = ((MR_String) ((MR_hl_field(1, MaybeOptionArg0_15, (MR_Integer) 0))));

              {
                OptionArgOrError_154 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, OptionArgOrError_154, 0) = ((MR_Box) (Arg_137));
              }
              *Args1_17 = Args0_16;
              *STATE_VARIABLE_RevOptionArgs_31 = STATE_VARIABLE_RevOptionArgs_0_30;
            }
            if (((MR_tag((MR_Word) OptionArgOrError_154)) == (MR_Integer) 1))
            {
              MR_Word Error_142 = ((MR_Word) ((MR_hl_field(1, OptionArgOrError_154, (MR_Integer) 0))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeError_19 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Error_142));
              }
              *STATE_VARIABLE_OptionValues_33 = STATE_VARIABLE_OptionValues_0_32;
            }
            else
            {
              MR_Word TypeInfo_22_146;
              MR_Word Var_55;
              MR_String Arg_143 = ((MR_String) ((MR_hl_field(0, OptionArgOrError_154, (MR_Integer) 0))));
              MR_Word OV_144;
              MR_Word conv2_STATE_VARIABLE_OptionValues_33;

              {
                Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_55, 0) = ((MR_Box) (Arg_143));
              }
              {
                OV_144 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, OV_144, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, OV_144, 1) = Flag_12;
                MR_hl_field(3, OV_144, 2) = ((MR_Box) (OptName_13));
                MR_hl_field(3, OV_144, 3) = ((MR_Box) (Var_55));
              }
              {
                TypeInfo_22_146 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_22_146, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
                MR_hl_field(0, TypeInfo_22_146, 1) = ((MR_Box) (TypeInfo_for_OptionType_46));
              }
              conv2_STATE_VARIABLE_OptionValues_33 = mercury__cord__snoc_2_f_0(TypeInfo_22_146, (MR_Word) (STATE_VARIABLE_OptionValues_0_32), ((MR_Box) (OV_144)));
              *STATE_VARIABLE_OptionValues_33 = (MR_Word) (conv2_STATE_VARIABLE_OptionValues_33);
              *MaybeError_19 = (MR_Word) ((MR_Unsigned) 0U);
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word OptionArgOrError_45;

            if ((MaybeOptionArg0_15 == (MR_Word) ((MR_Unsigned) 0U)))
              if ((Args0_16 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Error_48;

                {
                  Error_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Error_48, 0) = Flag_12;
                  MR_hl_field(1, Error_48, 1) = ((MR_Box) (OptName_13));
                  MR_hl_field(1, Error_48, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                }
                {
                  OptionArgOrError_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, OptionArgOrError_45, 0) = ((MR_Box) (Error_48));
                }
                *Args1_17 = Args0_16;
                *STATE_VARIABLE_RevOptionArgs_31 = STATE_VARIABLE_RevOptionArgs_0_30;
              }
              else
              {
                MR_String Arg_47 = ((MR_String) ((MR_hl_field(1, Args0_16, (MR_Integer) 0))));

                *Args1_17 = ((MR_Word) ((MR_hl_field(1, Args0_16, (MR_Integer) 1))));
                {
                  OptionArgOrError_45 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, OptionArgOrError_45, 0) = ((MR_Box) (Arg_47));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_RevOptionArgs_31 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Arg_47));
                  MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevOptionArgs_0_30));
                }
              }
            else
            {
              MR_String Arg_50 = ((MR_String) ((MR_hl_field(1, MaybeOptionArg0_15, (MR_Integer) 0))));

              {
                OptionArgOrError_45 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, OptionArgOrError_45, 0) = ((MR_Box) (Arg_50));
              }
              *Args1_17 = Args0_16;
              *STATE_VARIABLE_RevOptionArgs_31 = STATE_VARIABLE_RevOptionArgs_0_30;
            }
            if (((MR_tag((MR_Word) OptionArgOrError_45)) == (MR_Integer) 1))
            {
              MR_Word Error_42 = ((MR_Word) ((MR_hl_field(1, OptionArgOrError_45, (MR_Integer) 0))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeError_19 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Error_42));
              }
              *STATE_VARIABLE_OptionValues_33 = STATE_VARIABLE_OptionValues_0_32;
            }
            else
            {
              MR_Word TypeInfo_22_58;
              MR_String Arg_41 = ((MR_String) ((MR_hl_field(0, OptionArgOrError_45, (MR_Integer) 0))));
              MR_Word OV_52;
              MR_Word conv0_STATE_VARIABLE_OptionValues_33;

              {
                OV_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, OV_52, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, OV_52, 1) = Flag_12;
                MR_hl_field(3, OV_52, 2) = ((MR_Box) (OptName_13));
                MR_hl_field(3, OV_52, 3) = ((MR_Box) (Arg_41));
              }
              {
                TypeInfo_22_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_22_58, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
                MR_hl_field(0, TypeInfo_22_58, 1) = ((MR_Box) (TypeInfo_for_OptionType_46));
              }
              conv0_STATE_VARIABLE_OptionValues_33 = mercury__cord__snoc_2_f_0(TypeInfo_22_58, (MR_Word) (STATE_VARIABLE_OptionValues_0_32), ((MR_Box) (OV_52)));
              *STATE_VARIABLE_OptionValues_33 = (MR_Word) (conv0_STATE_VARIABLE_OptionValues_33);
              *MaybeError_19 = (MR_Word) ((MR_Unsigned) 0U);
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
mercury__getopt__record_negated_option_6_p_0(
  MR_Word TypeInfo_for_OptionType_32,
  MR_Word OptionTable_7,
  MR_Box Flag_8,
  MR_String OptName_9,
  MR_Word * MaybeError_10,
  MR_Word STATE_VARIABLE_OptionValues_0_21,
  MR_Word * STATE_VARIABLE_OptionValues_22)
{
  MR_bool succeeded;
  MR_Word OptionData_12;
  MR_Box conv0_OptionData_12;

  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_OptionType_32, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_7, Flag_8, &conv0_OptionData_12);
  if (succeeded)
  {
    OptionData_12 = ((MR_Word) (conv0_OptionData_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    switch (MR_tag((MR_Word) OptionData_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OptionData_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 5:
            {
              MR_Word Error_20;

              {
                Error_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Error_20, 0) = Flag_8;
                MR_hl_field(1, Error_20, 1) = ((MR_Box) (OptName_9));
                MR_hl_field(1, Error_20, 2) = ((MR_Box) ((MR_Unsigned) 8U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeError_10 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Error_20));
              }
              *STATE_VARIABLE_OptionValues_22 = STATE_VARIABLE_OptionValues_0_21;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_35_41;
              MR_Word OV_39;
              MR_Word conv3_STATE_VARIABLE_OptionValues_22;

              {
                OV_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, OV_39, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, OV_39, 1) = Flag_8;
                MR_hl_field(3, OV_39, 2) = ((MR_Box) (OptName_9));
                MR_hl_field(3, OV_39, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              *MaybeError_10 = (MR_Word) ((MR_Unsigned) 0U);
              {
                TypeInfo_35_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_35_41, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
                MR_hl_field(0, TypeInfo_35_41, 1) = ((MR_Box) (TypeInfo_for_OptionType_32));
              }
              conv3_STATE_VARIABLE_OptionValues_22 = mercury__cord__snoc_2_f_0(TypeInfo_35_41, (MR_Word) (STATE_VARIABLE_OptionValues_0_21), ((MR_Box) (OV_39)));
              *STATE_VARIABLE_OptionValues_22 = (MR_Word) (conv3_STATE_VARIABLE_OptionValues_22);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word TypeInfo_35_50;
              MR_Word OV_48;
              MR_Word conv6_STATE_VARIABLE_OptionValues_22;

              {
                OV_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, OV_48, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                MR_hl_field(3, OV_48, 1) = Flag_8;
                MR_hl_field(3, OV_48, 2) = ((MR_Box) (OptName_9));
                MR_hl_field(3, OV_48, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              *MaybeError_10 = (MR_Word) ((MR_Unsigned) 0U);
              {
                TypeInfo_35_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_35_50, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
                MR_hl_field(0, TypeInfo_35_50, 1) = ((MR_Box) (TypeInfo_for_OptionType_32));
              }
              conv6_STATE_VARIABLE_OptionValues_22 = mercury__cord__snoc_2_f_0(TypeInfo_35_50, (MR_Word) (STATE_VARIABLE_OptionValues_0_21), ((MR_Box) (OV_48)));
              *STATE_VARIABLE_OptionValues_22 = (MR_Word) (conv6_STATE_VARIABLE_OptionValues_22);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_35_38;
          MR_Word OV_36;
          MR_Word conv2_STATE_VARIABLE_OptionValues_22;

          {
            OV_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, OV_36, 0) = Flag_8;
            MR_hl_field(0, OV_36, 1) = ((MR_Box) (OptName_9));
            MR_hl_field(0, OV_36, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          *MaybeError_10 = (MR_Word) ((MR_Unsigned) 0U);
          {
            TypeInfo_35_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_35_38, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
            MR_hl_field(0, TypeInfo_35_38, 1) = ((MR_Box) (TypeInfo_for_OptionType_32));
          }
          conv2_STATE_VARIABLE_OptionValues_22 = mercury__cord__snoc_2_f_0(TypeInfo_35_38, (MR_Word) (STATE_VARIABLE_OptionValues_0_21), ((MR_Box) (OV_36)));
          *STATE_VARIABLE_OptionValues_22 = (MR_Word) (conv2_STATE_VARIABLE_OptionValues_22);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_20;

          {
            Error_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Error_20, 0) = Flag_8;
            MR_hl_field(1, Error_20, 1) = ((MR_Box) (OptName_9));
            MR_hl_field(1, Error_20, 2) = ((MR_Box) ((MR_Unsigned) 8U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeError_10 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_20));
          }
          *STATE_VARIABLE_OptionValues_22 = STATE_VARIABLE_OptionValues_0_21;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, OptionData_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Error_20;

              {
                Error_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Error_20, 0) = Flag_8;
                MR_hl_field(1, Error_20, 1) = ((MR_Box) (OptName_9));
                MR_hl_field(1, Error_20, 2) = ((MR_Box) ((MR_Unsigned) 8U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeError_10 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Error_20));
              }
              *STATE_VARIABLE_OptionValues_22 = STATE_VARIABLE_OptionValues_0_21;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_35_44;
              MR_Word OV_42;
              MR_Word conv4_STATE_VARIABLE_OptionValues_22;

              {
                OV_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, OV_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, OV_42, 1) = Flag_8;
                MR_hl_field(3, OV_42, 2) = ((MR_Box) (OptName_9));
                MR_hl_field(3, OV_42, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              *MaybeError_10 = (MR_Word) ((MR_Unsigned) 0U);
              {
                TypeInfo_35_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_35_44, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
                MR_hl_field(0, TypeInfo_35_44, 1) = ((MR_Box) (TypeInfo_for_OptionType_32));
              }
              conv4_STATE_VARIABLE_OptionValues_22 = mercury__cord__snoc_2_f_0(TypeInfo_35_44, (MR_Word) (STATE_VARIABLE_OptionValues_0_21), ((MR_Box) (OV_42)));
              *STATE_VARIABLE_OptionValues_22 = (MR_Word) (conv4_STATE_VARIABLE_OptionValues_22);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeInfo_35_47;
              MR_Word OV_45;
              MR_Word conv5_STATE_VARIABLE_OptionValues_22;

              {
                OV_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, OV_45, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, OV_45, 1) = Flag_8;
                MR_hl_field(3, OV_45, 2) = ((MR_Box) (OptName_9));
                MR_hl_field(3, OV_45, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              *MaybeError_10 = (MR_Word) ((MR_Unsigned) 0U);
              {
                TypeInfo_35_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_35_47, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
                MR_hl_field(0, TypeInfo_35_47, 1) = ((MR_Box) (TypeInfo_for_OptionType_32));
              }
              conv5_STATE_VARIABLE_OptionValues_22 = mercury__cord__snoc_2_f_0(TypeInfo_35_47, (MR_Word) (STATE_VARIABLE_OptionValues_0_21), ((MR_Box) (OV_45)));
              *STATE_VARIABLE_OptionValues_22 = (MR_Word) (conv5_STATE_VARIABLE_OptionValues_22);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_35_35;
              MR_Word OV_14;
              MR_Word conv1_STATE_VARIABLE_OptionValues_22;

              {
                OV_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, OV_14, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, OV_14, 1) = Flag_8;
                MR_hl_field(3, OV_14, 2) = ((MR_Box) (OptName_9));
              }
              *MaybeError_10 = (MR_Word) ((MR_Unsigned) 0U);
              {
                TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_35_35, 0) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_value_1));
                MR_hl_field(0, TypeInfo_35_35, 1) = ((MR_Box) (TypeInfo_for_OptionType_32));
              }
              conv1_STATE_VARIABLE_OptionValues_22 = mercury__cord__snoc_2_f_0(TypeInfo_35_35, (MR_Word) (STATE_VARIABLE_OptionValues_0_21), ((MR_Box) (OV_14)));
              *STATE_VARIABLE_OptionValues_22 = (MR_Word) (conv1_STATE_VARIABLE_OptionValues_22);
            }
            break;
        }
        break;
    }
  else
  {
    MR_Word Error_31;

    {
      Error_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Error_31, 0) = Flag_8;
      MR_hl_field(1, Error_31, 1) = ((MR_Box) (OptName_9));
      MR_hl_field(1, Error_31, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeError_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Error_31));
    }
    *STATE_VARIABLE_OptionValues_22 = STATE_VARIABLE_OptionValues_0_21;
  }
}

void MR_CALL 
mercury__getopt__option_ops_to_internal_and_option_table_5_p_0(
  MR_Word TypeInfo_for_OptionType_17,
  MR_Word TypeInfo_for_UserDataType_18,
  MR_Word OptionOps_6,
  MR_Word * Short_7,
  MR_Word * Long_8,
  MR_Word * MaybeSpecial_9,
  MR_Word * OptionTable0_10)
{
  switch (MR_tag((MR_Word) OptionOps_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Defaults_11;

        *Short_7 = ((MR_Word) ((MR_hl_field(0, OptionOps_6, (MR_Integer) 0))));
        *Long_8 = ((MR_Word) ((MR_hl_field(0, OptionOps_6, (MR_Integer) 1))));
        Defaults_11 = ((MR_Word) ((MR_hl_field(0, OptionOps_6, (MR_Integer) 2))));
        *MaybeSpecial_9 = (MR_Word) ((MR_Unsigned) 0U);
        mercury__getopt__init_option_table_2_p_0(TypeInfo_for_OptionType_17, Defaults_11, OptionTable0_10);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Special_12;
        MR_Word Defaults_13;

        *Short_7 = ((MR_Word) ((MR_hl_field(1, OptionOps_6, (MR_Integer) 0))));
        *Long_8 = ((MR_Word) ((MR_hl_field(1, OptionOps_6, (MR_Integer) 1))));
        Defaults_13 = ((MR_Word) ((MR_hl_field(1, OptionOps_6, (MR_Integer) 2))));
        Special_12 = ((MR_Word) ((MR_hl_field(1, OptionOps_6, (MR_Integer) 3))));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeSpecial_9 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Special_12));
        }
        mercury__getopt__init_option_table_2_p_0(TypeInfo_for_OptionType_17, Defaults_13, OptionTable0_10);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Defaults_14;

        *Short_7 = ((MR_Word) ((MR_hl_field(2, OptionOps_6, (MR_Integer) 0))));
        *Long_8 = ((MR_Word) ((MR_hl_field(2, OptionOps_6, (MR_Integer) 1))));
        Defaults_14 = ((MR_Word) ((MR_hl_field(2, OptionOps_6, (MR_Integer) 2))));
        *MaybeSpecial_9 = (MR_Word) ((MR_Unsigned) 0U);
        mercury__getopt__init_option_table_multi_2_p_0(TypeInfo_for_OptionType_17, Defaults_14, OptionTable0_10);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Defaults_15;
        MR_Word Special_16;

        *Short_7 = ((MR_Word) ((MR_hl_field(3, OptionOps_6, (MR_Integer) 0))));
        *Long_8 = ((MR_Word) ((MR_hl_field(3, OptionOps_6, (MR_Integer) 1))));
        Defaults_15 = ((MR_Word) ((MR_hl_field(3, OptionOps_6, (MR_Integer) 2))));
        Special_16 = ((MR_Word) ((MR_hl_field(3, OptionOps_6, (MR_Integer) 3))));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeSpecial_9 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Special_16));
        }
        mercury__getopt__init_option_table_multi_2_p_0(TypeInfo_for_OptionType_17, Defaults_15, OptionTable0_10);
      }
      break;
  }
}

static void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;

  mercury__list__cons_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), wrapper_arg_1, ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
}

static void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0_1(
  void * env_ptr_arg)
{
  struct mercury__getopt__init_option_table_multi_2_p_0_2_env_0_s * env_ptr = (struct mercury__getopt__init_option_table_multi_2_p_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->mercury__getopt__init_option_table_multi_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mercury__getopt__init_option_table_multi_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10));
  ((env_ptr)->mercury__getopt__init_option_table_multi_2_p_0_2_env_0__cont)((env_ptr)->mercury__getopt__init_option_table_multi_2_p_0_2_env_0__cont_env_ptr);
}

static void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__getopt__init_option_table_multi_2_p_0_2_env_0_s env;

  (env).mercury__getopt__init_option_table_multi_2_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).mercury__getopt__init_option_table_multi_2_p_0_2_env_0__cont = cont;
  (env).mercury__getopt__init_option_table_multi_2_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    mercury__getopt__IntroducedFrom__pred__init_option_table_multi__932__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &(env).mercury__getopt__init_option_table_multi_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10, mercury__getopt__init_option_table_multi_2_p_0_1, &env);
  }
}

void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0(
  MR_Word TypeInfo_for_OptionType_12,
  MR_Word OptionDefaultsPred_3,
  MR_Word * OptionTable_4)
{
  MR_Word TypeInfo_15_15;
  MR_Word OptionDefaultsList_8;
  MR_Word Var_9;
  MR_Word Var_16;
  MR_Word TypeInfo_14_24;
  MR_Word Var_17;
  MR_Word Var_20;
  MR_Word Var_22;
  MR_Integer Var_38;
  MR_Box conv2_Var_22;
  MR_Word conv3_Var_16;

  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (&mercury__getopt_scalar_common_6[0]));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (mercury__getopt__init_option_table_multi_2_p_0_2));
    MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_9, 3) = ((MR_Box) (TypeInfo_for_OptionType_12));
    MR_hl_field(0, Var_9, 4) = ((MR_Box) (OptionDefaultsPred_3));
  }
  {
    TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_15_15, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
    MR_hl_field(0, TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_OptionType_12));
    MR_hl_field(0, TypeInfo_15_15, 2) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0));
  }
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&mercury__getopt_scalar_common_7[0]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (mercury__getopt__init_option_table_multi_2_p_0_3));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (TypeInfo_15_15));
  }
  {
    TypeInfo_14_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_14_24, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_14_24, 1) = ((MR_Box) (TypeInfo_15_15));
  }
  mercury__solutions__builtin_aggregate_4_p_0(TypeInfo_15_15, TypeInfo_14_24, (MR_Word) (Var_9), (MR_Word) (Var_20), ((MR_Box) ((MR_Unsigned) 0U)), &conv2_Var_22);
  Var_22 = ((MR_Word) (conv2_Var_22));
  if ((Var_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140solutions.assert_num_solutions\'/3", (MR_String) "no solutions");
      return;
    }
  else
    Var_17 = Var_22;
  mercury__list__length_acc_3_p_0(TypeInfo_15_15, (MR_Word) (Var_17), (MR_Integer) 0, &Var_38);
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_15_15, Var_38, (MR_Word) (Var_17), &conv3_Var_16);
  Var_16 = (MR_Word) (conv3_Var_16);
  if ((Var_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140solutions.assert_num_solutions\'/3", (MR_String) "no solutions");
      return;
    }
  else
    OptionDefaultsList_8 = Var_16;
  mercury__tree234__from_sorted_assoc_list_2_p_0(TypeInfo_for_OptionType_12, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionDefaultsList_8, OptionTable_4);
}

static void MR_CALL 
mercury__getopt__init_option_table_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;

  mercury__list__cons_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), wrapper_arg_1, ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
}

static void MR_CALL 
mercury__getopt__init_option_table_2_p_0_1(
  void * env_ptr_arg)
{
  struct mercury__getopt__init_option_table_2_p_0_2_env_0_s * env_ptr = (struct mercury__getopt__init_option_table_2_p_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->mercury__getopt__init_option_table_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mercury__getopt__init_option_table_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10));
  ((env_ptr)->mercury__getopt__init_option_table_2_p_0_2_env_0__cont)((env_ptr)->mercury__getopt__init_option_table_2_p_0_2_env_0__cont_env_ptr);
}

static void MR_CALL 
mercury__getopt__init_option_table_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__getopt__init_option_table_2_p_0_2_env_0_s env;

  (env).mercury__getopt__init_option_table_2_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).mercury__getopt__init_option_table_2_p_0_2_env_0__cont = cont;
  (env).mercury__getopt__init_option_table_2_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    mercury__getopt__IntroducedFrom__pred__init_option_table__924__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &(env).mercury__getopt__init_option_table_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10, mercury__getopt__init_option_table_2_p_0_1, &env);
  }
}

void MR_CALL 
mercury__getopt__init_option_table_2_p_0(
  MR_Word TypeInfo_for_OptionType_12,
  MR_Word OptionDefaultsPred_3,
  MR_Word * OptionTable_4)
{
  MR_Word TypeInfo_15_15;
  MR_Word OptionDefaultsList_8;
  MR_Word Var_9;
  MR_Word TypeInfo_14_24;
  MR_Word Var_20;
  MR_Word Var_22;
  MR_Integer Var_38;
  MR_Box conv2_Var_22;
  MR_Word conv3_OptionDefaultsList_8;

  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (&mercury__getopt_scalar_common_6[0]));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (mercury__getopt__init_option_table_2_p_0_2));
    MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_9, 3) = ((MR_Box) (TypeInfo_for_OptionType_12));
    MR_hl_field(0, Var_9, 4) = ((MR_Box) (OptionDefaultsPred_3));
  }
  {
    TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_15_15, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
    MR_hl_field(0, TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_OptionType_12));
    MR_hl_field(0, TypeInfo_15_15, 2) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0));
  }
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&mercury__getopt_scalar_common_7[0]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (mercury__getopt__init_option_table_2_p_0_3));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (TypeInfo_15_15));
  }
  {
    TypeInfo_14_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_14_24, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_14_24, 1) = ((MR_Box) (TypeInfo_15_15));
  }
  mercury__solutions__builtin_aggregate_4_p_7(TypeInfo_15_15, TypeInfo_14_24, (MR_Word) (Var_9), (MR_Word) (Var_20), ((MR_Box) ((MR_Unsigned) 0U)), &conv2_Var_22);
  Var_22 = ((MR_Word) (conv2_Var_22));
  mercury__list__length_acc_3_p_0(TypeInfo_15_15, (MR_Word) (Var_22), (MR_Integer) 0, &Var_38);
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_15_15, Var_38, (MR_Word) (Var_22), &conv3_OptionDefaultsList_8);
  OptionDefaultsList_8 = (MR_Word) (conv3_OptionDefaultsList_8);
  mercury__tree234__from_sorted_assoc_list_2_p_0(TypeInfo_for_OptionType_12, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionDefaultsList_8, OptionTable_4);
}

static MR_bool MR_CALL 
mercury__getopt____Unify____file_options_or_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__getopt____Unify____file_options_or_error_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__getopt____Compare____file_options_or_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__getopt____Compare____file_options_or_error_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__getopt____Unify____go_cord_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__getopt____Unify____go_cord_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__getopt____Compare____go_cord_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__getopt____Compare____go_cord_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__getopt____Unify____go_cord_node_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__getopt____Unify____go_cord_node_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__getopt____Compare____go_cord_node_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__getopt____Compare____go_cord_node_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__getopt____Unify____long_option_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__getopt____Unify____long_option_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__getopt____Compare____long_option_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__getopt____Compare____long_option_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__getopt____Unify____maybe_option_arg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__getopt____Compare____maybe_option_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__getopt____Compare____maybe_option_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__getopt____Unify____maybe_option_error_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__getopt____Compare____maybe_option_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__getopt____Compare____maybe_option_error_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_table_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__getopt____Unify____maybe_option_table_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__getopt____Compare____maybe_option_table_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__getopt____Compare____maybe_option_table_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_table_se_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__getopt____Unify____maybe_option_table_se_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__getopt____Compare____maybe_option_table_se_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__getopt____Compare____maybe_option_table_se_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__getopt____Unify____option_arg_or_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__getopt____Unify____option_arg_or_error_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__getopt____Compare____option_arg_or_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__getopt____Compare____option_arg_or_error_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__getopt____Unify____option_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__getopt____Unify____option_data_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__getopt____Compare____option_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__getopt____Compare____option_data_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__getopt____Unify____option_default_value_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__getopt____Unify____option_default_value_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__getopt____Compare____option_default_value_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__getopt____Compare____option_default_value_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__getopt____Unify____option_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__getopt____Unify____option_error_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__getopt____Compare____option_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__getopt____Compare____option_error_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__getopt____Unify____option_error_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__getopt____Unify____option_error_reason_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__getopt____Compare____option_error_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__getopt____Compare____option_error_reason_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__getopt____Unify____option_ops_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__getopt____Compare____option_ops_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__getopt____Compare____option_ops_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_internal_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = mercury__getopt____Unify____option_ops_internal_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
mercury__getopt____Compare____option_ops_internal_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__getopt____Compare____option_ops_internal_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_special_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = mercury__getopt____Unify____option_ops_special_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
mercury__getopt____Compare____option_ops_special_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__getopt____Compare____option_ops_special_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_track_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__getopt____Unify____option_ops_track_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__getopt____Compare____option_ops_track_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__getopt____Compare____option_ops_track_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_userdata_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = mercury__getopt____Unify____option_ops_userdata_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
mercury__getopt____Compare____option_ops_userdata_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__getopt____Compare____option_ops_userdata_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__getopt____Unify____option_table_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__getopt____Unify____option_table_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__getopt____Compare____option_table_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__getopt____Compare____option_table_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__getopt____Unify____option_value_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__getopt____Unify____option_value_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__getopt____Compare____option_value_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__getopt____Compare____option_value_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__getopt____Unify____read_file_contents_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__getopt____Unify____read_file_contents_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__getopt____Compare____read_file_contents_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__getopt____Compare____read_file_contents_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__getopt____Unify____short_option_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__getopt____Unify____short_option_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__getopt____Compare____short_option_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__getopt____Compare____short_option_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__getopt____Unify____special_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__getopt____Unify____special_data_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__getopt____Compare____special_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__getopt____Compare____special_data_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__getopt____Unify____special_handler_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__getopt____Unify____special_handler_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__getopt____Compare____special_handler_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__getopt____Compare____special_handler_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__getopt____Unify____special_handler_track_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__getopt____Unify____special_handler_track_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__getopt____Compare____special_handler_track_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__getopt____Compare____special_handler_track_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__getopt____Unify____user_data_handler_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = mercury__getopt____Unify____user_data_handler_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
mercury__getopt____Compare____user_data_handler_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__getopt____Compare____user_data_handler_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

static void MR_CALL 
mercury__getopt__ClassMethod_for_getopt__read_file_contents____unit__unit__arity0______getopt__read_file_contents_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  mercury__getopt__ClassMethod_for_getopt__read_file_contents____unit__unit__arity0______getopt__read_file_contents_4_4_p_0(((MR_String) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
mercury__getopt__ClassMethod_for_getopt__read_file_contents____io__state__arity0______getopt__read_file_contents_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  mercury__getopt__ClassMethod_for_getopt__read_file_contents____io__state__arity0______getopt__read_file_contents_4_4_p_0(((MR_String) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

void mercury__getopt__init(void)
{
}

void mercury__getopt__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_file_options_or_error_1);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_go_cord_1);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_go_cord_node_1);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_long_option_1);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_maybe_option_arg_0);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_maybe_option_error_1);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_maybe_option_table_1);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_maybe_option_table_se_1);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_option_arg_or_error_1);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_option_data_0);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_option_default_value_1);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_option_error_1);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_option_error_reason_0);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_option_ops_1);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_option_ops_internal_2);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_option_ops_special_2);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_option_ops_track_1);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_option_ops_userdata_2);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_option_table_1);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_option_value_1);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_read_file_contents_result_0);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_short_option_1);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_special_data_0);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_special_handler_1);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_special_handler_track_1);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_user_data_handler_2);
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
