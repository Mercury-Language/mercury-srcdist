/*
** Automatically generated from `parse.m'
** by the Mercury compiler,
** version DEV
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



#line 567 "parse.m"
struct mdb__parse__parse_cmd_4_p_0_16_env_0_s {
#line 567 "parse.m"
  MR_Box * mdb__parse__parse_cmd_4_p_0_16_env_0__wrapper_arg_1;
#line 567 "parse.m"
  MR_Box * mdb__parse__parse_cmd_4_p_0_16_env_0__wrapper_arg_2;
#line 567 "parse.m"
  MR_Cont mdb__parse__parse_cmd_4_p_0_16_env_0__cont;
#line 567 "parse.m"
  void * mdb__parse__parse_cmd_4_p_0_16_env_0__cont_env_ptr;
#line 567 "parse.m"
  MR_Word mdb__parse__parse_cmd_4_p_0_16_env_0__conv15_HeadVar__1_1;
#line 567 "parse.m"
  MR_Word mdb__parse__parse_cmd_4_p_0_16_env_0__conv14_HeadVar__2_2;
#line 567 "parse.m"
};

#line 553 "parse.m"
struct mdb__parse__parse_cmd_4_p_0_12_env_0_s {
#line 553 "parse.m"
  MR_Box * mdb__parse__parse_cmd_4_p_0_12_env_0__wrapper_arg_1;
#line 553 "parse.m"
  MR_Box * mdb__parse__parse_cmd_4_p_0_12_env_0__wrapper_arg_2;
#line 553 "parse.m"
  MR_Cont mdb__parse__parse_cmd_4_p_0_12_env_0__cont;
#line 553 "parse.m"
  void * mdb__parse__parse_cmd_4_p_0_12_env_0__cont_env_ptr;
#line 553 "parse.m"
  MR_Word mdb__parse__parse_cmd_4_p_0_12_env_0__conv11_HeadVar__1_1;
#line 553 "parse.m"
  MR_Word mdb__parse__parse_cmd_4_p_0_12_env_0__conv10_HeadVar__2_2;
#line 553 "parse.m"
};

#line 522 "parse.m"
struct mdb__parse__parse_cmd_4_p_0_8_env_0_s {
#line 522 "parse.m"
  MR_Box * mdb__parse__parse_cmd_4_p_0_8_env_0__wrapper_arg_1;
#line 522 "parse.m"
  MR_Box * mdb__parse__parse_cmd_4_p_0_8_env_0__wrapper_arg_2;
#line 522 "parse.m"
  MR_Cont mdb__parse__parse_cmd_4_p_0_8_env_0__cont;
#line 522 "parse.m"
  void * mdb__parse__parse_cmd_4_p_0_8_env_0__cont_env_ptr;
#line 522 "parse.m"
  MR_Word mdb__parse__parse_cmd_4_p_0_8_env_0__conv7_HeadVar__1_1;
#line 522 "parse.m"
  MR_Word mdb__parse__parse_cmd_4_p_0_8_env_0__conv6_HeadVar__2_2;
#line 522 "parse.m"
};

#line 390 "parse.m"
struct mdb__parse__parse_cmd_4_p_0_4_env_0_s {
#line 390 "parse.m"
  MR_Box * mdb__parse__parse_cmd_4_p_0_4_env_0__wrapper_arg_1;
#line 390 "parse.m"
  MR_Box * mdb__parse__parse_cmd_4_p_0_4_env_0__wrapper_arg_2;
#line 390 "parse.m"
  MR_Cont mdb__parse__parse_cmd_4_p_0_4_env_0__cont;
#line 390 "parse.m"
  void * mdb__parse__parse_cmd_4_p_0_4_env_0__cont_env_ptr;
#line 390 "parse.m"
  MR_Word mdb__parse__parse_cmd_4_p_0_4_env_0__conv3_HeadVar__1_1;
#line 390 "parse.m"
  MR_Word mdb__parse__parse_cmd_4_p_0_4_env_0__conv2_HeadVar__2_2;
#line 390 "parse.m"
};


#line 151 "mdb.parse.c"
static const MR_FA_TypeInfo_Struct1 mdb__parse__getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_format_option_0;

#line 154 "mdb.parse.c"
static const MR_FA_TypeInfo_Struct1 mdb__parse__maybe__ti_maybe_1getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_format_option_0;

#line 157 "mdb.parse.c"
static const MR_FA_TypeInfo_Struct1 mdb__parse__maybe__ti_maybe_1mdb__parse__type_ctor_info_path_0;

#line 160 "mdb.parse.c"
static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_0[2];

#line 163 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_0;

#line 166 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_1;

#line 169 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_2;

#line 172 "mdb.parse.c"
static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_3[1];

#line 175 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_3;

#line 178 "mdb.parse.c"
static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_4[1];

#line 181 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_4;

#line 184 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_5;

#line 187 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_6;

#line 190 "mdb.parse.c"
static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_7[3];

#line 193 "mdb.parse.c"
static const MR_DuArgLocn mdb__parse__mdb__parse__field_locns_command_0_7[3];

#line 196 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_7;

#line 199 "mdb.parse.c"
static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_8[1];

#line 202 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_8;

#line 205 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_9;

#line 208 "mdb.parse.c"
static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_10[1];

#line 211 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_10;

#line 214 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_11;

#line 217 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_12;

#line 220 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_13;

#line 223 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_14;

#line 226 "mdb.parse.c"
static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_command_0_0[9];

#line 229 "mdb.parse.c"
static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_command_0_1[1];

#line 232 "mdb.parse.c"
static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_command_0_2[1];

#line 235 "mdb.parse.c"
static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_command_0_3[4];

#line 238 "mdb.parse.c"
static const MR_DuPtagLayout mdb__parse__mdb__parse__du_ptag_ordered_command_0[4];

#line 241 "mdb.parse.c"
static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_name_ordered_command_0[15];

#line 244 "mdb.parse.c"
static const MR_Integer mdb__parse__mdb__parse__functor_number_map_command_0[15];

#line 247 "mdb.parse.c"
static const MR_Integer mdb__parse__mdb__parse__functor_number_map_external_request_0[1];

#line 250 "mdb.parse.c"
static const MR_NotagFunctorDesc mdb__parse__mdb__parse__notag_functor_desc_external_request_0;

#line 253 "mdb.parse.c"
static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_option_0_0;

#line 256 "mdb.parse.c"
static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_option_0_1;

#line 259 "mdb.parse.c"
static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_option_0_2;

#line 262 "mdb.parse.c"
static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_option_0_3;

#line 265 "mdb.parse.c"
static const MR_EnumFunctorDescPtr mdb__parse__mdb__parse__enum_value_ordered_format_option_0[4];

#line 268 "mdb.parse.c"
static const MR_EnumFunctorDescPtr mdb__parse__mdb__parse__enum_name_ordered_format_option_0[4];

#line 271 "mdb.parse.c"
static const MR_Integer mdb__parse__mdb__parse__functor_number_map_format_option_0[4];

#line 274 "mdb.parse.c"
static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_0;

#line 277 "mdb.parse.c"
static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_1;

#line 280 "mdb.parse.c"
static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_2;

#line 283 "mdb.parse.c"
static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_3;

#line 286 "mdb.parse.c"
static const MR_EnumFunctorDescPtr mdb__parse__mdb__parse__enum_value_ordered_format_param_cmd_0[4];

#line 289 "mdb.parse.c"
static const MR_EnumFunctorDescPtr mdb__parse__mdb__parse__enum_name_ordered_format_param_cmd_0[4];

#line 292 "mdb.parse.c"
static const MR_Integer mdb__parse__mdb__parse__functor_number_map_format_param_cmd_0[4];

#line 295 "mdb.parse.c"
static const MR_FA_TypeInfo_Struct1 mdb__parse__list__ti_list_1mdb__browser_info__type_ctor_info_up_down_dir_0;

#line 298 "mdb.parse.c"
static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_path_0_0[1];

#line 301 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_path_0_0;

#line 304 "mdb.parse.c"
static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_path_0_1[1];

#line 307 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_path_0_1;

#line 310 "mdb.parse.c"
static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_path_0_0[1];

#line 313 "mdb.parse.c"
static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_path_0_1[1];

#line 316 "mdb.parse.c"
static const MR_DuPtagLayout mdb__parse__mdb__parse__du_ptag_ordered_path_0[2];

#line 319 "mdb.parse.c"
static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_name_ordered_path_0[2];

#line 322 "mdb.parse.c"
static const MR_Integer mdb__parse__mdb__parse__functor_number_map_path_0[2];

#line 325 "mdb.parse.c"
static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_0;

#line 328 "mdb.parse.c"
static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_1;

#line 331 "mdb.parse.c"
static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_2;

#line 334 "mdb.parse.c"
static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_3;

#line 337 "mdb.parse.c"
static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_4;

#line 340 "mdb.parse.c"
static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_5;

#line 343 "mdb.parse.c"
static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_6;

#line 346 "mdb.parse.c"
static const MR_EnumFunctorDescPtr mdb__parse__mdb__parse__enum_value_ordered_setting_option_0[7];

#line 349 "mdb.parse.c"
static const MR_EnumFunctorDescPtr mdb__parse__mdb__parse__enum_name_ordered_setting_option_0[7];

#line 352 "mdb.parse.c"
static const MR_Integer mdb__parse__mdb__parse__functor_number_map_setting_option_0[7];

#line 355 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_0;

#line 358 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_1;

#line 361 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_2;

#line 364 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_3;

#line 367 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_4;

#line 370 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_5;

#line 373 "mdb.parse.c"
static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_token_0_6[1];

#line 376 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_6;

#line 379 "mdb.parse.c"
static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_token_0_7[1];

#line 382 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_7;

#line 385 "mdb.parse.c"
static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_token_0_8[1];

#line 388 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_8;

#line 391 "mdb.parse.c"
static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_token_0_9[1];

#line 394 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_9;

#line 397 "mdb.parse.c"
static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_token_0_0[6];

#line 400 "mdb.parse.c"
static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_token_0_1[1];

#line 403 "mdb.parse.c"
static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_token_0_2[1];

#line 406 "mdb.parse.c"
static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_token_0_3[2];

#line 409 "mdb.parse.c"
static const MR_DuPtagLayout mdb__parse__mdb__parse__du_ptag_ordered_token_0[4];

#line 412 "mdb.parse.c"
static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_name_ordered_token_0[10];

#line 415 "mdb.parse.c"
static const MR_Integer mdb__parse__mdb__parse__functor_number_map_token_0[10];

#line 418 "mdb.parse.c"
static MR_bool MR_CALL 
mdb__parse____Unify____command_0_0_10001(
#line 421 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_1,
#line 423 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_2);

#line 426 "mdb.parse.c"
static void MR_CALL 
mdb__parse____Compare____command_0_0_10001(
#line 429 "mdb.parse.c"
  MR_Box * mdb__parse__wrapper_arg_1,
#line 431 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_2,
#line 433 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_3);

#line 436 "mdb.parse.c"
static MR_bool MR_CALL 
mdb__parse____Unify____external_request_0_0_10001(
#line 439 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_1,
#line 441 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_2);

#line 444 "mdb.parse.c"
static void MR_CALL 
mdb__parse____Compare____external_request_0_0_10001(
#line 447 "mdb.parse.c"
  MR_Box * mdb__parse__wrapper_arg_1,
#line 449 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_2,
#line 451 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_3);

#line 454 "mdb.parse.c"
static MR_bool MR_CALL 
mdb__parse____Unify____format_option_0_0_10001(
#line 457 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_1,
#line 459 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_2);

#line 462 "mdb.parse.c"
static void MR_CALL 
mdb__parse____Compare____format_option_0_0_10001(
#line 465 "mdb.parse.c"
  MR_Box * mdb__parse__wrapper_arg_1,
#line 467 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_2,
#line 469 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_3);

#line 472 "mdb.parse.c"
static MR_bool MR_CALL 
mdb__parse____Unify____format_param_cmd_0_0_10001(
#line 475 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_1,
#line 477 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_2);

#line 480 "mdb.parse.c"
static void MR_CALL 
mdb__parse____Compare____format_param_cmd_0_0_10001(
#line 483 "mdb.parse.c"
  MR_Box * mdb__parse__wrapper_arg_1,
#line 485 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_2,
#line 487 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_3);

#line 490 "mdb.parse.c"
static MR_bool MR_CALL 
mdb__parse____Unify____path_0_0_10001(
#line 493 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_1,
#line 495 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_2);

#line 498 "mdb.parse.c"
static void MR_CALL 
mdb__parse____Compare____path_0_0_10001(
#line 501 "mdb.parse.c"
  MR_Box * mdb__parse__wrapper_arg_1,
#line 503 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_2,
#line 505 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_3);

#line 508 "mdb.parse.c"
static MR_bool MR_CALL 
mdb__parse____Unify____setting_option_0_0_10001(
#line 511 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_1,
#line 513 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_2);

#line 516 "mdb.parse.c"
static void MR_CALL 
mdb__parse____Compare____setting_option_0_0_10001(
#line 519 "mdb.parse.c"
  MR_Box * mdb__parse__wrapper_arg_1,
#line 521 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_2,
#line 523 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_3);

#line 526 "mdb.parse.c"
static MR_bool MR_CALL 
mdb__parse____Unify____token_0_0_10001(
#line 529 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_1,
#line 531 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_2);

#line 534 "mdb.parse.c"
static void MR_CALL 
mdb__parse____Compare____token_0_0_10001(
#line 537 "mdb.parse.c"
  MR_Box * mdb__parse__wrapper_arg_1,
#line 539 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_2,
#line 541 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_3);

#line 201 "parse.m"
static void MR_CALL 
mdb__parse____Compare____token_0_0(
#line 201 "parse.m"
  MR_Word * mdb__parse__HeadVar__1_1,
#line 201 "parse.m"
  MR_Word mdb__parse__HeadVar__2_2,
#line 201 "parse.m"
  MR_Word mdb__parse__HeadVar__3_3);

#line 201 "parse.m"
static MR_bool MR_CALL 
mdb__parse____Unify____token_0_0(
#line 201 "parse.m"
  MR_Word mdb__parse__HeadVar__1_1,
#line 201 "parse.m"
  MR_Word mdb__parse__HeadVar__2_2);

#line 754 "parse.m"
static void MR_CALL 
mdb__parse__format_param_cmd_option_defaults_2_p_0(
#line 754 "parse.m"
  MR_Word * mdb__parse__HeadVar__1_1,
#line 754 "parse.m"
  MR_Word * mdb__parse__HeadVar__2_2,
#line 754 "parse.m"
  MR_Cont mdb__parse__cont,
#line 754 "parse.m"
  void * mdb__parse__cont_env_ptr);

#line 743 "parse.m"
static MR_bool MR_CALL 
mdb__parse__long_format_param_cmd_option_2_p_0(
#line 743 "parse.m"
  MR_String mdb__parse__HeadVar__1_1,
#line 743 "parse.m"
  MR_Word * mdb__parse__HeadVar__2_2);

#line 732 "parse.m"
static MR_bool MR_CALL 
mdb__parse__short_format_param_cmd_option_2_p_0(
#line 732 "parse.m"
  MR_Char mdb__parse__HeadVar__1_1,
#line 732 "parse.m"
  MR_Word * mdb__parse__HeadVar__2_2);

#line 719 "parse.m"
static void MR_CALL 
mdb__parse__format_cmd_option_defaults_2_p_0(
#line 719 "parse.m"
  MR_Word * mdb__parse__HeadVar__1_1,
#line 719 "parse.m"
  MR_Word * mdb__parse__HeadVar__2_2,
#line 719 "parse.m"
  MR_Cont mdb__parse__cont,
#line 719 "parse.m"
  void * mdb__parse__cont_env_ptr);

#line 713 "parse.m"
static MR_bool MR_CALL 
mdb__parse__long_format_cmd_option_2_p_0(
#line 713 "parse.m"
  MR_String mdb__parse__HeadVar__1_1,
#line 713 "parse.m"
  MR_Word * mdb__parse__HeadVar__2_2);

#line 707 "parse.m"
static MR_bool MR_CALL 
mdb__parse__short_format_cmd_option_2_p_0(
#line 707 "parse.m"
  MR_Char mdb__parse__HeadVar__1_1,
#line 707 "parse.m"
  MR_Word * mdb__parse__HeadVar__2_2);

#line 698 "parse.m"
static void MR_CALL 
mdb__parse__format_option_defaults_2_p_0(
#line 698 "parse.m"
  MR_Word * mdb__parse__HeadVar__1_1,
#line 698 "parse.m"
  MR_Word * mdb__parse__HeadVar__2_2,
#line 698 "parse.m"
  MR_Cont mdb__parse__cont,
#line 698 "parse.m"
  void * mdb__parse__cont_env_ptr);

#line 691 "parse.m"
static MR_bool MR_CALL 
mdb__parse__long_format_option_2_p_0(
#line 691 "parse.m"
  MR_String mdb__parse__HeadVar__1_1,
#line 691 "parse.m"
  MR_Word * mdb__parse__HeadVar__2_2);

#line 684 "parse.m"
static MR_bool MR_CALL 
mdb__parse__short_format_option_2_p_0(
#line 684 "parse.m"
  MR_Char mdb__parse__HeadVar__1_1,
#line 684 "parse.m"
  MR_Word * mdb__parse__HeadVar__2_2);

#line 646 "parse.m"
static MR_bool MR_CALL 
mdb__parse__parse_format_2_p_0(
#line 646 "parse.m"
  MR_Word mdb__parse__HeadVar__1_1,
#line 646 "parse.m"
  MR_Word * mdb__parse__Setting_4);

#line 619 "parse.m"
static MR_bool MR_CALL 
mdb__parse__parse_up_down_dirs_2_p_0(
#line 619 "parse.m"
  MR_Word mdb__parse__HeadVar__1_1,
#line 619 "parse.m"
  MR_Word * mdb__parse__HeadVar__2_2);

#line 608 "parse.m"
static MR_bool MR_CALL 
mdb__parse__parse_path_2_p_0(
#line 608 "parse.m"
  MR_Word mdb__parse__HeadVar__1_1,
#line 608 "parse.m"
  MR_Word * mdb__parse__Path_5);

#line 597 "parse.m"
static void MR_CALL 
mdb__parse__param_cmd_to_setting_3_p_0(
#line 597 "parse.m"
  MR_Word mdb__parse__HeadVar__1_1,
#line 597 "parse.m"
  MR_Integer mdb__parse__N_2,
#line 597 "parse.m"
  MR_Word * mdb__parse__HeadVar__3_3);

#line 567 "parse.m"
static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_15(
#line 567 "parse.m"
  void * mdb__parse__env_ptr_arg);

#line 567 "parse.m"
static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_16(
#line 567 "parse.m"
  MR_Box mdb__parse__closure_arg,
#line 567 "parse.m"
  MR_Box * mdb__parse__wrapper_arg_1,
#line 567 "parse.m"
  MR_Box * mdb__parse__wrapper_arg_2,
#line 567 "parse.m"
  MR_Cont mdb__parse__cont,
#line 567 "parse.m"
  void * mdb__parse__cont_env_ptr);

#line 567 "parse.m"
static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_14(
#line 567 "parse.m"
  MR_Box mdb__parse__closure_arg,
#line 567 "parse.m"
  MR_Box mdb__parse__wrapper_arg_1,
#line 567 "parse.m"
  MR_Box * mdb__parse__wrapper_arg_2);

#line 566 "parse.m"
static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_13(
#line 566 "parse.m"
  MR_Box mdb__parse__closure_arg,
#line 566 "parse.m"
  MR_Box mdb__parse__wrapper_arg_1,
#line 566 "parse.m"
  MR_Box * mdb__parse__wrapper_arg_2);

#line 553 "parse.m"
static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_11(
#line 553 "parse.m"
  void * mdb__parse__env_ptr_arg);

#line 553 "parse.m"
static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_12(
#line 553 "parse.m"
  MR_Box mdb__parse__closure_arg,
#line 553 "parse.m"
  MR_Box * mdb__parse__wrapper_arg_1,
#line 553 "parse.m"
  MR_Box * mdb__parse__wrapper_arg_2,
#line 553 "parse.m"
  MR_Cont mdb__parse__cont,
#line 553 "parse.m"
  void * mdb__parse__cont_env_ptr);

#line 552 "parse.m"
static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_10(
#line 552 "parse.m"
  MR_Box mdb__parse__closure_arg,
#line 552 "parse.m"
  MR_Box mdb__parse__wrapper_arg_1,
#line 552 "parse.m"
  MR_Box * mdb__parse__wrapper_arg_2);

#line 551 "parse.m"
static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_9(
#line 551 "parse.m"
  MR_Box mdb__parse__closure_arg,
#line 551 "parse.m"
  MR_Box mdb__parse__wrapper_arg_1,
#line 551 "parse.m"
  MR_Box * mdb__parse__wrapper_arg_2);

#line 522 "parse.m"
static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_7(
#line 522 "parse.m"
  void * mdb__parse__env_ptr_arg);

#line 522 "parse.m"
static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_8(
#line 522 "parse.m"
  MR_Box mdb__parse__closure_arg,
#line 522 "parse.m"
  MR_Box * mdb__parse__wrapper_arg_1,
#line 522 "parse.m"
  MR_Box * mdb__parse__wrapper_arg_2,
#line 522 "parse.m"
  MR_Cont mdb__parse__cont,
#line 522 "parse.m"
  void * mdb__parse__cont_env_ptr);

#line 522 "parse.m"
static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_6(
#line 522 "parse.m"
  MR_Box mdb__parse__closure_arg,
#line 522 "parse.m"
  MR_Box mdb__parse__wrapper_arg_1,
#line 522 "parse.m"
  MR_Box * mdb__parse__wrapper_arg_2);

#line 521 "parse.m"
static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_5(
#line 521 "parse.m"
  MR_Box mdb__parse__closure_arg,
#line 521 "parse.m"
  MR_Box mdb__parse__wrapper_arg_1,
#line 521 "parse.m"
  MR_Box * mdb__parse__wrapper_arg_2);

#line 390 "parse.m"
static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_3(
#line 390 "parse.m"
  void * mdb__parse__env_ptr_arg);

#line 390 "parse.m"
static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_4(
#line 390 "parse.m"
  MR_Box mdb__parse__closure_arg,
#line 390 "parse.m"
  MR_Box * mdb__parse__wrapper_arg_1,
#line 390 "parse.m"
  MR_Box * mdb__parse__wrapper_arg_2,
#line 390 "parse.m"
  MR_Cont mdb__parse__cont,
#line 390 "parse.m"
  void * mdb__parse__cont_env_ptr);

#line 390 "parse.m"
static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_2(
#line 390 "parse.m"
  MR_Box mdb__parse__closure_arg,
#line 390 "parse.m"
  MR_Box mdb__parse__wrapper_arg_1,
#line 390 "parse.m"
  MR_Box * mdb__parse__wrapper_arg_2);

#line 389 "parse.m"
static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_1(
#line 389 "parse.m"
  MR_Box mdb__parse__closure_arg,
#line 389 "parse.m"
  MR_Box mdb__parse__wrapper_arg_1,
#line 389 "parse.m"
  MR_Box * mdb__parse__wrapper_arg_2);

#line 368 "parse.m"
static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0(
#line 368 "parse.m"
  MR_Word mdb__parse__CmdToken_5,
#line 368 "parse.m"
  MR_Word mdb__parse__ArgTokens_6,
#line 368 "parse.m"
  MR_Word mdb__parse__MaybeArgWords_7,
#line 368 "parse.m"
  MR_Word * mdb__parse__Command_8);

#line 334 "parse.m"
static MR_bool MR_CALL 
mdb__parse__lexer_name_3_p_0_1(
#line 334 "parse.m"
  MR_Box mdb__parse__closure_arg,
#line 334 "parse.m"
  MR_Box mdb__parse__wrapper_arg_1);

#line 331 "parse.m"
static void MR_CALL 
mdb__parse__lexer_name_3_p_0(
#line 331 "parse.m"
  MR_Char mdb__parse__C_4,
#line 331 "parse.m"
  MR_Word mdb__parse__Cs_5,
#line 331 "parse.m"
  MR_Word * mdb__parse__Toks_6);

#line 323 "parse.m"
static void MR_CALL 
mdb__parse__digits_to_int_acc_3_p_0(
#line 323 "parse.m"
  MR_Integer mdb__parse__Acc_1,
#line 323 "parse.m"
  MR_Word mdb__parse__HeadVar__2_2,
#line 323 "parse.m"
  MR_Integer * mdb__parse__HeadVar__3_3);

#line 318 "parse.m"
static MR_bool MR_CALL 
mdb__parse__lexer_num_3_p_0_1(
#line 318 "parse.m"
  MR_Box mdb__parse__closure_arg,
#line 318 "parse.m"
  MR_Box mdb__parse__wrapper_arg_1);

#line 315 "parse.m"
static void MR_CALL 
mdb__parse__lexer_num_3_p_0(
#line 315 "parse.m"
  MR_Integer mdb__parse__N_4,
#line 315 "parse.m"
  MR_Word mdb__parse__Cs_5,
#line 315 "parse.m"
  MR_Word * mdb__parse__Toks_6);

#line 286 "parse.m"
static void MR_CALL 
mdb__parse__lexer_dots_2_p_0(
#line 286 "parse.m"
  MR_Word mdb__parse__HeadVar__1_1,
#line 286 "parse.m"
  MR_Word * mdb__parse__HeadVar__2_2);

#line 254 "parse.m"
static void MR_CALL 
mdb__parse__lexer_word_chars_2_p_0(
#line 254 "parse.m"
  MR_Word mdb__parse__HeadVar__1_1,
#line 254 "parse.m"
  MR_Word * mdb__parse__HeadVar__2_2);

#line 240 "parse.m"
static void MR_CALL 
mdb__parse__lexer_words_2_p_0(
#line 240 "parse.m"
  MR_Word mdb__parse__HeadVar__1_1,
#line 240 "parse.m"
  MR_Word * mdb__parse__HeadVar__2_2);

#line 226 "parse.m"
static MR_bool MR_CALL 
mdb__parse__read_command_external_3_p_0_1(
#line 226 "parse.m"
  MR_Box mdb__parse__closure_arg,
#line 226 "parse.m"
  MR_Box mdb__parse__wrapper_arg_1);

#line 215 "parse.m"
static MR_bool MR_CALL 
mdb__parse__read_command_4_p_0_1(
#line 215 "parse.m"
  MR_Box mdb__parse__closure_arg,
#line 215 "parse.m"
  MR_Box mdb__parse__wrapper_arg_1);


static /* final */ const MR_Box mdb__parse_scalar_common_1[10][2];

static /* final */ const MR_Box mdb__parse_scalar_common_2[1][4];

static /* final */ const MR_Box mdb__parse_scalar_common_3[20][3];

static /* final */ const MR_Box mdb__parse_scalar_common_4[6][5];

static /* final */ const MR_Box mdb__parse_scalar_common_8[1][1];


#line 463 "parse.m"
/* sealed */ struct mdb__parse__vector_common_type_5_0_s {
#line 463 "parse.m"
  const MR_String mdb__parse__vector_common_type_5_0__vct_5_f_0;
#line 463 "parse.m"
  const MR_Word mdb__parse__vector_common_type_5_0__vct_5_f_1;
#line 463 "parse.m"
};

static /* final */ const struct mdb__parse__vector_common_type_5_0_s mdb__parse_vector_common_5[4];

#line 534 "parse.m"
/* sealed */ struct mdb__parse__vector_common_type_6_0_s {
#line 534 "parse.m"
  const MR_String mdb__parse__vector_common_type_6_0__vct_6_f_0;
#line 534 "parse.m"
  const MR_Word mdb__parse__vector_common_type_6_0__vct_6_f_1;
#line 534 "parse.m"
};

static /* final */ const struct mdb__parse__vector_common_type_6_0_s mdb__parse_vector_common_6[4];

#line 693 "parse.m"
/* sealed */ struct mdb__parse__vector_common_type_7_0_s {
#line 693 "parse.m"
  const MR_String mdb__parse__vector_common_type_7_0__vct_7_f_0;
#line 693 "parse.m"
  const MR_Word mdb__parse__vector_common_type_7_0__vct_7_f_1;
#line 693 "parse.m"
};

static /* final */ const struct mdb__parse__vector_common_type_7_0_s mdb__parse_vector_common_7[4];

#line 700 "parse.m"
/* sealed */ struct mdb__parse__vector_common_type_9_0_s {
#line 700 "parse.m"
  const MR_Word mdb__parse__vector_common_type_9_0__vct_9_f_0;
#line 700 "parse.m"
  const MR_Word mdb__parse__vector_common_type_9_0__vct_9_f_1;
#line 700 "parse.m"
};

static /* final */ const struct mdb__parse__vector_common_type_9_0_s mdb__parse_vector_common_9[4];

#line 722 "parse.m"
/* sealed */ struct mdb__parse__vector_common_type_10_0_s {
#line 722 "parse.m"
  const MR_Word mdb__parse__vector_common_type_10_0__vct_10_f_0;
#line 722 "parse.m"
  const MR_Word mdb__parse__vector_common_type_10_0__vct_10_f_1;
#line 722 "parse.m"
};

static /* final */ const struct mdb__parse__vector_common_type_10_0_s mdb__parse_vector_common_10[14];

