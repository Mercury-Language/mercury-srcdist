/*
** Automatically generated from `parse.m'
** by the Mercury compiler,
** version rotd-2026-02-03
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


// :- module mdb.parse.
// :- implementation.

/*
INIT mercury__mdb__parse__init
ENDINIT
*/

#include "mdb.parse.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdb.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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
#include "io.stream_db.mih"
#include "mdb.browser_info.mih"
#include "mdb.browser_term.mih"
#include "mdb.term_rep.mih"
#include "mdb.util.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct mdb__parse__parse_browser_command_tokens_4_p_0_36_env_0_s {
  MR_Box * mdb__parse__parse_browser_command_tokens_4_p_0_36_env_0__wrapper_arg_1;
  MR_Box * mdb__parse__parse_browser_command_tokens_4_p_0_36_env_0__wrapper_arg_2;
  MR_Cont mdb__parse__parse_browser_command_tokens_4_p_0_36_env_0__cont;
  void * mdb__parse__parse_browser_command_tokens_4_p_0_36_env_0__cont_env_ptr;
  MR_Word mdb__parse__parse_browser_command_tokens_4_p_0_36_env_0__conv35_HeadVar__1_1;
  MR_Word mdb__parse__parse_browser_command_tokens_4_p_0_36_env_0__conv34_HeadVar__2_2;
};

struct mdb__parse__parse_browser_command_tokens_4_p_0_32_env_0_s {
  MR_Box * mdb__parse__parse_browser_command_tokens_4_p_0_32_env_0__wrapper_arg_1;
  MR_Box * mdb__parse__parse_browser_command_tokens_4_p_0_32_env_0__wrapper_arg_2;
  MR_Cont mdb__parse__parse_browser_command_tokens_4_p_0_32_env_0__cont;
  void * mdb__parse__parse_browser_command_tokens_4_p_0_32_env_0__cont_env_ptr;
  MR_Word mdb__parse__parse_browser_command_tokens_4_p_0_32_env_0__conv31_HeadVar__1_1;
  MR_Word mdb__parse__parse_browser_command_tokens_4_p_0_32_env_0__conv30_HeadVar__2_2;
};

struct mdb__parse__parse_browser_command_tokens_4_p_0_28_env_0_s {
  MR_Box * mdb__parse__parse_browser_command_tokens_4_p_0_28_env_0__wrapper_arg_1;
  MR_Box * mdb__parse__parse_browser_command_tokens_4_p_0_28_env_0__wrapper_arg_2;
  MR_Cont mdb__parse__parse_browser_command_tokens_4_p_0_28_env_0__cont;
  void * mdb__parse__parse_browser_command_tokens_4_p_0_28_env_0__cont_env_ptr;
  MR_Word mdb__parse__parse_browser_command_tokens_4_p_0_28_env_0__conv27_HeadVar__1_1;
  MR_Word mdb__parse__parse_browser_command_tokens_4_p_0_28_env_0__conv26_HeadVar__2_2;
};

struct mdb__parse__parse_browser_command_tokens_4_p_0_24_env_0_s {
  MR_Box * mdb__parse__parse_browser_command_tokens_4_p_0_24_env_0__wrapper_arg_1;
  MR_Box * mdb__parse__parse_browser_command_tokens_4_p_0_24_env_0__wrapper_arg_2;
  MR_Cont mdb__parse__parse_browser_command_tokens_4_p_0_24_env_0__cont;
  void * mdb__parse__parse_browser_command_tokens_4_p_0_24_env_0__cont_env_ptr;
  MR_Word mdb__parse__parse_browser_command_tokens_4_p_0_24_env_0__conv23_HeadVar__1_1;
  MR_Word mdb__parse__parse_browser_command_tokens_4_p_0_24_env_0__conv22_HeadVar__2_2;
};

struct mdb__parse__parse_browser_command_tokens_4_p_0_20_env_0_s {
  MR_Box * mdb__parse__parse_browser_command_tokens_4_p_0_20_env_0__wrapper_arg_1;
  MR_Box * mdb__parse__parse_browser_command_tokens_4_p_0_20_env_0__wrapper_arg_2;
  MR_Cont mdb__parse__parse_browser_command_tokens_4_p_0_20_env_0__cont;
  void * mdb__parse__parse_browser_command_tokens_4_p_0_20_env_0__cont_env_ptr;
  MR_Word mdb__parse__parse_browser_command_tokens_4_p_0_20_env_0__conv19_HeadVar__1_1;
  MR_Word mdb__parse__parse_browser_command_tokens_4_p_0_20_env_0__conv18_HeadVar__2_2;
};

struct mdb__parse__parse_browser_command_tokens_4_p_0_16_env_0_s {
  MR_Box * mdb__parse__parse_browser_command_tokens_4_p_0_16_env_0__wrapper_arg_1;
  MR_Box * mdb__parse__parse_browser_command_tokens_4_p_0_16_env_0__wrapper_arg_2;
  MR_Cont mdb__parse__parse_browser_command_tokens_4_p_0_16_env_0__cont;
  void * mdb__parse__parse_browser_command_tokens_4_p_0_16_env_0__cont_env_ptr;
  MR_Word mdb__parse__parse_browser_command_tokens_4_p_0_16_env_0__conv15_HeadVar__1_1;
  MR_Word mdb__parse__parse_browser_command_tokens_4_p_0_16_env_0__conv14_HeadVar__2_2;
};

struct mdb__parse__parse_browser_command_tokens_4_p_0_12_env_0_s {
  MR_Box * mdb__parse__parse_browser_command_tokens_4_p_0_12_env_0__wrapper_arg_1;
  MR_Box * mdb__parse__parse_browser_command_tokens_4_p_0_12_env_0__wrapper_arg_2;
  MR_Cont mdb__parse__parse_browser_command_tokens_4_p_0_12_env_0__cont;
  void * mdb__parse__parse_browser_command_tokens_4_p_0_12_env_0__cont_env_ptr;
  MR_Word mdb__parse__parse_browser_command_tokens_4_p_0_12_env_0__conv11_HeadVar__1_1;
  MR_Word mdb__parse__parse_browser_command_tokens_4_p_0_12_env_0__conv10_HeadVar__2_2;
};

struct mdb__parse__parse_browser_command_tokens_4_p_0_8_env_0_s {
  MR_Box * mdb__parse__parse_browser_command_tokens_4_p_0_8_env_0__wrapper_arg_1;
  MR_Box * mdb__parse__parse_browser_command_tokens_4_p_0_8_env_0__wrapper_arg_2;
  MR_Cont mdb__parse__parse_browser_command_tokens_4_p_0_8_env_0__cont;
  void * mdb__parse__parse_browser_command_tokens_4_p_0_8_env_0__cont_env_ptr;
  MR_Word mdb__parse__parse_browser_command_tokens_4_p_0_8_env_0__conv7_HeadVar__1_1;
  MR_Word mdb__parse__parse_browser_command_tokens_4_p_0_8_env_0__conv6_HeadVar__2_2;
};

struct mdb__parse__parse_browser_command_tokens_4_p_0_4_env_0_s {
  MR_Box * mdb__parse__parse_browser_command_tokens_4_p_0_4_env_0__wrapper_arg_1;
  MR_Box * mdb__parse__parse_browser_command_tokens_4_p_0_4_env_0__wrapper_arg_2;
  MR_Cont mdb__parse__parse_browser_command_tokens_4_p_0_4_env_0__cont;
  void * mdb__parse__parse_browser_command_tokens_4_p_0_4_env_0__cont_env_ptr;
  MR_Word mdb__parse__parse_browser_command_tokens_4_p_0_4_env_0__conv3_HeadVar__1_1;
  MR_Word mdb__parse__parse_browser_command_tokens_4_p_0_4_env_0__conv2_HeadVar__2_2;
};


static const MR_FA_TypeInfo_Struct1 mdb__parse__getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_format_option_0;

static const MR_FA_TypeInfo_Struct1 mdb__parse__maybe__ti_maybe_1getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_format_option_0;

static const MR_FA_TypeInfo_Struct1 mdb__parse__maybe__ti_maybe_1mdb__parse__type_ctor_info_path_0;

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_0[2];

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_0;

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_1;

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_2;

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_3[1];

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_3;

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_4[1];

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_4;

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_5;

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_6;

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_7[3];

static const MR_DuArgLocn mdb__parse__mdb__parse__field_locns_command_0_7[3];

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_7;

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_8[1];

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_8;

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_9;

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_10[1];

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_10;

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_11;

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_12;

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_13;

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_14;

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_command_0_0[9];

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_command_0_1[1];

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_command_0_2[1];

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_command_0_3[4];

static const MR_DuPtagLayout mdb__parse__mdb__parse__du_ptag_ordered_command_0[4];

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_name_ordered_command_0[15];

static const MR_Integer mdb__parse__mdb__parse__functor_number_map_command_0[15];

static const MR_Integer mdb__parse__mdb__parse__functor_number_map_external_request_0[1];

static const MR_NotagFunctorDesc mdb__parse__mdb__parse__notag_functor_desc_external_request_0;

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_option_0_0;

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_option_0_1;

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_option_0_2;

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_option_0_3;

static const MR_EnumFunctorDescPtr mdb__parse__mdb__parse__enum_ordinal_ordered_format_option_0[4];

static const MR_EnumFunctorDescPtr mdb__parse__mdb__parse__enum_name_ordered_format_option_0[4];

static const MR_Integer mdb__parse__mdb__parse__functor_number_map_format_option_0[4];

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_0;

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_1;

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_2;

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_3;

static const MR_EnumFunctorDescPtr mdb__parse__mdb__parse__enum_ordinal_ordered_format_param_cmd_0[4];

static const MR_EnumFunctorDescPtr mdb__parse__mdb__parse__enum_name_ordered_format_param_cmd_0[4];

static const MR_Integer mdb__parse__mdb__parse__functor_number_map_format_param_cmd_0[4];

static const MR_FA_TypeInfo_Struct1 mdb__parse__list__ti_list_1mdb__browser_info__type_ctor_info_up_down_dir_0;

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_path_0_0[1];

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_path_0_0;

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_path_0_1[1];

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_path_0_1;

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_path_0_0[1];

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_path_0_1[1];

static const MR_DuPtagLayout mdb__parse__mdb__parse__du_ptag_ordered_path_0[2];

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_name_ordered_path_0[2];

static const MR_Integer mdb__parse__mdb__parse__functor_number_map_path_0[2];

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_0;

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_1;

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_2;

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_3;

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_4;

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_5;

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_6;

static const MR_EnumFunctorDescPtr mdb__parse__mdb__parse__enum_ordinal_ordered_setting_option_0[7];

static const MR_EnumFunctorDescPtr mdb__parse__mdb__parse__enum_name_ordered_setting_option_0[7];

static const MR_Integer mdb__parse__mdb__parse__functor_number_map_setting_option_0[7];

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_0;

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_1;

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_2;

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_3;

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_4;

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_5;

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_token_0_6[1];

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_6;

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_token_0_7[1];

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_7;

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_token_0_8[1];

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_8;

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_token_0_9[1];

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_9;

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_token_0_0[6];

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_token_0_1[1];

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_token_0_2[1];

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_token_0_3[2];

static const MR_DuPtagLayout mdb__parse__mdb__parse__du_ptag_ordered_token_0[4];

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_name_ordered_token_0[10];

static const MR_Integer mdb__parse__mdb__parse__functor_number_map_token_0[10];

