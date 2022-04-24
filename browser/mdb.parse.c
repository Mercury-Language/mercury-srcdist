/*
** Automatically generated from `parse.m'
** by the Mercury compiler,
** version rotd-2022-04-24
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



struct mdb__parse__parse_cmd_4_p_0_16_env_0_s {
  MR_Box * mdb__parse__parse_cmd_4_p_0_16_env_0__wrapper_arg_1;
  MR_Box * mdb__parse__parse_cmd_4_p_0_16_env_0__wrapper_arg_2;
  MR_Cont mdb__parse__parse_cmd_4_p_0_16_env_0__cont;
  void * mdb__parse__parse_cmd_4_p_0_16_env_0__cont_env_ptr;
  MR_Word mdb__parse__parse_cmd_4_p_0_16_env_0__conv15_HeadVar__1_1;
  MR_Word mdb__parse__parse_cmd_4_p_0_16_env_0__conv14_HeadVar__2_2;
};

struct mdb__parse__parse_cmd_4_p_0_12_env_0_s {
  MR_Box * mdb__parse__parse_cmd_4_p_0_12_env_0__wrapper_arg_1;
  MR_Box * mdb__parse__parse_cmd_4_p_0_12_env_0__wrapper_arg_2;
  MR_Cont mdb__parse__parse_cmd_4_p_0_12_env_0__cont;
  void * mdb__parse__parse_cmd_4_p_0_12_env_0__cont_env_ptr;
  MR_Word mdb__parse__parse_cmd_4_p_0_12_env_0__conv11_HeadVar__1_1;
  MR_Word mdb__parse__parse_cmd_4_p_0_12_env_0__conv10_HeadVar__2_2;
};

struct mdb__parse__parse_cmd_4_p_0_8_env_0_s {
  MR_Box * mdb__parse__parse_cmd_4_p_0_8_env_0__wrapper_arg_1;
  MR_Box * mdb__parse__parse_cmd_4_p_0_8_env_0__wrapper_arg_2;
  MR_Cont mdb__parse__parse_cmd_4_p_0_8_env_0__cont;
  void * mdb__parse__parse_cmd_4_p_0_8_env_0__cont_env_ptr;
  MR_Word mdb__parse__parse_cmd_4_p_0_8_env_0__conv7_HeadVar__1_1;
  MR_Word mdb__parse__parse_cmd_4_p_0_8_env_0__conv6_HeadVar__2_2;
};

struct mdb__parse__parse_cmd_4_p_0_4_env_0_s {
  MR_Box * mdb__parse__parse_cmd_4_p_0_4_env_0__wrapper_arg_1;
  MR_Box * mdb__parse__parse_cmd_4_p_0_4_env_0__wrapper_arg_2;
  MR_Cont mdb__parse__parse_cmd_4_p_0_4_env_0__cont;
  void * mdb__parse__parse_cmd_4_p_0_4_env_0__cont_env_ptr;
  MR_Word mdb__parse__parse_cmd_4_p_0_4_env_0__conv3_HeadVar__1_1;
  MR_Word mdb__parse__parse_cmd_4_p_0_4_env_0__conv2_HeadVar__2_2;
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
mdb__parse__read_command_external_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mdb__parse__read_command_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_15(
  void * env_ptr_arg);

static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_16(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_11(
  void * env_ptr_arg);

static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_12(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_8(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0(
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
mdb__parse__param_cmd_to_setting_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer N_2,
  MR_Word * HeadVar__3_3);

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

static /* final */ const MR_Box mdb__parse_scalar_common_4[20][3];

static /* final */ const MR_Box mdb__parse_scalar_common_5[6][5];


struct mdb__parse__vector_common_type_6_0_s {
  const MR_String mdb__parse__vector_common_type_6_0__vct_6_f_0;
  const MR_Word mdb__parse__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct mdb__parse__vector_common_type_6_0_s mdb__parse_vector_common_6[4];

struct mdb__parse__vector_common_type_7_0_s {
  const MR_String mdb__parse__vector_common_type_7_0__vct_7_f_0;
  const MR_Word mdb__parse__vector_common_type_7_0__vct_7_f_1;
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
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_maybe_option_table_1)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__parse_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_path_0))
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
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
};

static /* final */ const MR_Box mdb__parse_scalar_common_2[1][1] = {
  /* row   0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
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

static /* final */ const MR_Box mdb__parse_scalar_common_4[20][3] = {
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
    ((MR_Box) (&mdb__parse_scalar_common_5[0])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_5[1])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_5[2])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_4)),
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
    ((MR_Box) (&mdb__parse_scalar_common_5[3])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_5[4])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_5[5])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_8)),
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
    ((MR_Box) (&mdb__parse_scalar_common_5[3])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_5[4])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_5[5])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_12)),
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
    ((MR_Box) (&mdb__parse_scalar_common_5[3])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_13)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_5[4])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_14)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_5[5])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_16)),
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
    ((MR_Box) (&mdb__parse_scalar_common_3[0])),
    ((MR_Box) (mdb__parse__read_command_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_3[0])),
    ((MR_Box) (mdb__parse__read_command_external_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__parse_scalar_common_5[6][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_setting_option_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_setting_option_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_setting_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};


static /* final */ const struct mdb__parse__vector_common_type_6_0_s mdb__parse_vector_common_6[4] = {
  /* row   0 */
  {
    (MR_String) "m",
    (MR_Integer) 0
  },
  /* row   1 */
  {
    (MR_String) "mark",
    (MR_Integer) 0
  },
  /* row   2 */
  {
    (MR_String) "t",
    (MR_Integer) 1
  },
  /* row   3 */
  {
    (MR_String) "track",
    (MR_Integer) 1
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
    (MR_Integer) 3
  },
  /* row   2 */
  {
    (MR_String) "size",
    (MR_Integer) 1
  },
  /* row   3 */
  {
    (MR_String) "width",
    (MR_Integer) 2
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
    (MR_Word) (MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_2[0]))
  },
  /* row   1 */
  {
    (MR_Integer) 1,
    (MR_Word) (MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_2[0]))
  },
  /* row   2 */
  {
    (MR_Integer) 2,
    (MR_Word) (MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_2[0]))
  },
  /* row   3 */
  {
    (MR_Integer) 3,
    (MR_Word) (MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_2[0]))
  },
};

static /* final */ const struct mdb__parse__vector_common_type_10_0_s mdb__parse_vector_common_10[14] = {
  /* row   0 */
  {
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_2[0]))
  },
  /* row   1 */
  {
    (MR_Integer) 1,
    (MR_Word) (MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_2[0]))
  },
  /* row   2 */
  {
    (MR_Integer) 2,
    (MR_Word) (MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_2[0]))
  },
  /* row   3 */
  {
    (MR_Integer) 3,
    (MR_Word) (MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_2[0]))
  },
  /* row   4 */
  {
    (MR_Integer) 4,
    (MR_Word) (MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_2[0]))
  },
  /* row   5 */
  {
    (MR_Integer) 5,
    (MR_Word) (MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_2[0]))
  },
  /* row   6 */
  {
    (MR_Integer) 6,
    (MR_Word) (MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_2[0]))
  },
  /* row   7 */
  {
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_2[0]))
  },
  /* row   8 */
  {
    (MR_Integer) 1,
    (MR_Word) (MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_2[0]))
  },
  /* row   9 */
  {
    (MR_Integer) 2,
    (MR_Word) (MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_2[0]))
  },
  /* row  10 */
  {
    (MR_Integer) 3,
    (MR_Word) (MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_2[0]))
  },
  /* row  11 */
  {
    (MR_Integer) 4,
    (MR_Word) (MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_2[0]))
  },
  /* row  12 */
  {
    (MR_Integer) 5,
    (MR_Word) (MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_2[0]))
  },
  /* row  13 */
  {
    (MR_Integer) 6,
    (MR_Word) (MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_2[0]))
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



