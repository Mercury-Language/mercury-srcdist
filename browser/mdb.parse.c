/*
** Automatically generated from `parse.m'
** by the Mercury compiler,
** version rotd-2017-07-23
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


/* :- module mdb.parse. */
/* :- implementation. */

/*
INIT mercury__mdb__parse__init
ENDINIT
*/

#include "mdb.parse.mih"


#include "mdb.mih"
#include "mdbcomp.mih"
#include "mdb.browser_info.mih"
#include "mdb.browser_term.mih"
#include "mdb.term_rep.mih"
#include "mdb.util.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "rtti_implementation.mih"
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

static const MR_EnumFunctorDescPtr mdb__parse__mdb__parse__enum_value_ordered_format_option_0[4];

static const MR_EnumFunctorDescPtr mdb__parse__mdb__parse__enum_name_ordered_format_option_0[4];

static const MR_Integer mdb__parse__mdb__parse__functor_number_map_format_option_0[4];

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_0;

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_1;

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_2;

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_3;

static const MR_EnumFunctorDescPtr mdb__parse__mdb__parse__enum_value_ordered_format_param_cmd_0[4];

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

static const MR_EnumFunctorDescPtr mdb__parse__mdb__parse__enum_value_ordered_setting_option_0[7];

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
  MR_Word * mdb__parse__HeadVar__1_1,
  MR_Word mdb__parse__HeadVar__2_2,
  MR_Word mdb__parse__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__parse____Unify____token_0_0(
  MR_Word mdb__parse__HeadVar__1_1,
  MR_Word mdb__parse__HeadVar__2_2);

static void MR_CALL 
mdb__parse__format_param_cmd_option_defaults_2_p_0(
  MR_Word * mdb__parse__HeadVar__1_1,
  MR_Word * mdb__parse__HeadVar__2_2,
  MR_Cont mdb__parse__cont,
  void * mdb__parse__cont_env_ptr);

static MR_bool MR_CALL 
mdb__parse__long_format_param_cmd_option_2_p_0(
  MR_String mdb__parse__HeadVar__1_1,
  MR_Word * mdb__parse__HeadVar__2_2);

static MR_bool MR_CALL 
mdb__parse__short_format_param_cmd_option_2_p_0(
  MR_Char mdb__parse__HeadVar__1_1,
  MR_Word * mdb__parse__HeadVar__2_2);

static void MR_CALL 
mdb__parse__format_cmd_option_defaults_2_p_0(
  MR_Word * mdb__parse__HeadVar__1_1,
  MR_Word * mdb__parse__HeadVar__2_2,
  MR_Cont mdb__parse__cont,
  void * mdb__parse__cont_env_ptr);

static MR_bool MR_CALL 
mdb__parse__long_format_cmd_option_2_p_0(
  MR_String mdb__parse__HeadVar__1_1,
  MR_Word * mdb__parse__HeadVar__2_2);

static MR_bool MR_CALL 
mdb__parse__short_format_cmd_option_2_p_0(
  MR_Char mdb__parse__HeadVar__1_1,
  MR_Word * mdb__parse__HeadVar__2_2);

static void MR_CALL 
mdb__parse__format_option_defaults_2_p_0(
  MR_Word * mdb__parse__HeadVar__1_1,
  MR_Word * mdb__parse__HeadVar__2_2,
  MR_Cont mdb__parse__cont,
  void * mdb__parse__cont_env_ptr);

static MR_bool MR_CALL 
mdb__parse__long_format_option_2_p_0(
  MR_String mdb__parse__HeadVar__1_1,
  MR_Word * mdb__parse__HeadVar__2_2);

static MR_bool MR_CALL 
mdb__parse__short_format_option_2_p_0(
  MR_Char mdb__parse__HeadVar__1_1,
  MR_Word * mdb__parse__HeadVar__2_2);

static MR_bool MR_CALL 
mdb__parse__read_command_external_3_p_0_1(
  MR_Box mdb__parse__closure_arg,
  MR_Box mdb__parse__wrapper_arg_1);

static MR_bool MR_CALL 
mdb__parse__read_command_4_p_0_1(
  MR_Box mdb__parse__closure_arg,
  MR_Box mdb__parse__wrapper_arg_1);

static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_15(
  void * mdb__parse__env_ptr_arg);

static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_16(
  MR_Box mdb__parse__closure_arg,
  MR_Box * mdb__parse__wrapper_arg_1,
  MR_Box * mdb__parse__wrapper_arg_2,
  MR_Cont mdb__parse__cont,
  void * mdb__parse__cont_env_ptr);

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_14(
  MR_Box mdb__parse__closure_arg,
  MR_Box mdb__parse__wrapper_arg_1,
  MR_Box * mdb__parse__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_13(
  MR_Box mdb__parse__closure_arg,
  MR_Box mdb__parse__wrapper_arg_1,
  MR_Box * mdb__parse__wrapper_arg_2);

static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_11(
  void * mdb__parse__env_ptr_arg);

static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_12(
  MR_Box mdb__parse__closure_arg,
  MR_Box * mdb__parse__wrapper_arg_1,
  MR_Box * mdb__parse__wrapper_arg_2,
  MR_Cont mdb__parse__cont,
  void * mdb__parse__cont_env_ptr);

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_10(
  MR_Box mdb__parse__closure_arg,
  MR_Box mdb__parse__wrapper_arg_1,
  MR_Box * mdb__parse__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_9(
  MR_Box mdb__parse__closure_arg,
  MR_Box mdb__parse__wrapper_arg_1,
  MR_Box * mdb__parse__wrapper_arg_2);

static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_7(
  void * mdb__parse__env_ptr_arg);

static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_8(
  MR_Box mdb__parse__closure_arg,
  MR_Box * mdb__parse__wrapper_arg_1,
  MR_Box * mdb__parse__wrapper_arg_2,
  MR_Cont mdb__parse__cont,
  void * mdb__parse__cont_env_ptr);

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_6(
  MR_Box mdb__parse__closure_arg,
  MR_Box mdb__parse__wrapper_arg_1,
  MR_Box * mdb__parse__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_5(
  MR_Box mdb__parse__closure_arg,
  MR_Box mdb__parse__wrapper_arg_1,
  MR_Box * mdb__parse__wrapper_arg_2);

static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_3(
  void * mdb__parse__env_ptr_arg);

static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_4(
  MR_Box mdb__parse__closure_arg,
  MR_Box * mdb__parse__wrapper_arg_1,
  MR_Box * mdb__parse__wrapper_arg_2,
  MR_Cont mdb__parse__cont,
  void * mdb__parse__cont_env_ptr);

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_2(
  MR_Box mdb__parse__closure_arg,
  MR_Box mdb__parse__wrapper_arg_1,
  MR_Box * mdb__parse__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_1(
  MR_Box mdb__parse__closure_arg,
  MR_Box mdb__parse__wrapper_arg_1,
  MR_Box * mdb__parse__wrapper_arg_2);

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0(
  MR_Word mdb__parse__CmdToken_5,
  MR_Word mdb__parse__ArgTokens_6,
  MR_Word mdb__parse__MaybeArgWords_7,
  MR_Word * mdb__parse__Command_8);

static MR_bool MR_CALL 
mdb__parse__parse_format_2_p_0(
  MR_Word mdb__parse__HeadVar__1_1,
  MR_Word * mdb__parse__Setting_4);

static MR_bool MR_CALL 
mdb__parse__parse_path_2_p_0(
  MR_Word mdb__parse__HeadVar__1_1,
  MR_Word * mdb__parse__Path_5);

static MR_bool MR_CALL 
mdb__parse__parse_up_down_dirs_2_p_0(
  MR_Word mdb__parse__HeadVar__1_1,
  MR_Word * mdb__parse__HeadVar__2_2);

static void MR_CALL 
mdb__parse__param_cmd_to_setting_3_p_0(
  MR_Word mdb__parse__HeadVar__1_1,
  MR_Integer mdb__parse__N_2,
  MR_Word * mdb__parse__HeadVar__3_3);

static void MR_CALL 
mdb__parse__lexer_words_2_p_0(
  MR_Word mdb__parse__HeadVar__1_1,
  MR_Word * mdb__parse__HeadVar__2_2);

static MR_bool MR_CALL 
mdb__parse__lexer_word_chars_2_p_0_2(
  MR_Box mdb__parse__closure_arg,
  MR_Box mdb__parse__wrapper_arg_1);

static MR_bool MR_CALL 
mdb__parse__lexer_word_chars_2_p_0_1(
  MR_Box mdb__parse__closure_arg,
  MR_Box mdb__parse__wrapper_arg_1);

static void MR_CALL 
mdb__parse__lexer_word_chars_2_p_0(
  MR_Word mdb__parse__HeadVar__1_1,
  MR_Word * mdb__parse__HeadVar__2_2);

static void MR_CALL 
mdb__parse__digits_to_int_acc_3_p_0(
  MR_Integer mdb__parse__Acc_1,
  MR_Word mdb__parse__HeadVar__2_2,
  MR_Integer * mdb__parse__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__parse____Unify____command_0_0_10001(
  MR_Box mdb__parse__wrapper_arg_1,
  MR_Box mdb__parse__wrapper_arg_2);

static void MR_CALL 
mdb__parse____Compare____command_0_0_10001(
  MR_Box * mdb__parse__wrapper_arg_1,
  MR_Box mdb__parse__wrapper_arg_2,
  MR_Box mdb__parse__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__parse____Unify____external_request_0_0_10001(
  MR_Box mdb__parse__wrapper_arg_1,
  MR_Box mdb__parse__wrapper_arg_2);

static void MR_CALL 
mdb__parse____Compare____external_request_0_0_10001(
  MR_Box * mdb__parse__wrapper_arg_1,
  MR_Box mdb__parse__wrapper_arg_2,
  MR_Box mdb__parse__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__parse____Unify____format_option_0_0_10001(
  MR_Box mdb__parse__wrapper_arg_1,
  MR_Box mdb__parse__wrapper_arg_2);

static void MR_CALL 
mdb__parse____Compare____format_option_0_0_10001(
  MR_Box * mdb__parse__wrapper_arg_1,
  MR_Box mdb__parse__wrapper_arg_2,
  MR_Box mdb__parse__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__parse____Unify____format_param_cmd_0_0_10001(
  MR_Box mdb__parse__wrapper_arg_1,
  MR_Box mdb__parse__wrapper_arg_2);

static void MR_CALL 
mdb__parse____Compare____format_param_cmd_0_0_10001(
  MR_Box * mdb__parse__wrapper_arg_1,
  MR_Box mdb__parse__wrapper_arg_2,
  MR_Box mdb__parse__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__parse____Unify____path_0_0_10001(
  MR_Box mdb__parse__wrapper_arg_1,
  MR_Box mdb__parse__wrapper_arg_2);

static void MR_CALL 
mdb__parse____Compare____path_0_0_10001(
  MR_Box * mdb__parse__wrapper_arg_1,
  MR_Box mdb__parse__wrapper_arg_2,
  MR_Box mdb__parse__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__parse____Unify____setting_option_0_0_10001(
  MR_Box mdb__parse__wrapper_arg_1,
  MR_Box mdb__parse__wrapper_arg_2);

static void MR_CALL 
mdb__parse____Compare____setting_option_0_0_10001(
  MR_Box * mdb__parse__wrapper_arg_1,
  MR_Box mdb__parse__wrapper_arg_2,
  MR_Box mdb__parse__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__parse____Unify____token_0_0_10001(
  MR_Box mdb__parse__wrapper_arg_1,
  MR_Box mdb__parse__wrapper_arg_2);

static void MR_CALL 
mdb__parse____Compare____token_0_0_10001(
  MR_Box * mdb__parse__wrapper_arg_1,
  MR_Box mdb__parse__wrapper_arg_2,
  MR_Box mdb__parse__wrapper_arg_3);


static /* final */ const MR_Box mdb__parse_scalar_common_1[10][2];

static /* final */ const MR_Box mdb__parse_scalar_common_2[1][4];

static /* final */ const MR_Box mdb__parse_scalar_common_3[20][3];

static /* final */ const MR_Box mdb__parse_scalar_common_4[6][5];

static /* final */ const MR_Box mdb__parse_scalar_common_8[1][1];


/* sealed */ struct mdb__parse__vector_common_type_5_0_s {
  const MR_String mdb__parse__vector_common_type_5_0__vct_5_f_0;
  const MR_Word mdb__parse__vector_common_type_5_0__vct_5_f_1;
};

static /* final */ const struct mdb__parse__vector_common_type_5_0_s mdb__parse_vector_common_5[4];

/* sealed */ struct mdb__parse__vector_common_type_6_0_s {
  const MR_String mdb__parse__vector_common_type_6_0__vct_6_f_0;
  const MR_Word mdb__parse__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct mdb__parse__vector_common_type_6_0_s mdb__parse_vector_common_6[4];

/* sealed */ struct mdb__parse__vector_common_type_7_0_s {
  const MR_String mdb__parse__vector_common_type_7_0__vct_7_f_0;
  const MR_Word mdb__parse__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct mdb__parse__vector_common_type_7_0_s mdb__parse_vector_common_7[4];

/* sealed */ struct mdb__parse__vector_common_type_9_0_s {
  const MR_Word mdb__parse__vector_common_type_9_0__vct_9_f_0;
  const MR_Word mdb__parse__vector_common_type_9_0__vct_9_f_1;
};

static /* final */ const struct mdb__parse__vector_common_type_9_0_s mdb__parse_vector_common_9[4];

/* sealed */ struct mdb__parse__vector_common_type_10_0_s {
  const MR_Word mdb__parse__vector_common_type_10_0__vct_10_f_0;
  const MR_Word mdb__parse__vector_common_type_10_0__vct_10_f_1;
};

static /* final */ const struct mdb__parse__vector_common_type_10_0_s mdb__parse_vector_common_10[14];

/* sealed */ struct mdb__parse__vector_common_type_11_0_s {
  const MR_String mdb__parse__vector_common_type_11_0__vct_11_f_0;
  const MR_Word mdb__parse__vector_common_type_11_0__vct_11_f_1;
};

static /* final */ const struct mdb__parse__vector_common_type_11_0_s mdb__parse_vector_common_11[7];



static /* final */ const MR_Box mdb__parse_scalar_common_1[10][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_token_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_maybe_option_table_1)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__parse_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_path_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mdb__parse_scalar_common_2[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box mdb__parse_scalar_common_3[20][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_2[0])),
    ((MR_Box) (mdb__parse__lexer_word_chars_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_2[0])),
    ((MR_Box) (mdb__parse__lexer_word_chars_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[0])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[1])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[2])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_3[2])),
    ((MR_Box) (&mdb__parse_scalar_common_3[3])),
    ((MR_Box) (&mdb__parse_scalar_common_3[4]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[3])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[4])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[5])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_3[6])),
    ((MR_Box) (&mdb__parse_scalar_common_3[7])),
    ((MR_Box) (&mdb__parse_scalar_common_3[8]))
  },
  /* row 10 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[3])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[4])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[5])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_12)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_3[10])),
    ((MR_Box) (&mdb__parse_scalar_common_3[11])),
    ((MR_Box) (&mdb__parse_scalar_common_3[12]))
  },
  /* row 14 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[3])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_13)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[4])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_14)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[5])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_16)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_3[14])),
    ((MR_Box) (&mdb__parse_scalar_common_3[15])),
    ((MR_Box) (&mdb__parse_scalar_common_3[16]))
  },
  /* row 18 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_2[0])),
    ((MR_Box) (mdb__parse__read_command_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_2[0])),
    ((MR_Box) (mdb__parse__read_command_external_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__parse_scalar_common_4[6][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_format_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_setting_option_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_setting_option_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_setting_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};

static /* final */ const MR_Box mdb__parse_scalar_common_8[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};


static /* final */ const struct mdb__parse__vector_common_type_5_0_s mdb__parse_vector_common_5[4] = {
  /* row 0 */
  {
    (MR_String) "m",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "mark",
    (MR_Integer) 0
  },
  /* row 2 */
  {
    (MR_String) "t",
    (MR_Integer) 1
  },
  /* row 3 */
  {
    (MR_String) "track",
    (MR_Integer) 1
  },
};

static /* final */ const struct mdb__parse__vector_common_type_6_0_s mdb__parse_vector_common_6[4] = {
  /* row 0 */
  {
    (MR_String) "depth",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "lines",
    (MR_Integer) 3
  },
  /* row 2 */
  {
    (MR_String) "size",
    (MR_Integer) 1
  },
  /* row 3 */
  {
    (MR_String) "width",
    (MR_Integer) 2
  },
};

static /* final */ const struct mdb__parse__vector_common_type_7_0_s mdb__parse_vector_common_7[4] = {
  /* row 0 */
  {
    (MR_String) "flat",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "pretty",
    (MR_Integer) 3
  },
  /* row 2 */
  {
    (MR_String) "raw-pretty",
    (MR_Integer) 1
  },
  /* row 3 */
  {
    (MR_String) "verbose",
    (MR_Integer) 2
  },
};

static /* final */ const struct mdb__parse__vector_common_type_9_0_s mdb__parse_vector_common_9[4] = {
  /* row 0 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_8[0])
  },
  /* row 1 */
  {
    (MR_Integer) 1,
    (MR_Word) MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_8[0])
  },
  /* row 2 */
  {
    (MR_Integer) 2,
    (MR_Word) MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_8[0])
  },
  /* row 3 */
  {
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_8[0])
  },
};

static /* final */ const struct mdb__parse__vector_common_type_10_0_s mdb__parse_vector_common_10[14] = {
  /* row 0 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_8[0])
  },
  /* row 1 */
  {
    (MR_Integer) 1,
    (MR_Word) MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_8[0])
  },
  /* row 2 */
  {
    (MR_Integer) 2,
    (MR_Word) MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_8[0])
  },
  /* row 3 */
  {
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_8[0])
  },
  /* row 4 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_8[0])
  },
  /* row 5 */
  {
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_8[0])
  },
  /* row 6 */
  {
    (MR_Integer) 6,
    (MR_Word) MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_8[0])
  },
  /* row 7 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_8[0])
  },
  /* row 8 */
  {
    (MR_Integer) 1,
    (MR_Word) MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_8[0])
  },
  /* row 9 */
  {
    (MR_Integer) 2,
    (MR_Word) MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_8[0])
  },
  /* row 10 */
  {
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_8[0])
  },
  /* row 11 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_8[0])
  },
  /* row 12 */
  {
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_8[0])
  },
  /* row 13 */
  {
    (MR_Integer) 6,
    (MR_Word) MR_mkword(MR_mktag(1), &mdb__parse_scalar_common_8[0])
  },
};

static /* final */ const struct mdb__parse__vector_common_type_11_0_s mdb__parse_vector_common_11[7] = {
  /* row 0 */
  {
    (MR_String) "browse",
    (MR_Integer) 1
  },
  /* row 1 */
  {
    (MR_String) "flat",
    (MR_Integer) 3
  },
  /* row 2 */
  {
    (MR_String) "pretty",
    (MR_Integer) 6
  },
  /* row 3 */
  {
    (MR_String) "print",
    (MR_Integer) 0
  },
  /* row 4 */
  {
    (MR_String) "print-all",
    (MR_Integer) 2
  },
  /* row 5 */
  {
    (MR_String) "raw-pretty",
    (MR_Integer) 4
  },
  /* row 6 */
  {
    (MR_String) "verbose",
    (MR_Integer) 5
  },
};