#line 746 "parse.m"
/* sealed */ struct mdb__parse__vector_common_type_11_0_s {
#line 746 "parse.m"
  const MR_String mdb__parse__vector_common_type_11_0__vct_11_f_0;
#line 746 "parse.m"
  const MR_Word mdb__parse__vector_common_type_11_0__vct_11_f_1;
#line 746 "parse.m"
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
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
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
    ((MR_Box) (mdb__parse__read_command_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_2[0])),
    ((MR_Box) (mdb__parse__read_command_external_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_2[0])),
    ((MR_Box) (mdb__parse__lexer_num_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_2[0])),
    ((MR_Box) (mdb__parse__lexer_name_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[0])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[1])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[2])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_3[4])),
    ((MR_Box) (&mdb__parse_scalar_common_3[5])),
    ((MR_Box) (&mdb__parse_scalar_common_3[6]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[3])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[4])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[5])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_3[8])),
    ((MR_Box) (&mdb__parse_scalar_common_3[9])),
    ((MR_Box) (&mdb__parse_scalar_common_3[10]))
  },
  /* row 12 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[3])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[4])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[5])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_12)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_3[12])),
    ((MR_Box) (&mdb__parse_scalar_common_3[13])),
    ((MR_Box) (&mdb__parse_scalar_common_3[14]))
  },
  /* row 16 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[3])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_13)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[4])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_14)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_4[5])),
    ((MR_Box) (mdb__parse__parse_cmd_4_p_0_16)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&mdb__parse_scalar_common_3[16])),
    ((MR_Box) (&mdb__parse_scalar_common_3[17])),
    ((MR_Box) (&mdb__parse_scalar_common_3[18]))
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



#line 1475 "mdb.parse.c"
static const MR_FA_TypeInfo_Struct1 mdb__parse__getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_format_option_0 = {
  &mercury__getopt__getopt__type_ctor_info_maybe_option_table_1,
  {
    (MR_TypeInfo) &mdb__parse__mdb__parse__type_ctor_info_format_option_0
  }
};

#line 1483 "mdb.parse.c"
static const MR_FA_TypeInfo_Struct1 mdb__parse__maybe__ti_maybe_1getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_format_option_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__parse__getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_format_option_0
  }
};

#line 1491 "mdb.parse.c"
static const MR_FA_TypeInfo_Struct1 mdb__parse__maybe__ti_maybe_1mdb__parse__type_ctor_info_path_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__parse__mdb__parse__type_ctor_info_path_0
  }
};

#line 1499 "mdb.parse.c"
static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_0[2] = {
  (MR_PseudoTypeInfo) &mdb__parse__maybe__ti_maybe_1getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_format_option_0,
  (MR_PseudoTypeInfo) &mdb__parse__maybe__ti_maybe_1mdb__parse__type_ctor_info_path_0
};

#line 1505 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_0 = {
  (MR_String) "cmd_print",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__parse__mdb__parse__field_types_command_0_0,
  NULL,
  NULL,
  NULL
};

#line 1520 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_1 = {
  (MR_String) "cmd_display",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1535 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_2 = {
  (MR_String) "cmd_write",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1550 "mdb.parse.c"
static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_3[1] = {
  (MR_PseudoTypeInfo) &mdb__parse__maybe__ti_maybe_1mdb__parse__type_ctor_info_path_0
};

#line 1555 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_3 = {
  (MR_String) "cmd_memory_addr",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 3,
  mdb__parse__mdb__parse__field_types_command_0_3,
  NULL,
  NULL,
  NULL
};

#line 1570 "mdb.parse.c"
static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_4[1] = {
  (MR_PseudoTypeInfo) &mdb__parse__mdb__parse__type_ctor_info_path_0
};

#line 1575 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_4 = {
  (MR_String) "cmd_cd_path",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 4,
  mdb__parse__mdb__parse__field_types_command_0_4,
  NULL,
  NULL,
  NULL
};

#line 1590 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_5 = {
  (MR_String) "cmd_cd_no_path",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1605 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_6 = {
  (MR_String) "cmd_pwd",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 6,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1620 "mdb.parse.c"
static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_7[3] = {
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_how_track_subterm_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_should_assert_invalid_0,
  (MR_PseudoTypeInfo) &mdb__parse__maybe__ti_maybe_1mdb__parse__type_ctor_info_path_0
};

#line 1627 "mdb.parse.c"
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

#line 1646 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_7 = {
  (MR_String) "cmd_track",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 7,
  mdb__parse__mdb__parse__field_types_command_0_7,
  NULL,
  mdb__parse__mdb__parse__field_locns_command_0_7,
  NULL
};

#line 1661 "mdb.parse.c"
static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_8[1] = {
  (MR_PseudoTypeInfo) &mdb__parse__mdb__parse__type_ctor_info_path_0
};

#line 1666 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_8 = {
  (MR_String) "cmd_mode_query",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 8,
  mdb__parse__mdb__parse__field_types_command_0_8,
  NULL,
  NULL,
  NULL
};

#line 1681 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_9 = {
  (MR_String) "cmd_mode_query_no_path",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 9,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1696 "mdb.parse.c"
static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_command_0_10[1] = {
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_param_cmd_0
};

#line 1701 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_10 = {
  (MR_String) "cmd_param",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 10,
  mdb__parse__mdb__parse__field_types_command_0_10,
  NULL,
  NULL,
  NULL
};

#line 1716 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_11 = {
  (MR_String) "cmd_help",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 11,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1731 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_12 = {
  (MR_String) "cmd_quit",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 12,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1746 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_13 = {
  (MR_String) "cmd_empty",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 13,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1761 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_command_0_14 = {
  (MR_String) "cmd_unknown",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 14,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1776 "mdb.parse.c"
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

#line 1789 "mdb.parse.c"
static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_command_0_1[1] = {
  &mdb__parse__mdb__parse__du_functor_desc_command_0_0
};

#line 1794 "mdb.parse.c"
static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_command_0_2[1] = {
  &mdb__parse__mdb__parse__du_functor_desc_command_0_3
};

#line 1799 "mdb.parse.c"
static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_command_0_3[4] = {
  &mdb__parse__mdb__parse__du_functor_desc_command_0_4,
  &mdb__parse__mdb__parse__du_functor_desc_command_0_7,
  &mdb__parse__mdb__parse__du_functor_desc_command_0_8,
  &mdb__parse__mdb__parse__du_functor_desc_command_0_10
};

#line 1807 "mdb.parse.c"
static const MR_DuPtagLayout mdb__parse__mdb__parse__du_ptag_ordered_command_0[4] = {
  {
    (MR_Integer) 9,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__parse__mdb__parse__du_stag_ordered_command_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__parse__mdb__parse__du_stag_ordered_command_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__parse__mdb__parse__du_stag_ordered_command_0_2
  },
  {
    (MR_Integer) 4,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mdb__parse__mdb__parse__du_stag_ordered_command_0_3
  }
};

#line 1831 "mdb.parse.c"
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

#line 1850 "mdb.parse.c"
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

#line 1869 "mdb.parse.c"
const MR_TypeCtorInfo_Struct mdb__parse__mdb__parse__type_ctor_info_command_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 1886 "mdb.parse.c"
static const MR_Integer mdb__parse__mdb__parse__functor_number_map_external_request_0[1] = {
  (MR_Integer) 0
};

#line 1891 "mdb.parse.c"
static const MR_NotagFunctorDesc mdb__parse__mdb__parse__notag_functor_desc_external_request_0 = {
  (MR_String) "external_request",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 1898 "mdb.parse.c"
const MR_TypeCtorInfo_Struct mdb__parse__mdb__parse__type_ctor_info_external_request_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
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

#line 1915 "mdb.parse.c"
static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_option_0_0 = {
  (MR_String) "flat",
  (MR_Integer) 0
};

#line 1921 "mdb.parse.c"
static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_option_0_1 = {
  (MR_String) "raw_pretty",
  (MR_Integer) 1
};

#line 1927 "mdb.parse.c"
static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_option_0_2 = {
  (MR_String) "verbose",
  (MR_Integer) 2
};

#line 1933 "mdb.parse.c"
static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_option_0_3 = {
  (MR_String) "pretty",
  (MR_Integer) 3
};

#line 1939 "mdb.parse.c"
static const MR_EnumFunctorDescPtr mdb__parse__mdb__parse__enum_value_ordered_format_option_0[4] = {
  &mdb__parse__mdb__parse__enum_functor_desc_format_option_0_0,
  &mdb__parse__mdb__parse__enum_functor_desc_format_option_0_1,
  &mdb__parse__mdb__parse__enum_functor_desc_format_option_0_2,
  &mdb__parse__mdb__parse__enum_functor_desc_format_option_0_3
};

#line 1947 "mdb.parse.c"
static const MR_EnumFunctorDescPtr mdb__parse__mdb__parse__enum_name_ordered_format_option_0[4] = {
  &mdb__parse__mdb__parse__enum_functor_desc_format_option_0_0,
  &mdb__parse__mdb__parse__enum_functor_desc_format_option_0_3,
  &mdb__parse__mdb__parse__enum_functor_desc_format_option_0_1,
  &mdb__parse__mdb__parse__enum_functor_desc_format_option_0_2
};

#line 1955 "mdb.parse.c"
static const MR_Integer mdb__parse__mdb__parse__functor_number_map_format_option_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 1963 "mdb.parse.c"
const MR_TypeCtorInfo_Struct mdb__parse__mdb__parse__type_ctor_info_format_option_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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

#line 1980 "mdb.parse.c"
static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_0 = {
  (MR_String) "param_depth",
  (MR_Integer) 0
};

#line 1986 "mdb.parse.c"
static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_1 = {
  (MR_String) "param_size",
  (MR_Integer) 1
};

#line 1992 "mdb.parse.c"
static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_2 = {
  (MR_String) "param_width",
  (MR_Integer) 2
};

#line 1998 "mdb.parse.c"
static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_3 = {
  (MR_String) "param_lines",
  (MR_Integer) 3
};

#line 2004 "mdb.parse.c"
static const MR_EnumFunctorDescPtr mdb__parse__mdb__parse__enum_value_ordered_format_param_cmd_0[4] = {
  &mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_0,
  &mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_1,
  &mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_2,
  &mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_3
};

#line 2012 "mdb.parse.c"
static const MR_EnumFunctorDescPtr mdb__parse__mdb__parse__enum_name_ordered_format_param_cmd_0[4] = {
  &mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_0,
  &mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_3,
  &mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_1,
  &mdb__parse__mdb__parse__enum_functor_desc_format_param_cmd_0_2
};

#line 2020 "mdb.parse.c"
static const MR_Integer mdb__parse__mdb__parse__functor_number_map_format_param_cmd_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 2028 "mdb.parse.c"
const MR_TypeCtorInfo_Struct mdb__parse__mdb__parse__type_ctor_info_format_param_cmd_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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

#line 2045 "mdb.parse.c"
static const MR_FA_TypeInfo_Struct1 mdb__parse__list__ti_list_1mdb__browser_info__type_ctor_info_up_down_dir_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0
  }
};

#line 2053 "mdb.parse.c"
static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_path_0_0[1] = {
  (MR_PseudoTypeInfo) &mdb__parse__list__ti_list_1mdb__browser_info__type_ctor_info_up_down_dir_0
};

#line 2058 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_path_0_0 = {
  (MR_String) "root_rel",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__parse__mdb__parse__field_types_path_0_0,
  NULL,
  NULL,
  NULL
};

#line 2073 "mdb.parse.c"
static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_path_0_1[1] = {
  (MR_PseudoTypeInfo) &mdb__parse__list__ti_list_1mdb__browser_info__type_ctor_info_up_down_dir_0
};

#line 2078 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_path_0_1 = {
  (MR_String) "dot_rel",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__parse__mdb__parse__field_types_path_0_1,
  NULL,
  NULL,
  NULL
};

#line 2093 "mdb.parse.c"
static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_path_0_0[1] = {
  &mdb__parse__mdb__parse__du_functor_desc_path_0_0
};

#line 2098 "mdb.parse.c"
static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_path_0_1[1] = {
  &mdb__parse__mdb__parse__du_functor_desc_path_0_1
};

#line 2103 "mdb.parse.c"
static const MR_DuPtagLayout mdb__parse__mdb__parse__du_ptag_ordered_path_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__parse__mdb__parse__du_stag_ordered_path_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__parse__mdb__parse__du_stag_ordered_path_0_1
  }
};

#line 2117 "mdb.parse.c"
static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_name_ordered_path_0[2] = {
  &mdb__parse__mdb__parse__du_functor_desc_path_0_1,
  &mdb__parse__mdb__parse__du_functor_desc_path_0_0
};

#line 2123 "mdb.parse.c"
static const MR_Integer mdb__parse__mdb__parse__functor_number_map_path_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2129 "mdb.parse.c"
const MR_TypeCtorInfo_Struct mdb__parse__mdb__parse__type_ctor_info_path_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 2146 "mdb.parse.c"
static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_0 = {
  (MR_String) "set_print",
  (MR_Integer) 0
};

#line 2152 "mdb.parse.c"
static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_1 = {
  (MR_String) "set_browse",
  (MR_Integer) 1
};

#line 2158 "mdb.parse.c"
static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_2 = {
  (MR_String) "set_print_all",
  (MR_Integer) 2
};

#line 2164 "mdb.parse.c"
static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_3 = {
  (MR_String) "set_flat",
  (MR_Integer) 3
};

#line 2170 "mdb.parse.c"
static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_4 = {
  (MR_String) "set_raw_pretty",
  (MR_Integer) 4
};

#line 2176 "mdb.parse.c"
static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_5 = {
  (MR_String) "set_verbose",
  (MR_Integer) 5
};

#line 2182 "mdb.parse.c"
static const MR_EnumFunctorDesc mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_6 = {
  (MR_String) "set_pretty",
  (MR_Integer) 6
};

#line 2188 "mdb.parse.c"
static const MR_EnumFunctorDescPtr mdb__parse__mdb__parse__enum_value_ordered_setting_option_0[7] = {
  &mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_0,
  &mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_1,
  &mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_2,
  &mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_3,
  &mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_4,
  &mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_5,
  &mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_6
};

#line 2199 "mdb.parse.c"
static const MR_EnumFunctorDescPtr mdb__parse__mdb__parse__enum_name_ordered_setting_option_0[7] = {
  &mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_1,
  &mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_3,
  &mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_6,
  &mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_0,
  &mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_2,
  &mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_4,
  &mdb__parse__mdb__parse__enum_functor_desc_setting_option_0_5
};

#line 2210 "mdb.parse.c"
static const MR_Integer mdb__parse__mdb__parse__functor_number_map_setting_option_0[7] = {
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 2
};

#line 2221 "mdb.parse.c"
const MR_TypeCtorInfo_Struct mdb__parse__mdb__parse__type_ctor_info_setting_option_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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

#line 2238 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_0 = {
  (MR_String) "token_dot",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2253 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_1 = {
  (MR_String) "token_dot_dot",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2268 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_2 = {
  (MR_String) "token_slash",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2283 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_3 = {
  (MR_String) "token_question",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2298 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_4 = {
  (MR_String) "token_up",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2313 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_5 = {
  (MR_String) "token_lessthan",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2328 "mdb.parse.c"
static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_token_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2333 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_6 = {
  (MR_String) "token_num",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 6,
  mdb__parse__mdb__parse__field_types_token_0_6,
  NULL,
  NULL,
  NULL
};

#line 2348 "mdb.parse.c"
static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_token_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2353 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_7 = {
  (MR_String) "token_name",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 7,
  mdb__parse__mdb__parse__field_types_token_0_7,
  NULL,
  NULL,
  NULL
};

#line 2368 "mdb.parse.c"
static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_token_0_8[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2373 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_8 = {
  (MR_String) "token_arg",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 8,
  mdb__parse__mdb__parse__field_types_token_0_8,
  NULL,
  NULL,
  NULL
};

#line 2388 "mdb.parse.c"
static const MR_PseudoTypeInfo mdb__parse__mdb__parse__field_types_token_0_9[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

#line 2393 "mdb.parse.c"
static const MR_DuFunctorDesc mdb__parse__mdb__parse__du_functor_desc_token_0_9 = {
  (MR_String) "token_unknown",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 9,
  mdb__parse__mdb__parse__field_types_token_0_9,
  NULL,
  NULL,
  NULL
};

#line 2408 "mdb.parse.c"
static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_token_0_0[6] = {
  &mdb__parse__mdb__parse__du_functor_desc_token_0_0,
  &mdb__parse__mdb__parse__du_functor_desc_token_0_1,
  &mdb__parse__mdb__parse__du_functor_desc_token_0_2,
  &mdb__parse__mdb__parse__du_functor_desc_token_0_3,
  &mdb__parse__mdb__parse__du_functor_desc_token_0_4,
  &mdb__parse__mdb__parse__du_functor_desc_token_0_5
};

#line 2418 "mdb.parse.c"
static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_token_0_1[1] = {
  &mdb__parse__mdb__parse__du_functor_desc_token_0_6
};

#line 2423 "mdb.parse.c"
static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_token_0_2[1] = {
  &mdb__parse__mdb__parse__du_functor_desc_token_0_7
};

#line 2428 "mdb.parse.c"
static const MR_DuFunctorDescPtr mdb__parse__mdb__parse__du_stag_ordered_token_0_3[2] = {
  &mdb__parse__mdb__parse__du_functor_desc_token_0_8,
  &mdb__parse__mdb__parse__du_functor_desc_token_0_9
};

#line 2434 "mdb.parse.c"
static const MR_DuPtagLayout mdb__parse__mdb__parse__du_ptag_ordered_token_0[4] = {
  {
    (MR_Integer) 6,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__parse__mdb__parse__du_stag_ordered_token_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__parse__mdb__parse__du_stag_ordered_token_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__parse__mdb__parse__du_stag_ordered_token_0_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mdb__parse__mdb__parse__du_stag_ordered_token_0_3
  }
};

#line 2458 "mdb.parse.c"
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

#line 2472 "mdb.parse.c"
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

#line 2486 "mdb.parse.c"
const MR_TypeCtorInfo_Struct mdb__parse__mdb__parse__type_ctor_info_token_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 2503 "mdb.parse.c"
static MR_bool MR_CALL 
mdb__parse____Unify____command_0_0_10001(
#line 2506 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_1,
#line 2508 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_2)
#line 2510 "mdb.parse.c"
{
#line 2512 "mdb.parse.c"
  {
#line 2514 "mdb.parse.c"
    MR_bool mdb__parse__succeeded;

#line 2517 "mdb.parse.c"
    {
#line 2519 "mdb.parse.c"
      mdb__parse__succeeded = mdb__parse____Unify____command_0_0(((MR_Word) mdb__parse__wrapper_arg_1), ((MR_Word) mdb__parse__wrapper_arg_2));
    }
#line 2522 "mdb.parse.c"
    return mdb__parse__succeeded;
#line 2524 "mdb.parse.c"
  }
#line 2526 "mdb.parse.c"
}

#line 2529 "mdb.parse.c"
static void MR_CALL 
mdb__parse____Compare____command_0_0_10001(
#line 2532 "mdb.parse.c"
  MR_Box * mdb__parse__wrapper_arg_1,
#line 2534 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_2,
#line 2536 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_3)
#line 2538 "mdb.parse.c"
{
#line 2540 "mdb.parse.c"
  {
#line 2542 "mdb.parse.c"
    MR_Word mdb__parse__conv0_HeadVar__1_1;

#line 2545 "mdb.parse.c"
    {
#line 2547 "mdb.parse.c"
      mdb__parse____Compare____command_0_0(&mdb__parse__conv0_HeadVar__1_1, ((MR_Word) mdb__parse__wrapper_arg_2), ((MR_Word) mdb__parse__wrapper_arg_3));
    }
#line 2550 "mdb.parse.c"
    *mdb__parse__wrapper_arg_1 = ((MR_Box) (mdb__parse__conv0_HeadVar__1_1));
#line 2552 "mdb.parse.c"
  }
#line 2554 "mdb.parse.c"
}

#line 2557 "mdb.parse.c"
static MR_bool MR_CALL 
mdb__parse____Unify____external_request_0_0_10001(
#line 2560 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_1,
#line 2562 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_2)
#line 2564 "mdb.parse.c"
{
#line 2566 "mdb.parse.c"
  {
#line 2568 "mdb.parse.c"
    MR_bool mdb__parse__succeeded;

#line 2571 "mdb.parse.c"
    {
#line 2573 "mdb.parse.c"
      mdb__parse__succeeded = mdb__parse____Unify____external_request_0_0(((MR_Word) mdb__parse__wrapper_arg_1), ((MR_Word) mdb__parse__wrapper_arg_2));
    }
#line 2576 "mdb.parse.c"
    return mdb__parse__succeeded;
#line 2578 "mdb.parse.c"
  }
#line 2580 "mdb.parse.c"
}

#line 2583 "mdb.parse.c"
static void MR_CALL 
mdb__parse____Compare____external_request_0_0_10001(
#line 2586 "mdb.parse.c"
  MR_Box * mdb__parse__wrapper_arg_1,
#line 2588 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_2,
#line 2590 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_3)
#line 2592 "mdb.parse.c"
{
#line 2594 "mdb.parse.c"
  {
#line 2596 "mdb.parse.c"
    MR_Word mdb__parse__conv0_HeadVar__1_1;

#line 2599 "mdb.parse.c"
    {
#line 2601 "mdb.parse.c"
      mdb__parse____Compare____external_request_0_0(&mdb__parse__conv0_HeadVar__1_1, ((MR_Word) mdb__parse__wrapper_arg_2), ((MR_Word) mdb__parse__wrapper_arg_3));
    }
#line 2604 "mdb.parse.c"
    *mdb__parse__wrapper_arg_1 = ((MR_Box) (mdb__parse__conv0_HeadVar__1_1));
#line 2606 "mdb.parse.c"
  }
#line 2608 "mdb.parse.c"
}

#line 2611 "mdb.parse.c"
static MR_bool MR_CALL 
mdb__parse____Unify____format_option_0_0_10001(
#line 2614 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_1,
#line 2616 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_2)
#line 2618 "mdb.parse.c"
{
#line 2620 "mdb.parse.c"
  {
#line 2622 "mdb.parse.c"
    MR_bool mdb__parse__succeeded;

#line 2625 "mdb.parse.c"
    {
#line 2627 "mdb.parse.c"
      mdb__parse__succeeded = mdb__parse____Unify____format_option_0_0(((MR_Word) mdb__parse__wrapper_arg_1), ((MR_Word) mdb__parse__wrapper_arg_2));
    }
#line 2630 "mdb.parse.c"
    return mdb__parse__succeeded;
#line 2632 "mdb.parse.c"
  }
#line 2634 "mdb.parse.c"
}

#line 2637 "mdb.parse.c"
static void MR_CALL 
mdb__parse____Compare____format_option_0_0_10001(
#line 2640 "mdb.parse.c"
  MR_Box * mdb__parse__wrapper_arg_1,
#line 2642 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_2,
#line 2644 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_3)
#line 2646 "mdb.parse.c"
{
#line 2648 "mdb.parse.c"
  {
#line 2650 "mdb.parse.c"
    MR_Word mdb__parse__conv0_HeadVar__1_1;

#line 2653 "mdb.parse.c"
    {
#line 2655 "mdb.parse.c"
      mdb__parse____Compare____format_option_0_0(&mdb__parse__conv0_HeadVar__1_1, ((MR_Word) mdb__parse__wrapper_arg_2), ((MR_Word) mdb__parse__wrapper_arg_3));
    }
#line 2658 "mdb.parse.c"
    *mdb__parse__wrapper_arg_1 = ((MR_Box) (mdb__parse__conv0_HeadVar__1_1));
#line 2660 "mdb.parse.c"
  }
#line 2662 "mdb.parse.c"
}

#line 2665 "mdb.parse.c"
static MR_bool MR_CALL 
mdb__parse____Unify____format_param_cmd_0_0_10001(
#line 2668 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_1,
#line 2670 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_2)
#line 2672 "mdb.parse.c"
{
#line 2674 "mdb.parse.c"
  {
#line 2676 "mdb.parse.c"
    MR_bool mdb__parse__succeeded;

#line 2679 "mdb.parse.c"
    {
#line 2681 "mdb.parse.c"
      mdb__parse__succeeded = mdb__parse____Unify____format_param_cmd_0_0(((MR_Word) mdb__parse__wrapper_arg_1), ((MR_Word) mdb__parse__wrapper_arg_2));
    }
#line 2684 "mdb.parse.c"
    return mdb__parse__succeeded;
#line 2686 "mdb.parse.c"
  }
#line 2688 "mdb.parse.c"
}

#line 2691 "mdb.parse.c"
static void MR_CALL 
mdb__parse____Compare____format_param_cmd_0_0_10001(
#line 2694 "mdb.parse.c"
  MR_Box * mdb__parse__wrapper_arg_1,
#line 2696 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_2,
#line 2698 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_3)
#line 2700 "mdb.parse.c"
{
#line 2702 "mdb.parse.c"
  {
#line 2704 "mdb.parse.c"
    MR_Word mdb__parse__conv0_HeadVar__1_1;

#line 2707 "mdb.parse.c"
    {
#line 2709 "mdb.parse.c"
      mdb__parse____Compare____format_param_cmd_0_0(&mdb__parse__conv0_HeadVar__1_1, ((MR_Word) mdb__parse__wrapper_arg_2), ((MR_Word) mdb__parse__wrapper_arg_3));
    }
#line 2712 "mdb.parse.c"
    *mdb__parse__wrapper_arg_1 = ((MR_Box) (mdb__parse__conv0_HeadVar__1_1));
#line 2714 "mdb.parse.c"
  }
#line 2716 "mdb.parse.c"
}

#line 2719 "mdb.parse.c"
static MR_bool MR_CALL 
mdb__parse____Unify____path_0_0_10001(
#line 2722 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_1,
#line 2724 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_2)
#line 2726 "mdb.parse.c"
{
#line 2728 "mdb.parse.c"
  {
#line 2730 "mdb.parse.c"
    MR_bool mdb__parse__succeeded;

#line 2733 "mdb.parse.c"
    {
#line 2735 "mdb.parse.c"
      mdb__parse__succeeded = mdb__parse____Unify____path_0_0(((MR_Word) mdb__parse__wrapper_arg_1), ((MR_Word) mdb__parse__wrapper_arg_2));
    }
#line 2738 "mdb.parse.c"
    return mdb__parse__succeeded;
#line 2740 "mdb.parse.c"
  }
#line 2742 "mdb.parse.c"
}

#line 2745 "mdb.parse.c"
static void MR_CALL 
mdb__parse____Compare____path_0_0_10001(
#line 2748 "mdb.parse.c"
  MR_Box * mdb__parse__wrapper_arg_1,
#line 2750 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_2,
#line 2752 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_3)
#line 2754 "mdb.parse.c"
{
#line 2756 "mdb.parse.c"
  {
#line 2758 "mdb.parse.c"
    MR_Word mdb__parse__conv0_HeadVar__1_1;

#line 2761 "mdb.parse.c"
    {
#line 2763 "mdb.parse.c"
      mdb__parse____Compare____path_0_0(&mdb__parse__conv0_HeadVar__1_1, ((MR_Word) mdb__parse__wrapper_arg_2), ((MR_Word) mdb__parse__wrapper_arg_3));
    }
#line 2766 "mdb.parse.c"
    *mdb__parse__wrapper_arg_1 = ((MR_Box) (mdb__parse__conv0_HeadVar__1_1));
#line 2768 "mdb.parse.c"
  }
#line 2770 "mdb.parse.c"
}

#line 2773 "mdb.parse.c"
static MR_bool MR_CALL 
mdb__parse____Unify____setting_option_0_0_10001(
#line 2776 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_1,
#line 2778 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_2)
#line 2780 "mdb.parse.c"
{
#line 2782 "mdb.parse.c"
  {
#line 2784 "mdb.parse.c"
    MR_bool mdb__parse__succeeded;

#line 2787 "mdb.parse.c"
    {
#line 2789 "mdb.parse.c"
      mdb__parse__succeeded = mdb__parse____Unify____setting_option_0_0(((MR_Word) mdb__parse__wrapper_arg_1), ((MR_Word) mdb__parse__wrapper_arg_2));
    }
#line 2792 "mdb.parse.c"
    return mdb__parse__succeeded;
#line 2794 "mdb.parse.c"
  }
#line 2796 "mdb.parse.c"
}

#line 2799 "mdb.parse.c"
static void MR_CALL 
mdb__parse____Compare____setting_option_0_0_10001(
#line 2802 "mdb.parse.c"
  MR_Box * mdb__parse__wrapper_arg_1,
#line 2804 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_2,
#line 2806 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_3)
#line 2808 "mdb.parse.c"
{
#line 2810 "mdb.parse.c"
  {
#line 2812 "mdb.parse.c"
    MR_Word mdb__parse__conv0_HeadVar__1_1;

#line 2815 "mdb.parse.c"
    {
#line 2817 "mdb.parse.c"
      mdb__parse____Compare____setting_option_0_0(&mdb__parse__conv0_HeadVar__1_1, ((MR_Word) mdb__parse__wrapper_arg_2), ((MR_Word) mdb__parse__wrapper_arg_3));
    }
#line 2820 "mdb.parse.c"
    *mdb__parse__wrapper_arg_1 = ((MR_Box) (mdb__parse__conv0_HeadVar__1_1));
#line 2822 "mdb.parse.c"
  }
#line 2824 "mdb.parse.c"
}

#line 2827 "mdb.parse.c"
static MR_bool MR_CALL 
mdb__parse____Unify____token_0_0_10001(
#line 2830 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_1,
#line 2832 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_2)
#line 2834 "mdb.parse.c"
{
#line 2836 "mdb.parse.c"
  {
#line 2838 "mdb.parse.c"
    MR_bool mdb__parse__succeeded;

#line 2841 "mdb.parse.c"
    {
#line 2843 "mdb.parse.c"
      mdb__parse__succeeded = mdb__parse____Unify____token_0_0(((MR_Word) mdb__parse__wrapper_arg_1), ((MR_Word) mdb__parse__wrapper_arg_2));
    }
#line 2846 "mdb.parse.c"
    return mdb__parse__succeeded;
#line 2848 "mdb.parse.c"
  }
#line 2850 "mdb.parse.c"
}

#line 2853 "mdb.parse.c"
static void MR_CALL 
mdb__parse____Compare____token_0_0_10001(
#line 2856 "mdb.parse.c"
  MR_Box * mdb__parse__wrapper_arg_1,
#line 2858 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_2,
#line 2860 "mdb.parse.c"
  MR_Box mdb__parse__wrapper_arg_3)
#line 2862 "mdb.parse.c"
{
#line 2864 "mdb.parse.c"
  {
#line 2866 "mdb.parse.c"
    MR_Word mdb__parse__conv0_HeadVar__1_1;

#line 2869 "mdb.parse.c"
    {
#line 2871 "mdb.parse.c"
      mdb__parse____Compare____token_0_0(&mdb__parse__conv0_HeadVar__1_1, ((MR_Word) mdb__parse__wrapper_arg_2), ((MR_Word) mdb__parse__wrapper_arg_3));
    }
#line 2874 "mdb.parse.c"
    *mdb__parse__wrapper_arg_1 = ((MR_Box) (mdb__parse__conv0_HeadVar__1_1));
#line 2876 "mdb.parse.c"
  }
#line 2878 "mdb.parse.c"
}

#line 201 "parse.m"
static void MR_CALL 
mdb__parse____Compare____token_0_0(
#line 201 "parse.m"
  MR_Word * mdb__parse__HeadVar__1_1,
#line 201 "parse.m"
  MR_Word mdb__parse__HeadVar__2_2,
#line 201 "parse.m"
  MR_Word mdb__parse__HeadVar__3_3)
#line 201 "parse.m"
{
#line 201 "parse.m"
  {
#line 201 "parse.m"
    MR_bool mdb__parse__succeeded;
#line 201 "parse.m"
    MR_Integer mdb__parse__CastX_84 = (MR_Integer) mdb__parse__HeadVar__2_2;
#line 201 "parse.m"
    MR_Integer mdb__parse__CastY_85 = (MR_Integer) mdb__parse__HeadVar__3_3;

#line 201 "parse.m"
    mdb__parse__succeeded = (mdb__parse__CastX_84 == mdb__parse__CastY_85);
#line 201 "parse.m"
    if (mdb__parse__succeeded)
#line 2905 "mdb.parse.c"
      *mdb__parse__HeadVar__1_1 = (MR_Integer) 0;
#line 201 "parse.m"
    else
#line 201 "parse.m"
#line 201 "parse.m"
      switch (MR_tag((MR_Word) mdb__parse__HeadVar__2_2)) {
#line 201 "parse.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
        case (MR_Integer) 0:
#line 201 "parse.m"
#line 201 "parse.m"
          switch (MR_unmkbody(mdb__parse__HeadVar__2_2)) {
#line 201 "parse.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
            case (MR_Integer) 0:
#line 201 "parse.m"
#line 201 "parse.m"
              switch (MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) {
#line 201 "parse.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
                case (MR_Integer) 0:
#line 201 "parse.m"
#line 201 "parse.m"
                  switch (MR_unmkbody(mdb__parse__HeadVar__3_3)) {
#line 201 "parse.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
                    case (MR_Integer) 0:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 0;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 1:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 2:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 3:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 4:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 5:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                  }
#line 201 "parse.m"
                  break;
#line 201 "parse.m"
                case (MR_Integer) 1:
#line 2977 "mdb.parse.c"
                  *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                  break;
#line 201 "parse.m"
                case (MR_Integer) 2:
#line 2983 "mdb.parse.c"
                  *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                  break;
#line 201 "parse.m"
                case (MR_Integer) 3:
#line 201 "parse.m"
#line 201 "parse.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 0)))) {
#line 201 "parse.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
                    case (MR_Integer) 0:
#line 2996 "mdb.parse.c"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 1:
#line 3002 "mdb.parse.c"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                  }
#line 201 "parse.m"
                  break;
#line 201 "parse.m"
              }
#line 201 "parse.m"
              break;
#line 201 "parse.m"
            case (MR_Integer) 1:
#line 201 "parse.m"
#line 201 "parse.m"
              switch (MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) {
#line 201 "parse.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
                case (MR_Integer) 0:
#line 201 "parse.m"
#line 201 "parse.m"
                  switch (MR_unmkbody(mdb__parse__HeadVar__3_3)) {
#line 201 "parse.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
                    case (MR_Integer) 0:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 1:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 0;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 2:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 3:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 4:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 5:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                  }
#line 201 "parse.m"
                  break;
#line 201 "parse.m"
                case (MR_Integer) 1:
#line 3070 "mdb.parse.c"
                  *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                  break;
#line 201 "parse.m"
                case (MR_Integer) 2:
#line 3076 "mdb.parse.c"
                  *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                  break;
#line 201 "parse.m"
                case (MR_Integer) 3:
#line 201 "parse.m"
#line 201 "parse.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 0)))) {
#line 201 "parse.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
                    case (MR_Integer) 0:
#line 3089 "mdb.parse.c"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 1:
#line 3095 "mdb.parse.c"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                  }
#line 201 "parse.m"
                  break;
#line 201 "parse.m"
              }
#line 201 "parse.m"
              break;
#line 201 "parse.m"
            case (MR_Integer) 2:
#line 201 "parse.m"
#line 201 "parse.m"
              switch (MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) {
#line 201 "parse.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
                case (MR_Integer) 0:
#line 201 "parse.m"
#line 201 "parse.m"
                  switch (MR_unmkbody(mdb__parse__HeadVar__3_3)) {
#line 201 "parse.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
                    case (MR_Integer) 0:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 1:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 2:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 0;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 3:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 4:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 5:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                  }
#line 201 "parse.m"
                  break;
#line 201 "parse.m"
                case (MR_Integer) 1:
#line 3163 "mdb.parse.c"
                  *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                  break;
#line 201 "parse.m"
                case (MR_Integer) 2:
#line 3169 "mdb.parse.c"
                  *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                  break;
#line 201 "parse.m"
                case (MR_Integer) 3:
#line 201 "parse.m"
#line 201 "parse.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 0)))) {
#line 201 "parse.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
                    case (MR_Integer) 0:
#line 3182 "mdb.parse.c"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 1:
#line 3188 "mdb.parse.c"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                  }
#line 201 "parse.m"
                  break;
#line 201 "parse.m"
              }
#line 201 "parse.m"
              break;
#line 201 "parse.m"
            case (MR_Integer) 3:
#line 201 "parse.m"
#line 201 "parse.m"
              switch (MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) {
#line 201 "parse.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
                case (MR_Integer) 0:
#line 201 "parse.m"
#line 201 "parse.m"
                  switch (MR_unmkbody(mdb__parse__HeadVar__3_3)) {
#line 201 "parse.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
                    case (MR_Integer) 0:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 1:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 2:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 3:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 0;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 4:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 5:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                  }
#line 201 "parse.m"
                  break;
#line 201 "parse.m"
                case (MR_Integer) 1:
#line 3256 "mdb.parse.c"
                  *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                  break;
#line 201 "parse.m"
                case (MR_Integer) 2:
#line 3262 "mdb.parse.c"
                  *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                  break;
#line 201 "parse.m"
                case (MR_Integer) 3:
#line 201 "parse.m"
#line 201 "parse.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 0)))) {
#line 201 "parse.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
                    case (MR_Integer) 0:
#line 3275 "mdb.parse.c"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 1:
#line 3281 "mdb.parse.c"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                  }
#line 201 "parse.m"
                  break;
#line 201 "parse.m"
              }
#line 201 "parse.m"
              break;
#line 201 "parse.m"
            case (MR_Integer) 4:
#line 201 "parse.m"
#line 201 "parse.m"
              switch (MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) {
#line 201 "parse.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
                case (MR_Integer) 0:
#line 201 "parse.m"
#line 201 "parse.m"
                  switch (MR_unmkbody(mdb__parse__HeadVar__3_3)) {
#line 201 "parse.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
                    case (MR_Integer) 0:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 1:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 2:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 3:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 4:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 0;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 5:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                  }
#line 201 "parse.m"
                  break;
#line 201 "parse.m"
                case (MR_Integer) 1:
#line 3349 "mdb.parse.c"
                  *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                  break;
#line 201 "parse.m"
                case (MR_Integer) 2:
#line 3355 "mdb.parse.c"
                  *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                  break;
#line 201 "parse.m"
                case (MR_Integer) 3:
#line 201 "parse.m"
#line 201 "parse.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 0)))) {
#line 201 "parse.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
                    case (MR_Integer) 0:
#line 3368 "mdb.parse.c"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 1:
#line 3374 "mdb.parse.c"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                  }
#line 201 "parse.m"
                  break;
#line 201 "parse.m"
              }
#line 201 "parse.m"
              break;
#line 201 "parse.m"
            case (MR_Integer) 5:
#line 201 "parse.m"
#line 201 "parse.m"
              switch (MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) {
#line 201 "parse.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
                case (MR_Integer) 0:
#line 201 "parse.m"
#line 201 "parse.m"
                  switch (MR_unmkbody(mdb__parse__HeadVar__3_3)) {
#line 201 "parse.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
                    case (MR_Integer) 0:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 1:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 2:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 3:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 4:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 5:
#line 201 "parse.m"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 0;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                  }
#line 201 "parse.m"
                  break;
#line 201 "parse.m"
                case (MR_Integer) 1:
#line 3442 "mdb.parse.c"
                  *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                  break;
#line 201 "parse.m"
                case (MR_Integer) 2:
#line 3448 "mdb.parse.c"
                  *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                  break;
#line 201 "parse.m"
                case (MR_Integer) 3:
#line 201 "parse.m"
#line 201 "parse.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 0)))) {
#line 201 "parse.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
                    case (MR_Integer) 0:
#line 3461 "mdb.parse.c"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                    case (MR_Integer) 1:
#line 3467 "mdb.parse.c"
                      *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                      break;
#line 201 "parse.m"
                  }
#line 201 "parse.m"
                  break;
#line 201 "parse.m"
              }
#line 201 "parse.m"
              break;
#line 201 "parse.m"
          }
#line 201 "parse.m"
          break;
#line 201 "parse.m"
        case (MR_Integer) 1:
#line 201 "parse.m"
          {
#line 201 "parse.m"
            MR_Integer mdb__parse__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__2_2, (MR_Integer) 0)));

#line 201 "parse.m"
#line 201 "parse.m"
            switch (MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) {
#line 201 "parse.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
              case (MR_Integer) 0:
#line 201 "parse.m"
#line 201 "parse.m"
                switch (MR_unmkbody(mdb__parse__HeadVar__3_3)) {
#line 201 "parse.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
                  case (MR_Integer) 0:
#line 3504 "mdb.parse.c"
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                    break;
#line 201 "parse.m"
                  case (MR_Integer) 1:
#line 3510 "mdb.parse.c"
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                    break;
#line 201 "parse.m"
                  case (MR_Integer) 2:
#line 3516 "mdb.parse.c"
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                    break;
#line 201 "parse.m"
                  case (MR_Integer) 3:
#line 3522 "mdb.parse.c"
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                    break;
#line 201 "parse.m"
                  case (MR_Integer) 4:
#line 3528 "mdb.parse.c"
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                    break;
#line 201 "parse.m"
                  case (MR_Integer) 5:
#line 3534 "mdb.parse.c"
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                    break;
#line 201 "parse.m"
                }
#line 201 "parse.m"
                break;
#line 201 "parse.m"
              case (MR_Integer) 1:
#line 201 "parse.m"
                {
#line 201 "parse.m"
                  MR_Integer mdb__parse__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__3_3, (MR_Integer) 0)));

#line 201 "parse.m"
                  {
#line 201 "parse.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__parse__HeadVar__1_1, mdb__parse__V_92_92, mdb__parse__V_35_35);
                  }
#line 201 "parse.m"
                }
#line 201 "parse.m"
                break;
#line 201 "parse.m"
              case (MR_Integer) 2:
#line 3560 "mdb.parse.c"
                *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                break;
#line 201 "parse.m"
              case (MR_Integer) 3:
#line 201 "parse.m"
#line 201 "parse.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 0)))) {
#line 201 "parse.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
                  case (MR_Integer) 0:
#line 3573 "mdb.parse.c"
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                    break;
#line 201 "parse.m"
                  case (MR_Integer) 1:
#line 3579 "mdb.parse.c"
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                    break;
#line 201 "parse.m"
                }
#line 201 "parse.m"
                break;
#line 201 "parse.m"
            }
#line 201 "parse.m"
          }
#line 201 "parse.m"
          break;
#line 201 "parse.m"
        case (MR_Integer) 2:
#line 201 "parse.m"
          {
#line 201 "parse.m"
            MR_String mdb__parse__V_91_91 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__HeadVar__2_2, (MR_Integer) 0)));

#line 201 "parse.m"
#line 201 "parse.m"
            switch (MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) {
#line 201 "parse.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
              case (MR_Integer) 0:
#line 201 "parse.m"
#line 201 "parse.m"
                switch (MR_unmkbody(mdb__parse__HeadVar__3_3)) {
#line 201 "parse.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
                  case (MR_Integer) 0:
#line 3614 "mdb.parse.c"
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                    break;
#line 201 "parse.m"
                  case (MR_Integer) 1:
#line 3620 "mdb.parse.c"
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                    break;
#line 201 "parse.m"
                  case (MR_Integer) 2:
#line 3626 "mdb.parse.c"
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                    break;
#line 201 "parse.m"
                  case (MR_Integer) 3:
#line 3632 "mdb.parse.c"
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                    break;
#line 201 "parse.m"
                  case (MR_Integer) 4:
#line 3638 "mdb.parse.c"
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                    break;
#line 201 "parse.m"
                  case (MR_Integer) 5:
#line 3644 "mdb.parse.c"
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                    break;
#line 201 "parse.m"
                }
#line 201 "parse.m"
                break;
#line 201 "parse.m"
              case (MR_Integer) 1:
#line 3654 "mdb.parse.c"
                *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                break;
#line 201 "parse.m"
              case (MR_Integer) 2:
#line 201 "parse.m"
                {
#line 201 "parse.m"
                  MR_String mdb__parse__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__HeadVar__3_3, (MR_Integer) 0)));

#line 201 "parse.m"
                  {
#line 201 "parse.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(mdb__parse__HeadVar__1_1, mdb__parse__V_91_91, mdb__parse__V_51_51);
                  }
#line 201 "parse.m"
                }
#line 201 "parse.m"
                break;
#line 201 "parse.m"
              case (MR_Integer) 3:
#line 201 "parse.m"
#line 201 "parse.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 0)))) {
#line 201 "parse.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
                  case (MR_Integer) 0:
#line 3683 "mdb.parse.c"
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                    break;
#line 201 "parse.m"
                  case (MR_Integer) 1:
#line 3689 "mdb.parse.c"
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                    break;
#line 201 "parse.m"
                }
#line 201 "parse.m"
                break;
#line 201 "parse.m"
            }
#line 201 "parse.m"
          }
#line 201 "parse.m"
          break;
#line 201 "parse.m"
        case (MR_Integer) 3:
#line 201 "parse.m"
#line 201 "parse.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 0)))) {
#line 201 "parse.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
            case (MR_Integer) 0:
#line 201 "parse.m"
              {
#line 201 "parse.m"
                MR_String mdb__parse__V_90_90 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 1)));

#line 201 "parse.m"
#line 201 "parse.m"
                switch (MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) {
#line 201 "parse.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
                  case (MR_Integer) 0:
#line 201 "parse.m"
#line 201 "parse.m"
                    switch (MR_unmkbody(mdb__parse__HeadVar__3_3)) {
#line 201 "parse.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
                      case (MR_Integer) 0:
#line 3731 "mdb.parse.c"
                        *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                        break;
#line 201 "parse.m"
                      case (MR_Integer) 1:
#line 3737 "mdb.parse.c"
                        *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                        break;
#line 201 "parse.m"
                      case (MR_Integer) 2:
#line 3743 "mdb.parse.c"
                        *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                        break;
#line 201 "parse.m"
                      case (MR_Integer) 3:
#line 3749 "mdb.parse.c"
                        *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                        break;
#line 201 "parse.m"
                      case (MR_Integer) 4:
#line 3755 "mdb.parse.c"
                        *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                        break;
#line 201 "parse.m"
                      case (MR_Integer) 5:
#line 3761 "mdb.parse.c"
                        *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                        break;
#line 201 "parse.m"
                    }
#line 201 "parse.m"
                    break;
#line 201 "parse.m"
                  case (MR_Integer) 1:
#line 3771 "mdb.parse.c"
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                    break;
#line 201 "parse.m"
                  case (MR_Integer) 2:
#line 3777 "mdb.parse.c"
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                    break;
#line 201 "parse.m"
                  case (MR_Integer) 3:
#line 201 "parse.m"
#line 201 "parse.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 0)))) {
#line 201 "parse.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
                      case (MR_Integer) 0:
#line 201 "parse.m"
                        {
#line 201 "parse.m"
                          MR_String mdb__parse__V_67_67 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 1)));

#line 201 "parse.m"
                          {
#line 201 "parse.m"
                            mercury__private_builtin__builtin_compare_string_3_p_0(mdb__parse__HeadVar__1_1, mdb__parse__V_90_90, mdb__parse__V_67_67);
                          }
#line 201 "parse.m"
                        }
#line 201 "parse.m"
                        break;
#line 201 "parse.m"
                      case (MR_Integer) 1:
#line 3806 "mdb.parse.c"
                        *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 201 "parse.m"
                        break;
#line 201 "parse.m"
                    }
#line 201 "parse.m"
                    break;
#line 201 "parse.m"
                }
#line 201 "parse.m"
              }
#line 201 "parse.m"
              break;
#line 201 "parse.m"
            case (MR_Integer) 1:
#line 201 "parse.m"
              {
#line 201 "parse.m"
                MR_Char mdb__parse__V_93_93 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 1)));

#line 201 "parse.m"
#line 201 "parse.m"
                switch (MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) {
#line 201 "parse.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
                  case (MR_Integer) 0:
#line 201 "parse.m"
#line 201 "parse.m"
                    switch (MR_unmkbody(mdb__parse__HeadVar__3_3)) {
#line 201 "parse.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
                      case (MR_Integer) 0:
#line 3841 "mdb.parse.c"
                        *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                        break;
#line 201 "parse.m"
                      case (MR_Integer) 1:
#line 3847 "mdb.parse.c"
                        *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                        break;
#line 201 "parse.m"
                      case (MR_Integer) 2:
#line 3853 "mdb.parse.c"
                        *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                        break;
#line 201 "parse.m"
                      case (MR_Integer) 3:
#line 3859 "mdb.parse.c"
                        *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                        break;
#line 201 "parse.m"
                      case (MR_Integer) 4:
#line 3865 "mdb.parse.c"
                        *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                        break;
#line 201 "parse.m"
                      case (MR_Integer) 5:
#line 3871 "mdb.parse.c"
                        *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                        break;
#line 201 "parse.m"
                    }
#line 201 "parse.m"
                    break;
#line 201 "parse.m"
                  case (MR_Integer) 1:
#line 3881 "mdb.parse.c"
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                    break;
#line 201 "parse.m"
                  case (MR_Integer) 2:
#line 3887 "mdb.parse.c"
                    *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                    break;
#line 201 "parse.m"
                  case (MR_Integer) 3:
#line 201 "parse.m"
#line 201 "parse.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 0)))) {
#line 201 "parse.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
                      case (MR_Integer) 0:
#line 3900 "mdb.parse.c"
                        *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 201 "parse.m"
                        break;
#line 201 "parse.m"
                      case (MR_Integer) 1:
#line 201 "parse.m"
                        {
#line 201 "parse.m"
                          MR_Char mdb__parse__V_83_83 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 1)));

#line 201 "parse.m"
                          {
#line 201 "parse.m"
                            mercury__private_builtin__builtin_compare_character_3_p_0(mdb__parse__HeadVar__1_1, mdb__parse__V_93_93, mdb__parse__V_83_83);
                          }
#line 201 "parse.m"
                        }
#line 201 "parse.m"
                        break;
#line 201 "parse.m"
                    }
#line 201 "parse.m"
                    break;
#line 201 "parse.m"
                }
#line 201 "parse.m"
              }
#line 201 "parse.m"
              break;
#line 201 "parse.m"
          }
#line 201 "parse.m"
          break;
#line 201 "parse.m"
      }
#line 201 "parse.m"
  }
#line 201 "parse.m"
}

#line 201 "parse.m"
static MR_bool MR_CALL 
mdb__parse____Unify____token_0_0(
#line 201 "parse.m"
  MR_Word mdb__parse__HeadVar__1_1,
#line 201 "parse.m"
  MR_Word mdb__parse__HeadVar__2_2)
#line 201 "parse.m"
{
#line 201 "parse.m"
  {
#line 201 "parse.m"
    MR_bool mdb__parse__succeeded;
#line 201 "parse.m"
    MR_Integer mdb__parse__CastX_23 = (MR_Integer) mdb__parse__HeadVar__1_1;
#line 201 "parse.m"
    MR_Integer mdb__parse__CastY_24 = (MR_Integer) mdb__parse__HeadVar__2_2;

#line 201 "parse.m"
    mdb__parse__succeeded = (mdb__parse__CastX_23 == mdb__parse__CastY_24);
#line 201 "parse.m"
    if (mdb__parse__succeeded)
#line 201 "parse.m"
      mdb__parse__succeeded = MR_TRUE;
#line 201 "parse.m"
    else
#line 201 "parse.m"
#line 201 "parse.m"
      switch (MR_tag((MR_Word) mdb__parse__HeadVar__1_1)) {
#line 201 "parse.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
        case (MR_Integer) 0:
#line 201 "parse.m"
#line 201 "parse.m"
          switch (MR_unmkbody(mdb__parse__HeadVar__1_1)) {
#line 201 "parse.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
            case (MR_Integer) 0:
#line 201 "parse.m"
              {
#line 201 "parse.m"
                MR_Integer mdb__parse__CastX_3 = (MR_Integer) mdb__parse__HeadVar__1_1;
#line 201 "parse.m"
                MR_Integer mdb__parse__CastY_4 = (MR_Integer) mdb__parse__HeadVar__2_2;

#line 201 "parse.m"
                mdb__parse__succeeded = (mdb__parse__CastY_4 == mdb__parse__CastX_3);
#line 201 "parse.m"
              }
#line 201 "parse.m"
              break;
#line 201 "parse.m"
            case (MR_Integer) 1:
#line 201 "parse.m"
              {
#line 201 "parse.m"
                MR_Integer mdb__parse__CastX_5 = (MR_Integer) mdb__parse__HeadVar__1_1;
#line 201 "parse.m"
                MR_Integer mdb__parse__CastY_6 = (MR_Integer) mdb__parse__HeadVar__2_2;

#line 201 "parse.m"
                mdb__parse__succeeded = (mdb__parse__CastY_6 == mdb__parse__CastX_5);
#line 201 "parse.m"
              }
#line 201 "parse.m"
              break;
#line 201 "parse.m"
            case (MR_Integer) 2:
#line 201 "parse.m"
              {
#line 201 "parse.m"
                MR_Integer mdb__parse__CastX_7 = (MR_Integer) mdb__parse__HeadVar__1_1;
#line 201 "parse.m"
                MR_Integer mdb__parse__CastY_8 = (MR_Integer) mdb__parse__HeadVar__2_2;

#line 201 "parse.m"
                mdb__parse__succeeded = (mdb__parse__CastY_8 == mdb__parse__CastX_7);
#line 201 "parse.m"
              }
#line 201 "parse.m"
              break;
#line 201 "parse.m"
            case (MR_Integer) 3:
#line 201 "parse.m"
              {
#line 201 "parse.m"
                MR_Integer mdb__parse__CastX_9 = (MR_Integer) mdb__parse__HeadVar__1_1;
#line 201 "parse.m"
                MR_Integer mdb__parse__CastY_10 = (MR_Integer) mdb__parse__HeadVar__2_2;

#line 201 "parse.m"
                mdb__parse__succeeded = (mdb__parse__CastY_10 == mdb__parse__CastX_9);
#line 201 "parse.m"
              }
#line 201 "parse.m"
              break;
#line 201 "parse.m"
            case (MR_Integer) 4:
#line 201 "parse.m"
              {
#line 201 "parse.m"
                MR_Integer mdb__parse__CastX_11 = (MR_Integer) mdb__parse__HeadVar__1_1;
#line 201 "parse.m"
                MR_Integer mdb__parse__CastY_12 = (MR_Integer) mdb__parse__HeadVar__2_2;

#line 201 "parse.m"
                mdb__parse__succeeded = (mdb__parse__CastY_12 == mdb__parse__CastX_11);
#line 201 "parse.m"
              }
#line 201 "parse.m"
              break;
#line 201 "parse.m"
            case (MR_Integer) 5:
#line 201 "parse.m"
              {
#line 201 "parse.m"
                MR_Integer mdb__parse__CastX_13 = (MR_Integer) mdb__parse__HeadVar__1_1;
#line 201 "parse.m"
                MR_Integer mdb__parse__CastY_14 = (MR_Integer) mdb__parse__HeadVar__2_2;

#line 201 "parse.m"
                mdb__parse__succeeded = (mdb__parse__CastY_14 == mdb__parse__CastX_13);
#line 201 "parse.m"
              }
#line 201 "parse.m"
              break;
#line 201 "parse.m"
          }
#line 201 "parse.m"
          break;
#line 201 "parse.m"
        case (MR_Integer) 1:
#line 201 "parse.m"
          {
#line 201 "parse.m"
            MR_Integer mdb__parse__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__1_1, (MR_Integer) 0)));
#line 201 "parse.m"
            MR_Integer mdb__parse__V_16_16;

#line 201 "parse.m"
            mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 201 "parse.m"
            if (mdb__parse__succeeded)
#line 201 "parse.m"
              {
#line 201 "parse.m"
                mdb__parse__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__2_2, (MR_Integer) 0)));
#line 4090 "mdb.parse.c"
                mdb__parse__succeeded = (mdb__parse__V_15_15 == mdb__parse__V_16_16);
#line 201 "parse.m"
              }
#line 201 "parse.m"
          }
#line 201 "parse.m"
          break;
#line 201 "parse.m"
        case (MR_Integer) 2:
#line 201 "parse.m"
          {
#line 201 "parse.m"
            MR_String mdb__parse__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__HeadVar__1_1, (MR_Integer) 0)));
#line 201 "parse.m"
            MR_String mdb__parse__V_18_18;

#line 201 "parse.m"
            mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 201 "parse.m"
            if (mdb__parse__succeeded)
#line 201 "parse.m"
              {
#line 201 "parse.m"
                mdb__parse__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__HeadVar__2_2, (MR_Integer) 0)));
#line 4115 "mdb.parse.c"
                mdb__parse__succeeded = (strcmp(mdb__parse__V_17_17, mdb__parse__V_18_18) == 0);
#line 201 "parse.m"
              }
#line 201 "parse.m"
          }
#line 201 "parse.m"
          break;
#line 201 "parse.m"
        case (MR_Integer) 3:
#line 201 "parse.m"
#line 201 "parse.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__1_1, (MR_Integer) 0)))) {
#line 201 "parse.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 201 "parse.m"
            case (MR_Integer) 0:
#line 201 "parse.m"
              {
#line 201 "parse.m"
                MR_String mdb__parse__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__1_1, (MR_Integer) 1)));
#line 201 "parse.m"
                MR_String mdb__parse__V_20_20;

#line 201 "parse.m"
                mdb__parse__succeeded = ((((MR_tag((MR_Word) mdb__parse__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 201 "parse.m"
                if (mdb__parse__succeeded)
#line 201 "parse.m"
                  {
#line 201 "parse.m"
                    mdb__parse__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 1)));
#line 4147 "mdb.parse.c"
                    mdb__parse__succeeded = (strcmp(mdb__parse__V_19_19, mdb__parse__V_20_20) == 0);
#line 201 "parse.m"
                  }
#line 201 "parse.m"
              }
#line 201 "parse.m"
              break;
#line 201 "parse.m"
            case (MR_Integer) 1:
#line 201 "parse.m"
              {
#line 201 "parse.m"
                MR_Char mdb__parse__V_21_21 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__1_1, (MR_Integer) 1)));
#line 201 "parse.m"
                MR_Char mdb__parse__V_22_22;

#line 201 "parse.m"
                mdb__parse__succeeded = ((((MR_tag((MR_Word) mdb__parse__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 201 "parse.m"
                if (mdb__parse__succeeded)
#line 201 "parse.m"
                  {
#line 201 "parse.m"
                    mdb__parse__V_22_22 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 1)));
#line 4172 "mdb.parse.c"
                    mdb__parse__succeeded = (mdb__parse__V_21_21 == mdb__parse__V_22_22);
#line 201 "parse.m"
                  }
#line 201 "parse.m"
              }
#line 201 "parse.m"
              break;
#line 201 "parse.m"
          }
#line 201 "parse.m"
          break;
#line 201 "parse.m"
      }
#line 201 "parse.m"
    return mdb__parse__succeeded;
#line 201 "parse.m"
  }
#line 201 "parse.m"
}

#line 163 "parse.m"
void MR_CALL 
mdb__parse____Compare____setting_option_0_0(
#line 163 "parse.m"
  MR_Word * mdb__parse__HeadVar__1_1,
#line 163 "parse.m"
  MR_Word mdb__parse__HeadVar__2_2,
#line 163 "parse.m"
  MR_Word mdb__parse__HeadVar__3_3)
#line 163 "parse.m"
{
#line 163 "parse.m"
  {
#line 163 "parse.m"
    MR_bool mdb__parse__succeeded;
#line 163 "parse.m"
    MR_Integer mdb__parse__Cast_HeadVar1_4 = (MR_Integer) mdb__parse__HeadVar__2_2;
#line 163 "parse.m"
    MR_Integer mdb__parse__Cast_HeadVar2_5 = (MR_Integer) mdb__parse__HeadVar__3_3;

#line 163 "parse.m"
    {
#line 163 "parse.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__parse__HeadVar__1_1, mdb__parse__Cast_HeadVar1_4, mdb__parse__Cast_HeadVar2_5);
    }
#line 163 "parse.m"
  }
#line 163 "parse.m"
}

#line 163 "parse.m"
MR_bool MR_CALL 
mdb__parse____Unify____setting_option_0_0(
#line 163 "parse.m"
  MR_Word mdb__parse__HeadVar__2_1,
#line 163 "parse.m"
  MR_Word mdb__parse__HeadVar__2_2)
#line 163 "parse.m"
{
#line 4232 "mdb.parse.c"
  {
#line 4234 "mdb.parse.c"
    MR_bool mdb__parse__succeeded = (mdb__parse__HeadVar__2_1 == mdb__parse__HeadVar__2_2);

#line 4237 "mdb.parse.c"
    return mdb__parse__succeeded;
#line 4239 "mdb.parse.c"
  }
#line 163 "parse.m"
}

#line 153 "parse.m"
void MR_CALL 
mdb__parse____Compare____path_0_0(
#line 153 "parse.m"
  MR_Word * mdb__parse__HeadVar__1_1,
#line 153 "parse.m"
  MR_Word mdb__parse__HeadVar__2_2,
#line 153 "parse.m"
  MR_Word mdb__parse__HeadVar__3_3)
#line 153 "parse.m"
{
#line 153 "parse.m"
  {
#line 153 "parse.m"
    MR_bool mdb__parse__succeeded;
#line 153 "parse.m"
    MR_Integer mdb__parse__CastX_12 = (MR_Integer) mdb__parse__HeadVar__2_2;
#line 153 "parse.m"
    MR_Integer mdb__parse__CastY_13 = (MR_Integer) mdb__parse__HeadVar__3_3;

#line 153 "parse.m"
    mdb__parse__succeeded = (mdb__parse__CastX_12 == mdb__parse__CastY_13);
#line 153 "parse.m"
    if (mdb__parse__succeeded)
#line 4268 "mdb.parse.c"
      *mdb__parse__HeadVar__1_1 = (MR_Integer) 0;
#line 153 "parse.m"
    else
#line 153 "parse.m"
    if (((MR_tag((MR_Word) mdb__parse__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 153 "parse.m"
      {
#line 153 "parse.m"
        MR_Word mdb__parse__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__2_2, (MR_Integer) 0)));

#line 153 "parse.m"
        if (((MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 153 "parse.m"
          {
#line 153 "parse.m"
            MR_Word mdb__parse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__3_3, (MR_Integer) 0)));

#line 153 "parse.m"
            {
#line 153 "parse.m"
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__parse_scalar_common_1[4], mdb__parse__HeadVar__1_1, ((MR_Box) (mdb__parse__V_16_16)), ((MR_Box) (mdb__parse__V_11_11)));
            }
#line 153 "parse.m"
          }
#line 153 "parse.m"
        else
#line 4295 "mdb.parse.c"
          *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "parse.m"
      }
#line 153 "parse.m"
    else
#line 153 "parse.m"
      {
#line 153 "parse.m"
        MR_Word mdb__parse__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__parse__HeadVar__2_2, (MR_Integer) 0)));

#line 153 "parse.m"
        if (((MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4308 "mdb.parse.c"
          *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "parse.m"
        else
#line 153 "parse.m"
          {
#line 153 "parse.m"
            MR_Word mdb__parse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__parse__HeadVar__3_3, (MR_Integer) 0)));

#line 153 "parse.m"
            {
#line 153 "parse.m"
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__parse_scalar_common_1[4], mdb__parse__HeadVar__1_1, ((MR_Box) (mdb__parse__V_17_17)), ((MR_Box) (mdb__parse__V_5_5)));
            }
#line 153 "parse.m"
          }
#line 153 "parse.m"
      }
#line 153 "parse.m"
  }
#line 153 "parse.m"
}

#line 153 "parse.m"
MR_bool MR_CALL 
mdb__parse____Unify____path_0_0(
#line 153 "parse.m"
  MR_Word mdb__parse__HeadVar__1_1,
#line 153 "parse.m"
  MR_Word mdb__parse__HeadVar__2_2)
#line 153 "parse.m"
{
#line 153 "parse.m"
  {
#line 153 "parse.m"
    MR_bool mdb__parse__succeeded;
#line 153 "parse.m"
    MR_Integer mdb__parse__CastX_7 = (MR_Integer) mdb__parse__HeadVar__1_1;
#line 153 "parse.m"
    MR_Integer mdb__parse__CastY_8 = (MR_Integer) mdb__parse__HeadVar__2_2;

#line 153 "parse.m"
    mdb__parse__succeeded = (mdb__parse__CastX_7 == mdb__parse__CastY_8);
#line 153 "parse.m"
    if (mdb__parse__succeeded)
#line 153 "parse.m"
      mdb__parse__succeeded = MR_TRUE;
#line 153 "parse.m"
    else
#line 153 "parse.m"
    if (((MR_tag((MR_Word) mdb__parse__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 153 "parse.m"
      {
#line 153 "parse.m"
        MR_Word mdb__parse__TypeInfo_9_9;
#line 153 "parse.m"
        MR_Word mdb__parse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__1_1, (MR_Integer) 0)));
#line 153 "parse.m"
        MR_Word mdb__parse__V_6_6;

#line 153 "parse.m"
        mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 153 "parse.m"
        if (mdb__parse__succeeded)
#line 153 "parse.m"
          {
#line 153 "parse.m"
            mdb__parse__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__2_2, (MR_Integer) 0)));
#line 4376 "mdb.parse.c"
            mdb__parse__TypeInfo_9_9 = (MR_Word) &mdb__parse_scalar_common_1[4];
#line 4378 "mdb.parse.c"
            {
#line 4380 "mdb.parse.c"
              mdb__parse__succeeded = mercury__builtin__unify_2_p_0(mdb__parse__TypeInfo_9_9, ((MR_Box) (mdb__parse__V_5_5)), ((MR_Box) (mdb__parse__V_6_6)));
            }
#line 153 "parse.m"
          }
#line 153 "parse.m"
      }
#line 153 "parse.m"
    else
#line 153 "parse.m"
      {
#line 153 "parse.m"
        MR_Word mdb__parse__TypeInfo_10_10;
#line 153 "parse.m"
        MR_Word mdb__parse__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__parse__HeadVar__1_1, (MR_Integer) 0)));
#line 153 "parse.m"
        MR_Word mdb__parse__V_4_4;

#line 153 "parse.m"
        mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 153 "parse.m"
        if (mdb__parse__succeeded)
#line 153 "parse.m"
          {
#line 153 "parse.m"
            mdb__parse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__parse__HeadVar__2_2, (MR_Integer) 0)));
#line 4406 "mdb.parse.c"
            mdb__parse__TypeInfo_10_10 = (MR_Word) &mdb__parse_scalar_common_1[4];
#line 4408 "mdb.parse.c"
            {
#line 4410 "mdb.parse.c"
              mdb__parse__succeeded = mercury__builtin__unify_2_p_0(mdb__parse__TypeInfo_10_10, ((MR_Box) (mdb__parse__V_3_3)), ((MR_Box) (mdb__parse__V_4_4)));
            }
#line 153 "parse.m"
          }
#line 153 "parse.m"
      }
#line 153 "parse.m"
    return mdb__parse__succeeded;
#line 153 "parse.m"
  }
#line 153 "parse.m"
}

#line 147 "parse.m"
void MR_CALL 
mdb__parse____Compare____format_param_cmd_0_0(
#line 147 "parse.m"
  MR_Word * mdb__parse__HeadVar__1_1,
#line 147 "parse.m"
  MR_Word mdb__parse__HeadVar__2_2,
#line 147 "parse.m"
  MR_Word mdb__parse__HeadVar__3_3)
#line 147 "parse.m"
{
#line 147 "parse.m"
  {
#line 147 "parse.m"
    MR_bool mdb__parse__succeeded;
#line 147 "parse.m"
    MR_Integer mdb__parse__Cast_HeadVar1_4 = (MR_Integer) mdb__parse__HeadVar__2_2;
#line 147 "parse.m"
    MR_Integer mdb__parse__Cast_HeadVar2_5 = (MR_Integer) mdb__parse__HeadVar__3_3;

#line 147 "parse.m"
    {
#line 147 "parse.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__parse__HeadVar__1_1, mdb__parse__Cast_HeadVar1_4, mdb__parse__Cast_HeadVar2_5);
    }
#line 147 "parse.m"
  }
#line 147 "parse.m"
}

#line 147 "parse.m"
MR_bool MR_CALL 
mdb__parse____Unify____format_param_cmd_0_0(
#line 147 "parse.m"
  MR_Word mdb__parse__HeadVar__2_1,
#line 147 "parse.m"
  MR_Word mdb__parse__HeadVar__2_2)
#line 147 "parse.m"
{
#line 4463 "mdb.parse.c"
  {
#line 4465 "mdb.parse.c"
    MR_bool mdb__parse__succeeded = (mdb__parse__HeadVar__2_1 == mdb__parse__HeadVar__2_2);

#line 4468 "mdb.parse.c"
    return mdb__parse__succeeded;
#line 4470 "mdb.parse.c"
  }
#line 147 "parse.m"
}

#line 157 "parse.m"
void MR_CALL 
mdb__parse____Compare____format_option_0_0(
#line 157 "parse.m"
  MR_Word * mdb__parse__HeadVar__1_1,
#line 157 "parse.m"
  MR_Word mdb__parse__HeadVar__2_2,
#line 157 "parse.m"
  MR_Word mdb__parse__HeadVar__3_3)
#line 157 "parse.m"
{
#line 157 "parse.m"
  {
#line 157 "parse.m"
    MR_bool mdb__parse__succeeded;
#line 157 "parse.m"
    MR_Integer mdb__parse__Cast_HeadVar1_4 = (MR_Integer) mdb__parse__HeadVar__2_2;
#line 157 "parse.m"
    MR_Integer mdb__parse__Cast_HeadVar2_5 = (MR_Integer) mdb__parse__HeadVar__3_3;

#line 157 "parse.m"
    {
#line 157 "parse.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__parse__HeadVar__1_1, mdb__parse__Cast_HeadVar1_4, mdb__parse__Cast_HeadVar2_5);
    }
#line 157 "parse.m"
  }
#line 157 "parse.m"
}

#line 157 "parse.m"
MR_bool MR_CALL 
mdb__parse____Unify____format_option_0_0(
#line 157 "parse.m"
  MR_Word mdb__parse__HeadVar__2_1,
#line 157 "parse.m"
  MR_Word mdb__parse__HeadVar__2_2)
#line 157 "parse.m"
{
#line 4514 "mdb.parse.c"
  {
#line 4516 "mdb.parse.c"
    MR_bool mdb__parse__succeeded = (mdb__parse__HeadVar__2_1 == mdb__parse__HeadVar__2_2);

#line 4519 "mdb.parse.c"
    return mdb__parse__succeeded;
#line 4521 "mdb.parse.c"
  }
#line 157 "parse.m"
}

#line 176 "parse.m"
void MR_CALL 
mdb__parse____Compare____external_request_0_0(
#line 176 "parse.m"
  MR_Word * mdb__parse__HeadVar__1_1,
#line 176 "parse.m"
  MR_Word mdb__parse__HeadVar__2_2,
#line 176 "parse.m"
  MR_Word mdb__parse__HeadVar__3_3)
#line 176 "parse.m"
{
#line 176 "parse.m"
  {
#line 176 "parse.m"
    MR_bool mdb__parse__succeeded;
#line 176 "parse.m"
    MR_Integer mdb__parse__CastX_6 = (MR_Integer) mdb__parse__HeadVar__2_2;
#line 176 "parse.m"
    MR_Integer mdb__parse__CastY_7 = (MR_Integer) mdb__parse__HeadVar__3_3;

#line 176 "parse.m"
    mdb__parse__succeeded = (mdb__parse__CastX_6 == mdb__parse__CastY_7);
#line 176 "parse.m"
    if (mdb__parse__succeeded)
#line 4550 "mdb.parse.c"
      *mdb__parse__HeadVar__1_1 = (MR_Integer) 0;
#line 176 "parse.m"
    else
#line 176 "parse.m"
      {
#line 176 "parse.m"
        MR_String mdb__parse__V_4_4 = (MR_String) mdb__parse__HeadVar__2_2;
#line 176 "parse.m"
        MR_String mdb__parse__V_5_5 = (MR_String) mdb__parse__HeadVar__3_3;

#line 176 "parse.m"
        {
#line 176 "parse.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(mdb__parse__HeadVar__1_1, mdb__parse__V_4_4, mdb__parse__V_5_5);
        }
#line 176 "parse.m"
      }
#line 176 "parse.m"
  }
#line 176 "parse.m"
}

#line 176 "parse.m"
MR_bool MR_CALL 
mdb__parse____Unify____external_request_0_0(
#line 176 "parse.m"
  MR_Word mdb__parse__HeadVar__1_1,
#line 176 "parse.m"
  MR_Word mdb__parse__HeadVar__2_2)
#line 176 "parse.m"
{
#line 176 "parse.m"
  {
#line 176 "parse.m"
    MR_bool mdb__parse__succeeded;
#line 176 "parse.m"
    MR_Integer mdb__parse__CastX_5 = (MR_Integer) mdb__parse__HeadVar__1_1;
#line 176 "parse.m"
    MR_Integer mdb__parse__CastY_6 = (MR_Integer) mdb__parse__HeadVar__2_2;

#line 176 "parse.m"
    mdb__parse__succeeded = (mdb__parse__CastX_5 == mdb__parse__CastY_6);
#line 176 "parse.m"
    if (mdb__parse__succeeded)
#line 176 "parse.m"
      mdb__parse__succeeded = MR_TRUE;
#line 176 "parse.m"
    else
#line 176 "parse.m"
      {
#line 176 "parse.m"
        MR_String mdb__parse__V_3_3 = (MR_String) mdb__parse__HeadVar__1_1;
#line 176 "parse.m"
        MR_String mdb__parse__V_4_4 = (MR_String) mdb__parse__HeadVar__2_2;

#line 4606 "mdb.parse.c"
        mdb__parse__succeeded = (strcmp(mdb__parse__V_3_3, mdb__parse__V_4_4) == 0);
#line 176 "parse.m"
      }
#line 176 "parse.m"
    return mdb__parse__succeeded;
#line 176 "parse.m"
  }
#line 176 "parse.m"
}

#line 130 "parse.m"
void MR_CALL 
mdb__parse____Compare____command_0_0(
#line 130 "parse.m"
  MR_Word * mdb__parse__HeadVar__1_1,
#line 130 "parse.m"
  MR_Word mdb__parse__HeadVar__2_2,
#line 130 "parse.m"
  MR_Word mdb__parse__HeadVar__3_3)
#line 130 "parse.m"
{
#line 130 "parse.m"
  {
#line 130 "parse.m"
    MR_bool mdb__parse__succeeded;
#line 130 "parse.m"
    MR_Integer mdb__parse__CastX_28 = (MR_Integer) mdb__parse__HeadVar__2_2;
#line 130 "parse.m"
    MR_Integer mdb__parse__CastY_29 = (MR_Integer) mdb__parse__HeadVar__3_3;

#line 130 "parse.m"
    mdb__parse__succeeded = (mdb__parse__CastX_28 == mdb__parse__CastY_29);
#line 130 "parse.m"
    if (mdb__parse__succeeded)
#line 4641 "mdb.parse.c"
      *mdb__parse__HeadVar__1_1 = (MR_Integer) 0;
#line 130 "parse.m"
    else
#line 130 "parse.m"
      {
#line 130 "parse.m"
        MR_Integer mdb__parse__V_4_4;
#line 130 "parse.m"
        MR_Integer mdb__parse__V_5_5;

#line 130 "parse.m"
        {
#line 130 "parse.m"
          mdb__parse____Index____command_0_0(mdb__parse__HeadVar__2_2, &mdb__parse__V_4_4);
        }
#line 130 "parse.m"
        {
#line 130 "parse.m"
          mdb__parse____Index____command_0_0(mdb__parse__HeadVar__3_3, &mdb__parse__V_5_5);
        }
#line 130 "parse.m"
        mdb__parse__succeeded = (mdb__parse__V_4_4 < mdb__parse__V_5_5);
#line 130 "parse.m"
        if (mdb__parse__succeeded)
#line 4666 "mdb.parse.c"
          *mdb__parse__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "parse.m"
        else
#line 130 "parse.m"
          {
#line 130 "parse.m"
            mdb__parse__succeeded = (mdb__parse__V_4_4 > mdb__parse__V_5_5);
#line 130 "parse.m"
            if (mdb__parse__succeeded)
#line 4676 "mdb.parse.c"
              *mdb__parse__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "parse.m"
            else
#line 130 "parse.m"
              {
#line 130 "parse.m"
                MR_Word mdb__parse__V_6_6;

#line 130 "parse.m"
#line 130 "parse.m"
                switch (MR_tag((MR_Word) mdb__parse__HeadVar__2_2)) {
#line 130 "parse.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 130 "parse.m"
                  case (MR_Integer) 0:
#line 130 "parse.m"
#line 130 "parse.m"
                    switch (MR_unmkbody(mdb__parse__HeadVar__2_2)) {
#line 130 "parse.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 130 "parse.m"
                      case (MR_Integer) 0:
#line 130 "parse.m"
                        {
#line 130 "parse.m"
                          mdb__parse__V_6_6 = (MR_Integer) 0;
#line 130 "parse.m"
                          mdb__parse__succeeded = MR_TRUE;
#line 130 "parse.m"
                        }
#line 130 "parse.m"
                        break;
#line 130 "parse.m"
                      case (MR_Integer) 1:
#line 130 "parse.m"
                        {
#line 130 "parse.m"
                          mdb__parse__V_6_6 = (MR_Integer) 0;
#line 130 "parse.m"
                          mdb__parse__succeeded = MR_TRUE;
#line 130 "parse.m"
                        }
#line 130 "parse.m"
                        break;
#line 130 "parse.m"
                      case (MR_Integer) 2:
#line 130 "parse.m"
                        {
#line 130 "parse.m"
                          mdb__parse__V_6_6 = (MR_Integer) 0;
#line 130 "parse.m"
                          mdb__parse__succeeded = MR_TRUE;
#line 130 "parse.m"
                        }
#line 130 "parse.m"
                        break;
#line 130 "parse.m"
                      case (MR_Integer) 3:
#line 130 "parse.m"
                        {
#line 130 "parse.m"
                          mdb__parse__V_6_6 = (MR_Integer) 0;
#line 130 "parse.m"
                          mdb__parse__succeeded = MR_TRUE;
#line 130 "parse.m"
                        }
#line 130 "parse.m"
                        break;
#line 130 "parse.m"
                      case (MR_Integer) 4:
#line 130 "parse.m"
                        {
#line 130 "parse.m"
                          mdb__parse__V_6_6 = (MR_Integer) 0;
#line 130 "parse.m"
                          mdb__parse__succeeded = MR_TRUE;
#line 130 "parse.m"
                        }
#line 130 "parse.m"
                        break;
#line 130 "parse.m"
                      case (MR_Integer) 5:
#line 130 "parse.m"
                        {
#line 130 "parse.m"
                          mdb__parse__V_6_6 = (MR_Integer) 0;
#line 130 "parse.m"
                          mdb__parse__succeeded = MR_TRUE;
#line 130 "parse.m"
                        }
#line 130 "parse.m"
                        break;
#line 130 "parse.m"
                      case (MR_Integer) 6:
#line 130 "parse.m"
                        {
#line 130 "parse.m"
                          mdb__parse__V_6_6 = (MR_Integer) 0;
#line 130 "parse.m"
                          mdb__parse__succeeded = MR_TRUE;
#line 130 "parse.m"
                        }
#line 130 "parse.m"
                        break;
#line 130 "parse.m"
                      case (MR_Integer) 7:
#line 130 "parse.m"
                        {
#line 130 "parse.m"
                          mdb__parse__V_6_6 = (MR_Integer) 0;
#line 130 "parse.m"
                          mdb__parse__succeeded = MR_TRUE;
#line 130 "parse.m"
                        }
#line 130 "parse.m"
                        break;
#line 130 "parse.m"
                      case (MR_Integer) 8:
#line 130 "parse.m"
                        {
#line 130 "parse.m"
                          mdb__parse__V_6_6 = (MR_Integer) 0;
#line 130 "parse.m"
                          mdb__parse__succeeded = MR_TRUE;
#line 130 "parse.m"
                        }
#line 130 "parse.m"
                        break;
#line 130 "parse.m"
                    }
#line 130 "parse.m"
                    break;
#line 130 "parse.m"
                  case (MR_Integer) 1:
#line 130 "parse.m"
                    {
#line 130 "parse.m"
                      MR_Word mdb__parse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__2_2, (MR_Integer) 0)));
#line 130 "parse.m"
                      MR_Word mdb__parse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__2_2, (MR_Integer) 1)));
#line 130 "parse.m"
                      MR_Word mdb__parse__V_9_9;
#line 130 "parse.m"
                      MR_Word mdb__parse__V_10_10;
#line 130 "parse.m"
                      MR_Word mdb__parse__V_11_11;
#line 130 "parse.m"
                      MR_Word mdb__parse__TypeInfo_30_30;

#line 130 "parse.m"
                      mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 130 "parse.m"
                      if (mdb__parse__succeeded)
#line 130 "parse.m"
                        {
#line 130 "parse.m"
                          mdb__parse__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__3_3, (MR_Integer) 0)));
#line 130 "parse.m"
                          mdb__parse__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__3_3, (MR_Integer) 1)));
#line 4836 "mdb.parse.c"
                          mdb__parse__TypeInfo_30_30 = (MR_Word) &mdb__parse_scalar_common_1[2];
#line 130 "parse.m"
                          {
#line 130 "parse.m"
                            mercury__builtin__compare_3_p_0(mdb__parse__TypeInfo_30_30, &mdb__parse__V_11_11, ((MR_Box) (mdb__parse__V_7_7)), ((MR_Box) (mdb__parse__V_9_9)));
                          }
#line 4843 "mdb.parse.c"
                          mdb__parse__succeeded = (mdb__parse__V_11_11 == (MR_Integer) 0);
#line 130 "parse.m"
                          mdb__parse__succeeded = !(mdb__parse__succeeded);
#line 130 "parse.m"
                          if (mdb__parse__succeeded)
#line 130 "parse.m"
                            mdb__parse__V_6_6 = mdb__parse__V_11_11;
#line 130 "parse.m"
                          else
#line 130 "parse.m"
                            {
#line 130 "parse.m"
                              {
#line 130 "parse.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &mdb__parse_scalar_common_1[3], &mdb__parse__V_6_6, ((MR_Box) (mdb__parse__V_8_8)), ((MR_Box) (mdb__parse__V_10_10)));
                              }
#line 130 "parse.m"
                            }
#line 130 "parse.m"
                          mdb__parse__succeeded = MR_TRUE;
#line 130 "parse.m"
                        }
#line 130 "parse.m"
                    }
#line 130 "parse.m"
                    break;
#line 130 "parse.m"
                  case (MR_Integer) 2:
#line 130 "parse.m"
                    {
#line 130 "parse.m"
                      MR_Word mdb__parse__TypeInfo_32_32;
#line 130 "parse.m"
                      MR_Word mdb__parse__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__parse__HeadVar__2_2, (MR_Integer) 0)));
#line 130 "parse.m"
                      MR_Word mdb__parse__V_13_13;

#line 130 "parse.m"
                      mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 130 "parse.m"
                      if (mdb__parse__succeeded)
#line 130 "parse.m"
                        {
#line 130 "parse.m"
                          mdb__parse__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__parse__HeadVar__3_3, (MR_Integer) 0)));
#line 4889 "mdb.parse.c"
                          mdb__parse__TypeInfo_32_32 = (MR_Word) &mdb__parse_scalar_common_1[3];
#line 130 "parse.m"
                          {
#line 130 "parse.m"
                            mercury__builtin__compare_3_p_0(mdb__parse__TypeInfo_32_32, &mdb__parse__V_6_6, ((MR_Box) (mdb__parse__V_12_12)), ((MR_Box) (mdb__parse__V_13_13)));
                          }
#line 130 "parse.m"
                          mdb__parse__succeeded = MR_TRUE;
#line 130 "parse.m"
                        }
#line 130 "parse.m"
                    }
#line 130 "parse.m"
                    break;
#line 130 "parse.m"
                  case (MR_Integer) 3:
#line 130 "parse.m"
#line 130 "parse.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 0)))) {
#line 130 "parse.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 130 "parse.m"
                      case (MR_Integer) 0:
#line 130 "parse.m"
                        {
#line 130 "parse.m"
                          MR_Word mdb__parse__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 1)));
#line 130 "parse.m"
                          MR_Word mdb__parse__V_15_15;

#line 130 "parse.m"
                          mdb__parse__succeeded = ((((MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 130 "parse.m"
                          if (mdb__parse__succeeded)
#line 130 "parse.m"
                            {
#line 130 "parse.m"
                              mdb__parse__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 1)));
#line 130 "parse.m"
                              {
#line 130 "parse.m"
                                mdb__parse____Compare____path_0_0(&mdb__parse__V_6_6, mdb__parse__V_14_14, mdb__parse__V_15_15);
                              }
#line 130 "parse.m"
                              mdb__parse__succeeded = MR_TRUE;
#line 130 "parse.m"
                            }
#line 130 "parse.m"
                        }
#line 130 "parse.m"
                        break;
#line 130 "parse.m"
                      case (MR_Integer) 1:
#line 130 "parse.m"
                        {
#line 130 "parse.m"
                          MR_Word mdb__parse__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 130 "parse.m"
                          MR_Word mdb__parse__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 130 "parse.m"
                          MR_Word mdb__parse__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 2)));
#line 130 "parse.m"
                          MR_Word mdb__parse__V_19_19;
#line 130 "parse.m"
                          MR_Word mdb__parse__V_20_20;
#line 130 "parse.m"
                          MR_Word mdb__parse__V_21_21;
#line 130 "parse.m"
                          MR_Word mdb__parse__V_22_22;
#line 130 "parse.m"
                          MR_Integer mdb__parse__V_39_39;
#line 130 "parse.m"
                          MR_Integer mdb__parse__V_40_40;

#line 130 "parse.m"
                          mdb__parse__succeeded = ((((MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 130 "parse.m"
                          if (mdb__parse__succeeded)
#line 130 "parse.m"
                            {
#line 130 "parse.m"
                              mdb__parse__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 130 "parse.m"
                              mdb__parse__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 130 "parse.m"
                              mdb__parse__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 2)));
#line 130 "parse.m"
                              mdb__parse__V_39_39 = (MR_Integer) mdb__parse__V_16_16;
#line 130 "parse.m"
                              mdb__parse__V_40_40 = (MR_Integer) mdb__parse__V_19_19;
#line 130 "parse.m"
                              {
#line 130 "parse.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__parse__V_22_22, mdb__parse__V_39_39, mdb__parse__V_40_40);
                              }
#line 4985 "mdb.parse.c"
                              mdb__parse__succeeded = (mdb__parse__V_22_22 == (MR_Integer) 0);
#line 130 "parse.m"
                              mdb__parse__succeeded = !(mdb__parse__succeeded);
#line 130 "parse.m"
                              if (mdb__parse__succeeded)
#line 130 "parse.m"
                                mdb__parse__V_6_6 = mdb__parse__V_22_22;
#line 130 "parse.m"
                              else
#line 130 "parse.m"
                                {
#line 130 "parse.m"
                                  MR_Word mdb__parse__V_23_23;
#line 130 "parse.m"
                                  MR_Integer mdb__parse__V_41_41 = (MR_Integer) mdb__parse__V_17_17;
#line 130 "parse.m"
                                  MR_Integer mdb__parse__V_42_42 = (MR_Integer) mdb__parse__V_20_20;

#line 130 "parse.m"
                                  {
#line 130 "parse.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__parse__V_23_23, mdb__parse__V_41_41, mdb__parse__V_42_42);
                                  }
#line 5009 "mdb.parse.c"
                                  mdb__parse__succeeded = (mdb__parse__V_23_23 == (MR_Integer) 0);
#line 130 "parse.m"
                                  mdb__parse__succeeded = !(mdb__parse__succeeded);
#line 130 "parse.m"
                                  if (mdb__parse__succeeded)
#line 130 "parse.m"
                                    mdb__parse__V_6_6 = mdb__parse__V_23_23;
#line 130 "parse.m"
                                  else
#line 130 "parse.m"
                                    {
#line 130 "parse.m"
                                      {
#line 130 "parse.m"
                                        mercury__builtin__compare_3_p_0((MR_Word) &mdb__parse_scalar_common_1[3], &mdb__parse__V_6_6, ((MR_Box) (mdb__parse__V_18_18)), ((MR_Box) (mdb__parse__V_21_21)));
                                      }
#line 130 "parse.m"
                                    }
#line 130 "parse.m"
                                }
#line 130 "parse.m"
                              mdb__parse__succeeded = MR_TRUE;
#line 130 "parse.m"
                            }
#line 130 "parse.m"
                        }
#line 130 "parse.m"
                        break;
#line 130 "parse.m"
                      case (MR_Integer) 2:
#line 130 "parse.m"
                        {
#line 130 "parse.m"
                          MR_Word mdb__parse__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 1)));
#line 130 "parse.m"
                          MR_Word mdb__parse__V_25_25;

#line 130 "parse.m"
                          mdb__parse__succeeded = ((((MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 130 "parse.m"
                          if (mdb__parse__succeeded)
#line 130 "parse.m"
                            {
#line 130 "parse.m"
                              mdb__parse__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 1)));
#line 130 "parse.m"
                              {
#line 130 "parse.m"
                                mdb__parse____Compare____path_0_0(&mdb__parse__V_6_6, mdb__parse__V_24_24, mdb__parse__V_25_25);
                              }
#line 130 "parse.m"
                              mdb__parse__succeeded = MR_TRUE;
#line 130 "parse.m"
                            }
#line 130 "parse.m"
                        }
#line 130 "parse.m"
                        break;
#line 130 "parse.m"
                      case (MR_Integer) 3:
#line 130 "parse.m"
                        {
#line 130 "parse.m"
                          MR_Word mdb__parse__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 1)));
#line 130 "parse.m"
                          MR_Word mdb__parse__V_27_27;

#line 130 "parse.m"
                          mdb__parse__succeeded = ((((MR_tag((MR_Word) mdb__parse__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 130 "parse.m"
                          if (mdb__parse__succeeded)
#line 130 "parse.m"
                            {
#line 130 "parse.m"
                              mdb__parse__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__3_3, (MR_Integer) 1)));
#line 130 "parse.m"
                              {
#line 130 "parse.m"
                                mdb__browser_info____Compare____param_cmd_0_0(&mdb__parse__V_6_6, mdb__parse__V_26_26, mdb__parse__V_27_27);
                              }
#line 130 "parse.m"
                              mdb__parse__succeeded = MR_TRUE;
#line 130 "parse.m"
                            }
#line 130 "parse.m"
                        }
#line 130 "parse.m"
                        break;
#line 130 "parse.m"
                    }
#line 130 "parse.m"
                    break;
#line 130 "parse.m"
                }
#line 130 "parse.m"
                if (mdb__parse__succeeded)
#line 130 "parse.m"
                  *mdb__parse__HeadVar__1_1 = mdb__parse__V_6_6;
#line 130 "parse.m"
                else
#line 130 "parse.m"
                  {
#line 130 "parse.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 130 "parse.m"
                    return;
                  }
#line 130 "parse.m"
              }
#line 130 "parse.m"
          }
#line 130 "parse.m"
      }
#line 130 "parse.m"
  }
#line 130 "parse.m"
}

#line 130 "parse.m"
void MR_CALL 
mdb__parse____Index____command_0_0(
#line 130 "parse.m"
  MR_Word mdb__parse__HeadVar__1_1,
#line 130 "parse.m"
  MR_Integer * mdb__parse__HeadVar__2_2)
#line 130 "parse.m"
{
#line 130 "parse.m"
  {
#line 130 "parse.m"
    MR_bool mdb__parse__succeeded;

#line 130 "parse.m"
#line 130 "parse.m"
    switch (MR_tag((MR_Word) mdb__parse__HeadVar__1_1)) {
#line 130 "parse.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 130 "parse.m"
      case (MR_Integer) 0:
#line 130 "parse.m"
#line 130 "parse.m"
        switch (MR_unmkbody(mdb__parse__HeadVar__1_1)) {
#line 130 "parse.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 130 "parse.m"
          case (MR_Integer) 0:
#line 5156 "mdb.parse.c"
            *mdb__parse__HeadVar__2_2 = (MR_Integer) 1;
#line 130 "parse.m"
            break;
#line 130 "parse.m"
          case (MR_Integer) 1:
#line 5162 "mdb.parse.c"
            *mdb__parse__HeadVar__2_2 = (MR_Integer) 2;
#line 130 "parse.m"
            break;
#line 130 "parse.m"
          case (MR_Integer) 2:
#line 5168 "mdb.parse.c"
            *mdb__parse__HeadVar__2_2 = (MR_Integer) 5;
#line 130 "parse.m"
            break;
#line 130 "parse.m"
          case (MR_Integer) 3:
#line 5174 "mdb.parse.c"
            *mdb__parse__HeadVar__2_2 = (MR_Integer) 6;
#line 130 "parse.m"
            break;
#line 130 "parse.m"
          case (MR_Integer) 4:
#line 5180 "mdb.parse.c"
            *mdb__parse__HeadVar__2_2 = (MR_Integer) 9;
#line 130 "parse.m"
            break;
#line 130 "parse.m"
          case (MR_Integer) 5:
#line 5186 "mdb.parse.c"
            *mdb__parse__HeadVar__2_2 = (MR_Integer) 11;
#line 130 "parse.m"
            break;
#line 130 "parse.m"
          case (MR_Integer) 6:
#line 5192 "mdb.parse.c"
            *mdb__parse__HeadVar__2_2 = (MR_Integer) 12;
#line 130 "parse.m"
            break;
#line 130 "parse.m"
          case (MR_Integer) 7:
#line 5198 "mdb.parse.c"
            *mdb__parse__HeadVar__2_2 = (MR_Integer) 13;
#line 130 "parse.m"
            break;
#line 130 "parse.m"
          case (MR_Integer) 8:
#line 5204 "mdb.parse.c"
            *mdb__parse__HeadVar__2_2 = (MR_Integer) 14;
#line 130 "parse.m"
            break;
#line 130 "parse.m"
        }
#line 130 "parse.m"
        break;
#line 130 "parse.m"
      case (MR_Integer) 1:
#line 5214 "mdb.parse.c"
        *mdb__parse__HeadVar__2_2 = (MR_Integer) 0;
#line 130 "parse.m"
        break;
#line 130 "parse.m"
      case (MR_Integer) 2:
#line 5220 "mdb.parse.c"
        *mdb__parse__HeadVar__2_2 = (MR_Integer) 3;
#line 130 "parse.m"
        break;
#line 130 "parse.m"
      case (MR_Integer) 3:
#line 130 "parse.m"
#line 130 "parse.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__1_1, (MR_Integer) 0)))) {
#line 130 "parse.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 130 "parse.m"
          case (MR_Integer) 0:
#line 5233 "mdb.parse.c"
            *mdb__parse__HeadVar__2_2 = (MR_Integer) 4;
#line 130 "parse.m"
            break;
#line 130 "parse.m"
          case (MR_Integer) 1:
#line 5239 "mdb.parse.c"
            *mdb__parse__HeadVar__2_2 = (MR_Integer) 7;
#line 130 "parse.m"
            break;
#line 130 "parse.m"
          case (MR_Integer) 2:
#line 5245 "mdb.parse.c"
            *mdb__parse__HeadVar__2_2 = (MR_Integer) 8;
#line 130 "parse.m"
            break;
#line 130 "parse.m"
          case (MR_Integer) 3:
#line 5251 "mdb.parse.c"
            *mdb__parse__HeadVar__2_2 = (MR_Integer) 10;
#line 130 "parse.m"
            break;
#line 130 "parse.m"
        }
#line 130 "parse.m"
        break;
#line 130 "parse.m"
    }
#line 130 "parse.m"
  }
#line 130 "parse.m"
}

#line 130 "parse.m"
MR_bool MR_CALL 
mdb__parse____Unify____command_0_0(
#line 130 "parse.m"
  MR_Word mdb__parse__HeadVar__1_1,
#line 130 "parse.m"
  MR_Word mdb__parse__HeadVar__2_2)
#line 130 "parse.m"
{
#line 130 "parse.m"
  {
#line 130 "parse.m"
    MR_bool mdb__parse__succeeded;
#line 130 "parse.m"
    MR_Integer mdb__parse__CastX_39 = (MR_Integer) mdb__parse__HeadVar__1_1;
#line 130 "parse.m"
    MR_Integer mdb__parse__CastY_40 = (MR_Integer) mdb__parse__HeadVar__2_2;

#line 130 "parse.m"
    mdb__parse__succeeded = (mdb__parse__CastX_39 == mdb__parse__CastY_40);
#line 130 "parse.m"
    if (mdb__parse__succeeded)
#line 130 "parse.m"
      mdb__parse__succeeded = MR_TRUE;
#line 130 "parse.m"
    else
#line 130 "parse.m"
#line 130 "parse.m"
      switch (MR_tag((MR_Word) mdb__parse__HeadVar__1_1)) {
#line 130 "parse.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 130 "parse.m"
        case (MR_Integer) 0:
#line 130 "parse.m"
#line 130 "parse.m"
          switch (MR_unmkbody(mdb__parse__HeadVar__1_1)) {
#line 130 "parse.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 130 "parse.m"
            case (MR_Integer) 0:
#line 130 "parse.m"
              {
#line 130 "parse.m"
                MR_Integer mdb__parse__CastX_7 = (MR_Integer) mdb__parse__HeadVar__1_1;
#line 130 "parse.m"
                MR_Integer mdb__parse__CastY_8 = (MR_Integer) mdb__parse__HeadVar__2_2;

#line 130 "parse.m"
                mdb__parse__succeeded = (mdb__parse__CastY_8 == mdb__parse__CastX_7);
#line 130 "parse.m"
              }
#line 130 "parse.m"
              break;
#line 130 "parse.m"
            case (MR_Integer) 1:
#line 130 "parse.m"
              {
#line 130 "parse.m"
                MR_Integer mdb__parse__CastX_9 = (MR_Integer) mdb__parse__HeadVar__1_1;
#line 130 "parse.m"
                MR_Integer mdb__parse__CastY_10 = (MR_Integer) mdb__parse__HeadVar__2_2;

#line 130 "parse.m"
                mdb__parse__succeeded = (mdb__parse__CastY_10 == mdb__parse__CastX_9);
#line 130 "parse.m"
              }
#line 130 "parse.m"
              break;
#line 130 "parse.m"
            case (MR_Integer) 2:
#line 130 "parse.m"
              {
#line 130 "parse.m"
                MR_Integer mdb__parse__CastX_15 = (MR_Integer) mdb__parse__HeadVar__1_1;
#line 130 "parse.m"
                MR_Integer mdb__parse__CastY_16 = (MR_Integer) mdb__parse__HeadVar__2_2;

#line 130 "parse.m"
                mdb__parse__succeeded = (mdb__parse__CastY_16 == mdb__parse__CastX_15);
#line 130 "parse.m"
              }
#line 130 "parse.m"
              break;
#line 130 "parse.m"
            case (MR_Integer) 3:
#line 130 "parse.m"
              {
#line 130 "parse.m"
                MR_Integer mdb__parse__CastX_17 = (MR_Integer) mdb__parse__HeadVar__1_1;
#line 130 "parse.m"
                MR_Integer mdb__parse__CastY_18 = (MR_Integer) mdb__parse__HeadVar__2_2;

#line 130 "parse.m"
                mdb__parse__succeeded = (mdb__parse__CastY_18 == mdb__parse__CastX_17);
#line 130 "parse.m"
              }
#line 130 "parse.m"
              break;
#line 130 "parse.m"
            case (MR_Integer) 4:
#line 130 "parse.m"
              {
#line 130 "parse.m"
                MR_Integer mdb__parse__CastX_27 = (MR_Integer) mdb__parse__HeadVar__1_1;
#line 130 "parse.m"
                MR_Integer mdb__parse__CastY_28 = (MR_Integer) mdb__parse__HeadVar__2_2;

#line 130 "parse.m"
                mdb__parse__succeeded = (mdb__parse__CastY_28 == mdb__parse__CastX_27);
#line 130 "parse.m"
              }
#line 130 "parse.m"
              break;
#line 130 "parse.m"
            case (MR_Integer) 5:
#line 130 "parse.m"
              {
#line 130 "parse.m"
                MR_Integer mdb__parse__CastX_31 = (MR_Integer) mdb__parse__HeadVar__1_1;
#line 130 "parse.m"
                MR_Integer mdb__parse__CastY_32 = (MR_Integer) mdb__parse__HeadVar__2_2;

#line 130 "parse.m"
                mdb__parse__succeeded = (mdb__parse__CastY_32 == mdb__parse__CastX_31);
#line 130 "parse.m"
              }
#line 130 "parse.m"
              break;
#line 130 "parse.m"
            case (MR_Integer) 6:
#line 130 "parse.m"
              {
#line 130 "parse.m"
                MR_Integer mdb__parse__CastX_33 = (MR_Integer) mdb__parse__HeadVar__1_1;
#line 130 "parse.m"
                MR_Integer mdb__parse__CastY_34 = (MR_Integer) mdb__parse__HeadVar__2_2;

#line 130 "parse.m"
                mdb__parse__succeeded = (mdb__parse__CastY_34 == mdb__parse__CastX_33);
#line 130 "parse.m"
              }
#line 130 "parse.m"
              break;
#line 130 "parse.m"
            case (MR_Integer) 7:
#line 130 "parse.m"
              {
#line 130 "parse.m"
                MR_Integer mdb__parse__CastX_35 = (MR_Integer) mdb__parse__HeadVar__1_1;
#line 130 "parse.m"
                MR_Integer mdb__parse__CastY_36 = (MR_Integer) mdb__parse__HeadVar__2_2;

#line 130 "parse.m"
                mdb__parse__succeeded = (mdb__parse__CastY_36 == mdb__parse__CastX_35);
#line 130 "parse.m"
              }
#line 130 "parse.m"
              break;
#line 130 "parse.m"
            case (MR_Integer) 8:
#line 130 "parse.m"
              {
#line 130 "parse.m"
                MR_Integer mdb__parse__CastX_37 = (MR_Integer) mdb__parse__HeadVar__1_1;
#line 130 "parse.m"
                MR_Integer mdb__parse__CastY_38 = (MR_Integer) mdb__parse__HeadVar__2_2;

#line 130 "parse.m"
                mdb__parse__succeeded = (mdb__parse__CastY_38 == mdb__parse__CastX_37);
#line 130 "parse.m"
              }
#line 130 "parse.m"
              break;
#line 130 "parse.m"
          }
#line 130 "parse.m"
          break;
#line 130 "parse.m"
        case (MR_Integer) 1:
#line 130 "parse.m"
          {
#line 130 "parse.m"
            MR_Word mdb__parse__TypeInfo_43_43;
#line 130 "parse.m"
            MR_Word mdb__parse__TypeInfo_44_44;
#line 130 "parse.m"
            MR_Word mdb__parse__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__1_1, (MR_Integer) 0)));
#line 130 "parse.m"
            MR_Word mdb__parse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__1_1, (MR_Integer) 1)));
#line 130 "parse.m"
            MR_Word mdb__parse__V_5_5;
#line 130 "parse.m"
            MR_Word mdb__parse__V_6_6;

#line 130 "parse.m"
            mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 130 "parse.m"
            if (mdb__parse__succeeded)
#line 130 "parse.m"
              {
#line 130 "parse.m"
                mdb__parse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__2_2, (MR_Integer) 0)));
#line 130 "parse.m"
                mdb__parse__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__2_2, (MR_Integer) 1)));
#line 5470 "mdb.parse.c"
                mdb__parse__TypeInfo_43_43 = (MR_Word) &mdb__parse_scalar_common_1[2];
#line 5472 "mdb.parse.c"
                {
#line 5474 "mdb.parse.c"
                  mdb__parse__succeeded = mercury__builtin__unify_2_p_0(mdb__parse__TypeInfo_43_43, ((MR_Box) (mdb__parse__V_3_3)), ((MR_Box) (mdb__parse__V_5_5)));
                }
#line 130 "parse.m"
                if (mdb__parse__succeeded)
#line 130 "parse.m"
                  {
#line 5481 "mdb.parse.c"
                    mdb__parse__TypeInfo_44_44 = (MR_Word) &mdb__parse_scalar_common_1[3];
#line 5483 "mdb.parse.c"
                    {
#line 5485 "mdb.parse.c"
                      mdb__parse__succeeded = mercury__builtin__unify_2_p_0(mdb__parse__TypeInfo_44_44, ((MR_Box) (mdb__parse__V_4_4)), ((MR_Box) (mdb__parse__V_6_6)));
                    }
#line 130 "parse.m"
                  }
#line 130 "parse.m"
              }
#line 130 "parse.m"
          }
#line 130 "parse.m"
          break;
#line 130 "parse.m"
        case (MR_Integer) 2:
#line 130 "parse.m"
          {
#line 130 "parse.m"
            MR_Word mdb__parse__TypeInfo_41_41;
#line 130 "parse.m"
            MR_Word mdb__parse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__parse__HeadVar__1_1, (MR_Integer) 0)));
#line 130 "parse.m"
            MR_Word mdb__parse__V_12_12;

#line 130 "parse.m"
            mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 130 "parse.m"
            if (mdb__parse__succeeded)
#line 130 "parse.m"
              {
#line 130 "parse.m"
                mdb__parse__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__parse__HeadVar__2_2, (MR_Integer) 0)));
#line 5515 "mdb.parse.c"
                mdb__parse__TypeInfo_41_41 = (MR_Word) &mdb__parse_scalar_common_1[3];
#line 5517 "mdb.parse.c"
                {
#line 5519 "mdb.parse.c"
                  mdb__parse__succeeded = mercury__builtin__unify_2_p_0(mdb__parse__TypeInfo_41_41, ((MR_Box) (mdb__parse__V_11_11)), ((MR_Box) (mdb__parse__V_12_12)));
                }
#line 130 "parse.m"
              }
#line 130 "parse.m"
          }
#line 130 "parse.m"
          break;
#line 130 "parse.m"
        case (MR_Integer) 3:
#line 130 "parse.m"
#line 130 "parse.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__1_1, (MR_Integer) 0)))) {
#line 130 "parse.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 130 "parse.m"
            case (MR_Integer) 0:
#line 130 "parse.m"
              {
#line 130 "parse.m"
                MR_Word mdb__parse__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__1_1, (MR_Integer) 1)));
#line 130 "parse.m"
                MR_Word mdb__parse__V_14_14;

#line 130 "parse.m"
                mdb__parse__succeeded = ((((MR_tag((MR_Word) mdb__parse__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 130 "parse.m"
                if (mdb__parse__succeeded)
#line 130 "parse.m"
                  {
#line 130 "parse.m"
                    mdb__parse__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 1)));
#line 5552 "mdb.parse.c"
                    {
#line 5554 "mdb.parse.c"
                      mdb__parse__succeeded = mdb__parse____Unify____path_0_0(mdb__parse__V_13_13, mdb__parse__V_14_14);
                    }
#line 130 "parse.m"
                  }
#line 130 "parse.m"
              }
#line 130 "parse.m"
              break;
#line 130 "parse.m"
            case (MR_Integer) 1:
#line 130 "parse.m"
              {
#line 130 "parse.m"
                MR_Word mdb__parse__TypeInfo_45_45;
#line 130 "parse.m"
                MR_Word mdb__parse__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 130 "parse.m"
                MR_Word mdb__parse__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 130 "parse.m"
                MR_Word mdb__parse__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__1_1, (MR_Integer) 2)));
#line 130 "parse.m"
                MR_Word mdb__parse__V_22_22;
#line 130 "parse.m"
                MR_Word mdb__parse__V_23_23;
#line 130 "parse.m"
                MR_Word mdb__parse__V_24_24;

#line 130 "parse.m"
                mdb__parse__succeeded = ((((MR_tag((MR_Word) mdb__parse__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 130 "parse.m"
                if (mdb__parse__succeeded)
#line 130 "parse.m"
                  {
#line 130 "parse.m"
                    mdb__parse__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 130 "parse.m"
                    mdb__parse__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 130 "parse.m"
                    mdb__parse__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 2)));
#line 5594 "mdb.parse.c"
                    mdb__parse__succeeded = (mdb__parse__V_19_19 == mdb__parse__V_22_22);
#line 130 "parse.m"
                    if (mdb__parse__succeeded)
#line 130 "parse.m"
                      {
#line 5600 "mdb.parse.c"
                        mdb__parse__succeeded = (mdb__parse__V_20_20 == mdb__parse__V_23_23);
#line 130 "parse.m"
                        if (mdb__parse__succeeded)
#line 130 "parse.m"
                          {
#line 5606 "mdb.parse.c"
                            mdb__parse__TypeInfo_45_45 = (MR_Word) &mdb__parse_scalar_common_1[3];
#line 5608 "mdb.parse.c"
                            {
#line 5610 "mdb.parse.c"
                              mdb__parse__succeeded = mercury__builtin__unify_2_p_0(mdb__parse__TypeInfo_45_45, ((MR_Box) (mdb__parse__V_21_21)), ((MR_Box) (mdb__parse__V_24_24)));
                            }
#line 130 "parse.m"
                          }
#line 130 "parse.m"
                      }
#line 130 "parse.m"
                  }
#line 130 "parse.m"
              }
#line 130 "parse.m"
              break;
#line 130 "parse.m"
            case (MR_Integer) 2:
#line 130 "parse.m"
              {
#line 130 "parse.m"
                MR_Word mdb__parse__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__1_1, (MR_Integer) 1)));
#line 130 "parse.m"
                MR_Word mdb__parse__V_26_26;

#line 130 "parse.m"
                mdb__parse__succeeded = ((((MR_tag((MR_Word) mdb__parse__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 130 "parse.m"
                if (mdb__parse__succeeded)
#line 130 "parse.m"
                  {
#line 130 "parse.m"
                    mdb__parse__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 1)));
#line 5640 "mdb.parse.c"
                    {
#line 5642 "mdb.parse.c"
                      mdb__parse__succeeded = mdb__parse____Unify____path_0_0(mdb__parse__V_25_25, mdb__parse__V_26_26);
                    }
#line 130 "parse.m"
                  }
#line 130 "parse.m"
              }
#line 130 "parse.m"
              break;
#line 130 "parse.m"
            case (MR_Integer) 3:
#line 130 "parse.m"
              {
#line 130 "parse.m"
                MR_Word mdb__parse__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__1_1, (MR_Integer) 1)));
#line 130 "parse.m"
                MR_Word mdb__parse__V_30_30;

#line 130 "parse.m"
                mdb__parse__succeeded = ((((MR_tag((MR_Word) mdb__parse__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 130 "parse.m"
                if (mdb__parse__succeeded)
#line 130 "parse.m"
                  {
#line 130 "parse.m"
                    mdb__parse__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadVar__2_2, (MR_Integer) 1)));
#line 5668 "mdb.parse.c"
                    {
#line 5670 "mdb.parse.c"
                      mdb__parse__succeeded = mdb__browser_info____Unify____param_cmd_0_0(mdb__parse__V_29_29, mdb__parse__V_30_30);
                    }
#line 130 "parse.m"
                  }
#line 130 "parse.m"
              }
#line 130 "parse.m"
              break;
#line 130 "parse.m"
          }
#line 130 "parse.m"
          break;
#line 130 "parse.m"
      }
#line 130 "parse.m"
    return mdb__parse__succeeded;
#line 130 "parse.m"
  }
#line 130 "parse.m"
}

#line 754 "parse.m"
static void MR_CALL 
mdb__parse__format_param_cmd_option_defaults_2_p_0(
#line 754 "parse.m"
  MR_Word * mdb__parse__HeadVar__1_1,
#line 754 "parse.m"
  MR_Word * mdb__parse__HeadVar__2_2,
#line 754 "parse.m"
  MR_Cont mdb__parse__cont,
#line 754 "parse.m"
  void * mdb__parse__cont_env_ptr)
#line 754 "parse.m"
{
#line 757 "parse.m"
  {
#line 757 "parse.m"
    MR_bool mdb__parse__succeeded;

#line 757 "parse.m"
    {
#line 757 "parse.m"
      MR_Integer mdb__parse__slot_0 = (MR_Integer) 0;

#line 757 "parse.m"
      do
#line 757 "parse.m"
        {
#line 757 "parse.m"
          *mdb__parse__HeadVar__1_1 = ((&mdb__parse_vector_common_10[7 + mdb__parse__slot_0]))->mdb__parse__vector_common_type_10_0__vct_10_f_0;
#line 757 "parse.m"
          *mdb__parse__HeadVar__2_2 = ((&mdb__parse_vector_common_10[7 + mdb__parse__slot_0]))->mdb__parse__vector_common_type_10_0__vct_10_f_1;
#line 757 "parse.m"
          {
#line 757 "parse.m"
            mdb__parse__cont(mdb__parse__cont_env_ptr);
          }
#line 757 "parse.m"
          mdb__parse__slot_0 = (mdb__parse__slot_0 + (MR_Integer) 1);
#line 757 "parse.m"
        }
#line 757 "parse.m"
      while ((mdb__parse__slot_0 < (MR_Integer) 7));
#line 757 "parse.m"
    }
#line 757 "parse.m"
  }
#line 754 "parse.m"
}

#line 743 "parse.m"
static MR_bool MR_CALL 
mdb__parse__long_format_param_cmd_option_2_p_0(
#line 743 "parse.m"
  MR_String mdb__parse__HeadVar__1_1,
#line 743 "parse.m"
  MR_Word * mdb__parse__HeadVar__2_2)
#line 743 "parse.m"
{
#line 746 "parse.m"
  {
#line 746 "parse.m"
    MR_bool mdb__parse__succeeded;
#line 746 "parse.m"
    MR_Integer mdb__parse__lo_0;
#line 746 "parse.m"
    MR_Integer mdb__parse__hi_1;
#line 746 "parse.m"
    MR_Integer mdb__parse__mid_2;
#line 746 "parse.m"
    MR_Integer mdb__parse__result_3;

#line 746 "parse.m"
    /* binary string simple lookup switch */