static const MR_FA_TypeInfo_Struct1 mdb__parse__getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_format_option_0 = {
  &mercury__getopt__getopt__type_ctor_info_maybe_option_table_1,
  {
    (MR_TypeInfo) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__parse__maybe__ti_maybe_1getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_format_option_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mdb__parse__getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_format_option_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__parse__maybe__ti_maybe_1mdb__parse__type_ctor_info_path_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mdb__parse__mdb__parse__type_ctor_info_path_0)
  }
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

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_3[1] = {
  (MR_PseudoTypeInfo) (&mdb__parse__maybe__ti_maybe_1mdb__parse__type_ctor_info_path_0)
};

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

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_4[1] = {
  (MR_PseudoTypeInfo) (&mdb__parse__mdb__parse__type_ctor_info_path_0)
};

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

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_8[1] = {
  (MR_PseudoTypeInfo) (&mdb__parse__mdb__parse__type_ctor_info_path_0)
};

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

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_10[1] = {
  (MR_PseudoTypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_param_cmd_0)
};

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

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_command_0_1[1] = {
  &mdb__parse__mdb__parse__du_functor_desc_command_0_0
};

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_command_0_2[1] = {
  &mdb__parse__mdb__parse__du_functor_desc_command_0_3
};

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

static const MR_Integer mdb__parse__mdb__parse__functor_number_map_external_request_0[1] = {
  (MR_Integer) 0
};

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
  {
    (MR_TypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0)
  }
};

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_path_0_0[1] = {
  (MR_PseudoTypeInfo) (&mdb__parse__list__ti_list_1mdb__browser_info__type_ctor_info_up_down_dir_0)
};

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

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_path_0_1[1] = {
  (MR_PseudoTypeInfo) (&mdb__parse__list__ti_list_1mdb__browser_info__type_ctor_info_up_down_dir_0)
};

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

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_path_0_0[1] = {
  &mdb__parse__mdb__parse__du_functor_desc_path_0_0
};

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_path_0_1[1] = {
  &mdb__parse__mdb__parse__du_functor_desc_path_0_1
};

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

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_token_0_6[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

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

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_token_0_7[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

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

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_token_0_8[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

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

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_token_0_9[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0)
};

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

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_token_0_1[1] = {
  &mdb__parse__mdb__parse__du_functor_desc_token_0_6
};

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_token_0_2[1] = {
  &mdb__parse__mdb__parse__du_functor_desc_token_0_7
};

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
  MR_Integer CastX_84 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_85 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_84 == CastY_85);
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
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_92 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

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
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ArgY1_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                succeeded = (Var_92 < ArgY1_35);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_92 > ArgY1_35);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
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
          MR_String Var_91 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_String ArgY1_51 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_91, ArgY1_51);
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
              MR_String Var_90 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                        MR_String ArgY1_67 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_90, ArgY1_67);
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
              MR_Char Var_93 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                        MR_Char ArgY1_83 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));

                        mercury__private_builtin__builtin_compare_character_3_p_0(HeadVar__1_1, Var_93, ArgY1_83);
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