#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 mdb__parse__getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_format_option_0 = {
  &mercury__getopt__getopt__type_ctor_info_maybe_option_table_1,
  {
    (MR_TypeInfo) &mdb__parse__mdb__parse__type_ctor_info_format_option_0
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__parse__maybe__ti_maybe_1getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_format_option_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__parse__getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_format_option_0
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__parse__maybe__ti_maybe_1mdb__parse__type_ctor_info_path_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__parse__mdb__parse__type_ctor_info_path_0
  }
};

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_0[2] = {
  (MR_PseudoTypeInfo) &mdb__parse__maybe__ti_maybe_1getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_format_option_0,
  (MR_PseudoTypeInfo) &mdb__parse__maybe__ti_maybe_1mdb__parse__type_ctor_info_path_0
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_0 = {
  (MR_String) "cmd_print",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__parse__mdb__parse__field_types_command_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_1 = {
  (MR_String) "cmd_display",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_2 = {
  (MR_String) "cmd_write",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_3[1] = {
  (MR_PseudoTypeInfo) &mdb__parse__maybe__ti_maybe_1mdb__parse__type_ctor_info_path_0
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_3 = {
  (MR_String) "cmd_memory_addr",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 3,
  mdb__parse__mdb__parse__field_types_command_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_4[1] = {
  (MR_PseudoTypeInfo) &mdb__parse__mdb__parse__type_ctor_info_path_0
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_4 = {
  (MR_String) "cmd_cd_path",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 4,
  mdb__parse__mdb__parse__field_types_command_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_5 = {
  (MR_String) "cmd_cd_no_path",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_6 = {
  (MR_String) "cmd_pwd",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 6,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_7[3] = {
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_how_track_subterm_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_should_assert_invalid_0,
  (MR_PseudoTypeInfo) &mdb__parse__maybe__ti_maybe_1mdb__parse__type_ctor_info_path_0
};

static const MR_DuArgLocn mdb__parse__mdb__parse__field_locns_command_0_7[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
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
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 7,
  mdb__parse__mdb__parse__field_types_command_0_7,
  NULL,
  mdb__parse__mdb__parse__field_locns_command_0_7,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_8[1] = {
  (MR_PseudoTypeInfo) &mdb__parse__mdb__parse__type_ctor_info_path_0
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_8 = {
  (MR_String) "cmd_mode_query",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 8,
  mdb__parse__mdb__parse__field_types_command_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_9 = {
  (MR_String) "cmd_mode_query_no_path",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 9,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_10[1] = {
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_param_cmd_0
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_10 = {
  (MR_String) "cmd_param",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 10,
  mdb__parse__mdb__parse__field_types_command_0_10,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_11 = {
  (MR_String) "cmd_help",
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

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_12 = {
  (MR_String) "cmd_quit",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 12,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_13 = {
  (MR_String) "cmd_empty",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 13,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_14 = {
  (MR_String) "cmd_unknown",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 14,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 9,
    MR_SECTAG_LOCAL,
    mdb__parse__mdb__parse__du_stag_ordered_command_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__parse__mdb__parse__du_stag_ordered_command_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__parse__mdb__parse__du_stag_ordered_command_0_2
  },
  {
    (MR_Integer) 4,
    MR_SECTAG_REMOTE,
    mdb__parse__mdb__parse__du_stag_ordered_command_0_3
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__parse____Unify____command_0_0_10001)),
  ((MR_Box) (mdb__parse____Compare____command_0_0_10001)),
  (MR_String) "mdb.parse",
  (MR_String) "command",
  {     mdb__parse__mdb__parse__du_name_ordered_command_0 },
  {     mdb__parse__mdb__parse__du_ptag_ordered_command_0 },
  (MR_Integer) 15,
  (MR_Integer) 4,
  mdb__parse__mdb__parse__functor_number_map_command_0
};

static const MR_Integer mdb__parse__mdb__parse__functor_number_map_external_request_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mdb__parse__mdb__parse__notag_functor_desc_external_request_0 = {
  (MR_String) "external_request",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdb__parse__mdb__parse__type_ctor_info_external_request_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__parse____Unify____external_request_0_0_10001)),
  ((MR_Box) (mdb__parse____Compare____external_request_0_0_10001)),
  (MR_String) "mdb.parse",
  (MR_String) "external_request",
  {     &mdb__parse__mdb__parse__notag_functor_desc_external_request_0 },
  {     &mdb__parse__mdb__parse__notag_functor_desc_external_request_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__parse__mdb__parse__functor_number_map_external_request_0
};

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_option_0_0 = {
  (MR_String) "flat",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_option_0_1 = {
  (MR_String) "raw_pretty",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_option_0_2 = {
  (MR_String) "verbose",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_option_0_3 = {
  (MR_String) "pretty",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr mdb__parse__mdb__parse__enum_value_ordered_format_option_0[4] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__parse____Unify____format_option_0_0_10001)),
  ((MR_Box) (mdb__parse____Compare____format_option_0_0_10001)),
  (MR_String) "mdb.parse",
  (MR_String) "format_option",
  {     mdb__parse__mdb__parse__enum_name_ordered_format_option_0 },
  {     mdb__parse__mdb__parse__enum_value_ordered_format_option_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mdb__parse__mdb__parse__functor_number_map_format_option_0
};

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_0 = {
  (MR_String) "param_depth",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_1 = {
  (MR_String) "param_size",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_2 = {
  (MR_String) "param_width",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_3 = {
  (MR_String) "param_lines",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr mdb__parse__mdb__parse__enum_value_ordered_format_param_cmd_0[4] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__parse____Unify____format_param_cmd_0_0_10001)),
  ((MR_Box) (mdb__parse____Compare____format_param_cmd_0_0_10001)),
  (MR_String) "mdb.parse",
  (MR_String) "format_param_cmd",
  {     mdb__parse__mdb__parse__enum_name_ordered_format_param_cmd_0 },
  {     mdb__parse__mdb__parse__enum_value_ordered_format_param_cmd_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mdb__parse__mdb__parse__functor_number_map_format_param_cmd_0
};

static const MR_FA_TypeInfo_Struct1 mdb__parse__list__ti_list_1mdb__browser_info__type_ctor_info_up_down_dir_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0
  }
};

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_path_0_0[1] = {
  (MR_PseudoTypeInfo) &mdb__parse__list__ti_list_1mdb__browser_info__type_ctor_info_up_down_dir_0
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_path_0_0 = {
  (MR_String) "root_rel",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__parse__mdb__parse__field_types_path_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_path_0_1[1] = {
  (MR_PseudoTypeInfo) &mdb__parse__list__ti_list_1mdb__browser_info__type_ctor_info_up_down_dir_0
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_path_0_1 = {
  (MR_String) "dot_rel",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__parse__mdb__parse__field_types_path_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_path_0_0[1] = {
  &mdb__parse__mdb__parse__du_functor_desc_path_0_0
};

static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_path_0_1[1] = {
  &mdb__parse__mdb__parse__du_functor_desc_path_0_1
};

static const MR_DuPtagLayout mdb__parse__mdb__parse__du_ptag_ordered_path_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__parse__mdb__parse__du_stag_ordered_path_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__parse__mdb__parse__du_stag_ordered_path_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__parse____Unify____path_0_0_10001)),
  ((MR_Box) (mdb__parse____Compare____path_0_0_10001)),
  (MR_String) "mdb.parse",
  (MR_String) "path",
  {     mdb__parse__mdb__parse__du_name_ordered_path_0 },
  {     mdb__parse__mdb__parse__du_ptag_ordered_path_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__parse__mdb__parse__functor_number_map_path_0
};

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_0 = {
  (MR_String) "set_print",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_1 = {
  (MR_String) "set_browse",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_2 = {
  (MR_String) "set_print_all",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_3 = {
  (MR_String) "set_flat",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_4 = {
  (MR_String) "set_raw_pretty",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_5 = {
  (MR_String) "set_verbose",
  (MR_Integer) 5
};

static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_6 = {
  (MR_String) "set_pretty",
  (MR_Integer) 6
};

static const MR_EnumFunctorDescPtr mdb__parse__mdb__parse__enum_value_ordered_setting_option_0[7] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__parse____Unify____setting_option_0_0_10001)),
  ((MR_Box) (mdb__parse____Compare____setting_option_0_0_10001)),
  (MR_String) "mdb.parse",
  (MR_String) "setting_option",
  {     mdb__parse__mdb__parse__enum_name_ordered_setting_option_0 },
  {     mdb__parse__mdb__parse__enum_value_ordered_setting_option_0 },
  (MR_Integer) 7,
  (MR_Integer) 4,
  mdb__parse__mdb__parse__functor_number_map_setting_option_0
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_0 = {
  (MR_String) "token_dot",
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

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_1 = {
  (MR_String) "token_dot_dot",
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

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_2 = {
  (MR_String) "token_slash",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_3 = {
  (MR_String) "token_question",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_4 = {
  (MR_String) "token_up",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_5 = {
  (MR_String) "token_lessthan",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_token_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_6 = {
  (MR_String) "token_num",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 6,
  mdb__parse__mdb__parse__field_types_token_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_token_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_7 = {
  (MR_String) "token_name",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 7,
  mdb__parse__mdb__parse__field_types_token_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_token_0_8[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_8 = {
  (MR_String) "token_arg",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 8,
  mdb__parse__mdb__parse__field_types_token_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_token_0_9[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_9 = {
  (MR_String) "token_unknown",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 9,
  mdb__parse__mdb__parse__field_types_token_0_9,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 6,
    MR_SECTAG_LOCAL,
    mdb__parse__mdb__parse__du_stag_ordered_token_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__parse__mdb__parse__du_stag_ordered_token_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__parse__mdb__parse__du_stag_ordered_token_0_2
  },
  {
    (MR_Integer) 2,
    MR_SECTAG_REMOTE,
    mdb__parse__mdb__parse__du_stag_ordered_token_0_3
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__parse____Unify____token_0_0_10001)),
  ((MR_Box) (mdb__parse____Compare____token_0_0_10001)),
  (MR_String) "mdb.parse",
  (MR_String) "token",
  {     mdb__parse__mdb__parse__du_name_ordered_token_0 },
  {     mdb__parse__mdb__parse__du_ptag_ordered_token_0 },
  (MR_Integer) 10,
  (MR_Integer) 4,
  mdb__parse__mdb__parse__functor_number_map_token_0
};

static void MR_CALL 
mdb__parse____Compare____token_0_0(
  MR_Word * mdb__parse__HeadVar__1_1,
  MR_Word mdb__parse__HeadVar__2_2,
  MR_Word mdb__parse__HeadVar__3_3)
{
  {
    MR_bool mdb__parse__succeeded;
    MR_Integer mdb__parse__CastX_84 = (MR_Integer) mdb__parse__HeadVar__2_2;
    MR_Integer mdb__parse__CastY_85 = (MR_Integer) mdb__parse__HeadVar__3_3;

    mdb__parse__succeeded = (mdb__parse__CastX_84 == mdb__parse__CastY_85);
    if (mdb__parse__succeeded)
      *mdb__parse__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mdb__parse__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mdb__parse__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__parse__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__parse__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__parse__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 3:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 3:
              switch (MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__parse__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 4:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 4:
              switch (MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__parse__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 5:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 5:
              switch (MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__parse__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer mdb__parse__Var_92 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdb__parse__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 5:
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer mdb__parse__ArgY1_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__parse__HeadVar__1_1, mdb__parse__Var_92, mdb__parse__ArgY1_35);
                  }
                }
                break;
              case (MR_Integer) 2:
                *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String mdb__parse__Var_91 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdb__parse__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 5:
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_String mdb__parse__ArgY1_51 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(mdb__parse__HeadVar__1_1, mdb__parse__Var_91, mdb__parse__ArgY1_51);
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String mdb__parse__Var_90 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mdb__parse__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 5:
                        *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_String mdb__parse__ArgY1_67 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__private_builtin__builtin_compare_string_3_p_0(mdb__parse__HeadVar__1_1, mdb__parse__Var_90, mdb__parse__ArgY1_67);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Char mdb__parse__Var_93 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mdb__parse__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 5:
                        *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Char mdb__parse__ArgY1_83 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__private_builtin__builtin_compare_character_3_p_0(mdb__parse__HeadVar__1_1, mdb__parse__Var_93, mdb__parse__ArgY1_83);
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

static MR_bool MR_CALL 
mdb__parse____Unify____token_0_0(
  MR_Word mdb__parse__HeadVar__1_1,
  MR_Word mdb__parse__HeadVar__2_2)
{
  {
    MR_bool mdb__parse__succeeded;
    MR_Integer mdb__parse__CastX_23 = (MR_Integer) mdb__parse__HeadVar__1_1;
    MR_Integer mdb__parse__CastY_24 = (MR_Integer) mdb__parse__HeadVar__2_2;

    mdb__parse__succeeded = (mdb__parse__CastX_23 == mdb__parse__CastY_24);
    if (mdb__parse__succeeded)
      mdb__parse__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mdb__parse__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mdb__parse__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mdb__parse__CastX_3 = (MR_Integer) mdb__parse__HeadVar__1_1;
                MR_Integer mdb__parse__CastY_4 = (MR_Integer) mdb__parse__HeadVar__2_2;

                mdb__parse__succeeded = (mdb__parse__CastY_4 == mdb__parse__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mdb__parse__CastX_5 = (MR_Integer) mdb__parse__HeadVar__1_1;
                MR_Integer mdb__parse__CastY_6 = (MR_Integer) mdb__parse__HeadVar__2_2;

                mdb__parse__succeeded = (mdb__parse__CastY_6 == mdb__parse__CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer mdb__parse__CastX_7 = (MR_Integer) mdb__parse__HeadVar__1_1;
                MR_Integer mdb__parse__CastY_8 = (MR_Integer) mdb__parse__HeadVar__2_2;

                mdb__parse__succeeded = (mdb__parse__CastY_8 == mdb__parse__CastX_7);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer mdb__parse__CastX_9 = (MR_Integer) mdb__parse__HeadVar__1_1;
                MR_Integer mdb__parse__CastY_10 = (MR_Integer) mdb__parse__HeadVar__2_2;

                mdb__parse__succeeded = (mdb__parse__CastY_10 == mdb__parse__CastX_9);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer mdb__parse__CastX_11 = (MR_Integer) mdb__parse__HeadVar__1_1;
                MR_Integer mdb__parse__CastY_12 = (MR_Integer) mdb__parse__HeadVar__2_2;

                mdb__parse__succeeded = (mdb__parse__CastY_12 == mdb__parse__CastX_11);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer mdb__parse__CastX_13 = (MR_Integer) mdb__parse__HeadVar__1_1;
                MR_Integer mdb__parse__CastY_14 = (MR_Integer) mdb__parse__HeadVar__2_2;

                mdb__parse__succeeded = (mdb__parse__CastY_14 == mdb__parse__CastX_13);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer mdb__parse__ArgX1_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mdb__parse__ArgY1_16;

            mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__parse__succeeded)
              {
                mdb__parse__ArgY1_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__2_2, (MR_Integer) 0)));
                mdb__parse__succeeded = (mdb__parse__ArgX1_15 == mdb__parse__ArgY1_16);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String mdb__parse__ArgX1_17 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mdb__parse__ArgY1_18;

            mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mdb__parse__succeeded)
              {
                mdb__parse__ArgY1_18 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__HeadVar__2_2, (MR_Integer) 0)));
                mdb__parse__succeeded = (strcmp(mdb__parse__ArgX1_17, mdb__parse__ArgY1_18) == 0);
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String mdb__parse__ArgX1_19 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__1_1, (MR_Integer) 1)));
                MR_String mdb__parse__ArgY1_20;

                mdb__parse__succeeded = ((((MR_tag((MR_Word) mdb__parse__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (mdb__parse__succeeded)
                  {
                    mdb__parse__ArgY1_20 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 1)));
                    mdb__parse__succeeded = (strcmp(mdb__parse__ArgX1_19, mdb__parse__ArgY1_20) == 0);
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Char mdb__parse__ArgX1_21 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__1_1, (MR_Integer) 1)));
                MR_Char mdb__parse__ArgY1_22;

                mdb__parse__succeeded = ((((MR_tag((MR_Word) mdb__parse__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (mdb__parse__succeeded)
                  {
                    mdb__parse__ArgY1_22 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 1)));
                    mdb__parse__succeeded = (mdb__parse__ArgX1_21 == mdb__parse__ArgY1_22);
                  }
              }
              break;
          }
          break;
      }
    return mdb__parse__succeeded;
  }
}

void MR_CALL 
mdb__parse____Compare____setting_option_0_0(
  MR_Word * mdb__parse__HeadVar__1_1,
  MR_Word mdb__parse__HeadVar__2_2,
  MR_Word mdb__parse__HeadVar__3_3)
{
  {
    MR_bool mdb__parse__succeeded;
    MR_Integer mdb__parse__Cast_HeadVar1_4 = (MR_Integer) mdb__parse__HeadVar__2_2;
    MR_Integer mdb__parse__Cast_HeadVar2_5 = (MR_Integer) mdb__parse__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__parse__HeadVar__1_1, mdb__parse__Cast_HeadVar1_4, mdb__parse__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdb__parse____Unify____setting_option_0_0(
  MR_Word mdb__parse__HeadVar__2_1,
  MR_Word mdb__parse__HeadVar__2_2)
{
  {
    MR_bool mdb__parse__succeeded = (mdb__parse__HeadVar__2_1 == mdb__parse__HeadVar__2_2);

    return mdb__parse__succeeded;
  }
}

void MR_CALL 
mdb__parse____Compare____format_param_cmd_0_0(
  MR_Word * mdb__parse__HeadVar__1_1,
  MR_Word mdb__parse__HeadVar__2_2,
  MR_Word mdb__parse__HeadVar__3_3)
{
  {
    MR_bool mdb__parse__succeeded;
    MR_Integer mdb__parse__Cast_HeadVar1_4 = (MR_Integer) mdb__parse__HeadVar__2_2;
    MR_Integer mdb__parse__Cast_HeadVar2_5 = (MR_Integer) mdb__parse__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__parse__HeadVar__1_1, mdb__parse__Cast_HeadVar1_4, mdb__parse__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdb__parse____Unify____format_param_cmd_0_0(
  MR_Word mdb__parse__HeadVar__2_1,
  MR_Word mdb__parse__HeadVar__2_2)
{
  {
    MR_bool mdb__parse__succeeded = (mdb__parse__HeadVar__2_1 == mdb__parse__HeadVar__2_2);

    return mdb__parse__succeeded;
  }
}

void MR_CALL 
mdb__parse____Compare____format_option_0_0(
  MR_Word * mdb__parse__HeadVar__1_1,
  MR_Word mdb__parse__HeadVar__2_2,
  MR_Word mdb__parse__HeadVar__3_3)
{
  {
    MR_bool mdb__parse__succeeded;
    MR_Integer mdb__parse__Cast_HeadVar1_4 = (MR_Integer) mdb__parse__HeadVar__2_2;
    MR_Integer mdb__parse__Cast_HeadVar2_5 = (MR_Integer) mdb__parse__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__parse__HeadVar__1_1, mdb__parse__Cast_HeadVar1_4, mdb__parse__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdb__parse____Unify____format_option_0_0(
  MR_Word mdb__parse__HeadVar__2_1,
  MR_Word mdb__parse__HeadVar__2_2)
{
  {
    MR_bool mdb__parse__succeeded = (mdb__parse__HeadVar__2_1 == mdb__parse__HeadVar__2_2);

    return mdb__parse__succeeded;
  }
}

void MR_CALL 
mdb__parse____Compare____external_request_0_0(
  MR_Word * mdb__parse__HeadVar__1_1,
  MR_Word mdb__parse__HeadVar__2_2,
  MR_Word mdb__parse__HeadVar__3_3)
{
  {
    MR_bool mdb__parse__succeeded;
    MR_Integer mdb__parse__CastX_6 = (MR_Integer) mdb__parse__HeadVar__2_2;
    MR_Integer mdb__parse__CastY_7 = (MR_Integer) mdb__parse__HeadVar__3_3;

    mdb__parse__succeeded = (mdb__parse__CastX_6 == mdb__parse__CastY_7);
    if (mdb__parse__succeeded)
      *mdb__parse__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String mdb__parse__ArgX1_4 = (MR_String) mdb__parse__HeadVar__2_2;
        MR_String mdb__parse__ArgY1_5 = (MR_String) mdb__parse__HeadVar__3_3;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(mdb__parse__HeadVar__1_1, mdb__parse__ArgX1_4, mdb__parse__ArgY1_5);
        }
      }
  }
}

MR_bool MR_CALL 
mdb__parse____Unify____external_request_0_0(
  MR_Word mdb__parse__HeadVar__1_1,
  MR_Word mdb__parse__HeadVar__2_2)
{
  {
    MR_bool mdb__parse__succeeded;
    MR_Integer mdb__parse__CastX_5 = (MR_Integer) mdb__parse__HeadVar__1_1;
    MR_Integer mdb__parse__CastY_6 = (MR_Integer) mdb__parse__HeadVar__2_2;

    mdb__parse__succeeded = (mdb__parse__CastX_5 == mdb__parse__CastY_6);
    if (mdb__parse__succeeded)
      mdb__parse__succeeded = MR_TRUE;
    else
      {
        MR_String mdb__parse__ArgX1_3 = (MR_String) mdb__parse__HeadVar__1_1;
        MR_String mdb__parse__ArgY1_4 = (MR_String) mdb__parse__HeadVar__2_2;

        mdb__parse__succeeded = (strcmp(mdb__parse__ArgX1_3, mdb__parse__ArgY1_4) == 0);
      }
    return mdb__parse__succeeded;
  }
}

void MR_CALL 
mdb__parse____Compare____command_0_0(
  MR_Word * mdb__parse__HeadVar__1_1,
  MR_Word mdb__parse__HeadVar__2_2,
  MR_Word mdb__parse__HeadVar__3_3)
{
  {
    MR_bool mdb__parse__succeeded;
    MR_Integer mdb__parse__CastX_28 = (MR_Integer) mdb__parse__HeadVar__2_2;
    MR_Integer mdb__parse__CastY_29 = (MR_Integer) mdb__parse__HeadVar__3_3;

    mdb__parse__succeeded = (mdb__parse__CastX_28 == mdb__parse__CastY_29);
    if (mdb__parse__succeeded)
      *mdb__parse__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer mdb__parse__Var_4;
        MR_Integer mdb__parse__Var_5;

        {
          mdb__parse____Index____command_0_0(mdb__parse__HeadVar__2_2, &mdb__parse__Var_4);
        }
        {
          mdb__parse____Index____command_0_0(mdb__parse__HeadVar__3_3, &mdb__parse__Var_5);
        }
        mdb__parse__succeeded = (mdb__parse__Var_4 < mdb__parse__Var_5);
        if (mdb__parse__succeeded)
          *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            mdb__parse__succeeded = (mdb__parse__Var_4 > mdb__parse__Var_5);
            if (mdb__parse__succeeded)
              *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
            else
              {
                MR_Word mdb__parse__Var_6;

                switch (MR_tag((MR_Word) mdb__parse__HeadVar__2_2)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mdb__parse__HeadVar__2_2)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          mdb__parse__Var_6 = (MR_Integer) 0;
                          mdb__parse__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          mdb__parse__Var_6 = (MR_Integer) 0;
                          mdb__parse__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          mdb__parse__Var_6 = (MR_Integer) 0;
                          mdb__parse__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          mdb__parse__Var_6 = (MR_Integer) 0;
                          mdb__parse__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          mdb__parse__Var_6 = (MR_Integer) 0;
                          mdb__parse__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          mdb__parse__Var_6 = (MR_Integer) 0;
                          mdb__parse__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          mdb__parse__Var_6 = (MR_Integer) 0;
                          mdb__parse__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          mdb__parse__Var_6 = (MR_Integer) 0;
                          mdb__parse__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          mdb__parse__Var_6 = (MR_Integer) 0;
                          mdb__parse__succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word mdb__parse__ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__2_2, (MR_Integer) 0)));
                      MR_Word mdb__parse__ArgY1_8;
                      MR_Word mdb__parse__ArgX2_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__2_2, (MR_Integer) 1)));
                      MR_Word mdb__parse__ArgY2_10;
                      MR_Word mdb__parse__Var_11;
                      MR_Word mdb__parse__TypeInfo_30_30;

                      mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
                      if (mdb__parse__succeeded)
                        {
                          mdb__parse__ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__3_3, (MR_Integer) 0)));
                          mdb__parse__ArgY2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__3_3, (MR_Integer) 1)));
                          mdb__parse__TypeInfo_30_30 = (MR_Word) &mdb__parse_scalar_common_1[2];
                          {
                            mercury__builtin__compare_3_p_0(mdb__parse__TypeInfo_30_30, &mdb__parse__Var_11, ((MR_Box) (mdb__parse__ArgX1_7)), ((MR_Box) (mdb__parse__ArgY1_8)));
                          }
                          mdb__parse__succeeded = (mdb__parse__Var_11 == (MR_Integer) 0);
                          mdb__parse__succeeded = !(mdb__parse__succeeded);
                          if (mdb__parse__succeeded)
                            mdb__parse__Var_6 = mdb__parse__Var_11;
                          else
                            {
                              {
                                mercury__builtin__compare_3_p_0((MR_Word) &mdb__parse_scalar_common_1[3], &mdb__parse__Var_6, ((MR_Box) (mdb__parse__ArgX2_9)), ((MR_Box) (mdb__parse__ArgY2_10)));
                              }
                            }
                          mdb__parse__succeeded = MR_TRUE;
                        }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word mdb__parse__TypeInfo_32_32;
                      MR_Word mdb__parse__ArgX1_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__parse__HeadVar__2_2, (MR_Integer) 0)));
                      MR_Word mdb__parse__ArgY1_13;

                      mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
                      if (mdb__parse__succeeded)
                        {
                          mdb__parse__ArgY1_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__parse__HeadVar__3_3, (MR_Integer) 0)));
                          mdb__parse__TypeInfo_32_32 = (MR_Word) &mdb__parse_scalar_common_1[3];
                          {
                            mercury__builtin__compare_3_p_0(mdb__parse__TypeInfo_32_32, &mdb__parse__Var_6, ((MR_Box) (mdb__parse__ArgX1_12)), ((MR_Box) (mdb__parse__ArgY1_13)));
                          }
                          mdb__parse__succeeded = MR_TRUE;
                        }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word mdb__parse__ArgX1_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word mdb__parse__ArgY1_15;

                          mdb__parse__succeeded = ((((MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (mdb__parse__succeeded)
                            {
                              mdb__parse__ArgY1_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 1)));
                              {
                                mdb__parse____Compare____path_0_0(&mdb__parse__Var_6, mdb__parse__ArgX1_14, mdb__parse__ArgY1_15);
                              }
                              mdb__parse__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word mdb__parse__ArgX1_16 = ((((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
                          MR_Word mdb__parse__ArgY1_17;
                          MR_Word mdb__parse__ArgX2_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                          MR_Word mdb__parse__ArgY2_19;
                          MR_Word mdb__parse__ArgX3_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 2)));
                          MR_Word mdb__parse__ArgY3_21;
                          MR_Word mdb__parse__Var_22;
                          MR_Integer mdb__parse__Var_39;
                          MR_Integer mdb__parse__Var_40;

                          mdb__parse__succeeded = ((((MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
                          if (mdb__parse__succeeded)
                            {
                              mdb__parse__ArgY1_17 = ((((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 1);
                              mdb__parse__ArgY2_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                              mdb__parse__ArgY3_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 2)));
                              mdb__parse__Var_39 = (MR_Integer) mdb__parse__ArgX1_16;
                              mdb__parse__Var_40 = (MR_Integer) mdb__parse__ArgY1_17;
                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__parse__Var_22, mdb__parse__Var_39, mdb__parse__Var_40);
                              }
                              mdb__parse__succeeded = (mdb__parse__Var_22 == (MR_Integer) 0);
                              mdb__parse__succeeded = !(mdb__parse__succeeded);
                              if (mdb__parse__succeeded)
                                mdb__parse__Var_6 = mdb__parse__Var_22;
                              else
                                {
                                  MR_Word mdb__parse__Var_23;
                                  MR_Integer mdb__parse__Var_41 = (MR_Integer) mdb__parse__ArgX2_18;
                                  MR_Integer mdb__parse__Var_42 = (MR_Integer) mdb__parse__ArgY2_19;

                                  {
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__parse__Var_23, mdb__parse__Var_41, mdb__parse__Var_42);
                                  }
                                  mdb__parse__succeeded = (mdb__parse__Var_23 == (MR_Integer) 0);
                                  mdb__parse__succeeded = !(mdb__parse__succeeded);
                                  if (mdb__parse__succeeded)
                                    mdb__parse__Var_6 = mdb__parse__Var_23;
                                  else
                                    {
                                      {
                                        mercury__builtin__compare_3_p_0((MR_Word) &mdb__parse_scalar_common_1[3], &mdb__parse__Var_6, ((MR_Box) (mdb__parse__ArgX3_20)), ((MR_Box) (mdb__parse__ArgY3_21)));
                                      }
                                    }
                                }
                              mdb__parse__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word mdb__parse__ArgX1_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word mdb__parse__ArgY1_25;

                          mdb__parse__succeeded = ((((MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
                          if (mdb__parse__succeeded)
                            {
                              mdb__parse__ArgY1_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 1)));
                              {
                                mdb__parse____Compare____path_0_0(&mdb__parse__Var_6, mdb__parse__ArgX1_24, mdb__parse__ArgY1_25);
                              }
                              mdb__parse__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word mdb__parse__ArgX1_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word mdb__parse__ArgY1_27;

                          mdb__parse__succeeded = ((((MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
                          if (mdb__parse__succeeded)
                            {
                              mdb__parse__ArgY1_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 1)));
                              {
                                mdb__browser_info____Compare____param_cmd_0_0(&mdb__parse__Var_6, mdb__parse__ArgX1_26, mdb__parse__ArgY1_27);
                              }
                              mdb__parse__succeeded = MR_TRUE;
                            }
                        }
                        break;
                    }
                    break;
                }
                if (mdb__parse__succeeded)
                  *mdb__parse__HeadVar__1_1 = mdb__parse__Var_6;
                else
                  {
                    mercury__private_builtin__compare_error_0_p_0();
                    return;
                  }
              }
          }
      }
  }
}

void MR_CALL 
mdb__parse____Compare____path_0_0(
  MR_Word * mdb__parse__HeadVar__1_1,
  MR_Word mdb__parse__HeadVar__2_2,
  MR_Word mdb__parse__HeadVar__3_3)
{
  {
    MR_bool mdb__parse__succeeded;
    MR_Integer mdb__parse__CastX_12 = (MR_Integer) mdb__parse__HeadVar__2_2;
    MR_Integer mdb__parse__CastY_13 = (MR_Integer) mdb__parse__HeadVar__3_3;

    mdb__parse__succeeded = (mdb__parse__CastX_12 == mdb__parse__CastY_13);
    if (mdb__parse__succeeded)
      *mdb__parse__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) mdb__parse__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mdb__parse__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word mdb__parse__ArgY1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__parse_scalar_common_1[4], mdb__parse__HeadVar__1_1, ((MR_Box) (mdb__parse__Var_16)), ((MR_Box) (mdb__parse__ArgY1_11)));
            }
          }
        else
          *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
      }
    else
      {
        MR_Word mdb__parse__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__parse__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word mdb__parse__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__parse__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__parse_scalar_common_1[4], mdb__parse__HeadVar__1_1, ((MR_Box) (mdb__parse__Var_17)), ((MR_Box) (mdb__parse__ArgY1_5)));
            }
          }
      }
  }
}

void MR_CALL 
mdb__parse____Index____command_0_0(
  MR_Word mdb__parse__HeadVar__1_1,
  MR_Integer * mdb__parse__HeadVar__2_2)
{
  {
    MR_bool mdb__parse__succeeded;

    switch (MR_tag((MR_Word) mdb__parse__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mdb__parse__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mdb__parse__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            *mdb__parse__HeadVar__2_2 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            *mdb__parse__HeadVar__2_2 = (MR_Integer) 5;
            break;
          case (MR_Integer) 3:
            *mdb__parse__HeadVar__2_2 = (MR_Integer) 6;
            break;
          case (MR_Integer) 4:
            *mdb__parse__HeadVar__2_2 = (MR_Integer) 9;
            break;
          case (MR_Integer) 5:
            *mdb__parse__HeadVar__2_2 = (MR_Integer) 11;
            break;
          case (MR_Integer) 6:
            *mdb__parse__HeadVar__2_2 = (MR_Integer) 12;
            break;
          case (MR_Integer) 7:
            *mdb__parse__HeadVar__2_2 = (MR_Integer) 13;
            break;
          case (MR_Integer) 8:
            *mdb__parse__HeadVar__2_2 = (MR_Integer) 14;
            break;
        }
        break;
      case (MR_Integer) 1:
        *mdb__parse__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        *mdb__parse__HeadVar__2_2 = (MR_Integer) 3;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mdb__parse__HeadVar__2_2 = (MR_Integer) 4;
            break;
          case (MR_Integer) 1:
            *mdb__parse__HeadVar__2_2 = (MR_Integer) 7;
            break;
          case (MR_Integer) 2:
            *mdb__parse__HeadVar__2_2 = (MR_Integer) 8;
            break;
          case (MR_Integer) 3:
            *mdb__parse__HeadVar__2_2 = (MR_Integer) 10;
            break;
        }
        break;
    }
  }
}

MR_bool MR_CALL 
mdb__parse____Unify____command_0_0(
  MR_Word mdb__parse__HeadVar__1_1,
  MR_Word mdb__parse__HeadVar__2_2)
{
  {
    MR_bool mdb__parse__succeeded;
    MR_Integer mdb__parse__CastX_39 = (MR_Integer) mdb__parse__HeadVar__1_1;
    MR_Integer mdb__parse__CastY_40 = (MR_Integer) mdb__parse__HeadVar__2_2;

    mdb__parse__succeeded = (mdb__parse__CastX_39 == mdb__parse__CastY_40);
    if (mdb__parse__succeeded)
      mdb__parse__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mdb__parse__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mdb__parse__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mdb__parse__CastX_7 = (MR_Integer) mdb__parse__HeadVar__1_1;
                MR_Integer mdb__parse__CastY_8 = (MR_Integer) mdb__parse__HeadVar__2_2;

                mdb__parse__succeeded = (mdb__parse__CastY_8 == mdb__parse__CastX_7);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mdb__parse__CastX_9 = (MR_Integer) mdb__parse__HeadVar__1_1;
                MR_Integer mdb__parse__CastY_10 = (MR_Integer) mdb__parse__HeadVar__2_2;

                mdb__parse__succeeded = (mdb__parse__CastY_10 == mdb__parse__CastX_9);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer mdb__parse__CastX_15 = (MR_Integer) mdb__parse__HeadVar__1_1;
                MR_Integer mdb__parse__CastY_16 = (MR_Integer) mdb__parse__HeadVar__2_2;

                mdb__parse__succeeded = (mdb__parse__CastY_16 == mdb__parse__CastX_15);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer mdb__parse__CastX_17 = (MR_Integer) mdb__parse__HeadVar__1_1;
                MR_Integer mdb__parse__CastY_18 = (MR_Integer) mdb__parse__HeadVar__2_2;

                mdb__parse__succeeded = (mdb__parse__CastY_18 == mdb__parse__CastX_17);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer mdb__parse__CastX_27 = (MR_Integer) mdb__parse__HeadVar__1_1;
                MR_Integer mdb__parse__CastY_28 = (MR_Integer) mdb__parse__HeadVar__2_2;

                mdb__parse__succeeded = (mdb__parse__CastY_28 == mdb__parse__CastX_27);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer mdb__parse__CastX_31 = (MR_Integer) mdb__parse__HeadVar__1_1;
                MR_Integer mdb__parse__CastY_32 = (MR_Integer) mdb__parse__HeadVar__2_2;

                mdb__parse__succeeded = (mdb__parse__CastY_32 == mdb__parse__CastX_31);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Integer mdb__parse__CastX_33 = (MR_Integer) mdb__parse__HeadVar__1_1;
                MR_Integer mdb__parse__CastY_34 = (MR_Integer) mdb__parse__HeadVar__2_2;

                mdb__parse__succeeded = (mdb__parse__CastY_34 == mdb__parse__CastX_33);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Integer mdb__parse__CastX_35 = (MR_Integer) mdb__parse__HeadVar__1_1;
                MR_Integer mdb__parse__CastY_36 = (MR_Integer) mdb__parse__HeadVar__2_2;

                mdb__parse__succeeded = (mdb__parse__CastY_36 == mdb__parse__CastX_35);
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Integer mdb__parse__CastX_37 = (MR_Integer) mdb__parse__HeadVar__1_1;
                MR_Integer mdb__parse__CastY_38 = (MR_Integer) mdb__parse__HeadVar__2_2;

                mdb__parse__succeeded = (mdb__parse__CastY_38 == mdb__parse__CastX_37);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__parse__TypeInfo_43_43;
            MR_Word mdb__parse__TypeInfo_44_44;
            MR_Word mdb__parse__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__parse__ArgY1_4;
            MR_Word mdb__parse__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mdb__parse__ArgY2_6;

            mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__parse__succeeded)
              {
                mdb__parse__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__2_2, (MR_Integer) 0)));
                mdb__parse__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__2_2, (MR_Integer) 1)));
                mdb__parse__TypeInfo_43_43 = (MR_Word) &mdb__parse_scalar_common_1[2];
                {
                  mdb__parse__succeeded = mercury__builtin__unify_2_p_0(mdb__parse__TypeInfo_43_43, ((MR_Box) (mdb__parse__ArgX1_3)), ((MR_Box) (mdb__parse__ArgY1_4)));
                }
                if (mdb__parse__succeeded)
                  {
                    mdb__parse__TypeInfo_44_44 = (MR_Word) &mdb__parse_scalar_common_1[3];
                    {
                      mdb__parse__succeeded = mercury__builtin__unify_2_p_0(mdb__parse__TypeInfo_44_44, ((MR_Box) (mdb__parse__ArgX2_5)), ((MR_Box) (mdb__parse__ArgY2_6)));
                    }
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdb__parse__TypeInfo_41_41;
            MR_Word mdb__parse__ArgX1_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__parse__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__parse__ArgY1_12;

            mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mdb__parse__succeeded)
              {
                mdb__parse__ArgY1_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__parse__HeadVar__2_2, (MR_Integer) 0)));
                mdb__parse__TypeInfo_41_41 = (MR_Word) &mdb__parse_scalar_common_1[3];
                {
                  mdb__parse__succeeded = mercury__builtin__unify_2_p_0(mdb__parse__TypeInfo_41_41, ((MR_Box) (mdb__parse__ArgX1_11)), ((MR_Box) (mdb__parse__ArgY1_12)));
                }
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word mdb__parse__ArgX1_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mdb__parse__ArgY1_14;

                mdb__parse__succeeded = ((((MR_tag((MR_Word) mdb__parse__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (mdb__parse__succeeded)
                  {
                    mdb__parse__ArgY1_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      mdb__parse__succeeded = mdb__parse____Unify____path_0_0(mdb__parse__ArgX1_13, mdb__parse__ArgY1_14);
                    }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mdb__parse__TypeInfo_45_45;
                MR_Word mdb__parse__ArgX1_19 = ((((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 1);
                MR_Word mdb__parse__ArgY1_20;
                MR_Word mdb__parse__ArgX2_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                MR_Word mdb__parse__ArgY2_22;
                MR_Word mdb__parse__ArgX3_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word mdb__parse__ArgY3_24;

                mdb__parse__succeeded = ((((MR_tag((MR_Word) mdb__parse__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (mdb__parse__succeeded)
                  {
                    mdb__parse__ArgY1_20 = ((((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
                    mdb__parse__ArgY2_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                    mdb__parse__ArgY3_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 2)));
                    mdb__parse__succeeded = (mdb__parse__ArgX1_19 == mdb__parse__ArgY1_20);
                    if (mdb__parse__succeeded)
                      {
                        mdb__parse__succeeded = (mdb__parse__ArgX2_21 == mdb__parse__ArgY2_22);
                        if (mdb__parse__succeeded)
                          {
                            mdb__parse__TypeInfo_45_45 = (MR_Word) &mdb__parse_scalar_common_1[3];
                            {
                              mdb__parse__succeeded = mercury__builtin__unify_2_p_0(mdb__parse__TypeInfo_45_45, ((MR_Box) (mdb__parse__ArgX3_23)), ((MR_Box) (mdb__parse__ArgY3_24)));
                            }
                          }
                      }
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mdb__parse__ArgX1_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mdb__parse__ArgY1_26;

                mdb__parse__succeeded = ((((MR_tag((MR_Word) mdb__parse__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (mdb__parse__succeeded)
                  {
                    mdb__parse__ArgY1_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      mdb__parse__succeeded = mdb__parse____Unify____path_0_0(mdb__parse__ArgX1_25, mdb__parse__ArgY1_26);
                    }
                  }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word mdb__parse__ArgX1_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mdb__parse__ArgY1_30;

                mdb__parse__succeeded = ((((MR_tag((MR_Word) mdb__parse__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (mdb__parse__succeeded)
                  {
                    mdb__parse__ArgY1_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      mdb__parse__succeeded = mdb__browser_info____Unify____param_cmd_0_0(mdb__parse__ArgX1_29, mdb__parse__ArgY1_30);
                    }
                  }
              }
              break;
          }
          break;
      }
    return mdb__parse__succeeded;
  }
}

MR_bool MR_CALL 
mdb__parse____Unify____path_0_0(
  MR_Word mdb__parse__HeadVar__1_1,
  MR_Word mdb__parse__HeadVar__2_2)
{
  {
    MR_bool mdb__parse__succeeded;
    MR_Integer mdb__parse__CastX_7 = (MR_Integer) mdb__parse__HeadVar__1_1;
    MR_Integer mdb__parse__CastY_8 = (MR_Integer) mdb__parse__HeadVar__2_2;

    mdb__parse__succeeded = (mdb__parse__CastX_7 == mdb__parse__CastY_8);
    if (mdb__parse__succeeded)
      mdb__parse__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) mdb__parse__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mdb__parse__TypeInfo_9_9;
        MR_Word mdb__parse__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdb__parse__ArgY1_6;

        mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mdb__parse__succeeded)
          {
            mdb__parse__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__2_2, (MR_Integer) 0)));
            mdb__parse__TypeInfo_9_9 = (MR_Word) &mdb__parse_scalar_common_1[4];
            {
              mdb__parse__succeeded = mercury__builtin__unify_2_p_0(mdb__parse__TypeInfo_9_9, ((MR_Box) (mdb__parse__ArgX1_5)), ((MR_Box) (mdb__parse__ArgY1_6)));
            }
          }
      }
    else
      {
        MR_Word mdb__parse__TypeInfo_10_10;
        MR_Word mdb__parse__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__parse__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdb__parse__ArgY1_4;

        mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (mdb__parse__succeeded)
          {
            mdb__parse__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__parse__HeadVar__2_2, (MR_Integer) 0)));
            mdb__parse__TypeInfo_10_10 = (MR_Word) &mdb__parse_scalar_common_1[4];
            {
              mdb__parse__succeeded = mercury__builtin__unify_2_p_0(mdb__parse__TypeInfo_10_10, ((MR_Box) (mdb__parse__ArgX1_3)), ((MR_Box) (mdb__parse__ArgY1_4)));
            }
          }
      }
    return mdb__parse__succeeded;
  }
}

static void MR_CALL 
mdb__parse__format_param_cmd_option_defaults_2_p_0(
  MR_Word * mdb__parse__HeadVar__1_1,
  MR_Word * mdb__parse__HeadVar__2_2,
  MR_Cont mdb__parse__cont,
  void * mdb__parse__cont_env_ptr)
{
  {
    MR_bool mdb__parse__succeeded;

    {
      MR_Integer mdb__parse__slot_0 = (MR_Integer) 0;

      do
        {
          *mdb__parse__HeadVar__1_1 = ((&mdb__parse_vector_common_10[7 + mdb__parse__slot_0]))->mdb__parse__vector_common_type_10_0__vct_10_f_0;
          *mdb__parse__HeadVar__2_2 = ((&mdb__parse_vector_common_10[7 + mdb__parse__slot_0]))->mdb__parse__vector_common_type_10_0__vct_10_f_1;
          {
            mdb__parse__cont(mdb__parse__cont_env_ptr);
          }
          mdb__parse__slot_0 = (mdb__parse__slot_0 + (MR_Integer) 1);
        }
      while ((mdb__parse__slot_0 < (MR_Integer) 7));
    }
  }
}

static MR_bool MR_CALL 
mdb__parse__long_format_param_cmd_option_2_p_0(
  MR_String mdb__parse__HeadVar__1_1,
  MR_Word * mdb__parse__HeadVar__2_2)
{
  {
    MR_bool mdb__parse__succeeded;
    MR_Integer mdb__parse__lo_0;
    MR_Integer mdb__parse__hi_1;
    MR_Integer mdb__parse__mid_2;
    MR_Integer mdb__parse__result_3;

    /* binary string simple lookup switch */
    mdb__parse__lo_0 = (MR_Integer) 0;
    mdb__parse__hi_1 = (MR_Integer) 6;
    do
      {
        mdb__parse__mid_2 = (((mdb__parse__lo_0 + mdb__parse__hi_1)) / (MR_Integer) 2);
        mdb__parse__result_3 = MR_strcmp(mdb__parse__HeadVar__1_1, ((&mdb__parse_vector_common_11[0 + mdb__parse__mid_2]))->mdb__parse__vector_common_type_11_0__vct_11_f_0);
        if ((mdb__parse__result_3 == (MR_Integer) 0))
          {
            *mdb__parse__HeadVar__2_2 = ((&mdb__parse_vector_common_11[0 + mdb__parse__mid_2]))->mdb__parse__vector_common_type_11_0__vct_11_f_1;
            mdb__parse__succeeded = MR_TRUE;
            /* jump out of search loop */
            goto label_0;
          }
        else
        if ((mdb__parse__result_3 < (MR_Integer) 0))
          mdb__parse__hi_1 = (mdb__parse__mid_2 - (MR_Integer) 1);
        else
          mdb__parse__lo_0 = (mdb__parse__mid_2 + (MR_Integer) 1);
      }
    while ((mdb__parse__lo_0 <= mdb__parse__hi_1));
    mdb__parse__succeeded = MR_FALSE;
  label_0:;
    return mdb__parse__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__parse__short_format_param_cmd_option_2_p_0(
  MR_Char mdb__parse__HeadVar__1_1,
  MR_Word * mdb__parse__HeadVar__2_2)
{
  {
    MR_bool mdb__parse__succeeded;

    switch (mdb__parse__HeadVar__1_1) {
      default:
        mdb__parse__succeeded = MR_FALSE;
        break;
      case (MR_Char) 65:
        {
          *mdb__parse__HeadVar__2_2 = (MR_Integer) 2;
          mdb__parse__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 66:
        {
          *mdb__parse__HeadVar__2_2 = (MR_Integer) 1;
          mdb__parse__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 80:
        {
          *mdb__parse__HeadVar__2_2 = (MR_Integer) 0;
          mdb__parse__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 102:
        {
          *mdb__parse__HeadVar__2_2 = (MR_Integer) 3;
          mdb__parse__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 112:
        {
          *mdb__parse__HeadVar__2_2 = (MR_Integer) 6;
          mdb__parse__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 114:
        {
          *mdb__parse__HeadVar__2_2 = (MR_Integer) 4;
          mdb__parse__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 118:
        {
          *mdb__parse__HeadVar__2_2 = (MR_Integer) 5;
          mdb__parse__succeeded = MR_TRUE;
        }
        break;
    }
    return mdb__parse__succeeded;
  }
}

static void MR_CALL 
mdb__parse__format_cmd_option_defaults_2_p_0(
  MR_Word * mdb__parse__HeadVar__1_1,
  MR_Word * mdb__parse__HeadVar__2_2,
  MR_Cont mdb__parse__cont,
  void * mdb__parse__cont_env_ptr)
{
  {
    MR_bool mdb__parse__succeeded;

    {
      MR_Integer mdb__parse__slot_0 = (MR_Integer) 0;

      do
        {
          *mdb__parse__HeadVar__1_1 = ((&mdb__parse_vector_common_10[0 + mdb__parse__slot_0]))->mdb__parse__vector_common_type_10_0__vct_10_f_0;
          *mdb__parse__HeadVar__2_2 = ((&mdb__parse_vector_common_10[0 + mdb__parse__slot_0]))->mdb__parse__vector_common_type_10_0__vct_10_f_1;
          {
            mdb__parse__cont(mdb__parse__cont_env_ptr);
          }
          mdb__parse__slot_0 = (mdb__parse__slot_0 + (MR_Integer) 1);
        }
      while ((mdb__parse__slot_0 < (MR_Integer) 7));
    }
  }
}

static MR_bool MR_CALL 
mdb__parse__long_format_cmd_option_2_p_0(
  MR_String mdb__parse__HeadVar__1_1,
  MR_Word * mdb__parse__HeadVar__2_2)
{
  {
    MR_bool mdb__parse__succeeded;

    if ((strcmp(mdb__parse__HeadVar__1_1, (MR_String) "print") == 0))
      {
        *mdb__parse__HeadVar__2_2 = (MR_Integer) 0;
        mdb__parse__succeeded = MR_TRUE;
      }
    else
    if ((strcmp(mdb__parse__HeadVar__1_1, (MR_String) "browse") == 0))
      {
        *mdb__parse__HeadVar__2_2 = (MR_Integer) 1;
        mdb__parse__succeeded = MR_TRUE;
      }
    else
    if ((strcmp(mdb__parse__HeadVar__1_1, (MR_String) "print-all") == 0))
      {
        *mdb__parse__HeadVar__2_2 = (MR_Integer) 2;
        mdb__parse__succeeded = MR_TRUE;
      }
    else
      mdb__parse__succeeded = MR_FALSE;
    return mdb__parse__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__parse__short_format_cmd_option_2_p_0(
  MR_Char mdb__parse__HeadVar__1_1,
  MR_Word * mdb__parse__HeadVar__2_2)
{
  {
    MR_bool mdb__parse__succeeded;

    switch (mdb__parse__HeadVar__1_1) {
      default:
        mdb__parse__succeeded = MR_FALSE;
        break;
      case (MR_Char) 65:
        {
          *mdb__parse__HeadVar__2_2 = (MR_Integer) 2;
          mdb__parse__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 66:
        {
          *mdb__parse__HeadVar__2_2 = (MR_Integer) 1;
          mdb__parse__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 80:
        {
          *mdb__parse__HeadVar__2_2 = (MR_Integer) 0;
          mdb__parse__succeeded = MR_TRUE;
        }
        break;
    }
    return mdb__parse__succeeded;
  }
}

static void MR_CALL 
mdb__parse__format_option_defaults_2_p_0(
  MR_Word * mdb__parse__HeadVar__1_1,
  MR_Word * mdb__parse__HeadVar__2_2,
  MR_Cont mdb__parse__cont,
  void * mdb__parse__cont_env_ptr)
{
  {
    MR_bool mdb__parse__succeeded;

    {
      MR_Integer mdb__parse__slot_0 = (MR_Integer) 0;

      do
        {
          *mdb__parse__HeadVar__1_1 = ((&mdb__parse_vector_common_9[0 + mdb__parse__slot_0]))->mdb__parse__vector_common_type_9_0__vct_9_f_0;
          *mdb__parse__HeadVar__2_2 = ((&mdb__parse_vector_common_9[0 + mdb__parse__slot_0]))->mdb__parse__vector_common_type_9_0__vct_9_f_1;
          {
            mdb__parse__cont(mdb__parse__cont_env_ptr);
          }
          mdb__parse__slot_0 = (mdb__parse__slot_0 + (MR_Integer) 1);
        }
      while ((mdb__parse__slot_0 < (MR_Integer) 4));
    }
  }
}

static MR_bool MR_CALL 
mdb__parse__long_format_option_2_p_0(
  MR_String mdb__parse__HeadVar__1_1,
  MR_Word * mdb__parse__HeadVar__2_2)
{
  {
    MR_bool mdb__parse__succeeded;
    MR_Integer mdb__parse__lo_0;
    MR_Integer mdb__parse__hi_1;
    MR_Integer mdb__parse__mid_2;
    MR_Integer mdb__parse__result_3;

    /* binary string simple lookup switch */
    mdb__parse__lo_0 = (MR_Integer) 0;
    mdb__parse__hi_1 = (MR_Integer) 3;
    do
      {
        mdb__parse__mid_2 = (((mdb__parse__lo_0 + mdb__parse__hi_1)) / (MR_Integer) 2);
        mdb__parse__result_3 = MR_strcmp(mdb__parse__HeadVar__1_1, ((&mdb__parse_vector_common_7[0 + mdb__parse__mid_2]))->mdb__parse__vector_common_type_7_0__vct_7_f_0);
        if ((mdb__parse__result_3 == (MR_Integer) 0))
          {
            *mdb__parse__HeadVar__2_2 = ((&mdb__parse_vector_common_7[0 + mdb__parse__mid_2]))->mdb__parse__vector_common_type_7_0__vct_7_f_1;
            mdb__parse__succeeded = MR_TRUE;
            /* jump out of search loop */
            goto label_0;
          }
        else
        if ((mdb__parse__result_3 < (MR_Integer) 0))
          mdb__parse__hi_1 = (mdb__parse__mid_2 - (MR_Integer) 1);
        else
          mdb__parse__lo_0 = (mdb__parse__mid_2 + (MR_Integer) 1);
      }
    while ((mdb__parse__lo_0 <= mdb__parse__hi_1));
    mdb__parse__succeeded = MR_FALSE;
  label_0:;
    return mdb__parse__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__parse__short_format_option_2_p_0(
  MR_Char mdb__parse__HeadVar__1_1,
  MR_Word * mdb__parse__HeadVar__2_2)
{
  {
    MR_bool mdb__parse__succeeded;

    switch (mdb__parse__HeadVar__1_1) {
      default:
        mdb__parse__succeeded = MR_FALSE;
        break;
      case (MR_Char) 102:
        {
          *mdb__parse__HeadVar__2_2 = (MR_Integer) 0;
          mdb__parse__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 112:
        {
          *mdb__parse__HeadVar__2_2 = (MR_Integer) 3;
          mdb__parse__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 114:
        {
          *mdb__parse__HeadVar__2_2 = (MR_Integer) 1;
          mdb__parse__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 118:
        {
          *mdb__parse__HeadVar__2_2 = (MR_Integer) 2;
          mdb__parse__succeeded = MR_TRUE;
        }
        break;
    }
    return mdb__parse__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__parse__read_command_external_3_p_0_1(
  MR_Box mdb__parse__closure_arg,
  MR_Box mdb__parse__wrapper_arg_1)
{
  {
    MR_bool mdb__parse__succeeded;
    MR_Box mdb__parse__closure = mdb__parse__closure_arg;

    {
      mdb__parse__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) mdb__parse__wrapper_arg_1));
    }
    return mdb__parse__succeeded;
  }
}

void MR_CALL 
mdb__parse__read_command_external_3_p_0(
  MR_Word * mdb__parse__Command_4)
{
  {
    MR_bool mdb__parse__succeeded;
    MR_Word mdb__parse__Result_6;

    {
      mercury__io__read_3_p_0((MR_Word) &mdb__parse__mdb__parse__type_ctor_info_external_request_0, &mdb__parse__Result_6);
    }
    switch (MR_tag((MR_Word) mdb__parse__Result_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *mdb__parse__Command_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
        break;
      case (MR_Integer) 1:
        {
          MR_String mdb__parse__StringToParse_7;
          MR_Word mdb__parse__Words_8;
          MR_Word mdb__parse__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__Result_6, (MR_Integer) 0)));
          MR_Word mdb__parse__CommandPrime_9;

          mdb__parse__StringToParse_7 = (MR_String) mdb__parse__Var_15;
          {
            mdb__parse__Words_8 = mercury__string__words_separator_2_f_0((MR_Word) &mdb__parse_scalar_common_3[19], mdb__parse__StringToParse_7);
          }
          {
            mdb__parse__succeeded = mdb__parse__parse_2_p_0(mdb__parse__Words_8, &mdb__parse__CommandPrime_9);
          }
          if (mdb__parse__succeeded)
            *mdb__parse__Command_4 = mdb__parse__CommandPrime_9;
          else
            *mdb__parse__Command_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
        }
        break;
      case (MR_Integer) 2:
        *mdb__parse__Command_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
        break;
    }
  }
}

static MR_bool MR_CALL 
mdb__parse__read_command_4_p_0_1(
  MR_Box mdb__parse__closure_arg,
  MR_Box mdb__parse__wrapper_arg_1)
{
  {
    MR_bool mdb__parse__succeeded;
    MR_Box mdb__parse__closure = mdb__parse__closure_arg;

    {
      mdb__parse__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) mdb__parse__wrapper_arg_1));
    }
    return mdb__parse__succeeded;
  }
}

void MR_CALL 
mdb__parse__read_command_4_p_0(
  MR_String mdb__parse__Prompt_5,
  MR_Word * mdb__parse__Command_6)
{
  {
    MR_bool mdb__parse__succeeded;
    MR_String mdb__parse__Line_8;
    MR_Word mdb__parse__Words_9;
    MR_Word mdb__parse__CommandPrime_10;

    {
      mdb__util__trace_get_command_4_p_0(mdb__parse__Prompt_5, &mdb__parse__Line_8);
    }
    {
      mdb__parse__Words_9 = mercury__string__words_separator_2_f_0((MR_Word) &mdb__parse_scalar_common_3[18], mdb__parse__Line_8);
    }
    {
      mdb__parse__succeeded = mdb__parse__parse_2_p_0(mdb__parse__Words_9, &mdb__parse__CommandPrime_10);
    }
    if (mdb__parse__succeeded)
      *mdb__parse__Command_6 = mdb__parse__CommandPrime_10;
    else
      *mdb__parse__Command_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
  }
}

MR_bool MR_CALL 
mdb__parse__parse_2_p_0(
  MR_Word mdb__parse__Words_3,
  MR_Word * mdb__parse__Command_4)
{
  {
    MR_bool mdb__parse__succeeded;

    if ((mdb__parse__Words_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mdb__parse__Command_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
        mdb__parse__succeeded = MR_TRUE;
      }
    else
      {
        MR_String mdb__parse__CmdWord_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__parse__Words_3, (MR_Integer) 0)));
        MR_Word mdb__parse__ArgWords_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__Words_3, (MR_Integer) 1)));
        MR_Word mdb__parse__CmdTokens_7;
        MR_Word mdb__parse__ArgTokens_8;
        MR_Word mdb__parse__MaybeArgWords_10;
        MR_Word mdb__parse__AllTokens_11;
        MR_Word mdb__parse__Chars_18;
        MR_Word mdb__parse__Var_14;
        MR_Word mdb__parse__Var_9;

        {
          mercury__string__to_char_list_2_p_0(mdb__parse__CmdWord_5, &mdb__parse__Chars_18);
        }
        {
          mdb__parse__lexer_word_chars_2_p_0(mdb__parse__Chars_18, &mdb__parse__CmdTokens_7);
        }
        {
          mdb__parse__lexer_words_2_p_0(mdb__parse__ArgWords_6, &mdb__parse__ArgTokens_8);
        }
        mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__CmdTokens_7)) == (MR_mktag((MR_Integer) 1)));
        if (mdb__parse__succeeded)
          {
            mdb__parse__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__CmdTokens_7, (MR_Integer) 0)));
            mdb__parse__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__CmdTokens_7, (MR_Integer) 1)));
            mdb__parse__succeeded = (mdb__parse__Var_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        if (mdb__parse__succeeded)
          {
            mdb__parse__MaybeArgWords_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdb__parse__MaybeArgWords_10, 0) = ((MR_Box) (mdb__parse__ArgWords_6));
          }
        else
          mdb__parse__MaybeArgWords_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__list__append_3_p_1((MR_Word) &mdb__parse__mdb__parse__type_ctor_info_token_0, mdb__parse__CmdTokens_7, mdb__parse__ArgTokens_8, &mdb__parse__AllTokens_11);
        }
        if ((mdb__parse__AllTokens_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mdb__parse__Command_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
            mdb__parse__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mdb__parse__FirstToken_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__AllTokens_11, (MR_Integer) 0)));
            MR_Word mdb__parse__LaterTokens_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__AllTokens_11, (MR_Integer) 1)));

            {
              mdb__parse__succeeded = mdb__parse__parse_cmd_4_p_0(mdb__parse__FirstToken_12, mdb__parse__LaterTokens_13, mdb__parse__MaybeArgWords_10, mdb__parse__Command_4);
            }
          }
      }
    return mdb__parse__succeeded;
  }
}

static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_15(
  void * mdb__parse__env_ptr_arg)
{
  {
    struct mdb__parse__parse_cmd_4_p_0_16_env_0_s * mdb__parse__env_ptr = (struct mdb__parse__parse_cmd_4_p_0_16_env_0_s *) mdb__parse__env_ptr_arg;

    *((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_16_env_0__wrapper_arg_1) = ((MR_Box) ((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_16_env_0__conv15_HeadVar__1_1));
    *((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_16_env_0__wrapper_arg_2) = ((MR_Box) ((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_16_env_0__conv14_HeadVar__2_2));
    {
      ((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_16_env_0__cont)((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_16_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_16(
  MR_Box mdb__parse__closure_arg,
  MR_Box * mdb__parse__wrapper_arg_1,
  MR_Box * mdb__parse__wrapper_arg_2,
  MR_Cont mdb__parse__cont,
  void * mdb__parse__cont_env_ptr)
{
  {
    struct mdb__parse__parse_cmd_4_p_0_16_env_0_s mdb__parse__env;

    (mdb__parse__env).mdb__parse__parse_cmd_4_p_0_16_env_0__wrapper_arg_1 = mdb__parse__wrapper_arg_1;
    (mdb__parse__env).mdb__parse__parse_cmd_4_p_0_16_env_0__wrapper_arg_2 = mdb__parse__wrapper_arg_2;
    (mdb__parse__env).mdb__parse__parse_cmd_4_p_0_16_env_0__cont = mdb__parse__cont;
    (mdb__parse__env).mdb__parse__parse_cmd_4_p_0_16_env_0__cont_env_ptr = mdb__parse__cont_env_ptr;
    {
      MR_Box mdb__parse__closure = mdb__parse__closure_arg;

      {
        mdb__parse__format_param_cmd_option_defaults_2_p_0(&(mdb__parse__env).mdb__parse__parse_cmd_4_p_0_16_env_0__conv15_HeadVar__1_1, &(mdb__parse__env).mdb__parse__parse_cmd_4_p_0_16_env_0__conv14_HeadVar__2_2, mdb__parse__parse_cmd_4_p_0_15, &mdb__parse__env);
      }
    }
  }
}

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_14(
  MR_Box mdb__parse__closure_arg,
  MR_Box mdb__parse__wrapper_arg_1,
  MR_Box * mdb__parse__wrapper_arg_2)
{
  {
    MR_bool mdb__parse__succeeded;
    MR_Box mdb__parse__closure = mdb__parse__closure_arg;
    MR_Word mdb__parse__conv13_HeadVar__2_2;

    {
      mdb__parse__succeeded = mdb__parse__long_format_param_cmd_option_2_p_0(((MR_String) mdb__parse__wrapper_arg_1), &mdb__parse__conv13_HeadVar__2_2);
    }
    if (mdb__parse__succeeded)
      {
        *mdb__parse__wrapper_arg_2 = ((MR_Box) (mdb__parse__conv13_HeadVar__2_2));
        mdb__parse__succeeded = MR_TRUE;
      }
    return mdb__parse__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_13(
  MR_Box mdb__parse__closure_arg,
  MR_Box mdb__parse__wrapper_arg_1,
  MR_Box * mdb__parse__wrapper_arg_2)
{
  {
    MR_bool mdb__parse__succeeded;
    MR_Box mdb__parse__closure = mdb__parse__closure_arg;
    MR_Word mdb__parse__conv12_HeadVar__2_2;

    {
      mdb__parse__succeeded = mdb__parse__short_format_param_cmd_option_2_p_0(((MR_Char) (MR_Word) mdb__parse__wrapper_arg_1), &mdb__parse__conv12_HeadVar__2_2);
    }
    if (mdb__parse__succeeded)
      {
        *mdb__parse__wrapper_arg_2 = ((MR_Box) (mdb__parse__conv12_HeadVar__2_2));
        mdb__parse__succeeded = MR_TRUE;
      }
    return mdb__parse__succeeded;
  }
}

static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_11(
  void * mdb__parse__env_ptr_arg)
{
  {
    struct mdb__parse__parse_cmd_4_p_0_12_env_0_s * mdb__parse__env_ptr = (struct mdb__parse__parse_cmd_4_p_0_12_env_0_s *) mdb__parse__env_ptr_arg;

    *((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_12_env_0__wrapper_arg_1) = ((MR_Box) ((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_12_env_0__conv11_HeadVar__1_1));
    *((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_12_env_0__wrapper_arg_2) = ((MR_Box) ((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_12_env_0__conv10_HeadVar__2_2));
    {
      ((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_12_env_0__cont)((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_12_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_12(
  MR_Box mdb__parse__closure_arg,
  MR_Box * mdb__parse__wrapper_arg_1,
  MR_Box * mdb__parse__wrapper_arg_2,
  MR_Cont mdb__parse__cont,
  void * mdb__parse__cont_env_ptr)
{
  {
    struct mdb__parse__parse_cmd_4_p_0_12_env_0_s mdb__parse__env;

    (mdb__parse__env).mdb__parse__parse_cmd_4_p_0_12_env_0__wrapper_arg_1 = mdb__parse__wrapper_arg_1;
    (mdb__parse__env).mdb__parse__parse_cmd_4_p_0_12_env_0__wrapper_arg_2 = mdb__parse__wrapper_arg_2;
    (mdb__parse__env).mdb__parse__parse_cmd_4_p_0_12_env_0__cont = mdb__parse__cont;
    (mdb__parse__env).mdb__parse__parse_cmd_4_p_0_12_env_0__cont_env_ptr = mdb__parse__cont_env_ptr;
    {
      MR_Box mdb__parse__closure = mdb__parse__closure_arg;

      {
        mdb__parse__format_param_cmd_option_defaults_2_p_0(&(mdb__parse__env).mdb__parse__parse_cmd_4_p_0_12_env_0__conv11_HeadVar__1_1, &(mdb__parse__env).mdb__parse__parse_cmd_4_p_0_12_env_0__conv10_HeadVar__2_2, mdb__parse__parse_cmd_4_p_0_11, &mdb__parse__env);
      }
    }
  }
}

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_10(
  MR_Box mdb__parse__closure_arg,
  MR_Box mdb__parse__wrapper_arg_1,
  MR_Box * mdb__parse__wrapper_arg_2)
{
  {
    MR_bool mdb__parse__succeeded;
    MR_Box mdb__parse__closure = mdb__parse__closure_arg;
    MR_Word mdb__parse__conv9_HeadVar__2_2;

    {
      mdb__parse__succeeded = mdb__parse__long_format_param_cmd_option_2_p_0(((MR_String) mdb__parse__wrapper_arg_1), &mdb__parse__conv9_HeadVar__2_2);
    }
    if (mdb__parse__succeeded)
      {
        *mdb__parse__wrapper_arg_2 = ((MR_Box) (mdb__parse__conv9_HeadVar__2_2));
        mdb__parse__succeeded = MR_TRUE;
      }
    return mdb__parse__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_9(
  MR_Box mdb__parse__closure_arg,
  MR_Box mdb__parse__wrapper_arg_1,
  MR_Box * mdb__parse__wrapper_arg_2)
{
  {
    MR_bool mdb__parse__succeeded;
    MR_Box mdb__parse__closure = mdb__parse__closure_arg;
    MR_Word mdb__parse__conv8_HeadVar__2_2;

    {
      mdb__parse__succeeded = mdb__parse__short_format_param_cmd_option_2_p_0(((MR_Char) (MR_Word) mdb__parse__wrapper_arg_1), &mdb__parse__conv8_HeadVar__2_2);
    }
    if (mdb__parse__succeeded)
      {
        *mdb__parse__wrapper_arg_2 = ((MR_Box) (mdb__parse__conv8_HeadVar__2_2));
        mdb__parse__succeeded = MR_TRUE;
      }
    return mdb__parse__succeeded;
  }
}

static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_7(
  void * mdb__parse__env_ptr_arg)
{
  {
    struct mdb__parse__parse_cmd_4_p_0_8_env_0_s * mdb__parse__env_ptr = (struct mdb__parse__parse_cmd_4_p_0_8_env_0_s *) mdb__parse__env_ptr_arg;

    *((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_8_env_0__wrapper_arg_1) = ((MR_Box) ((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_8_env_0__conv7_HeadVar__1_1));
    *((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_8_env_0__wrapper_arg_2) = ((MR_Box) ((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_8_env_0__conv6_HeadVar__2_2));
    {
      ((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_8_env_0__cont)((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_8_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_8(
  MR_Box mdb__parse__closure_arg,
  MR_Box * mdb__parse__wrapper_arg_1,
  MR_Box * mdb__parse__wrapper_arg_2,
  MR_Cont mdb__parse__cont,
  void * mdb__parse__cont_env_ptr)
{
  {
    struct mdb__parse__parse_cmd_4_p_0_8_env_0_s mdb__parse__env;

    (mdb__parse__env).mdb__parse__parse_cmd_4_p_0_8_env_0__wrapper_arg_1 = mdb__parse__wrapper_arg_1;
    (mdb__parse__env).mdb__parse__parse_cmd_4_p_0_8_env_0__wrapper_arg_2 = mdb__parse__wrapper_arg_2;
    (mdb__parse__env).mdb__parse__parse_cmd_4_p_0_8_env_0__cont = mdb__parse__cont;
    (mdb__parse__env).mdb__parse__parse_cmd_4_p_0_8_env_0__cont_env_ptr = mdb__parse__cont_env_ptr;
    {
      MR_Box mdb__parse__closure = mdb__parse__closure_arg;

      {
        mdb__parse__format_cmd_option_defaults_2_p_0(&(mdb__parse__env).mdb__parse__parse_cmd_4_p_0_8_env_0__conv7_HeadVar__1_1, &(mdb__parse__env).mdb__parse__parse_cmd_4_p_0_8_env_0__conv6_HeadVar__2_2, mdb__parse__parse_cmd_4_p_0_7, &mdb__parse__env);
      }
    }
  }
}

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_6(
  MR_Box mdb__parse__closure_arg,
  MR_Box mdb__parse__wrapper_arg_1,
  MR_Box * mdb__parse__wrapper_arg_2)
{
  {
    MR_bool mdb__parse__succeeded;
    MR_Box mdb__parse__closure = mdb__parse__closure_arg;
    MR_Word mdb__parse__conv5_HeadVar__2_2;

    {
      mdb__parse__succeeded = mdb__parse__long_format_cmd_option_2_p_0(((MR_String) mdb__parse__wrapper_arg_1), &mdb__parse__conv5_HeadVar__2_2);
    }
    if (mdb__parse__succeeded)
      {
        *mdb__parse__wrapper_arg_2 = ((MR_Box) (mdb__parse__conv5_HeadVar__2_2));
        mdb__parse__succeeded = MR_TRUE;
      }
    return mdb__parse__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_5(
  MR_Box mdb__parse__closure_arg,
  MR_Box mdb__parse__wrapper_arg_1,
  MR_Box * mdb__parse__wrapper_arg_2)
{
  {
    MR_bool mdb__parse__succeeded;
    MR_Box mdb__parse__closure = mdb__parse__closure_arg;
    MR_Word mdb__parse__conv4_HeadVar__2_2;

    {
      mdb__parse__succeeded = mdb__parse__short_format_cmd_option_2_p_0(((MR_Char) (MR_Word) mdb__parse__wrapper_arg_1), &mdb__parse__conv4_HeadVar__2_2);
    }
    if (mdb__parse__succeeded)
      {
        *mdb__parse__wrapper_arg_2 = ((MR_Box) (mdb__parse__conv4_HeadVar__2_2));
        mdb__parse__succeeded = MR_TRUE;
      }
    return mdb__parse__succeeded;
  }
}

static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_3(
  void * mdb__parse__env_ptr_arg)
{
  {
    struct mdb__parse__parse_cmd_4_p_0_4_env_0_s * mdb__parse__env_ptr = (struct mdb__parse__parse_cmd_4_p_0_4_env_0_s *) mdb__parse__env_ptr_arg;

    *((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_4_env_0__conv3_HeadVar__1_1));
    *((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_4_env_0__conv2_HeadVar__2_2));
    {
      ((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_4_env_0__cont)((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_4_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_4(
  MR_Box mdb__parse__closure_arg,
  MR_Box * mdb__parse__wrapper_arg_1,
  MR_Box * mdb__parse__wrapper_arg_2,
  MR_Cont mdb__parse__cont,
  void * mdb__parse__cont_env_ptr)
{
  {
    struct mdb__parse__parse_cmd_4_p_0_4_env_0_s mdb__parse__env;

    (mdb__parse__env).mdb__parse__parse_cmd_4_p_0_4_env_0__wrapper_arg_1 = mdb__parse__wrapper_arg_1;
    (mdb__parse__env).mdb__parse__parse_cmd_4_p_0_4_env_0__wrapper_arg_2 = mdb__parse__wrapper_arg_2;
    (mdb__parse__env).mdb__parse__parse_cmd_4_p_0_4_env_0__cont = mdb__parse__cont;
    (mdb__parse__env).mdb__parse__parse_cmd_4_p_0_4_env_0__cont_env_ptr = mdb__parse__cont_env_ptr;
    {
      MR_Box mdb__parse__closure = mdb__parse__closure_arg;

      {
        mdb__parse__format_option_defaults_2_p_0(&(mdb__parse__env).mdb__parse__parse_cmd_4_p_0_4_env_0__conv3_HeadVar__1_1, &(mdb__parse__env).mdb__parse__parse_cmd_4_p_0_4_env_0__conv2_HeadVar__2_2, mdb__parse__parse_cmd_4_p_0_3, &mdb__parse__env);
      }
    }
  }
}

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_2(
  MR_Box mdb__parse__closure_arg,
  MR_Box mdb__parse__wrapper_arg_1,
  MR_Box * mdb__parse__wrapper_arg_2)
{
  {
    MR_bool mdb__parse__succeeded;
    MR_Box mdb__parse__closure = mdb__parse__closure_arg;
    MR_Word mdb__parse__conv1_HeadVar__2_2;

    {
      mdb__parse__succeeded = mdb__parse__long_format_option_2_p_0(((MR_String) mdb__parse__wrapper_arg_1), &mdb__parse__conv1_HeadVar__2_2);
    }
    if (mdb__parse__succeeded)
      {
        *mdb__parse__wrapper_arg_2 = ((MR_Box) (mdb__parse__conv1_HeadVar__2_2));
        mdb__parse__succeeded = MR_TRUE;
      }
    return mdb__parse__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_1(
  MR_Box mdb__parse__closure_arg,
  MR_Box mdb__parse__wrapper_arg_1,
  MR_Box * mdb__parse__wrapper_arg_2)
{
  {
    MR_bool mdb__parse__succeeded;
    MR_Box mdb__parse__closure = mdb__parse__closure_arg;
    MR_Word mdb__parse__conv0_HeadVar__2_2;

    {
      mdb__parse__succeeded = mdb__parse__short_format_option_2_p_0(((MR_Char) (MR_Word) mdb__parse__wrapper_arg_1), &mdb__parse__conv0_HeadVar__2_2);
    }
    if (mdb__parse__succeeded)
      {
        *mdb__parse__wrapper_arg_2 = ((MR_Box) (mdb__parse__conv0_HeadVar__2_2));
        mdb__parse__succeeded = MR_TRUE;
      }
    return mdb__parse__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0(
  MR_Word mdb__parse__CmdToken_5,
  MR_Word mdb__parse__ArgTokens_6,
  MR_Word mdb__parse__MaybeArgWords_7,
  MR_Word * mdb__parse__Command_8)
{
  {
    MR_bool mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__CmdToken_5)) == (MR_mktag((MR_Integer) 2)));
    MR_String mdb__parse__Var_255;

    if (mdb__parse__succeeded)
      {
        mdb__parse__Var_255 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__CmdToken_5, (MR_Integer) 0)));
        if ((strcmp(mdb__parse__Var_255, (MR_String) "p") == 0))
          mdb__parse__succeeded = MR_TRUE;
        else
        if ((strcmp(mdb__parse__Var_255, (MR_String) "ls") == 0))
          mdb__parse__succeeded = MR_TRUE;
        else
        if ((strcmp(mdb__parse__Var_255, (MR_String) "print") == 0))
          mdb__parse__succeeded = MR_TRUE;
        else
          mdb__parse__succeeded = MR_FALSE;
      }
    if (mdb__parse__succeeded)
      {
        MR_Word mdb__parse__MaybeMaybeOptionTable_9;
        MR_Word mdb__parse__RemainingTokens_10;
        MR_Word mdb__parse__MaybePath_15;

        if ((mdb__parse__MaybeArgWords_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            mdb__parse__MaybeMaybeOptionTable_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mdb__parse__RemainingTokens_10 = mdb__parse__ArgTokens_6;
          }
        else
          {
            MR_Word mdb__parse__ArgWords_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__MaybeArgWords_7, (MR_Integer) 0)));
            MR_Word mdb__parse__RemainingWords_13;
            MR_Word mdb__parse__MaybeOptionTable_14;

            {
              mercury__getopt__process_options_4_p_0((MR_Word) &mdb__parse__mdb__parse__type_ctor_info_format_option_0, (MR_Word) MR_mkword(MR_mktag(2), &mdb__parse_scalar_common_3[5]), mdb__parse__ArgWords_11, &mdb__parse__RemainingWords_13, &mdb__parse__MaybeOptionTable_14);
            }
            {
              mdb__parse__MaybeMaybeOptionTable_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__parse__MaybeMaybeOptionTable_9, 0) = ((MR_Box) (mdb__parse__MaybeOptionTable_14));
            }
            {
              mdb__parse__lexer_words_2_p_0(mdb__parse__RemainingWords_13, &mdb__parse__RemainingTokens_10);
            }
          }
        if ((mdb__parse__RemainingTokens_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            mdb__parse__MaybePath_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mdb__parse__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mdb__parse__Path_18;

            {
              mdb__parse__succeeded = mdb__parse__parse_path_2_p_0(mdb__parse__RemainingTokens_10, &mdb__parse__Path_18);
            }
            if (mdb__parse__succeeded)
              {
                {
                  mdb__parse__MaybePath_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdb__parse__MaybePath_15, 0) = ((MR_Box) (mdb__parse__Path_18));
                }
                mdb__parse__succeeded = MR_TRUE;
              }
          }
        if (mdb__parse__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mdb__parse__Command_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__parse__MaybeMaybeOptionTable_9));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__parse__MaybePath_15));
            }
            mdb__parse__succeeded = MR_TRUE;
          }
      }
    else
      {
        MR_String mdb__parse__Var_256;

        mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__CmdToken_5)) == (MR_mktag((MR_Integer) 2)));
        if (mdb__parse__succeeded)
          {
            mdb__parse__Var_256 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__CmdToken_5, (MR_Integer) 0)));
            if ((strcmp(mdb__parse__Var_256, (MR_String) "d") == 0))
              mdb__parse__succeeded = MR_TRUE;
            else
            if ((strcmp(mdb__parse__Var_256, (MR_String) "display") == 0))
              mdb__parse__succeeded = MR_TRUE;
            else
              mdb__parse__succeeded = MR_FALSE;
          }
        if (mdb__parse__succeeded)
          {
            mdb__parse__succeeded = (mdb__parse__ArgTokens_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (mdb__parse__succeeded)
              {
                *mdb__parse__Command_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mdb__parse__succeeded = MR_TRUE;
              }
          }
        else
          {
            MR_String mdb__parse__Var_257;

            mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__CmdToken_5)) == (MR_mktag((MR_Integer) 2)));
            if (mdb__parse__succeeded)
              {
                mdb__parse__Var_257 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__CmdToken_5, (MR_Integer) 0)));
                if ((strcmp(mdb__parse__Var_257, (MR_String) "w") == 0))
                  mdb__parse__succeeded = MR_TRUE;
                else
                if ((strcmp(mdb__parse__Var_257, (MR_String) "write") == 0))
                  mdb__parse__succeeded = MR_TRUE;
                else
                  mdb__parse__succeeded = MR_FALSE;
              }
            if (mdb__parse__succeeded)
              {
                mdb__parse__succeeded = (mdb__parse__ArgTokens_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (mdb__parse__succeeded)
                  {
                    *mdb__parse__Command_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                    mdb__parse__succeeded = MR_TRUE;
                  }
              }
            else
              {
                MR_String mdb__parse__Var_258;

                mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__CmdToken_5)) == (MR_mktag((MR_Integer) 2)));
                if (mdb__parse__succeeded)
                  {
                    mdb__parse__Var_258 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__CmdToken_5, (MR_Integer) 0)));
                    if ((strcmp(mdb__parse__Var_258, (MR_String) "addr") == 0))
                      mdb__parse__succeeded = MR_TRUE;
                    else
                    if ((strcmp(mdb__parse__Var_258, (MR_String) "memory_addr") == 0))
                      mdb__parse__succeeded = MR_TRUE;
                    else
                      mdb__parse__succeeded = MR_FALSE;
                  }
                if (mdb__parse__succeeded)
                  {
                    MR_Word mdb__parse__MaybePath_100;

                    if ((mdb__parse__ArgTokens_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        mdb__parse__MaybePath_100 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        mdb__parse__succeeded = MR_TRUE;
                      }
                    else
                      {
                        MR_Word mdb__parse__Path_98;

                        {
                          mdb__parse__succeeded = mdb__parse__parse_path_2_p_0(mdb__parse__ArgTokens_6, &mdb__parse__Path_98);
                        }
                        if (mdb__parse__succeeded)
                          {
                            {
                              mdb__parse__MaybePath_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), mdb__parse__MaybePath_100, 0) = ((MR_Box) (mdb__parse__Path_98));
                            }
                            mdb__parse__succeeded = MR_TRUE;
                          }
                      }
                    if (mdb__parse__succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *mdb__parse__Command_8 = base;
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__parse__MaybePath_100));
                        }
                        mdb__parse__succeeded = MR_TRUE;
                      }
                  }
                else
                  {
                    MR_String mdb__parse__Var_58;

                    mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__CmdToken_5)) == (MR_mktag((MR_Integer) 2)));
                    if (mdb__parse__succeeded)
                      {
                        mdb__parse__Var_58 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__CmdToken_5, (MR_Integer) 0)));
                        mdb__parse__succeeded = (strcmp(mdb__parse__Var_58, (MR_String) "cdr") == 0);
                      }
                    if (mdb__parse__succeeded)
                      {
                        MR_Word mdb__parse__TypeInfo_232_232;
                        MR_Word mdb__parse__TypeCtorInfo_233_233;
                        MR_Integer mdb__parse__Repetitions_21;
                        MR_Word mdb__parse__TokenPath_22;
                        MR_Word mdb__parse__DupTokenPath_23;
                        MR_Word mdb__parse__RepeatedTokenPath_24;
                        MR_Word mdb__parse__RepeatedPath_25;
                        MR_Word mdb__parse__Var_59;

                        mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__ArgTokens_6)) == (MR_mktag((MR_Integer) 1)));
                        if (mdb__parse__succeeded)
                          {
                            mdb__parse__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__ArgTokens_6, (MR_Integer) 0)));
                            mdb__parse__TokenPath_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__ArgTokens_6, (MR_Integer) 1)));
                            mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__Var_59)) == (MR_mktag((MR_Integer) 1)));
                            if (mdb__parse__succeeded)
                              {
                                mdb__parse__Repetitions_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__parse__Var_59, (MR_Integer) 0)));
                                mdb__parse__TypeInfo_232_232 = (MR_Word) &mdb__parse_scalar_common_1[0];
                                {
                                  mercury__list__duplicate_3_p_0(mdb__parse__TypeInfo_232_232, mdb__parse__Repetitions_21, ((MR_Box) (mdb__parse__TokenPath_22)), &mdb__parse__DupTokenPath_23);
                                }
                                mdb__parse__TypeCtorInfo_233_233 = (MR_Word) &mdb__parse__mdb__parse__type_ctor_info_token_0;
                                {
                                  mercury__list__condense_2_p_0(mdb__parse__TypeCtorInfo_233_233, mdb__parse__DupTokenPath_23, &mdb__parse__RepeatedTokenPath_24);
                                }
                                {
                                  mdb__parse__succeeded = mdb__parse__parse_path_2_p_0(mdb__parse__RepeatedTokenPath_24, &mdb__parse__RepeatedPath_25);
                                }
                                if (mdb__parse__succeeded)
                                  {
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      *mdb__parse__Command_8 = base;
                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__parse__RepeatedPath_25));
                                    }
                                    mdb__parse__succeeded = MR_TRUE;
                                  }
                              }
                          }
                      }
                    else
                      {
                        if ((mdb__parse__CmdToken_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
                          mdb__parse__succeeded = MR_TRUE;
                        else
                        if (((MR_tag((MR_Word) mdb__parse__CmdToken_5)) == (MR_mktag((MR_Integer) 2))))
                          {
                            MR_String mdb__parse__Var_60 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__CmdToken_5, (MR_Integer) 0)));

                            mdb__parse__succeeded = (strcmp(mdb__parse__Var_60, (MR_String) "cd") == 0);
                          }
                        else
                          mdb__parse__succeeded = MR_FALSE;
                        if (mdb__parse__succeeded)
                          if ((mdb__parse__ArgTokens_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                            {
                              *mdb__parse__Command_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                              mdb__parse__succeeded = MR_TRUE;
                            }
                          else
                            {
                              MR_Word mdb__parse__Path_102;

                              {
                                mdb__parse__succeeded = mdb__parse__parse_path_2_p_0(mdb__parse__ArgTokens_6, &mdb__parse__Path_102);
                              }
                              if (mdb__parse__succeeded)
                                {
                                  {
                                    MR_Word base;
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    *mdb__parse__Command_8 = base;
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__parse__Path_102));
                                  }
                                  mdb__parse__succeeded = MR_TRUE;
                                }
                            }
                        else
                          {
                            MR_String mdb__parse__Var_61;

                            mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__CmdToken_5)) == (MR_mktag((MR_Integer) 2)));
                            if (mdb__parse__succeeded)
                              {
                                mdb__parse__Var_61 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__CmdToken_5, (MR_Integer) 0)));
                                mdb__parse__succeeded = (strcmp(mdb__parse__Var_61, (MR_String) "pwd") == 0);
                              }
                            if (mdb__parse__succeeded)
                              {
                                mdb__parse__succeeded = (mdb__parse__ArgTokens_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (mdb__parse__succeeded)
                                  {
                                    *mdb__parse__Command_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
                                    mdb__parse__succeeded = MR_TRUE;
                                  }
                              }
                            else
                              {
                                MR_Word mdb__parse__AssertInvalid_28;
                                MR_String mdb__parse__Var_259;
                                MR_Integer mdb__parse__lo_0;
                                MR_Integer mdb__parse__hi_1;
                                MR_Integer mdb__parse__mid_2;
                                MR_Integer mdb__parse__result_3;

                                mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__CmdToken_5)) == (MR_mktag((MR_Integer) 2)));
                                if (mdb__parse__succeeded)
                                  {
                                    mdb__parse__Var_259 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__CmdToken_5, (MR_Integer) 0)));
                                    /* binary string simple lookup switch */
                                    mdb__parse__lo_0 = (MR_Integer) 0;
                                    mdb__parse__hi_1 = (MR_Integer) 3;
                                    do
                                      {
                                        mdb__parse__mid_2 = (((mdb__parse__lo_0 + mdb__parse__hi_1)) / (MR_Integer) 2);
                                        mdb__parse__result_3 = MR_strcmp(mdb__parse__Var_259, ((&mdb__parse_vector_common_5[0 + mdb__parse__mid_2]))->mdb__parse__vector_common_type_5_0__vct_5_f_0);
                                        if ((mdb__parse__result_3 == (MR_Integer) 0))
                                          {
                                            mdb__parse__AssertInvalid_28 = ((&mdb__parse_vector_common_5[0 + mdb__parse__mid_2]))->mdb__parse__vector_common_type_5_0__vct_5_f_1;
                                            mdb__parse__succeeded = MR_TRUE;
                                            /* jump out of search loop */
                                            goto label_0;
                                          }
                                        else
                                        if ((mdb__parse__result_3 < (MR_Integer) 0))
                                          mdb__parse__hi_1 = (mdb__parse__mid_2 - (MR_Integer) 1);
                                        else
                                          mdb__parse__lo_0 = (mdb__parse__mid_2 + (MR_Integer) 1);
                                      }
                                    while ((mdb__parse__lo_0 <= mdb__parse__hi_1));
                                    mdb__parse__succeeded = MR_FALSE;
                                  label_0:;
                                  }
                                if (mdb__parse__succeeded)
                                  {
                                    MR_Word mdb__parse__HowTrack_29;
                                    MR_Word mdb__parse__MaybePath_111;

                                    if ((mdb__parse__ArgTokens_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                      {
                                        mdb__parse__HowTrack_29 = (MR_Integer) 1;
                                        mdb__parse__MaybePath_111 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                        mdb__parse__succeeded = MR_TRUE;
                                      }
                                    else
                                      {
                                        MR_Word mdb__parse__HeadArgToken_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__ArgTokens_6, (MR_Integer) 0)));
                                        MR_Word mdb__parse__TailArgTokens_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__ArgTokens_6, (MR_Integer) 1)));
                                        MR_String mdb__parse__Var_260;

                                        mdb__parse__succeeded = ((((MR_tag((MR_Word) mdb__parse__HeadArgToken_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadArgToken_30, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                        if (mdb__parse__succeeded)
                                          {
                                            mdb__parse__Var_260 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__parse__HeadArgToken_30, (MR_Integer) 1)));
                                            if ((strcmp(mdb__parse__Var_260, (MR_String) "a") == 0))
                                              mdb__parse__succeeded = MR_TRUE;
                                            else
                                            if ((strcmp(mdb__parse__Var_260, (MR_String) "accurate") == 0))
                                              mdb__parse__succeeded = MR_TRUE;
                                            else
                                              mdb__parse__succeeded = MR_FALSE;
                                          }
                                        if (mdb__parse__succeeded)
                                          {
                                            mdb__parse__HowTrack_29 = (MR_Integer) 0;
                                            if ((mdb__parse__TailArgTokens_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                              {
                                                mdb__parse__MaybePath_111 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                mdb__parse__succeeded = MR_TRUE;
                                              }
                                            else
                                              {
                                                MR_Word mdb__parse__Path_104;

                                                {
                                                  mdb__parse__succeeded = mdb__parse__parse_path_2_p_0(mdb__parse__TailArgTokens_31, &mdb__parse__Path_104);
                                                }
                                                if (mdb__parse__succeeded)
                                                  {
                                                    {
                                                      mdb__parse__MaybePath_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(1), mdb__parse__MaybePath_111, 0) = ((MR_Box) (mdb__parse__Path_104));
                                                    }
                                                    mdb__parse__succeeded = MR_TRUE;
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            MR_Word mdb__parse__Path_107;

                                            mdb__parse__HowTrack_29 = (MR_Integer) 1;
                                            {
                                              mdb__parse__succeeded = mdb__parse__parse_path_2_p_0(mdb__parse__ArgTokens_6, &mdb__parse__Path_107);
                                            }
                                            if (mdb__parse__succeeded)
                                              {
                                                {
                                                  mdb__parse__MaybePath_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                  MR_hl_field(MR_mktag(1), mdb__parse__MaybePath_111, 0) = ((MR_Box) (mdb__parse__Path_107));
                                                }
                                                mdb__parse__succeeded = MR_TRUE;
                                              }
                                          }
                                      }
                                    if (mdb__parse__succeeded)
                                      {
                                        {
                                          MR_Word base;
                                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                          *mdb__parse__Command_8 = base;
                                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((mdb__parse__HowTrack_29 | ((mdb__parse__AssertInvalid_28 << (MR_Integer) 1)))));
                                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mdb__parse__MaybePath_111));
                                        }
                                        mdb__parse__succeeded = MR_TRUE;
                                      }
                                  }
                                else
                                  {
                                    MR_String mdb__parse__Var_68;

                                    mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__CmdToken_5)) == (MR_mktag((MR_Integer) 2)));
                                    if (mdb__parse__succeeded)
                                      {
                                        mdb__parse__Var_68 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__CmdToken_5, (MR_Integer) 0)));
                                        mdb__parse__succeeded = (strcmp(mdb__parse__Var_68, (MR_String) "mode") == 0);
                                      }
                                    if (mdb__parse__succeeded)
                                      if ((mdb__parse__ArgTokens_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                        {
                                          *mdb__parse__Command_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
                                          mdb__parse__succeeded = MR_TRUE;
                                        }
                                      else
                                        {
                                          MR_Word mdb__parse__Path_113;

                                          {
                                            mdb__parse__succeeded = mdb__parse__parse_path_2_p_0(mdb__parse__ArgTokens_6, &mdb__parse__Path_113);
                                          }
                                          if (mdb__parse__succeeded)
                                            {
                                              {
                                                MR_Word base;
                                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                *mdb__parse__Command_8 = base;
                                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__parse__Path_113));
                                              }
                                              mdb__parse__succeeded = MR_TRUE;
                                            }
                                        }
                                    else
                                      {
                                        MR_String mdb__parse__Var_69;

                                        mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__CmdToken_5)) == (MR_mktag((MR_Integer) 2)));
                                        if (mdb__parse__succeeded)
                                          {
                                            mdb__parse__Var_69 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__CmdToken_5, (MR_Integer) 0)));
                                            mdb__parse__succeeded = (strcmp(mdb__parse__Var_69, (MR_String) "format") == 0);
                                          }
                                        if (mdb__parse__succeeded)
                                          {
                                            MR_Word mdb__parse__FormatCmd_36;

                                            if ((mdb__parse__ArgTokens_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                              {
                                                mdb__parse__FormatCmd_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                mdb__parse__succeeded = MR_TRUE;
                                              }
                                            else
                                              {
                                                MR_Word mdb__parse__TypeCtorInfo_240_240;
                                                MR_Word mdb__parse__Setting_39;
                                                MR_Word mdb__parse__Var_70;
                                                MR_Word mdb__parse__Var_71;
                                                MR_Word mdb__parse__Var_72;
                                                MR_Word mdb__parse__RemainingTokens_115;
                                                MR_Word mdb__parse__ArgWords_116;
                                                MR_Word mdb__parse__OptionOps_117;
                                                MR_Word mdb__parse__RemainingWords_118;
                                                MR_Word mdb__parse__MaybeOptionTable_119;

                                                mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__MaybeArgWords_7)) == (MR_mktag((MR_Integer) 1)));
                                                if (mdb__parse__succeeded)
                                                  {
                                                    mdb__parse__ArgWords_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__MaybeArgWords_7, (MR_Integer) 0)));
                                                    mdb__parse__Var_70 = (MR_Word) &mdb__parse_scalar_common_3[6];
                                                    mdb__parse__Var_71 = (MR_Word) &mdb__parse_scalar_common_3[7];
                                                    mdb__parse__Var_72 = (MR_Word) &mdb__parse_scalar_common_3[8];
                                                    mdb__parse__TypeCtorInfo_240_240 = (MR_Word) &mdb__parse__mdb__parse__type_ctor_info_setting_option_0;
                                                    mdb__parse__OptionOps_117 = (MR_Word) MR_mkword(MR_mktag(2), &mdb__parse_scalar_common_3[9]);
                                                    {
                                                      mercury__getopt__process_options_4_p_0(mdb__parse__TypeCtorInfo_240_240, mdb__parse__OptionOps_117, mdb__parse__ArgWords_116, &mdb__parse__RemainingWords_118, &mdb__parse__MaybeOptionTable_119);
                                                    }
                                                    {
                                                      mdb__parse__lexer_words_2_p_0(mdb__parse__RemainingWords_118, &mdb__parse__RemainingTokens_115);
                                                    }
                                                    {
                                                      mdb__parse__succeeded = mdb__parse__parse_format_2_p_0(mdb__parse__RemainingTokens_115, &mdb__parse__Setting_39);
                                                    }
                                                    if (mdb__parse__succeeded)
                                                      {
                                                        {
                                                          mdb__parse__FormatCmd_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(1), mdb__parse__FormatCmd_36, 0) = ((MR_Box) (mdb__parse__MaybeOptionTable_119));
                                                          MR_hl_field(MR_mktag(1), mdb__parse__FormatCmd_36, 1) = ((MR_Box) (mdb__parse__Setting_39));
                                                        }
                                                        mdb__parse__succeeded = MR_TRUE;
                                                      }
                                                  }
                                              }
                                            if (mdb__parse__succeeded)
                                              {
                                                {
                                                  MR_Word base;
                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                  *mdb__parse__Command_8 = base;
                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__parse__FormatCmd_36));
                                                }
                                                mdb__parse__succeeded = MR_TRUE;
                                              }
                                          }
                                        else
                                          {
                                            MR_Word mdb__parse__ParamCmd_40;
                                            MR_String mdb__parse__Var_261;
                                            MR_Integer mdb__parse__lo_4;
                                            MR_Integer mdb__parse__hi_5;
                                            MR_Integer mdb__parse__mid_6;
                                            MR_Integer mdb__parse__result_7;

                                            mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__CmdToken_5)) == (MR_mktag((MR_Integer) 2)));
                                            if (mdb__parse__succeeded)
                                              {
                                                mdb__parse__Var_261 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__CmdToken_5, (MR_Integer) 0)));
                                                /* binary string simple lookup switch */
                                                mdb__parse__lo_4 = (MR_Integer) 0;
                                                mdb__parse__hi_5 = (MR_Integer) 3;
                                                do
                                                  {
                                                    mdb__parse__mid_6 = (((mdb__parse__lo_4 + mdb__parse__hi_5)) / (MR_Integer) 2);
                                                    mdb__parse__result_7 = MR_strcmp(mdb__parse__Var_261, ((&mdb__parse_vector_common_6[0 + mdb__parse__mid_6]))->mdb__parse__vector_common_type_6_0__vct_6_f_0);
                                                    if ((mdb__parse__result_7 == (MR_Integer) 0))
                                                      {
                                                        mdb__parse__ParamCmd_40 = ((&mdb__parse_vector_common_6[0 + mdb__parse__mid_6]))->mdb__parse__vector_common_type_6_0__vct_6_f_1;
                                                        mdb__parse__succeeded = MR_TRUE;
                                                        /* jump out of search loop */
                                                        goto label_1;
                                                      }
                                                    else
                                                    if ((mdb__parse__result_7 < (MR_Integer) 0))
                                                      mdb__parse__hi_5 = (mdb__parse__mid_6 - (MR_Integer) 1);
                                                    else
                                                      mdb__parse__lo_4 = (mdb__parse__mid_6 + (MR_Integer) 1);
                                                  }
                                                while ((mdb__parse__lo_4 <= mdb__parse__hi_5));
                                                mdb__parse__succeeded = MR_FALSE;
                                              label_1:;
                                              }
                                            if (mdb__parse__succeeded)
                                              {
                                                MR_Word mdb__parse__FormatCmd_147;

                                                if ((mdb__parse__ArgTokens_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                                  {
                                                    mdb__parse__FormatCmd_147 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                    mdb__parse__succeeded = MR_TRUE;
                                                  }
                                                else
                                                  {
                                                    MR_Word mdb__parse__TypeCtorInfo_247_247;
                                                    MR_Integer mdb__parse__N_43;
                                                    MR_Word mdb__parse__Var_77;
                                                    MR_Word mdb__parse__Var_78;
                                                    MR_Word mdb__parse__Var_79;
                                                    MR_Word mdb__parse__Var_80;
                                                    MR_Word mdb__parse__Var_81;
                                                    MR_Word mdb__parse__RemainingTokens_130;
                                                    MR_Word mdb__parse__ArgWords_131;
                                                    MR_Word mdb__parse__OptionOps_132;
                                                    MR_Word mdb__parse__RemainingWords_133;
                                                    MR_Word mdb__parse__MaybeOptionTable_134;
                                                    MR_Word mdb__parse__Setting_135;

                                                    mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__MaybeArgWords_7)) == (MR_mktag((MR_Integer) 1)));
                                                    if (mdb__parse__succeeded)
                                                      {
                                                        mdb__parse__ArgWords_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__MaybeArgWords_7, (MR_Integer) 0)));
                                                        mdb__parse__Var_77 = (MR_Word) &mdb__parse_scalar_common_3[10];
                                                        mdb__parse__Var_78 = (MR_Word) &mdb__parse_scalar_common_3[11];
                                                        mdb__parse__Var_79 = (MR_Word) &mdb__parse_scalar_common_3[12];
                                                        mdb__parse__TypeCtorInfo_247_247 = (MR_Word) &mdb__parse__mdb__parse__type_ctor_info_setting_option_0;
                                                        mdb__parse__OptionOps_132 = (MR_Word) MR_mkword(MR_mktag(2), &mdb__parse_scalar_common_3[13]);
                                                        {
                                                          mercury__getopt__process_options_4_p_0(mdb__parse__TypeCtorInfo_247_247, mdb__parse__OptionOps_132, mdb__parse__ArgWords_131, &mdb__parse__RemainingWords_133, &mdb__parse__MaybeOptionTable_134);
                                                        }
                                                        {
                                                          mdb__parse__lexer_words_2_p_0(mdb__parse__RemainingWords_133, &mdb__parse__RemainingTokens_130);
                                                        }
                                                        mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__RemainingTokens_130)) == (MR_mktag((MR_Integer) 1)));
                                                        if (mdb__parse__succeeded)
                                                          {
                                                            mdb__parse__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__RemainingTokens_130, (MR_Integer) 0)));
                                                            mdb__parse__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__RemainingTokens_130, (MR_Integer) 1)));
                                                            mdb__parse__succeeded = (mdb__parse__Var_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                            if (mdb__parse__succeeded)
                                                              {
                                                                mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__Var_80)) == (MR_mktag((MR_Integer) 1)));
                                                                if (mdb__parse__succeeded)
                                                                  {
                                                                    mdb__parse__N_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__parse__Var_80, (MR_Integer) 0)));
                                                                    {
                                                                      mdb__parse__param_cmd_to_setting_3_p_0(mdb__parse__ParamCmd_40, mdb__parse__N_43, &mdb__parse__Setting_135);
                                                                    }
                                                                    {
                                                                      mdb__parse__FormatCmd_147 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                                      MR_hl_field(MR_mktag(2), mdb__parse__FormatCmd_147, 0) = ((MR_Box) (mdb__parse__MaybeOptionTable_134));
                                                                      MR_hl_field(MR_mktag(2), mdb__parse__FormatCmd_147, 1) = ((MR_Box) (mdb__parse__Setting_135));
                                                                    }
                                                                    mdb__parse__succeeded = MR_TRUE;
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                                if (mdb__parse__succeeded)
                                                  {
                                                    {
                                                      MR_Word base;
                                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                      *mdb__parse__Command_8 = base;
                                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__parse__FormatCmd_147));
                                                    }
                                                    mdb__parse__succeeded = MR_TRUE;
                                                  }
                                              }
                                            else
                                              {
                                                mdb__parse__succeeded = (mdb__parse__CmdToken_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
                                                if (mdb__parse__succeeded)
                                                  {
                                                    MR_Word mdb__parse__TypeCtorInfo_254_254;
                                                    MR_Integer mdb__parse__Depth_44;
                                                    MR_Word mdb__parse__Var_82;
                                                    MR_Word mdb__parse__Var_83;
                                                    MR_Word mdb__parse__Var_84;
                                                    MR_Word mdb__parse__Var_85;
                                                    MR_Word mdb__parse__Var_86;
                                                    MR_Word mdb__parse__Var_87;
                                                    MR_Word mdb__parse__Var_88;
                                                    MR_Word mdb__parse__OptionOps_149;
                                                    MR_Word mdb__parse__MaybeOptionTable_150;
                                                    MR_Word mdb__parse__FormatCmd_151;
                                                    MR_Word mdb__parse__Var_45;

                                                    mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__ArgTokens_6)) == (MR_mktag((MR_Integer) 1)));
                                                    if (mdb__parse__succeeded)
                                                      {
                                                        mdb__parse__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__ArgTokens_6, (MR_Integer) 0)));
                                                        mdb__parse__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__ArgTokens_6, (MR_Integer) 1)));
                                                        mdb__parse__succeeded = (mdb__parse__Var_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                        if (mdb__parse__succeeded)
                                                          {
                                                            mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__Var_82)) == (MR_mktag((MR_Integer) 1)));
                                                            if (mdb__parse__succeeded)
                                                              {
                                                                mdb__parse__Depth_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__parse__Var_82, (MR_Integer) 0)));
                                                                mdb__parse__Var_84 = (MR_Word) &mdb__parse_scalar_common_3[14];
                                                                mdb__parse__Var_85 = (MR_Word) &mdb__parse_scalar_common_3[15];
                                                                mdb__parse__Var_86 = (MR_Word) &mdb__parse_scalar_common_3[16];
                                                                mdb__parse__Var_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                                mdb__parse__TypeCtorInfo_254_254 = (MR_Word) &mdb__parse__mdb__parse__type_ctor_info_setting_option_0;
                                                                mdb__parse__OptionOps_149 = (MR_Word) MR_mkword(MR_mktag(2), &mdb__parse_scalar_common_3[17]);
                                                                {
                                                                  mercury__getopt__process_options_4_p_0(mdb__parse__TypeCtorInfo_254_254, mdb__parse__OptionOps_149, mdb__parse__Var_87, &mdb__parse__Var_45, &mdb__parse__MaybeOptionTable_150);
                                                                }
                                                                {
                                                                  mdb__parse__Var_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                                  MR_hl_field(MR_mktag(0), mdb__parse__Var_88, 0) = ((MR_Box) (mdb__parse__Depth_44));
                                                                }
                                                                {
                                                                  mdb__parse__FormatCmd_151 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                                  MR_hl_field(MR_mktag(2), mdb__parse__FormatCmd_151, 0) = ((MR_Box) (mdb__parse__MaybeOptionTable_150));
                                                                  MR_hl_field(MR_mktag(2), mdb__parse__FormatCmd_151, 1) = ((MR_Box) (mdb__parse__Var_88));
                                                                }
                                                                {
                                                                  MR_Word base;
                                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                                  *mdb__parse__Command_8 = base;
                                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__parse__FormatCmd_151));
                                                                }
                                                                mdb__parse__succeeded = MR_TRUE;
                                                              }
                                                          }
                                                      }
                                                  }
                                                else
                                                  {
                                                    MR_String mdb__parse__Var_89;

                                                    mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__CmdToken_5)) == (MR_mktag((MR_Integer) 2)));
                                                    if (mdb__parse__succeeded)
                                                      {
                                                        mdb__parse__Var_89 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__CmdToken_5, (MR_Integer) 0)));
                                                        mdb__parse__succeeded = (strcmp(mdb__parse__Var_89, (MR_String) "num_io_actions") == 0);
                                                      }
                                                    if (mdb__parse__succeeded)
                                                      {
                                                        MR_Word mdb__parse__Var_90;
                                                        MR_Word mdb__parse__Var_91;
                                                        MR_Word mdb__parse__Var_92;
                                                        MR_Integer mdb__parse__N_152;

                                                        mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__ArgTokens_6)) == (MR_mktag((MR_Integer) 1)));
                                                        if (mdb__parse__succeeded)
                                                          {
                                                            mdb__parse__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__ArgTokens_6, (MR_Integer) 0)));
                                                            mdb__parse__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__ArgTokens_6, (MR_Integer) 1)));
                                                            mdb__parse__succeeded = (mdb__parse__Var_91 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                            if (mdb__parse__succeeded)
                                                              {
                                                                mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__Var_90)) == (MR_mktag((MR_Integer) 1)));
                                                                if (mdb__parse__succeeded)
                                                                  {
                                                                    mdb__parse__N_152 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__parse__Var_90, (MR_Integer) 0)));
                                                                    {
                                                                      mdb__parse__Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                                      MR_hl_field(MR_mktag(3), mdb__parse__Var_92, 0) = ((MR_Box) (mdb__parse__N_152));
                                                                    }
                                                                    {
                                                                      MR_Word base;
                                                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                                      *mdb__parse__Command_8 = base;
                                                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                                                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__parse__Var_92));
                                                                    }
                                                                    mdb__parse__succeeded = MR_TRUE;
                                                                  }
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        MR_String mdb__parse__Var_93;

                                                        mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__CmdToken_5)) == (MR_mktag((MR_Integer) 2)));
                                                        if (mdb__parse__succeeded)
                                                          {
                                                            mdb__parse__Var_93 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__CmdToken_5, (MR_Integer) 0)));
                                                            mdb__parse__succeeded = (strcmp(mdb__parse__Var_93, (MR_String) "params") == 0);
                                                          }
                                                        if (mdb__parse__succeeded)
                                                          {
                                                            *mdb__parse__Command_8 = (MR_Word) MR_mkword(MR_mktag(3), &mdb__parse_scalar_common_1[9]);
                                                            mdb__parse__succeeded = MR_TRUE;
                                                          }
                                                        else
                                                          {
                                                            if ((mdb__parse__CmdToken_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
                                                              mdb__parse__succeeded = MR_TRUE;
                                                            else
                                                            if (((MR_tag((MR_Word) mdb__parse__CmdToken_5)) == (MR_mktag((MR_Integer) 2))))
                                                              {
                                                                MR_String mdb__parse__Var_262 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__CmdToken_5, (MR_Integer) 0)));

                                                                if ((strcmp(mdb__parse__Var_262, (MR_String) "h") == 0))
                                                                  mdb__parse__succeeded = MR_TRUE;
                                                                else
                                                                if ((strcmp(mdb__parse__Var_262, (MR_String) "help") == 0))
                                                                  mdb__parse__succeeded = MR_TRUE;
                                                                else
                                                                  mdb__parse__succeeded = MR_FALSE;
                                                              }
                                                            else
                                                              mdb__parse__succeeded = MR_FALSE;
                                                            if (mdb__parse__succeeded)
                                                              {
                                                                mdb__parse__succeeded = (mdb__parse__ArgTokens_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                                if (mdb__parse__succeeded)
                                                                  {
                                                                    *mdb__parse__Command_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
                                                                    mdb__parse__succeeded = MR_TRUE;
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                MR_String mdb__parse__Var_97;

                                                                mdb__parse__succeeded = (mdb__parse__ArgTokens_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                                if (mdb__parse__succeeded)
                                                                  {
                                                                    mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__CmdToken_5)) == (MR_mktag((MR_Integer) 2)));
                                                                    if (mdb__parse__succeeded)
                                                                      {
                                                                        mdb__parse__Var_97 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__CmdToken_5, (MR_Integer) 0)));
                                                                        mdb__parse__succeeded = (strcmp(mdb__parse__Var_97, (MR_String) "quit") == 0);
                                                                        if (mdb__parse__succeeded)
                                                                          {
                                                                            *mdb__parse__Command_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
                                                                            mdb__parse__succeeded = MR_TRUE;
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
    return mdb__parse__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__parse__parse_format_2_p_0(
  MR_Word mdb__parse__HeadVar__1_1,
  MR_Word * mdb__parse__Setting_4)
{
  {
    MR_bool mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mdb__parse__Token_3;
    MR_String mdb__parse__TokenName_5;
    MR_Word mdb__parse__Var_6;

    if (mdb__parse__succeeded)
      {
        mdb__parse__Token_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__1_1, (MR_Integer) 0)));
        mdb__parse__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__1_1, (MR_Integer) 1)));
        mdb__parse__succeeded = (mdb__parse__Var_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (mdb__parse__succeeded)
          {
            mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__Token_3)) == (MR_mktag((MR_Integer) 2)));
            if (mdb__parse__succeeded)
              {
                mdb__parse__TokenName_5 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__Token_3, (MR_Integer) 0)));
                mdb__parse__succeeded = (strcmp(mdb__parse__TokenName_5, (MR_String) "flat") == 0);
                if (mdb__parse__succeeded)
                  {
                    *mdb__parse__Setting_4 = (MR_Word) MR_mkword(MR_mktag(3), &mdb__parse_scalar_common_1[5]);
                    mdb__parse__succeeded = MR_TRUE;
                  }
                else
                  {
                    mdb__parse__succeeded = (strcmp(mdb__parse__TokenName_5, (MR_String) "raw_pretty") == 0);
                    if (mdb__parse__succeeded)
                      {
                        *mdb__parse__Setting_4 = (MR_Word) MR_mkword(MR_mktag(3), &mdb__parse_scalar_common_1[6]);
                        mdb__parse__succeeded = MR_TRUE;
                      }
                    else
                      {
                        mdb__parse__succeeded = (strcmp(mdb__parse__TokenName_5, (MR_String) "verbose") == 0);
                        if (mdb__parse__succeeded)
                          {
                            *mdb__parse__Setting_4 = (MR_Word) MR_mkword(MR_mktag(3), &mdb__parse_scalar_common_1[7]);
                            mdb__parse__succeeded = MR_TRUE;
                          }
                        else
                          {
                            MR_Word mdb__parse__Var_10;

                            mdb__parse__succeeded = (strcmp(mdb__parse__TokenName_5, (MR_String) "pretty") == 0);
                            if (mdb__parse__succeeded)
                              {
                                mdb__parse__Var_10 = (MR_Integer) 3;
                                *mdb__parse__Setting_4 = (MR_Word) MR_mkword(MR_mktag(3), &mdb__parse_scalar_common_1[8]);
                                mdb__parse__succeeded = MR_TRUE;
                              }
                          }
                      }
                  }
              }
          }
      }
    return mdb__parse__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__parse__parse_path_2_p_0(
  MR_Word mdb__parse__HeadVar__1_1,
  MR_Word * mdb__parse__Path_5)
{
  {
    MR_bool mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mdb__parse__Token_3;
    MR_Word mdb__parse__Tokens_4;

    if (mdb__parse__succeeded)
      {
        mdb__parse__Token_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__1_1, (MR_Integer) 0)));
        mdb__parse__Tokens_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__1_1, (MR_Integer) 1)));
        mdb__parse__succeeded = (mdb__parse__Token_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
        if (mdb__parse__succeeded)
          {
            MR_Word mdb__parse__Dirs_6;

            {
              mdb__parse__succeeded = mdb__parse__parse_up_down_dirs_2_p_0(mdb__parse__Tokens_4, &mdb__parse__Dirs_6);
            }
            if (mdb__parse__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *mdb__parse__Path_5 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__parse__Dirs_6));
                }
                mdb__parse__succeeded = MR_TRUE;
              }
          }
        else
          {
            MR_Word mdb__parse__Dirs_8;

            {
              mdb__parse__succeeded = mdb__parse__parse_up_down_dirs_2_p_0(mdb__parse__HeadVar__1_1, &mdb__parse__Dirs_8);
            }
            if (mdb__parse__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *mdb__parse__Path_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__parse__Dirs_8));
                }
                mdb__parse__succeeded = MR_TRUE;
              }
          }
      }
    return mdb__parse__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__parse__parse_up_down_dirs_2_p_0(
  MR_Word mdb__parse__HeadVar__1_1,
  MR_Word * mdb__parse__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__parse__succeeded;

        if ((mdb__parse__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mdb__parse__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mdb__parse__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mdb__parse__Token_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__parse__Tokens_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__1_1, (MR_Integer) 1)));

            switch (MR_tag((MR_Word) mdb__parse__Token_3)) {
              default:
                mdb__parse__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdb__parse__Token_3)) {
                  default:
                    mdb__parse__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word mdb__parse__RestDirs_13;

                      {
                        mdb__parse__succeeded = mdb__parse__parse_up_down_dirs_2_p_0(mdb__parse__Tokens_4, &mdb__parse__RestDirs_13);
                      }
                      if (mdb__parse__succeeded)
                        {
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *mdb__parse__HeadVar__2_2 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__parse__RestDirs_13));
                          }
                          mdb__parse__succeeded = MR_TRUE;
                        }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mdb__parse__next_value_of_HeadVar__1_1 = mdb__parse__Tokens_4;

                        mdb__parse__HeadVar__1_1 = mdb__parse__next_value_of_HeadVar__1_1;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mdb__parse__next_value_of_HeadVar__1_1 = mdb__parse__Tokens_4;

                        mdb__parse__HeadVar__1_1 = mdb__parse__next_value_of_HeadVar__1_1;
                      }
                      continue;
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer mdb__parse__Subdir_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__parse__Token_3, (MR_Integer) 0)));
                  MR_Word mdb__parse__RestDirs_7;
                  MR_Word mdb__parse__Var_11;

                  {
                    mdb__parse__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__parse__Var_11, 0) = ((MR_Box) (mdb__parse__Subdir_6));
                  }
                  {
                    mdb__parse__succeeded = mdb__parse__parse_up_down_dirs_2_p_0(mdb__parse__Tokens_4, &mdb__parse__RestDirs_7);
                  }
                  if (mdb__parse__succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *mdb__parse__HeadVar__2_2 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__parse__Var_11));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__parse__RestDirs_7));
                      }
                      mdb__parse__succeeded = MR_TRUE;
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String mdb__parse__NamedSubdir_8 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__Token_3, (MR_Integer) 0)));
                  MR_Word mdb__parse__Var_10;
                  MR_Word mdb__parse__RestDirs_12;

                  {
                    mdb__parse__Var_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), mdb__parse__Var_10, 0) = ((MR_Box) (mdb__parse__NamedSubdir_8));
                  }
                  {
                    mdb__parse__succeeded = mdb__parse__parse_up_down_dirs_2_p_0(mdb__parse__Tokens_4, &mdb__parse__RestDirs_12);
                  }
                  if (mdb__parse__succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *mdb__parse__HeadVar__2_2 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__parse__Var_10));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__parse__RestDirs_12));
                      }
                      mdb__parse__succeeded = MR_TRUE;
                    }
                }
                break;
            }
          }
        return mdb__parse__succeeded;
      }
      break;
    }
}