#line 746 "parse.m"
    mdb__parse__lo_0 = (MR_Integer) 0;
#line 746 "parse.m"
    mdb__parse__hi_1 = (MR_Integer) 6;
#line 746 "parse.m"
    do
#line 746 "parse.m"
      {
#line 746 "parse.m"
        mdb__parse__mid_2 = (((mdb__parse__lo_0 + mdb__parse__hi_1)) / (MR_Integer) 2);
#line 746 "parse.m"
        mdb__parse__result_3 = MR_strcmp(mdb__parse__HeadVar__1_1, ((&mdb__parse_vector_common_11[0 + mdb__parse__mid_2]))->mdb__parse__vector_common_type_11_0__vct_11_f_0);
#line 746 "parse.m"
        if ((mdb__parse__result_3 == (MR_Integer) 0))
#line 746 "parse.m"
          {
#line 746 "parse.m"
            *mdb__parse__HeadVar__2_2 = ((&mdb__parse_vector_common_11[0 + mdb__parse__mid_2]))->mdb__parse__vector_common_type_11_0__vct_11_f_1;
#line 746 "parse.m"
            mdb__parse__succeeded = MR_TRUE;
#line 746 "parse.m"
            /* jump out of search loop */
#line 746 "parse.m"
            goto label_0;
#line 746 "parse.m"
          }
#line 746 "parse.m"
        else
#line 746 "parse.m"
        if ((mdb__parse__result_3 < (MR_Integer) 0))
#line 746 "parse.m"
          mdb__parse__hi_1 = (mdb__parse__mid_2 - (MR_Integer) 1);
#line 746 "parse.m"
        else
#line 746 "parse.m"
          mdb__parse__lo_0 = (mdb__parse__mid_2 + (MR_Integer) 1);
#line 746 "parse.m"
      }