static MR_bool MR_CALL 
mdb__parse____Unify____token_0_0(
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
              MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_8 == CastX_7);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_10 == CastX_9);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_12 == CastX_11);
            }
            break;
          case (MR_Integer) 5:
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
          MR_Integer ArgX1_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_16;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_15 == ArgY1_16);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ArgX1_17 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_18;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_18 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_17, ArgY1_18) == 0);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ArgX1_19 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_20;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_20 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (strcmp(ArgX1_19, ArgY1_20) == 0);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Char ArgX1_21 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              MR_Char ArgY1_22;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_22 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                succeeded = (ArgX1_21 == ArgY1_22);
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
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

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
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

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
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

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
    MR_Integer Var_4;
    MR_Integer Var_5;

    mdb__parse____Index____command_0_0(HeadVar__2_2, &Var_4);
    mdb__parse____Index____command_0_0(HeadVar__3_3, &Var_5);
    succeeded = (Var_4 < Var_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_4 > Var_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word Var_6;

        switch (MR_tag((MR_Word) HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(HeadVar__2_2)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  Var_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 1:
                {
                  Var_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  Var_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  Var_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 4:
                {
                  Var_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 5:
                {
                  Var_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 6:
                {
                  Var_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 7:
                {
                  Var_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 8:
                {
                  Var_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_8;
              MR_Word ArgX2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_11;
              MR_Word SubResult1_9;
              MR_Word TypeInfo_30_30;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                ArgY2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                TypeInfo_30_30 = (MR_Word) (&mdb__parse_scalar_common_1[2]);
                mercury__builtin__compare_3_p_0(TypeInfo_30_30, &SubResult1_9, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
                succeeded = (SubResult1_9 != (MR_Integer) 0);
                if (succeeded)
                  Var_6 = SubResult1_9;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&mdb__parse_scalar_common_1[3]), &Var_6, ((MR_Box) (ArgX2_10)), ((MR_Box) (ArgY2_11)));
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeInfo_32_32;
              MR_Word ArgX1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_13;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
              if (succeeded)
              {
                ArgY1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                TypeInfo_32_32 = (MR_Word) (&mdb__parse_scalar_common_1[3]);
                mercury__builtin__compare_3_p_0(TypeInfo_32_32, &Var_6, ((MR_Box) (ArgX1_12)), ((MR_Box) (ArgY1_13)));
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgX1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_15;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgY1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    mdb__parse____Compare____path_0_0(&Var_6, ArgX1_14, ArgY1_15);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgX1_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
                  MR_Word ArgY1_17;
                  MR_Word ArgX2_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY2_20;
                  MR_Word ArgX3_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY3_23;
                  MR_Word SubResult1_18;
                  MR_Integer Var_39;
                  MR_Integer Var_40;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgY1_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
                    ArgY2_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY3_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
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
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_18 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      Var_6 = SubResult1_18;
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
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_21 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        Var_6 = SubResult2_21;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&mdb__parse_scalar_common_1[3]), &Var_6, ((MR_Box) (ArgX3_22)), ((MR_Box) (ArgY3_23)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgX1_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_25;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    ArgY1_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    mdb__parse____Compare____path_0_0(&Var_6, ArgX1_24, ArgY1_25);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ArgX1_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_27;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    ArgY1_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    mdb__browser_info____Compare____param_cmd_0_0(&Var_6, ArgX1_26, ArgY1_27);
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
            break;
        }
        if (succeeded)
          *HeadVar__1_1 = Var_6;
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
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&mdb__parse_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Var_16)), ((MR_Box) (ArgY1_11)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&mdb__parse_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY1_5)));
    }
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
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
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
  MR_Integer CastX_39 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_40 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_39 == CastY_40);
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
              MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_8 == CastX_7);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_10 == CastX_9);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_16 == CastX_15);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_18 == CastX_17);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer CastX_27 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_28 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_28 == CastX_27);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer CastX_31 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_32 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_32 == CastX_31);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Integer CastX_33 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_34 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_34 == CastX_33);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Integer CastX_35 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_36 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_36 == CastX_35);
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Integer CastX_37 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_38 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_38 == CastX_37);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_43_43;
          MR_Word TypeInfo_44_44;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            TypeInfo_43_43 = (MR_Word) (&mdb__parse_scalar_common_1[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_43_43, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
            if (succeeded)
            {
              TypeInfo_44_44 = (MR_Word) (&mdb__parse_scalar_common_1[3]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_44_44, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_41_41;
          MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
            TypeInfo_41_41 = (MR_Word) (&mdb__parse_scalar_common_1[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_41_41, ((MR_Box) (ArgX1_11)), ((MR_Box) (ArgY1_12)));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                succeeded = mdb__parse____Unify____path_0_0(ArgX1_13, ArgY1_14);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_45_45;
              MR_Word ArgX1_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              MR_Word ArgY1_20;
              MR_Word ArgX2_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY2_22;
              MR_Word ArgX3_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY3_24;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
                ArgY2_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY3_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_19 == ArgY1_20);
                if (succeeded)
                {
                  succeeded = (ArgX2_21 == ArgY2_22);
                  if (succeeded)
                  {
                    TypeInfo_45_45 = (MR_Word) (&mdb__parse_scalar_common_1[3]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_45_45, ((MR_Box) (ArgX3_23)), ((MR_Box) (ArgY3_24)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_26;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                succeeded = mdb__parse____Unify____path_0_0(ArgX1_25, ArgY1_26);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_30;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                succeeded = mdb__browser_info____Unify____param_cmd_0_0(ArgX1_29, ArgY1_30);
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
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_9_9 = (MR_Word) (&mdb__parse_scalar_common_1[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
    }
  }
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
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
mdb__parse__read_command_external_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

void MR_CALL 
mdb__parse__read_command_external_4_p_0(
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
        MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_8, (MR_Integer) 0))));
        MR_Word CommandPrime_11;

        StringToParse_9 = (MR_String) (Var_17);
        Words_10 = mercury__string__words_separator_2_f_0((MR_Word) (&mdb__parse_scalar_common_4[19]), StringToParse_9);
        succeeded = mdb__parse__parse_2_p_0(Words_10, &CommandPrime_11);
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
mdb__parse__read_command_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

void MR_CALL 
mdb__parse__read_command_6_p_0(
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
  Words_13 = mercury__string__words_separator_2_f_0((MR_Word) (&mdb__parse_scalar_common_4[18]), Line_12);
  succeeded = mdb__parse__parse_2_p_0(Words_13, &CommandPrime_14);
  if (succeeded)
    *Command_10 = CommandPrime_14;
  else
    *Command_10 = (MR_Word) ((MR_Unsigned) 32U);
}

MR_bool MR_CALL 
mdb__parse__parse_2_p_0(
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
    MR_String CmdWord_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), Words_3, (MR_Integer) 0))));
    MR_Word ArgWords_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Words_3, (MR_Integer) 1))));
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
      Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CmdTokens_7, (MR_Integer) 1))));
      succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
      {
        MaybeArgWords_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeArgWords_10, 0) = ((MR_Box) (ArgWords_6));
      }
    else
      MaybeArgWords_10 = (MR_Word) ((MR_Unsigned) 0U);
    mercury__list__append_3_p_1((MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_token_0), CmdTokens_7, ArgTokens_8, &AllTokens_11);
    if ((AllTokens_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Command_4 = (MR_Word) ((MR_Unsigned) 28U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word FirstToken_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AllTokens_11, (MR_Integer) 0))));
      MR_Word LaterTokens_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AllTokens_11, (MR_Integer) 1))));

      succeeded = mdb__parse__parse_cmd_4_p_0(FirstToken_12, LaterTokens_13, MaybeArgWords_10, Command_4);
    }
  }
  return succeeded;
}

static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_15(
  void * env_ptr_arg)
{
  struct mdb__parse__parse_cmd_4_p_0_16_env_0_s * env_ptr = (struct mdb__parse__parse_cmd_4_p_0_16_env_0_s *) (env_ptr_arg);

  *((env_ptr)->mdb__parse__parse_cmd_4_p_0_16_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mdb__parse__parse_cmd_4_p_0_16_env_0__conv15_HeadVar__1_1));
  *((env_ptr)->mdb__parse__parse_cmd_4_p_0_16_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->mdb__parse__parse_cmd_4_p_0_16_env_0__conv14_HeadVar__2_2));
  ((env_ptr)->mdb__parse__parse_cmd_4_p_0_16_env_0__cont)((env_ptr)->mdb__parse__parse_cmd_4_p_0_16_env_0__cont_env_ptr);
}

static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_16(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mdb__parse__parse_cmd_4_p_0_16_env_0_s env;

  (env).mdb__parse__parse_cmd_4_p_0_16_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).mdb__parse__parse_cmd_4_p_0_16_env_0__wrapper_arg_2 = wrapper_arg_2;
  (env).mdb__parse__parse_cmd_4_p_0_16_env_0__cont = cont;
  (env).mdb__parse__parse_cmd_4_p_0_16_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    mdb__parse__format_param_cmd_option_defaults_2_p_0(&(env).mdb__parse__parse_cmd_4_p_0_16_env_0__conv15_HeadVar__1_1, &(env).mdb__parse__parse_cmd_4_p_0_16_env_0__conv14_HeadVar__2_2, mdb__parse__parse_cmd_4_p_0_15, &env);
  }
}

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_14(
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
mdb__parse__parse_cmd_4_p_0_13(
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
mdb__parse__parse_cmd_4_p_0_11(
  void * env_ptr_arg)
{
  struct mdb__parse__parse_cmd_4_p_0_12_env_0_s * env_ptr = (struct mdb__parse__parse_cmd_4_p_0_12_env_0_s *) (env_ptr_arg);

  *((env_ptr)->mdb__parse__parse_cmd_4_p_0_12_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mdb__parse__parse_cmd_4_p_0_12_env_0__conv11_HeadVar__1_1));
  *((env_ptr)->mdb__parse__parse_cmd_4_p_0_12_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->mdb__parse__parse_cmd_4_p_0_12_env_0__conv10_HeadVar__2_2));
  ((env_ptr)->mdb__parse__parse_cmd_4_p_0_12_env_0__cont)((env_ptr)->mdb__parse__parse_cmd_4_p_0_12_env_0__cont_env_ptr);
}