static void MR_CALL 
mdb__parse__param_cmd_to_setting_3_p_0(
  MR_Word mdb__parse__HeadVar__1_1,
  MR_Integer mdb__parse__N_2,
  MR_Word * mdb__parse__HeadVar__3_3)
{
  {
    MR_bool mdb__parse__succeeded;

    switch (mdb__parse__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *mdb__parse__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__parse__N_2));
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mdb__parse__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__parse__N_2));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mdb__parse__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__parse__N_2));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mdb__parse__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__parse__N_2));
        }
        break;
    }
  }
}

static void MR_CALL 
mdb__parse__lexer_words_2_p_0(
  MR_Word mdb__parse__HeadVar__1_1,
  MR_Word * mdb__parse__HeadVar__2_2)
{
  {
    MR_bool mdb__parse__succeeded;

    if ((mdb__parse__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mdb__parse__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_String mdb__parse__Word_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdb__parse__Words_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdb__parse__WordTokens_6;
        MR_Word mdb__parse__WordsTokens_7;
        MR_Word mdb__parse__Chars_11;

        {
          mercury__string__to_char_list_2_p_0(mdb__parse__Word_3, &mdb__parse__Chars_11);
        }
        {
          mdb__parse__lexer_word_chars_2_p_0(mdb__parse__Chars_11, &mdb__parse__WordTokens_6);
        }
        {
          mdb__parse__lexer_words_2_p_0(mdb__parse__Words_4, &mdb__parse__WordsTokens_7);
        }
        {
          mercury__list__append_3_p_1((MR_Word) &mdb__parse__mdb__parse__type_ctor_info_token_0, mdb__parse__WordTokens_6, mdb__parse__WordsTokens_7, mdb__parse__HeadVar__2_2);
        }
      }
  }
}

static MR_bool MR_CALL 
mdb__parse__lexer_word_chars_2_p_0_2(
  MR_Box mdb__parse__closure_arg,
  MR_Box mdb__parse__wrapper_arg_1)
{
  {
    MR_bool mdb__parse__succeeded;
    MR_Box mdb__parse__closure = mdb__parse__closure_arg;

    {
      mdb__parse__succeeded = mercury__char__is_alnum_or_underscore_1_p_0(((MR_Char) (MR_Word) mdb__parse__wrapper_arg_1));
    }
    return mdb__parse__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__parse__lexer_word_chars_2_p_0_1(
  MR_Box mdb__parse__closure_arg,
  MR_Box mdb__parse__wrapper_arg_1)
{
  {
    MR_bool mdb__parse__succeeded;
    MR_Box mdb__parse__closure = mdb__parse__closure_arg;

    {
      mdb__parse__succeeded = mercury__char__is_digit_1_p_0(((MR_Char) (MR_Word) mdb__parse__wrapper_arg_1));
    }
    return mdb__parse__succeeded;
  }
}

static void MR_CALL 
mdb__parse__lexer_word_chars_2_p_0(
  MR_Word mdb__parse__HeadVar__1_1,
  MR_Word * mdb__parse__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__parse__succeeded;

        if ((mdb__parse__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mdb__parse__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Char mdb__parse__C_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__parse__Cs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__1_1, (MR_Integer) 1)));

            mdb__parse__succeeded = (mdb__parse__C_3 == (MR_Char) 46);
            if (mdb__parse__succeeded)
              if ((mdb__parse__Cs_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *mdb__parse__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                {
                  MR_Char mdb__parse__C_27 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__Cs_4, (MR_Integer) 0)));
                  MR_Word mdb__parse__Cs_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__Cs_4, (MR_Integer) 1)));

                  mdb__parse__succeeded = (mdb__parse__C_27 == (MR_Char) 46);
                  if (mdb__parse__succeeded)
                    {
                      MR_Word mdb__parse__Toks2_30;

                      {
                        mdb__parse__lexer_word_chars_2_p_0(mdb__parse__Cs_28, &mdb__parse__Toks2_30);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *mdb__parse__HeadVar__2_2 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__parse__Toks2_30));
                      }
                    }
                  else
                    {
                      MR_Word mdb__parse__Toks2_34;

                      {
                        mdb__parse__lexer_word_chars_2_p_0(mdb__parse__Cs_4, &mdb__parse__Toks2_34);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *mdb__parse__HeadVar__2_2 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__parse__Toks2_34));
                      }
                    }
                }
            else
              {
                mdb__parse__succeeded = (mdb__parse__C_3 == (MR_Char) 47);
                if (mdb__parse__succeeded)
                  {
                    MR_Word mdb__parse__Toks2_6;

                    {
                      mdb__parse__lexer_word_chars_2_p_0(mdb__parse__Cs_4, &mdb__parse__Toks2_6);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *mdb__parse__HeadVar__2_2 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__parse__Toks2_6));
                    }
                  }
                else
                  {
                    mdb__parse__succeeded = (mdb__parse__C_3 == (MR_Char) 63);
                    if (mdb__parse__succeeded)
                      {
                        MR_Word mdb__parse__Toks2_16;

                        {
                          mdb__parse__lexer_word_chars_2_p_0(mdb__parse__Cs_4, &mdb__parse__Toks2_16);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *mdb__parse__HeadVar__2_2 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__parse__Toks2_16));
                        }
                      }
                    else
                      {
                        mdb__parse__succeeded = (mdb__parse__C_3 == (MR_Char) 94);
                        if (mdb__parse__succeeded)
                          {
                            MR_Word mdb__parse__Toks2_17;

                            {
                              mdb__parse__lexer_word_chars_2_p_0(mdb__parse__Cs_4, &mdb__parse__Toks2_17);
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              *mdb__parse__HeadVar__2_2 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__parse__Toks2_17));
                            }
                          }
                        else
                          {
                            mdb__parse__succeeded = (mdb__parse__C_3 == (MR_Char) 60);
                            if (mdb__parse__succeeded)
                              {
                                MR_Word mdb__parse__Toks2_18;

                                {
                                  mdb__parse__lexer_word_chars_2_p_0(mdb__parse__Cs_4, &mdb__parse__Toks2_18);
                                }
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  *mdb__parse__HeadVar__2_2 = base;
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__parse__Toks2_18));
                                }
                              }
                            else
                              {
                                MR_Char mdb__parse__H_7;
                                MR_Word mdb__parse__T_8;

                                mdb__parse__succeeded = (mdb__parse__C_3 == (MR_Char) 45);
                                if (mdb__parse__succeeded)
                                  {
                                    mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__Cs_4)) == (MR_mktag((MR_Integer) 1)));
                                    if (mdb__parse__succeeded)
                                      {
                                        mdb__parse__H_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__Cs_4, (MR_Integer) 0)));
                                        mdb__parse__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__Cs_4, (MR_Integer) 1)));
                                      }
                                  }
                                if (mdb__parse__succeeded)
                                  {
                                    MR_String mdb__parse__ArgName_38;
                                    MR_Word mdb__parse__Var_40;

                                    mdb__parse__succeeded = (mdb__parse__H_7 == (MR_Char) 45);
                                    if (mdb__parse__succeeded)
                                      {
                                        mercury__string__from_char_list_2_p_0(mdb__parse__T_8, &mdb__parse__ArgName_38);
                                      }
                                    else
                                      {
                                        mercury__string__from_char_list_2_p_0(mdb__parse__Cs_4, &mdb__parse__ArgName_38);
                                      }
                                    {
                                      mdb__parse__Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(3), mdb__parse__Var_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                                      MR_hl_field(MR_mktag(3), mdb__parse__Var_40, 1) = ((MR_Box) (mdb__parse__ArgName_38));
                                    }
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      *mdb__parse__HeadVar__2_2 = base;
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__parse__Var_40));
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    }
                                  }
                                else
                                  {
                                    {
                                      mdb__parse__succeeded = mercury__char__is_digit_1_p_0(mdb__parse__C_3);
                                    }
                                    if (mdb__parse__succeeded)
                                      {
                                        MR_Integer mdb__parse__N_9;
                                        MR_Integer mdb__parse__Zero_44;
                                        MR_Integer mdb__parse__CN_45;
                                        MR_Word mdb__parse__Digits_50;
                                        MR_Word mdb__parse__Rest_51;
                                        MR_Integer mdb__parse__Num_52;
                                        MR_Word mdb__parse__Toks2_53;
                                        MR_Word mdb__parse__Var_55;

                                        {
                                          mercury__char__to_int_2_p_0((MR_Char) 48, &mdb__parse__Zero_44);
                                        }
                                        {
                                          mercury__char__to_int_2_p_0(mdb__parse__C_3, &mdb__parse__CN_45);
                                        }
                                        mdb__parse__N_9 = (mdb__parse__CN_45 - mdb__parse__Zero_44);
                                        {
                                          mercury__list__take_while_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &mdb__parse_scalar_common_3[0], mdb__parse__Cs_4, &mdb__parse__Digits_50, &mdb__parse__Rest_51);
                                        }
                                        {
                                          mdb__parse__digits_to_int_acc_3_p_0(mdb__parse__N_9, mdb__parse__Digits_50, &mdb__parse__Num_52);
                                        }
                                        {
                                          mdb__parse__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(1), mdb__parse__Var_55, 0) = ((MR_Box) (mdb__parse__Num_52));
                                        }
                                        {
                                          mdb__parse__lexer_word_chars_2_p_0(mdb__parse__Rest_51, &mdb__parse__Toks2_53);
                                        }
                                        {
                                          MR_Word base;
                                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                          *mdb__parse__HeadVar__2_2 = base;
                                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__parse__Var_55));
                                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__parse__Toks2_53));
                                        }
                                      }
                                    else
                                      {
                                        {
                                          mdb__parse__succeeded = mercury__char__is_alpha_or_underscore_1_p_0(mdb__parse__C_3);
                                        }
                                        if (mdb__parse__succeeded)
                                          {
                                            MR_Word mdb__parse__Letters_61;
                                            MR_Word mdb__parse__Rest_62;
                                            MR_String mdb__parse__Name_63;
                                            MR_Word mdb__parse__Toks2_64;
                                            MR_Word mdb__parse__Var_66;
                                            MR_Word mdb__parse__Var_67;

                                            {
                                              mercury__list__take_while_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &mdb__parse_scalar_common_3[1], mdb__parse__Cs_4, &mdb__parse__Letters_61, &mdb__parse__Rest_62);
                                            }
                                            {
                                              mdb__parse__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                              MR_hl_field(MR_mktag(1), mdb__parse__Var_66, 0) = ((MR_Box) (MR_Word) (mdb__parse__C_3));
                                              MR_hl_field(MR_mktag(1), mdb__parse__Var_66, 1) = ((MR_Box) (mdb__parse__Letters_61));
                                            }
                                            {
                                              mercury__string__from_char_list_2_p_0(mdb__parse__Var_66, &mdb__parse__Name_63);
                                            }
                                            {
                                              mdb__parse__lexer_word_chars_2_p_0(mdb__parse__Rest_62, &mdb__parse__Toks2_64);
                                            }
                                            {
                                              mdb__parse__Var_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                              MR_hl_field(MR_mktag(2), mdb__parse__Var_67, 0) = ((MR_Box) (mdb__parse__Name_63));
                                            }
                                            {
                                              MR_Word base;
                                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                              *mdb__parse__HeadVar__2_2 = base;
                                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__parse__Var_67));
                                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__parse__Toks2_64));
                                            }
                                          }
                                        else
                                          {
                                            {
                                              mdb__parse__succeeded = mercury__char__is_whitespace_1_p_0(mdb__parse__C_3);
                                            }
                                            if (mdb__parse__succeeded)
                                              {
                                                /* direct tailcall eliminated */
                                                {
                                                  MR_Word mdb__parse__next_value_of_HeadVar__1_1 = mdb__parse__Cs_4;

                                                  mdb__parse__HeadVar__1_1 = mdb__parse__next_value_of_HeadVar__1_1;
                                                }
                                                continue;
                                              }
                                            else
                                              {
                                                MR_Word mdb__parse__Var_15;
                                                MR_Word mdb__parse__Toks2_19;

                                                {
                                                  mdb__parse__Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                  MR_hl_field(MR_mktag(3), mdb__parse__Var_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                  MR_hl_field(MR_mktag(3), mdb__parse__Var_15, 1) = ((MR_Box) (MR_Word) (mdb__parse__C_3));
                                                }
                                                {
                                                  mdb__parse__lexer_word_chars_2_p_0(mdb__parse__Cs_4, &mdb__parse__Toks2_19);
                                                }
                                                {
                                                  MR_Word base;
                                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                  *mdb__parse__HeadVar__2_2 = base;
                                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__parse__Var_15));
                                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__parse__Toks2_19));
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
      break;
    }
}