#line 746 "parse.m"
    while ((mdb__parse__lo_0 <= mdb__parse__hi_1));
#line 746 "parse.m"
    mdb__parse__succeeded = MR_FALSE;
#line 746 "parse.m"
  label_0:;
#line 746 "parse.m"
    return mdb__parse__succeeded;
#line 746 "parse.m"
  }
#line 743 "parse.m"
}

#line 732 "parse.m"
static MR_bool MR_CALL 
mdb__parse__short_format_param_cmd_option_2_p_0(
#line 732 "parse.m"
  MR_Char mdb__parse__HeadVar__1_1,
#line 732 "parse.m"
  MR_Word * mdb__parse__HeadVar__2_2)
#line 732 "parse.m"
{
#line 735 "parse.m"
  {
#line 735 "parse.m"
    MR_bool mdb__parse__succeeded;

#line 735 "parse.m"
#line 735 "parse.m"
    switch (mdb__parse__HeadVar__1_1) {
#line 735 "parse.m"
      default:
#line 735 "parse.m"
        mdb__parse__succeeded = MR_FALSE;
#line 735 "parse.m"
        break;
#line 735 "parse.m"
      case (MR_Char) 65:
#line 737 "parse.m"
        {
#line 737 "parse.m"
          *mdb__parse__HeadVar__2_2 = (MR_Integer) 2;
#line 737 "parse.m"
          mdb__parse__succeeded = MR_TRUE;
#line 737 "parse.m"
        }
#line 735 "parse.m"
        break;
#line 735 "parse.m"
      case (MR_Char) 66:
#line 736 "parse.m"
        {
#line 736 "parse.m"
          *mdb__parse__HeadVar__2_2 = (MR_Integer) 1;
#line 736 "parse.m"
          mdb__parse__succeeded = MR_TRUE;
#line 736 "parse.m"
        }
#line 735 "parse.m"
        break;
#line 735 "parse.m"
      case (MR_Char) 80:
#line 735 "parse.m"
        {
#line 735 "parse.m"
          *mdb__parse__HeadVar__2_2 = (MR_Integer) 0;
#line 735 "parse.m"
          mdb__parse__succeeded = MR_TRUE;
#line 735 "parse.m"
        }
#line 735 "parse.m"
        break;
#line 735 "parse.m"
      case (MR_Char) 102:
#line 738 "parse.m"
        {
#line 738 "parse.m"
          *mdb__parse__HeadVar__2_2 = (MR_Integer) 3;
#line 738 "parse.m"
          mdb__parse__succeeded = MR_TRUE;
#line 738 "parse.m"
        }
#line 735 "parse.m"
        break;
#line 735 "parse.m"
      case (MR_Char) 112:
#line 741 "parse.m"
        {
#line 741 "parse.m"
          *mdb__parse__HeadVar__2_2 = (MR_Integer) 6;
#line 741 "parse.m"
          mdb__parse__succeeded = MR_TRUE;
#line 741 "parse.m"
        }
#line 735 "parse.m"
        break;
#line 735 "parse.m"
      case (MR_Char) 114:
#line 739 "parse.m"
        {
#line 739 "parse.m"
          *mdb__parse__HeadVar__2_2 = (MR_Integer) 4;
#line 739 "parse.m"
          mdb__parse__succeeded = MR_TRUE;
#line 739 "parse.m"
        }
#line 735 "parse.m"
        break;
#line 735 "parse.m"
      case (MR_Char) 118:
#line 740 "parse.m"
        {
#line 740 "parse.m"
          *mdb__parse__HeadVar__2_2 = (MR_Integer) 5;
#line 740 "parse.m"
          mdb__parse__succeeded = MR_TRUE;
#line 740 "parse.m"
        }
#line 735 "parse.m"
        break;
#line 735 "parse.m"
    }
#line 735 "parse.m"
    return mdb__parse__succeeded;
#line 735 "parse.m"
  }
#line 732 "parse.m"
}

#line 719 "parse.m"
static void MR_CALL 
mdb__parse__format_cmd_option_defaults_2_p_0(
#line 719 "parse.m"
  MR_Word * mdb__parse__HeadVar__1_1,
#line 719 "parse.m"
  MR_Word * mdb__parse__HeadVar__2_2,
#line 719 "parse.m"
  MR_Cont mdb__parse__cont,
#line 719 "parse.m"
  void * mdb__parse__cont_env_ptr)