static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_12(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mdb__parse__parse_cmd_4_p_0_12_env_0_s env;

  (env).mdb__parse__parse_cmd_4_p_0_12_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).mdb__parse__parse_cmd_4_p_0_12_env_0__wrapper_arg_2 = wrapper_arg_2;
  (env).mdb__parse__parse_cmd_4_p_0_12_env_0__cont = cont;
  (env).mdb__parse__parse_cmd_4_p_0_12_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    mdb__parse__format_param_cmd_option_defaults_2_p_0(&(env).mdb__parse__parse_cmd_4_p_0_12_env_0__conv11_HeadVar__1_1, &(env).mdb__parse__parse_cmd_4_p_0_12_env_0__conv10_HeadVar__2_2, mdb__parse__parse_cmd_4_p_0_11, &env);
  }
}

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv9_HeadVar__2_2;

  succeeded = mdb__parse__long_format_param_cmd_option_2_p_0(((MR_String) (wrapper_arg_1)), &conv9_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv9_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv8_HeadVar__2_2;

  succeeded = mdb__parse__short_format_param_cmd_option_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv8_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_7(
  void * env_ptr_arg)
{
  struct mdb__parse__parse_cmd_4_p_0_8_env_0_s * env_ptr = (struct mdb__parse__parse_cmd_4_p_0_8_env_0_s *) (env_ptr_arg);

  *((env_ptr)->mdb__parse__parse_cmd_4_p_0_8_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mdb__parse__parse_cmd_4_p_0_8_env_0__conv7_HeadVar__1_1));
  *((env_ptr)->mdb__parse__parse_cmd_4_p_0_8_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->mdb__parse__parse_cmd_4_p_0_8_env_0__conv6_HeadVar__2_2));
  ((env_ptr)->mdb__parse__parse_cmd_4_p_0_8_env_0__cont)((env_ptr)->mdb__parse__parse_cmd_4_p_0_8_env_0__cont_env_ptr);
}

static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_8(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mdb__parse__parse_cmd_4_p_0_8_env_0_s env;

  (env).mdb__parse__parse_cmd_4_p_0_8_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).mdb__parse__parse_cmd_4_p_0_8_env_0__wrapper_arg_2 = wrapper_arg_2;
  (env).mdb__parse__parse_cmd_4_p_0_8_env_0__cont = cont;
  (env).mdb__parse__parse_cmd_4_p_0_8_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    mdb__parse__format_cmd_option_defaults_2_p_0(&(env).mdb__parse__parse_cmd_4_p_0_8_env_0__conv7_HeadVar__1_1, &(env).mdb__parse__parse_cmd_4_p_0_8_env_0__conv6_HeadVar__2_2, mdb__parse__parse_cmd_4_p_0_7, &env);
  }
}

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__2_2;

  succeeded = mdb__parse__long_format_cmd_option_2_p_0(((MR_String) (wrapper_arg_1)), &conv5_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__2_2;

  succeeded = mdb__parse__short_format_cmd_option_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv4_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_3(
  void * env_ptr_arg)
{
  struct mdb__parse__parse_cmd_4_p_0_4_env_0_s * env_ptr = (struct mdb__parse__parse_cmd_4_p_0_4_env_0_s *) (env_ptr_arg);

  *((env_ptr)->mdb__parse__parse_cmd_4_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mdb__parse__parse_cmd_4_p_0_4_env_0__conv3_HeadVar__1_1));
  *((env_ptr)->mdb__parse__parse_cmd_4_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->mdb__parse__parse_cmd_4_p_0_4_env_0__conv2_HeadVar__2_2));
  ((env_ptr)->mdb__parse__parse_cmd_4_p_0_4_env_0__cont)((env_ptr)->mdb__parse__parse_cmd_4_p_0_4_env_0__cont_env_ptr);
}