static void MR_CALL 
mdb__parse____Compare____token_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__parse____Unify____token_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__parse__format_param_cmd_option_defaults_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mdb__parse__long_format_param_cmd_option_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
mdb__parse__short_format_param_cmd_option_2_p_0(
  MR_Char HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
mdb__parse__format_cmd_option_defaults_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mdb__parse__long_format_cmd_option_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
mdb__parse__short_format_cmd_option_2_p_0(
  MR_Char HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
mdb__parse__format_option_defaults_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mdb__parse__long_format_option_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
mdb__parse__short_format_option_2_p_0(
  MR_Char HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
mdb__parse__parse_format_param_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Setting_5);

static MR_bool MR_CALL 
mdb__parse__read_browser_command_external_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mdb__parse__read_browser_command_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_35(
  void * env_ptr_arg);

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_36(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_34(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_33(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_31(
  void * env_ptr_arg);

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_32(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_30(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_29(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_27(
  void * env_ptr_arg);

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_28(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_26(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_25(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_23(
  void * env_ptr_arg);

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_24(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_22(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_21(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_19(
  void * env_ptr_arg);

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_20(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_15(
  void * env_ptr_arg);

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_16(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_11(
  void * env_ptr_arg);

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_12(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_8(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0(
  MR_Word CmdToken_5,
  MR_Word ArgTokens_6,
  MR_Word MaybeArgWords_7,
  MR_Word * Command_8);

static MR_bool MR_CALL 
mdb__parse__parse_format_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Setting_4);

static MR_bool MR_CALL 
mdb__parse__parse_path_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Path_5);

static MR_bool MR_CALL 
mdb__parse__parse_up_down_dirs_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
mdb__parse__lexer_words_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
mdb__parse__lexer_word_chars_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mdb__parse__lexer_word_chars_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdb__parse__lexer_word_chars_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
mdb__parse__digits_to_int_acc_3_p_0(
  MR_Integer Acc_1,
  MR_Word HeadVar__2_2,
  MR_Integer * HeadVar__3_3);

static MR_bool MR_CALL 
mdb__parse____Unify____command_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__parse____Compare____command_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__parse____Unify____external_request_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__parse____Compare____external_request_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__parse____Unify____format_option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__parse____Compare____format_option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__parse____Unify____format_param_cmd_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__parse____Compare____format_param_cmd_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__parse____Unify____path_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__parse____Compare____path_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__parse____Unify____setting_option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__parse____Compare____setting_option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__parse____Unify____token_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__parse____Compare____token_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdb__parse_scalar_common_1[10][2];

static /* final */ const MR_Box mdb__parse_scalar_common_2[1][1];

static /* final */ const MR_Box mdb__parse_scalar_common_3[1][4];

static /* final */ const MR_Box mdb__parse_scalar_common_4[40][3];

static /* final */ const MR_Box mdb__parse_scalar_common_6[6][5];


struct mdb__parse__vector_common_type_5_0_s {
  const MR_String mdb__parse__vector_common_type_5_0__vct_5_f_0;
  const MR_Word mdb__parse__vector_common_type_5_0__vct_5_f_1;
};

static /* final */ const struct mdb__parse__vector_common_type_5_0_s mdb__parse_vector_common_5[4];

struct mdb__parse__vector_common_type_7_0_s {
  const MR_String mdb__parse__vector_common_type_7_0__vct_7_f_0;
  const MR_Integer mdb__parse__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct mdb__parse__vector_common_type_7_0_s mdb__parse_vector_common_7[4];

struct mdb__parse__vector_common_type_8_0_s {
  const MR_String mdb__parse__vector_common_type_8_0__vct_8_f_0;
  const MR_Word mdb__parse__vector_common_type_8_0__vct_8_f_1;
};

static /* final */ const struct mdb__parse__vector_common_type_8_0_s mdb__parse_vector_common_8[4];

struct mdb__parse__vector_common_type_9_0_s {
  const MR_Word mdb__parse__vector_common_type_9_0__vct_9_f_0;
  const MR_Word mdb__parse__vector_common_type_9_0__vct_9_f_1;
};

static /* final */ const struct mdb__parse__vector_common_type_9_0_s mdb__parse_vector_common_9[4];

struct mdb__parse__vector_common_type_10_0_s {
  const MR_Word mdb__parse__vector_common_type_10_0__vct_10_f_0;
  const MR_Word mdb__parse__vector_common_type_10_0__vct_10_f_1;
};

static /* final */ const struct mdb__parse__vector_common_type_10_0_s mdb__parse_vector_common_10[14];

struct mdb__parse__vector_common_type_11_0_s {
  const MR_String mdb__parse__vector_common_type_11_0__vct_11_f_0;
  const MR_Word mdb__parse__vector_common_type_11_0__vct_11_f_1;
};

static /* final */ const struct mdb__parse__vector_common_type_11_0_s mdb__parse_vector_common_11[7];



static /* final */ const MR_Box mdb__parse_scalar_common_1[10][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_token_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_path_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_maybe_option_table_1)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__parse_scalar_common_1[2]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
};

static /* final */ const MR_Box mdb__parse_scalar_common_2[1][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
};

static /* final */ const MR_Box mdb__parse_scalar_common_3[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box mdb__parse_scalar_common_4[40][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_3[0])),
    ((MR_Box) (mdb__parse__lexer_word_chars_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_3[0])),
    ((MR_Box) (mdb__parse__lexer_word_chars_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_6[0])),
    ((MR_Box) (mdb__parse__parse_browser_command_tokens_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_6[1])),
    ((MR_Box) (mdb__parse__parse_browser_command_tokens_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_6[2])),
    ((MR_Box) (mdb__parse__parse_browser_command_tokens_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[2])),
    ((MR_Box) (&mdb__parse_scalar_common_4[3])),
    ((MR_Box) (&mdb__parse_scalar_common_4[4]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_6[0])),
    ((MR_Box) (mdb__parse__parse_browser_command_tokens_4_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_6[1])),
    ((MR_Box) (mdb__parse__parse_browser_command_tokens_4_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_6[2])),
    ((MR_Box) (mdb__parse__parse_browser_command_tokens_4_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[6])),
    ((MR_Box) (&mdb__parse_scalar_common_4[7])),
    ((MR_Box) (&mdb__parse_scalar_common_4[8]))
  },
  /* row  10 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_6[0])),
    ((MR_Box) (mdb__parse__parse_browser_command_tokens_4_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_6[1])),
    ((MR_Box) (mdb__parse__parse_browser_command_tokens_4_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_6[2])),
    ((MR_Box) (mdb__parse__parse_browser_command_tokens_4_p_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[10])),
    ((MR_Box) (&mdb__parse_scalar_common_4[11])),
    ((MR_Box) (&mdb__parse_scalar_common_4[12]))
  },
  /* row  14 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_6[0])),
    ((MR_Box) (mdb__parse__parse_browser_command_tokens_4_p_0_13)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_6[1])),
    ((MR_Box) (mdb__parse__parse_browser_command_tokens_4_p_0_14)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_6[2])),
    ((MR_Box) (mdb__parse__parse_browser_command_tokens_4_p_0_16)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[14])),
    ((MR_Box) (&mdb__parse_scalar_common_4[15])),
    ((MR_Box) (&mdb__parse_scalar_common_4[16]))
  },
  /* row  18 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_6[3])),
    ((MR_Box) (mdb__parse__parse_browser_command_tokens_4_p_0_17)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_6[4])),
    ((MR_Box) (mdb__parse__parse_browser_command_tokens_4_p_0_18)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_6[5])),
    ((MR_Box) (mdb__parse__parse_browser_command_tokens_4_p_0_20)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[18])),
    ((MR_Box) (&mdb__parse_scalar_common_4[19])),
    ((MR_Box) (&mdb__parse_scalar_common_4[20]))
  },
  /* row  22 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_6[3])),
    ((MR_Box) (mdb__parse__parse_browser_command_tokens_4_p_0_21)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  23 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_6[4])),
    ((MR_Box) (mdb__parse__parse_browser_command_tokens_4_p_0_22)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  24 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_6[5])),
    ((MR_Box) (mdb__parse__parse_browser_command_tokens_4_p_0_24)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  25 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[22])),
    ((MR_Box) (&mdb__parse_scalar_common_4[23])),
    ((MR_Box) (&mdb__parse_scalar_common_4[24]))
  },
  /* row  26 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_6[3])),
    ((MR_Box) (mdb__parse__parse_browser_command_tokens_4_p_0_25)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  27 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_6[4])),
    ((MR_Box) (mdb__parse__parse_browser_command_tokens_4_p_0_26)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  28 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_6[5])),
    ((MR_Box) (mdb__parse__parse_browser_command_tokens_4_p_0_28)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  29 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[26])),
    ((MR_Box) (&mdb__parse_scalar_common_4[27])),
    ((MR_Box) (&mdb__parse_scalar_common_4[28]))
  },
  /* row  30 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_6[0])),
    ((MR_Box) (mdb__parse__parse_browser_command_tokens_4_p_0_29)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  31 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_6[1])),
    ((MR_Box) (mdb__parse__parse_browser_command_tokens_4_p_0_30)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  32 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_6[2])),
    ((MR_Box) (mdb__parse__parse_browser_command_tokens_4_p_0_32)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  33 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[30])),
    ((MR_Box) (&mdb__parse_scalar_common_4[31])),
    ((MR_Box) (&mdb__parse_scalar_common_4[32]))
  },
  /* row  34 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_6[0])),
    ((MR_Box) (mdb__parse__parse_browser_command_tokens_4_p_0_33)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  35 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_6[1])),
    ((MR_Box) (mdb__parse__parse_browser_command_tokens_4_p_0_34)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  36 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_6[2])),
    ((MR_Box) (mdb__parse__parse_browser_command_tokens_4_p_0_36)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  37 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[34])),
    ((MR_Box) (&mdb__parse_scalar_common_4[35])),
    ((MR_Box) (&mdb__parse_scalar_common_4[36]))
  },
  /* row  38 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_3[0])),
    ((MR_Box) (mdb__parse__read_browser_command_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  39 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_3[0])),
    ((MR_Box) (mdb__parse__read_browser_command_external_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__parse_scalar_common_6[6][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_setting_option_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_setting_option_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_setting_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};


static /* final */ const struct mdb__parse__vector_common_type_5_0_s mdb__parse_vector_common_5[4] = {
  /* row   0 */
  {
    (MR_String) "flat",
    (MR_Word) (MR_mkword(3, &mdb__parse_scalar_common_1[6]))
  },
  /* row   1 */
  {
    (MR_String) "pretty",
    (MR_Word) (MR_mkword(3, &mdb__parse_scalar_common_1[7]))
  },
  /* row   2 */
  {
    (MR_String) "raw_pretty",
    (MR_Word) (MR_mkword(3, &mdb__parse_scalar_common_1[8]))
  },
  /* row   3 */
  {
    (MR_String) "verbose",
    (MR_Word) (MR_mkword(3, &mdb__parse_scalar_common_1[9]))
  },
};

static /* final */ const struct mdb__parse__vector_common_type_7_0_s mdb__parse_vector_common_7[4] = {
  /* row   0 */
  {
    (MR_String) "depth",
    (MR_Integer) 0
  },
  /* row   1 */
  {
    (MR_String) "lines",
    (MR_Integer) 1
  },
  /* row   2 */
  {
    (MR_String) "size",
    (MR_Integer) 2
  },
  /* row   3 */
  {
    (MR_String) "width",
    (MR_Integer) 3
  },
};

static /* final */ const struct mdb__parse__vector_common_type_8_0_s mdb__parse_vector_common_8[4] = {
  /* row   0 */
  {
    (MR_String) "flat",
    (MR_Integer) 0
  },
  /* row   1 */
  {
    (MR_String) "pretty",
    (MR_Integer) 3
  },
  /* row   2 */
  {
    (MR_String) "raw-pretty",
    (MR_Integer) 1
  },
  /* row   3 */
  {
    (MR_String) "verbose",
    (MR_Integer) 2
  },
};

static /* final */ const struct mdb__parse__vector_common_type_9_0_s mdb__parse_vector_common_9[4] = {
  /* row   0 */
  {
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(1, &mdb__parse_scalar_common_2[0]))
  },
  /* row   1 */
  {
    (MR_Integer) 1,
    (MR_Word) (MR_mkword(1, &mdb__parse_scalar_common_2[0]))
  },
  /* row   2 */
  {
    (MR_Integer) 2,
    (MR_Word) (MR_mkword(1, &mdb__parse_scalar_common_2[0]))
  },
  /* row   3 */
  {
    (MR_Integer) 3,
    (MR_Word) (MR_mkword(1, &mdb__parse_scalar_common_2[0]))
  },
};

static /* final */ const struct mdb__parse__vector_common_type_10_0_s mdb__parse_vector_common_10[14] = {
  /* row   0 */
  {
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(1, &mdb__parse_scalar_common_2[0]))
  },
  /* row   1 */
  {
    (MR_Integer) 1,
    (MR_Word) (MR_mkword(1, &mdb__parse_scalar_common_2[0]))
  },
  /* row   2 */
  {
    (MR_Integer) 2,
    (MR_Word) (MR_mkword(1, &mdb__parse_scalar_common_2[0]))
  },
  /* row   3 */
  {
    (MR_Integer) 3,
    (MR_Word) (MR_mkword(1, &mdb__parse_scalar_common_2[0]))
  },
  /* row   4 */
  {
    (MR_Integer) 4,
    (MR_Word) (MR_mkword(1, &mdb__parse_scalar_common_2[0]))
  },
  /* row   5 */
  {
    (MR_Integer) 5,
    (MR_Word) (MR_mkword(1, &mdb__parse_scalar_common_2[0]))
  },
  /* row   6 */
  {
    (MR_Integer) 6,
    (MR_Word) (MR_mkword(1, &mdb__parse_scalar_common_2[0]))
  },
  /* row   7 */
  {
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(1, &mdb__parse_scalar_common_2[0]))
  },
  /* row   8 */
  {
    (MR_Integer) 1,
    (MR_Word) (MR_mkword(1, &mdb__parse_scalar_common_2[0]))
  },
  /* row   9 */
  {
    (MR_Integer) 2,
    (MR_Word) (MR_mkword(1, &mdb__parse_scalar_common_2[0]))
  },
  /* row  10 */
  {
    (MR_Integer) 3,
    (MR_Word) (MR_mkword(1, &mdb__parse_scalar_common_2[0]))
  },
  /* row  11 */
  {
    (MR_Integer) 4,
    (MR_Word) (MR_mkword(1, &mdb__parse_scalar_common_2[0]))
  },
  /* row  12 */
  {
    (MR_Integer) 5,
    (MR_Word) (MR_mkword(1, &mdb__parse_scalar_common_2[0]))
  },
  /* row  13 */
  {
    (MR_Integer) 6,
    (MR_Word) (MR_mkword(1, &mdb__parse_scalar_common_2[0]))
  },
};

static /* final */ const struct mdb__parse__vector_common_type_11_0_s mdb__parse_vector_common_11[7] = {
  /* row   0 */
  {
    (MR_String) "browse",
    (MR_Integer) 1
  },
  /* row   1 */
  {
    (MR_String) "flat",
    (MR_Integer) 3
  },
  /* row   2 */
  {
    (MR_String) "pretty",
    (MR_Integer) 6
  },
  /* row   3 */
  {
    (MR_String) "print",
    (MR_Integer) 0
  },
  /* row   4 */
  {
    (MR_String) "print-all",
    (MR_Integer) 2
  },
  /* row   5 */
  {
    (MR_String) "raw-pretty",
    (MR_Integer) 4
  },
  /* row   6 */
  {
    (MR_String) "verbose",
    (MR_Integer) 5
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 mdb__parse__getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_format_option_0 = {
  &mercury__getopt__getopt__type_ctor_info_maybe_option_table_1,
  { (MR_TypeInfo) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0) }
};

static const MR_FA_TypeInfo_Struct1 mdb__parse__maybe__ti_maybe_1getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_format_option_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mdb__parse__getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_format_option_0) }
};

static const MR_FA_TypeInfo_Struct1 mdb__parse__maybe__ti_maybe_1mdb__parse__type_ctor_info_path_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mdb__parse__mdb__parse__type_ctor_info_path_0) }
};

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdb__parse__maybe__ti_maybe_1getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_format_option_0),
  (MR_PseudoTypeInfo) (&mdb__parse__maybe__ti_maybe_1mdb__parse__type_ctor_info_path_0)
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_0 = {
  (MR_String) "cmd_print",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__parse__mdb__parse__field_types_command_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_1 = {
  (MR_String) "cmd_display",
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

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_2 = {
  (MR_String) "cmd_write",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_3[1] = { (MR_PseudoTypeInfo) (&mdb__parse__maybe__ti_maybe_1mdb__parse__type_ctor_info_path_0) };

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_3 = {
  (MR_String) "cmd_memory_addr",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(3),
  mdb__parse__mdb__parse__field_types_command_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_4[1] = { (MR_PseudoTypeInfo) (&mdb__parse__mdb__parse__type_ctor_info_path_0) };

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_4 = {
  (MR_String) "cmd_cd_path",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(4),
  mdb__parse__mdb__parse__field_types_command_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_5 = {
  (MR_String) "cmd_cd_no_path",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(5),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_6 = {
  (MR_String) "cmd_pwd",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(6),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_7[3] = {
  (MR_PseudoTypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_how_track_subterm_0),
  (MR_PseudoTypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_should_assert_invalid_0),
  (MR_PseudoTypeInfo) (&mdb__parse__maybe__ti_maybe_1mdb__parse__type_ctor_info_path_0)
};

static const MR_DuArgLocn mdb__parse__mdb__parse__field_locns_command_0_7[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_7 = {
  (MR_String) "cmd_track",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(7),
  mdb__parse__mdb__parse__field_types_command_0_7,
  NULL,
  mdb__parse__mdb__parse__field_locns_command_0_7,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_8[1] = { (MR_PseudoTypeInfo) (&mdb__parse__mdb__parse__type_ctor_info_path_0) };

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_8 = {
  (MR_String) "cmd_mode_query",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(8),
  mdb__parse__mdb__parse__field_types_command_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_9 = {
  (MR_String) "cmd_mode_query_no_path",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(9),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_10[1] = { (MR_PseudoTypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_param_cmd_0) };

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_10 = {
  (MR_String) "cmd_param",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(10),
  mdb__parse__mdb__parse__field_types_command_0_10,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_11 = {
  (MR_String) "cmd_help",
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

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_12 = {
  (MR_String) "cmd_quit",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 6,
  INT32_C(12),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_13 = {
  (MR_String) "cmd_empty",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 7,
  INT32_C(13),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_14 = {
  (MR_String) "cmd_unknown",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 8,
  INT32_C(14),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_command_0_0[9] = {
  &mdb__parse__mdb__parse__du_functor_desc_command_0_1,
  &mdb__parse__mdb__parse__du_functor_desc_command_0_2,
  &mdb__parse__mdb__parse__du_functor_desc_command_0_5,
  &mdb__parse__mdb__parse__du_functor_desc_command_0_6,
  &mdb__parse__mdb__parse__du_functor_desc_command_0_9,
  &mdb__parse__mdb__parse__du_functor_desc_command_0_11,
  &mdb__parse__mdb__parse__du_functor_desc_command_0_12,
  &mdb__parse__mdb__parse__du_functor_desc_command_0_13,
  &mdb__parse__mdb__parse__du_functor_desc_command_0_14
};

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_command_0_1[1] = { &mdb__parse__mdb__parse__du_functor_desc_command_0_0 };

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_command_0_2[1] = { &mdb__parse__mdb__parse__du_functor_desc_command_0_3 };

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_command_0_3[4] = {
  &mdb__parse__mdb__parse__du_functor_desc_command_0_4,
  &mdb__parse__mdb__parse__du_functor_desc_command_0_7,
  &mdb__parse__mdb__parse__du_functor_desc_command_0_8,
  &mdb__parse__mdb__parse__du_functor_desc_command_0_10
};

static const MR_DuPtagLayout mdb__parse__mdb__parse__du_ptag_ordered_command_0[4] = {
  {
    UINT32_C(9),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__parse__mdb__parse__du_stag_ordered_command_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__parse__mdb__parse__du_stag_ordered_command_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__parse__mdb__parse__du_stag_ordered_command_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(4),
    MR_SECTAG_REMOTE_FULL_WORD,
    mdb__parse__mdb__parse__du_stag_ordered_command_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_name_ordered_command_0[15] = {
  &mdb__parse__mdb__parse__du_functor_desc_command_0_5,
  &mdb__parse__mdb__parse__du_functor_desc_command_0_4,
  &mdb__parse__mdb__parse__du_functor_desc_command_0_1,
  &mdb__parse__mdb__parse__du_functor_desc_command_0_13,
  &mdb__parse__mdb__parse__du_functor_desc_command_0_11,
  &mdb__parse__mdb__parse__du_functor_desc_command_0_3,
  &mdb__parse__mdb__parse__du_functor_desc_command_0_8,
  &mdb__parse__mdb__parse__du_functor_desc_command_0_9,
  &mdb__parse__mdb__parse__du_functor_desc_command_0_10,
  &mdb__parse__mdb__parse__du_functor_desc_command_0_0,
  &mdb__parse__mdb__parse__du_functor_desc_command_0_6,
  &mdb__parse__mdb__parse__du_functor_desc_command_0_12,
  &mdb__parse__mdb__parse__du_functor_desc_command_0_7,
  &mdb__parse__mdb__parse__du_functor_desc_command_0_14,
  &mdb__parse__mdb__parse__du_functor_desc_command_0_2
};

static const MR_Integer mdb__parse__mdb__parse__functor_number_map_command_0[15] = {
  (MR_Integer) 9,
  (MR_Integer) 2,
  (MR_Integer) 14,
  (MR_Integer) 5,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 10,
  (MR_Integer) 12,
  (MR_Integer) 6,
  (MR_Integer) 7,
  (MR_Integer) 8,
  (MR_Integer) 4,
  (MR_Integer) 11,
  (MR_Integer) 3,
  (MR_Integer) 13
};

const MR_TypeCtorInfo_Struct mdb__parse__mdb__parse__type_ctor_info_command_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__parse____Unify____command_0_0_10001)),
  ((MR_Box) (mdb__parse____Compare____command_0_0_10001)),
  (MR_String) "mdb.parse",
  (MR_String) "command",
  { mdb__parse__mdb__parse__du_name_ordered_command_0 },
  { mdb__parse__mdb__parse__du_ptag_ordered_command_0 },
  (MR_Integer) 15,
  UINT16_C(12),
  mdb__parse__mdb__parse__functor_number_map_command_0,

};

static const MR_Integer mdb__parse__mdb__parse__functor_number_map_external_request_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc mdb__parse__mdb__parse__notag_functor_desc_external_request_0 = {
  (MR_String) "external_request",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdb__parse__mdb__parse__type_ctor_info_external_request_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__parse____Unify____external_request_0_0_10001)),
  ((MR_Box) (mdb__parse____Compare____external_request_0_0_10001)),
  (MR_String) "mdb.parse",
  (MR_String) "external_request",
  { &mdb__parse__mdb__parse__notag_functor_desc_external_request_0 },
  { &mdb__parse__mdb__parse__notag_functor_desc_external_request_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__parse__mdb__parse__functor_number_map_external_request_0,

};

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_option_0_0 = {
  (MR_String) "flat",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_option_0_1 = {
  (MR_String) "raw_pretty",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_option_0_2 = {
  (MR_String) "verbose",
  INT32_C(2)
};

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_option_0_3 = {
  (MR_String) "pretty",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr mdb__parse__mdb__parse__enum_ordinal_ordered_format_option_0[4] = {
  &mdb__parse__mdb__parse__enum_functor_desc_format_option_0_0,
  &mdb__parse__mdb__parse__enum_functor_desc_format_option_0_1,
  &mdb__parse__mdb__parse__enum_functor_desc_format_option_0_2,
  &mdb__parse__mdb__parse__enum_functor_desc_format_option_0_3
};

static const MR_EnumFunctorDescPtr mdb__parse__mdb__parse__enum_name_ordered_format_option_0[4] = {
  &mdb__parse__mdb__parse__enum_functor_desc_format_option_0_0,
  &mdb__parse__mdb__parse__enum_functor_desc_format_option_0_3,
  &mdb__parse__mdb__parse__enum_functor_desc_format_option_0_1,
  &mdb__parse__mdb__parse__enum_functor_desc_format_option_0_2
};

static const MR_Integer mdb__parse__mdb__parse__functor_number_map_format_option_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__parse__mdb__parse__type_ctor_info_format_option_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__parse____Unify____format_option_0_0_10001)),
  ((MR_Box) (mdb__parse____Compare____format_option_0_0_10001)),
  (MR_String) "mdb.parse",
  (MR_String) "format_option",
  { mdb__parse__mdb__parse__enum_name_ordered_format_option_0 },
  { mdb__parse__mdb__parse__enum_ordinal_ordered_format_option_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  mdb__parse__mdb__parse__functor_number_map_format_option_0,

};

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_0 = {
  (MR_String) "param_depth",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_1 = {
  (MR_String) "param_size",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_2 = {
  (MR_String) "param_width",
  INT32_C(2)
};

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_3 = {
  (MR_String) "param_lines",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr mdb__parse__mdb__parse__enum_ordinal_ordered_format_param_cmd_0[4] = {
  &mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_0,
  &mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_1,
  &mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_2,
  &mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_3
};

static const MR_EnumFunctorDescPtr mdb__parse__mdb__parse__enum_name_ordered_format_param_cmd_0[4] = {
  &mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_0,
  &mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_3,
  &mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_1,
  &mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_2
};

static const MR_Integer mdb__parse__mdb__parse__functor_number_map_format_param_cmd_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__parse__mdb__parse__type_ctor_info_format_param_cmd_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__parse____Unify____format_param_cmd_0_0_10001)),
  ((MR_Box) (mdb__parse____Compare____format_param_cmd_0_0_10001)),
  (MR_String) "mdb.parse",
  (MR_String) "format_param_cmd",
  { mdb__parse__mdb__parse__enum_name_ordered_format_param_cmd_0 },
  { mdb__parse__mdb__parse__enum_ordinal_ordered_format_param_cmd_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  mdb__parse__mdb__parse__functor_number_map_format_param_cmd_0,

};

static const MR_FA_TypeInfo_Struct1 mdb__parse__list__ti_list_1mdb__browser_info__type_ctor_info_up_down_dir_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0) }
};

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_path_0_0[1] = { (MR_PseudoTypeInfo) (&mdb__parse__list__ti_list_1mdb__browser_info__type_ctor_info_up_down_dir_0) };

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_path_0_0 = {
  (MR_String) "root_rel",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__parse__mdb__parse__field_types_path_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_path_0_1[1] = { (MR_PseudoTypeInfo) (&mdb__parse__list__ti_list_1mdb__browser_info__type_ctor_info_up_down_dir_0) };

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_path_0_1 = {
  (MR_String) "dot_rel",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__parse__mdb__parse__field_types_path_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_path_0_0[1] = { &mdb__parse__mdb__parse__du_functor_desc_path_0_0 };

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_path_0_1[1] = { &mdb__parse__mdb__parse__du_functor_desc_path_0_1 };

static const MR_DuPtagLayout mdb__parse__mdb__parse__du_ptag_ordered_path_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__parse__mdb__parse__du_stag_ordered_path_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__parse__mdb__parse__du_stag_ordered_path_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_name_ordered_path_0[2] = {
  &mdb__parse__mdb__parse__du_functor_desc_path_0_1,
  &mdb__parse__mdb__parse__du_functor_desc_path_0_0
};

static const MR_Integer mdb__parse__mdb__parse__functor_number_map_path_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__parse__mdb__parse__type_ctor_info_path_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__parse____Unify____path_0_0_10001)),
  ((MR_Box) (mdb__parse____Compare____path_0_0_10001)),
  (MR_String) "mdb.parse",
  (MR_String) "path",
  { mdb__parse__mdb__parse__du_name_ordered_path_0 },
  { mdb__parse__mdb__parse__du_ptag_ordered_path_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdb__parse__mdb__parse__functor_number_map_path_0,

};

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_0 = {
  (MR_String) "set_print",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_1 = {
  (MR_String) "set_browse",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_2 = {
  (MR_String) "set_print_all",
  INT32_C(2)
};

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_3 = {
  (MR_String) "set_flat",
  INT32_C(3)
};

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_4 = {
  (MR_String) "set_raw_pretty",
  INT32_C(4)
};

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_5 = {
  (MR_String) "set_verbose",
  INT32_C(5)
};

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_6 = {
  (MR_String) "set_pretty",
  INT32_C(6)
};

static const MR_EnumFunctorDescPtr mdb__parse__mdb__parse__enum_ordinal_ordered_setting_option_0[7] = {
  &mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_0,
  &mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_1,
  &mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_2,
  &mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_3,
  &mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_4,
  &mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_5,
  &mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_6
};

static const MR_EnumFunctorDescPtr mdb__parse__mdb__parse__enum_name_ordered_setting_option_0[7] = {
  &mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_1,
  &mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_3,
  &mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_6,
  &mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_0,
  &mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_2,
  &mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_4,
  &mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_5
};

static const MR_Integer mdb__parse__mdb__parse__functor_number_map_setting_option_0[7] = {
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mdb__parse__mdb__parse__type_ctor_info_setting_option_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__parse____Unify____setting_option_0_0_10001)),
  ((MR_Box) (mdb__parse____Compare____setting_option_0_0_10001)),
  (MR_String) "mdb.parse",
  (MR_String) "setting_option",
  { mdb__parse__mdb__parse__enum_name_ordered_setting_option_0 },
  { mdb__parse__mdb__parse__enum_ordinal_ordered_setting_option_0 },
  (MR_Integer) 7,
  UINT16_C(12),
  mdb__parse__mdb__parse__functor_number_map_setting_option_0,

};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_0 = {
  (MR_String) "token_dot",
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

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_1 = {
  (MR_String) "token_dot_dot",
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

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_2 = {
  (MR_String) "token_slash",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_3 = {
  (MR_String) "token_question",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_4 = {
  (MR_String) "token_up",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_5 = {
  (MR_String) "token_lessthan",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 5,
  INT32_C(5),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_token_0_6[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_6 = {
  (MR_String) "token_num",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(6),
  mdb__parse__mdb__parse__field_types_token_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_token_0_7[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_7 = {
  (MR_String) "token_name",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(7),
  mdb__parse__mdb__parse__field_types_token_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_token_0_8[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_8 = {
  (MR_String) "token_arg",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(8),
  mdb__parse__mdb__parse__field_types_token_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_token_0_9[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0) };

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_9 = {
  (MR_String) "token_unknown",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(9),
  mdb__parse__mdb__parse__field_types_token_0_9,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_token_0_0[6] = {
  &mdb__parse__mdb__parse__du_functor_desc_token_0_0,
  &mdb__parse__mdb__parse__du_functor_desc_token_0_1,
  &mdb__parse__mdb__parse__du_functor_desc_token_0_2,
  &mdb__parse__mdb__parse__du_functor_desc_token_0_3,
  &mdb__parse__mdb__parse__du_functor_desc_token_0_4,
  &mdb__parse__mdb__parse__du_functor_desc_token_0_5
};

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_token_0_1[1] = { &mdb__parse__mdb__parse__du_functor_desc_token_0_6 };

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_token_0_2[1] = { &mdb__parse__mdb__parse__du_functor_desc_token_0_7 };

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_token_0_3[2] = {
  &mdb__parse__mdb__parse__du_functor_desc_token_0_8,
  &mdb__parse__mdb__parse__du_functor_desc_token_0_9
};

static const MR_DuPtagLayout mdb__parse__mdb__parse__du_ptag_ordered_token_0[4] = {
  {
    UINT32_C(6),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__parse__mdb__parse__du_stag_ordered_token_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__parse__mdb__parse__du_stag_ordered_token_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__parse__mdb__parse__du_stag_ordered_token_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    mdb__parse__mdb__parse__du_stag_ordered_token_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_name_ordered_token_0[10] = {
  &mdb__parse__mdb__parse__du_functor_desc_token_0_8,
  &mdb__parse__mdb__parse__du_functor_desc_token_0_0,
  &mdb__parse__mdb__parse__du_functor_desc_token_0_1,
  &mdb__parse__mdb__parse__du_functor_desc_token_0_5,
  &mdb__parse__mdb__parse__du_functor_desc_token_0_7,
  &mdb__parse__mdb__parse__du_functor_desc_token_0_6,
  &mdb__parse__mdb__parse__du_functor_desc_token_0_3,
  &mdb__parse__mdb__parse__du_functor_desc_token_0_2,
  &mdb__parse__mdb__parse__du_functor_desc_token_0_9,
  &mdb__parse__mdb__parse__du_functor_desc_token_0_4
};

static const MR_Integer mdb__parse__mdb__parse__functor_number_map_token_0[10] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 7,
  (MR_Integer) 6,
  (MR_Integer) 9,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 8
};

const MR_TypeCtorInfo_Struct mdb__parse__mdb__parse__type_ctor_info_token_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__parse____Unify____token_0_0_10001)),
  ((MR_Box) (mdb__parse____Compare____token_0_0_10001)),
  (MR_String) "mdb.parse",
  (MR_String) "token",
  { mdb__parse__mdb__parse__du_name_ordered_token_0 },
  { mdb__parse__mdb__parse__du_ptag_ordered_token_0 },
  (MR_Integer) 10,
  UINT16_C(12),
  mdb__parse__mdb__parse__functor_number_map_token_0,

};

static void MR_CALL 
mdb__parse____Compare____token_0_0(
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
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
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
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
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
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
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
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
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
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
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
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
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
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
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
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));

              succeeded = (ArgX1_4 < ArgY1_5);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX1_4 > ArgY1_5);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_String ArgX1_6 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_String ArgY1_7 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, 0))));

              mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_String ArgX1_8 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_String ArgY1_9 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));

                      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_8, ArgY1_9);
                    }
                    break;
                  case (MR_Integer) 1:
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
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Char ArgX1_10 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                      MR_Char ArgY1_11 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__3_3, 1)));

                      mercury__private_builtin__builtin_compare_character_3_p_0(HeadVar__1_1, ArgX1_10, ArgY1_11);
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
mdb__parse____Unify____token_0_0(
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
          MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_12 == CastX_11);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Integer ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_String ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 0))));
            succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_8;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_8 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Char ArgX1_9 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__1_1, 1)));
              MR_Char ArgY1_10;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_10 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                succeeded = (ArgX1_9 == ArgY1_10);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mdb__parse____Compare____setting_option_0_0(
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
mdb__parse____Unify____setting_option_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mdb__parse____Compare____format_param_cmd_0_0(
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
mdb__parse____Unify____format_param_cmd_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mdb__parse____Compare____format_option_0_0(
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
mdb__parse____Unify____format_option_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mdb__parse____Compare____external_request_0_0(
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
mdb__parse____Unify____external_request_0_0(
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
mdb__parse____Compare____command_0_0(
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
  {
    MR_Integer IndexX_4;
    MR_Integer IndexY_5;

    mdb__parse____Index____command_0_0(HeadVar__2_2, &IndexX_4);
    mdb__parse____Index____command_0_0(HeadVar__3_3, &IndexY_5);
    succeeded = (IndexX_4 < IndexY_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (IndexX_4 > IndexY_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word CompareResult_6;

        switch (MR_tag((MR_Word) HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              CompareResult_6 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_8;
              MR_Word ArgX2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Word ArgY2_11;
              MR_Word SubResult1_9;
              MR_Word TypeInfo_34_34;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
                ArgY2_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
                TypeInfo_34_34 = (MR_Word) (&mdb__parse_scalar_common_1[3]);
                mercury__builtin__compare_3_p_0(TypeInfo_34_34, &SubResult1_9, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
                succeeded = (SubResult1_9 != (MR_Integer) 0);
                if (succeeded)
                  CompareResult_6 = SubResult1_9;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&mdb__parse_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX2_10)), ((MR_Box) (ArgY2_11)));
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeInfo_31_31;
              MR_Word ArgX1_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_13;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
              if (succeeded)
              {
                ArgY1_13 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));
                TypeInfo_31_31 = (MR_Word) (&mdb__parse_scalar_common_1[1]);
                mercury__builtin__compare_3_p_0(TypeInfo_31_31, &CompareResult_6, ((MR_Box) (ArgX1_12)), ((MR_Box) (ArgY1_13)));
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgX1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_15;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgY1_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mdb__parse____Compare____path_0_0(&CompareResult_6, ArgX1_14, ArgY1_15);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgX1_16 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) >> 1)) & (MR_Integer) 1);
                  MR_Word ArgY1_17;
                  MR_Word ArgX2_19 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                  MR_Word ArgY2_20;
                  MR_Word ArgX3_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Word ArgY3_23;
                  MR_Word SubResult1_18;
                  MR_Integer Var_39;
                  MR_Integer Var_40;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgY1_17 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) >> 1)) & (MR_Integer) 1);
                    ArgY2_20 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 1);
                    ArgY3_23 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    Var_39 = (MR_Integer) (ArgX1_16);
                    Var_40 = (MR_Integer) (ArgY1_17);
                    succeeded = (Var_39 < Var_40);
                    if (succeeded)
                    {
                      SubResult1_18 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_39 > Var_40);
                      if (succeeded)
                      {
                        SubResult1_18 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_18;
                    else
                    {
                      MR_Word SubResult2_21;
                      MR_Integer Var_41 = (MR_Integer) (ArgX2_19);
                      MR_Integer Var_42 = (MR_Integer) (ArgY2_20);

                      succeeded = (Var_41 < Var_42);
                      if (succeeded)
                      {
                        SubResult2_21 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_41 > Var_42);
                        if (succeeded)
                        {
                          SubResult2_21 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_21;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&mdb__parse_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX3_22)), ((MR_Box) (ArgY3_23)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgX1_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_25;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    ArgY1_25 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mdb__parse____Compare____path_0_0(&CompareResult_6, ArgX1_24, ArgY1_25);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ArgX1_26 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_27;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    ArgY1_27 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mdb__browser_info____Compare____param_cmd_0_0(&CompareResult_6, ArgX1_26, ArgY1_27);
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
            break;
        }
        if (succeeded)
          *HeadVar__1_1 = CompareResult_6;
        else
          {
            mercury__private_builtin__compare_error_0_p_0();
            return;
          }
      }
    }
  }
}

void MR_CALL 
mdb__parse____Compare____path_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&mdb__parse_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&mdb__parse_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

void MR_CALL 
mdb__parse____Index____command_0_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 2;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 5;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 6;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 9;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 11;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 12;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 13;
          break;
        case (MR_Integer) 8:
          *HeadVar__2_2 = (MR_Integer) 14;
          break;
      }
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 3;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 4;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 7;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 8;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 10;
          break;
      }
      break;
  }
}

MR_bool MR_CALL 
mdb__parse____Unify____command_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_23 == CastY_24);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_22 == CastX_21);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_27_27;
          MR_Word TypeInfo_28_28;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_Word ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
            TypeInfo_27_27 = (MR_Word) (&mdb__parse_scalar_common_1[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
            if (succeeded)
            {
              TypeInfo_28_28 = (MR_Word) (&mdb__parse_scalar_common_1[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_25_25;
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            TypeInfo_25_25 = (MR_Word) (&mdb__parse_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_10;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = mdb__parse____Unify____path_0_0(ArgX1_9, ArgY1_10);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_29_29;
              MR_Word ArgX1_11 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) >> 1)) & (MR_Integer) 1);
              MR_Word ArgY1_12;
              MR_Word ArgX2_13 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 1);
              MR_Word ArgY2_14;
              MR_Word ArgX3_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY3_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_12 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) >> 1)) & (MR_Integer) 1);
                ArgY2_14 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                ArgY3_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (ArgX1_11 == ArgY1_12);
                if (succeeded)
                {
                  succeeded = (ArgX2_13 == ArgY2_14);
                  if (succeeded)
                  {
                    TypeInfo_29_29 = (MR_Word) (&mdb__parse_scalar_common_1[1]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX3_15)), ((MR_Box) (ArgY3_16)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_18;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = mdb__parse____Unify____path_0_0(ArgX1_17, ArgY1_18);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_20;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = mdb__browser_info____Unify____param_cmd_0_0(ArgX1_19, ArgY1_20);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
mdb__parse____Unify____path_0_0(
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
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      TypeInfo_9_9 = (MR_Word) (&mdb__parse_scalar_common_1[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
    }
  }
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      TypeInfo_10_10 = (MR_Word) (&mdb__parse_scalar_common_1[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  return succeeded;
}

static void MR_CALL 
mdb__parse__format_param_cmd_option_defaults_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Integer slot_0 = (MR_Integer) 0;

  do
  {
    *HeadVar__1_1 = ((&mdb__parse_vector_common_10[7 + slot_0]))->mdb__parse__vector_common_type_10_0__vct_10_f_0;
    *HeadVar__2_2 = ((&mdb__parse_vector_common_10[7 + slot_0]))->mdb__parse__vector_common_type_10_0__vct_10_f_1;
    cont(cont_env_ptr);
    slot_0 = (MR_Integer) ((MR_Unsigned) slot_0 + (MR_Unsigned) 1);
  }
  while ((slot_0 < (MR_Integer) 7));
}

static MR_bool MR_CALL 
mdb__parse__long_format_param_cmd_option_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer lo_0 = (MR_Integer) 0;
  MR_Integer hi_1 = (MR_Integer) 6;
  MR_Integer mid_2;
  MR_Integer result_3;

  // binary string simple lookup switch
  ;
  do
  {
    mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
    result_3 = MR_strcmp(HeadVar__1_1, ((&mdb__parse_vector_common_11[0 + mid_2]))->mdb__parse__vector_common_type_11_0__vct_11_f_0);
    if ((result_3 == (MR_Integer) 0))
    {
      *HeadVar__2_2 = ((&mdb__parse_vector_common_11[0 + mid_2]))->mdb__parse__vector_common_type_11_0__vct_11_f_1;
      succeeded = MR_TRUE;
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
  succeeded = MR_FALSE;
label_0:;
  return succeeded;
}

static MR_bool MR_CALL 
mdb__parse__short_format_param_cmd_option_2_p_0(
  MR_Char HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  switch (HeadVar__1_1) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Char) 65:
      {
        *HeadVar__2_2 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 66:
      {
        *HeadVar__2_2 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 80:
      {
        *HeadVar__2_2 = (MR_Integer) 0;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 102:
      {
        *HeadVar__2_2 = (MR_Integer) 3;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 112:
      {
        *HeadVar__2_2 = (MR_Integer) 6;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 114:
      {
        *HeadVar__2_2 = (MR_Integer) 4;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 118:
      {
        *HeadVar__2_2 = (MR_Integer) 5;
        succeeded = MR_TRUE;
      }
      break;
  }
  return succeeded;
}

static void MR_CALL 
mdb__parse__format_cmd_option_defaults_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Integer slot_0 = (MR_Integer) 0;

  do
  {
    *HeadVar__1_1 = ((&mdb__parse_vector_common_10[0 + slot_0]))->mdb__parse__vector_common_type_10_0__vct_10_f_0;
    *HeadVar__2_2 = ((&mdb__parse_vector_common_10[0 + slot_0]))->mdb__parse__vector_common_type_10_0__vct_10_f_1;
    cont(cont_env_ptr);
    slot_0 = (MR_Integer) ((MR_Unsigned) slot_0 + (MR_Unsigned) 1);
  }
  while ((slot_0 < (MR_Integer) 7));
}

static MR_bool MR_CALL 
mdb__parse__long_format_cmd_option_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((strcmp(HeadVar__1_1, (MR_String) "print") == 0))
  {
    *HeadVar__2_2 = (MR_Integer) 0;
    succeeded = MR_TRUE;
  }
  else
  if ((strcmp(HeadVar__1_1, (MR_String) "browse") == 0))
  {
    *HeadVar__2_2 = (MR_Integer) 1;
    succeeded = MR_TRUE;
  }
  else
  if ((strcmp(HeadVar__1_1, (MR_String) "print-all") == 0))
  {
    *HeadVar__2_2 = (MR_Integer) 2;
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

static MR_bool MR_CALL 
mdb__parse__short_format_cmd_option_2_p_0(
  MR_Char HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  switch (HeadVar__1_1) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Char) 65:
      {
        *HeadVar__2_2 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 66:
      {
        *HeadVar__2_2 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 80:
      {
        *HeadVar__2_2 = (MR_Integer) 0;
        succeeded = MR_TRUE;
      }
      break;
  }
  return succeeded;
}

static void MR_CALL 
mdb__parse__format_option_defaults_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Integer slot_0 = (MR_Integer) 0;

  do
  {
    *HeadVar__1_1 = ((&mdb__parse_vector_common_9[0 + slot_0]))->mdb__parse__vector_common_type_9_0__vct_9_f_0;
    *HeadVar__2_2 = ((&mdb__parse_vector_common_9[0 + slot_0]))->mdb__parse__vector_common_type_9_0__vct_9_f_1;
    cont(cont_env_ptr);
    slot_0 = (MR_Integer) ((MR_Unsigned) slot_0 + (MR_Unsigned) 1);
  }
  while ((slot_0 < (MR_Integer) 4));
}

static MR_bool MR_CALL 
mdb__parse__long_format_option_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer lo_0 = (MR_Integer) 0;
  MR_Integer hi_1 = (MR_Integer) 3;
  MR_Integer mid_2;
  MR_Integer result_3;

  // binary string simple lookup switch
  ;
  do
  {
    mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
    result_3 = MR_strcmp(HeadVar__1_1, ((&mdb__parse_vector_common_8[0 + mid_2]))->mdb__parse__vector_common_type_8_0__vct_8_f_0);
    if ((result_3 == (MR_Integer) 0))
    {
      *HeadVar__2_2 = ((&mdb__parse_vector_common_8[0 + mid_2]))->mdb__parse__vector_common_type_8_0__vct_8_f_1;
      succeeded = MR_TRUE;
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
  succeeded = MR_FALSE;
label_0:;
  return succeeded;
}

static MR_bool MR_CALL 
mdb__parse__short_format_option_2_p_0(
  MR_Char HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  switch (HeadVar__1_1) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Char) 102:
      {
        *HeadVar__2_2 = (MR_Integer) 0;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 112:
      {
        *HeadVar__2_2 = (MR_Integer) 3;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 114:
      {
        *HeadVar__2_2 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 118:
      {
        *HeadVar__2_2 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__parse__parse_format_param_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Setting_5)
{
  MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Token_3;
  MR_Word Tokens_4;
  MR_String TokenName_6;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Integer Var_21;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

  if (succeeded)
  {
    Token_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    Tokens_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    succeeded = ((MR_tag((MR_Word) Token_3)) == (MR_Integer) 2);
    if (succeeded)
    {
      TokenName_6 = ((MR_String) ((MR_hl_field(2, Token_3, 0))));
      succeeded = (Tokens_4 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_20 = ((MR_Word) ((MR_hl_field(1, Tokens_4, 0))));
        Var_19 = ((MR_Word) ((MR_hl_field(1, Tokens_4, 1))));
        succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_21 = ((MR_Integer) ((MR_hl_field(1, Var_20, 0))));
            // binary string jump switch
            ;
            lo_0 = (MR_Integer) 0;
            hi_1 = (MR_Integer) 3;
            do
            {
              mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
              result_3 = MR_strcmp(TokenName_6, ((&mdb__parse_vector_common_7[0 + mid_2]))->mdb__parse__vector_common_type_7_0__vct_7_f_0);
              if ((result_3 == (MR_Integer) 0))
              {
                switch (((&mdb__parse_vector_common_7[0 + mid_2]))->mdb__parse__vector_common_type_7_0__vct_7_f_1) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      // case "depth"
                      ;
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        *Setting_5 = base;
                        MR_hl_field(0, base, 0) = ((MR_Box) (Var_21));
                      }
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      // case "lines"
                      ;
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *Setting_5 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(3, base, 1) = ((MR_Box) (Var_21));
                      }
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      // case "size"
                      ;
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *Setting_5 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Var_21));
                      }
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      // case "width"
                      ;
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *Setting_5 = base;
                        MR_hl_field(2, base, 0) = ((MR_Box) (Var_21));
                      }
                      succeeded = MR_TRUE;
                    }
                    break;
                }
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
            succeeded = MR_FALSE;
          label_0:;
          }
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__parse__read_browser_command_external_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

void MR_CALL 
mdb__parse__read_browser_command_external_4_p_0(
  MR_Word InputStream_5,
  MR_Word * Command_6)
{
  MR_bool succeeded;
  MR_Word Result_8;

  mercury__io__read_4_p_0((MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_external_request_0), InputStream_5, &Result_8);
  switch (MR_tag((MR_Word) Result_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Command_6 = (MR_Word) ((MR_Unsigned) 24U);
      break;
    case (MR_Integer) 1:
      {
        MR_String StringToParse_9;
        MR_Word Words_10;
        MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, Result_8, 0))));
        MR_Word CommandPrime_11;

        StringToParse_9 = (MR_String) (Var_17);
        Words_10 = mercury__string__words_separator_2_f_0((MR_Word) (&mdb__parse_scalar_common_4[39]), StringToParse_9);
        succeeded = mdb__parse__parse_browser_command_words_2_p_0(Words_10, &CommandPrime_11);
        if (succeeded)
          *Command_6 = CommandPrime_11;
        else
          *Command_6 = (MR_Word) ((MR_Unsigned) 32U);
      }
      break;
    case (MR_Integer) 2:
      *Command_6 = (MR_Word) ((MR_Unsigned) 32U);
      break;
  }
}

static MR_bool MR_CALL 
mdb__parse__read_browser_command_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

void MR_CALL 
mdb__parse__read_browser_command_6_p_0(
  MR_Word MdbIn_7,
  MR_Word MdbOut_8,
  MR_String Prompt_9,
  MR_Word * Command_10)
{
  MR_bool succeeded;
  MR_String Line_12;
  MR_Word Words_13;
  MR_Word CommandPrime_14;

  mdb__util__trace_get_command_6_p_0(MdbIn_7, MdbOut_8, Prompt_9, &Line_12);
  Words_13 = mercury__string__words_separator_2_f_0((MR_Word) (&mdb__parse_scalar_common_4[38]), Line_12);
  succeeded = mdb__parse__parse_browser_command_words_2_p_0(Words_13, &CommandPrime_14);
  if (succeeded)
    *Command_10 = CommandPrime_14;
  else
    *Command_10 = (MR_Word) ((MR_Unsigned) 32U);
}

MR_bool MR_CALL 
mdb__parse__parse_browser_command_words_2_p_0(
  MR_Word Words_3,
  MR_Word * Command_4)
{
  MR_bool succeeded;

  if ((Words_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Command_4 = (MR_Word) ((MR_Unsigned) 28U);
    succeeded = MR_TRUE;
  }
  else
  {
    MR_String CmdWord_5 = ((MR_String) ((MR_hl_field(1, Words_3, 0))));
    MR_Word ArgWords_6 = ((MR_Word) ((MR_hl_field(1, Words_3, 1))));
    MR_Word CmdTokens_7;
    MR_Word ArgTokens_8;
    MR_Word MaybeArgWords_10;
    MR_Word AllTokens_11;
    MR_Word Chars_16;
    MR_Word Var_14;

    mercury__string__to_char_list_2_p_0(CmdWord_5, &Chars_16);
    mdb__parse__lexer_word_chars_2_p_0(Chars_16, &CmdTokens_7);
    mdb__parse__lexer_words_2_p_0(ArgWords_6, &ArgTokens_8);
    succeeded = (CmdTokens_7 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_14 = ((MR_Word) ((MR_hl_field(1, CmdTokens_7, 1))));
      succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
      {
        MaybeArgWords_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeArgWords_10, 0) = ((MR_Box) (ArgWords_6));
      }
    else
      MaybeArgWords_10 = (MR_Word) ((MR_Unsigned) 0U);
    AllTokens_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_token_0), CmdTokens_7, ArgTokens_8);
    if ((AllTokens_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Command_4 = (MR_Word) ((MR_Unsigned) 28U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word FirstToken_12 = ((MR_Word) ((MR_hl_field(1, AllTokens_11, 0))));
      MR_Word LaterTokens_13 = ((MR_Word) ((MR_hl_field(1, AllTokens_11, 1))));

      succeeded = mdb__parse__parse_browser_command_tokens_4_p_0(FirstToken_12, LaterTokens_13, MaybeArgWords_10, Command_4);
    }
  }
  return succeeded;
}

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_35(
  void * env_ptr_arg)
{
  struct mdb__parse__parse_browser_command_tokens_4_p_0_36_env_0_s * env_ptr = (struct mdb__parse__parse_browser_command_tokens_4_p_0_36_env_0_s *) (env_ptr_arg);

  *((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_36_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_36_env_0__conv35_HeadVar__1_1));
  *((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_36_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_36_env_0__conv34_HeadVar__2_2));
  ((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_36_env_0__cont)((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_36_env_0__cont_env_ptr);
}

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_36(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mdb__parse__parse_browser_command_tokens_4_p_0_36_env_0_s env;

  (env).mdb__parse__parse_browser_command_tokens_4_p_0_36_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).mdb__parse__parse_browser_command_tokens_4_p_0_36_env_0__wrapper_arg_2 = wrapper_arg_2;
  (env).mdb__parse__parse_browser_command_tokens_4_p_0_36_env_0__cont = cont;
  (env).mdb__parse__parse_browser_command_tokens_4_p_0_36_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    mdb__parse__format_param_cmd_option_defaults_2_p_0(&(env).mdb__parse__parse_browser_command_tokens_4_p_0_36_env_0__conv35_HeadVar__1_1, &(env).mdb__parse__parse_browser_command_tokens_4_p_0_36_env_0__conv34_HeadVar__2_2, mdb__parse__parse_browser_command_tokens_4_p_0_35, &env);
  }
}

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_34(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv33_HeadVar__2_2;

  succeeded = mdb__parse__long_format_param_cmd_option_2_p_0(((MR_String) (wrapper_arg_1)), &conv33_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv33_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_33(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv32_HeadVar__2_2;

  succeeded = mdb__parse__short_format_param_cmd_option_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv32_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv32_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_31(
  void * env_ptr_arg)
{
  struct mdb__parse__parse_browser_command_tokens_4_p_0_32_env_0_s * env_ptr = (struct mdb__parse__parse_browser_command_tokens_4_p_0_32_env_0_s *) (env_ptr_arg);

  *((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_32_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_32_env_0__conv31_HeadVar__1_1));
  *((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_32_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_32_env_0__conv30_HeadVar__2_2));
  ((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_32_env_0__cont)((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_32_env_0__cont_env_ptr);
}

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_32(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mdb__parse__parse_browser_command_tokens_4_p_0_32_env_0_s env;

  (env).mdb__parse__parse_browser_command_tokens_4_p_0_32_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).mdb__parse__parse_browser_command_tokens_4_p_0_32_env_0__wrapper_arg_2 = wrapper_arg_2;
  (env).mdb__parse__parse_browser_command_tokens_4_p_0_32_env_0__cont = cont;
  (env).mdb__parse__parse_browser_command_tokens_4_p_0_32_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    mdb__parse__format_param_cmd_option_defaults_2_p_0(&(env).mdb__parse__parse_browser_command_tokens_4_p_0_32_env_0__conv31_HeadVar__1_1, &(env).mdb__parse__parse_browser_command_tokens_4_p_0_32_env_0__conv30_HeadVar__2_2, mdb__parse__parse_browser_command_tokens_4_p_0_31, &env);
  }
}

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_30(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv29_HeadVar__2_2;

  succeeded = mdb__parse__long_format_param_cmd_option_2_p_0(((MR_String) (wrapper_arg_1)), &conv29_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv29_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_29(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv28_HeadVar__2_2;

  succeeded = mdb__parse__short_format_param_cmd_option_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv28_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv28_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_27(
  void * env_ptr_arg)
{
  struct mdb__parse__parse_browser_command_tokens_4_p_0_28_env_0_s * env_ptr = (struct mdb__parse__parse_browser_command_tokens_4_p_0_28_env_0_s *) (env_ptr_arg);

  *((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_28_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_28_env_0__conv27_HeadVar__1_1));
  *((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_28_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_28_env_0__conv26_HeadVar__2_2));
  ((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_28_env_0__cont)((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_28_env_0__cont_env_ptr);
}

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_28(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mdb__parse__parse_browser_command_tokens_4_p_0_28_env_0_s env;

  (env).mdb__parse__parse_browser_command_tokens_4_p_0_28_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).mdb__parse__parse_browser_command_tokens_4_p_0_28_env_0__wrapper_arg_2 = wrapper_arg_2;
  (env).mdb__parse__parse_browser_command_tokens_4_p_0_28_env_0__cont = cont;
  (env).mdb__parse__parse_browser_command_tokens_4_p_0_28_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    mdb__parse__format_option_defaults_2_p_0(&(env).mdb__parse__parse_browser_command_tokens_4_p_0_28_env_0__conv27_HeadVar__1_1, &(env).mdb__parse__parse_browser_command_tokens_4_p_0_28_env_0__conv26_HeadVar__2_2, mdb__parse__parse_browser_command_tokens_4_p_0_27, &env);
  }
}

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_26(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv25_HeadVar__2_2;

  succeeded = mdb__parse__long_format_option_2_p_0(((MR_String) (wrapper_arg_1)), &conv25_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv25_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_25(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv24_HeadVar__2_2;

  succeeded = mdb__parse__short_format_option_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv24_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv24_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_23(
  void * env_ptr_arg)
{
  struct mdb__parse__parse_browser_command_tokens_4_p_0_24_env_0_s * env_ptr = (struct mdb__parse__parse_browser_command_tokens_4_p_0_24_env_0_s *) (env_ptr_arg);

  *((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_24_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_24_env_0__conv23_HeadVar__1_1));
  *((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_24_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_24_env_0__conv22_HeadVar__2_2));
  ((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_24_env_0__cont)((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_24_env_0__cont_env_ptr);
}

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_24(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mdb__parse__parse_browser_command_tokens_4_p_0_24_env_0_s env;

  (env).mdb__parse__parse_browser_command_tokens_4_p_0_24_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).mdb__parse__parse_browser_command_tokens_4_p_0_24_env_0__wrapper_arg_2 = wrapper_arg_2;
  (env).mdb__parse__parse_browser_command_tokens_4_p_0_24_env_0__cont = cont;
  (env).mdb__parse__parse_browser_command_tokens_4_p_0_24_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    mdb__parse__format_option_defaults_2_p_0(&(env).mdb__parse__parse_browser_command_tokens_4_p_0_24_env_0__conv23_HeadVar__1_1, &(env).mdb__parse__parse_browser_command_tokens_4_p_0_24_env_0__conv22_HeadVar__2_2, mdb__parse__parse_browser_command_tokens_4_p_0_23, &env);
  }
}

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_22(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv21_HeadVar__2_2;

  succeeded = mdb__parse__long_format_option_2_p_0(((MR_String) (wrapper_arg_1)), &conv21_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv21_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_21(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv20_HeadVar__2_2;

  succeeded = mdb__parse__short_format_option_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv20_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv20_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_19(
  void * env_ptr_arg)
{
  struct mdb__parse__parse_browser_command_tokens_4_p_0_20_env_0_s * env_ptr = (struct mdb__parse__parse_browser_command_tokens_4_p_0_20_env_0_s *) (env_ptr_arg);

  *((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_20_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_20_env_0__conv19_HeadVar__1_1));
  *((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_20_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_20_env_0__conv18_HeadVar__2_2));
  ((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_20_env_0__cont)((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_20_env_0__cont_env_ptr);
}

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_20(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mdb__parse__parse_browser_command_tokens_4_p_0_20_env_0_s env;

  (env).mdb__parse__parse_browser_command_tokens_4_p_0_20_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).mdb__parse__parse_browser_command_tokens_4_p_0_20_env_0__wrapper_arg_2 = wrapper_arg_2;
  (env).mdb__parse__parse_browser_command_tokens_4_p_0_20_env_0__cont = cont;
  (env).mdb__parse__parse_browser_command_tokens_4_p_0_20_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    mdb__parse__format_option_defaults_2_p_0(&(env).mdb__parse__parse_browser_command_tokens_4_p_0_20_env_0__conv19_HeadVar__1_1, &(env).mdb__parse__parse_browser_command_tokens_4_p_0_20_env_0__conv18_HeadVar__2_2, mdb__parse__parse_browser_command_tokens_4_p_0_19, &env);
  }
}

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv17_HeadVar__2_2;

  succeeded = mdb__parse__long_format_option_2_p_0(((MR_String) (wrapper_arg_1)), &conv17_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv17_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv16_HeadVar__2_2;

  succeeded = mdb__parse__short_format_option_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv16_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv16_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_15(
  void * env_ptr_arg)
{
  struct mdb__parse__parse_browser_command_tokens_4_p_0_16_env_0_s * env_ptr = (struct mdb__parse__parse_browser_command_tokens_4_p_0_16_env_0_s *) (env_ptr_arg);

  *((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_16_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_16_env_0__conv15_HeadVar__1_1));
  *((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_16_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_16_env_0__conv14_HeadVar__2_2));
  ((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_16_env_0__cont)((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_16_env_0__cont_env_ptr);
}

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_16(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mdb__parse__parse_browser_command_tokens_4_p_0_16_env_0_s env;

  (env).mdb__parse__parse_browser_command_tokens_4_p_0_16_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).mdb__parse__parse_browser_command_tokens_4_p_0_16_env_0__wrapper_arg_2 = wrapper_arg_2;
  (env).mdb__parse__parse_browser_command_tokens_4_p_0_16_env_0__cont = cont;
  (env).mdb__parse__parse_browser_command_tokens_4_p_0_16_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    mdb__parse__format_param_cmd_option_defaults_2_p_0(&(env).mdb__parse__parse_browser_command_tokens_4_p_0_16_env_0__conv15_HeadVar__1_1, &(env).mdb__parse__parse_browser_command_tokens_4_p_0_16_env_0__conv14_HeadVar__2_2, mdb__parse__parse_browser_command_tokens_4_p_0_15, &env);
  }
}

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv13_HeadVar__2_2;

  succeeded = mdb__parse__long_format_param_cmd_option_2_p_0(((MR_String) (wrapper_arg_1)), &conv13_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv13_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv12_HeadVar__2_2;

  succeeded = mdb__parse__short_format_param_cmd_option_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv12_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv12_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_11(
  void * env_ptr_arg)
{
  struct mdb__parse__parse_browser_command_tokens_4_p_0_12_env_0_s * env_ptr = (struct mdb__parse__parse_browser_command_tokens_4_p_0_12_env_0_s *) (env_ptr_arg);

  *((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_12_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_12_env_0__conv11_HeadVar__1_1));
  *((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_12_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_12_env_0__conv10_HeadVar__2_2));
  ((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_12_env_0__cont)((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_12_env_0__cont_env_ptr);
}

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_12(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mdb__parse__parse_browser_command_tokens_4_p_0_12_env_0_s env;

  (env).mdb__parse__parse_browser_command_tokens_4_p_0_12_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).mdb__parse__parse_browser_command_tokens_4_p_0_12_env_0__wrapper_arg_2 = wrapper_arg_2;
  (env).mdb__parse__parse_browser_command_tokens_4_p_0_12_env_0__cont = cont;
  (env).mdb__parse__parse_browser_command_tokens_4_p_0_12_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    mdb__parse__format_cmd_option_defaults_2_p_0(&(env).mdb__parse__parse_browser_command_tokens_4_p_0_12_env_0__conv11_HeadVar__1_1, &(env).mdb__parse__parse_browser_command_tokens_4_p_0_12_env_0__conv10_HeadVar__2_2, mdb__parse__parse_browser_command_tokens_4_p_0_11, &env);
  }
}

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv9_HeadVar__2_2;

  succeeded = mdb__parse__long_format_cmd_option_2_p_0(((MR_String) (wrapper_arg_1)), &conv9_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv9_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv8_HeadVar__2_2;

  succeeded = mdb__parse__short_format_cmd_option_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv8_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_7(
  void * env_ptr_arg)
{
  struct mdb__parse__parse_browser_command_tokens_4_p_0_8_env_0_s * env_ptr = (struct mdb__parse__parse_browser_command_tokens_4_p_0_8_env_0_s *) (env_ptr_arg);

  *((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_8_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_8_env_0__conv7_HeadVar__1_1));
  *((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_8_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_8_env_0__conv6_HeadVar__2_2));
  ((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_8_env_0__cont)((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_8_env_0__cont_env_ptr);
}

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_8(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mdb__parse__parse_browser_command_tokens_4_p_0_8_env_0_s env;

  (env).mdb__parse__parse_browser_command_tokens_4_p_0_8_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).mdb__parse__parse_browser_command_tokens_4_p_0_8_env_0__wrapper_arg_2 = wrapper_arg_2;
  (env).mdb__parse__parse_browser_command_tokens_4_p_0_8_env_0__cont = cont;
  (env).mdb__parse__parse_browser_command_tokens_4_p_0_8_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    mdb__parse__format_param_cmd_option_defaults_2_p_0(&(env).mdb__parse__parse_browser_command_tokens_4_p_0_8_env_0__conv7_HeadVar__1_1, &(env).mdb__parse__parse_browser_command_tokens_4_p_0_8_env_0__conv6_HeadVar__2_2, mdb__parse__parse_browser_command_tokens_4_p_0_7, &env);
  }
}

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__2_2;

  succeeded = mdb__parse__long_format_param_cmd_option_2_p_0(((MR_String) (wrapper_arg_1)), &conv5_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__2_2;

  succeeded = mdb__parse__short_format_param_cmd_option_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv4_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_3(
  void * env_ptr_arg)
{
  struct mdb__parse__parse_browser_command_tokens_4_p_0_4_env_0_s * env_ptr = (struct mdb__parse__parse_browser_command_tokens_4_p_0_4_env_0_s *) (env_ptr_arg);

  *((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_4_env_0__conv3_HeadVar__1_1));
  *((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_4_env_0__conv2_HeadVar__2_2));
  ((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_4_env_0__cont)((env_ptr)->mdb__parse__parse_browser_command_tokens_4_p_0_4_env_0__cont_env_ptr);
}

static void MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mdb__parse__parse_browser_command_tokens_4_p_0_4_env_0_s env;

  (env).mdb__parse__parse_browser_command_tokens_4_p_0_4_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).mdb__parse__parse_browser_command_tokens_4_p_0_4_env_0__wrapper_arg_2 = wrapper_arg_2;
  (env).mdb__parse__parse_browser_command_tokens_4_p_0_4_env_0__cont = cont;
  (env).mdb__parse__parse_browser_command_tokens_4_p_0_4_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    mdb__parse__format_param_cmd_option_defaults_2_p_0(&(env).mdb__parse__parse_browser_command_tokens_4_p_0_4_env_0__conv3_HeadVar__1_1, &(env).mdb__parse__parse_browser_command_tokens_4_p_0_4_env_0__conv2_HeadVar__2_2, mdb__parse__parse_browser_command_tokens_4_p_0_3, &env);
  }
}

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  succeeded = mdb__parse__long_format_param_cmd_option_2_p_0(((MR_String) (wrapper_arg_1)), &conv1_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  succeeded = mdb__parse__short_format_param_cmd_option_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__parse__parse_browser_command_tokens_4_p_0(
  MR_Word CmdToken_5,
  MR_Word ArgTokens_6,
  MR_Word MaybeArgWords_7,
  MR_Word * Command_8)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) CmdToken_5)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (MR_unmkbody(CmdToken_5)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 3:
          {
            succeeded = (ArgTokens_6 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              *Command_8 = (MR_Word) ((MR_Unsigned) 20U);
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 4:
          if ((ArgTokens_6 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *Command_8 = (MR_Word) ((MR_Unsigned) 8U);
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word Path_624;

            succeeded = mdb__parse__parse_path_2_p_0(ArgTokens_6, &Path_624);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Command_8 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Path_624));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word TypeCtorInfo_192_192;
            MR_Integer Depth_45;
            MR_Word Var_83;
            MR_Word Var_84;
            MR_Word Var_88;
            MR_Word Var_89;
            MR_Word OptionOps_158;
            MR_Word MaybeOptionTable0_159;
            MR_Word MaybeOptionTable_160;
            MR_Word FormatCmd_161;
            MR_Word Var_46;

            succeeded = (ArgTokens_6 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_83 = ((MR_Word) ((MR_hl_field(1, ArgTokens_6, 0))));
              Var_84 = ((MR_Word) ((MR_hl_field(1, ArgTokens_6, 1))));
              succeeded = (Var_84 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Var_83)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Depth_45 = ((MR_Integer) ((MR_hl_field(1, Var_83, 0))));
                  Var_88 = (MR_Word) ((MR_Unsigned) 0U);
                  TypeCtorInfo_192_192 = (MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_setting_option_0);
                  OptionOps_158 = (MR_Word) (MR_mkword(2, &mdb__parse_scalar_common_4[5]));
                  mercury__getopt__process_options_4_p_0(TypeCtorInfo_192_192, OptionOps_158, Var_88, &Var_46, &MaybeOptionTable0_159);
                  MaybeOptionTable_160 = mercury__getopt__convert_to_maybe_option_table_1_f_0(TypeCtorInfo_192_192, MaybeOptionTable0_159);
                  {
                    Var_89 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_89, 0) = ((MR_Box) (Depth_45));
                  }
                  {
                    FormatCmd_161 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, FormatCmd_161, 0) = ((MR_Box) (MaybeOptionTable_160));
                    MR_hl_field(2, FormatCmd_161, 1) = ((MR_Box) (Var_89));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Command_8 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (FormatCmd_161));
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
          }
          break;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String Var_631 = ((MR_String) ((MR_hl_field(2, CmdToken_5, 0))));

        {
          MR_Integer case_num_0 = (MR_Integer) -1;

          switch (MR_nth_code_unit(Var_631, 0)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(1, Var_631, (MR_String) "addr"))
                case_num_0 = (MR_Integer) 0;
              break;
            case (MR_Integer) 99:
              switch (MR_nth_code_unit(Var_631, 1)) {
                case (MR_Integer) 100:
                  switch (MR_nth_code_unit(Var_631, 2)) {
                    case (MR_Integer) 0:
                      case_num_0 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 114:
                      if (MR_offset_streq(3, Var_631, (MR_String) "cdr"))
                        case_num_0 = (MR_Integer) 2;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 100:
              switch (MR_nth_code_unit(Var_631, 1)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 3;
                  break;
                case (MR_Integer) 101:
                  if (MR_offset_streq(2, Var_631, (MR_String) "depth"))
                    case_num_0 = (MR_Integer) 4;
                  break;
                case (MR_Integer) 105:
                  if (MR_offset_streq(2, Var_631, (MR_String) "display"))
                    case_num_0 = (MR_Integer) 5;
                  break;
              }
              break;
            case (MR_Integer) 102:
              if (MR_offset_streq(1, Var_631, (MR_String) "format"))
                case_num_0 = (MR_Integer) 6;
              break;
            case (MR_Integer) 104:
              switch (MR_nth_code_unit(Var_631, 1)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 7;
                  break;
                case (MR_Integer) 101:
                  if (MR_offset_streq(2, Var_631, (MR_String) "help"))
                    case_num_0 = (MR_Integer) 8;
                  break;
              }
              break;
            case (MR_Integer) 108:
              switch (MR_nth_code_unit(Var_631, 1)) {
                case (MR_Integer) 105:
                  if (MR_offset_streq(2, Var_631, (MR_String) "lines"))
                    case_num_0 = (MR_Integer) 9;
                  break;
                case (MR_Integer) 115:
                  if (MR_offset_streq(2, Var_631, (MR_String) "ls"))
                    case_num_0 = (MR_Integer) 10;
                  break;
              }
              break;
            case (MR_Integer) 109:
              switch (MR_nth_code_unit(Var_631, 1)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 11;
                  break;
                case (MR_Integer) 97:
                  if (MR_offset_streq(2, Var_631, (MR_String) "mark"))
                    case_num_0 = (MR_Integer) 12;
                  break;
                case (MR_Integer) 101:
                  if (MR_offset_streq(2, Var_631, (MR_String) "memory_addr"))
                    case_num_0 = (MR_Integer) 13;
                  break;
                case (MR_Integer) 111:
                  if (MR_offset_streq(2, Var_631, (MR_String) "mode"))
                    case_num_0 = (MR_Integer) 14;
                  break;
              }
              break;
            case (MR_Integer) 110:
              if (MR_offset_streq(1, Var_631, (MR_String) "num_io_actions"))
                case_num_0 = (MR_Integer) 15;
              break;
            case (MR_Integer) 112:
              switch (MR_nth_code_unit(Var_631, 1)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 16;
                  break;
                case (MR_Integer) 97:
                  if (MR_offset_streq(2, Var_631, (MR_String) "params"))
                    case_num_0 = (MR_Integer) 17;
                  break;
                case (MR_Integer) 114:
                  if (MR_offset_streq(2, Var_631, (MR_String) "print"))
                    case_num_0 = (MR_Integer) 18;
                  break;
                case (MR_Integer) 119:
                  if (MR_offset_streq(2, Var_631, (MR_String) "pwd"))
                    case_num_0 = (MR_Integer) 19;
                  break;
              }
              break;
            case (MR_Integer) 113:
              if (MR_offset_streq(1, Var_631, (MR_String) "quit"))
                case_num_0 = (MR_Integer) 20;
              break;
            case (MR_Integer) 115:
              if (MR_offset_streq(1, Var_631, (MR_String) "size"))
                case_num_0 = (MR_Integer) 21;
              break;
            case (MR_Integer) 116:
              switch (MR_nth_code_unit(Var_631, 1)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 22;
                  break;
                case (MR_Integer) 114:
                  if (MR_offset_streq(2, Var_631, (MR_String) "track"))
                    case_num_0 = (MR_Integer) 23;
                  break;
              }
              break;
            case (MR_Integer) 119:
              switch (MR_nth_code_unit(Var_631, 1)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 24;
                  break;
                case (MR_Integer) 105:
                  if (MR_offset_streq(2, Var_631, (MR_String) "width"))
                    case_num_0 = (MR_Integer) 25;
                  break;
                case (MR_Integer) 114:
                  if (MR_offset_streq(2, Var_631, (MR_String) "write"))
                    case_num_0 = (MR_Integer) 26;
                  break;
              }
              break;
          }
          switch (case_num_0) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                // case "addr"
                ;
                {
                  MR_Word MaybePath_525;

                  if ((ArgTokens_6 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MaybePath_525 = (MR_Word) ((MR_Unsigned) 0U);
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word Path_518;

                    succeeded = mdb__parse__parse_path_2_p_0(ArgTokens_6, &Path_518);
                    if (succeeded)
                    {
                      {
                        MaybePath_525 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, MaybePath_525, 0) = ((MR_Box) (Path_518));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Command_8 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (MaybePath_525));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                // case "cd"
                ;
                if ((ArgTokens_6 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  *Command_8 = (MR_Word) ((MR_Unsigned) 8U);
                  succeeded = MR_TRUE;
                }
                else
                {
                  MR_Word Path_103;

                  succeeded = mdb__parse__parse_path_2_p_0(ArgTokens_6, &Path_103);
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Command_8 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (Path_103));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                // case "cdr"
                ;
                {
                  MR_Word TypeInfo_170_170;
                  MR_Word TypeCtorInfo_171_171;
                  MR_Integer Repetitions_22;
                  MR_Word TokenPath_23;
                  MR_Word DupTokenPath_24;
                  MR_Word RepeatedTokenPath_25;
                  MR_Word RepeatedPath_26;
                  MR_Word Var_60;

                  succeeded = (ArgTokens_6 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_60 = ((MR_Word) ((MR_hl_field(1, ArgTokens_6, 0))));
                    TokenPath_23 = ((MR_Word) ((MR_hl_field(1, ArgTokens_6, 1))));
                    succeeded = ((MR_tag((MR_Word) Var_60)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      Repetitions_22 = ((MR_Integer) ((MR_hl_field(1, Var_60, 0))));
                      TypeInfo_170_170 = (MR_Word) (&mdb__parse_scalar_common_1[0]);
                      mercury__list__duplicate_3_p_0(TypeInfo_170_170, Repetitions_22, ((MR_Box) (TokenPath_23)), &DupTokenPath_24);
                      TypeCtorInfo_171_171 = (MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_token_0);
                      mercury__list__condense_2_p_0(TypeCtorInfo_171_171, DupTokenPath_24, &RepeatedTokenPath_25);
                      succeeded = mdb__parse__parse_path_2_p_0(RepeatedTokenPath_25, &RepeatedPath_26);
                      if (succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *Command_8 = base;
                          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(3, base, 1) = ((MR_Box) (RepeatedPath_26));
                        }
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                // case "d"
                ;
                succeeded = (ArgTokens_6 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  *Command_8 = (MR_Word) ((MR_Unsigned) 0U);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                // case "depth"
                ;
                {
                  MR_Word FormatCmd_156;

                  if ((ArgTokens_6 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    FormatCmd_156 = (MR_Word) ((MR_Unsigned) 0U);
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word TypeCtorInfo_185_185;
                    MR_Integer N_44;
                    MR_Word Var_81;
                    MR_Word Var_82;
                    MR_Word RemainingTokens_136;
                    MR_Word ArgWords_137;
                    MR_Word OptionOps_138;
                    MR_Word RemainingWords_139;
                    MR_Word MaybeOptionTable0_140;
                    MR_Word MaybeOptionTable_141;
                    MR_Word Setting_142;

                    succeeded = (MaybeArgWords_7 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      ArgWords_137 = ((MR_Word) ((MR_hl_field(1, MaybeArgWords_7, 0))));
                      TypeCtorInfo_185_185 = (MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_setting_option_0);
                      OptionOps_138 = (MR_Word) (MR_mkword(2, &mdb__parse_scalar_common_4[9]));
                      mercury__getopt__process_options_4_p_0(TypeCtorInfo_185_185, OptionOps_138, ArgWords_137, &RemainingWords_139, &MaybeOptionTable0_140);
                      MaybeOptionTable_141 = mercury__getopt__convert_to_maybe_option_table_1_f_0(TypeCtorInfo_185_185, MaybeOptionTable0_140);
                      mdb__parse__lexer_words_2_p_0(RemainingWords_139, &RemainingTokens_136);
                      succeeded = (RemainingTokens_136 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_81 = ((MR_Word) ((MR_hl_field(1, RemainingTokens_136, 0))));
                        Var_82 = ((MR_Word) ((MR_hl_field(1, RemainingTokens_136, 1))));
                        succeeded = (Var_82 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = ((MR_tag((MR_Word) Var_81)) == (MR_Integer) 1);
                          if (succeeded)
                          {
                            N_44 = ((MR_Integer) ((MR_hl_field(1, Var_81, 0))));
                            {
                              Setting_142 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, Setting_142, 0) = ((MR_Box) (N_44));
                            }
                            {
                              FormatCmd_156 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(2, FormatCmd_156, 0) = ((MR_Box) (MaybeOptionTable_141));
                              MR_hl_field(2, FormatCmd_156, 1) = ((MR_Box) (Setting_142));
                            }
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                    }
                  }
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Command_8 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (FormatCmd_156));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 5:
              {
                // case "display"
                ;
                succeeded = (ArgTokens_6 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  *Command_8 = (MR_Word) ((MR_Unsigned) 0U);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                // case "format"
                ;
                {
                  MR_Word FormatCmd_37;

                  if ((ArgTokens_6 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    FormatCmd_37 = (MR_Word) ((MR_Unsigned) 0U);
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word TypeCtorInfo_178_178;
                    MR_Word Setting_40;
                    MR_Word RemainingTokens_118;
                    MR_Word ArgWords_119;
                    MR_Word OptionOps_120;
                    MR_Word RemainingWords_121;
                    MR_Word MaybeOptionTable0_122;
                    MR_Word MaybeOptionTable_123;

                    succeeded = (MaybeArgWords_7 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      ArgWords_119 = ((MR_Word) ((MR_hl_field(1, MaybeArgWords_7, 0))));
                      TypeCtorInfo_178_178 = (MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_setting_option_0);
                      OptionOps_120 = (MR_Word) (MR_mkword(2, &mdb__parse_scalar_common_4[13]));
                      mercury__getopt__process_options_4_p_0(TypeCtorInfo_178_178, OptionOps_120, ArgWords_119, &RemainingWords_121, &MaybeOptionTable0_122);
                      MaybeOptionTable_123 = mercury__getopt__convert_to_maybe_option_table_1_f_0(TypeCtorInfo_178_178, MaybeOptionTable0_122);
                      mdb__parse__lexer_words_2_p_0(RemainingWords_121, &RemainingTokens_118);
                      succeeded = mdb__parse__parse_format_2_p_0(RemainingTokens_118, &Setting_40);
                      if (succeeded)
                      {
                        {
                          FormatCmd_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, FormatCmd_37, 0) = ((MR_Box) (MaybeOptionTable_123));
                          MR_hl_field(1, FormatCmd_37, 1) = ((MR_Box) (Setting_40));
                        }
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Command_8 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (FormatCmd_37));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 7:
              {
                // case "h"
                ;
                succeeded = (ArgTokens_6 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  *Command_8 = (MR_Word) ((MR_Unsigned) 20U);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 8:
              {
                // case "help"
                ;
                succeeded = (ArgTokens_6 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  *Command_8 = (MR_Word) ((MR_Unsigned) 20U);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 9:
              {
                // case "lines"
                ;
                {
                  MR_Word FormatCmd_365;

                  if ((ArgTokens_6 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    FormatCmd_365 = (MR_Word) ((MR_Unsigned) 0U);
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word TypeCtorInfo_185_332;
                    MR_Integer N_319;
                    MR_Word Var_323;
                    MR_Word Var_324;
                    MR_Word RemainingTokens_325;
                    MR_Word ArgWords_326;
                    MR_Word OptionOps_327;
                    MR_Word RemainingWords_328;
                    MR_Word MaybeOptionTable0_329;
                    MR_Word MaybeOptionTable_330;
                    MR_Word Setting_331;

                    succeeded = (MaybeArgWords_7 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      ArgWords_326 = ((MR_Word) ((MR_hl_field(1, MaybeArgWords_7, 0))));
                      TypeCtorInfo_185_332 = (MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_setting_option_0);
                      OptionOps_327 = (MR_Word) (MR_mkword(2, &mdb__parse_scalar_common_4[17]));
                      mercury__getopt__process_options_4_p_0(TypeCtorInfo_185_332, OptionOps_327, ArgWords_326, &RemainingWords_328, &MaybeOptionTable0_329);
                      MaybeOptionTable_330 = mercury__getopt__convert_to_maybe_option_table_1_f_0(TypeCtorInfo_185_332, MaybeOptionTable0_329);
                      mdb__parse__lexer_words_2_p_0(RemainingWords_328, &RemainingTokens_325);
                      succeeded = (RemainingTokens_325 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_323 = ((MR_Word) ((MR_hl_field(1, RemainingTokens_325, 0))));
                        Var_324 = ((MR_Word) ((MR_hl_field(1, RemainingTokens_325, 1))));
                        succeeded = (Var_324 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = ((MR_tag((MR_Word) Var_323)) == (MR_Integer) 1);
                          if (succeeded)
                          {
                            N_319 = ((MR_Integer) ((MR_hl_field(1, Var_323, 0))));
                            {
                              Setting_331 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, Setting_331, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                              MR_hl_field(3, Setting_331, 1) = ((MR_Box) (N_319));
                            }
                            {
                              FormatCmd_365 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(2, FormatCmd_365, 0) = ((MR_Box) (MaybeOptionTable_330));
                              MR_hl_field(2, FormatCmd_365, 1) = ((MR_Box) (Setting_331));
                            }
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                    }
                  }
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Command_8 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (FormatCmd_365));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 10:
              {
                // case "ls"
                ;
                {
                  MR_Word MaybeMaybeOptionTable_605;
                  MR_Word RemainingTokens_606;
                  MR_Word MaybePath_612;

                  if ((MaybeArgWords_7 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MaybeMaybeOptionTable_605 = (MR_Word) ((MR_Unsigned) 0U);
                    RemainingTokens_606 = ArgTokens_6;
                  }
                  else
                  {
                    MR_Word ArgWords_579 = ((MR_Word) ((MR_hl_field(1, MaybeArgWords_7, 0))));
                    MR_Word RemainingWords_581;
                    MR_Word MaybeOptionTable0_582;
                    MR_Word MaybeOptionTable_583;

                    mercury__getopt__process_options_4_p_0((MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0), (MR_Word) (MR_mkword(2, &mdb__parse_scalar_common_4[21])), ArgWords_579, &RemainingWords_581, &MaybeOptionTable0_582);
                    MaybeOptionTable_583 = mercury__getopt__convert_to_maybe_option_table_1_f_0((MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0), MaybeOptionTable0_582);
                    {
                      MaybeMaybeOptionTable_605 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, MaybeMaybeOptionTable_605, 0) = ((MR_Box) (MaybeOptionTable_583));
                    }
                    mdb__parse__lexer_words_2_p_0(RemainingWords_581, &RemainingTokens_606);
                  }
                  if ((RemainingTokens_606 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MaybePath_612 = (MR_Word) ((MR_Unsigned) 0U);
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word Path_601;

                    succeeded = mdb__parse__parse_path_2_p_0(RemainingTokens_606, &Path_601);
                    if (succeeded)
                    {
                      {
                        MaybePath_612 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, MaybePath_612, 0) = ((MR_Box) (Path_601));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Command_8 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (MaybeMaybeOptionTable_605));
                      MR_hl_field(1, base, 1) = ((MR_Box) (MaybePath_612));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 11:
              {
                // case "m"
                ;
                {
                  MR_Word HowTrack_504;
                  MR_Word MaybePath_513;

                  if ((ArgTokens_6 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    HowTrack_504 = (MR_Integer) 1;
                    MaybePath_513 = (MR_Word) ((MR_Unsigned) 0U);
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word HeadArgToken_487 = ((MR_Word) ((MR_hl_field(1, ArgTokens_6, 0))));
                    MR_Word TailArgTokens_488 = ((MR_Word) ((MR_hl_field(1, ArgTokens_6, 1))));
                    MR_String Var_632;

                    succeeded = ((((MR_tag((MR_Word) HeadArgToken_487)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadArgToken_487, 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_632 = ((MR_String) ((MR_hl_field(3, HeadArgToken_487, 1))));
                      if ((strcmp(Var_632, (MR_String) "a") == 0))
                        succeeded = MR_TRUE;
                      else
                      if ((strcmp(Var_632, (MR_String) "accurate") == 0))
                        succeeded = MR_TRUE;
                      else
                        succeeded = MR_FALSE;
                    }
                    if (succeeded)
                    {
                      HowTrack_504 = (MR_Integer) 0;
                      if ((TailArgTokens_488 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        MaybePath_513 = (MR_Word) ((MR_Unsigned) 0U);
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        MR_Word Path_473;

                        succeeded = mdb__parse__parse_path_2_p_0(TailArgTokens_488, &Path_473);
                        if (succeeded)
                        {
                          {
                            MaybePath_513 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, MaybePath_513, 0) = ((MR_Box) (Path_473));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    else
                    {
                      MR_Word Path_480;

                      HowTrack_504 = (MR_Integer) 1;
                      succeeded = mdb__parse__parse_path_2_p_0(ArgTokens_6, &Path_480);
                      if (succeeded)
                      {
                        {
                          MaybePath_513 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, MaybePath_513, 0) = ((MR_Box) (Path_480));
                        }
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      *Command_8 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = (MR_Box) (((((MR_Unsigned) (HowTrack_504) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybePath_513));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 12:
              {
                // case "mark"
                ;
                {
                  MR_Word HowTrack_455;
                  MR_Word MaybePath_464;

                  if ((ArgTokens_6 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    HowTrack_455 = (MR_Integer) 1;
                    MaybePath_464 = (MR_Word) ((MR_Unsigned) 0U);
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word HeadArgToken_438 = ((MR_Word) ((MR_hl_field(1, ArgTokens_6, 0))));
                    MR_Word TailArgTokens_439 = ((MR_Word) ((MR_hl_field(1, ArgTokens_6, 1))));
                    MR_String Var_633;

                    succeeded = ((((MR_tag((MR_Word) HeadArgToken_438)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadArgToken_438, 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_633 = ((MR_String) ((MR_hl_field(3, HeadArgToken_438, 1))));
                      if ((strcmp(Var_633, (MR_String) "a") == 0))
                        succeeded = MR_TRUE;
                      else
                      if ((strcmp(Var_633, (MR_String) "accurate") == 0))
                        succeeded = MR_TRUE;
                      else
                        succeeded = MR_FALSE;
                    }
                    if (succeeded)
                    {
                      HowTrack_455 = (MR_Integer) 0;
                      if ((TailArgTokens_439 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        MaybePath_464 = (MR_Word) ((MR_Unsigned) 0U);
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        MR_Word Path_424;

                        succeeded = mdb__parse__parse_path_2_p_0(TailArgTokens_439, &Path_424);
                        if (succeeded)
                        {
                          {
                            MaybePath_464 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, MaybePath_464, 0) = ((MR_Box) (Path_424));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    else
                    {
                      MR_Word Path_431;

                      HowTrack_455 = (MR_Integer) 1;
                      succeeded = mdb__parse__parse_path_2_p_0(ArgTokens_6, &Path_431);
                      if (succeeded)
                      {
                        {
                          MaybePath_464 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, MaybePath_464, 0) = ((MR_Box) (Path_431));
                        }
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      *Command_8 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = (MR_Box) (((((MR_Unsigned) (HowTrack_455) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybePath_464));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 13:
              {
                // case "memory_addr"
                ;
                {
                  MR_Word MaybePath_101;

                  if ((ArgTokens_6 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MaybePath_101 = (MR_Word) ((MR_Unsigned) 0U);
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word Path_99;

                    succeeded = mdb__parse__parse_path_2_p_0(ArgTokens_6, &Path_99);
                    if (succeeded)
                    {
                      {
                        MaybePath_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, MaybePath_101, 0) = ((MR_Box) (Path_99));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Command_8 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (MaybePath_101));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 14:
              {
                // case "mode"
                ;
                if ((ArgTokens_6 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  *Command_8 = (MR_Word) ((MR_Unsigned) 16U);
                  succeeded = MR_TRUE;
                }
                else
                {
                  MR_Word Path_115;

                  succeeded = mdb__parse__parse_path_2_p_0(ArgTokens_6, &Path_115);
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Command_8 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (Path_115));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 15:
              {
                // case "num_io_actions"
                ;
                {
                  MR_Word Var_91;
                  MR_Word Var_92;
                  MR_Word Var_93;
                  MR_Integer N_162;

                  succeeded = (ArgTokens_6 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_91 = ((MR_Word) ((MR_hl_field(1, ArgTokens_6, 0))));
                    Var_92 = ((MR_Word) ((MR_hl_field(1, ArgTokens_6, 1))));
                    succeeded = (Var_92 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Var_91)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        N_162 = ((MR_Integer) ((MR_hl_field(1, Var_91, 0))));
                        {
                          Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_93, 0) = ((MR_Box) (N_162));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *Command_8 = base;
                          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                          MR_hl_field(3, base, 1) = ((MR_Box) (Var_93));
                        }
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 16:
              {
                // case "p"
                ;
                {
                  MR_Word MaybeMaybeOptionTable_558;
                  MR_Word RemainingTokens_559;
                  MR_Word MaybePath_565;

                  if ((MaybeArgWords_7 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MaybeMaybeOptionTable_558 = (MR_Word) ((MR_Unsigned) 0U);
                    RemainingTokens_559 = ArgTokens_6;
                  }
                  else
                  {
                    MR_Word ArgWords_532 = ((MR_Word) ((MR_hl_field(1, MaybeArgWords_7, 0))));
                    MR_Word RemainingWords_534;
                    MR_Word MaybeOptionTable0_535;
                    MR_Word MaybeOptionTable_536;

                    mercury__getopt__process_options_4_p_0((MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0), (MR_Word) (MR_mkword(2, &mdb__parse_scalar_common_4[25])), ArgWords_532, &RemainingWords_534, &MaybeOptionTable0_535);
                    MaybeOptionTable_536 = mercury__getopt__convert_to_maybe_option_table_1_f_0((MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0), MaybeOptionTable0_535);
                    {
                      MaybeMaybeOptionTable_558 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, MaybeMaybeOptionTable_558, 0) = ((MR_Box) (MaybeOptionTable_536));
                    }
                    mdb__parse__lexer_words_2_p_0(RemainingWords_534, &RemainingTokens_559);
                  }
                  if ((RemainingTokens_559 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MaybePath_565 = (MR_Word) ((MR_Unsigned) 0U);
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word Path_554;

                    succeeded = mdb__parse__parse_path_2_p_0(RemainingTokens_559, &Path_554);
                    if (succeeded)
                    {
                      {
                        MaybePath_565 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, MaybePath_565, 0) = ((MR_Box) (Path_554));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Command_8 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (MaybeMaybeOptionTable_558));
                      MR_hl_field(1, base, 1) = ((MR_Box) (MaybePath_565));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 17:
              {
                // case "params"
                ;
                *Command_8 = (MR_Word) (MR_mkword(3, &mdb__parse_scalar_common_1[5]));
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 18:
              {
                // case "print"
                ;
                {
                  MR_Word MaybeMaybeOptionTable_9;
                  MR_Word RemainingTokens_10;
                  MR_Word MaybePath_16;

                  if ((MaybeArgWords_7 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MaybeMaybeOptionTable_9 = (MR_Word) ((MR_Unsigned) 0U);
                    RemainingTokens_10 = ArgTokens_6;
                  }
                  else
                  {
                    MR_Word ArgWords_11 = ((MR_Word) ((MR_hl_field(1, MaybeArgWords_7, 0))));
                    MR_Word RemainingWords_13;
                    MR_Word MaybeOptionTable0_14;
                    MR_Word MaybeOptionTable_15;

                    mercury__getopt__process_options_4_p_0((MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0), (MR_Word) (MR_mkword(2, &mdb__parse_scalar_common_4[29])), ArgWords_11, &RemainingWords_13, &MaybeOptionTable0_14);
                    MaybeOptionTable_15 = mercury__getopt__convert_to_maybe_option_table_1_f_0((MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0), MaybeOptionTable0_14);
                    {
                      MaybeMaybeOptionTable_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, MaybeMaybeOptionTable_9, 0) = ((MR_Box) (MaybeOptionTable_15));
                    }
                    mdb__parse__lexer_words_2_p_0(RemainingWords_13, &RemainingTokens_10);
                  }
                  if ((RemainingTokens_10 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MaybePath_16 = (MR_Word) ((MR_Unsigned) 0U);
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word Path_19;

                    succeeded = mdb__parse__parse_path_2_p_0(RemainingTokens_10, &Path_19);
                    if (succeeded)
                    {
                      {
                        MaybePath_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, MaybePath_16, 0) = ((MR_Box) (Path_19));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Command_8 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (MaybeMaybeOptionTable_9));
                      MR_hl_field(1, base, 1) = ((MR_Box) (MaybePath_16));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 19:
              {
                // case "pwd"
                ;
                succeeded = (ArgTokens_6 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  *Command_8 = (MR_Word) ((MR_Unsigned) 12U);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 20:
              {
                // case "quit"
                ;
                succeeded = (ArgTokens_6 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  *Command_8 = (MR_Word) ((MR_Unsigned) 24U);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 21:
              {
                // case "size"
                ;
                {
                  MR_Word FormatCmd_249;

                  if ((ArgTokens_6 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    FormatCmd_249 = (MR_Word) ((MR_Unsigned) 0U);
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word TypeCtorInfo_185_216;
                    MR_Integer N_203;
                    MR_Word Var_207;
                    MR_Word Var_208;
                    MR_Word RemainingTokens_209;
                    MR_Word ArgWords_210;
                    MR_Word OptionOps_211;
                    MR_Word RemainingWords_212;
                    MR_Word MaybeOptionTable0_213;
                    MR_Word MaybeOptionTable_214;
                    MR_Word Setting_215;

                    succeeded = (MaybeArgWords_7 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      ArgWords_210 = ((MR_Word) ((MR_hl_field(1, MaybeArgWords_7, 0))));
                      TypeCtorInfo_185_216 = (MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_setting_option_0);
                      OptionOps_211 = (MR_Word) (MR_mkword(2, &mdb__parse_scalar_common_4[33]));
                      mercury__getopt__process_options_4_p_0(TypeCtorInfo_185_216, OptionOps_211, ArgWords_210, &RemainingWords_212, &MaybeOptionTable0_213);
                      MaybeOptionTable_214 = mercury__getopt__convert_to_maybe_option_table_1_f_0(TypeCtorInfo_185_216, MaybeOptionTable0_213);
                      mdb__parse__lexer_words_2_p_0(RemainingWords_212, &RemainingTokens_209);
                      succeeded = (RemainingTokens_209 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_207 = ((MR_Word) ((MR_hl_field(1, RemainingTokens_209, 0))));
                        Var_208 = ((MR_Word) ((MR_hl_field(1, RemainingTokens_209, 1))));
                        succeeded = (Var_208 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = ((MR_tag((MR_Word) Var_207)) == (MR_Integer) 1);
                          if (succeeded)
                          {
                            N_203 = ((MR_Integer) ((MR_hl_field(1, Var_207, 0))));
                            {
                              Setting_215 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Setting_215, 0) = ((MR_Box) (N_203));
                            }
                            {
                              FormatCmd_249 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(2, FormatCmd_249, 0) = ((MR_Box) (MaybeOptionTable_214));
                              MR_hl_field(2, FormatCmd_249, 1) = ((MR_Box) (Setting_215));
                            }
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                    }
                  }
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Command_8 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (FormatCmd_249));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 22:
              {
                // case "t"
                ;
                {
                  MR_Word HowTrack_406;
                  MR_Word MaybePath_415;

                  if ((ArgTokens_6 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    HowTrack_406 = (MR_Integer) 1;
                    MaybePath_415 = (MR_Word) ((MR_Unsigned) 0U);
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word HeadArgToken_389 = ((MR_Word) ((MR_hl_field(1, ArgTokens_6, 0))));
                    MR_Word TailArgTokens_390 = ((MR_Word) ((MR_hl_field(1, ArgTokens_6, 1))));
                    MR_String Var_634;

                    succeeded = ((((MR_tag((MR_Word) HeadArgToken_389)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadArgToken_389, 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_634 = ((MR_String) ((MR_hl_field(3, HeadArgToken_389, 1))));
                      if ((strcmp(Var_634, (MR_String) "a") == 0))
                        succeeded = MR_TRUE;
                      else
                      if ((strcmp(Var_634, (MR_String) "accurate") == 0))
                        succeeded = MR_TRUE;
                      else
                        succeeded = MR_FALSE;
                    }
                    if (succeeded)
                    {
                      HowTrack_406 = (MR_Integer) 0;
                      if ((TailArgTokens_390 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        MaybePath_415 = (MR_Word) ((MR_Unsigned) 0U);
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        MR_Word Path_375;

                        succeeded = mdb__parse__parse_path_2_p_0(TailArgTokens_390, &Path_375);
                        if (succeeded)
                        {
                          {
                            MaybePath_415 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, MaybePath_415, 0) = ((MR_Box) (Path_375));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    else
                    {
                      MR_Word Path_382;

                      HowTrack_406 = (MR_Integer) 1;
                      succeeded = mdb__parse__parse_path_2_p_0(ArgTokens_6, &Path_382);
                      if (succeeded)
                      {
                        {
                          MaybePath_415 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, MaybePath_415, 0) = ((MR_Box) (Path_382));
                        }
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      *Command_8 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = (MR_Box) (((((MR_Unsigned) (HowTrack_406) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybePath_415));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 23:
              {
                // case "track"
                ;
                {
                  MR_Word HowTrack_30;
                  MR_Word MaybePath_113;

                  if ((ArgTokens_6 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    HowTrack_30 = (MR_Integer) 1;
                    MaybePath_113 = (MR_Word) ((MR_Unsigned) 0U);
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word HeadArgToken_31 = ((MR_Word) ((MR_hl_field(1, ArgTokens_6, 0))));
                    MR_Word TailArgTokens_32 = ((MR_Word) ((MR_hl_field(1, ArgTokens_6, 1))));
                    MR_String Var_635;

                    succeeded = ((((MR_tag((MR_Word) HeadArgToken_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadArgToken_31, 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_635 = ((MR_String) ((MR_hl_field(3, HeadArgToken_31, 1))));
                      if ((strcmp(Var_635, (MR_String) "a") == 0))
                        succeeded = MR_TRUE;
                      else
                      if ((strcmp(Var_635, (MR_String) "accurate") == 0))
                        succeeded = MR_TRUE;
                      else
                        succeeded = MR_FALSE;
                    }
                    if (succeeded)
                    {
                      HowTrack_30 = (MR_Integer) 0;
                      if ((TailArgTokens_32 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        MaybePath_113 = (MR_Word) ((MR_Unsigned) 0U);
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        MR_Word Path_106;

                        succeeded = mdb__parse__parse_path_2_p_0(TailArgTokens_32, &Path_106);
                        if (succeeded)
                        {
                          {
                            MaybePath_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, MaybePath_113, 0) = ((MR_Box) (Path_106));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    else
                    {
                      MR_Word Path_109;

                      HowTrack_30 = (MR_Integer) 1;
                      succeeded = mdb__parse__parse_path_2_p_0(ArgTokens_6, &Path_109);
                      if (succeeded)
                      {
                        {
                          MaybePath_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, MaybePath_113, 0) = ((MR_Box) (Path_109));
                        }
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      *Command_8 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = (MR_Box) (((((MR_Unsigned) (HowTrack_30) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybePath_113));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 24:
              {
                // case "w"
                ;
                succeeded = (ArgTokens_6 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  *Command_8 = (MR_Word) ((MR_Unsigned) 4U);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 25:
              {
                // case "width"
                ;
                {
                  MR_Word FormatCmd_307;

                  if ((ArgTokens_6 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    FormatCmd_307 = (MR_Word) ((MR_Unsigned) 0U);
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word TypeCtorInfo_185_274;
                    MR_Integer N_261;
                    MR_Word Var_265;
                    MR_Word Var_266;
                    MR_Word RemainingTokens_267;
                    MR_Word ArgWords_268;
                    MR_Word OptionOps_269;
                    MR_Word RemainingWords_270;
                    MR_Word MaybeOptionTable0_271;
                    MR_Word MaybeOptionTable_272;
                    MR_Word Setting_273;

                    succeeded = (MaybeArgWords_7 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      ArgWords_268 = ((MR_Word) ((MR_hl_field(1, MaybeArgWords_7, 0))));
                      TypeCtorInfo_185_274 = (MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_setting_option_0);
                      OptionOps_269 = (MR_Word) (MR_mkword(2, &mdb__parse_scalar_common_4[37]));
                      mercury__getopt__process_options_4_p_0(TypeCtorInfo_185_274, OptionOps_269, ArgWords_268, &RemainingWords_270, &MaybeOptionTable0_271);
                      MaybeOptionTable_272 = mercury__getopt__convert_to_maybe_option_table_1_f_0(TypeCtorInfo_185_274, MaybeOptionTable0_271);
                      mdb__parse__lexer_words_2_p_0(RemainingWords_270, &RemainingTokens_267);
                      succeeded = (RemainingTokens_267 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_265 = ((MR_Word) ((MR_hl_field(1, RemainingTokens_267, 0))));
                        Var_266 = ((MR_Word) ((MR_hl_field(1, RemainingTokens_267, 1))));
                        succeeded = (Var_266 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = ((MR_tag((MR_Word) Var_265)) == (MR_Integer) 1);
                          if (succeeded)
                          {
                            N_261 = ((MR_Integer) ((MR_hl_field(1, Var_265, 0))));
                            {
                              Setting_273 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(2, Setting_273, 0) = ((MR_Box) (N_261));
                            }
                            {
                              FormatCmd_307 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(2, FormatCmd_307, 0) = ((MR_Box) (MaybeOptionTable_272));
                              MR_hl_field(2, FormatCmd_307, 1) = ((MR_Box) (Setting_273));
                            }
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                    }
                  }
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Command_8 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (FormatCmd_307));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 26:
              {
                // case "write"
                ;
                succeeded = (ArgTokens_6 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  *Command_8 = (MR_Word) ((MR_Unsigned) 4U);
                  succeeded = MR_TRUE;
                }
              }
              break;
          }
        }
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__parse__parse_format_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Setting_4)
{
  MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Token_3;
  MR_String TokenName_5;
  MR_Word Var_6;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

  if (succeeded)
  {
    Token_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    succeeded = (Var_6 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Token_3)) == (MR_Integer) 2);
      if (succeeded)
      {
        TokenName_5 = ((MR_String) ((MR_hl_field(2, Token_3, 0))));
        // binary string simple lookup switch
        ;
        lo_0 = (MR_Integer) 0;
        hi_1 = (MR_Integer) 3;
        do
        {
          mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
          result_3 = MR_strcmp(TokenName_5, ((&mdb__parse_vector_common_5[0 + mid_2]))->mdb__parse__vector_common_type_5_0__vct_5_f_0);
          if ((result_3 == (MR_Integer) 0))
          {
            *Setting_4 = ((&mdb__parse_vector_common_5[0 + mid_2]))->mdb__parse__vector_common_type_5_0__vct_5_f_1;
            succeeded = MR_TRUE;
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
        succeeded = MR_FALSE;
      label_0:;
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__parse__parse_path_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Path_5)
{
  MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Token_3;
  MR_Word Tokens_4;

  if (succeeded)
  {
    Token_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    Tokens_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    succeeded = (Token_3 == (MR_Word) ((MR_Unsigned) 8U));
    if (succeeded)
    {
      MR_Word Dirs_6;

      succeeded = mdb__parse__parse_up_down_dirs_2_p_0(Tokens_4, &Dirs_6);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Path_5 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Dirs_6));
        }
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word Dirs_8;

      succeeded = mdb__parse__parse_up_down_dirs_2_p_0(HeadVar__1_1, &Dirs_8);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Path_5 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Dirs_8));
        }
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__parse__parse_up_down_dirs_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Token_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Tokens_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));

      switch (MR_tag((MR_Word) Token_3)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          switch (MR_unmkbody(Token_3)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word RestDirs_13;

                succeeded = mdb__parse__parse_up_down_dirs_2_p_0(Tokens_4, &RestDirs_13);
                if (succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__2_2 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(1, base, 1) = ((MR_Box) (RestDirs_13));
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word next_value_of_HeadVar__1_1 = Tokens_4;

                // direct tailcall eliminated
                ;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word next_value_of_HeadVar__1_1 = Tokens_4;

                // direct tailcall eliminated
                ;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Subdir_6 = ((MR_Integer) ((MR_hl_field(1, Token_3, 0))));
            MR_Word RestDirs_7;
            MR_Word Var_9;

            {
              Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_9, 0) = ((MR_Box) (Subdir_6));
            }
            succeeded = mdb__parse__parse_up_down_dirs_2_p_0(Tokens_4, &RestDirs_7);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__2_2 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_9));
                MR_hl_field(1, base, 1) = ((MR_Box) (RestDirs_7));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String NamedSubdir_8 = ((MR_String) ((MR_hl_field(2, Token_3, 0))));
            MR_Word Var_10;
            MR_Word RestDirs_12;

            {
              Var_10 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_10, 0) = ((MR_Box) (NamedSubdir_8));
            }
            succeeded = mdb__parse__parse_up_down_dirs_2_p_0(Tokens_4, &RestDirs_12);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__2_2 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_10));
                MR_hl_field(1, base, 1) = ((MR_Box) (RestDirs_12));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
mdb__parse__lexer_words_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String Word_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Words_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word WordTokens_6;
    MR_Word WordsTokens_7;
    MR_Word Chars_9;

    mercury__string__to_char_list_2_p_0(Word_3, &Chars_9);
    mdb__parse__lexer_word_chars_2_p_0(Chars_9, &WordTokens_6);
    mdb__parse__lexer_words_2_p_0(Words_4, &WordsTokens_7);
    *HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_token_0), WordTokens_6, WordsTokens_7);
  }
}

static MR_bool MR_CALL 
mdb__parse__lexer_word_chars_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__char__is_alnum_or_underscore_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

static MR_bool MR_CALL 
mdb__parse__lexer_word_chars_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__char__is_digit_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

static void MR_CALL 
mdb__parse__lexer_word_chars_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Char C_3 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__1_1, 0)));
      MR_Word Cs_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));

      succeeded = (C_3 == (MR_Char) 46);
      if (succeeded)
        if ((Cs_4 == (MR_Word) ((MR_Unsigned) 0U)))
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Char C_14 = ((MR_Char) (MR_Word) (MR_hl_field(1, Cs_4, 0)));
          MR_Word Cs_15 = ((MR_Word) ((MR_hl_field(1, Cs_4, 1))));

          succeeded = (C_14 == (MR_Char) 46);
          if (succeeded)
          {
            MR_Word TailTokens_17;

            mdb__parse__lexer_word_chars_2_p_0(Cs_15, &TailTokens_17);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(1, base, 1) = ((MR_Box) (TailTokens_17));
            }
          }
          else
          {
            MR_Word TailTokens_21;

            mdb__parse__lexer_word_chars_2_p_0(Cs_4, &TailTokens_21);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, base, 1) = ((MR_Box) (TailTokens_21));
            }
          }
        }
      else
      {
        MR_Word Token_6;

        switch (C_3) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Char) 47:
            {
              Token_6 = (MR_Word) ((MR_Unsigned) 8U);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Char) 60:
            {
              Token_6 = (MR_Word) ((MR_Unsigned) 20U);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Char) 63:
            {
              Token_6 = (MR_Word) ((MR_Unsigned) 12U);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Char) 94:
            {
              Token_6 = (MR_Word) ((MR_Unsigned) 16U);
              succeeded = MR_TRUE;
            }
            break;
        }
        if (succeeded)
        {
          MR_Word TailTokens_7;

          mdb__parse__lexer_word_chars_2_p_0(Cs_4, &TailTokens_7);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Token_6));
            MR_hl_field(1, base, 1) = ((MR_Box) (TailTokens_7));
          }
        }
        else
        {
          MR_Char H_8;
          MR_Word T_9;

          succeeded = (C_3 == (MR_Char) 45);
          if (succeeded)
          {
            succeeded = (Cs_4 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              H_8 = ((MR_Char) (MR_Word) (MR_hl_field(1, Cs_4, 0)));
              T_9 = ((MR_Word) ((MR_hl_field(1, Cs_4, 1))));
            }
          }
          if (succeeded)
          {
            MR_String ArgName_24;
            MR_Word Var_26;

            succeeded = (H_8 == (MR_Char) 45);
            if (succeeded)
              mercury__string__from_char_list_2_p_0(T_9, &ArgName_24);
            else
              mercury__string__from_char_list_2_p_0(Cs_4, &ArgName_24);
            {
              Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_26, 1) = ((MR_Box) (ArgName_24));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_26));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          else
          {
            succeeded = mercury__char__is_digit_1_p_0(C_3);
            if (succeeded)
            {
              MR_Integer N_10;
              MR_Integer Zero_28;
              MR_Integer CN_29;
              MR_Word Digits_31;
              MR_Word TailCs_32;
              MR_Integer Num_33;
              MR_Word TailTokens_34;
              MR_Word Var_36;

              mercury__char__to_int_2_p_0((MR_Char) 48, &Zero_28);
              mercury__char__to_int_2_p_0(C_3, &CN_29);
              N_10 = (MR_Integer) ((MR_Unsigned) CN_29 - (MR_Unsigned) Zero_28);
              mercury__list__take_while_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&mdb__parse_scalar_common_4[0]), Cs_4, &Digits_31, &TailCs_32);
              mdb__parse__digits_to_int_acc_3_p_0(N_10, Digits_31, &Num_33);
              mdb__parse__lexer_word_chars_2_p_0(TailCs_32, &TailTokens_34);
              {
                Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_36, 0) = ((MR_Box) (Num_33));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__2_2 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_36));
                MR_hl_field(1, base, 1) = ((MR_Box) (TailTokens_34));
              }
            }
            else
            {
              succeeded = mercury__char__is_alpha_or_underscore_1_p_0(C_3);
              if (succeeded)
              {
                MR_Word LetterCs_38;
                MR_Word TailCs_39;
                MR_String Name_40;
                MR_Word TailTokens_41;
                MR_Word Var_43;
                MR_Word Var_44;

                mercury__list__take_while_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&mdb__parse_scalar_common_4[1]), Cs_4, &LetterCs_38, &TailCs_39);
                {
                  Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_Word) (C_3));
                  MR_hl_field(1, Var_43, 1) = ((MR_Box) (LetterCs_38));
                }
                mercury__string__from_char_list_2_p_0(Var_43, &Name_40);
                mdb__parse__lexer_word_chars_2_p_0(TailCs_39, &TailTokens_41);
                {
                  Var_44 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Var_44, 0) = ((MR_Box) (Name_40));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__2_2 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_44));
                  MR_hl_field(1, base, 1) = ((MR_Box) (TailTokens_41));
                }
              }
              else
              {
                succeeded = mercury__char__is_whitespace_1_p_0(C_3);
                if (succeeded)
                {
                  MR_Word next_value_of_HeadVar__1_1 = Cs_4;

                  // direct tailcall eliminated
                  ;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
                else
                {
                  MR_Word Var_12;
                  MR_Word TailTokens_13;

                  mdb__parse__lexer_word_chars_2_p_0(Cs_4, &TailTokens_13);
                  {
                    Var_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_12, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, Var_12, 1) = ((MR_Box) (MR_Word) (C_3));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__2_2 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Var_12));
                    MR_hl_field(1, base, 1) = ((MR_Box) (TailTokens_13));
                  }
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
mdb__parse__digits_to_int_acc_3_p_0(
  MR_Integer Acc_1,
  MR_Word HeadVar__2_2,
  MR_Integer * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = Acc_1;
    else
    {
      MR_Char C_6 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__2_2, 0)));
      MR_Word Cs_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Integer Digit_9;
      MR_Integer NextAcc_10;
      MR_Integer Var_11;
      MR_Integer Zero_13;
      MR_Integer CN_14;
      MR_Integer next_value_of_Acc_1;
      MR_Word next_value_of_HeadVar__2_2;

      mercury__char__to_int_2_p_0((MR_Char) 48, &Zero_13);
      mercury__char__to_int_2_p_0(C_6, &CN_14);
      Digit_9 = (MR_Integer) ((MR_Unsigned) CN_14 - (MR_Unsigned) Zero_13);
      Var_11 = (MR_Integer) ((MR_Unsigned) 10 * (MR_Unsigned) Acc_1);
      NextAcc_10 = (MR_Integer) ((MR_Unsigned) Var_11 + (MR_Unsigned) Digit_9);
      // direct tailcall eliminated
      ;
      next_value_of_Acc_1 = NextAcc_10;
      next_value_of_HeadVar__2_2 = Cs_7;
      Acc_1 = next_value_of_Acc_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
mdb__parse____Unify____command_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__parse____Unify____command_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__parse____Compare____command_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__parse____Compare____command_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__parse____Unify____external_request_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__parse____Unify____external_request_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__parse____Compare____external_request_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__parse____Compare____external_request_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__parse____Unify____format_option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__parse____Unify____format_option_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__parse____Compare____format_option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__parse____Compare____format_option_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__parse____Unify____format_param_cmd_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__parse____Unify____format_param_cmd_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__parse____Compare____format_param_cmd_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__parse____Compare____format_param_cmd_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__parse____Unify____path_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__parse____Unify____path_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__parse____Compare____path_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__parse____Compare____path_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__parse____Unify____setting_option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__parse____Unify____setting_option_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__parse____Compare____setting_option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__parse____Compare____setting_option_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__parse____Unify____token_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__parse____Unify____token_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__parse____Compare____token_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__parse____Compare____token_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__mdb__parse__init(void)
{
}

void mercury__mdb__parse__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&mdb__parse__mdb__parse__type_ctor_info_command_0);
  MR_register_type_ctor_info(&mdb__parse__mdb__parse__type_ctor_info_external_request_0);
  MR_register_type_ctor_info(&mdb__parse__mdb__parse__type_ctor_info_format_option_0);
  MR_register_type_ctor_info(&mdb__parse__mdb__parse__type_ctor_info_format_param_cmd_0);
  MR_register_type_ctor_info(&mdb__parse__mdb__parse__type_ctor_info_path_0);
  MR_register_type_ctor_info(&mdb__parse__mdb__parse__type_ctor_info_setting_option_0);
  MR_register_type_ctor_info(&mdb__parse__mdb__parse__type_ctor_info_token_0);
}

void mercury__mdb__parse__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__parse__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module mdb.parse.