#line 719 "parse.m"
{
#line 722 "parse.m"
  {
#line 722 "parse.m"
    MR_bool mdb__parse__succeeded;

#line 722 "parse.m"
    {
#line 722 "parse.m"
      MR_Integer mdb__parse__slot_0 = (MR_Integer) 0;

#line 722 "parse.m"
      do
#line 722 "parse.m"
        {
#line 722 "parse.m"
          *mdb__parse__HeadVar__1_1 = ((&mdb__parse_vector_common_10[0 + mdb__parse__slot_0]))->mdb__parse__vector_common_type_10_0__vct_10_f_0;
#line 722 "parse.m"
          *mdb__parse__HeadVar__2_2 = ((&mdb__parse_vector_common_10[0 + mdb__parse__slot_0]))->mdb__parse__vector_common_type_10_0__vct_10_f_1;
#line 722 "parse.m"
          {
#line 722 "parse.m"
            mdb__parse__cont(mdb__parse__cont_env_ptr);
          }
#line 722 "parse.m"
          mdb__parse__slot_0 = (mdb__parse__slot_0 + (MR_Integer) 1);
#line 722 "parse.m"
        }
#line 722 "parse.m"
      while ((mdb__parse__slot_0 < (MR_Integer) 7));
#line 722 "parse.m"
    }
#line 722 "parse.m"
  }
#line 719 "parse.m"
}

#line 713 "parse.m"
static MR_bool MR_CALL 
mdb__parse__long_format_cmd_option_2_p_0(
#line 713 "parse.m"
  MR_String mdb__parse__HeadVar__1_1,
#line 713 "parse.m"
  MR_Word * mdb__parse__HeadVar__2_2)
#line 713 "parse.m"
{
#line 715 "parse.m"
  {
#line 715 "parse.m"
    MR_bool mdb__parse__succeeded;

#line 715 "parse.m"
    if ((strcmp(mdb__parse__HeadVar__1_1, (MR_String) "print") == 0))
#line 715 "parse.m"
      {
#line 715 "parse.m"
        *mdb__parse__HeadVar__2_2 = (MR_Integer) 0;
#line 715 "parse.m"
        mdb__parse__succeeded = MR_TRUE;
#line 715 "parse.m"
      }
#line 715 "parse.m"
    else
#line 715 "parse.m"
    if ((strcmp(mdb__parse__HeadVar__1_1, (MR_String) "browse") == 0))
#line 716 "parse.m"
      {
#line 716 "parse.m"
        *mdb__parse__HeadVar__2_2 = (MR_Integer) 1;
#line 716 "parse.m"
        mdb__parse__succeeded = MR_TRUE;
#line 716 "parse.m"
      }
#line 715 "parse.m"
    else
#line 715 "parse.m"
    if ((strcmp(mdb__parse__HeadVar__1_1, (MR_String) "print-all") == 0))
#line 717 "parse.m"
      {
#line 717 "parse.m"
        *mdb__parse__HeadVar__2_2 = (MR_Integer) 2;
#line 717 "parse.m"
        mdb__parse__succeeded = MR_TRUE;
#line 717 "parse.m"
      }
#line 715 "parse.m"
    else
#line 715 "parse.m"
      mdb__parse__succeeded = MR_FALSE;
#line 715 "parse.m"
    return mdb__parse__succeeded;
#line 715 "parse.m"
  }
#line 713 "parse.m"
}

#line 707 "parse.m"
static MR_bool MR_CALL 
mdb__parse__short_format_cmd_option_2_p_0(
#line 707 "parse.m"
  MR_Char mdb__parse__HeadVar__1_1,
#line 707 "parse.m"
  MR_Word * mdb__parse__HeadVar__2_2)
#line 707 "parse.m"
{
#line 709 "parse.m"
  {
#line 709 "parse.m"
    MR_bool mdb__parse__succeeded;

#line 709 "parse.m"
#line 709 "parse.m"
    switch (mdb__parse__HeadVar__1_1) {
#line 709 "parse.m"
      default:
#line 709 "parse.m"
        mdb__parse__succeeded = MR_FALSE;
#line 709 "parse.m"
        break;
#line 709 "parse.m"
      case (MR_Char) 65:
#line 711 "parse.m"
        {
#line 711 "parse.m"
          *mdb__parse__HeadVar__2_2 = (MR_Integer) 2;
#line 711 "parse.m"
          mdb__parse__succeeded = MR_TRUE;
#line 711 "parse.m"
        }
#line 709 "parse.m"
        break;
#line 709 "parse.m"
      case (MR_Char) 66:
#line 710 "parse.m"
        {
#line 710 "parse.m"
          *mdb__parse__HeadVar__2_2 = (MR_Integer) 1;
#line 710 "parse.m"
          mdb__parse__succeeded = MR_TRUE;
#line 710 "parse.m"
        }
#line 709 "parse.m"
        break;
#line 709 "parse.m"
      case (MR_Char) 80:
#line 709 "parse.m"
        {
#line 709 "parse.m"
          *mdb__parse__HeadVar__2_2 = (MR_Integer) 0;
#line 709 "parse.m"
          mdb__parse__succeeded = MR_TRUE;
#line 709 "parse.m"
        }
#line 709 "parse.m"
        break;
#line 709 "parse.m"
    }
#line 709 "parse.m"
    return mdb__parse__succeeded;
#line 709 "parse.m"
  }
#line 707 "parse.m"
}

#line 698 "parse.m"
static void MR_CALL 
mdb__parse__format_option_defaults_2_p_0(
#line 698 "parse.m"
  MR_Word * mdb__parse__HeadVar__1_1,
#line 698 "parse.m"
  MR_Word * mdb__parse__HeadVar__2_2,
#line 698 "parse.m"
  MR_Cont mdb__parse__cont,
#line 698 "parse.m"
  void * mdb__parse__cont_env_ptr)
#line 698 "parse.m"
{
#line 700 "parse.m"
  {
#line 700 "parse.m"
    MR_bool mdb__parse__succeeded;

#line 700 "parse.m"
    {
#line 700 "parse.m"
      MR_Integer mdb__parse__slot_0 = (MR_Integer) 0;

#line 700 "parse.m"
      do
#line 700 "parse.m"
        {
#line 700 "parse.m"
          *mdb__parse__HeadVar__1_1 = ((&mdb__parse_vector_common_9[0 + mdb__parse__slot_0]))->mdb__parse__vector_common_type_9_0__vct_9_f_0;
#line 700 "parse.m"
          *mdb__parse__HeadVar__2_2 = ((&mdb__parse_vector_common_9[0 + mdb__parse__slot_0]))->mdb__parse__vector_common_type_9_0__vct_9_f_1;
#line 700 "parse.m"
          {
#line 700 "parse.m"
            mdb__parse__cont(mdb__parse__cont_env_ptr);
          }
#line 700 "parse.m"
          mdb__parse__slot_0 = (mdb__parse__slot_0 + (MR_Integer) 1);
#line 700 "parse.m"
        }
#line 700 "parse.m"
      while ((mdb__parse__slot_0 < (MR_Integer) 4));
#line 700 "parse.m"
    }
#line 700 "parse.m"
  }
#line 698 "parse.m"
}

#line 691 "parse.m"
static MR_bool MR_CALL 
mdb__parse__long_format_option_2_p_0(
#line 691 "parse.m"
  MR_String mdb__parse__HeadVar__1_1,
#line 691 "parse.m"
  MR_Word * mdb__parse__HeadVar__2_2)
#line 691 "parse.m"
{
#line 693 "parse.m"
  {
#line 693 "parse.m"
    MR_bool mdb__parse__succeeded;
#line 693 "parse.m"
    MR_Integer mdb__parse__lo_0;
#line 693 "parse.m"
    MR_Integer mdb__parse__hi_1;
#line 693 "parse.m"
    MR_Integer mdb__parse__mid_2;
#line 693 "parse.m"
    MR_Integer mdb__parse__result_3;

#line 693 "parse.m"
    /* binary string simple lookup switch */
#line 693 "parse.m"
    mdb__parse__lo_0 = (MR_Integer) 0;
#line 693 "parse.m"
    mdb__parse__hi_1 = (MR_Integer) 3;
#line 693 "parse.m"
    do
#line 693 "parse.m"
      {
#line 693 "parse.m"
        mdb__parse__mid_2 = (((mdb__parse__lo_0 + mdb__parse__hi_1)) / (MR_Integer) 2);
#line 693 "parse.m"
        mdb__parse__result_3 = MR_strcmp(mdb__parse__HeadVar__1_1, ((&mdb__parse_vector_common_7[0 + mdb__parse__mid_2]))->mdb__parse__vector_common_type_7_0__vct_7_f_0);
#line 693 "parse.m"
        if ((mdb__parse__result_3 == (MR_Integer) 0))
#line 693 "parse.m"
          {
#line 693 "parse.m"
            *mdb__parse__HeadVar__2_2 = ((&mdb__parse_vector_common_7[0 + mdb__parse__mid_2]))->mdb__parse__vector_common_type_7_0__vct_7_f_1;
#line 693 "parse.m"
            mdb__parse__succeeded = MR_TRUE;
#line 693 "parse.m"
            /* jump out of search loop */
#line 693 "parse.m"
            goto label_0;
#line 693 "parse.m"
          }
#line 693 "parse.m"
        else
#line 693 "parse.m"
        if ((mdb__parse__result_3 < (MR_Integer) 0))
#line 693 "parse.m"
          mdb__parse__hi_1 = (mdb__parse__mid_2 - (MR_Integer) 1);
#line 693 "parse.m"
        else
#line 693 "parse.m"
          mdb__parse__lo_0 = (mdb__parse__mid_2 + (MR_Integer) 1);
#line 693 "parse.m"
      }
#line 693 "parse.m"
    while ((mdb__parse__lo_0 <= mdb__parse__hi_1));
#line 693 "parse.m"
    mdb__parse__succeeded = MR_FALSE;
#line 693 "parse.m"
  label_0:;
#line 693 "parse.m"
    return mdb__parse__succeeded;
#line 693 "parse.m"
  }
#line 691 "parse.m"
}

#line 684 "parse.m"
static MR_bool MR_CALL 
mdb__parse__short_format_option_2_p_0(
#line 684 "parse.m"
  MR_Char mdb__parse__HeadVar__1_1,
#line 684 "parse.m"
  MR_Word * mdb__parse__HeadVar__2_2)
#line 684 "parse.m"
{
#line 686 "parse.m"
  {
#line 686 "parse.m"
    MR_bool mdb__parse__succeeded;

#line 686 "parse.m"
#line 686 "parse.m"
    switch (mdb__parse__HeadVar__1_1) {
#line 686 "parse.m"
      default:
#line 686 "parse.m"
        mdb__parse__succeeded = MR_FALSE;
#line 686 "parse.m"
        break;
#line 686 "parse.m"
      case (MR_Char) 102:
#line 686 "parse.m"
        {
#line 686 "parse.m"
          *mdb__parse__HeadVar__2_2 = (MR_Integer) 0;
#line 686 "parse.m"
          mdb__parse__succeeded = MR_TRUE;
#line 686 "parse.m"
        }
#line 686 "parse.m"
        break;
#line 686 "parse.m"
      case (MR_Char) 112:
#line 689 "parse.m"
        {
#line 689 "parse.m"
          *mdb__parse__HeadVar__2_2 = (MR_Integer) 3;
#line 689 "parse.m"
          mdb__parse__succeeded = MR_TRUE;
#line 689 "parse.m"
        }
#line 686 "parse.m"
        break;
#line 686 "parse.m"
      case (MR_Char) 114:
#line 687 "parse.m"
        {
#line 687 "parse.m"
          *mdb__parse__HeadVar__2_2 = (MR_Integer) 1;
#line 687 "parse.m"
          mdb__parse__succeeded = MR_TRUE;
#line 687 "parse.m"
        }
#line 686 "parse.m"
        break;
#line 686 "parse.m"
      case (MR_Char) 118:
#line 688 "parse.m"
        {
#line 688 "parse.m"
          *mdb__parse__HeadVar__2_2 = (MR_Integer) 2;
#line 688 "parse.m"
          mdb__parse__succeeded = MR_TRUE;
#line 688 "parse.m"
        }
#line 686 "parse.m"
        break;
#line 686 "parse.m"
    }
#line 686 "parse.m"
    return mdb__parse__succeeded;
#line 686 "parse.m"
  }
#line 684 "parse.m"
}

#line 646 "parse.m"
static MR_bool MR_CALL 
mdb__parse__parse_format_2_p_0(
#line 646 "parse.m"
  MR_Word mdb__parse__HeadVar__1_1,
#line 646 "parse.m"
  MR_Word * mdb__parse__Setting_4)
#line 646 "parse.m"
{
#line 648 "parse.m"
  {
#line 648 "parse.m"
    MR_bool mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 648 "parse.m"
    MR_Word mdb__parse__Token_3;
#line 648 "parse.m"
    MR_String mdb__parse__TokenName_5;
#line 648 "parse.m"
    MR_Word mdb__parse__V_6_6;

#line 648 "parse.m"
    if (mdb__parse__succeeded)
#line 648 "parse.m"
      {
#line 648 "parse.m"
        mdb__parse__Token_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__1_1, (MR_Integer) 0)));
#line 648 "parse.m"
        mdb__parse__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__1_1, (MR_Integer) 1)));
#line 648 "parse.m"
        mdb__parse__succeeded = (mdb__parse__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 648 "parse.m"
        if (mdb__parse__succeeded)
#line 648 "parse.m"
          {
#line 649 "parse.m"
            mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__Token_3)) == (MR_mktag((MR_Integer) 2)));
#line 649 "parse.m"
            if (mdb__parse__succeeded)
#line 649 "parse.m"
              {
#line 649 "parse.m"
                mdb__parse__TokenName_5 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__Token_3, (MR_Integer) 0)));
#line 650 "parse.m"
                mdb__parse__succeeded = (strcmp(mdb__parse__TokenName_5, (MR_String) "flat") == 0);
#line 652 "parse.m"
                if (mdb__parse__succeeded)
#line 651 "parse.m"
                  {
#line 651 "parse.m"
                    *mdb__parse__Setting_4 = (MR_Word) MR_mkword(MR_mktag(3), &mdb__parse_scalar_common_1[6]);
#line 651 "parse.m"
                    mdb__parse__succeeded = MR_TRUE;
#line 651 "parse.m"
                  }
#line 652 "parse.m"
                else
#line 654 "parse.m"
                  {
#line 652 "parse.m"
                    mdb__parse__succeeded = (strcmp(mdb__parse__TokenName_5, (MR_String) "raw_pretty") == 0);
#line 654 "parse.m"
                    if (mdb__parse__succeeded)
#line 653 "parse.m"
                      {
#line 653 "parse.m"
                        *mdb__parse__Setting_4 = (MR_Word) MR_mkword(MR_mktag(3), &mdb__parse_scalar_common_1[7]);
#line 653 "parse.m"
                        mdb__parse__succeeded = MR_TRUE;
#line 653 "parse.m"
                      }
#line 654 "parse.m"
                    else
#line 656 "parse.m"
                      {
#line 654 "parse.m"
                        mdb__parse__succeeded = (strcmp(mdb__parse__TokenName_5, (MR_String) "verbose") == 0);
#line 656 "parse.m"
                        if (mdb__parse__succeeded)
#line 655 "parse.m"
                          {
#line 655 "parse.m"
                            *mdb__parse__Setting_4 = (MR_Word) MR_mkword(MR_mktag(3), &mdb__parse_scalar_common_1[8]);
#line 655 "parse.m"
                            mdb__parse__succeeded = MR_TRUE;
#line 655 "parse.m"
                          }
#line 656 "parse.m"
                        else
#line 658 "parse.m"
                          {
#line 658 "parse.m"
                            MR_Word mdb__parse__V_10_10;

#line 656 "parse.m"
                            mdb__parse__succeeded = (strcmp(mdb__parse__TokenName_5, (MR_String) "pretty") == 0);
#line 658 "parse.m"
                            if (mdb__parse__succeeded)
#line 658 "parse.m"
                              {
#line 657 "parse.m"
                                mdb__parse__V_10_10 = (MR_Integer) 3;
#line 657 "parse.m"
                                *mdb__parse__Setting_4 = (MR_Word) MR_mkword(MR_mktag(3), &mdb__parse_scalar_common_1[9]);
#line 657 "parse.m"
                                mdb__parse__succeeded = MR_TRUE;
#line 658 "parse.m"
                              }
#line 658 "parse.m"
                          }
#line 656 "parse.m"
                      }
#line 654 "parse.m"
                  }
#line 649 "parse.m"
              }
#line 648 "parse.m"
          }
#line 648 "parse.m"
      }
#line 648 "parse.m"
    return mdb__parse__succeeded;
#line 648 "parse.m"
  }
#line 646 "parse.m"
}

#line 619 "parse.m"
static MR_bool MR_CALL 
mdb__parse__parse_up_down_dirs_2_p_0(
#line 619 "parse.m"
  MR_Word mdb__parse__HeadVar__1_1,
#line 619 "parse.m"
  MR_Word * mdb__parse__HeadVar__2_2)
#line 619 "parse.m"
{
#line 621 "parse.m"
  while (MR_TRUE)
#line 621 "parse.m"
    {
#line 621 "parse.m"
      /* tailcall optimized into a loop */
#line 621 "parse.m"
      {
#line 621 "parse.m"
        MR_bool mdb__parse__succeeded;

#line 621 "parse.m"
        if ((mdb__parse__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 621 "parse.m"
          {
#line 621 "parse.m"
            *mdb__parse__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 621 "parse.m"
            mdb__parse__succeeded = MR_TRUE;
#line 621 "parse.m"
          }
#line 621 "parse.m"
        else
#line 622 "parse.m"
          {
#line 622 "parse.m"
            MR_Word mdb__parse__Token_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__1_1, (MR_Integer) 0)));
#line 622 "parse.m"
            MR_Word mdb__parse__Tokens_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__1_1, (MR_Integer) 1)));

#line 627 "parse.m"
#line 627 "parse.m"
            switch (MR_tag((MR_Word) mdb__parse__Token_3)) {
#line 627 "parse.m"
              default:
#line 627 "parse.m"
                mdb__parse__succeeded = MR_FALSE;
#line 627 "parse.m"
                break;
#line 627 "parse.m"
              case (MR_Integer) 0:
#line 627 "parse.m"
#line 627 "parse.m"
                switch (MR_unmkbody(mdb__parse__Token_3)) {
#line 627 "parse.m"
                  default:
#line 627 "parse.m"
                    mdb__parse__succeeded = MR_FALSE;
#line 627 "parse.m"
                    break;
#line 627 "parse.m"
                  case (MR_Integer) 1:
#line 632 "parse.m"
                    {
#line 632 "parse.m"
                      MR_Word mdb__parse__RestDirs_13;

#line 634 "parse.m"
                      {
#line 634 "parse.m"
                        mdb__parse__succeeded = mdb__parse__parse_up_down_dirs_2_p_0(mdb__parse__Tokens_4, &mdb__parse__RestDirs_13);
                      }
#line 632 "parse.m"
                      if (mdb__parse__succeeded)
#line 632 "parse.m"
                        {
#line 633 "parse.m"
                          {
#line 633 "parse.m"
                            MR_Word base;
#line 633 "parse.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 633 "parse.m"
                            *mdb__parse__HeadVar__2_2 = base;
#line 633 "parse.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 633 "parse.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__parse__RestDirs_13));
#line 633 "parse.m"
                          }
#line 633 "parse.m"
                          mdb__parse__succeeded = MR_TRUE;
#line 632 "parse.m"
                        }
#line 632 "parse.m"
                    }
#line 627 "parse.m"
                    break;
#line 627 "parse.m"
                  case (MR_Integer) 2:
#line 640 "parse.m"
                    {
#line 640 "parse.m"
                      /* direct tailcall eliminated */
#line 640 "parse.m"
                      {
#line 640 "parse.m"
                        MR_Word mdb__parse__HeadVar__1__tmp_copy_1 = mdb__parse__Tokens_4;

#line 640 "parse.m"
                        mdb__parse__HeadVar__1_1 = mdb__parse__HeadVar__1__tmp_copy_1;
#line 640 "parse.m"
                      }
#line 640 "parse.m"
                      continue;
#line 640 "parse.m"
                    }
#line 627 "parse.m"
                    break;
#line 627 "parse.m"
                  case (MR_Integer) 4:
#line 643 "parse.m"
                    {
#line 643 "parse.m"
                      /* direct tailcall eliminated */
#line 643 "parse.m"
                      {
#line 643 "parse.m"
                        MR_Word mdb__parse__HeadVar__1__tmp_copy_1 = mdb__parse__Tokens_4;

#line 643 "parse.m"
                        mdb__parse__HeadVar__1_1 = mdb__parse__HeadVar__1__tmp_copy_1;
#line 643 "parse.m"
                      }
#line 643 "parse.m"
                      continue;
#line 643 "parse.m"
                    }
#line 627 "parse.m"
                    break;
#line 627 "parse.m"
                }
#line 627 "parse.m"
                break;
#line 627 "parse.m"
              case (MR_Integer) 1:
#line 624 "parse.m"
                {
#line 624 "parse.m"
                  MR_Integer mdb__parse__Subdir_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__parse__Token_3, (MR_Integer) 0)));
#line 624 "parse.m"
                  MR_Word mdb__parse__RestDirs_7;
#line 624 "parse.m"
                  MR_Word mdb__parse__V_11_11;

#line 625 "parse.m"
                  {
#line 625 "parse.m"
                    mdb__parse__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 625 "parse.m"
                    MR_hl_field(MR_mktag(1), mdb__parse__V_11_11, 0) = ((MR_Box) (mdb__parse__Subdir_6));
#line 625 "parse.m"
                  }
#line 626 "parse.m"
                  {
#line 626 "parse.m"
                    mdb__parse__succeeded = mdb__parse__parse_up_down_dirs_2_p_0(mdb__parse__Tokens_4, &mdb__parse__RestDirs_7);
                  }
#line 624 "parse.m"
                  if (mdb__parse__succeeded)
#line 624 "parse.m"
                    {
#line 625 "parse.m"
                      {
#line 625 "parse.m"
                        MR_Word base;
#line 625 "parse.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "parse.m"
                        *mdb__parse__HeadVar__2_2 = base;
#line 625 "parse.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__parse__V_11_11));
#line 625 "parse.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__parse__RestDirs_7));
#line 625 "parse.m"
                      }
#line 625 "parse.m"
                      mdb__parse__succeeded = MR_TRUE;
#line 624 "parse.m"
                    }
#line 624 "parse.m"
                }
#line 627 "parse.m"
                break;
#line 627 "parse.m"
              case (MR_Integer) 2:
#line 628 "parse.m"
                {
#line 628 "parse.m"
                  MR_String mdb__parse__NamedSubdir_8 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__Token_3, (MR_Integer) 0)));
#line 628 "parse.m"
                  MR_Word mdb__parse__V_10_10;
#line 628 "parse.m"
                  MR_Word mdb__parse__RestDirs_12;

#line 629 "parse.m"
                  {
#line 629 "parse.m"
                    mdb__parse__V_10_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 629 "parse.m"
                    MR_hl_field(MR_mktag(2), mdb__parse__V_10_10, 0) = ((MR_Box) (mdb__parse__NamedSubdir_8));
#line 629 "parse.m"
                  }
#line 630 "parse.m"
                  {
#line 630 "parse.m"
                    mdb__parse__succeeded = mdb__parse__parse_up_down_dirs_2_p_0(mdb__parse__Tokens_4, &mdb__parse__RestDirs_12);
                  }
#line 628 "parse.m"
                  if (mdb__parse__succeeded)
#line 628 "parse.m"
                    {
#line 629 "parse.m"
                      {
#line 629 "parse.m"
                        MR_Word base;
#line 629 "parse.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "parse.m"
                        *mdb__parse__HeadVar__2_2 = base;
#line 629 "parse.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__parse__V_10_10));
#line 629 "parse.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__parse__RestDirs_12));
#line 629 "parse.m"
                      }
#line 629 "parse.m"
                      mdb__parse__succeeded = MR_TRUE;
#line 628 "parse.m"
                    }
#line 628 "parse.m"
                }
#line 627 "parse.m"
                break;
#line 627 "parse.m"
            }
#line 622 "parse.m"
          }
#line 621 "parse.m"
        return mdb__parse__succeeded;
#line 621 "parse.m"
      }
#line 621 "parse.m"
      break;
#line 621 "parse.m"
    }
#line 619 "parse.m"
}

#line 608 "parse.m"
static MR_bool MR_CALL 
mdb__parse__parse_path_2_p_0(
#line 608 "parse.m"
  MR_Word mdb__parse__HeadVar__1_1,
#line 608 "parse.m"
  MR_Word * mdb__parse__Path_5)
#line 608 "parse.m"
{
#line 610 "parse.m"
  {
#line 610 "parse.m"
    MR_bool mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 610 "parse.m"
    MR_Word mdb__parse__Token_3;
#line 610 "parse.m"
    MR_Word mdb__parse__Tokens_4;

#line 610 "parse.m"
    if (mdb__parse__succeeded)
#line 610 "parse.m"
      {
#line 610 "parse.m"
        mdb__parse__Token_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__1_1, (MR_Integer) 0)));
#line 610 "parse.m"
        mdb__parse__Tokens_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__1_1, (MR_Integer) 1)));
#line 611 "parse.m"
        mdb__parse__succeeded = (mdb__parse__Token_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 614 "parse.m"
        if (mdb__parse__succeeded)
#line 612 "parse.m"
          {
#line 612 "parse.m"
            MR_Word mdb__parse__Dirs_6;

#line 613 "parse.m"
            {
#line 613 "parse.m"
              mdb__parse__succeeded = mdb__parse__parse_up_down_dirs_2_p_0(mdb__parse__Tokens_4, &mdb__parse__Dirs_6);
            }
#line 612 "parse.m"
            if (mdb__parse__succeeded)
#line 612 "parse.m"
              {
#line 612 "parse.m"
                {
#line 612 "parse.m"
                  MR_Word base;
#line 612 "parse.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 612 "parse.m"
                  *mdb__parse__Path_5 = base;
#line 612 "parse.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__parse__Dirs_6));
#line 612 "parse.m"
                }
#line 612 "parse.m"
                mdb__parse__succeeded = MR_TRUE;
#line 612 "parse.m"
              }
#line 612 "parse.m"
          }
#line 614 "parse.m"
        else
#line 615 "parse.m"
          {
#line 615 "parse.m"
            MR_Word mdb__parse__Dirs_8;

#line 616 "parse.m"
            {
#line 616 "parse.m"
              mdb__parse__succeeded = mdb__parse__parse_up_down_dirs_2_p_0(mdb__parse__HeadVar__1_1, &mdb__parse__Dirs_8);
            }
#line 615 "parse.m"
            if (mdb__parse__succeeded)
#line 615 "parse.m"
              {
#line 615 "parse.m"
                {
#line 615 "parse.m"
                  MR_Word base;
#line 615 "parse.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 615 "parse.m"
                  *mdb__parse__Path_5 = base;
#line 615 "parse.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__parse__Dirs_8));
#line 615 "parse.m"
                }
#line 615 "parse.m"
                mdb__parse__succeeded = MR_TRUE;
#line 615 "parse.m"
              }
#line 615 "parse.m"
          }
#line 610 "parse.m"
      }
#line 610 "parse.m"
    return mdb__parse__succeeded;
#line 610 "parse.m"
  }
#line 608 "parse.m"
}

#line 597 "parse.m"
static void MR_CALL 
mdb__parse__param_cmd_to_setting_3_p_0(
#line 597 "parse.m"
  MR_Word mdb__parse__HeadVar__1_1,
#line 597 "parse.m"
  MR_Integer mdb__parse__N_2,
#line 597 "parse.m"
  MR_Word * mdb__parse__HeadVar__3_3)
#line 597 "parse.m"
{
#line 600 "parse.m"
  {
#line 600 "parse.m"
    MR_bool mdb__parse__succeeded;

#line 600 "parse.m"
#line 600 "parse.m"
    switch (mdb__parse__HeadVar__1_1) {
#line 600 "parse.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 600 "parse.m"
      case (MR_Integer) 0:
#line 600 "parse.m"
        {
#line 600 "parse.m"
          MR_Word base;
#line 600 "parse.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 600 "parse.m"
          *mdb__parse__HeadVar__3_3 = base;
#line 600 "parse.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__parse__N_2));
#line 600 "parse.m"
        }
#line 600 "parse.m"
        break;
#line 600 "parse.m"
      case (MR_Integer) 3:
#line 603 "parse.m"
        {
#line 603 "parse.m"
          MR_Word base;
#line 603 "parse.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 603 "parse.m"
          *mdb__parse__HeadVar__3_3 = base;
#line 603 "parse.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 603 "parse.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__parse__N_2));
#line 603 "parse.m"
        }
#line 600 "parse.m"
        break;
#line 600 "parse.m"
      case (MR_Integer) 1:
#line 601 "parse.m"
        {
#line 601 "parse.m"
          MR_Word base;
#line 601 "parse.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 601 "parse.m"
          *mdb__parse__HeadVar__3_3 = base;
#line 601 "parse.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__parse__N_2));
#line 601 "parse.m"
        }
#line 600 "parse.m"
        break;
#line 600 "parse.m"
      case (MR_Integer) 2:
#line 602 "parse.m"
        {
#line 602 "parse.m"
          MR_Word base;
#line 602 "parse.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 602 "parse.m"
          *mdb__parse__HeadVar__3_3 = base;
#line 602 "parse.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__parse__N_2));
#line 602 "parse.m"
        }
#line 600 "parse.m"
        break;
#line 600 "parse.m"
    }
#line 600 "parse.m"
  }
#line 597 "parse.m"
}

#line 567 "parse.m"
static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_15(
#line 567 "parse.m"
  void * mdb__parse__env_ptr_arg)