static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mdb__parse__parse_cmd_4_p_0_4_env_0_s env;

  (env).mdb__parse__parse_cmd_4_p_0_4_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).mdb__parse__parse_cmd_4_p_0_4_env_0__wrapper_arg_2 = wrapper_arg_2;
  (env).mdb__parse__parse_cmd_4_p_0_4_env_0__cont = cont;
  (env).mdb__parse__parse_cmd_4_p_0_4_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    mdb__parse__format_option_defaults_2_p_0(&(env).mdb__parse__parse_cmd_4_p_0_4_env_0__conv3_HeadVar__1_1, &(env).mdb__parse__parse_cmd_4_p_0_4_env_0__conv2_HeadVar__2_2, mdb__parse__parse_cmd_4_p_0_3, &env);
  }
}

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  succeeded = mdb__parse__long_format_option_2_p_0(((MR_String) (wrapper_arg_1)), &conv1_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  succeeded = mdb__parse__short_format_option_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0(
  MR_Word CmdToken_5,
  MR_Word ArgTokens_6,
  MR_Word MaybeArgWords_7,
  MR_Word * Command_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) CmdToken_5)) == (MR_Integer) 2);
  MR_String Var_274;

  if (succeeded)
  {
    Var_274 = ((MR_String) ((MR_hl_field(MR_mktag(2), CmdToken_5, (MR_Integer) 0))));
    if ((strcmp(Var_274, (MR_String) "p") == 0))
      succeeded = MR_TRUE;
    else
    if ((strcmp(Var_274, (MR_String) "ls") == 0))
      succeeded = MR_TRUE;
    else
    if ((strcmp(Var_274, (MR_String) "print") == 0))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
  }
  if (succeeded)
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
      MR_Word ArgWords_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgWords_7, (MR_Integer) 0))));
      MR_Word RemainingWords_13;
      MR_Word MaybeOptionTable0_14;
      MR_Word MaybeOptionTable_15;

      mercury__getopt__process_options_4_p_0((MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0), (MR_Word) (MR_mkword(MR_mktag(2), &mdb__parse_scalar_common_4[5])), ArgWords_11, &RemainingWords_13, &MaybeOptionTable0_14);
      MaybeOptionTable_15 = mercury__getopt__convert_to_maybe_option_table_1_f_0((MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0), MaybeOptionTable0_14);
      {
        MaybeMaybeOptionTable_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeMaybeOptionTable_9, 0) = ((MR_Box) (MaybeOptionTable_15));
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
          MaybePath_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybePath_16, 0) = ((MR_Box) (Path_19));
        }
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Command_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MaybeMaybeOptionTable_9));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MaybePath_16));
      }
      succeeded = MR_TRUE;
    }
  }
  else
  {
    MR_String Var_275;

    succeeded = ((MR_tag((MR_Word) CmdToken_5)) == (MR_Integer) 2);
    if (succeeded)
    {
      Var_275 = ((MR_String) ((MR_hl_field(MR_mktag(2), CmdToken_5, (MR_Integer) 0))));
      if ((strcmp(Var_275, (MR_String) "d") == 0))
        succeeded = MR_TRUE;
      else
      if ((strcmp(Var_275, (MR_String) "display") == 0))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
    if (succeeded)
    {
      succeeded = (ArgTokens_6 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *Command_8 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_String Var_276;

      succeeded = ((MR_tag((MR_Word) CmdToken_5)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_276 = ((MR_String) ((MR_hl_field(MR_mktag(2), CmdToken_5, (MR_Integer) 0))));
        if ((strcmp(Var_276, (MR_String) "w") == 0))
          succeeded = MR_TRUE;
        else
        if ((strcmp(Var_276, (MR_String) "write") == 0))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      if (succeeded)
      {
        succeeded = (ArgTokens_6 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          *Command_8 = (MR_Word) ((MR_Unsigned) 4U);
          succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_String Var_277;

        succeeded = ((MR_tag((MR_Word) CmdToken_5)) == (MR_Integer) 2);
        if (succeeded)
        {
          Var_277 = ((MR_String) ((MR_hl_field(MR_mktag(2), CmdToken_5, (MR_Integer) 0))));
          if ((strcmp(Var_277, (MR_String) "addr") == 0))
            succeeded = MR_TRUE;
          else
          if ((strcmp(Var_277, (MR_String) "memory_addr") == 0))
            succeeded = MR_TRUE;
          else
            succeeded = MR_FALSE;
        }
        if (succeeded)
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
                MaybePath_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybePath_101, 0) = ((MR_Box) (Path_99));
              }
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Command_8 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (MaybePath_101));
            }
            succeeded = MR_TRUE;
          }
        }
        else
        {
          MR_String Var_59;

          succeeded = ((MR_tag((MR_Word) CmdToken_5)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_59 = ((MR_String) ((MR_hl_field(MR_mktag(2), CmdToken_5, (MR_Integer) 0))));
            succeeded = (strcmp(Var_59, (MR_String) "cdr") == 0);
          }
          if (succeeded)
          {
            MR_Word TypeInfo_251_251;
            MR_Word TypeCtorInfo_252_252;
            MR_Integer Repetitions_22;
            MR_Word TokenPath_23;
            MR_Word DupTokenPath_24;
            MR_Word RepeatedTokenPath_25;
            MR_Word RepeatedPath_26;
            MR_Word Var_60;

            succeeded = (ArgTokens_6 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTokens_6, (MR_Integer) 0))));
              TokenPath_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTokens_6, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_60)) == (MR_Integer) 1);
              if (succeeded)
              {
                Repetitions_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 0))));
                TypeInfo_251_251 = (MR_Word) (&mdb__parse_scalar_common_1[0]);
                mercury__list__duplicate_3_p_0(TypeInfo_251_251, Repetitions_22, ((MR_Box) (TokenPath_23)), &DupTokenPath_24);
                TypeCtorInfo_252_252 = (MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_token_0);
                mercury__list__condense_2_p_0(TypeCtorInfo_252_252, DupTokenPath_24, &RepeatedTokenPath_25);
                succeeded = mdb__parse__parse_path_2_p_0(RepeatedTokenPath_25, &RepeatedPath_26);
                if (succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Command_8 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (RepeatedPath_26));
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
          }
          else
          {
            if ((CmdToken_5 == (MR_Word) ((MR_Unsigned) 16U)))
              succeeded = MR_TRUE;
            else
            if (((MR_tag((MR_Word) CmdToken_5)) == (MR_Integer) 2))
            {
              MR_String Var_61 = ((MR_String) ((MR_hl_field(MR_mktag(2), CmdToken_5, (MR_Integer) 0))));

              succeeded = (strcmp(Var_61, (MR_String) "cd") == 0);
            }
            else
              succeeded = MR_FALSE;
            if (succeeded)
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
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Command_8 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Path_103));
                  }
                  succeeded = MR_TRUE;
                }
              }
            else
            {
              MR_String Var_62;

              succeeded = ((MR_tag((MR_Word) CmdToken_5)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_62 = ((MR_String) ((MR_hl_field(MR_mktag(2), CmdToken_5, (MR_Integer) 0))));
                succeeded = (strcmp(Var_62, (MR_String) "pwd") == 0);
              }
              if (succeeded)
              {
                succeeded = (ArgTokens_6 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  *Command_8 = (MR_Word) ((MR_Unsigned) 12U);
                  succeeded = MR_TRUE;
                }
              }
              else
              {
                MR_Word AssertInvalid_29;
                MR_String Var_278;
                MR_Integer lo_0;
                MR_Integer hi_1;
                MR_Integer mid_2;
                MR_Integer result_3;

                succeeded = ((MR_tag((MR_Word) CmdToken_5)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_278 = ((MR_String) ((MR_hl_field(MR_mktag(2), CmdToken_5, (MR_Integer) 0))));
                  // binary string simple lookup switch
                  ;
                  lo_0 = (MR_Integer) 0;
                  hi_1 = (MR_Integer) 3;
                  do
                  {
                    mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
                    result_3 = MR_strcmp(Var_278, ((&mdb__parse_vector_common_6[0 + mid_2]))->mdb__parse__vector_common_type_6_0__vct_6_f_0);
                    if ((result_3 == (MR_Integer) 0))
                    {
                      AssertInvalid_29 = ((&mdb__parse_vector_common_6[0 + mid_2]))->mdb__parse__vector_common_type_6_0__vct_6_f_1;
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
                if (succeeded)
                {
                  MR_Word HowTrack_30;
                  MR_Word MaybePath_112;

                  if ((ArgTokens_6 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    HowTrack_30 = (MR_Integer) 1;
                    MaybePath_112 = (MR_Word) ((MR_Unsigned) 0U);
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word HeadArgToken_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTokens_6, (MR_Integer) 0))));
                    MR_Word TailArgTokens_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTokens_6, (MR_Integer) 1))));
                    MR_String Var_279;

                    succeeded = ((((MR_tag((MR_Word) HeadArgToken_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadArgToken_31, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_279 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadArgToken_31, (MR_Integer) 1))));
                      if ((strcmp(Var_279, (MR_String) "a") == 0))
                        succeeded = MR_TRUE;
                      else
                      if ((strcmp(Var_279, (MR_String) "accurate") == 0))
                        succeeded = MR_TRUE;
                      else
                        succeeded = MR_FALSE;
                    }
                    if (succeeded)
                    {
                      HowTrack_30 = (MR_Integer) 0;
                      if ((TailArgTokens_32 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        MaybePath_112 = (MR_Word) ((MR_Unsigned) 0U);
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        MR_Word Path_105;

                        succeeded = mdb__parse__parse_path_2_p_0(TailArgTokens_32, &Path_105);
                        if (succeeded)
                        {
                          {
                            MaybePath_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), MaybePath_112, 0) = ((MR_Box) (Path_105));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    else
                    {
                      MR_Word Path_108;

                      HowTrack_30 = (MR_Integer) 1;
                      succeeded = mdb__parse__parse_path_2_p_0(ArgTokens_6, &Path_108);
                      if (succeeded)
                      {
                        {
                          MaybePath_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), MaybePath_112, 0) = ((MR_Box) (Path_108));
                        }
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      *Command_8 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) (((((MR_Unsigned) (HowTrack_30) << 1)) | (MR_Unsigned) (AssertInvalid_29)));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybePath_112));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                else
                {
                  MR_String Var_69;

                  succeeded = ((MR_tag((MR_Word) CmdToken_5)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                    Var_69 = ((MR_String) ((MR_hl_field(MR_mktag(2), CmdToken_5, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_69, (MR_String) "mode") == 0);
                  }
                  if (succeeded)
                    if ((ArgTokens_6 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      *Command_8 = (MR_Word) ((MR_Unsigned) 16U);
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      MR_Word Path_114;

                      succeeded = mdb__parse__parse_path_2_p_0(ArgTokens_6, &Path_114);
                      if (succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *Command_8 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Path_114));
                        }
                        succeeded = MR_TRUE;
                      }
                    }
                  else
                  {
                    MR_String Var_70;

                    succeeded = ((MR_tag((MR_Word) CmdToken_5)) == (MR_Integer) 2);
                    if (succeeded)
                    {
                      Var_70 = ((MR_String) ((MR_hl_field(MR_mktag(2), CmdToken_5, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_70, (MR_String) "format") == 0);
                    }
                    if (succeeded)
                    {
                      MR_Word FormatCmd_37;

                      if ((ArgTokens_6 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        FormatCmd_37 = (MR_Word) ((MR_Unsigned) 0U);
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        MR_Word TypeCtorInfo_259_259;
                        MR_Word Setting_40;
                        MR_Word RemainingTokens_116;
                        MR_Word ArgWords_117;
                        MR_Word OptionOps_118;
                        MR_Word RemainingWords_119;
                        MR_Word MaybeOptionTable0_120;
                        MR_Word MaybeOptionTable_121;

                        succeeded = (MaybeArgWords_7 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          ArgWords_117 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgWords_7, (MR_Integer) 0))));
                          TypeCtorInfo_259_259 = (MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_setting_option_0);
                          OptionOps_118 = (MR_Word) (MR_mkword(MR_mktag(2), &mdb__parse_scalar_common_4[9]));
                          mercury__getopt__process_options_4_p_0(TypeCtorInfo_259_259, OptionOps_118, ArgWords_117, &RemainingWords_119, &MaybeOptionTable0_120);
                          MaybeOptionTable_121 = mercury__getopt__convert_to_maybe_option_table_1_f_0(TypeCtorInfo_259_259, MaybeOptionTable0_120);
                          mdb__parse__lexer_words_2_p_0(RemainingWords_119, &RemainingTokens_116);
                          succeeded = mdb__parse__parse_format_2_p_0(RemainingTokens_116, &Setting_40);
                          if (succeeded)
                          {
                            {
                              FormatCmd_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), FormatCmd_37, 0) = ((MR_Box) (MaybeOptionTable_121));
                              MR_hl_field(MR_mktag(1), FormatCmd_37, 1) = ((MR_Box) (Setting_40));
                            }
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *Command_8 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (FormatCmd_37));
                        }
                        succeeded = MR_TRUE;
                      }
                    }
                    else
                    {
                      MR_Word ParamCmd_41;
                      MR_String Var_280;
                      MR_Integer lo_4;
                      MR_Integer hi_5;
                      MR_Integer mid_6;
                      MR_Integer result_7;

                      succeeded = ((MR_tag((MR_Word) CmdToken_5)) == (MR_Integer) 2);
                      if (succeeded)
                      {
                        Var_280 = ((MR_String) ((MR_hl_field(MR_mktag(2), CmdToken_5, (MR_Integer) 0))));
                        // binary string simple lookup switch
                        ;
                        lo_4 = (MR_Integer) 0;
                        hi_5 = (MR_Integer) 3;
                        do
                        {
                          mid_6 = (((MR_Integer) ((MR_Unsigned) lo_4 + (MR_Unsigned) hi_5)) / (MR_Integer) 2);
                          result_7 = MR_strcmp(Var_280, ((&mdb__parse_vector_common_7[0 + mid_6]))->mdb__parse__vector_common_type_7_0__vct_7_f_0);
                          if ((result_7 == (MR_Integer) 0))
                          {
                            ParamCmd_41 = ((&mdb__parse_vector_common_7[0 + mid_6]))->mdb__parse__vector_common_type_7_0__vct_7_f_1;
                            succeeded = MR_TRUE;
                            // jump out of search loop
                            ;
                            goto label_1;
                          }
                          else
                          if ((result_7 < (MR_Integer) 0))
                            hi_5 = (MR_Integer) ((MR_Unsigned) mid_6 - (MR_Unsigned) 1);
                          else
                            lo_4 = (MR_Integer) ((MR_Unsigned) mid_6 + (MR_Unsigned) 1);
                        }
                        while ((lo_4 <= hi_5));
                        succeeded = MR_FALSE;
                      label_1:;
                      }
                      if (succeeded)
                      {
                        MR_Word FormatCmd_154;

                        if ((ArgTokens_6 == (MR_Word) ((MR_Unsigned) 0U)))
                        {
                          FormatCmd_154 = (MR_Word) ((MR_Unsigned) 0U);
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          MR_Word TypeCtorInfo_266_266;
                          MR_Integer N_44;
                          MR_Word Var_81;
                          MR_Word Var_82;
                          MR_Word RemainingTokens_134;
                          MR_Word ArgWords_135;
                          MR_Word OptionOps_136;
                          MR_Word RemainingWords_137;
                          MR_Word MaybeOptionTable0_138;
                          MR_Word MaybeOptionTable_139;
                          MR_Word Setting_140;

                          succeeded = (MaybeArgWords_7 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ArgWords_135 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgWords_7, (MR_Integer) 0))));
                            TypeCtorInfo_266_266 = (MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_setting_option_0);
                            OptionOps_136 = (MR_Word) (MR_mkword(MR_mktag(2), &mdb__parse_scalar_common_4[13]));
                            mercury__getopt__process_options_4_p_0(TypeCtorInfo_266_266, OptionOps_136, ArgWords_135, &RemainingWords_137, &MaybeOptionTable0_138);
                            MaybeOptionTable_139 = mercury__getopt__convert_to_maybe_option_table_1_f_0(TypeCtorInfo_266_266, MaybeOptionTable0_138);
                            mdb__parse__lexer_words_2_p_0(RemainingWords_137, &RemainingTokens_134);
                            succeeded = (RemainingTokens_134 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RemainingTokens_134, (MR_Integer) 0))));
                              Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RemainingTokens_134, (MR_Integer) 1))));
                              succeeded = (Var_82 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                succeeded = ((MR_tag((MR_Word) Var_81)) == (MR_Integer) 1);
                                if (succeeded)
                                {
                                  N_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_81, (MR_Integer) 0))));
                                  mdb__parse__param_cmd_to_setting_3_p_0(ParamCmd_41, N_44, &Setting_140);
                                  {
                                    FormatCmd_154 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(2), FormatCmd_154, 0) = ((MR_Box) (MaybeOptionTable_139));
                                    MR_hl_field(MR_mktag(2), FormatCmd_154, 1) = ((MR_Box) (Setting_140));
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
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            *Command_8 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (FormatCmd_154));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                      else
                      {
                        succeeded = (CmdToken_5 == (MR_Word) ((MR_Unsigned) 20U));
                        if (succeeded)
                        {
                          MR_Word TypeCtorInfo_273_273;
                          MR_Integer Depth_45;
                          MR_Word Var_83;
                          MR_Word Var_84;
                          MR_Word Var_88;
                          MR_Word Var_89;
                          MR_Word OptionOps_156;
                          MR_Word MaybeOptionTable0_157;
                          MR_Word MaybeOptionTable_158;
                          MR_Word FormatCmd_159;
                          MR_Word Var_46;

                          succeeded = (ArgTokens_6 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTokens_6, (MR_Integer) 0))));
                            Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTokens_6, (MR_Integer) 1))));
                            succeeded = (Var_84 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = ((MR_tag((MR_Word) Var_83)) == (MR_Integer) 1);
                              if (succeeded)
                              {
                                Depth_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_83, (MR_Integer) 0))));
                                Var_88 = (MR_Word) ((MR_Unsigned) 0U);
                                TypeCtorInfo_273_273 = (MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_setting_option_0);
                                OptionOps_156 = (MR_Word) (MR_mkword(MR_mktag(2), &mdb__parse_scalar_common_4[17]));
                                mercury__getopt__process_options_4_p_0(TypeCtorInfo_273_273, OptionOps_156, Var_88, &Var_46, &MaybeOptionTable0_157);
                                MaybeOptionTable_158 = mercury__getopt__convert_to_maybe_option_table_1_f_0(TypeCtorInfo_273_273, MaybeOptionTable0_157);
                                {
                                  Var_89 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (Depth_45));
                                }
                                {
                                  FormatCmd_159 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(2), FormatCmd_159, 0) = ((MR_Box) (MaybeOptionTable_158));
                                  MR_hl_field(MR_mktag(2), FormatCmd_159, 1) = ((MR_Box) (Var_89));
                                }
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  *Command_8 = base;
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (FormatCmd_159));
                                }
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                        }
                        else
                        {
                          MR_String Var_90;

                          succeeded = ((MR_tag((MR_Word) CmdToken_5)) == (MR_Integer) 2);
                          if (succeeded)
                          {
                            Var_90 = ((MR_String) ((MR_hl_field(MR_mktag(2), CmdToken_5, (MR_Integer) 0))));
                            succeeded = (strcmp(Var_90, (MR_String) "num_io_actions") == 0);
                          }
                          if (succeeded)
                          {
                            MR_Word Var_91;
                            MR_Word Var_92;
                            MR_Word Var_93;
                            MR_Integer N_160;

                            succeeded = (ArgTokens_6 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTokens_6, (MR_Integer) 0))));
                              Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTokens_6, (MR_Integer) 1))));
                              succeeded = (Var_92 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                succeeded = ((MR_tag((MR_Word) Var_91)) == (MR_Integer) 1);
                                if (succeeded)
                                {
                                  N_160 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_91, (MR_Integer) 0))));
                                  {
                                    Var_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(3), Var_93, 0) = ((MR_Box) (N_160));
                                  }
                                  {
                                    MR_Word base;
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    *Command_8 = base;
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_93));
                                  }
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                          }
                          else
                          {
                            MR_String Var_94;

                            succeeded = ((MR_tag((MR_Word) CmdToken_5)) == (MR_Integer) 2);
                            if (succeeded)
                            {
                              Var_94 = ((MR_String) ((MR_hl_field(MR_mktag(2), CmdToken_5, (MR_Integer) 0))));
                              succeeded = (strcmp(Var_94, (MR_String) "params") == 0);
                            }
                            if (succeeded)
                            {
                              *Command_8 = (MR_Word) (MR_mkword(MR_mktag(3), &mdb__parse_scalar_common_1[5]));
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              if ((CmdToken_5 == (MR_Word) ((MR_Unsigned) 12U)))
                                succeeded = MR_TRUE;
                              else
                              if (((MR_tag((MR_Word) CmdToken_5)) == (MR_Integer) 2))
                              {
                                MR_String Var_281 = ((MR_String) ((MR_hl_field(MR_mktag(2), CmdToken_5, (MR_Integer) 0))));

                                if ((strcmp(Var_281, (MR_String) "h") == 0))
                                  succeeded = MR_TRUE;
                                else
                                if ((strcmp(Var_281, (MR_String) "help") == 0))
                                  succeeded = MR_TRUE;
                                else
                                  succeeded = MR_FALSE;
                              }
                              else
                                succeeded = MR_FALSE;
                              if (succeeded)
                              {
                                succeeded = (ArgTokens_6 == (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  *Command_8 = (MR_Word) ((MR_Unsigned) 20U);
                                  succeeded = MR_TRUE;
                                }
                              }
                              else
                              {
                                MR_String Var_98;

                                succeeded = (ArgTokens_6 == (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  succeeded = ((MR_tag((MR_Word) CmdToken_5)) == (MR_Integer) 2);
                                  if (succeeded)
                                  {
                                    Var_98 = ((MR_String) ((MR_hl_field(MR_mktag(2), CmdToken_5, (MR_Integer) 0))));
                                    succeeded = (strcmp(Var_98, (MR_String) "quit") == 0);
                                    if (succeeded)
                                    {
                                      *Command_8 = (MR_Word) ((MR_Unsigned) 24U);
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
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

  if (succeeded)
  {
    Token_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    succeeded = (Var_6 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Token_3)) == (MR_Integer) 2);
      if (succeeded)
      {
        TokenName_5 = ((MR_String) ((MR_hl_field(MR_mktag(2), Token_3, (MR_Integer) 0))));
        succeeded = (strcmp(TokenName_5, (MR_String) "flat") == 0);
        if (succeeded)
        {
          *Setting_4 = (MR_Word) (MR_mkword(MR_mktag(3), &mdb__parse_scalar_common_1[6]));
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (strcmp(TokenName_5, (MR_String) "raw_pretty") == 0);
          if (succeeded)
          {
            *Setting_4 = (MR_Word) (MR_mkword(MR_mktag(3), &mdb__parse_scalar_common_1[7]));
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (strcmp(TokenName_5, (MR_String) "verbose") == 0);
            if (succeeded)
            {
              *Setting_4 = (MR_Word) (MR_mkword(MR_mktag(3), &mdb__parse_scalar_common_1[8]));
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (strcmp(TokenName_5, (MR_String) "pretty") == 0);
              if (succeeded)
              {
                *Setting_4 = (MR_Word) (MR_mkword(MR_mktag(3), &mdb__parse_scalar_common_1[9]));
                succeeded = MR_TRUE;
              }
            }
          }
        }
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
    Token_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    Tokens_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
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
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Dirs_6));
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
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Path_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Dirs_8));
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
      MR_Word Token_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Tokens_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

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
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__2_2 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RestDirs_13));
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
            MR_Integer Subdir_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Token_3, (MR_Integer) 0))));
            MR_Word RestDirs_7;
            MR_Word Var_11;

            {
              Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Subdir_6));
            }
            succeeded = mdb__parse__parse_up_down_dirs_2_p_0(Tokens_4, &RestDirs_7);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_11));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RestDirs_7));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String NamedSubdir_8 = ((MR_String) ((MR_hl_field(MR_mktag(2), Token_3, (MR_Integer) 0))));
            MR_Word Var_10;
            MR_Word RestDirs_12;

            {
              Var_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_10, 0) = ((MR_Box) (NamedSubdir_8));
            }
            succeeded = mdb__parse__parse_up_down_dirs_2_p_0(Tokens_4, &RestDirs_12);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_10));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RestDirs_12));
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
mdb__parse__param_cmd_to_setting_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer N_2,
  MR_Word * HeadVar__3_3)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (N_2));
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (N_2));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (N_2));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (N_2));
      }
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
    MR_String Word_3 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Words_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word WordTokens_6;
    MR_Word WordsTokens_7;
    MR_Word Chars_9;

    mercury__string__to_char_list_2_p_0(Word_3, &Chars_9);
    mdb__parse__lexer_word_chars_2_p_0(Chars_9, &WordTokens_6);
    mdb__parse__lexer_words_2_p_0(Words_4, &WordsTokens_7);
    mercury__list__append_3_p_1((MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_token_0), WordTokens_6, WordsTokens_7, HeadVar__2_2);
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
      MR_Char C_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Cs_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

      succeeded = (C_3 == (MR_Char) 46);
      if (succeeded)
        if ((Cs_4 == (MR_Word) ((MR_Unsigned) 0U)))
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Char C_20 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Cs_4, (MR_Integer) 0)));
          MR_Word Cs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_4, (MR_Integer) 1))));

          succeeded = (C_20 == (MR_Char) 46);
          if (succeeded)
          {
            MR_Word Toks2_23;

            mdb__parse__lexer_word_chars_2_p_0(Cs_21, &Toks2_23);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Toks2_23));
            }
          }
          else
          {
            MR_Word Toks2_27;

            mdb__parse__lexer_word_chars_2_p_0(Cs_4, &Toks2_27);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Toks2_27));
            }
          }
        }
      else
      {
        succeeded = (C_3 == (MR_Char) 47);
        if (succeeded)
        {
          MR_Word Toks2_6;

          mdb__parse__lexer_word_chars_2_p_0(Cs_4, &Toks2_6);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Toks2_6));
          }
        }
        else
        {
          succeeded = (C_3 == (MR_Char) 63);
          if (succeeded)
          {
            MR_Word Toks2_16;

            mdb__parse__lexer_word_chars_2_p_0(Cs_4, &Toks2_16);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Toks2_16));
            }
          }
          else
          {
            succeeded = (C_3 == (MR_Char) 94);
            if (succeeded)
            {
              MR_Word Toks2_17;

              mdb__parse__lexer_word_chars_2_p_0(Cs_4, &Toks2_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Unsigned) 16U));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Toks2_17));
              }
            }
            else
            {
              succeeded = (C_3 == (MR_Char) 60);
              if (succeeded)
              {
                MR_Word Toks2_18;

                mdb__parse__lexer_word_chars_2_p_0(Cs_4, &Toks2_18);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Unsigned) 20U));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Toks2_18));
                }
              }
              else
              {
                MR_Char H_7;
                MR_Word T_8;

                succeeded = (C_3 == (MR_Char) 45);
                if (succeeded)
                {
                  succeeded = (Cs_4 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    H_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Cs_4, (MR_Integer) 0)));
                    T_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_4, (MR_Integer) 1))));
                  }
                }
                if (succeeded)
                {
                  MR_String ArgName_30;
                  MR_Word Var_32;

                  succeeded = (H_7 == (MR_Char) 45);
                  if (succeeded)
                    mercury__string__from_char_list_2_p_0(T_8, &ArgName_30);
                  else
                    mercury__string__from_char_list_2_p_0(Cs_4, &ArgName_30);
                  {
                    Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (ArgName_30));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__2_2 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_32));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                else
                {
                  succeeded = mercury__char__is_digit_1_p_0(C_3);
                  if (succeeded)
                  {
                    MR_Integer N_9;
                    MR_Integer Zero_34;
                    MR_Integer CN_35;
                    MR_Word Digits_37;
                    MR_Word Rest_38;
                    MR_Integer Num_39;
                    MR_Word Toks2_40;
                    MR_Word Var_42;

                    mercury__char__to_int_2_p_0((MR_Char) 48, &Zero_34);
                    mercury__char__to_int_2_p_0(C_3, &CN_35);
                    N_9 = (MR_Integer) ((MR_Unsigned) CN_35 - (MR_Unsigned) Zero_34);
                    mercury__list__take_while_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&mdb__parse_scalar_common_4[0]), Cs_4, &Digits_37, &Rest_38);
                    mdb__parse__digits_to_int_acc_3_p_0(N_9, Digits_37, &Num_39);
                    {
                      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Num_39));
                    }
                    mdb__parse__lexer_word_chars_2_p_0(Rest_38, &Toks2_40);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__2_2 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_42));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Toks2_40));
                    }
                  }
                  else
                  {
                    succeeded = mercury__char__is_alpha_or_underscore_1_p_0(C_3);
                    if (succeeded)
                    {
                      MR_Word Letters_44;
                      MR_Word Rest_45;
                      MR_String Name_46;
                      MR_Word Toks2_47;
                      MR_Word Var_49;
                      MR_Word Var_50;

                      mercury__list__take_while_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&mdb__parse_scalar_common_4[1]), Cs_4, &Letters_44, &Rest_45);
                      {
                        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MR_Word) (C_3));
                        MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Letters_44));
                      }
                      mercury__string__from_char_list_2_p_0(Var_49, &Name_46);
                      mdb__parse__lexer_word_chars_2_p_0(Rest_45, &Toks2_47);
                      {
                        Var_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), Var_50, 0) = ((MR_Box) (Name_46));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *HeadVar__2_2 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_50));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Toks2_47));
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
                        MR_Word Var_15;
                        MR_Word Toks2_19;

                        {
                          Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_15, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), Var_15, 1) = ((MR_Box) (MR_Word) (C_3));
                        }
                        mdb__parse__lexer_word_chars_2_p_0(Cs_4, &Toks2_19);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *HeadVar__2_2 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_15));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Toks2_19));
                        }
                      }
                    }
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
      MR_Char C_6 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Cs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer D_9;
      MR_Integer Acc2_10;
      MR_Integer Var_11;
      MR_Integer Zero_13;
      MR_Integer CN_14;
      MR_Integer next_value_of_Acc_1;
      MR_Word next_value_of_HeadVar__2_2;

      mercury__char__to_int_2_p_0((MR_Char) 48, &Zero_13);
      mercury__char__to_int_2_p_0(C_6, &CN_14);
      D_9 = (MR_Integer) ((MR_Unsigned) CN_14 - (MR_Unsigned) Zero_13);
      Var_11 = (MR_Integer) ((MR_Unsigned) 10 * (MR_Unsigned) Acc_1);
      Acc2_10 = (MR_Integer) ((MR_Unsigned) Var_11 + (MR_Unsigned) D_9);
      // direct tailcall eliminated
      ;
      next_value_of_Acc_1 = Acc2_10;
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