static void MR_CALL 
mdb__parse__digits_to_int_acc_3_p_0(
  MR_Integer mdb__parse__Acc_1,
  MR_Word mdb__parse__HeadVar__2_2,
  MR_Integer * mdb__parse__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__parse__succeeded;

        if ((mdb__parse__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mdb__parse__HeadVar__3_3 = mdb__parse__Acc_1;
        else
          {
            MR_Char mdb__parse__C_6 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mdb__parse__Cs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mdb__parse__D_9;
            MR_Integer mdb__parse__Acc2_10;
            MR_Integer mdb__parse__Var_11;
            MR_Integer mdb__parse__Zero_15;
            MR_Integer mdb__parse__CN_16;

            {
              mercury__char__to_int_2_p_0((MR_Char) 48, &mdb__parse__Zero_15);
            }
            {
              mercury__char__to_int_2_p_0(mdb__parse__C_6, &mdb__parse__CN_16);
            }
            mdb__parse__D_9 = (mdb__parse__CN_16 - mdb__parse__Zero_15);
            mdb__parse__Var_11 = ((MR_Integer) 10 * mdb__parse__Acc_1);
            mdb__parse__Acc2_10 = (mdb__parse__Var_11 + mdb__parse__D_9);
            /* direct tailcall eliminated */
            {
              MR_Integer mdb__parse__next_value_of_Acc_1 = mdb__parse__Acc2_10;
              MR_Word mdb__parse__next_value_of_HeadVar__2_2 = mdb__parse__Cs_7;

              mdb__parse__HeadVar__2_2 = mdb__parse__next_value_of_HeadVar__2_2;
              mdb__parse__Acc_1 = mdb__parse__next_value_of_Acc_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
mdb__parse____Unify____command_0_0_10001(
  MR_Box mdb__parse__wrapper_arg_1,
  MR_Box mdb__parse__wrapper_arg_2)
{
  {
    MR_bool mdb__parse__succeeded;

    {
      mdb__parse__succeeded = mdb__parse____Unify____command_0_0(((MR_Word) mdb__parse__wrapper_arg_1), ((MR_Word) mdb__parse__wrapper_arg_2));
    }
    return mdb__parse__succeeded;
  }
}

static void MR_CALL 
mdb__parse____Compare____command_0_0_10001(
  MR_Box * mdb__parse__wrapper_arg_1,
  MR_Box mdb__parse__wrapper_arg_2,
  MR_Box mdb__parse__wrapper_arg_3)
{
  {
    MR_Word mdb__parse__conv0_HeadVar__1_1;

    {
      mdb__parse____Compare____command_0_0(&mdb__parse__conv0_HeadVar__1_1, ((MR_Word) mdb__parse__wrapper_arg_2), ((MR_Word) mdb__parse__wrapper_arg_3));
    }
    *mdb__parse__wrapper_arg_1 = ((MR_Box) (mdb__parse__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__parse____Unify____external_request_0_0_10001(
  MR_Box mdb__parse__wrapper_arg_1,
  MR_Box mdb__parse__wrapper_arg_2)
{
  {
    MR_bool mdb__parse__succeeded;

    {
      mdb__parse__succeeded = mdb__parse____Unify____external_request_0_0(((MR_Word) mdb__parse__wrapper_arg_1), ((MR_Word) mdb__parse__wrapper_arg_2));
    }
    return mdb__parse__succeeded;
  }
}

static void MR_CALL 
mdb__parse____Compare____external_request_0_0_10001(
  MR_Box * mdb__parse__wrapper_arg_1,
  MR_Box mdb__parse__wrapper_arg_2,
  MR_Box mdb__parse__wrapper_arg_3)
{
  {
    MR_Word mdb__parse__conv0_HeadVar__1_1;

    {
      mdb__parse____Compare____external_request_0_0(&mdb__parse__conv0_HeadVar__1_1, ((MR_Word) mdb__parse__wrapper_arg_2), ((MR_Word) mdb__parse__wrapper_arg_3));
    }
    *mdb__parse__wrapper_arg_1 = ((MR_Box) (mdb__parse__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__parse____Unify____format_option_0_0_10001(
  MR_Box mdb__parse__wrapper_arg_1,
  MR_Box mdb__parse__wrapper_arg_2)
{
  {
    MR_bool mdb__parse__succeeded;

    {
      mdb__parse__succeeded = mdb__parse____Unify____format_option_0_0(((MR_Word) mdb__parse__wrapper_arg_1), ((MR_Word) mdb__parse__wrapper_arg_2));
    }
    return mdb__parse__succeeded;
  }
}

static void MR_CALL 
mdb__parse____Compare____format_option_0_0_10001(
  MR_Box * mdb__parse__wrapper_arg_1,
  MR_Box mdb__parse__wrapper_arg_2,
  MR_Box mdb__parse__wrapper_arg_3)
{
  {
    MR_Word mdb__parse__conv0_HeadVar__1_1;

    {
      mdb__parse____Compare____format_option_0_0(&mdb__parse__conv0_HeadVar__1_1, ((MR_Word) mdb__parse__wrapper_arg_2), ((MR_Word) mdb__parse__wrapper_arg_3));
    }
    *mdb__parse__wrapper_arg_1 = ((MR_Box) (mdb__parse__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__parse____Unify____format_param_cmd_0_0_10001(
  MR_Box mdb__parse__wrapper_arg_1,
  MR_Box mdb__parse__wrapper_arg_2)
{
  {
    MR_bool mdb__parse__succeeded;

    {
      mdb__parse__succeeded = mdb__parse____Unify____format_param_cmd_0_0(((MR_Word) mdb__parse__wrapper_arg_1), ((MR_Word) mdb__parse__wrapper_arg_2));
    }
    return mdb__parse__succeeded;
  }
}

static void MR_CALL 
mdb__parse____Compare____format_param_cmd_0_0_10001(
  MR_Box * mdb__parse__wrapper_arg_1,
  MR_Box mdb__parse__wrapper_arg_2,
  MR_Box mdb__parse__wrapper_arg_3)
{
  {
    MR_Word mdb__parse__conv0_HeadVar__1_1;

    {
      mdb__parse____Compare____format_param_cmd_0_0(&mdb__parse__conv0_HeadVar__1_1, ((MR_Word) mdb__parse__wrapper_arg_2), ((MR_Word) mdb__parse__wrapper_arg_3));
    }
    *mdb__parse__wrapper_arg_1 = ((MR_Box) (mdb__parse__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__parse____Unify____path_0_0_10001(
  MR_Box mdb__parse__wrapper_arg_1,
  MR_Box mdb__parse__wrapper_arg_2)
{
  {
    MR_bool mdb__parse__succeeded;

    {
      mdb__parse__succeeded = mdb__parse____Unify____path_0_0(((MR_Word) mdb__parse__wrapper_arg_1), ((MR_Word) mdb__parse__wrapper_arg_2));
    }
    return mdb__parse__succeeded;
  }
}

static void MR_CALL 
mdb__parse____Compare____path_0_0_10001(
  MR_Box * mdb__parse__wrapper_arg_1,
  MR_Box mdb__parse__wrapper_arg_2,
  MR_Box mdb__parse__wrapper_arg_3)
{
  {
    MR_Word mdb__parse__conv0_HeadVar__1_1;

    {
      mdb__parse____Compare____path_0_0(&mdb__parse__conv0_HeadVar__1_1, ((MR_Word) mdb__parse__wrapper_arg_2), ((MR_Word) mdb__parse__wrapper_arg_3));
    }
    *mdb__parse__wrapper_arg_1 = ((MR_Box) (mdb__parse__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__parse____Unify____setting_option_0_0_10001(
  MR_Box mdb__parse__wrapper_arg_1,
  MR_Box mdb__parse__wrapper_arg_2)
{
  {
    MR_bool mdb__parse__succeeded;

    {
      mdb__parse__succeeded = mdb__parse____Unify____setting_option_0_0(((MR_Word) mdb__parse__wrapper_arg_1), ((MR_Word) mdb__parse__wrapper_arg_2));
    }
    return mdb__parse__succeeded;
  }
}

static void MR_CALL 
mdb__parse____Compare____setting_option_0_0_10001(
  MR_Box * mdb__parse__wrapper_arg_1,
  MR_Box mdb__parse__wrapper_arg_2,
  MR_Box mdb__parse__wrapper_arg_3)
{
  {
    MR_Word mdb__parse__conv0_HeadVar__1_1;

    {
      mdb__parse____Compare____setting_option_0_0(&mdb__parse__conv0_HeadVar__1_1, ((MR_Word) mdb__parse__wrapper_arg_2), ((MR_Word) mdb__parse__wrapper_arg_3));
    }
    *mdb__parse__wrapper_arg_1 = ((MR_Box) (mdb__parse__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__parse____Unify____token_0_0_10001(
  MR_Box mdb__parse__wrapper_arg_1,
  MR_Box mdb__parse__wrapper_arg_2)
{
  {
    MR_bool mdb__parse__succeeded;

    {
      mdb__parse__succeeded = mdb__parse____Unify____token_0_0(((MR_Word) mdb__parse__wrapper_arg_1), ((MR_Word) mdb__parse__wrapper_arg_2));
    }
    return mdb__parse__succeeded;
  }
}

static void MR_CALL 
mdb__parse____Compare____token_0_0_10001(
  MR_Box * mdb__parse__wrapper_arg_1,
  MR_Box mdb__parse__wrapper_arg_2,
  MR_Box mdb__parse__wrapper_arg_3)
{
  {
    MR_Word mdb__parse__conv0_HeadVar__1_1;

    {
      mdb__parse____Compare____token_0_0(&mdb__parse__conv0_HeadVar__1_1, ((MR_Word) mdb__parse__wrapper_arg_2), ((MR_Word) mdb__parse__wrapper_arg_3));
    }
    *mdb__parse__wrapper_arg_1 = ((MR_Box) (mdb__parse__conv0_HeadVar__1_1));
  }
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

/* :- end_module mdb.parse. */