#line 567 "parse.m"
{
#line 567 "parse.m"
  {
#line 567 "parse.m"
    struct mdb__parse__parse_cmd_4_p_0_16_env_0_s * mdb__parse__env_ptr = (struct mdb__parse__parse_cmd_4_p_0_16_env_0_s *) mdb__parse__env_ptr_arg;

#line 567 "parse.m"
    *((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_16_env_0__wrapper_arg_1) = ((MR_Box) ((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_16_env_0__conv15_HeadVar__1_1));
#line 567 "parse.m"
    *((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_16_env_0__wrapper_arg_2) = ((MR_Box) ((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_16_env_0__conv14_HeadVar__2_2));
#line 567 "parse.m"
    {
#line 567 "parse.m"
      ((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_16_env_0__cont)((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_16_env_0__cont_env_ptr);
    }
#line 567 "parse.m"
  }
#line 567 "parse.m"
}

#line 567 "parse.m"
static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_16(
#line 567 "parse.m"
  MR_Box mdb__parse__closure_arg,
#line 567 "parse.m"
  MR_Box * mdb__parse__wrapper_arg_1,
#line 567 "parse.m"
  MR_Box * mdb__parse__wrapper_arg_2,
#line 567 "parse.m"
  MR_Cont mdb__parse__cont,
#line 567 "parse.m"
  void * mdb__parse__cont_env_ptr)
#line 567 "parse.m"
{
#line 567 "parse.m"
  {
#line 567 "parse.m"
    struct mdb__parse__parse_cmd_4_p_0_16_env_0_s mdb__parse__env;

#line 567 "parse.m"
    (mdb__parse__env).mdb__parse__parse_cmd_4_p_0_16_env_0__wrapper_arg_1 = mdb__parse__wrapper_arg_1;
#line 567 "parse.m"
    (mdb__parse__env).mdb__parse__parse_cmd_4_p_0_16_env_0__wrapper_arg_2 = mdb__parse__wrapper_arg_2;
#line 567 "parse.m"
    (mdb__parse__env).mdb__parse__parse_cmd_4_p_0_16_env_0__cont = mdb__parse__cont;
#line 567 "parse.m"
    (mdb__parse__env).mdb__parse__parse_cmd_4_p_0_16_env_0__cont_env_ptr = mdb__parse__cont_env_ptr;
#line 567 "parse.m"
    {
#line 567 "parse.m"
      MR_Box mdb__parse__closure = mdb__parse__closure_arg;

#line 567 "parse.m"
      {
#line 567 "parse.m"
        mdb__parse__format_param_cmd_option_defaults_2_p_0(&(mdb__parse__env).mdb__parse__parse_cmd_4_p_0_16_env_0__conv15_HeadVar__1_1, &(mdb__parse__env).mdb__parse__parse_cmd_4_p_0_16_env_0__conv14_HeadVar__2_2, mdb__parse__parse_cmd_4_p_0_15, &mdb__parse__env);
      }
#line 567 "parse.m"
    }
#line 567 "parse.m"
  }
#line 567 "parse.m"
}

#line 567 "parse.m"
static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_14(
#line 567 "parse.m"
  MR_Box mdb__parse__closure_arg,
#line 567 "parse.m"
  MR_Box mdb__parse__wrapper_arg_1,
#line 567 "parse.m"
  MR_Box * mdb__parse__wrapper_arg_2)
#line 567 "parse.m"
{
#line 567 "parse.m"
  {
#line 567 "parse.m"
    MR_bool mdb__parse__succeeded;
#line 567 "parse.m"
    MR_Box mdb__parse__closure = mdb__parse__closure_arg;
#line 567 "parse.m"
    MR_Word mdb__parse__conv13_HeadVar__2_2;

#line 567 "parse.m"
    {
#line 567 "parse.m"
      mdb__parse__succeeded = mdb__parse__long_format_param_cmd_option_2_p_0(((MR_String) mdb__parse__wrapper_arg_1), &mdb__parse__conv13_HeadVar__2_2);
    }
#line 567 "parse.m"
    if (mdb__parse__succeeded)
#line 567 "parse.m"
      {
#line 567 "parse.m"
        *mdb__parse__wrapper_arg_2 = ((MR_Box) (mdb__parse__conv13_HeadVar__2_2));
#line 567 "parse.m"
        mdb__parse__succeeded = MR_TRUE;
#line 567 "parse.m"
      }
#line 567 "parse.m"
    return mdb__parse__succeeded;
#line 567 "parse.m"
  }
#line 567 "parse.m"
}

#line 566 "parse.m"
static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_13(
#line 566 "parse.m"
  MR_Box mdb__parse__closure_arg,
#line 566 "parse.m"
  MR_Box mdb__parse__wrapper_arg_1,
#line 566 "parse.m"
  MR_Box * mdb__parse__wrapper_arg_2)
#line 566 "parse.m"
{
#line 566 "parse.m"
  {
#line 566 "parse.m"
    MR_bool mdb__parse__succeeded;
#line 566 "parse.m"
    MR_Box mdb__parse__closure = mdb__parse__closure_arg;
#line 566 "parse.m"
    MR_Word mdb__parse__conv12_HeadVar__2_2;

#line 566 "parse.m"
    {
#line 566 "parse.m"
      mdb__parse__succeeded = mdb__parse__short_format_param_cmd_option_2_p_0(((MR_Char) (MR_Word) mdb__parse__wrapper_arg_1), &mdb__parse__conv12_HeadVar__2_2);
    }
#line 566 "parse.m"
    if (mdb__parse__succeeded)
#line 566 "parse.m"
      {
#line 566 "parse.m"
        *mdb__parse__wrapper_arg_2 = ((MR_Box) (mdb__parse__conv12_HeadVar__2_2));
#line 566 "parse.m"
        mdb__parse__succeeded = MR_TRUE;
#line 566 "parse.m"
      }
#line 566 "parse.m"
    return mdb__parse__succeeded;
#line 566 "parse.m"
  }
#line 566 "parse.m"
}

#line 553 "parse.m"
static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_11(
#line 553 "parse.m"
  void * mdb__parse__env_ptr_arg)
#line 553 "parse.m"
{
#line 553 "parse.m"
  {
#line 553 "parse.m"
    struct mdb__parse__parse_cmd_4_p_0_12_env_0_s * mdb__parse__env_ptr = (struct mdb__parse__parse_cmd_4_p_0_12_env_0_s *) mdb__parse__env_ptr_arg;

#line 553 "parse.m"
    *((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_12_env_0__wrapper_arg_1) = ((MR_Box) ((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_12_env_0__conv11_HeadVar__1_1));
#line 553 "parse.m"
    *((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_12_env_0__wrapper_arg_2) = ((MR_Box) ((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_12_env_0__conv10_HeadVar__2_2));
#line 553 "parse.m"
    {
#line 553 "parse.m"
      ((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_12_env_0__cont)((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_12_env_0__cont_env_ptr);
    }
#line 553 "parse.m"
  }
#line 553 "parse.m"
}

#line 553 "parse.m"
static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_12(
#line 553 "parse.m"
  MR_Box mdb__parse__closure_arg,
#line 553 "parse.m"
  MR_Box * mdb__parse__wrapper_arg_1,
#line 553 "parse.m"
  MR_Box * mdb__parse__wrapper_arg_2,
#line 553 "parse.m"
  MR_Cont mdb__parse__cont,
#line 553 "parse.m"
  void * mdb__parse__cont_env_ptr)
#line 553 "parse.m"
{
#line 553 "parse.m"
  {
#line 553 "parse.m"
    struct mdb__parse__parse_cmd_4_p_0_12_env_0_s mdb__parse__env;

#line 553 "parse.m"
    (mdb__parse__env).mdb__parse__parse_cmd_4_p_0_12_env_0__wrapper_arg_1 = mdb__parse__wrapper_arg_1;
#line 553 "parse.m"
    (mdb__parse__env).mdb__parse__parse_cmd_4_p_0_12_env_0__wrapper_arg_2 = mdb__parse__wrapper_arg_2;
#line 553 "parse.m"
    (mdb__parse__env).mdb__parse__parse_cmd_4_p_0_12_env_0__cont = mdb__parse__cont;
#line 553 "parse.m"
    (mdb__parse__env).mdb__parse__parse_cmd_4_p_0_12_env_0__cont_env_ptr = mdb__parse__cont_env_ptr;
#line 553 "parse.m"
    {
#line 553 "parse.m"
      MR_Box mdb__parse__closure = mdb__parse__closure_arg;

#line 553 "parse.m"
      {
#line 553 "parse.m"
        mdb__parse__format_param_cmd_option_defaults_2_p_0(&(mdb__parse__env).mdb__parse__parse_cmd_4_p_0_12_env_0__conv11_HeadVar__1_1, &(mdb__parse__env).mdb__parse__parse_cmd_4_p_0_12_env_0__conv10_HeadVar__2_2, mdb__parse__parse_cmd_4_p_0_11, &mdb__parse__env);
      }
#line 553 "parse.m"
    }
#line 553 "parse.m"
  }
#line 553 "parse.m"
}

#line 552 "parse.m"
static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_10(
#line 552 "parse.m"
  MR_Box mdb__parse__closure_arg,
#line 552 "parse.m"
  MR_Box mdb__parse__wrapper_arg_1,
#line 552 "parse.m"
  MR_Box * mdb__parse__wrapper_arg_2)
#line 552 "parse.m"
{
#line 552 "parse.m"
  {
#line 552 "parse.m"
    MR_bool mdb__parse__succeeded;
#line 552 "parse.m"
    MR_Box mdb__parse__closure = mdb__parse__closure_arg;
#line 552 "parse.m"
    MR_Word mdb__parse__conv9_HeadVar__2_2;

#line 552 "parse.m"
    {
#line 552 "parse.m"
      mdb__parse__succeeded = mdb__parse__long_format_param_cmd_option_2_p_0(((MR_String) mdb__parse__wrapper_arg_1), &mdb__parse__conv9_HeadVar__2_2);
    }
#line 552 "parse.m"
    if (mdb__parse__succeeded)
#line 552 "parse.m"
      {
#line 552 "parse.m"
        *mdb__parse__wrapper_arg_2 = ((MR_Box) (mdb__parse__conv9_HeadVar__2_2));
#line 552 "parse.m"
        mdb__parse__succeeded = MR_TRUE;
#line 552 "parse.m"
      }
#line 552 "parse.m"
    return mdb__parse__succeeded;
#line 552 "parse.m"
  }
#line 552 "parse.m"
}

#line 551 "parse.m"
static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_9(
#line 551 "parse.m"
  MR_Box mdb__parse__closure_arg,
#line 551 "parse.m"
  MR_Box mdb__parse__wrapper_arg_1,
#line 551 "parse.m"
  MR_Box * mdb__parse__wrapper_arg_2)
#line 551 "parse.m"
{
#line 551 "parse.m"
  {
#line 551 "parse.m"
    MR_bool mdb__parse__succeeded;
#line 551 "parse.m"
    MR_Box mdb__parse__closure = mdb__parse__closure_arg;
#line 551 "parse.m"
    MR_Word mdb__parse__conv8_HeadVar__2_2;

#line 551 "parse.m"
    {
#line 551 "parse.m"
      mdb__parse__succeeded = mdb__parse__short_format_param_cmd_option_2_p_0(((MR_Char) (MR_Word) mdb__parse__wrapper_arg_1), &mdb__parse__conv8_HeadVar__2_2);
    }
#line 551 "parse.m"
    if (mdb__parse__succeeded)
#line 551 "parse.m"
      {
#line 551 "parse.m"
        *mdb__parse__wrapper_arg_2 = ((MR_Box) (mdb__parse__conv8_HeadVar__2_2));
#line 551 "parse.m"
        mdb__parse__succeeded = MR_TRUE;
#line 551 "parse.m"
      }
#line 551 "parse.m"
    return mdb__parse__succeeded;
#line 551 "parse.m"
  }
#line 551 "parse.m"
}

#line 522 "parse.m"
static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_7(
#line 522 "parse.m"
  void * mdb__parse__env_ptr_arg)
#line 522 "parse.m"
{
#line 522 "parse.m"
  {
#line 522 "parse.m"
    struct mdb__parse__parse_cmd_4_p_0_8_env_0_s * mdb__parse__env_ptr = (struct mdb__parse__parse_cmd_4_p_0_8_env_0_s *) mdb__parse__env_ptr_arg;

#line 522 "parse.m"
    *((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_8_env_0__wrapper_arg_1) = ((MR_Box) ((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_8_env_0__conv7_HeadVar__1_1));
#line 522 "parse.m"
    *((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_8_env_0__wrapper_arg_2) = ((MR_Box) ((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_8_env_0__conv6_HeadVar__2_2));
#line 522 "parse.m"
    {
#line 522 "parse.m"
      ((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_8_env_0__cont)((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_8_env_0__cont_env_ptr);
    }
#line 522 "parse.m"
  }
#line 522 "parse.m"
}

#line 522 "parse.m"
static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_8(
#line 522 "parse.m"
  MR_Box mdb__parse__closure_arg,
#line 522 "parse.m"
  MR_Box * mdb__parse__wrapper_arg_1,
#line 522 "parse.m"
  MR_Box * mdb__parse__wrapper_arg_2,
#line 522 "parse.m"
  MR_Cont mdb__parse__cont,
#line 522 "parse.m"
  void * mdb__parse__cont_env_ptr)
#line 522 "parse.m"
{
#line 522 "parse.m"
  {
#line 522 "parse.m"
    struct mdb__parse__parse_cmd_4_p_0_8_env_0_s mdb__parse__env;

#line 522 "parse.m"
    (mdb__parse__env).mdb__parse__parse_cmd_4_p_0_8_env_0__wrapper_arg_1 = mdb__parse__wrapper_arg_1;
#line 522 "parse.m"
    (mdb__parse__env).mdb__parse__parse_cmd_4_p_0_8_env_0__wrapper_arg_2 = mdb__parse__wrapper_arg_2;
#line 522 "parse.m"
    (mdb__parse__env).mdb__parse__parse_cmd_4_p_0_8_env_0__cont = mdb__parse__cont;
#line 522 "parse.m"
    (mdb__parse__env).mdb__parse__parse_cmd_4_p_0_8_env_0__cont_env_ptr = mdb__parse__cont_env_ptr;
#line 522 "parse.m"
    {
#line 522 "parse.m"
      MR_Box mdb__parse__closure = mdb__parse__closure_arg;

#line 522 "parse.m"
      {
#line 522 "parse.m"
        mdb__parse__format_cmd_option_defaults_2_p_0(&(mdb__parse__env).mdb__parse__parse_cmd_4_p_0_8_env_0__conv7_HeadVar__1_1, &(mdb__parse__env).mdb__parse__parse_cmd_4_p_0_8_env_0__conv6_HeadVar__2_2, mdb__parse__parse_cmd_4_p_0_7, &mdb__parse__env);
      }
#line 522 "parse.m"
    }
#line 522 "parse.m"
  }
#line 522 "parse.m"
}

#line 522 "parse.m"
static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_6(
#line 522 "parse.m"
  MR_Box mdb__parse__closure_arg,
#line 522 "parse.m"
  MR_Box mdb__parse__wrapper_arg_1,
#line 522 "parse.m"
  MR_Box * mdb__parse__wrapper_arg_2)
#line 522 "parse.m"
{
#line 522 "parse.m"
  {
#line 522 "parse.m"
    MR_bool mdb__parse__succeeded;
#line 522 "parse.m"
    MR_Box mdb__parse__closure = mdb__parse__closure_arg;
#line 522 "parse.m"
    MR_Word mdb__parse__conv5_HeadVar__2_2;

#line 522 "parse.m"
    {
#line 522 "parse.m"
      mdb__parse__succeeded = mdb__parse__long_format_cmd_option_2_p_0(((MR_String) mdb__parse__wrapper_arg_1), &mdb__parse__conv5_HeadVar__2_2);
    }
#line 522 "parse.m"
    if (mdb__parse__succeeded)
#line 522 "parse.m"
      {
#line 522 "parse.m"
        *mdb__parse__wrapper_arg_2 = ((MR_Box) (mdb__parse__conv5_HeadVar__2_2));
#line 522 "parse.m"
        mdb__parse__succeeded = MR_TRUE;
#line 522 "parse.m"
      }
#line 522 "parse.m"
    return mdb__parse__succeeded;
#line 522 "parse.m"
  }
#line 522 "parse.m"
}

#line 521 "parse.m"
static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_5(
#line 521 "parse.m"
  MR_Box mdb__parse__closure_arg,
#line 521 "parse.m"
  MR_Box mdb__parse__wrapper_arg_1,
#line 521 "parse.m"
  MR_Box * mdb__parse__wrapper_arg_2)
#line 521 "parse.m"
{
#line 521 "parse.m"
  {
#line 521 "parse.m"
    MR_bool mdb__parse__succeeded;
#line 521 "parse.m"
    MR_Box mdb__parse__closure = mdb__parse__closure_arg;
#line 521 "parse.m"
    MR_Word mdb__parse__conv4_HeadVar__2_2;

#line 521 "parse.m"
    {
#line 521 "parse.m"
      mdb__parse__succeeded = mdb__parse__short_format_cmd_option_2_p_0(((MR_Char) (MR_Word) mdb__parse__wrapper_arg_1), &mdb__parse__conv4_HeadVar__2_2);
    }
#line 521 "parse.m"
    if (mdb__parse__succeeded)
#line 521 "parse.m"
      {
#line 521 "parse.m"
        *mdb__parse__wrapper_arg_2 = ((MR_Box) (mdb__parse__conv4_HeadVar__2_2));
#line 521 "parse.m"
        mdb__parse__succeeded = MR_TRUE;
#line 521 "parse.m"
      }
#line 521 "parse.m"
    return mdb__parse__succeeded;
#line 521 "parse.m"
  }
#line 521 "parse.m"
}

#line 390 "parse.m"
static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_3(
#line 390 "parse.m"
  void * mdb__parse__env_ptr_arg)
#line 390 "parse.m"
{
#line 390 "parse.m"
  {
#line 390 "parse.m"
    struct mdb__parse__parse_cmd_4_p_0_4_env_0_s * mdb__parse__env_ptr = (struct mdb__parse__parse_cmd_4_p_0_4_env_0_s *) mdb__parse__env_ptr_arg;

#line 390 "parse.m"
    *((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_4_env_0__conv3_HeadVar__1_1));
#line 390 "parse.m"
    *((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_4_env_0__conv2_HeadVar__2_2));
#line 390 "parse.m"
    {
#line 390 "parse.m"
      ((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_4_env_0__cont)((mdb__parse__env_ptr)->mdb__parse__parse_cmd_4_p_0_4_env_0__cont_env_ptr);
    }
#line 390 "parse.m"
  }
#line 390 "parse.m"
}

#line 390 "parse.m"
static void MR_CALL 
mdb__parse__parse_cmd_4_p_0_4(
#line 390 "parse.m"
  MR_Box mdb__parse__closure_arg,
#line 390 "parse.m"
  MR_Box * mdb__parse__wrapper_arg_1,
#line 390 "parse.m"
  MR_Box * mdb__parse__wrapper_arg_2,
#line 390 "parse.m"
  MR_Cont mdb__parse__cont,
#line 390 "parse.m"
  void * mdb__parse__cont_env_ptr)
#line 390 "parse.m"
{
#line 390 "parse.m"
  {
#line 390 "parse.m"
    struct mdb__parse__parse_cmd_4_p_0_4_env_0_s mdb__parse__env;

#line 390 "parse.m"
    (mdb__parse__env).mdb__parse__parse_cmd_4_p_0_4_env_0__wrapper_arg_1 = mdb__parse__wrapper_arg_1;
#line 390 "parse.m"
    (mdb__parse__env).mdb__parse__parse_cmd_4_p_0_4_env_0__wrapper_arg_2 = mdb__parse__wrapper_arg_2;
#line 390 "parse.m"
    (mdb__parse__env).mdb__parse__parse_cmd_4_p_0_4_env_0__cont = mdb__parse__cont;
#line 390 "parse.m"
    (mdb__parse__env).mdb__parse__parse_cmd_4_p_0_4_env_0__cont_env_ptr = mdb__parse__cont_env_ptr;
#line 390 "parse.m"
    {
#line 390 "parse.m"
      MR_Box mdb__parse__closure = mdb__parse__closure_arg;

#line 390 "parse.m"
      {
#line 390 "parse.m"
        mdb__parse__format_option_defaults_2_p_0(&(mdb__parse__env).mdb__parse__parse_cmd_4_p_0_4_env_0__conv3_HeadVar__1_1, &(mdb__parse__env).mdb__parse__parse_cmd_4_p_0_4_env_0__conv2_HeadVar__2_2, mdb__parse__parse_cmd_4_p_0_3, &mdb__parse__env);
      }
#line 390 "parse.m"
    }
#line 390 "parse.m"
  }
#line 390 "parse.m"
}

#line 390 "parse.m"
static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_2(
#line 390 "parse.m"
  MR_Box mdb__parse__closure_arg,
#line 390 "parse.m"
  MR_Box mdb__parse__wrapper_arg_1,
#line 390 "parse.m"
  MR_Box * mdb__parse__wrapper_arg_2)
#line 390 "parse.m"
{
#line 390 "parse.m"
  {
#line 390 "parse.m"
    MR_bool mdb__parse__succeeded;
#line 390 "parse.m"
    MR_Box mdb__parse__closure = mdb__parse__closure_arg;
#line 390 "parse.m"
    MR_Word mdb__parse__conv1_HeadVar__2_2;

#line 390 "parse.m"
    {
#line 390 "parse.m"
      mdb__parse__succeeded = mdb__parse__long_format_option_2_p_0(((MR_String) mdb__parse__wrapper_arg_1), &mdb__parse__conv1_HeadVar__2_2);
    }
#line 390 "parse.m"
    if (mdb__parse__succeeded)
#line 390 "parse.m"
      {
#line 390 "parse.m"
        *mdb__parse__wrapper_arg_2 = ((MR_Box) (mdb__parse__conv1_HeadVar__2_2));
#line 390 "parse.m"
        mdb__parse__succeeded = MR_TRUE;
#line 390 "parse.m"
      }
#line 390 "parse.m"
    return mdb__parse__succeeded;
#line 390 "parse.m"
  }
#line 390 "parse.m"
}

#line 389 "parse.m"
static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0_1(
#line 389 "parse.m"
  MR_Box mdb__parse__closure_arg,
#line 389 "parse.m"
  MR_Box mdb__parse__wrapper_arg_1,
#line 389 "parse.m"
  MR_Box * mdb__parse__wrapper_arg_2)
#line 389 "parse.m"
{
#line 389 "parse.m"
  {
#line 389 "parse.m"
    MR_bool mdb__parse__succeeded;
#line 389 "parse.m"
    MR_Box mdb__parse__closure = mdb__parse__closure_arg;
#line 389 "parse.m"
    MR_Word mdb__parse__conv0_HeadVar__2_2;

#line 389 "parse.m"
    {
#line 389 "parse.m"
      mdb__parse__succeeded = mdb__parse__short_format_option_2_p_0(((MR_Char) (MR_Word) mdb__parse__wrapper_arg_1), &mdb__parse__conv0_HeadVar__2_2);
    }
#line 389 "parse.m"
    if (mdb__parse__succeeded)
#line 389 "parse.m"
      {
#line 389 "parse.m"
        *mdb__parse__wrapper_arg_2 = ((MR_Box) (mdb__parse__conv0_HeadVar__2_2));
#line 389 "parse.m"
        mdb__parse__succeeded = MR_TRUE;
#line 389 "parse.m"
      }
#line 389 "parse.m"
    return mdb__parse__succeeded;
#line 389 "parse.m"
  }
#line 389 "parse.m"
}

#line 368 "parse.m"
static MR_bool MR_CALL 
mdb__parse__parse_cmd_4_p_0(
#line 368 "parse.m"
  MR_Word mdb__parse__CmdToken_5,
#line 368 "parse.m"
  MR_Word mdb__parse__ArgTokens_6,
#line 368 "parse.m"
  MR_Word mdb__parse__MaybeArgWords_7,
#line 368 "parse.m"
  MR_Word * mdb__parse__Command_8)
#line 368 "parse.m"
{
#line 405 "parse.m"
  {
#line 405 "parse.m"
    MR_bool mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__CmdToken_5)) == (MR_mktag((MR_Integer) 2)));
#line 379 "parse.m"
    MR_String mdb__parse__V_255_255;

#line 378 "parse.m"
    if (mdb__parse__succeeded)
#line 378 "parse.m"
      {
#line 378 "parse.m"
        mdb__parse__V_255_255 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__CmdToken_5, (MR_Integer) 0)));
#line 379 "parse.m"
        if ((strcmp(mdb__parse__V_255_255, (MR_String) "p") == 0))
#line 379 "parse.m"
          mdb__parse__succeeded = MR_TRUE;
#line 379 "parse.m"
        else
#line 379 "parse.m"
        if ((strcmp(mdb__parse__V_255_255, (MR_String) "ls") == 0))
#line 380 "parse.m"
          mdb__parse__succeeded = MR_TRUE;
#line 379 "parse.m"
        else
#line 379 "parse.m"
        if ((strcmp(mdb__parse__V_255_255, (MR_String) "print") == 0))
#line 378 "parse.m"
          mdb__parse__succeeded = MR_TRUE;
#line 379 "parse.m"
        else
#line 379 "parse.m"
          mdb__parse__succeeded = MR_FALSE;
#line 378 "parse.m"
      }
#line 405 "parse.m"
    if (mdb__parse__succeeded)
#line 395 "parse.m"
      {
#line 395 "parse.m"
        MR_Word mdb__parse__MaybeMaybeOptionTable_9;
#line 395 "parse.m"
        MR_Word mdb__parse__RemainingTokens_10;
#line 395 "parse.m"
        MR_Word mdb__parse__MaybePath_15;

#line 387 "parse.m"
        if ((mdb__parse__MaybeArgWords_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 384 "parse.m"
          {
#line 385 "parse.m"
            mdb__parse__MaybeMaybeOptionTable_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 386 "parse.m"
            mdb__parse__RemainingTokens_10 = mdb__parse__ArgTokens_6;
#line 384 "parse.m"
          }
#line 387 "parse.m"
        else
#line 388 "parse.m"
          {
#line 388 "parse.m"
            MR_Word mdb__parse__ArgWords_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__MaybeArgWords_7, (MR_Integer) 0)));
#line 388 "parse.m"
            MR_Word mdb__parse__RemainingWords_13;
#line 388 "parse.m"
            MR_Word mdb__parse__MaybeOptionTable_14;

#line 391 "parse.m"
            {
#line 391 "parse.m"
              mercury__getopt__process_options_4_p_0((MR_Word) &mdb__parse__mdb__parse__type_ctor_info_format_option_0, (MR_Word) MR_mkword(MR_mktag(2), &mdb__parse_scalar_common_3[7]), mdb__parse__ArgWords_11, &mdb__parse__RemainingWords_13, &mdb__parse__MaybeOptionTable_14);
            }
#line 393 "parse.m"
            {
#line 393 "parse.m"
              mdb__parse__MaybeMaybeOptionTable_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 393 "parse.m"
              MR_hl_field(MR_mktag(1), mdb__parse__MaybeMaybeOptionTable_9, 0) = ((MR_Box) (mdb__parse__MaybeOptionTable_14));
#line 393 "parse.m"
            }
#line 394 "parse.m"
            {
#line 394 "parse.m"
              mdb__parse__lexer_words_2_p_0(mdb__parse__RemainingWords_13, &mdb__parse__RemainingTokens_10);
            }
#line 388 "parse.m"
          }
#line 399 "parse.m"
        if ((mdb__parse__RemainingTokens_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 397 "parse.m"
          {
#line 397 "parse.m"
            mdb__parse__MaybePath_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 397 "parse.m"
            mdb__parse__succeeded = MR_TRUE;
#line 397 "parse.m"
          }
#line 399 "parse.m"
        else
#line 400 "parse.m"
          {
#line 400 "parse.m"
            MR_Word mdb__parse__Path_18;

#line 401 "parse.m"
            {
#line 401 "parse.m"
              mdb__parse__succeeded = mdb__parse__parse_path_2_p_0(mdb__parse__RemainingTokens_10, &mdb__parse__Path_18);
            }
#line 400 "parse.m"
            if (mdb__parse__succeeded)
#line 400 "parse.m"
              {
#line 402 "parse.m"
                {
#line 402 "parse.m"
                  mdb__parse__MaybePath_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 402 "parse.m"
                  MR_hl_field(MR_mktag(1), mdb__parse__MaybePath_15, 0) = ((MR_Box) (mdb__parse__Path_18));
#line 402 "parse.m"
                }
#line 402 "parse.m"
                mdb__parse__succeeded = MR_TRUE;
#line 400 "parse.m"
              }
#line 400 "parse.m"
          }
#line 395 "parse.m"
        if (mdb__parse__succeeded)
#line 395 "parse.m"
          {
#line 404 "parse.m"
            {
#line 404 "parse.m"
              MR_Word base;
#line 404 "parse.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 404 "parse.m"
              *mdb__parse__Command_8 = base;
#line 404 "parse.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__parse__MaybeMaybeOptionTable_9));
#line 404 "parse.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__parse__MaybePath_15));
#line 404 "parse.m"
            }
#line 404 "parse.m"
            mdb__parse__succeeded = MR_TRUE;
#line 395 "parse.m"
          }
#line 395 "parse.m"
      }
#line 405 "parse.m"
    else
#line 412 "parse.m"
      {
#line 407 "parse.m"
        MR_String mdb__parse__V_256_256;

#line 406 "parse.m"
        mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__CmdToken_5)) == (MR_mktag((MR_Integer) 2)));
#line 406 "parse.m"
        if (mdb__parse__succeeded)
#line 406 "parse.m"
          {
#line 406 "parse.m"
            mdb__parse__V_256_256 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__CmdToken_5, (MR_Integer) 0)));
#line 407 "parse.m"
            if ((strcmp(mdb__parse__V_256_256, (MR_String) "d") == 0))
#line 407 "parse.m"
              mdb__parse__succeeded = MR_TRUE;
#line 407 "parse.m"
            else
#line 407 "parse.m"
            if ((strcmp(mdb__parse__V_256_256, (MR_String) "display") == 0))
#line 406 "parse.m"
              mdb__parse__succeeded = MR_TRUE;
#line 407 "parse.m"
            else
#line 407 "parse.m"
              mdb__parse__succeeded = MR_FALSE;
#line 406 "parse.m"
          }
#line 412 "parse.m"
        if (mdb__parse__succeeded)
#line 410 "parse.m"
          {
#line 410 "parse.m"
            mdb__parse__succeeded = (mdb__parse__ArgTokens_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 410 "parse.m"
            if (mdb__parse__succeeded)
#line 410 "parse.m"
              {
#line 411 "parse.m"
                *mdb__parse__Command_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 411 "parse.m"
                mdb__parse__succeeded = MR_TRUE;
#line 410 "parse.m"
              }
#line 410 "parse.m"
          }
#line 412 "parse.m"
        else
#line 419 "parse.m"
          {
#line 414 "parse.m"
            MR_String mdb__parse__V_257_257;

#line 413 "parse.m"
            mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__CmdToken_5)) == (MR_mktag((MR_Integer) 2)));
#line 413 "parse.m"
            if (mdb__parse__succeeded)
#line 413 "parse.m"
              {
#line 413 "parse.m"
                mdb__parse__V_257_257 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__CmdToken_5, (MR_Integer) 0)));
#line 414 "parse.m"
                if ((strcmp(mdb__parse__V_257_257, (MR_String) "w") == 0))
#line 414 "parse.m"
                  mdb__parse__succeeded = MR_TRUE;
#line 414 "parse.m"
                else
#line 414 "parse.m"
                if ((strcmp(mdb__parse__V_257_257, (MR_String) "write") == 0))
#line 413 "parse.m"
                  mdb__parse__succeeded = MR_TRUE;
#line 414 "parse.m"
                else
#line 414 "parse.m"
                  mdb__parse__succeeded = MR_FALSE;
#line 413 "parse.m"
              }
#line 419 "parse.m"
            if (mdb__parse__succeeded)
#line 417 "parse.m"
              {
#line 417 "parse.m"
                mdb__parse__succeeded = (mdb__parse__ArgTokens_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 417 "parse.m"
                if (mdb__parse__succeeded)
#line 417 "parse.m"
                  {
#line 418 "parse.m"
                    *mdb__parse__Command_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 418 "parse.m"
                    mdb__parse__succeeded = MR_TRUE;
#line 417 "parse.m"
                  }
#line 417 "parse.m"
              }
#line 419 "parse.m"
            else
#line 433 "parse.m"
              {
#line 421 "parse.m"
                MR_String mdb__parse__V_258_258;

#line 420 "parse.m"
                mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__CmdToken_5)) == (MR_mktag((MR_Integer) 2)));
#line 420 "parse.m"
                if (mdb__parse__succeeded)
#line 420 "parse.m"
                  {
#line 420 "parse.m"
                    mdb__parse__V_258_258 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__CmdToken_5, (MR_Integer) 0)));
#line 421 "parse.m"
                    if ((strcmp(mdb__parse__V_258_258, (MR_String) "addr") == 0))
#line 421 "parse.m"
                      mdb__parse__succeeded = MR_TRUE;
#line 421 "parse.m"
                    else
#line 421 "parse.m"
                    if ((strcmp(mdb__parse__V_258_258, (MR_String) "memory_addr") == 0))
#line 420 "parse.m"
                      mdb__parse__succeeded = MR_TRUE;
#line 421 "parse.m"
                    else
#line 421 "parse.m"
                      mdb__parse__succeeded = MR_FALSE;
#line 420 "parse.m"
                  }
#line 433 "parse.m"
                if (mdb__parse__succeeded)
#line 431 "parse.m"
                  {
#line 431 "parse.m"
                    MR_Word mdb__parse__MaybePath_100;

#line 427 "parse.m"
                    if ((mdb__parse__ArgTokens_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 425 "parse.m"
                      {
#line 425 "parse.m"
                        mdb__parse__MaybePath_100 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 425 "parse.m"
                        mdb__parse__succeeded = MR_TRUE;
#line 425 "parse.m"
                      }
#line 427 "parse.m"
                    else
#line 428 "parse.m"
                      {
#line 428 "parse.m"
                        MR_Word mdb__parse__Path_98;

#line 429 "parse.m"
                        {
#line 429 "parse.m"
                          mdb__parse__succeeded = mdb__parse__parse_path_2_p_0(mdb__parse__ArgTokens_6, &mdb__parse__Path_98);
                        }
#line 428 "parse.m"
                        if (mdb__parse__succeeded)
#line 428 "parse.m"
                          {
#line 430 "parse.m"
                            {
#line 430 "parse.m"
                              mdb__parse__MaybePath_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 430 "parse.m"
                              MR_hl_field(MR_mktag(1), mdb__parse__MaybePath_100, 0) = ((MR_Box) (mdb__parse__Path_98));
#line 430 "parse.m"
                            }
#line 430 "parse.m"
                            mdb__parse__succeeded = MR_TRUE;
#line 428 "parse.m"
                          }
#line 428 "parse.m"
                      }
#line 431 "parse.m"
                    if (mdb__parse__succeeded)
#line 431 "parse.m"
                      {
#line 432 "parse.m"
                        {
#line 432 "parse.m"
                          MR_Word base;
#line 432 "parse.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 432 "parse.m"
                          *mdb__parse__Command_8 = base;
#line 432 "parse.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__parse__MaybePath_100));
#line 432 "parse.m"
                        }
#line 432 "parse.m"
                        mdb__parse__succeeded = MR_TRUE;
#line 431 "parse.m"
                      }
#line 431 "parse.m"
                  }
#line 433 "parse.m"
                else
#line 441 "parse.m"
                  {
#line 434 "parse.m"
                    MR_String mdb__parse__V_58_58;

#line 434 "parse.m"
                    mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__CmdToken_5)) == (MR_mktag((MR_Integer) 2)));
#line 434 "parse.m"
                    if (mdb__parse__succeeded)
#line 434 "parse.m"
                      {
#line 434 "parse.m"
                        mdb__parse__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__CmdToken_5, (MR_Integer) 0)));
#line 434 "parse.m"
                        mdb__parse__succeeded = (strcmp(mdb__parse__V_58_58, (MR_String) "cdr") == 0);
#line 434 "parse.m"
                      }
#line 441 "parse.m"
                    if (mdb__parse__succeeded)
#line 436 "parse.m"
                      {
#line 436 "parse.m"
                        MR_Word mdb__parse__TypeInfo_232_232;
#line 436 "parse.m"
                        MR_Word mdb__parse__TypeCtorInfo_233_233;
#line 436 "parse.m"
                        MR_Integer mdb__parse__Repetitions_21;
#line 436 "parse.m"
                        MR_Word mdb__parse__TokenPath_22;
#line 436 "parse.m"
                        MR_Word mdb__parse__DupTokenPath_23;
#line 436 "parse.m"
                        MR_Word mdb__parse__RepeatedTokenPath_24;
#line 436 "parse.m"
                        MR_Word mdb__parse__RepeatedPath_25;
#line 436 "parse.m"
                        MR_Word mdb__parse__V_59_59;

#line 436 "parse.m"
                        mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__ArgTokens_6)) == (MR_mktag((MR_Integer) 1)));
#line 436 "parse.m"
                        if (mdb__parse__succeeded)
#line 436 "parse.m"
                          {
#line 436 "parse.m"
                            mdb__parse__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__ArgTokens_6, (MR_Integer) 0)));
#line 436 "parse.m"
                            mdb__parse__TokenPath_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__ArgTokens_6, (MR_Integer) 1)));
#line 436 "parse.m"
                            mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__V_59_59)) == (MR_mktag((MR_Integer) 1)));
#line 436 "parse.m"
                            if (mdb__parse__succeeded)
#line 436 "parse.m"
                              {
#line 436 "parse.m"
                                mdb__parse__Repetitions_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__parse__V_59_59, (MR_Integer) 0)));
#line 7935 "mdb.parse.c"
                                mdb__parse__TypeInfo_232_232 = (MR_Word) &mdb__parse_scalar_common_1[0];
#line 437 "parse.m"
                                {
#line 437 "parse.m"
                                  mercury__list__duplicate_3_p_0(mdb__parse__TypeInfo_232_232, mdb__parse__Repetitions_21, ((MR_Box) (mdb__parse__TokenPath_22)), &mdb__parse__DupTokenPath_23);
                                }
#line 7942 "mdb.parse.c"
                                mdb__parse__TypeCtorInfo_233_233 = (MR_Word) &mdb__parse__mdb__parse__type_ctor_info_token_0;
#line 438 "parse.m"
                                {
#line 438 "parse.m"
                                  mercury__list__condense_2_p_0(mdb__parse__TypeCtorInfo_233_233, mdb__parse__DupTokenPath_23, &mdb__parse__RepeatedTokenPath_24);
                                }
#line 439 "parse.m"
                                {
#line 439 "parse.m"
                                  mdb__parse__succeeded = mdb__parse__parse_path_2_p_0(mdb__parse__RepeatedTokenPath_24, &mdb__parse__RepeatedPath_25);
                                }
#line 436 "parse.m"
                                if (mdb__parse__succeeded)
#line 436 "parse.m"
                                  {
#line 440 "parse.m"
                                    {
#line 440 "parse.m"
                                      MR_Word base;
#line 440 "parse.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "parse.m"
                                      *mdb__parse__Command_8 = base;
#line 440 "parse.m"
                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 440 "parse.m"
                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__parse__RepeatedPath_25));
#line 440 "parse.m"
                                    }
#line 440 "parse.m"
                                    mdb__parse__succeeded = MR_TRUE;
#line 436 "parse.m"
                                  }
#line 436 "parse.m"
                              }
#line 436 "parse.m"
                          }
#line 436 "parse.m"
                      }
#line 441 "parse.m"
                    else
#line 454 "parse.m"
                      {
#line 443 "parse.m"
                        if ((mdb__parse__CmdToken_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 443 "parse.m"
                          mdb__parse__succeeded = MR_TRUE;
#line 443 "parse.m"
                        else
#line 443 "parse.m"
                        if (((MR_tag((MR_Word) mdb__parse__CmdToken_5)) == (MR_mktag((MR_Integer) 2))))
#line 442 "parse.m"
                          {
#line 442 "parse.m"
                            MR_String mdb__parse__V_60_60 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__CmdToken_5, (MR_Integer) 0)));

#line 442 "parse.m"
                            mdb__parse__succeeded = (strcmp(mdb__parse__V_60_60, (MR_String) "cd") == 0);
#line 442 "parse.m"
                          }
#line 443 "parse.m"
                        else
#line 443 "parse.m"
                          mdb__parse__succeeded = MR_FALSE;
#line 454 "parse.m"
                        if (mdb__parse__succeeded)
#line 450 "parse.m"
                          if ((mdb__parse__ArgTokens_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 451 "parse.m"
                            {
#line 451 "parse.m"
                              *mdb__parse__Command_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 451 "parse.m"
                              mdb__parse__succeeded = MR_TRUE;
#line 451 "parse.m"
                            }
#line 450 "parse.m"
                          else
#line 447 "parse.m"
                            {
#line 447 "parse.m"
                              MR_Word mdb__parse__Path_102;

#line 448 "parse.m"
                              {
#line 448 "parse.m"
                                mdb__parse__succeeded = mdb__parse__parse_path_2_p_0(mdb__parse__ArgTokens_6, &mdb__parse__Path_102);
                              }
#line 447 "parse.m"
                              if (mdb__parse__succeeded)
#line 447 "parse.m"
                                {
#line 449 "parse.m"
                                  {
#line 449 "parse.m"
                                    MR_Word base;
#line 449 "parse.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "parse.m"
                                    *mdb__parse__Command_8 = base;
#line 449 "parse.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 449 "parse.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__parse__Path_102));
#line 449 "parse.m"
                                  }
#line 449 "parse.m"
                                  mdb__parse__succeeded = MR_TRUE;
#line 447 "parse.m"
                                }
#line 447 "parse.m"
                            }
#line 454 "parse.m"
                        else
#line 459 "parse.m"
                          {
#line 455 "parse.m"
                            MR_String mdb__parse__V_61_61;

#line 455 "parse.m"
                            mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__CmdToken_5)) == (MR_mktag((MR_Integer) 2)));
#line 455 "parse.m"
                            if (mdb__parse__succeeded)
#line 455 "parse.m"
                              {
#line 455 "parse.m"
                                mdb__parse__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__CmdToken_5, (MR_Integer) 0)));
#line 455 "parse.m"
                                mdb__parse__succeeded = (strcmp(mdb__parse__V_61_61, (MR_String) "pwd") == 0);
#line 455 "parse.m"
                              }
#line 459 "parse.m"
                            if (mdb__parse__succeeded)
#line 457 "parse.m"
                              {
#line 457 "parse.m"
                                mdb__parse__succeeded = (mdb__parse__ArgTokens_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 457 "parse.m"
                                if (mdb__parse__succeeded)
#line 457 "parse.m"
                                  {
#line 458 "parse.m"
                                    *mdb__parse__Command_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 458 "parse.m"
                                    mdb__parse__succeeded = MR_TRUE;
#line 457 "parse.m"
                                  }
#line 457 "parse.m"
                              }
#line 459 "parse.m"
                            else
#line 501 "parse.m"
                              {
#line 501 "parse.m"
                                MR_Word mdb__parse__AssertInvalid_28;
#line 463 "parse.m"
                                MR_String mdb__parse__V_259_259;
#line 463 "parse.m"
                                MR_Integer mdb__parse__lo_0;
#line 463 "parse.m"
                                MR_Integer mdb__parse__hi_1;
#line 463 "parse.m"
                                MR_Integer mdb__parse__mid_2;
#line 463 "parse.m"
                                MR_Integer mdb__parse__result_3;

#line 461 "parse.m"
                                mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__CmdToken_5)) == (MR_mktag((MR_Integer) 2)));
#line 461 "parse.m"
                                if (mdb__parse__succeeded)
#line 461 "parse.m"
                                  {
#line 461 "parse.m"
                                    mdb__parse__V_259_259 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__CmdToken_5, (MR_Integer) 0)));
#line 463 "parse.m"
                                    /* binary string simple lookup switch */
#line 463 "parse.m"
                                    mdb__parse__lo_0 = (MR_Integer) 0;
#line 463 "parse.m"
                                    mdb__parse__hi_1 = (MR_Integer) 3;
#line 463 "parse.m"
                                    do
#line 463 "parse.m"
                                      {
#line 463 "parse.m"
                                        mdb__parse__mid_2 = (((mdb__parse__lo_0 + mdb__parse__hi_1)) / (MR_Integer) 2);
#line 463 "parse.m"
                                        mdb__parse__result_3 = MR_strcmp(mdb__parse__V_259_259, ((&mdb__parse_vector_common_5[0 + mdb__parse__mid_2]))->mdb__parse__vector_common_type_5_0__vct_5_f_0);
#line 463 "parse.m"
                                        if ((mdb__parse__result_3 == (MR_Integer) 0))
#line 463 "parse.m"
                                          {
#line 463 "parse.m"
                                            mdb__parse__AssertInvalid_28 = ((&mdb__parse_vector_common_5[0 + mdb__parse__mid_2]))->mdb__parse__vector_common_type_5_0__vct_5_f_1;
#line 463 "parse.m"
                                            mdb__parse__succeeded = MR_TRUE;
#line 463 "parse.m"
                                            /* jump out of search loop */
#line 463 "parse.m"
                                            goto label_0;
#line 463 "parse.m"
                                          }
#line 463 "parse.m"
                                        else
#line 463 "parse.m"
                                        if ((mdb__parse__result_3 < (MR_Integer) 0))
#line 463 "parse.m"
                                          mdb__parse__hi_1 = (mdb__parse__mid_2 - (MR_Integer) 1);
#line 463 "parse.m"
                                        else
#line 463 "parse.m"
                                          mdb__parse__lo_0 = (mdb__parse__mid_2 + (MR_Integer) 1);
#line 463 "parse.m"
                                      }
#line 463 "parse.m"
                                    while ((mdb__parse__lo_0 <= mdb__parse__hi_1));
#line 463 "parse.m"
                                    mdb__parse__succeeded = MR_FALSE;
#line 463 "parse.m"
                                  label_0:;
#line 461 "parse.m"
                                  }
#line 501 "parse.m"
                                if (mdb__parse__succeeded)
#line 499 "parse.m"
                                  {
#line 499 "parse.m"
                                    MR_Word mdb__parse__HowTrack_29;
#line 499 "parse.m"
                                    MR_Word mdb__parse__MaybePath_111;

#line 478 "parse.m"
                                    if ((mdb__parse__ArgTokens_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 475 "parse.m"
                                      {
#line 476 "parse.m"
                                        mdb__parse__HowTrack_29 = (MR_Integer) 1;
#line 477 "parse.m"
                                        mdb__parse__MaybePath_111 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 475 "parse.m"
                                        mdb__parse__succeeded = MR_TRUE;
#line 475 "parse.m"
                                      }
#line 478 "parse.m"
                                    else
#line 479 "parse.m"
                                      {
#line 479 "parse.m"
                                        MR_Word mdb__parse__HeadArgToken_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__ArgTokens_6, (MR_Integer) 0)));
#line 479 "parse.m"
                                        MR_Word mdb__parse__TailArgTokens_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__ArgTokens_6, (MR_Integer) 1)));
#line 482 "parse.m"
                                        MR_String mdb__parse__V_260_260;

#line 481 "parse.m"
                                        mdb__parse__succeeded = ((((MR_tag((MR_Word) mdb__parse__HeadArgToken_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__parse__HeadArgToken_30, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 481 "parse.m"
                                        if (mdb__parse__succeeded)
#line 481 "parse.m"
                                          {
#line 481 "parse.m"
                                            mdb__parse__V_260_260 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__parse__HeadArgToken_30, (MR_Integer) 1)));
#line 482 "parse.m"
                                            if ((strcmp(mdb__parse__V_260_260, (MR_String) "a") == 0))
#line 482 "parse.m"
                                              mdb__parse__succeeded = MR_TRUE;
#line 482 "parse.m"
                                            else
#line 482 "parse.m"
                                            if ((strcmp(mdb__parse__V_260_260, (MR_String) "accurate") == 0))
#line 481 "parse.m"
                                              mdb__parse__succeeded = MR_TRUE;
#line 482 "parse.m"
                                            else
#line 482 "parse.m"
                                              mdb__parse__succeeded = MR_FALSE;
#line 481 "parse.m"
                                          }
#line 494 "parse.m"
                                        if (mdb__parse__succeeded)
#line 485 "parse.m"
                                          {
#line 485 "parse.m"
                                            mdb__parse__HowTrack_29 = (MR_Integer) 0;
#line 489 "parse.m"
                                            if ((mdb__parse__TailArgTokens_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 487 "parse.m"
                                              {
#line 487 "parse.m"
                                                mdb__parse__MaybePath_111 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 487 "parse.m"
                                                mdb__parse__succeeded = MR_TRUE;
#line 487 "parse.m"
                                              }
#line 489 "parse.m"
                                            else
#line 490 "parse.m"
                                              {
#line 490 "parse.m"
                                                MR_Word mdb__parse__Path_104;

#line 491 "parse.m"
                                                {
#line 491 "parse.m"
                                                  mdb__parse__succeeded = mdb__parse__parse_path_2_p_0(mdb__parse__TailArgTokens_31, &mdb__parse__Path_104);
                                                }
#line 490 "parse.m"
                                                if (mdb__parse__succeeded)
#line 490 "parse.m"
                                                  {
#line 492 "parse.m"
                                                    {
#line 492 "parse.m"
                                                      mdb__parse__MaybePath_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 492 "parse.m"
                                                      MR_hl_field(MR_mktag(1), mdb__parse__MaybePath_111, 0) = ((MR_Box) (mdb__parse__Path_104));
#line 492 "parse.m"
                                                    }
#line 492 "parse.m"
                                                    mdb__parse__succeeded = MR_TRUE;
#line 490 "parse.m"
                                                  }
#line 490 "parse.m"
                                              }
#line 485 "parse.m"
                                          }
#line 494 "parse.m"
                                        else
#line 495 "parse.m"
                                          {
#line 495 "parse.m"
                                            MR_Word mdb__parse__Path_107;

#line 495 "parse.m"
                                            mdb__parse__HowTrack_29 = (MR_Integer) 1;
#line 496 "parse.m"
                                            {
#line 496 "parse.m"
                                              mdb__parse__succeeded = mdb__parse__parse_path_2_p_0(mdb__parse__ArgTokens_6, &mdb__parse__Path_107);
                                            }
#line 495 "parse.m"
                                            if (mdb__parse__succeeded)
#line 495 "parse.m"
                                              {
#line 497 "parse.m"
                                                {
#line 497 "parse.m"
                                                  mdb__parse__MaybePath_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 497 "parse.m"
                                                  MR_hl_field(MR_mktag(1), mdb__parse__MaybePath_111, 0) = ((MR_Box) (mdb__parse__Path_107));
#line 497 "parse.m"
                                                }
#line 497 "parse.m"
                                                mdb__parse__succeeded = MR_TRUE;
#line 495 "parse.m"
                                              }
#line 495 "parse.m"
                                          }
#line 479 "parse.m"
                                      }
#line 499 "parse.m"
                                    if (mdb__parse__succeeded)
#line 499 "parse.m"
                                      {
#line 500 "parse.m"
                                        {
#line 500 "parse.m"
                                          MR_Word base;
#line 500 "parse.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 500 "parse.m"
                                          *mdb__parse__Command_8 = base;
#line 500 "parse.m"
                                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 500 "parse.m"
                                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((mdb__parse__HowTrack_29 | ((mdb__parse__AssertInvalid_28 << (MR_Integer) 1)))));
#line 500 "parse.m"
                                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mdb__parse__MaybePath_111));
#line 500 "parse.m"
                                        }
#line 500 "parse.m"
                                        mdb__parse__succeeded = MR_TRUE;
#line 499 "parse.m"
                                      }
#line 499 "parse.m"
                                  }
#line 501 "parse.m"
                                else
#line 512 "parse.m"
                                  {
#line 502 "parse.m"
                                    MR_String mdb__parse__V_68_68;

#line 502 "parse.m"
                                    mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__CmdToken_5)) == (MR_mktag((MR_Integer) 2)));
#line 502 "parse.m"
                                    if (mdb__parse__succeeded)
#line 502 "parse.m"
                                      {
#line 502 "parse.m"
                                        mdb__parse__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__CmdToken_5, (MR_Integer) 0)));
#line 502 "parse.m"
                                        mdb__parse__succeeded = (strcmp(mdb__parse__V_68_68, (MR_String) "mode") == 0);
#line 502 "parse.m"
                                      }
#line 512 "parse.m"
                                    if (mdb__parse__succeeded)
#line 508 "parse.m"
                                      if ((mdb__parse__ArgTokens_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 509 "parse.m"
                                        {
#line 509 "parse.m"
                                          *mdb__parse__Command_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
#line 509 "parse.m"
                                          mdb__parse__succeeded = MR_TRUE;
#line 509 "parse.m"
                                        }
#line 508 "parse.m"
                                      else
#line 505 "parse.m"
                                        {
#line 505 "parse.m"
                                          MR_Word mdb__parse__Path_113;

#line 506 "parse.m"
                                          {
#line 506 "parse.m"
                                            mdb__parse__succeeded = mdb__parse__parse_path_2_p_0(mdb__parse__ArgTokens_6, &mdb__parse__Path_113);
                                          }
#line 505 "parse.m"
                                          if (mdb__parse__succeeded)
#line 505 "parse.m"
                                            {
#line 507 "parse.m"
                                              {
#line 507 "parse.m"
                                                MR_Word base;
#line 507 "parse.m"
                                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 507 "parse.m"
                                                *mdb__parse__Command_8 = base;
#line 507 "parse.m"
                                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 507 "parse.m"
                                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__parse__Path_113));
#line 507 "parse.m"
                                              }
#line 507 "parse.m"
                                              mdb__parse__succeeded = MR_TRUE;
#line 505 "parse.m"
                                            }
#line 505 "parse.m"
                                        }
#line 512 "parse.m"
                                    else
#line 530 "parse.m"
                                      {
#line 513 "parse.m"
                                        MR_String mdb__parse__V_69_69;

#line 513 "parse.m"
                                        mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__CmdToken_5)) == (MR_mktag((MR_Integer) 2)));
#line 513 "parse.m"
                                        if (mdb__parse__succeeded)
#line 513 "parse.m"
                                          {
#line 513 "parse.m"
                                            mdb__parse__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__CmdToken_5, (MR_Integer) 0)));
#line 513 "parse.m"
                                            mdb__parse__succeeded = (strcmp(mdb__parse__V_69_69, (MR_String) "format") == 0);
#line 513 "parse.m"
                                          }
#line 530 "parse.m"
                                        if (mdb__parse__succeeded)
#line 528 "parse.m"
                                          {
#line 528 "parse.m"
                                            MR_Word mdb__parse__FormatCmd_36;

#line 518 "parse.m"
                                            if ((mdb__parse__ArgTokens_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 516 "parse.m"
                                              {
#line 516 "parse.m"
                                                mdb__parse__FormatCmd_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 516 "parse.m"
                                                mdb__parse__succeeded = MR_TRUE;
#line 516 "parse.m"
                                              }
#line 518 "parse.m"
                                            else
#line 519 "parse.m"
                                              {
#line 519 "parse.m"
                                                MR_Word mdb__parse__TypeCtorInfo_240_240;
#line 519 "parse.m"
                                                MR_Word mdb__parse__Setting_39;
#line 519 "parse.m"
                                                MR_Word mdb__parse__V_70_70;
#line 519 "parse.m"
                                                MR_Word mdb__parse__V_71_71;
#line 519 "parse.m"
                                                MR_Word mdb__parse__V_72_72;
#line 519 "parse.m"
                                                MR_Word mdb__parse__RemainingTokens_115;
#line 519 "parse.m"
                                                MR_Word mdb__parse__ArgWords_116;
#line 519 "parse.m"
                                                MR_Word mdb__parse__OptionOps_117;
#line 519 "parse.m"
                                                MR_Word mdb__parse__RemainingWords_118;
#line 519 "parse.m"
                                                MR_Word mdb__parse__MaybeOptionTable_119;

#line 520 "parse.m"
                                                mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__MaybeArgWords_7)) == (MR_mktag((MR_Integer) 1)));
#line 520 "parse.m"
                                                if (mdb__parse__succeeded)
#line 520 "parse.m"
                                                  {
#line 520 "parse.m"
                                                    mdb__parse__ArgWords_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__MaybeArgWords_7, (MR_Integer) 0)));
#line 521 "parse.m"
                                                    mdb__parse__V_70_70 = (MR_Word) &mdb__parse_scalar_common_3[8];
#line 522 "parse.m"
                                                    mdb__parse__V_71_71 = (MR_Word) &mdb__parse_scalar_common_3[9];
#line 522 "parse.m"
                                                    mdb__parse__V_72_72 = (MR_Word) &mdb__parse_scalar_common_3[10];
#line 8471 "mdb.parse.c"
                                                    mdb__parse__TypeCtorInfo_240_240 = (MR_Word) &mdb__parse__mdb__parse__type_ctor_info_setting_option_0;
#line 521 "parse.m"
                                                    mdb__parse__OptionOps_117 = (MR_Word) MR_mkword(MR_mktag(2), &mdb__parse_scalar_common_3[11]);
#line 523 "parse.m"
                                                    {
#line 523 "parse.m"
                                                      mercury__getopt__process_options_4_p_0(mdb__parse__TypeCtorInfo_240_240, mdb__parse__OptionOps_117, mdb__parse__ArgWords_116, &mdb__parse__RemainingWords_118, &mdb__parse__MaybeOptionTable_119);
                                                    }
#line 525 "parse.m"
                                                    {
#line 525 "parse.m"
                                                      mdb__parse__lexer_words_2_p_0(mdb__parse__RemainingWords_118, &mdb__parse__RemainingTokens_115);
                                                    }
#line 526 "parse.m"
                                                    {
#line 526 "parse.m"
                                                      mdb__parse__succeeded = mdb__parse__parse_format_2_p_0(mdb__parse__RemainingTokens_115, &mdb__parse__Setting_39);
                                                    }
#line 519 "parse.m"
                                                    if (mdb__parse__succeeded)
#line 519 "parse.m"
                                                      {
#line 527 "parse.m"
                                                        {
#line 527 "parse.m"
                                                          mdb__parse__FormatCmd_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "parse.m"
                                                          MR_hl_field(MR_mktag(1), mdb__parse__FormatCmd_36, 0) = ((MR_Box) (mdb__parse__MaybeOptionTable_119));
#line 527 "parse.m"
                                                          MR_hl_field(MR_mktag(1), mdb__parse__FormatCmd_36, 1) = ((MR_Box) (mdb__parse__Setting_39));
#line 527 "parse.m"
                                                        }
#line 527 "parse.m"
                                                        mdb__parse__succeeded = MR_TRUE;
#line 519 "parse.m"
                                                      }
#line 520 "parse.m"
                                                  }
#line 519 "parse.m"
                                              }
#line 528 "parse.m"
                                            if (mdb__parse__succeeded)
#line 528 "parse.m"
                                              {
#line 529 "parse.m"
                                                {
#line 529 "parse.m"
                                                  MR_Word base;
#line 529 "parse.m"
                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 529 "parse.m"
                                                  *mdb__parse__Command_8 = base;
#line 529 "parse.m"
                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 529 "parse.m"
                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__parse__FormatCmd_36));
#line 529 "parse.m"
                                                }
#line 529 "parse.m"
                                                mdb__parse__succeeded = MR_TRUE;
#line 528 "parse.m"
                                              }
#line 528 "parse.m"
                                          }
#line 530 "parse.m"
                                        else
#line 562 "parse.m"
                                          {
#line 562 "parse.m"
                                            MR_Word mdb__parse__ParamCmd_40;
#line 534 "parse.m"
                                            MR_String mdb__parse__V_261_261;
#line 534 "parse.m"
                                            MR_Integer mdb__parse__lo_4;
#line 534 "parse.m"
                                            MR_Integer mdb__parse__hi_5;
#line 534 "parse.m"
                                            MR_Integer mdb__parse__mid_6;
#line 534 "parse.m"
                                            MR_Integer mdb__parse__result_7;

#line 532 "parse.m"
                                            mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__CmdToken_5)) == (MR_mktag((MR_Integer) 2)));
#line 532 "parse.m"
                                            if (mdb__parse__succeeded)
#line 532 "parse.m"
                                              {
#line 532 "parse.m"
                                                mdb__parse__V_261_261 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__CmdToken_5, (MR_Integer) 0)));
#line 534 "parse.m"
                                                /* binary string simple lookup switch */
#line 534 "parse.m"
                                                mdb__parse__lo_4 = (MR_Integer) 0;
#line 534 "parse.m"
                                                mdb__parse__hi_5 = (MR_Integer) 3;
#line 534 "parse.m"
                                                do
#line 534 "parse.m"
                                                  {
#line 534 "parse.m"
                                                    mdb__parse__mid_6 = (((mdb__parse__lo_4 + mdb__parse__hi_5)) / (MR_Integer) 2);
#line 534 "parse.m"
                                                    mdb__parse__result_7 = MR_strcmp(mdb__parse__V_261_261, ((&mdb__parse_vector_common_6[0 + mdb__parse__mid_6]))->mdb__parse__vector_common_type_6_0__vct_6_f_0);
#line 534 "parse.m"
                                                    if ((mdb__parse__result_7 == (MR_Integer) 0))
#line 534 "parse.m"
                                                      {
#line 534 "parse.m"
                                                        mdb__parse__ParamCmd_40 = ((&mdb__parse_vector_common_6[0 + mdb__parse__mid_6]))->mdb__parse__vector_common_type_6_0__vct_6_f_1;
#line 534 "parse.m"
                                                        mdb__parse__succeeded = MR_TRUE;
#line 534 "parse.m"
                                                        /* jump out of search loop */
#line 534 "parse.m"
                                                        goto label_1;
#line 534 "parse.m"
                                                      }
#line 534 "parse.m"
                                                    else
#line 534 "parse.m"
                                                    if ((mdb__parse__result_7 < (MR_Integer) 0))
#line 534 "parse.m"
                                                      mdb__parse__hi_5 = (mdb__parse__mid_6 - (MR_Integer) 1);
#line 534 "parse.m"
                                                    else
#line 534 "parse.m"
                                                      mdb__parse__lo_4 = (mdb__parse__mid_6 + (MR_Integer) 1);
#line 534 "parse.m"
                                                  }
#line 534 "parse.m"
                                                while ((mdb__parse__lo_4 <= mdb__parse__hi_5));
#line 534 "parse.m"
                                                mdb__parse__succeeded = MR_FALSE;
#line 534 "parse.m"
                                              label_1:;
#line 532 "parse.m"
                                              }
#line 562 "parse.m"
                                            if (mdb__parse__succeeded)
#line 560 "parse.m"
                                              {
#line 560 "parse.m"
                                                MR_Word mdb__parse__FormatCmd_147;

#line 548 "parse.m"
                                                if ((mdb__parse__ArgTokens_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 546 "parse.m"
                                                  {
#line 546 "parse.m"
                                                    mdb__parse__FormatCmd_147 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 546 "parse.m"
                                                    mdb__parse__succeeded = MR_TRUE;
#line 546 "parse.m"
                                                  }
#line 548 "parse.m"
                                                else
#line 549 "parse.m"
                                                  {
#line 549 "parse.m"
                                                    MR_Word mdb__parse__TypeCtorInfo_247_247;
#line 549 "parse.m"
                                                    MR_Integer mdb__parse__N_43;
#line 549 "parse.m"
                                                    MR_Word mdb__parse__V_77_77;
#line 549 "parse.m"
                                                    MR_Word mdb__parse__V_78_78;
#line 549 "parse.m"
                                                    MR_Word mdb__parse__V_79_79;
#line 549 "parse.m"
                                                    MR_Word mdb__parse__V_80_80;
#line 549 "parse.m"
                                                    MR_Word mdb__parse__V_81_81;
#line 549 "parse.m"
                                                    MR_Word mdb__parse__RemainingTokens_130;
#line 549 "parse.m"
                                                    MR_Word mdb__parse__ArgWords_131;
#line 549 "parse.m"
                                                    MR_Word mdb__parse__OptionOps_132;
#line 549 "parse.m"
                                                    MR_Word mdb__parse__RemainingWords_133;
#line 549 "parse.m"
                                                    MR_Word mdb__parse__MaybeOptionTable_134;
#line 549 "parse.m"
                                                    MR_Word mdb__parse__Setting_135;

#line 550 "parse.m"
                                                    mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__MaybeArgWords_7)) == (MR_mktag((MR_Integer) 1)));
#line 550 "parse.m"
                                                    if (mdb__parse__succeeded)
#line 550 "parse.m"
                                                      {
#line 550 "parse.m"
                                                        mdb__parse__ArgWords_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__MaybeArgWords_7, (MR_Integer) 0)));
#line 551 "parse.m"
                                                        mdb__parse__V_77_77 = (MR_Word) &mdb__parse_scalar_common_3[12];
#line 552 "parse.m"
                                                        mdb__parse__V_78_78 = (MR_Word) &mdb__parse_scalar_common_3[13];
#line 553 "parse.m"
                                                        mdb__parse__V_79_79 = (MR_Word) &mdb__parse_scalar_common_3[14];
#line 8671 "mdb.parse.c"
                                                        mdb__parse__TypeCtorInfo_247_247 = (MR_Word) &mdb__parse__mdb__parse__type_ctor_info_setting_option_0;
#line 551 "parse.m"
                                                        mdb__parse__OptionOps_132 = (MR_Word) MR_mkword(MR_mktag(2), &mdb__parse_scalar_common_3[15]);
#line 554 "parse.m"
                                                        {
#line 554 "parse.m"
                                                          mercury__getopt__process_options_4_p_0(mdb__parse__TypeCtorInfo_247_247, mdb__parse__OptionOps_132, mdb__parse__ArgWords_131, &mdb__parse__RemainingWords_133, &mdb__parse__MaybeOptionTable_134);
                                                        }
#line 556 "parse.m"
                                                        {
#line 556 "parse.m"
                                                          mdb__parse__lexer_words_2_p_0(mdb__parse__RemainingWords_133, &mdb__parse__RemainingTokens_130);
                                                        }
#line 557 "parse.m"
                                                        mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__RemainingTokens_130)) == (MR_mktag((MR_Integer) 1)));
#line 557 "parse.m"
                                                        if (mdb__parse__succeeded)
#line 557 "parse.m"
                                                          {
#line 557 "parse.m"
                                                            mdb__parse__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__RemainingTokens_130, (MR_Integer) 0)));
#line 557 "parse.m"
                                                            mdb__parse__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__RemainingTokens_130, (MR_Integer) 1)));
#line 557 "parse.m"
                                                            mdb__parse__succeeded = (mdb__parse__V_81_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 549 "parse.m"
                                                            if (mdb__parse__succeeded)
#line 549 "parse.m"
                                                              {
#line 557 "parse.m"
                                                                mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__V_80_80)) == (MR_mktag((MR_Integer) 1)));
#line 557 "parse.m"
                                                                if (mdb__parse__succeeded)
#line 557 "parse.m"
                                                                  {
#line 557 "parse.m"
                                                                    mdb__parse__N_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__parse__V_80_80, (MR_Integer) 0)));
#line 558 "parse.m"
                                                                    {
#line 558 "parse.m"
                                                                      mdb__parse__param_cmd_to_setting_3_p_0(mdb__parse__ParamCmd_40, mdb__parse__N_43, &mdb__parse__Setting_135);
                                                                    }
#line 559 "parse.m"
                                                                    {
#line 559 "parse.m"
                                                                      mdb__parse__FormatCmd_147 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "parse.m"
                                                                      MR_hl_field(MR_mktag(2), mdb__parse__FormatCmd_147, 0) = ((MR_Box) (mdb__parse__MaybeOptionTable_134));
#line 559 "parse.m"
                                                                      MR_hl_field(MR_mktag(2), mdb__parse__FormatCmd_147, 1) = ((MR_Box) (mdb__parse__Setting_135));
#line 559 "parse.m"
                                                                    }
#line 559 "parse.m"
                                                                    mdb__parse__succeeded = MR_TRUE;
#line 557 "parse.m"
                                                                  }
#line 549 "parse.m"
                                                              }
#line 557 "parse.m"
                                                          }
#line 550 "parse.m"
                                                      }
#line 549 "parse.m"
                                                  }
#line 560 "parse.m"
                                                if (mdb__parse__succeeded)
#line 560 "parse.m"
                                                  {
#line 561 "parse.m"
                                                    {
#line 561 "parse.m"
                                                      MR_Word base;
#line 561 "parse.m"
                                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 561 "parse.m"
                                                      *mdb__parse__Command_8 = base;
#line 561 "parse.m"
                                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 561 "parse.m"
                                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__parse__FormatCmd_147));
#line 561 "parse.m"
                                                    }
#line 561 "parse.m"
                                                    mdb__parse__succeeded = MR_TRUE;
#line 560 "parse.m"
                                                  }
#line 560 "parse.m"
                                              }
#line 562 "parse.m"
                                            else
#line 571 "parse.m"
                                              {
#line 563 "parse.m"
                                                mdb__parse__succeeded = (mdb__parse__CmdToken_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 571 "parse.m"
                                                if (mdb__parse__succeeded)
#line 565 "parse.m"
                                                  {
#line 565 "parse.m"
                                                    MR_Word mdb__parse__TypeCtorInfo_254_254;
#line 565 "parse.m"
                                                    MR_Integer mdb__parse__Depth_44;
#line 565 "parse.m"
                                                    MR_Word mdb__parse__V_82_82;
#line 565 "parse.m"
                                                    MR_Word mdb__parse__V_83_83;
#line 565 "parse.m"
                                                    MR_Word mdb__parse__V_84_84;
#line 565 "parse.m"
                                                    MR_Word mdb__parse__V_85_85;
#line 565 "parse.m"
                                                    MR_Word mdb__parse__V_86_86;
#line 565 "parse.m"
                                                    MR_Word mdb__parse__V_87_87;
#line 565 "parse.m"
                                                    MR_Word mdb__parse__V_88_88;
#line 565 "parse.m"
                                                    MR_Word mdb__parse__OptionOps_149;
#line 565 "parse.m"
                                                    MR_Word mdb__parse__MaybeOptionTable_150;
#line 565 "parse.m"
                                                    MR_Word mdb__parse__FormatCmd_151;
#line 568 "parse.m"
                                                    MR_Word mdb__parse__V_45_45;

#line 565 "parse.m"
                                                    mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__ArgTokens_6)) == (MR_mktag((MR_Integer) 1)));
#line 565 "parse.m"
                                                    if (mdb__parse__succeeded)
#line 565 "parse.m"
                                                      {
#line 565 "parse.m"
                                                        mdb__parse__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__ArgTokens_6, (MR_Integer) 0)));
#line 565 "parse.m"
                                                        mdb__parse__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__ArgTokens_6, (MR_Integer) 1)));
#line 565 "parse.m"
                                                        mdb__parse__succeeded = (mdb__parse__V_83_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 565 "parse.m"
                                                        if (mdb__parse__succeeded)
#line 565 "parse.m"
                                                          {
#line 565 "parse.m"
                                                            mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__V_82_82)) == (MR_mktag((MR_Integer) 1)));
#line 565 "parse.m"
                                                            if (mdb__parse__succeeded)
#line 565 "parse.m"
                                                              {
#line 565 "parse.m"
                                                                mdb__parse__Depth_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__parse__V_82_82, (MR_Integer) 0)));
#line 566 "parse.m"
                                                                mdb__parse__V_84_84 = (MR_Word) &mdb__parse_scalar_common_3[16];
#line 567 "parse.m"
                                                                mdb__parse__V_85_85 = (MR_Word) &mdb__parse_scalar_common_3[17];
#line 567 "parse.m"
                                                                mdb__parse__V_86_86 = (MR_Word) &mdb__parse_scalar_common_3[18];
#line 568 "parse.m"
                                                                mdb__parse__V_87_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 8829 "mdb.parse.c"
                                                                mdb__parse__TypeCtorInfo_254_254 = (MR_Word) &mdb__parse__mdb__parse__type_ctor_info_setting_option_0;
#line 566 "parse.m"
                                                                mdb__parse__OptionOps_149 = (MR_Word) MR_mkword(MR_mktag(2), &mdb__parse_scalar_common_3[19]);
#line 568 "parse.m"
                                                                {
#line 568 "parse.m"
                                                                  mercury__getopt__process_options_4_p_0(mdb__parse__TypeCtorInfo_254_254, mdb__parse__OptionOps_149, mdb__parse__V_87_87, &mdb__parse__V_45_45, &mdb__parse__MaybeOptionTable_150);
                                                                }
#line 569 "parse.m"
                                                                {
#line 569 "parse.m"
                                                                  mdb__parse__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 569 "parse.m"
                                                                  MR_hl_field(MR_mktag(0), mdb__parse__V_88_88, 0) = ((MR_Box) (mdb__parse__Depth_44));
#line 569 "parse.m"
                                                                }
#line 569 "parse.m"
                                                                {
#line 569 "parse.m"
                                                                  mdb__parse__FormatCmd_151 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "parse.m"
                                                                  MR_hl_field(MR_mktag(2), mdb__parse__FormatCmd_151, 0) = ((MR_Box) (mdb__parse__MaybeOptionTable_150));
#line 569 "parse.m"
                                                                  MR_hl_field(MR_mktag(2), mdb__parse__FormatCmd_151, 1) = ((MR_Box) (mdb__parse__V_88_88));
#line 569 "parse.m"
                                                                }
#line 570 "parse.m"
                                                                {
#line 570 "parse.m"
                                                                  MR_Word base;
#line 570 "parse.m"
                                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 570 "parse.m"
                                                                  *mdb__parse__Command_8 = base;
#line 570 "parse.m"
                                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 570 "parse.m"
                                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__parse__FormatCmd_151));
#line 570 "parse.m"
                                                                }
#line 570 "parse.m"
                                                                mdb__parse__succeeded = MR_TRUE;
#line 565 "parse.m"
                                                              }
#line 565 "parse.m"
                                                          }
#line 565 "parse.m"
                                                      }
#line 565 "parse.m"
                                                  }
#line 571 "parse.m"
                                                else
#line 576 "parse.m"
                                                  {
#line 572 "parse.m"
                                                    MR_String mdb__parse__V_89_89;

#line 572 "parse.m"
                                                    mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__CmdToken_5)) == (MR_mktag((MR_Integer) 2)));
#line 572 "parse.m"
                                                    if (mdb__parse__succeeded)
#line 572 "parse.m"
                                                      {
#line 572 "parse.m"
                                                        mdb__parse__V_89_89 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__CmdToken_5, (MR_Integer) 0)));
#line 572 "parse.m"
                                                        mdb__parse__succeeded = (strcmp(mdb__parse__V_89_89, (MR_String) "num_io_actions") == 0);
#line 572 "parse.m"
                                                      }
#line 576 "parse.m"
                                                    if (mdb__parse__succeeded)
#line 574 "parse.m"
                                                      {
#line 574 "parse.m"
                                                        MR_Word mdb__parse__V_90_90;
#line 574 "parse.m"
                                                        MR_Word mdb__parse__V_91_91;
#line 574 "parse.m"
                                                        MR_Word mdb__parse__V_92_92;
#line 574 "parse.m"
                                                        MR_Integer mdb__parse__N_152;

#line 574 "parse.m"
                                                        mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__ArgTokens_6)) == (MR_mktag((MR_Integer) 1)));
#line 574 "parse.m"
                                                        if (mdb__parse__succeeded)
#line 574 "parse.m"
                                                          {
#line 574 "parse.m"
                                                            mdb__parse__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__ArgTokens_6, (MR_Integer) 0)));
#line 574 "parse.m"
                                                            mdb__parse__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__ArgTokens_6, (MR_Integer) 1)));
#line 574 "parse.m"
                                                            mdb__parse__succeeded = (mdb__parse__V_91_91 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 574 "parse.m"
                                                            if (mdb__parse__succeeded)
#line 574 "parse.m"
                                                              {
#line 574 "parse.m"
                                                                mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__V_90_90)) == (MR_mktag((MR_Integer) 1)));
#line 574 "parse.m"
                                                                if (mdb__parse__succeeded)
#line 574 "parse.m"
                                                                  {
#line 574 "parse.m"
                                                                    mdb__parse__N_152 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__parse__V_90_90, (MR_Integer) 0)));
#line 575 "parse.m"
                                                                    {
#line 575 "parse.m"
                                                                      mdb__parse__V_92_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 575 "parse.m"
                                                                      MR_hl_field(MR_mktag(3), mdb__parse__V_92_92, 0) = ((MR_Box) (mdb__parse__N_152));
#line 575 "parse.m"
                                                                    }
#line 575 "parse.m"
                                                                    {
#line 575 "parse.m"
                                                                      MR_Word base;
#line 575 "parse.m"
                                                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 575 "parse.m"
                                                                      *mdb__parse__Command_8 = base;
#line 575 "parse.m"
                                                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 575 "parse.m"
                                                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__parse__V_92_92));
#line 575 "parse.m"
                                                                    }
#line 575 "parse.m"
                                                                    mdb__parse__succeeded = MR_TRUE;
#line 574 "parse.m"
                                                                  }
#line 574 "parse.m"
                                                              }
#line 574 "parse.m"
                                                          }
#line 574 "parse.m"
                                                      }
#line 576 "parse.m"
                                                    else
#line 580 "parse.m"
                                                      {
#line 577 "parse.m"
                                                        MR_String mdb__parse__V_93_93;

#line 577 "parse.m"
                                                        mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__CmdToken_5)) == (MR_mktag((MR_Integer) 2)));
#line 577 "parse.m"
                                                        if (mdb__parse__succeeded)
#line 577 "parse.m"
                                                          {
#line 577 "parse.m"
                                                            mdb__parse__V_93_93 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__CmdToken_5, (MR_Integer) 0)));
#line 577 "parse.m"
                                                            mdb__parse__succeeded = (strcmp(mdb__parse__V_93_93, (MR_String) "params") == 0);
#line 577 "parse.m"
                                                          }
#line 580 "parse.m"
                                                        if (mdb__parse__succeeded)
#line 579 "parse.m"
                                                          {
#line 579 "parse.m"
                                                            *mdb__parse__Command_8 = (MR_Word) MR_mkword(MR_mktag(3), &mdb__parse_scalar_common_1[5]);
#line 579 "parse.m"
                                                            mdb__parse__succeeded = MR_TRUE;
#line 579 "parse.m"
                                                          }
#line 580 "parse.m"
                                                        else
#line 588 "parse.m"
                                                          {
#line 582 "parse.m"
                                                            if ((mdb__parse__CmdToken_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 583 "parse.m"
                                                              mdb__parse__succeeded = MR_TRUE;
#line 582 "parse.m"
                                                            else
#line 582 "parse.m"
                                                            if (((MR_tag((MR_Word) mdb__parse__CmdToken_5)) == (MR_mktag((MR_Integer) 2))))
#line 582 "parse.m"
                                                              {
#line 582 "parse.m"
                                                                MR_String mdb__parse__V_262_262 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__CmdToken_5, (MR_Integer) 0)));

#line 582 "parse.m"
                                                                if ((strcmp(mdb__parse__V_262_262, (MR_String) "h") == 0))
#line 582 "parse.m"
                                                                  mdb__parse__succeeded = MR_TRUE;
#line 582 "parse.m"
                                                                else
#line 582 "parse.m"
                                                                if ((strcmp(mdb__parse__V_262_262, (MR_String) "help") == 0))
#line 581 "parse.m"
                                                                  mdb__parse__succeeded = MR_TRUE;
#line 582 "parse.m"
                                                                else
#line 582 "parse.m"
                                                                  mdb__parse__succeeded = MR_FALSE;
#line 582 "parse.m"
                                                              }
#line 582 "parse.m"
                                                            else
#line 582 "parse.m"
                                                              mdb__parse__succeeded = MR_FALSE;
#line 588 "parse.m"
                                                            if (mdb__parse__succeeded)
#line 586 "parse.m"
                                                              {
#line 586 "parse.m"
                                                                mdb__parse__succeeded = (mdb__parse__ArgTokens_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 586 "parse.m"
                                                                if (mdb__parse__succeeded)
#line 586 "parse.m"
                                                                  {
#line 587 "parse.m"
                                                                    *mdb__parse__Command_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 587 "parse.m"
                                                                    mdb__parse__succeeded = MR_TRUE;
#line 586 "parse.m"
                                                                  }
#line 586 "parse.m"
                                                              }
#line 588 "parse.m"
                                                            else
#line 593 "parse.m"
                                                              {
#line 593 "parse.m"
                                                                MR_String mdb__parse__V_97_97;

#line 591 "parse.m"
                                                                mdb__parse__succeeded = (mdb__parse__ArgTokens_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 593 "parse.m"
                                                                if (mdb__parse__succeeded)
#line 593 "parse.m"
                                                                  {
#line 589 "parse.m"
                                                                    mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__CmdToken_5)) == (MR_mktag((MR_Integer) 2)));
#line 589 "parse.m"
                                                                    if (mdb__parse__succeeded)
#line 589 "parse.m"
                                                                      {
#line 589 "parse.m"
                                                                        mdb__parse__V_97_97 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__parse__CmdToken_5, (MR_Integer) 0)));
#line 589 "parse.m"
                                                                        mdb__parse__succeeded = (strcmp(mdb__parse__V_97_97, (MR_String) "quit") == 0);
#line 593 "parse.m"
                                                                        if (mdb__parse__succeeded)
#line 593 "parse.m"
                                                                          {
#line 592 "parse.m"
                                                                            *mdb__parse__Command_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 592 "parse.m"
                                                                            mdb__parse__succeeded = MR_TRUE;
#line 593 "parse.m"
                                                                          }
#line 589 "parse.m"
                                                                      }
#line 593 "parse.m"
                                                                  }
#line 593 "parse.m"
                                                              }
#line 588 "parse.m"
                                                          }
#line 580 "parse.m"
                                                      }
#line 576 "parse.m"
                                                  }
#line 571 "parse.m"
                                              }
#line 562 "parse.m"
                                          }
#line 530 "parse.m"
                                      }
#line 512 "parse.m"
                                  }
#line 501 "parse.m"
                              }
#line 459 "parse.m"
                          }
#line 454 "parse.m"
                      }
#line 441 "parse.m"
                  }
#line 433 "parse.m"
              }
#line 419 "parse.m"
          }
#line 412 "parse.m"
      }
#line 405 "parse.m"
    return mdb__parse__succeeded;
#line 405 "parse.m"
  }
#line 368 "parse.m"
}

#line 334 "parse.m"
static MR_bool MR_CALL 
mdb__parse__lexer_name_3_p_0_1(
#line 334 "parse.m"
  MR_Box mdb__parse__closure_arg,
#line 334 "parse.m"
  MR_Box mdb__parse__wrapper_arg_1)
#line 334 "parse.m"
{
#line 334 "parse.m"
  {
#line 334 "parse.m"
    MR_bool mdb__parse__succeeded;
#line 334 "parse.m"
    MR_Box mdb__parse__closure = mdb__parse__closure_arg;

#line 334 "parse.m"
    {
#line 334 "parse.m"
      mdb__parse__succeeded = mercury__char__is_alnum_or_underscore_1_p_0(((MR_Char) (MR_Word) mdb__parse__wrapper_arg_1));
    }
#line 334 "parse.m"
    return mdb__parse__succeeded;
#line 334 "parse.m"
  }
#line 334 "parse.m"
}

#line 331 "parse.m"
static void MR_CALL 
mdb__parse__lexer_name_3_p_0(
#line 331 "parse.m"
  MR_Char mdb__parse__C_4,
#line 331 "parse.m"
  MR_Word mdb__parse__Cs_5,
#line 331 "parse.m"
  MR_Word * mdb__parse__Toks_6)
#line 331 "parse.m"
{
#line 333 "parse.m"
  {
#line 333 "parse.m"
    MR_bool mdb__parse__succeeded;
#line 333 "parse.m"
    MR_Word mdb__parse__Letters_7;
#line 333 "parse.m"
    MR_Word mdb__parse__Rest_8;
#line 333 "parse.m"
    MR_String mdb__parse__Name_9;
#line 333 "parse.m"
    MR_Word mdb__parse__Toks2_10;
#line 333 "parse.m"
    MR_Word mdb__parse__V_12_12;
#line 333 "parse.m"
    MR_Word mdb__parse__V_13_13;

#line 334 "parse.m"
    {
#line 334 "parse.m"
      mercury__list__takewhile_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &mdb__parse_scalar_common_3[3], mdb__parse__Cs_5, &mdb__parse__Letters_7, &mdb__parse__Rest_8);
    }
#line 335 "parse.m"
    {
#line 335 "parse.m"
      mdb__parse__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "parse.m"
      MR_hl_field(MR_mktag(1), mdb__parse__V_12_12, 0) = ((MR_Box) (MR_Word) (mdb__parse__C_4));
#line 335 "parse.m"
      MR_hl_field(MR_mktag(1), mdb__parse__V_12_12, 1) = ((MR_Box) (mdb__parse__Letters_7));
#line 335 "parse.m"
    }
#line 335 "parse.m"
    {
#line 335 "parse.m"
      mercury__string__from_char_list_2_p_0(mdb__parse__V_12_12, &mdb__parse__Name_9);
    }
#line 336 "parse.m"
    {
#line 336 "parse.m"
      mdb__parse__lexer_word_chars_2_p_0(mdb__parse__Rest_8, &mdb__parse__Toks2_10);
    }
#line 337 "parse.m"
    {
#line 337 "parse.m"
      mdb__parse__V_13_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 337 "parse.m"
      MR_hl_field(MR_mktag(2), mdb__parse__V_13_13, 0) = ((MR_Box) (mdb__parse__Name_9));
#line 337 "parse.m"
    }
#line 337 "parse.m"
    {
#line 337 "parse.m"
      MR_Word base;
#line 337 "parse.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "parse.m"
      *mdb__parse__Toks_6 = base;
#line 337 "parse.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__parse__V_13_13));
#line 337 "parse.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__parse__Toks2_10));
#line 337 "parse.m"
    }
#line 333 "parse.m"
  }
#line 331 "parse.m"
}

#line 323 "parse.m"
static void MR_CALL 
mdb__parse__digits_to_int_acc_3_p_0(
#line 323 "parse.m"
  MR_Integer mdb__parse__Acc_1,
#line 323 "parse.m"
  MR_Word mdb__parse__HeadVar__2_2,
#line 323 "parse.m"
  MR_Integer * mdb__parse__HeadVar__3_3)
#line 323 "parse.m"
{
#line 325 "parse.m"
  while (MR_TRUE)
#line 325 "parse.m"
    {
#line 325 "parse.m"
      /* tailcall optimized into a loop */
#line 325 "parse.m"
      {
#line 325 "parse.m"
        MR_bool mdb__parse__succeeded;

#line 325 "parse.m"
        if ((mdb__parse__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 325 "parse.m"
          *mdb__parse__HeadVar__3_3 = mdb__parse__Acc_1;
#line 325 "parse.m"
        else
#line 326 "parse.m"
          {
#line 326 "parse.m"
            MR_Char mdb__parse__C_6 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__2_2, (MR_Integer) 0)));
#line 326 "parse.m"
            MR_Word mdb__parse__Cs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__2_2, (MR_Integer) 1)));
#line 326 "parse.m"
            MR_Integer mdb__parse__D_9;
#line 326 "parse.m"
            MR_Integer mdb__parse__Acc2_10;
#line 326 "parse.m"
            MR_Integer mdb__parse__V_11_11;
#line 326 "parse.m"
            MR_Integer mdb__parse__Zero_15;
#line 326 "parse.m"
            MR_Integer mdb__parse__CN_16;

#line 301 "parse.m"
            {
#line 301 "parse.m"
              mercury__char__to_int_2_p_0((MR_Char) 48, &mdb__parse__Zero_15);
            }
#line 302 "parse.m"
            {
#line 302 "parse.m"
              mercury__char__to_int_2_p_0(mdb__parse__C_6, &mdb__parse__CN_16);
            }
#line 303 "parse.m"
            mdb__parse__D_9 = (mdb__parse__CN_16 - mdb__parse__Zero_15);
#line 328 "parse.m"
            mdb__parse__V_11_11 = ((MR_Integer) 10 * mdb__parse__Acc_1);
#line 328 "parse.m"
            mdb__parse__Acc2_10 = (mdb__parse__V_11_11 + mdb__parse__D_9);
#line 329 "parse.m"
            /* direct tailcall eliminated */
#line 329 "parse.m"
            {
#line 329 "parse.m"
              MR_Integer mdb__parse__Acc__tmp_copy_1 = mdb__parse__Acc2_10;
#line 329 "parse.m"
              MR_Word mdb__parse__HeadVar__2__tmp_copy_2 = mdb__parse__Cs_7;

#line 329 "parse.m"
              mdb__parse__HeadVar__2_2 = mdb__parse__HeadVar__2__tmp_copy_2;
#line 329 "parse.m"
              mdb__parse__Acc_1 = mdb__parse__Acc__tmp_copy_1;
#line 329 "parse.m"
            }
#line 329 "parse.m"
            continue;
#line 326 "parse.m"
          }
#line 325 "parse.m"
      }
#line 325 "parse.m"
      break;
#line 325 "parse.m"
    }
#line 323 "parse.m"
}

#line 318 "parse.m"
static MR_bool MR_CALL 
mdb__parse__lexer_num_3_p_0_1(
#line 318 "parse.m"
  MR_Box mdb__parse__closure_arg,
#line 318 "parse.m"
  MR_Box mdb__parse__wrapper_arg_1)
#line 318 "parse.m"
{
#line 318 "parse.m"
  {
#line 318 "parse.m"
    MR_bool mdb__parse__succeeded;
#line 318 "parse.m"
    MR_Box mdb__parse__closure = mdb__parse__closure_arg;

#line 318 "parse.m"
    {
#line 318 "parse.m"
      mdb__parse__succeeded = mercury__char__is_digit_1_p_0(((MR_Char) (MR_Word) mdb__parse__wrapper_arg_1));
    }
#line 318 "parse.m"
    return mdb__parse__succeeded;
#line 318 "parse.m"
  }
#line 318 "parse.m"
}

#line 315 "parse.m"
static void MR_CALL 
mdb__parse__lexer_num_3_p_0(
#line 315 "parse.m"
  MR_Integer mdb__parse__N_4,
#line 315 "parse.m"
  MR_Word mdb__parse__Cs_5,
#line 315 "parse.m"
  MR_Word * mdb__parse__Toks_6)
#line 315 "parse.m"
{
#line 317 "parse.m"
  {
#line 317 "parse.m"
    MR_bool mdb__parse__succeeded;
#line 317 "parse.m"
    MR_Word mdb__parse__Digits_7;
#line 317 "parse.m"
    MR_Word mdb__parse__Rest_8;
#line 317 "parse.m"
    MR_Integer mdb__parse__Num_9;
#line 317 "parse.m"
    MR_Word mdb__parse__Toks2_10;
#line 317 "parse.m"
    MR_Word mdb__parse__V_12_12;

#line 318 "parse.m"
    {
#line 318 "parse.m"
      mercury__list__takewhile_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &mdb__parse_scalar_common_3[2], mdb__parse__Cs_5, &mdb__parse__Digits_7, &mdb__parse__Rest_8);
    }
#line 319 "parse.m"
    {
#line 319 "parse.m"
      mdb__parse__digits_to_int_acc_3_p_0(mdb__parse__N_4, mdb__parse__Digits_7, &mdb__parse__Num_9);
    }
#line 320 "parse.m"
    {
#line 320 "parse.m"
      mdb__parse__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 320 "parse.m"
      MR_hl_field(MR_mktag(1), mdb__parse__V_12_12, 0) = ((MR_Box) (mdb__parse__Num_9));
#line 320 "parse.m"
    }
#line 321 "parse.m"
    {
#line 321 "parse.m"
      mdb__parse__lexer_word_chars_2_p_0(mdb__parse__Rest_8, &mdb__parse__Toks2_10);
    }
#line 320 "parse.m"
    {
#line 320 "parse.m"
      MR_Word base;
#line 320 "parse.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "parse.m"
      *mdb__parse__Toks_6 = base;
#line 320 "parse.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__parse__V_12_12));
#line 320 "parse.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__parse__Toks2_10));
#line 320 "parse.m"
    }
#line 317 "parse.m"
  }
#line 315 "parse.m"
}

#line 286 "parse.m"
static void MR_CALL 
mdb__parse__lexer_dots_2_p_0(
#line 286 "parse.m"
  MR_Word mdb__parse__HeadVar__1_1,
#line 286 "parse.m"
  MR_Word * mdb__parse__HeadVar__2_2)
#line 286 "parse.m"
{
#line 288 "parse.m"
  {
#line 288 "parse.m"
    MR_bool mdb__parse__succeeded;

#line 288 "parse.m"
    if ((mdb__parse__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 288 "parse.m"
      *mdb__parse__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 288 "parse.m"
    else
#line 289 "parse.m"
      {
#line 289 "parse.m"
        MR_Char mdb__parse__C_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__1_1, (MR_Integer) 0)));
#line 289 "parse.m"
        MR_Word mdb__parse__Cs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__1_1, (MR_Integer) 1)));

#line 290 "parse.m"
        mdb__parse__succeeded = (mdb__parse__C_3 == (MR_Char) 46);
#line 293 "parse.m"
        if (mdb__parse__succeeded)
#line 291 "parse.m"
          {
#line 291 "parse.m"
            MR_Word mdb__parse__Toks2_6;

#line 291 "parse.m"
            {
#line 291 "parse.m"
              mdb__parse__lexer_word_chars_2_p_0(mdb__parse__Cs_4, &mdb__parse__Toks2_6);
            }
#line 292 "parse.m"
            {
#line 292 "parse.m"
              MR_Word base;
#line 292 "parse.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 292 "parse.m"
              *mdb__parse__HeadVar__2_2 = base;
#line 292 "parse.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 292 "parse.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__parse__Toks2_6));
#line 292 "parse.m"
            }
#line 291 "parse.m"
          }
#line 293 "parse.m"
        else
#line 294 "parse.m"
          {
#line 294 "parse.m"
            MR_Word mdb__parse__Toks2_10;

#line 294 "parse.m"
            {
#line 294 "parse.m"
              mdb__parse__lexer_word_chars_2_p_0(mdb__parse__HeadVar__1_1, &mdb__parse__Toks2_10);
            }
#line 295 "parse.m"
            {
#line 295 "parse.m"
              MR_Word base;
#line 295 "parse.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "parse.m"
              *mdb__parse__HeadVar__2_2 = base;
#line 295 "parse.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 295 "parse.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__parse__Toks2_10));
#line 295 "parse.m"
            }
#line 294 "parse.m"
          }
#line 289 "parse.m"
      }
#line 288 "parse.m"
  }
#line 286 "parse.m"
}

#line 254 "parse.m"
static void MR_CALL 
mdb__parse__lexer_word_chars_2_p_0(
#line 254 "parse.m"
  MR_Word mdb__parse__HeadVar__1_1,
#line 254 "parse.m"
  MR_Word * mdb__parse__HeadVar__2_2)
#line 254 "parse.m"
{
#line 256 "parse.m"
  while (MR_TRUE)
#line 256 "parse.m"
    {
#line 256 "parse.m"
      /* tailcall optimized into a loop */
#line 256 "parse.m"
      {
#line 256 "parse.m"
        MR_bool mdb__parse__succeeded;

#line 256 "parse.m"
        if ((mdb__parse__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 256 "parse.m"
          *mdb__parse__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 256 "parse.m"
        else
#line 257 "parse.m"
          {
#line 257 "parse.m"
            MR_Char mdb__parse__C_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__1_1, (MR_Integer) 0)));
#line 257 "parse.m"
            MR_Word mdb__parse__Cs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__1_1, (MR_Integer) 1)));

#line 258 "parse.m"
            mdb__parse__succeeded = (mdb__parse__C_3 == (MR_Char) 46);
#line 260 "parse.m"
            if (mdb__parse__succeeded)
#line 259 "parse.m"
              {
#line 259 "parse.m"
                mdb__parse__lexer_dots_2_p_0(mdb__parse__Cs_4, mdb__parse__HeadVar__2_2);
              }
#line 260 "parse.m"
            else
#line 263 "parse.m"
              {
#line 260 "parse.m"
                mdb__parse__succeeded = (mdb__parse__C_3 == (MR_Char) 47);
#line 263 "parse.m"
                if (mdb__parse__succeeded)
#line 261 "parse.m"
                  {
#line 261 "parse.m"
                    MR_Word mdb__parse__Toks2_6;

#line 262 "parse.m"
                    {
#line 262 "parse.m"
                      mdb__parse__lexer_word_chars_2_p_0(mdb__parse__Cs_4, &mdb__parse__Toks2_6);
                    }
#line 261 "parse.m"
                    {
#line 261 "parse.m"
                      MR_Word base;
#line 261 "parse.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "parse.m"
                      *mdb__parse__HeadVar__2_2 = base;
#line 261 "parse.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 261 "parse.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__parse__Toks2_6));
#line 261 "parse.m"
                    }
#line 261 "parse.m"
                  }
#line 263 "parse.m"
                else
#line 266 "parse.m"
                  {
#line 263 "parse.m"
                    mdb__parse__succeeded = (mdb__parse__C_3 == (MR_Char) 63);
#line 266 "parse.m"
                    if (mdb__parse__succeeded)
#line 264 "parse.m"
                      {
#line 264 "parse.m"
                        MR_Word mdb__parse__Toks2_16;

#line 265 "parse.m"
                        {
#line 265 "parse.m"
                          mdb__parse__lexer_word_chars_2_p_0(mdb__parse__Cs_4, &mdb__parse__Toks2_16);
                        }
#line 264 "parse.m"
                        {
#line 264 "parse.m"
                          MR_Word base;
#line 264 "parse.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "parse.m"
                          *mdb__parse__HeadVar__2_2 = base;
#line 264 "parse.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 264 "parse.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__parse__Toks2_16));
#line 264 "parse.m"
                        }
#line 264 "parse.m"
                      }
#line 266 "parse.m"
                    else
#line 269 "parse.m"
                      {
#line 266 "parse.m"
                        mdb__parse__succeeded = (mdb__parse__C_3 == (MR_Char) 94);
#line 269 "parse.m"
                        if (mdb__parse__succeeded)
#line 267 "parse.m"
                          {
#line 267 "parse.m"
                            MR_Word mdb__parse__Toks2_17;

#line 268 "parse.m"
                            {
#line 268 "parse.m"
                              mdb__parse__lexer_word_chars_2_p_0(mdb__parse__Cs_4, &mdb__parse__Toks2_17);
                            }
#line 267 "parse.m"
                            {
#line 267 "parse.m"
                              MR_Word base;
#line 267 "parse.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "parse.m"
                              *mdb__parse__HeadVar__2_2 = base;
#line 267 "parse.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 267 "parse.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__parse__Toks2_17));
#line 267 "parse.m"
                            }
#line 267 "parse.m"
                          }
#line 269 "parse.m"
                        else
#line 272 "parse.m"
                          {
#line 269 "parse.m"
                            mdb__parse__succeeded = (mdb__parse__C_3 == (MR_Char) 60);
#line 272 "parse.m"
                            if (mdb__parse__succeeded)
#line 270 "parse.m"
                              {
#line 270 "parse.m"
                                MR_Word mdb__parse__Toks2_18;

#line 271 "parse.m"
                                {
#line 271 "parse.m"
                                  mdb__parse__lexer_word_chars_2_p_0(mdb__parse__Cs_4, &mdb__parse__Toks2_18);
                                }
#line 270 "parse.m"
                                {
#line 270 "parse.m"
                                  MR_Word base;
#line 270 "parse.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "parse.m"
                                  *mdb__parse__HeadVar__2_2 = base;
#line 270 "parse.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 270 "parse.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__parse__Toks2_18));
#line 270 "parse.m"
                                }
#line 270 "parse.m"
                              }
#line 272 "parse.m"
                            else
#line 274 "parse.m"
                              {
#line 274 "parse.m"
                                MR_Char mdb__parse__H_7;
#line 274 "parse.m"
                                MR_Word mdb__parse__T_8;

#line 272 "parse.m"
                                mdb__parse__succeeded = (mdb__parse__C_3 == (MR_Char) 45);
#line 272 "parse.m"
                                if (mdb__parse__succeeded)
#line 272 "parse.m"
                                  {
#line 272 "parse.m"
                                    mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__Cs_4)) == (MR_mktag((MR_Integer) 1)));
#line 272 "parse.m"
                                    if (mdb__parse__succeeded)
#line 272 "parse.m"
                                      {
#line 272 "parse.m"
                                        mdb__parse__H_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__Cs_4, (MR_Integer) 0)));
#line 272 "parse.m"
                                        mdb__parse__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__Cs_4, (MR_Integer) 1)));
#line 272 "parse.m"
                                      }
#line 272 "parse.m"
                                  }
#line 274 "parse.m"
                                if (mdb__parse__succeeded)
#line 307 "parse.m"
                                  {
#line 307 "parse.m"
                                    MR_String mdb__parse__ArgName_30;
#line 307 "parse.m"
                                    MR_Word mdb__parse__V_32_32;

#line 308 "parse.m"
                                    mdb__parse__succeeded = (mdb__parse__H_7 == (MR_Char) 45);
#line 310 "parse.m"
                                    if (mdb__parse__succeeded)
#line 309 "parse.m"
                                      {
#line 309 "parse.m"
                                        mercury__string__from_char_list_2_p_0(mdb__parse__T_8, &mdb__parse__ArgName_30);
                                      }
#line 310 "parse.m"
                                    else
#line 311 "parse.m"
                                      {
#line 311 "parse.m"
                                        mercury__string__from_char_list_2_p_0(mdb__parse__Cs_4, &mdb__parse__ArgName_30);
                                      }
#line 313 "parse.m"
                                    {
#line 313 "parse.m"
                                      mdb__parse__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "parse.m"
                                      MR_hl_field(MR_mktag(3), mdb__parse__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 313 "parse.m"
                                      MR_hl_field(MR_mktag(3), mdb__parse__V_32_32, 1) = ((MR_Box) (mdb__parse__ArgName_30));
#line 313 "parse.m"
                                    }
#line 313 "parse.m"
                                    {
#line 313 "parse.m"
                                      MR_Word base;
#line 313 "parse.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "parse.m"
                                      *mdb__parse__HeadVar__2_2 = base;
#line 313 "parse.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__parse__V_32_32));
#line 313 "parse.m"
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 313 "parse.m"
                                    }
#line 307 "parse.m"
                                  }
#line 274 "parse.m"
                                else
#line 277 "parse.m"
                                  {
#line 274 "parse.m"
                                    {
#line 274 "parse.m"
                                      mdb__parse__succeeded = mercury__char__is_digit_1_p_0(mdb__parse__C_3);
                                    }
#line 277 "parse.m"
                                    if (mdb__parse__succeeded)
#line 275 "parse.m"
                                      {
#line 275 "parse.m"
                                        MR_Integer mdb__parse__N_9;
#line 275 "parse.m"
                                        MR_Integer mdb__parse__Zero_36;
#line 275 "parse.m"
                                        MR_Integer mdb__parse__CN_37;

#line 301 "parse.m"
                                        {
#line 301 "parse.m"
                                          mercury__char__to_int_2_p_0((MR_Char) 48, &mdb__parse__Zero_36);
                                        }
#line 302 "parse.m"
                                        {
#line 302 "parse.m"
                                          mercury__char__to_int_2_p_0(mdb__parse__C_3, &mdb__parse__CN_37);
                                        }
#line 303 "parse.m"
                                        mdb__parse__N_9 = (mdb__parse__CN_37 - mdb__parse__Zero_36);
#line 276 "parse.m"
                                        {
#line 276 "parse.m"
                                          mdb__parse__lexer_num_3_p_0(mdb__parse__N_9, mdb__parse__Cs_4, mdb__parse__HeadVar__2_2);
                                        }
#line 275 "parse.m"
                                      }
#line 277 "parse.m"
                                    else
#line 279 "parse.m"
                                      {
#line 277 "parse.m"
                                        {
#line 277 "parse.m"
                                          mdb__parse__succeeded = mercury__char__is_alpha_or_underscore_1_p_0(mdb__parse__C_3);
                                        }
#line 279 "parse.m"
                                        if (mdb__parse__succeeded)
#line 278 "parse.m"
                                          {
#line 278 "parse.m"
                                            mdb__parse__lexer_name_3_p_0(mdb__parse__C_3, mdb__parse__Cs_4, mdb__parse__HeadVar__2_2);
                                          }
#line 279 "parse.m"
                                        else
#line 281 "parse.m"
                                          {
#line 279 "parse.m"
                                            {
#line 279 "parse.m"
                                              mdb__parse__succeeded = mercury__char__is_whitespace_1_p_0(mdb__parse__C_3);
                                            }
#line 281 "parse.m"
                                            if (mdb__parse__succeeded)
#line 280 "parse.m"
                                              {
#line 280 "parse.m"
                                                /* direct tailcall eliminated */
#line 280 "parse.m"
                                                {
#line 280 "parse.m"
                                                  MR_Word mdb__parse__HeadVar__1__tmp_copy_1 = mdb__parse__Cs_4;

#line 280 "parse.m"
                                                  mdb__parse__HeadVar__1_1 = mdb__parse__HeadVar__1__tmp_copy_1;
#line 280 "parse.m"
                                                }
#line 280 "parse.m"
                                                continue;
#line 280 "parse.m"
                                              }
#line 281 "parse.m"
                                            else
#line 282 "parse.m"
                                              {
#line 282 "parse.m"
                                                MR_Word mdb__parse__V_15_15;
#line 282 "parse.m"
                                                MR_Word mdb__parse__Toks2_19;

#line 282 "parse.m"
                                                {
#line 282 "parse.m"
                                                  mdb__parse__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "parse.m"
                                                  MR_hl_field(MR_mktag(3), mdb__parse__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 282 "parse.m"
                                                  MR_hl_field(MR_mktag(3), mdb__parse__V_15_15, 1) = ((MR_Box) (MR_Word) (mdb__parse__C_3));
#line 282 "parse.m"
                                                }
#line 283 "parse.m"
                                                {
#line 283 "parse.m"
                                                  mdb__parse__lexer_word_chars_2_p_0(mdb__parse__Cs_4, &mdb__parse__Toks2_19);
                                                }
#line 282 "parse.m"
                                                {
#line 282 "parse.m"
                                                  MR_Word base;
#line 282 "parse.m"
                                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "parse.m"
                                                  *mdb__parse__HeadVar__2_2 = base;
#line 282 "parse.m"
                                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__parse__V_15_15));
#line 282 "parse.m"
                                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__parse__Toks2_19));
#line 282 "parse.m"
                                                }
#line 282 "parse.m"
                                              }
#line 281 "parse.m"
                                          }
#line 279 "parse.m"
                                      }
#line 277 "parse.m"
                                  }
#line 274 "parse.m"
                              }
#line 272 "parse.m"
                          }
#line 269 "parse.m"
                      }
#line 266 "parse.m"
                  }
#line 263 "parse.m"
              }
#line 257 "parse.m"
          }
#line 256 "parse.m"
      }
#line 256 "parse.m"
      break;
#line 256 "parse.m"
    }
#line 254 "parse.m"
}

#line 240 "parse.m"
static void MR_CALL 
mdb__parse__lexer_words_2_p_0(
#line 240 "parse.m"
  MR_Word mdb__parse__HeadVar__1_1,
#line 240 "parse.m"
  MR_Word * mdb__parse__HeadVar__2_2)
#line 240 "parse.m"
{
#line 242 "parse.m"
  {
#line 242 "parse.m"
    MR_bool mdb__parse__succeeded;

#line 242 "parse.m"
    if ((mdb__parse__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 242 "parse.m"
      *mdb__parse__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 242 "parse.m"
    else
#line 243 "parse.m"
      {
#line 243 "parse.m"
        MR_String mdb__parse__Word_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__1_1, (MR_Integer) 0)));
#line 243 "parse.m"
        MR_Word mdb__parse__Words_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__HeadVar__1_1, (MR_Integer) 1)));
#line 243 "parse.m"
        MR_Word mdb__parse__WordTokens_6;
#line 243 "parse.m"
        MR_Word mdb__parse__WordsTokens_7;
#line 243 "parse.m"
        MR_Word mdb__parse__Chars_11;

#line 251 "parse.m"
        {
#line 251 "parse.m"
          mercury__string__to_char_list_2_p_0(mdb__parse__Word_3, &mdb__parse__Chars_11);
        }
#line 252 "parse.m"
        {
#line 252 "parse.m"
          mdb__parse__lexer_word_chars_2_p_0(mdb__parse__Chars_11, &mdb__parse__WordTokens_6);
        }
#line 245 "parse.m"
        {
#line 245 "parse.m"
          mdb__parse__lexer_words_2_p_0(mdb__parse__Words_4, &mdb__parse__WordsTokens_7);
        }
#line 246 "parse.m"
        {
#line 246 "parse.m"
          mercury__list__append_3_p_1((MR_Word) &mdb__parse__mdb__parse__type_ctor_info_token_0, mdb__parse__WordTokens_6, mdb__parse__WordsTokens_7, mdb__parse__HeadVar__2_2);
        }
#line 243 "parse.m"
      }
#line 242 "parse.m"
  }
#line 240 "parse.m"
}

#line 187 "parse.m"
MR_bool MR_CALL 
mdb__parse__parse_2_p_0(
#line 187 "parse.m"
  MR_Word mdb__parse__Words_3,
#line 187 "parse.m"
  MR_Word * mdb__parse__Command_4)
#line 187 "parse.m"
{
#line 343 "parse.m"
  {
#line 343 "parse.m"
    MR_bool mdb__parse__succeeded;

#line 343 "parse.m"
    if ((mdb__parse__Words_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 344 "parse.m"
      {
#line 344 "parse.m"
        *mdb__parse__Command_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 344 "parse.m"
        mdb__parse__succeeded = MR_TRUE;
#line 344 "parse.m"
      }
#line 343 "parse.m"
    else
#line 346 "parse.m"
      {
#line 346 "parse.m"
        MR_String mdb__parse__CmdWord_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__parse__Words_3, (MR_Integer) 0)));
#line 346 "parse.m"
        MR_Word mdb__parse__ArgWords_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__Words_3, (MR_Integer) 1)));
#line 346 "parse.m"
        MR_Word mdb__parse__CmdTokens_7;
#line 346 "parse.m"
        MR_Word mdb__parse__ArgTokens_8;
#line 346 "parse.m"
        MR_Word mdb__parse__MaybeArgWords_10;
#line 346 "parse.m"
        MR_Word mdb__parse__AllTokens_11;
#line 346 "parse.m"
        MR_Word mdb__parse__Chars_18;
#line 349 "parse.m"
        MR_Word mdb__parse__V_14_14;
#line 349 "parse.m"
        MR_Word mdb__parse__V_9_9;

#line 251 "parse.m"
        {
#line 251 "parse.m"
          mercury__string__to_char_list_2_p_0(mdb__parse__CmdWord_5, &mdb__parse__Chars_18);
        }
#line 252 "parse.m"
        {
#line 252 "parse.m"
          mdb__parse__lexer_word_chars_2_p_0(mdb__parse__Chars_18, &mdb__parse__CmdTokens_7);
        }
#line 348 "parse.m"
        {
#line 348 "parse.m"
          mdb__parse__lexer_words_2_p_0(mdb__parse__ArgWords_6, &mdb__parse__ArgTokens_8);
        }
#line 349 "parse.m"
        mdb__parse__succeeded = ((MR_tag((MR_Word) mdb__parse__CmdTokens_7)) == (MR_mktag((MR_Integer) 1)));
#line 349 "parse.m"
        if (mdb__parse__succeeded)
#line 349 "parse.m"
          {
#line 349 "parse.m"
            mdb__parse__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__CmdTokens_7, (MR_Integer) 0)));
#line 349 "parse.m"
            mdb__parse__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__CmdTokens_7, (MR_Integer) 1)));
#line 349 "parse.m"
            mdb__parse__succeeded = (mdb__parse__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 349 "parse.m"
          }
#line 353 "parse.m"
        if (mdb__parse__succeeded)
#line 352 "parse.m"
          {
#line 352 "parse.m"
            mdb__parse__MaybeArgWords_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 352 "parse.m"
            MR_hl_field(MR_mktag(1), mdb__parse__MaybeArgWords_10, 0) = ((MR_Box) (mdb__parse__ArgWords_6));
#line 352 "parse.m"
          }
#line 353 "parse.m"
        else
#line 356 "parse.m"
          mdb__parse__MaybeArgWords_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "parse.m"
        {
#line 358 "parse.m"
          mercury__list__append_3_p_1((MR_Word) &mdb__parse__mdb__parse__type_ctor_info_token_0, mdb__parse__CmdTokens_7, mdb__parse__ArgTokens_8, &mdb__parse__AllTokens_11);
        }
#line 362 "parse.m"
        if ((mdb__parse__AllTokens_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 361 "parse.m"
          {
#line 361 "parse.m"
            *mdb__parse__Command_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 361 "parse.m"
            mdb__parse__succeeded = MR_TRUE;
#line 361 "parse.m"
          }
#line 362 "parse.m"
        else
#line 363 "parse.m"
          {
#line 363 "parse.m"
            MR_Word mdb__parse__FirstToken_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__AllTokens_11, (MR_Integer) 0)));
#line 363 "parse.m"
            MR_Word mdb__parse__LaterTokens_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__AllTokens_11, (MR_Integer) 1)));

#line 364 "parse.m"
            {
#line 364 "parse.m"
              mdb__parse__succeeded = mdb__parse__parse_cmd_4_p_0(mdb__parse__FirstToken_12, mdb__parse__LaterTokens_13, mdb__parse__MaybeArgWords_10, mdb__parse__Command_4);
            }
#line 363 "parse.m"
          }
#line 346 "parse.m"
      }
#line 343 "parse.m"
    return mdb__parse__succeeded;
#line 343 "parse.m"
  }
#line 187 "parse.m"
}

#line 226 "parse.m"
static MR_bool MR_CALL 
mdb__parse__read_command_external_3_p_0_1(
#line 226 "parse.m"
  MR_Box mdb__parse__closure_arg,
#line 226 "parse.m"
  MR_Box mdb__parse__wrapper_arg_1)
#line 226 "parse.m"
{
#line 226 "parse.m"
  {
#line 226 "parse.m"
    MR_bool mdb__parse__succeeded;
#line 226 "parse.m"
    MR_Box mdb__parse__closure = mdb__parse__closure_arg;

#line 226 "parse.m"
    {
#line 226 "parse.m"
      mdb__parse__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) mdb__parse__wrapper_arg_1));
    }
#line 226 "parse.m"
    return mdb__parse__succeeded;
#line 226 "parse.m"
  }
#line 226 "parse.m"
}

#line 181 "parse.m"
void MR_CALL 
mdb__parse__read_command_external_3_p_0(
#line 181 "parse.m"
  MR_Word * mdb__parse__Command_4)
#line 181 "parse.m"
{
#line 222 "parse.m"
  {
#line 222 "parse.m"
    MR_bool mdb__parse__succeeded;
#line 222 "parse.m"
    MR_Word mdb__parse__Result_6;

#line 223 "parse.m"
    {
#line 223 "parse.m"
      mercury__io__read_3_p_0((MR_Word) &mdb__parse__mdb__parse__type_ctor_info_external_request_0, &mdb__parse__Result_6);
    }
#line 232 "parse.m"
#line 232 "parse.m"
    switch (MR_tag((MR_Word) mdb__parse__Result_6)) {
#line 232 "parse.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 232 "parse.m"
      case (MR_Integer) 0:
#line 234 "parse.m"
        *mdb__parse__Command_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 232 "parse.m"
        break;
#line 232 "parse.m"
      case (MR_Integer) 1:
#line 225 "parse.m"
        {
#line 225 "parse.m"
          MR_String mdb__parse__StringToParse_7;
#line 225 "parse.m"
          MR_Word mdb__parse__Words_8;
#line 225 "parse.m"
          MR_Word mdb__parse__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__parse__Result_6, (MR_Integer) 0)));
#line 229 "parse.m"
          MR_Word mdb__parse__CommandPrime_9;

#line 225 "parse.m"
          mdb__parse__StringToParse_7 = (MR_String) mdb__parse__V_15_15;
#line 226 "parse.m"
          {
#line 226 "parse.m"
            mdb__parse__Words_8 = mercury__string__words_separator_2_f_0((MR_Word) &mdb__parse_scalar_common_3[1], mdb__parse__StringToParse_7);
          }
#line 227 "parse.m"
          {
#line 227 "parse.m"
            mdb__parse__succeeded = mdb__parse__parse_2_p_0(mdb__parse__Words_8, &mdb__parse__CommandPrime_9);
          }
#line 229 "parse.m"
          if (mdb__parse__succeeded)
#line 228 "parse.m"
            *mdb__parse__Command_4 = mdb__parse__CommandPrime_9;
#line 229 "parse.m"
          else
#line 230 "parse.m"
            *mdb__parse__Command_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 225 "parse.m"
        }
#line 232 "parse.m"
        break;
#line 232 "parse.m"
      case (MR_Integer) 2:
#line 237 "parse.m"
        *mdb__parse__Command_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 232 "parse.m"
        break;
#line 232 "parse.m"
    }
#line 222 "parse.m"
  }
#line 181 "parse.m"
}

#line 215 "parse.m"
static MR_bool MR_CALL 
mdb__parse__read_command_4_p_0_1(
#line 215 "parse.m"
  MR_Box mdb__parse__closure_arg,
#line 215 "parse.m"
  MR_Box mdb__parse__wrapper_arg_1)
#line 215 "parse.m"
{
#line 215 "parse.m"
  {
#line 215 "parse.m"
    MR_bool mdb__parse__succeeded;
#line 215 "parse.m"
    MR_Box mdb__parse__closure = mdb__parse__closure_arg;

#line 215 "parse.m"
    {
#line 215 "parse.m"
      mdb__parse__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) mdb__parse__wrapper_arg_1));
    }
#line 215 "parse.m"
    return mdb__parse__succeeded;
#line 215 "parse.m"
  }
#line 215 "parse.m"
}

#line 179 "parse.m"
void MR_CALL 
mdb__parse__read_command_4_p_0(
#line 179 "parse.m"
  MR_String mdb__parse__Prompt_5,
#line 179 "parse.m"
  MR_Word * mdb__parse__Command_6)
#line 179 "parse.m"
{
#line 213 "parse.m"
  {
#line 213 "parse.m"
    MR_bool mdb__parse__succeeded;
#line 213 "parse.m"
    MR_String mdb__parse__Line_8;
#line 213 "parse.m"
    MR_Word mdb__parse__Words_9;
#line 218 "parse.m"
    MR_Word mdb__parse__CommandPrime_10;

#line 214 "parse.m"
    {
#line 214 "parse.m"
      mdb__util__trace_get_command_4_p_0(mdb__parse__Prompt_5, &mdb__parse__Line_8);
    }
#line 215 "parse.m"
    {
#line 215 "parse.m"
      mdb__parse__Words_9 = mercury__string__words_separator_2_f_0((MR_Word) &mdb__parse_scalar_common_3[0], mdb__parse__Line_8);
    }
#line 216 "parse.m"
    {
#line 216 "parse.m"
      mdb__parse__succeeded = mdb__parse__parse_2_p_0(mdb__parse__Words_9, &mdb__parse__CommandPrime_10);
    }
#line 218 "parse.m"
    if (mdb__parse__succeeded)
#line 217 "parse.m"
      *mdb__parse__Command_6 = mdb__parse__CommandPrime_10;
#line 218 "parse.m"
    else
#line 219 "parse.m"
      *mdb__parse__Command_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 213 "parse.m"
  }
#line 179 "parse.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdb.parse. */
