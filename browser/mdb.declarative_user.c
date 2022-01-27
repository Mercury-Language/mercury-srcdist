/*
** Automatically generated from `declarative_user.m'
** by the Mercury compiler,
** version DEV, configured for x86_64-apple-darwin13.1.0.
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


/* :- module mdb.declarative_user. */
/* :- implementation. */

/*
INIT mercury__mdb__declarative_user__init
ENDINIT
*/

#include "mdb.declarative_user.mih"


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
#include "exception.mih"
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
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "mdb.browse.mih"
#include "mdb.browser_info.mih"
#include "mdb.browser_term.mih"
#include "mdb.declarative_analyser.mih"
#include "mdb.declarative_debugger.mih"
#include "mdb.declarative_edt.mih"
#include "mdb.declarative_execution.mih"
#include "mdb.declarative_oracle.mih"
#include "mdb.declarative_tree.mih"
#include "mdb.help.mih"
#include "mdb.io_action.mih"
#include "mdb.parse.mih"
#include "mdb.term_rep.mih"
#include "mdb.util.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"




#line 91 "mdb.declarative_user.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_user__list__pti_list_1__plain_mdb__browser_info__type_ctor_info_dir_0;

#line 94 "mdb.declarative_user.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_user__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 97 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_0;

#line 100 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_1;

#line 103 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_2;

#line 106 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_3;

#line 109 "mdb.declarative_user.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_user__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 112 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_4[1];

#line 115 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_4;

#line 118 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_5[1];

#line 121 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_5;

#line 124 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_6[1];

#line 127 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_6;

#line 130 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_7[2];

#line 133 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_7;

#line 136 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_8[2];

#line 139 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_8;

#line 142 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_9;

#line 145 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_10[1];

#line 148 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_10;

#line 151 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_11;

#line 154 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_12;

#line 157 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_13;

#line 160 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_14;

#line 163 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_15;

#line 166 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_16[1];

#line 169 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_16;

#line 172 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_17;

#line 175 "mdb.declarative_user.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_user__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

#line 178 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_18[1];

#line 181 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_18;

#line 184 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_19;

#line 187 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_20;

#line 190 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_0[13];

#line 193 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_1[1];

#line 196 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_2[1];

#line 199 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_3[6];

#line 202 "mdb.declarative_user.c"
static const MR_DuPtagLayout mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_command_0[4];

#line 205 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_command_0[21];

#line 208 "mdb.declarative_user.c"
static const MR_Integer mdb__declarative_user__mdb__declarative_user__functor_number_map_user_command_0[21];

#line 211 "mdb.declarative_user.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_user__mdb__declarative_debugger__pti_decl_question_1__pseudo_1;

#line 214 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_question_1_0[1];

#line 217 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_question_1_0;

#line 220 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_question_1_1[2];

#line 223 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_question_1_1;

#line 226 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_question_1_0[1];

#line 229 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_question_1_1[1];

#line 232 "mdb.declarative_user.c"
static const MR_DuPtagLayout mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_question_1[2];

#line 235 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_question_1[2];

#line 238 "mdb.declarative_user.c"
static const MR_Integer mdb__declarative_user__mdb__declarative_user__functor_number_map_user_question_1[2];

#line 241 "mdb.declarative_user.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_user__mdb__declarative_debugger__pti_decl_answer_1__pseudo_1;

#line 244 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_0[2];

#line 247 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_0;

#line 250 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_1[1];

#line 253 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_1;

#line 256 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_2[1];

#line 259 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_2;

#line 262 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_3[1];

#line 265 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_3;

#line 268 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_4[1];

#line 271 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_4;

#line 274 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_5;

#line 277 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_6[1];

#line 280 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_6;

#line 283 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_7;

#line 286 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_0[2];

#line 289 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_1[1];

#line 292 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_2[1];

#line 295 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_3[4];

#line 298 "mdb.declarative_user.c"
static const MR_DuPtagLayout mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_response_1[4];

#line 301 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_response_1[8];

#line 304 "mdb.declarative_user.c"
static const MR_Integer mdb__declarative_user__mdb__declarative_user__functor_number_map_user_response_1[8];

#line 307 "mdb.declarative_user.c"
static const MR_EnumFunctorDesc mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_0;

#line 310 "mdb.declarative_user.c"
static const MR_EnumFunctorDesc mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_1;

#line 313 "mdb.declarative_user.c"
static const MR_EnumFunctorDesc mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_2;

#line 316 "mdb.declarative_user.c"
static const MR_EnumFunctorDesc mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_3;

#line 319 "mdb.declarative_user.c"
static const MR_EnumFunctorDescPtr mdb__declarative_user__mdb__declarative_user__enum_value_ordered_user_search_mode_0[4];

#line 322 "mdb.declarative_user.c"
static const MR_EnumFunctorDescPtr mdb__declarative_user__mdb__declarative_user__enum_name_ordered_user_search_mode_0[4];

#line 325 "mdb.declarative_user.c"
static const MR_Integer mdb__declarative_user__mdb__declarative_user__functor_number_map_user_search_mode_0[4];

#line 328 "mdb.declarative_user.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_user__list__ti_list_1mdb__help__type_ctor_info_entry_0;

#line 331 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_state_0_0[6];

#line 334 "mdb.declarative_user.c"
static const MR_ConstString mdb__declarative_user__mdb__declarative_user__field_names_user_state_0_0[6];

#line 337 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_state_0_0;

#line 340 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_state_0_0[1];

#line 343 "mdb.declarative_user.c"
static const MR_DuPtagLayout mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_state_0[1];

#line 346 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_state_0[1];

#line 349 "mdb.declarative_user.c"
static const MR_Integer mdb__declarative_user__mdb__declarative_user__functor_number_map_user_state_0[1];

#line 352 "mdb.declarative_user.c"
static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_command_0_0_10001(
#line 355 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 357 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_2);

#line 360 "mdb.declarative_user.c"
static void MR_CALL 
mdb__declarative_user____Compare____user_command_0_0_10001(
#line 363 "mdb.declarative_user.c"
  MR_Box * mdb__declarative_user__wrapper_arg_1,
#line 365 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_2,
#line 367 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_3);

#line 370 "mdb.declarative_user.c"
static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_question_1_0_10001(
#line 373 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 375 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_2,
#line 377 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_3);

#line 380 "mdb.declarative_user.c"
static void MR_CALL 
mdb__declarative_user____Compare____user_question_1_0_10001(
#line 383 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 385 "mdb.declarative_user.c"
  MR_Box * mdb__declarative_user__wrapper_arg_2,
#line 387 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_3,
#line 389 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_4);

#line 392 "mdb.declarative_user.c"
static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_response_1_0_10001(
#line 395 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 397 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_2,
#line 399 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_3);

#line 402 "mdb.declarative_user.c"
static void MR_CALL 
mdb__declarative_user____Compare____user_response_1_0_10001(
#line 405 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 407 "mdb.declarative_user.c"
  MR_Box * mdb__declarative_user__wrapper_arg_2,
#line 409 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_3,
#line 411 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_4);

#line 414 "mdb.declarative_user.c"
static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_search_mode_0_0_10001(
#line 417 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 419 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_2);

#line 422 "mdb.declarative_user.c"
static void MR_CALL 
mdb__declarative_user____Compare____user_search_mode_0_0_10001(
#line 425 "mdb.declarative_user.c"
  MR_Box * mdb__declarative_user__wrapper_arg_1,
#line 427 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_2,
#line 429 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_3);

#line 432 "mdb.declarative_user.c"
static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_state_0_0_10001(
#line 435 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 437 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_2);

#line 440 "mdb.declarative_user.c"
static void MR_CALL 
mdb__declarative_user____Compare____user_state_0_0_10001(
#line 443 "mdb.declarative_user.c"
  MR_Box * mdb__declarative_user__wrapper_arg_1,
#line 445 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_2,
#line 447 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_3);

#line 1157 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_4_p_0_1(
#line 1157 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 1157 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 1157 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_2,
#line 1157 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_3);

#line 1142 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_4_p_0(
#line 1142 "declarative_user.m"
  MR_Word mdb__declarative_user__Question_5,
#line 1142 "declarative_user.m"
  MR_Word mdb__declarative_user__User_6);

#line 493 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_105_111_95_97_99_116_105_111_110_115_95_95_91_49_93_95_48_2_p_0(
#line 493 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 493 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2);

#line 483 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_116_114_97_99_101_95_97_116_111_109_115_95_95_91_49_93_95_48_3_p_0(
#line 483 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 483 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2,
#line 483 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__3_3);

#line 453 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_113_117_101_115_116_105_111_110_95_112_114_111_109_112_116_95_95_91_49_93_95_48_2_p_0(
#line 453 "declarative_user.m"
  MR_Word mdb__declarative_user__UserQuestion_3,
#line 453 "declarative_user.m"
  MR_String * mdb__declarative_user__Prompt_4);

#line 448 "declarative_user.m"
static MR_Word MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(
#line 448 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1);

#line 717 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__IntroducedFrom__pred__browse_xml_atom__717__1_2_p_0(
#line 717 "declarative_user.m"
  MR_Word mdb__declarative_user__PredOrFunc_15,
#line 717 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_22);

#line 698 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__IntroducedFrom__pred__browse_atom__698__1_2_p_0(
#line 698 "declarative_user.m"
  MR_Word mdb__declarative_user__PredOrFunc_20,
#line 698 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_31);

#line 132 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user____Compare____user_command_0_0(
#line 132 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__1_1,
#line 132 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_2,
#line 132 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__3_3);

#line 132 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user____Index____user_command_0_0(
#line 132 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 132 "declarative_user.m"
  MR_Integer * mdb__declarative_user__HeadVar__2_2);

#line 132 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_command_0_0(
#line 132 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 132 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_2);

#line 1364 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__convert_dirs_to_term_path_from_atom_3_p_0(
#line 1364 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 1364 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_2,
#line 1364 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__3_3);

#line 1328 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__print_tabled_io_actions_2_5_p_0(
#line 1328 "declarative_user.m"
  MR_Word mdb__declarative_user__User_6,
#line 1328 "declarative_user.m"
  MR_Integer mdb__declarative_user__Cur_7,
#line 1328 "declarative_user.m"
  MR_Integer mdb__declarative_user__End_8);

#line 1298 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__write_io_actions_5_p_0(
#line 1298 "declarative_user.m"
  MR_Word mdb__declarative_user__User_6,
#line 1298 "declarative_user.m"
  MR_Integer mdb__declarative_user__NumTabled_7,
#line 1298 "declarative_user.m"
  MR_Word mdb__declarative_user__IoActions_8);

#line 1286 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__trace_atom_arg_to_univ_2_p_0(
#line 1286 "declarative_user.m"
  MR_Word mdb__declarative_user__TraceAtomArg_3,
#line 1286 "declarative_user.m"
  MR_Word * mdb__declarative_user__Univ_4);

#line 1262 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__count_tabled_io_actions_2_8_p_0(
#line 1262 "declarative_user.m"
  MR_Integer mdb__declarative_user__Cur_9,
#line 1262 "declarative_user.m"
  MR_Integer mdb__declarative_user__End_10,
#line 1262 "declarative_user.m"
  MR_Integer mdb__declarative_user__PrevTabled_11,
#line 1262 "declarative_user.m"
  MR_Integer * mdb__declarative_user__Tabled_12,
#line 1262 "declarative_user.m"
  MR_Integer mdb__declarative_user__PrevUntabled_13,
#line 1262 "declarative_user.m"
  MR_Integer * mdb__declarative_user__Untabled_14);

#line 1227 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__write_decl_atom_6_p_0_1(
#line 1227 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 1227 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 1227 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 1216 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__write_decl_atom_6_p_0(
#line 1216 "declarative_user.m"
  MR_Word mdb__declarative_user__User_7,
#line 1216 "declarative_user.m"
  MR_String mdb__declarative_user__Indent_8,
#line 1216 "declarative_user.m"
  MR_Word mdb__declarative_user__CallerType_9,
#line 1216 "declarative_user.m"
  MR_Word mdb__declarative_user__DeclAtom_10);

#line 1209 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__write_decl_final_atom_6_p_0(
#line 1209 "declarative_user.m"
  MR_Word mdb__declarative_user__User_7,
#line 1209 "declarative_user.m"
  MR_String mdb__declarative_user__Indent_8,
#line 1209 "declarative_user.m"
  MR_Word mdb__declarative_user__CallerType_9,
#line 1209 "declarative_user.m"
  MR_Word mdb__declarative_user__FinalAtom_10);

#line 1202 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__write_decl_init_atom_6_p_0(
#line 1202 "declarative_user.m"
  MR_Word mdb__declarative_user__User_7,
#line 1202 "declarative_user.m"
  MR_String mdb__declarative_user__Indent_8,
#line 1202 "declarative_user.m"
  MR_Word mdb__declarative_user__CallerType_9,
#line 1202 "declarative_user.m"
  MR_Word mdb__declarative_user__InitAtom_10);

#line 1177 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__write_decl_bug_4_p_0_1(
#line 1177 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 1177 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 1177 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_2,
#line 1177 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_3);

#line 1170 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__write_decl_bug_4_p_0(
#line 1170 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 1170 "declarative_user.m"
  MR_Word mdb__declarative_user__User_2);

#line 1136 "declarative_user.m"
static MR_Word MR_CALL 
mdb__declarative_user__decl_caller_type_0_f_0(void);

#line 1072 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__is_dash_1_p_0(
#line 1072 "declarative_user.m"
  MR_Char mdb__declarative_user__HeadVar__1_1);

#line 1048 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__help_cmd_2_p_0(
#line 1048 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 1048 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2);

#line 1029 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__search_mode_cmd_2_p_0(
#line 1029 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 1029 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2);

#line 1024 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__trust_arg_cmd_2_p_0(
#line 1024 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 1024 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2);

#line 1009 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__num_io_actions_cmd_2_p_0(
#line 1009 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 1009 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2);

#line 977 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__format_param_arg_cmd_3_p_0(
#line 977 "declarative_user.m"
  MR_String mdb__declarative_user__Cmd_4,
#line 977 "declarative_user.m"
  MR_Word mdb__declarative_user__ArgWords0_5,
#line 977 "declarative_user.m"
  MR_Word * mdb__declarative_user__Command_6);

#line 968 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__format_arg_cmd_2_p_0(
#line 968 "declarative_user.m"
  MR_Word mdb__declarative_user__ArgWords_3,
#line 968 "declarative_user.m"
  MR_Word * mdb__declarative_user__UserCommand_4);

#line 1060 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__print_arg_cmd_2_p_0_2(
#line 1060 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 1060 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1);

#line 1060 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__print_arg_cmd_2_p_0_1(
#line 1060 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 1060 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1);

#line 960 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__print_arg_cmd_2_p_0(
#line 960 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 960 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2);

#line 943 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__browse_arg_cmd_2_p_0(
#line 943 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 943 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2);

#line 938 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__one_word_cmd_3_p_0(
#line 938 "declarative_user.m"
  MR_Word mdb__declarative_user__Cmd_4,
#line 938 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_2,
#line 938 "declarative_user.m"
  MR_Word * mdb__declarative_user__Cmd_3);

#line 906 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_33(
#line 906 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 906 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 906 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 928 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_32(
#line 928 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 928 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 928 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 936 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_31(
#line 936 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 936 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 936 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 923 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_30(
#line 923 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 923 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 923 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 920 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_29(
#line 920 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 920 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 920 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 926 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_28(
#line 926 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 926 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 926 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 932 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_27(
#line 932 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 932 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 932 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 922 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_26(
#line 922 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 922 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 922 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 927 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_25(
#line 927 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 927 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 927 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 924 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_24(
#line 924 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 924 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 924 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 912 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_23(
#line 912 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 912 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 912 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 935 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_22(
#line 935 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 935 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 935 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 908 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_21(
#line 908 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 908 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 908 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 925 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_20(
#line 925 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 925 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 925 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 914 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_19(
#line 914 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 914 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 914 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 933 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_18(
#line 933 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 933 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 933 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 918 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_17(
#line 918 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 918 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 918 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 917 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_16(
#line 917 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 917 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 917 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 902 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_15(
#line 902 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 902 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 902 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 909 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_14(
#line 909 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 909 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 909 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 904 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_13(
#line 904 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 904 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 904 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 901 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_12(
#line 901 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 901 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 901 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 931 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_11(
#line 931 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 931 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 931 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 907 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_10(
#line 907 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 907 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 907 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 913 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_9(
#line 913 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 913 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 913 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 921 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_8(
#line 921 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 921 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 921 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 903 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_7(
#line 903 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 903 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 903 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 934 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_6(
#line 934 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 934 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 934 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 905 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_5(
#line 905 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 905 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 905 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 916 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_4(
#line 916 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 916 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 916 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 919 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_3(
#line 919 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 919 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 919 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 911 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_2(
#line 911 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 911 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 911 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 915 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_1(
#line 915 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 915 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 915 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 897 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0(
#line 897 "declarative_user.m"
  MR_String mdb__declarative_user__HeadVar__1_1,
#line 897 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2);

#line 871 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__get_command_6_p_0_1(
#line 871 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 871 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1);

#line 864 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__get_command_6_p_0(
#line 864 "declarative_user.m"
  MR_String mdb__declarative_user__Prompt_7,
#line 864 "declarative_user.m"
  MR_Word * mdb__declarative_user__Command_8,
#line 864 "declarative_user.m"
  MR_Word mdb__declarative_user__User_9,
#line 864 "declarative_user.m"
  MR_Word * mdb__declarative_user__User_4);

#line 783 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__print_atom_arguments_6_p_0(
#line 783 "declarative_user.m"
  MR_Word mdb__declarative_user__Atom_7,
#line 783 "declarative_user.m"
  MR_Integer mdb__declarative_user__From_8,
#line 783 "declarative_user.m"
  MR_Integer mdb__declarative_user__To_9,
#line 783 "declarative_user.m"
  MR_Word mdb__declarative_user__User_10);

#line 763 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__get_user_arg_values_2_p_0(
#line 763 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 763 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2);

#line 752 "declarative_user.m"
static MR_Word MR_CALL 
mdb__declarative_user__get_subterm_mode_from_atoms_for_arg_4_f_0(
#line 752 "declarative_user.m"
  MR_Integer mdb__declarative_user__ArgNum_6,
#line 752 "declarative_user.m"
  MR_Word mdb__declarative_user__InitAtom_7,
#line 752 "declarative_user.m"
  MR_Word mdb__declarative_user__FinalAtom_8,
#line 752 "declarative_user.m"
  MR_Word mdb__declarative_user__Dirs_9);

#line 724 "declarative_user.m"
static MR_Word MR_CALL 
mdb__declarative_user__get_subterm_mode_from_atoms_3_f_0(
#line 724 "declarative_user.m"
  MR_Word mdb__declarative_user__InitAtom_5,
#line 724 "declarative_user.m"
  MR_Word mdb__declarative_user__FinalAtom_6,
#line 724 "declarative_user.m"
  MR_Word mdb__declarative_user__Dirs_7);

#line 717 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__browse_xml_atom_4_p_0_1(
#line 717 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg);

#line 709 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__browse_xml_atom_4_p_0(
#line 709 "declarative_user.m"
  MR_Word mdb__declarative_user__Atom_5,
#line 709 "declarative_user.m"
  MR_Word mdb__declarative_user__User_6);

#line 703 "declarative_user.m"
static MR_Box MR_CALL 
mdb__declarative_user__browse_atom_7_p_0_2(
#line 703 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 703 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1);

#line 698 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__browse_atom_7_p_0_1(
#line 698 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg);

#line 689 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__browse_atom_7_p_0(
#line 689 "declarative_user.m"
  MR_Word mdb__declarative_user__InitAtom_8,
#line 689 "declarative_user.m"
  MR_Word mdb__declarative_user__FinalAtom_9,
#line 689 "declarative_user.m"
  MR_Word * mdb__declarative_user__MaybeTrack_10,
#line 689 "declarative_user.m"
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_26,
#line 689 "declarative_user.m"
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_27);

#line 671 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__browse_xml_atom_argument_5_p_0(
#line 671 "declarative_user.m"
  MR_Word mdb__declarative_user__Atom_6,
#line 671 "declarative_user.m"
  MR_Integer mdb__declarative_user__ArgNum_7,
#line 671 "declarative_user.m"
  MR_Word mdb__declarative_user__User_8);

#line 660 "declarative_user.m"
static MR_Box MR_CALL 
mdb__declarative_user__browse_atom_argument_8_p_0_1(
#line 660 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 660 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1);

#line 645 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__browse_atom_argument_8_p_0(
#line 645 "declarative_user.m"
  MR_Word mdb__declarative_user__InitAtom_9,
#line 645 "declarative_user.m"
  MR_Word mdb__declarative_user__FinalAtom_10,
#line 645 "declarative_user.m"
  MR_Integer mdb__declarative_user__ArgNum_11,
#line 645 "declarative_user.m"
  MR_Word * mdb__declarative_user__MaybeTrack_12,
#line 645 "declarative_user.m"
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_26,
#line 645 "declarative_user.m"
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_27);

#line 717 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__browse_xml_decl_bug_5_p_0_1(
#line 717 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg);

#line 632 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__browse_xml_decl_bug_5_p_0(
#line 632 "declarative_user.m"
  MR_Word mdb__declarative_user__Bug_6,
#line 632 "declarative_user.m"
  MR_Word mdb__declarative_user__MaybeArgNum_7,
#line 632 "declarative_user.m"
  MR_Word mdb__declarative_user__User_8);

#line 619 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__browse_decl_bug_6_p_0(
#line 619 "declarative_user.m"
  MR_Word mdb__declarative_user__Bug_7,
#line 619 "declarative_user.m"
  MR_Word mdb__declarative_user__MaybeArgNum_8,
#line 619 "declarative_user.m"
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_16,
#line 619 "declarative_user.m"
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_17);

#line 602 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__browse_io_action_6_p_0(
#line 602 "declarative_user.m"
  MR_Word mdb__declarative_user__IoAction_7,
#line 602 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2,
#line 602 "declarative_user.m"
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_17,
#line 602 "declarative_user.m"
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_18);

#line 566 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__print_chosen_io_actions_6_p_0(
#line 566 "declarative_user.m"
  MR_Word mdb__declarative_user__MaybeIoActions_7,
#line 566 "declarative_user.m"
  MR_Integer mdb__declarative_user__From_8,
#line 566 "declarative_user.m"
  MR_Integer mdb__declarative_user__To_9,
#line 566 "declarative_user.m"
  MR_Word mdb__declarative_user__User0_10);

#line 542 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__find_tabled_io_action_5_p_0(
#line 542 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 542 "declarative_user.m"
  MR_Integer mdb__declarative_user__TabledActionNum_8,
#line 542 "declarative_user.m"
  MR_Word * mdb__declarative_user__MaybeIoAction_9);

#line 521 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__browse_chosen_io_action_7_p_0(
#line 521 "declarative_user.m"
  MR_Word mdb__declarative_user__MaybeIoActions_8,
#line 521 "declarative_user.m"
  MR_Integer mdb__declarative_user__ActionNum_9,
#line 521 "declarative_user.m"
  MR_Word * mdb__declarative_user__MaybeTrack_10,
#line 521 "declarative_user.m"
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_16,
#line 521 "declarative_user.m"
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_17);

#line 513 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__decl_bug_io_actions_2_p_0(
#line 513 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 513 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2);

#line 436 "declarative_user.m"
static MR_Word MR_CALL 
mdb__declarative_user__arg_num_to_arg_pos_1_f_0(
#line 436 "declarative_user.m"
  MR_Integer mdb__declarative_user__ArgNum_3);

#line 250 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__handle_command_7_p_0(
#line 250 "declarative_user.m"
  MR_Word mdb__declarative_user__TypeInfo_for_T_234,
#line 250 "declarative_user.m"
  MR_Word mdb__declarative_user__Cmd_8,
#line 250 "declarative_user.m"
  MR_Word mdb__declarative_user__UserQuestion_9,
#line 250 "declarative_user.m"
  MR_Word * mdb__declarative_user__Response_10,
#line 250 "declarative_user.m"
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_57,
#line 250 "declarative_user.m"
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_58);


static /* final */ const MR_Box mdb__declarative_user_scalar_common_1[22][2];

static /* final */ const MR_Box mdb__declarative_user_scalar_common_2[18][3];

static /* final */ const MR_Box mdb__declarative_user_scalar_common_3[3][5];

static /* final */ const MR_Box mdb__declarative_user_scalar_common_4[1][8];

static /* final */ const MR_Box mdb__declarative_user_scalar_common_5[1][7];

static /* final */ const MR_Box mdb__declarative_user_scalar_common_6[21][4];

static /* final */ const MR_Box mdb__declarative_user_scalar_common_7[2][6];

static /* final */ const MR_Box mdb__declarative_user_scalar_common_8[3][1];

static /* final */ const MR_Box mdb__declarative_user_scalar_common_9[1][9];




static /* final */ const MR_Box mdb__declarative_user_scalar_common_1[22][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "decl_debug")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "concepts")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[2])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "\th, \?\thelp\t\tthis help message\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "abort this diagnosis session and return to mdb\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "\tq\tquit\t\t")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "\tb\tbrowse\t\tbrowse the suspect\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "\tn\tno\t\tdo not accept that the suspect is a bug\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "\ty\tyes\t\tconfirm that the suspect is a bug\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "Answer one of:\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "convert_dirs_to_term_path_from_atom")),
    ((MR_Box) ((MR_String) "argument list empty"))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "convert_dirs_to_term_path_from_atom")),
    ((MR_Box) ((MR_String) "argument of atom cannot be named"))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "convert_dirs_to_term_path_from_atom")),
    ((MR_Box) ((MR_String) "no value for first position in path"))
  },
};

static /* final */ const MR_Box mdb__declarative_user_scalar_common_2[18][3] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__get_command_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_11)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_16)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_18)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_26)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_27)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_29)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_30)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_32)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__print_arg_cmd_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_6[0])),
    ((MR_Box) (mdb__declarative_user__print_arg_cmd_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[2])),
    ((MR_Box) (mdb__declarative_user__write_decl_atom_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__declarative_user_scalar_common_3[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__declarative_user__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_command_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
};

static /* final */ const MR_Box mdb__declarative_user_scalar_common_4[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_0)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_0)),
    ((MR_Box) (&mdb__declarative_user__list__pti_list_1__plain_mdb__browser_info__type_ctor_info_dir_0)),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_browser_term_mode_0))
  },
};

static /* final */ const MR_Box mdb__declarative_user_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_0)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_0)),
    ((MR_Box) (&mdb__declarative_user__list__pti_list_1__plain_mdb__browser_info__type_ctor_info_dir_0)),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_browser_term_mode_0))
  },
};

static /* final */ const MR_Box mdb__declarative_user_scalar_common_6[21][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_12)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_13)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 8 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_14)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))
  },
  /* row 9 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_15)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_17)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))))
  },
  /* row 11 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_19)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))))
  },
  /* row 12 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_20)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "size"))
  },
  /* row 13 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_21)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))
  },
  /* row 14 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_22)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))))
  },
  /* row 15 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_23)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))))
  },
  /* row 16 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_24)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "depth"))
  },
  /* row 17 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_25)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "lines"))
  },
  /* row 18 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_28)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "width"))
  },
  /* row 19 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_31)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[13])))
  },
  /* row 20 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_33)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
};

static /* final */ const MR_Box mdb__declarative_user_scalar_common_7[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_command_0)),
    ((MR_Box) (&mdb__declarative_user__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_command_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdb__declarative_user__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_command_0))
  },
};

static /* final */ const MR_Box mdb__declarative_user_scalar_common_8[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box mdb__declarative_user_scalar_common_9[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_state_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_browse_caller_type_0)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "mdb.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"



#line 1873 "mdb.declarative_user.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_user__list__pti_list_1__plain_mdb__browser_info__type_ctor_info_dir_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_dir_0
  }
};

#line 1881 "mdb.declarative_user.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_user__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1889 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_0 = {
  (MR_String) "user_cmd_yes",
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

#line 1904 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_1 = {
  (MR_String) "user_cmd_no",
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

#line 1919 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_2 = {
  (MR_String) "user_cmd_inadmissible",
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

#line 1934 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_3 = {
  (MR_String) "user_cmd_skip",
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

#line 1949 "mdb.declarative_user.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_user__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1957 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_4[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

#line 1962 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_4 = {
  (MR_String) "user_cmd_browse_arg",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 4,
  mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_4,
  NULL,
  NULL,
  NULL
};

#line 1977 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_5[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

#line 1982 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_5 = {
  (MR_String) "user_cmd_browse_xml_arg",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 5,
  mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_5,
  NULL,
  NULL,
  NULL
};

#line 1997 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2002 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_6 = {
  (MR_String) "user_cmd_browse_io",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 6,
  mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_6,
  NULL,
  NULL,
  NULL
};

#line 2017 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_7[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2023 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_7 = {
  (MR_String) "user_cmd_print_arg",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 7,
  mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_7,
  NULL,
  NULL,
  NULL
};

#line 2038 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_8[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2044 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_8 = {
  (MR_String) "user_cmd_print_io",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 8,
  mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_8,
  NULL,
  NULL,
  NULL
};

#line 2059 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_9 = {
  (MR_String) "user_cmd_pd",
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

#line 2074 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_10[1] = {
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_param_cmd_0
};

#line 2079 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_10 = {
  (MR_String) "user_cmd_param_command",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 10,
  mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_10,
  NULL,
  NULL,
  NULL
};

#line 2094 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_11 = {
  (MR_String) "user_cmd_trust_predicate",
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

#line 2109 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_12 = {
  (MR_String) "user_cmd_trust_module",
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

#line 2124 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_13 = {
  (MR_String) "user_cmd_info",
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

#line 2139 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_14 = {
  (MR_String) "user_cmd_undo",
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

#line 2154 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_15 = {
  (MR_String) "user_cmd_ask",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 9,
  (MR_Integer) 15,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2169 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_16[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_search_mode_0
};

#line 2174 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_16 = {
  (MR_String) "user_cmd_change_search",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 16,
  mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_16,
  NULL,
  NULL,
  NULL
};

#line 2189 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_17 = {
  (MR_String) "user_cmd_quit",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 10,
  (MR_Integer) 17,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2204 "mdb.declarative_user.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_user__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2212 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_18[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

#line 2217 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_18 = {
  (MR_String) "user_cmd_help",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 18,
  mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_18,
  NULL,
  NULL,
  NULL
};

#line 2232 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_19 = {
  (MR_String) "user_cmd_empty",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 11,
  (MR_Integer) 19,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2247 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_20 = {
  (MR_String) "user_cmd_illegal",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 12,
  (MR_Integer) 20,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2262 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_0[13] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_0,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_1,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_2,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_3,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_9,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_11,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_12,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_13,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_14,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_15,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_17,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_19,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_20
};

#line 2279 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_1[1] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_4
};

#line 2284 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_2[1] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_5
};

#line 2289 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_3[6] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_6,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_7,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_8,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_10,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_16,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_18
};

#line 2299 "mdb.declarative_user.c"
static const MR_DuPtagLayout mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_command_0[4] = {
  {
    (MR_Integer) 13,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_2
  },
  {
    (MR_Integer) 6,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_3
  }
};

#line 2323 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_command_0[21] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_15,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_4,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_6,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_5,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_16,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_19,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_18,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_20,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_2,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_13,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_1,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_10,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_9,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_7,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_8,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_17,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_3,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_12,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_11,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_14,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_0
};

#line 2348 "mdb.declarative_user.c"
static const MR_Integer mdb__declarative_user__mdb__declarative_user__functor_number_map_user_command_0[21] = {
  (MR_Integer) 20,
  (MR_Integer) 10,
  (MR_Integer) 8,
  (MR_Integer) 16,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 13,
  (MR_Integer) 14,
  (MR_Integer) 12,
  (MR_Integer) 11,
  (MR_Integer) 18,
  (MR_Integer) 17,
  (MR_Integer) 9,
  (MR_Integer) 19,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 15,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 7
};

#line 2373 "mdb.declarative_user.c"
const MR_TypeCtorInfo_Struct mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_command_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_user____Unify____user_command_0_0_10001)),
  ((MR_Box) (mdb__declarative_user____Compare____user_command_0_0_10001)),
  (MR_String) "mdb.declarative_user",
  (MR_String) "user_command",
  {
    mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_command_0
  },
  {
    mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_command_0
  },
  (MR_Integer) 21,
  (MR_Integer) 4,
  mdb__declarative_user__mdb__declarative_user__functor_number_map_user_command_0
};

#line 2394 "mdb.declarative_user.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_user__mdb__declarative_debugger__pti_decl_question_1__pseudo_1 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2402 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_question_1_0[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__mdb__declarative_debugger__pti_decl_question_1__pseudo_1
};

#line 2407 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_question_1_0 = {
  (MR_String) "plain_question",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_user__mdb__declarative_user__field_types_user_question_1_0,
  NULL,
  NULL,
  NULL
};

#line 2422 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_question_1_1[2] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__mdb__declarative_debugger__pti_decl_question_1__pseudo_1,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0
};

#line 2428 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_question_1_1 = {
  (MR_String) "question_with_default",
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_user__mdb__declarative_user__field_types_user_question_1_1,
  NULL,
  NULL,
  NULL
};

#line 2443 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_question_1_0[1] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_question_1_0
};

#line 2448 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_question_1_1[1] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_question_1_1
};

#line 2453 "mdb.declarative_user.c"
static const MR_DuPtagLayout mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_question_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_question_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_question_1_1
  }
};

#line 2467 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_question_1[2] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_question_1_0,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_question_1_1
};

#line 2473 "mdb.declarative_user.c"
static const MR_Integer mdb__declarative_user__mdb__declarative_user__functor_number_map_user_question_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2479 "mdb.declarative_user.c"
const MR_TypeCtorInfo_Struct mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_question_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_user____Unify____user_question_1_0_10001)),
  ((MR_Box) (mdb__declarative_user____Compare____user_question_1_0_10001)),
  (MR_String) "mdb.declarative_user",
  (MR_String) "user_question",
  {
    mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_question_1
  },
  {
    mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_question_1
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__declarative_user__mdb__declarative_user__functor_number_map_user_question_1
};

#line 2500 "mdb.declarative_user.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_user__mdb__declarative_debugger__pti_decl_answer_1__pseudo_1 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_answer_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2508 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_0[2] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__mdb__declarative_debugger__pti_decl_question_1__pseudo_1,
  (MR_PseudoTypeInfo) &mdb__declarative_user__mdb__declarative_debugger__pti_decl_answer_1__pseudo_1
};

#line 2514 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_0 = {
  (MR_String) "user_response_answer",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_0,
  NULL,
  NULL,
  NULL
};

#line 2529 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_1[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__mdb__declarative_debugger__pti_decl_question_1__pseudo_1
};

#line 2534 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_1 = {
  (MR_String) "user_response_trust_predicate",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_1,
  NULL,
  NULL,
  NULL
};

#line 2549 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_2[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__mdb__declarative_debugger__pti_decl_question_1__pseudo_1
};

#line 2554 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_2 = {
  (MR_String) "user_response_trust_module",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_2,
  NULL,
  NULL,
  NULL
};

#line 2569 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_3[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_output_stream_0
};

#line 2574 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_3 = {
  (MR_String) "user_response_show_info",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 3,
  mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_3,
  NULL,
  NULL,
  NULL
};

#line 2589 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_4[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_search_mode_0
};

#line 2594 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_4 = {
  (MR_String) "user_response_change_search",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_4,
  NULL,
  NULL,
  NULL
};

#line 2609 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_5 = {
  (MR_String) "user_response_undo",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2624 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_6[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2629 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_6 = {
  (MR_String) "user_response_exit_diagnosis",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 6,
  mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_6,
  NULL,
  NULL,
  NULL
};

#line 2644 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_7 = {
  (MR_String) "user_response_abort_diagnosis",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 7,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2659 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_0[2] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_5,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_7
};

#line 2665 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_1[1] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_0
};

#line 2670 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_2[1] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_1
};

#line 2675 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_3[4] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_2,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_3,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_4,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_6
};

#line 2683 "mdb.declarative_user.c"
static const MR_DuPtagLayout mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_response_1[4] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_2
  },
  {
    (MR_Integer) 4,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_3
  }
};

#line 2707 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_response_1[8] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_7,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_0,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_4,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_6,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_3,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_2,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_1,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_5
};

#line 2719 "mdb.declarative_user.c"
static const MR_Integer mdb__declarative_user__mdb__declarative_user__functor_number_map_user_response_1[8] = {
  (MR_Integer) 1,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 7,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 2731 "mdb.declarative_user.c"
const MR_TypeCtorInfo_Struct mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_response_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_user____Unify____user_response_1_0_10001)),
  ((MR_Box) (mdb__declarative_user____Compare____user_response_1_0_10001)),
  (MR_String) "mdb.declarative_user",
  (MR_String) "user_response",
  {
    mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_response_1
  },
  {
    mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_response_1
  },
  (MR_Integer) 8,
  (MR_Integer) 4,
  mdb__declarative_user__mdb__declarative_user__functor_number_map_user_response_1
};

#line 2752 "mdb.declarative_user.c"
static const MR_EnumFunctorDesc mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_0 = {
  (MR_String) "user_top_down",
  (MR_Integer) 0
};

#line 2758 "mdb.declarative_user.c"
static const MR_EnumFunctorDesc mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_1 = {
  (MR_String) "user_divide_and_query",
  (MR_Integer) 1
};

#line 2764 "mdb.declarative_user.c"
static const MR_EnumFunctorDesc mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_2 = {
  (MR_String) "user_suspicion_divide_and_query",
  (MR_Integer) 2
};

#line 2770 "mdb.declarative_user.c"
static const MR_EnumFunctorDesc mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_3 = {
  (MR_String) "user_binary",
  (MR_Integer) 3
};

#line 2776 "mdb.declarative_user.c"
static const MR_EnumFunctorDescPtr mdb__declarative_user__mdb__declarative_user__enum_value_ordered_user_search_mode_0[4] = {
  &mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_0,
  &mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_1,
  &mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_2,
  &mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_3
};

#line 2784 "mdb.declarative_user.c"
static const MR_EnumFunctorDescPtr mdb__declarative_user__mdb__declarative_user__enum_name_ordered_user_search_mode_0[4] = {
  &mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_3,
  &mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_1,
  &mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_2,
  &mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_0
};

#line 2792 "mdb.declarative_user.c"
static const MR_Integer mdb__declarative_user__mdb__declarative_user__functor_number_map_user_search_mode_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2800 "mdb.declarative_user.c"
const MR_TypeCtorInfo_Struct mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_search_mode_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_user____Unify____user_search_mode_0_0_10001)),
  ((MR_Box) (mdb__declarative_user____Compare____user_search_mode_0_0_10001)),
  (MR_String) "mdb.declarative_user",
  (MR_String) "user_search_mode",
  {
    mdb__declarative_user__mdb__declarative_user__enum_name_ordered_user_search_mode_0
  },
  {
    mdb__declarative_user__mdb__declarative_user__enum_value_ordered_user_search_mode_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mdb__declarative_user__mdb__declarative_user__functor_number_map_user_search_mode_0
};

#line 2821 "mdb.declarative_user.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_user__list__ti_list_1mdb__help__type_ctor_info_entry_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdb__help__mdb__help__type_ctor_info_entry_0
  }
};

#line 2829 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_state_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_input_stream_0,
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_output_stream_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_browser_persistent_state_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mdb__declarative_user__list__ti_list_1mdb__help__type_ctor_info_entry_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 2839 "mdb.declarative_user.c"
static const MR_ConstString mdb__declarative_user__mdb__declarative_user__field_names_user_state_0_0[6] = {
  (MR_String) "instr",
  (MR_String) "outstr",
  (MR_String) "browser",
  (MR_String) "display_question",
  (MR_String) "help_system",
  (MR_String) "testing"
};

#line 2849 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_state_0_0 = {
  (MR_String) "user_state",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_user__mdb__declarative_user__field_types_user_state_0_0,
  mdb__declarative_user__mdb__declarative_user__field_names_user_state_0_0,
  NULL,
  NULL
};

#line 2864 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_state_0_0[1] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_state_0_0
};

#line 2869 "mdb.declarative_user.c"
static const MR_DuPtagLayout mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_state_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_state_0_0
  }
};

#line 2878 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_state_0[1] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_state_0_0
};

#line 2883 "mdb.declarative_user.c"
static const MR_Integer mdb__declarative_user__mdb__declarative_user__functor_number_map_user_state_0[1] = {
  (MR_Integer) 0
};

#line 2888 "mdb.declarative_user.c"
const MR_TypeCtorInfo_Struct mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_state_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_user____Unify____user_state_0_0_10001)),
  ((MR_Box) (mdb__declarative_user____Compare____user_state_0_0_10001)),
  (MR_String) "mdb.declarative_user",
  (MR_String) "user_state",
  {
    mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_state_0
  },
  {
    mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_state_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_user__mdb__declarative_user__functor_number_map_user_state_0
};

#line 2909 "mdb.declarative_user.c"
static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_command_0_0_10001(
#line 2912 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 2914 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_2)
#line 2916 "mdb.declarative_user.c"
{
#line 2918 "mdb.declarative_user.c"
  {
#line 2920 "mdb.declarative_user.c"
    MR_bool mdb__declarative_user__succeeded;

#line 2923 "mdb.declarative_user.c"
    {
#line 2925 "mdb.declarative_user.c"
      mdb__declarative_user__succeeded = mdb__declarative_user____Unify____user_command_0_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), ((MR_Word) mdb__declarative_user__wrapper_arg_2));
    }
#line 2928 "mdb.declarative_user.c"
    return mdb__declarative_user__succeeded;
#line 2930 "mdb.declarative_user.c"
  }
#line 2932 "mdb.declarative_user.c"
}

#line 2935 "mdb.declarative_user.c"
static void MR_CALL 
mdb__declarative_user____Compare____user_command_0_0_10001(
#line 2938 "mdb.declarative_user.c"
  MR_Box * mdb__declarative_user__wrapper_arg_1,
#line 2940 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_2,
#line 2942 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_3)
#line 2944 "mdb.declarative_user.c"
{
#line 2946 "mdb.declarative_user.c"
  {
#line 2948 "mdb.declarative_user.c"
    MR_Word mdb__declarative_user__conv0_HeadVar__1_1;

#line 2951 "mdb.declarative_user.c"
    {
#line 2953 "mdb.declarative_user.c"
      mdb__declarative_user____Compare____user_command_0_0(&mdb__declarative_user__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_user__wrapper_arg_2), ((MR_Word) mdb__declarative_user__wrapper_arg_3));
    }
#line 2956 "mdb.declarative_user.c"
    *mdb__declarative_user__wrapper_arg_1 = ((MR_Box) (mdb__declarative_user__conv0_HeadVar__1_1));
#line 2958 "mdb.declarative_user.c"
  }
#line 2960 "mdb.declarative_user.c"
}

#line 2963 "mdb.declarative_user.c"
static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_question_1_0_10001(
#line 2966 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 2968 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_2,
#line 2970 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_3)
#line 2972 "mdb.declarative_user.c"
{
#line 2974 "mdb.declarative_user.c"
  {
#line 2976 "mdb.declarative_user.c"
    MR_bool mdb__declarative_user__succeeded;

#line 2979 "mdb.declarative_user.c"
    {
#line 2981 "mdb.declarative_user.c"
      mdb__declarative_user__succeeded = mdb__declarative_user____Unify____user_question_1_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), ((MR_Word) mdb__declarative_user__wrapper_arg_2), ((MR_Word) mdb__declarative_user__wrapper_arg_3));
    }
#line 2984 "mdb.declarative_user.c"
    return mdb__declarative_user__succeeded;
#line 2986 "mdb.declarative_user.c"
  }
#line 2988 "mdb.declarative_user.c"
}

#line 2991 "mdb.declarative_user.c"
static void MR_CALL 
mdb__declarative_user____Compare____user_question_1_0_10001(
#line 2994 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 2996 "mdb.declarative_user.c"
  MR_Box * mdb__declarative_user__wrapper_arg_2,
#line 2998 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_3,
#line 3000 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_4)
#line 3002 "mdb.declarative_user.c"
{
#line 3004 "mdb.declarative_user.c"
  {
#line 3006 "mdb.declarative_user.c"
    MR_Word mdb__declarative_user__conv0_HeadVar__1_1;

#line 3009 "mdb.declarative_user.c"
    {
#line 3011 "mdb.declarative_user.c"
      mdb__declarative_user____Compare____user_question_1_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_user__wrapper_arg_3), ((MR_Word) mdb__declarative_user__wrapper_arg_4));
    }
#line 3014 "mdb.declarative_user.c"
    *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv0_HeadVar__1_1));
#line 3016 "mdb.declarative_user.c"
  }
#line 3018 "mdb.declarative_user.c"
}

#line 3021 "mdb.declarative_user.c"
static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_response_1_0_10001(
#line 3024 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 3026 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_2,
#line 3028 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_3)
#line 3030 "mdb.declarative_user.c"
{
#line 3032 "mdb.declarative_user.c"
  {
#line 3034 "mdb.declarative_user.c"
    MR_bool mdb__declarative_user__succeeded;

#line 3037 "mdb.declarative_user.c"
    {
#line 3039 "mdb.declarative_user.c"
      mdb__declarative_user__succeeded = mdb__declarative_user____Unify____user_response_1_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), ((MR_Word) mdb__declarative_user__wrapper_arg_2), ((MR_Word) mdb__declarative_user__wrapper_arg_3));
    }
#line 3042 "mdb.declarative_user.c"
    return mdb__declarative_user__succeeded;
#line 3044 "mdb.declarative_user.c"
  }
#line 3046 "mdb.declarative_user.c"
}

#line 3049 "mdb.declarative_user.c"
static void MR_CALL 
mdb__declarative_user____Compare____user_response_1_0_10001(
#line 3052 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 3054 "mdb.declarative_user.c"
  MR_Box * mdb__declarative_user__wrapper_arg_2,
#line 3056 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_3,
#line 3058 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_4)
#line 3060 "mdb.declarative_user.c"
{
#line 3062 "mdb.declarative_user.c"
  {
#line 3064 "mdb.declarative_user.c"
    MR_Word mdb__declarative_user__conv0_HeadVar__1_1;

#line 3067 "mdb.declarative_user.c"
    {
#line 3069 "mdb.declarative_user.c"
      mdb__declarative_user____Compare____user_response_1_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_user__wrapper_arg_3), ((MR_Word) mdb__declarative_user__wrapper_arg_4));
    }
#line 3072 "mdb.declarative_user.c"
    *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv0_HeadVar__1_1));
#line 3074 "mdb.declarative_user.c"
  }
#line 3076 "mdb.declarative_user.c"
}

#line 3079 "mdb.declarative_user.c"
static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_search_mode_0_0_10001(
#line 3082 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 3084 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_2)
#line 3086 "mdb.declarative_user.c"
{
#line 3088 "mdb.declarative_user.c"
  {
#line 3090 "mdb.declarative_user.c"
    MR_bool mdb__declarative_user__succeeded;

#line 3093 "mdb.declarative_user.c"
    {
#line 3095 "mdb.declarative_user.c"
      mdb__declarative_user__succeeded = mdb__declarative_user____Unify____user_search_mode_0_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), ((MR_Word) mdb__declarative_user__wrapper_arg_2));
    }
#line 3098 "mdb.declarative_user.c"
    return mdb__declarative_user__succeeded;
#line 3100 "mdb.declarative_user.c"
  }
#line 3102 "mdb.declarative_user.c"
}

#line 3105 "mdb.declarative_user.c"
static void MR_CALL 
mdb__declarative_user____Compare____user_search_mode_0_0_10001(
#line 3108 "mdb.declarative_user.c"
  MR_Box * mdb__declarative_user__wrapper_arg_1,
#line 3110 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_2,
#line 3112 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_3)
#line 3114 "mdb.declarative_user.c"
{
#line 3116 "mdb.declarative_user.c"
  {
#line 3118 "mdb.declarative_user.c"
    MR_Word mdb__declarative_user__conv0_HeadVar__1_1;

#line 3121 "mdb.declarative_user.c"
    {
#line 3123 "mdb.declarative_user.c"
      mdb__declarative_user____Compare____user_search_mode_0_0(&mdb__declarative_user__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_user__wrapper_arg_2), ((MR_Word) mdb__declarative_user__wrapper_arg_3));
    }
#line 3126 "mdb.declarative_user.c"
    *mdb__declarative_user__wrapper_arg_1 = ((MR_Box) (mdb__declarative_user__conv0_HeadVar__1_1));
#line 3128 "mdb.declarative_user.c"
  }
#line 3130 "mdb.declarative_user.c"
}

#line 3133 "mdb.declarative_user.c"
static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_state_0_0_10001(
#line 3136 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 3138 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_2)
#line 3140 "mdb.declarative_user.c"
{
#line 3142 "mdb.declarative_user.c"
  {
#line 3144 "mdb.declarative_user.c"
    MR_bool mdb__declarative_user__succeeded;

#line 3147 "mdb.declarative_user.c"
    {
#line 3149 "mdb.declarative_user.c"
      mdb__declarative_user__succeeded = mdb__declarative_user____Unify____user_state_0_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), ((MR_Word) mdb__declarative_user__wrapper_arg_2));
    }
#line 3152 "mdb.declarative_user.c"
    return mdb__declarative_user__succeeded;
#line 3154 "mdb.declarative_user.c"
  }
#line 3156 "mdb.declarative_user.c"
}

#line 3159 "mdb.declarative_user.c"
static void MR_CALL 
mdb__declarative_user____Compare____user_state_0_0_10001(
#line 3162 "mdb.declarative_user.c"
  MR_Box * mdb__declarative_user__wrapper_arg_1,
#line 3164 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_2,
#line 3166 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_3)
#line 3168 "mdb.declarative_user.c"
{
#line 3170 "mdb.declarative_user.c"
  {
#line 3172 "mdb.declarative_user.c"
    MR_Word mdb__declarative_user__conv0_HeadVar__1_1;

#line 3175 "mdb.declarative_user.c"
    {
#line 3177 "mdb.declarative_user.c"
      mdb__declarative_user____Compare____user_state_0_0(&mdb__declarative_user__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_user__wrapper_arg_2), ((MR_Word) mdb__declarative_user__wrapper_arg_3));
    }
#line 3180 "mdb.declarative_user.c"
    *mdb__declarative_user__wrapper_arg_1 = ((MR_Box) (mdb__declarative_user__conv0_HeadVar__1_1));
#line 3182 "mdb.declarative_user.c"
  }
#line 3184 "mdb.declarative_user.c"
}

#line 1157 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_4_p_0_1(
#line 1157 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 1157 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 1157 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_2,
#line 1157 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_3)
#line 1157 "declarative_user.m"
{
#line 1157 "declarative_user.m"
  {
#line 1157 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;

#line 1157 "declarative_user.m"
    {
#line 1157 "declarative_user.m"
      mdb__declarative_user__write_decl_final_atom_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 5))), ((MR_Word) mdb__declarative_user__wrapper_arg_1));
#line 1157 "declarative_user.m"
      return;
    }
#line 1157 "declarative_user.m"
  }
#line 1157 "declarative_user.m"
}

#line 1142 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_4_p_0(
#line 1142 "declarative_user.m"
  MR_Word mdb__declarative_user__Question_5,
#line 1142 "declarative_user.m"
  MR_Word mdb__declarative_user__User_6)
#line 1142 "declarative_user.m"
{
#line 1149 "declarative_user.m"
  {
#line 1149 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;

#line 1149 "declarative_user.m"
    if (((MR_tag((MR_Word) mdb__declarative_user__Question_5)) == (MR_mktag((MR_Integer) 1))))
#line 1150 "declarative_user.m"
      {
#line 1150 "declarative_user.m"
        MR_Word mdb__declarative_user__Call_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Question_5, (MR_Integer) 1)));
#line 1150 "declarative_user.m"
        MR_Word mdb__declarative_user__Solns_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Question_5, (MR_Integer) 2)));
#line 1150 "declarative_user.m"
        MR_Word mdb__declarative_user__V_81_81;
#line 1150 "declarative_user.m"
        MR_Box mdb__declarative_user__V_11_11 = (MR_hl_field(MR_mktag(1), mdb__declarative_user__Question_5, (MR_Integer) 0));

#line 1207 "declarative_user.m"
        {
#line 1207 "declarative_user.m"
          mdb__declarative_user__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1207 "declarative_user.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_user__V_81_81, 0) = ((MR_Box) (mdb__declarative_user__Call_12));
#line 1207 "declarative_user.m"
        }
#line 1207 "declarative_user.m"
        {
#line 1207 "declarative_user.m"
          mdb__declarative_user__write_decl_atom_6_p_0(mdb__declarative_user__User_6, (MR_String) "Call ", (MR_Integer) 0, mdb__declarative_user__V_81_81);
        }
#line 1154 "declarative_user.m"
        if ((mdb__declarative_user__Solns_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1153 "declarative_user.m"
          {
#line 1153 "declarative_user.m"
          }
#line 1154 "declarative_user.m"
        else
#line 1155 "declarative_user.m"
          {
#line 1155 "declarative_user.m"
            MR_Word mdb__declarative_user__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
#line 1155 "declarative_user.m"
            MR_Word mdb__declarative_user__V_39_39;
#line 1156 "declarative_user.m"
            MR_Word mdb__declarative_user__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
#line 1156 "declarative_user.m"
            MR_Word mdb__declarative_user__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
#line 1156 "declarative_user.m"
            MR_Word mdb__declarative_user__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
#line 1156 "declarative_user.m"
            MR_Word mdb__declarative_user__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
#line 1156 "declarative_user.m"
            MR_Word mdb__declarative_user__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
#line 1157 "declarative_user.m"
            MR_Box mdb__declarative_user__conv0_STATE_VARIABLE_IO_20;

#line 1156 "declarative_user.m"
            {
#line 1156 "declarative_user.m"
              mercury__io__write_string_4_p_0(mdb__declarative_user__V_36_36, (MR_String) "Solutions:\n");
            }
#line 1157 "declarative_user.m"
            {
#line 1157 "declarative_user.m"
              mdb__declarative_user__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1157 "declarative_user.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_user__V_39_39, 0) = ((MR_Box) (&mdb__declarative_user_scalar_common_9[0]));
#line 1157 "declarative_user.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_user__V_39_39, 1) = ((MR_Box) (mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_4_p_0_1));
#line 1157 "declarative_user.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_user__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1157 "declarative_user.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_user__V_39_39, 3) = ((MR_Box) (mdb__declarative_user__User_6));
#line 1157 "declarative_user.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_user__V_39_39, 4) = ((MR_Box) ((MR_String) "\t"));
#line 1157 "declarative_user.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_user__V_39_39, 5) = ((MR_Box) ((MR_Integer) 2));
#line 1157 "declarative_user.m"
            }
#line 1157 "declarative_user.m"
            {
#line 1157 "declarative_user.m"
              mercury__list__foldl_4_p_10((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, mdb__declarative_user__V_39_39, mdb__declarative_user__Solns_13, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_user__conv0_STATE_VARIABLE_IO_20);
            }
#line 1155 "declarative_user.m"
          }
#line 1150 "declarative_user.m"
      }
#line 1149 "declarative_user.m"
    else
#line 1149 "declarative_user.m"
      if (((MR_tag((MR_Word) mdb__declarative_user__Question_5)) == (MR_mktag((MR_Integer) 2))))
#line 1161 "declarative_user.m"
        {
#line 1161 "declarative_user.m"
          MR_Word mdb__declarative_user__TypeInfo_73_73;
#line 1161 "declarative_user.m"
          MR_Word mdb__declarative_user__ExceptionRep_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__Question_5, (MR_Integer) 2)));
#line 1161 "declarative_user.m"
          MR_Word mdb__declarative_user__Exception_18;
#line 1161 "declarative_user.m"
          MR_Word mdb__declarative_user__V_24_24;
#line 1161 "declarative_user.m"
          MR_Word mdb__declarative_user__V_27_27;
#line 1161 "declarative_user.m"
          MR_Box mdb__declarative_user__V_29_29;
#line 1161 "declarative_user.m"
          MR_Word mdb__declarative_user__V_31_31;
#line 1161 "declarative_user.m"
          MR_Word mdb__declarative_user__Call_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__Question_5, (MR_Integer) 1)));
#line 1161 "declarative_user.m"
          MR_Word mdb__declarative_user__V_90_90;
#line 1161 "declarative_user.m"
          MR_Box mdb__declarative_user__V_16_16 = (MR_hl_field(MR_mktag(2), mdb__declarative_user__Question_5, (MR_Integer) 0));
#line 1163 "declarative_user.m"
          MR_Word mdb__declarative_user__V_52_52;
#line 1163 "declarative_user.m"
          MR_Word mdb__declarative_user__V_53_53;
#line 1163 "declarative_user.m"
          MR_Word mdb__declarative_user__V_54_54;
#line 1163 "declarative_user.m"
          MR_Word mdb__declarative_user__V_55_55;
#line 1163 "declarative_user.m"
          MR_Word mdb__declarative_user__V_56_56;
#line 1165 "declarative_user.m"
          MR_Word mdb__declarative_user__V_57_57;
#line 1165 "declarative_user.m"
          MR_Word mdb__declarative_user__V_58_58;
#line 1165 "declarative_user.m"
          MR_Word mdb__declarative_user__V_59_59;
#line 1165 "declarative_user.m"
          MR_Word mdb__declarative_user__V_60_60;
#line 1165 "declarative_user.m"
          MR_Word mdb__declarative_user__V_61_61;
#line 1167 "declarative_user.m"
          MR_Word mdb__declarative_user__V_62_62;
#line 1167 "declarative_user.m"
          MR_Word mdb__declarative_user__V_63_63;
#line 1167 "declarative_user.m"
          MR_Word mdb__declarative_user__V_64_64;
#line 1167 "declarative_user.m"
          MR_Word mdb__declarative_user__V_65_65;
#line 1167 "declarative_user.m"
          MR_Word mdb__declarative_user__V_66_66;

#line 1207 "declarative_user.m"
          {
#line 1207 "declarative_user.m"
            mdb__declarative_user__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1207 "declarative_user.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_user__V_90_90, 0) = ((MR_Box) (mdb__declarative_user__Call_46));
#line 1207 "declarative_user.m"
          }
#line 1207 "declarative_user.m"
          {
#line 1207 "declarative_user.m"
            mdb__declarative_user__write_decl_atom_6_p_0(mdb__declarative_user__User_6, (MR_String) "Call ", (MR_Integer) 0, mdb__declarative_user__V_90_90);
          }
#line 1163 "declarative_user.m"
          mdb__declarative_user__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
#line 1163 "declarative_user.m"
          mdb__declarative_user__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
#line 1163 "declarative_user.m"
          mdb__declarative_user__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
#line 1163 "declarative_user.m"
          mdb__declarative_user__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
#line 1163 "declarative_user.m"
          mdb__declarative_user__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
#line 1163 "declarative_user.m"
          mdb__declarative_user__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
#line 1163 "declarative_user.m"
          {
#line 1163 "declarative_user.m"
            mercury__io__write_string_4_p_0(mdb__declarative_user__V_24_24, (MR_String) "Throws ");
          }
#line 1164 "declarative_user.m"
          {
#line 1164 "declarative_user.m"
            mdb__term_rep__rep_to_univ_2_p_0(mdb__declarative_user__ExceptionRep_17, &mdb__declarative_user__Exception_18);
          }
#line 1165 "declarative_user.m"
          mdb__declarative_user__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
#line 1165 "declarative_user.m"
          mdb__declarative_user__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
#line 1165 "declarative_user.m"
          mdb__declarative_user__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
#line 1165 "declarative_user.m"
          mdb__declarative_user__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
#line 1165 "declarative_user.m"
          mdb__declarative_user__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
#line 1165 "declarative_user.m"
          mdb__declarative_user__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
#line 1165 "declarative_user.m"
          {
#line 1165 "declarative_user.m"
            mdb__declarative_user__V_29_29 = mercury__univ__univ_value_1_f_0(&mdb__declarative_user__TypeInfo_73_73, mdb__declarative_user__Exception_18);
          }
#line 1165 "declarative_user.m"
          {
#line 1165 "declarative_user.m"
            mercury__io__write_5_p_2(mdb__declarative_user__TypeInfo_73_73, mdb__declarative_user__V_27_27, (MR_Integer) 2, mdb__declarative_user__V_29_29);
          }
#line 1167 "declarative_user.m"
          mdb__declarative_user__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
#line 1167 "declarative_user.m"
          mdb__declarative_user__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
#line 1167 "declarative_user.m"
          mdb__declarative_user__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
#line 1167 "declarative_user.m"
          mdb__declarative_user__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
#line 1167 "declarative_user.m"
          mdb__declarative_user__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
#line 1167 "declarative_user.m"
          mdb__declarative_user__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
#line 1167 "declarative_user.m"
          {
#line 1167 "declarative_user.m"
            mercury__io__nl_3_p_0(mdb__declarative_user__V_31_31);
#line 1167 "declarative_user.m"
            return;
          }
#line 1161 "declarative_user.m"
        }
#line 1149 "declarative_user.m"
      else
#line 1147 "declarative_user.m"
        {
#line 1147 "declarative_user.m"
          MR_Word mdb__declarative_user__Atom_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Question_5, (MR_Integer) 2)));
#line 1147 "declarative_user.m"
          MR_Box mdb__declarative_user__V_8_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_user__Question_5, (MR_Integer) 0));
#line 1147 "declarative_user.m"
          MR_Word mdb__declarative_user__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Question_5, (MR_Integer) 1)));

#line 1148 "declarative_user.m"
          {
#line 1148 "declarative_user.m"
            mdb__declarative_user__write_decl_final_atom_6_p_0(mdb__declarative_user__User_6, (MR_String) "", (MR_Integer) 0, mdb__declarative_user__Atom_10);
#line 1148 "declarative_user.m"
            return;
          }
#line 1147 "declarative_user.m"
        }
#line 1149 "declarative_user.m"
  }
#line 1142 "declarative_user.m"
}

#line 493 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_105_111_95_97_99_116_105_111_110_115_95_95_91_49_93_95_48_2_p_0(
#line 493 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 493 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2)
#line 493 "declarative_user.m"
{
#line 496 "declarative_user.m"
  {
#line 496 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;

#line 496 "declarative_user.m"
    if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 498 "declarative_user.m"
      *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 496 "declarative_user.m"
    else
#line 496 "declarative_user.m"
      if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 499 "declarative_user.m"
        *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 496 "declarative_user.m"
      else
#line 496 "declarative_user.m"
        {
#line 496 "declarative_user.m"
          MR_Word mdb__declarative_user__FinalDeclAtom_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 2)));
#line 496 "declarative_user.m"
          MR_Box mdb__declarative_user__V_3_3 = (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0));
#line 496 "declarative_user.m"
          MR_Word mdb__declarative_user__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 496 "declarative_user.m"
          MR_Word mdb__declarative_user__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalDeclAtom_5, (MR_Integer) 0)));

#line 496 "declarative_user.m"
          *mdb__declarative_user__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalDeclAtom_5, (MR_Integer) 1)));
#line 496 "declarative_user.m"
        }
#line 496 "declarative_user.m"
  }
#line 493 "declarative_user.m"
}

#line 483 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_116_114_97_99_101_95_97_116_111_109_115_95_95_91_49_93_95_48_3_p_0(
#line 483 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 483 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2,
#line 483 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__3_3)
#line 483 "declarative_user.m"
{
#line 486 "declarative_user.m"
  {
#line 486 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;

#line 486 "declarative_user.m"
    if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 488 "declarative_user.m"
      {
#line 488 "declarative_user.m"
        MR_Word mdb__declarative_user__InitDeclAtom_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 488 "declarative_user.m"
        MR_Box mdb__declarative_user__V_7_7 = (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0));
#line 488 "declarative_user.m"
        MR_Word mdb__declarative_user__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 2)));

#line 488 "declarative_user.m"
        *mdb__declarative_user__HeadVar__2_2 = (MR_Word) mdb__declarative_user__InitDeclAtom_8;
#line 488 "declarative_user.m"
        *mdb__declarative_user__HeadVar__3_3 = *mdb__declarative_user__HeadVar__2_2;
#line 488 "declarative_user.m"
      }
#line 486 "declarative_user.m"
    else
#line 486 "declarative_user.m"
      if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 490 "declarative_user.m"
        {
#line 490 "declarative_user.m"
          MR_Word mdb__declarative_user__InitDeclAtom_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 490 "declarative_user.m"
          MR_Box mdb__declarative_user__V_10_10 = (MR_hl_field(MR_mktag(2), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0));
#line 490 "declarative_user.m"
          MR_Word mdb__declarative_user__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 2)));

#line 490 "declarative_user.m"
          *mdb__declarative_user__HeadVar__2_2 = (MR_Word) mdb__declarative_user__InitDeclAtom_11;
#line 490 "declarative_user.m"
          *mdb__declarative_user__HeadVar__3_3 = *mdb__declarative_user__HeadVar__2_2;
#line 490 "declarative_user.m"
        }
#line 486 "declarative_user.m"
      else
#line 486 "declarative_user.m"
        {
#line 486 "declarative_user.m"
          MR_Word mdb__declarative_user__InitDeclAtom_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 486 "declarative_user.m"
          MR_Word mdb__declarative_user__FinalDeclAtom_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 2)));
#line 486 "declarative_user.m"
          MR_Box mdb__declarative_user__V_4_4 = (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0));
#line 486 "declarative_user.m"
          MR_Word mdb__declarative_user__V_13_13;

#line 486 "declarative_user.m"
          *mdb__declarative_user__HeadVar__2_2 = (MR_Word) mdb__declarative_user__InitDeclAtom_5;
#line 486 "declarative_user.m"
          *mdb__declarative_user__HeadVar__3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalDeclAtom_6, (MR_Integer) 0)));
#line 486 "declarative_user.m"
          mdb__declarative_user__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalDeclAtom_6, (MR_Integer) 1)));
#line 486 "declarative_user.m"
        }
#line 486 "declarative_user.m"
  }
#line 483 "declarative_user.m"
}

#line 453 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_113_117_101_115_116_105_111_110_95_112_114_111_109_112_116_95_95_91_49_93_95_48_2_p_0(
#line 453 "declarative_user.m"
  MR_Word mdb__declarative_user__UserQuestion_3,
#line 453 "declarative_user.m"
  MR_String * mdb__declarative_user__Prompt_4)
#line 453 "declarative_user.m"
{
#line 459 "declarative_user.m"
  {
#line 459 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;

#line 459 "declarative_user.m"
    if (((MR_tag((MR_Word) mdb__declarative_user__UserQuestion_3)) == (MR_mktag((MR_Integer) 0))))
#line 457 "declarative_user.m"
      {
#line 457 "declarative_user.m"
        MR_Word mdb__declarative_user__Question_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__UserQuestion_3, (MR_Integer) 0)));

#line 468 "declarative_user.m"
        if (((MR_tag((MR_Word) mdb__declarative_user__Question_5)) == (MR_mktag((MR_Integer) 1))))
#line 468 "declarative_user.m"
          {
#line 468 "declarative_user.m"
            MR_Word mdb__declarative_user__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Question_5, (MR_Integer) 2)));
#line 469 "declarative_user.m"
            MR_Word mdb__declarative_user__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Question_5, (MR_Integer) 1)));
#line 469 "declarative_user.m"
            MR_Box mdb__declarative_user__V_27_27 = (MR_hl_field(MR_mktag(1), mdb__declarative_user__Question_5, (MR_Integer) 0));

#line 468 "declarative_user.m"
            if ((mdb__declarative_user__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 470 "declarative_user.m"
              *mdb__declarative_user__Prompt_4 = (MR_String) "Unsatisfiable\? ";
#line 468 "declarative_user.m"
            else
#line 469 "declarative_user.m"
              *mdb__declarative_user__Prompt_4 = (MR_String) "Complete\? ";
#line 468 "declarative_user.m"
          }
#line 468 "declarative_user.m"
        else
#line 468 "declarative_user.m"
          if (((MR_tag((MR_Word) mdb__declarative_user__Question_5)) == (MR_mktag((MR_Integer) 2))))
#line 471 "declarative_user.m"
            *mdb__declarative_user__Prompt_4 = (MR_String) "Expected\? ";
#line 468 "declarative_user.m"
          else
#line 468 "declarative_user.m"
            *mdb__declarative_user__Prompt_4 = (MR_String) "Valid\? ";
#line 457 "declarative_user.m"
      }
#line 459 "declarative_user.m"
    else
#line 460 "declarative_user.m"
      {
#line 460 "declarative_user.m"
        MR_Word mdb__declarative_user__DefaultTruth_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__UserQuestion_3, (MR_Integer) 1)));
#line 460 "declarative_user.m"
        MR_String mdb__declarative_user__QuestionPrompt_7;
#line 460 "declarative_user.m"
        MR_String mdb__declarative_user__DefaultPrompt_8;
#line 460 "declarative_user.m"
        MR_Word mdb__declarative_user__Question_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__UserQuestion_3, (MR_Integer) 0)));

#line 468 "declarative_user.m"
        if (((MR_tag((MR_Word) mdb__declarative_user__Question_9)) == (MR_mktag((MR_Integer) 1))))
#line 468 "declarative_user.m"
          {
#line 468 "declarative_user.m"
            MR_Word mdb__declarative_user__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Question_9, (MR_Integer) 2)));
#line 469 "declarative_user.m"
            MR_Word mdb__declarative_user__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Question_9, (MR_Integer) 1)));
#line 469 "declarative_user.m"
            MR_Box mdb__declarative_user__V_44_44 = (MR_hl_field(MR_mktag(1), mdb__declarative_user__Question_9, (MR_Integer) 0));

#line 468 "declarative_user.m"
            if ((mdb__declarative_user__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 470 "declarative_user.m"
              mdb__declarative_user__QuestionPrompt_7 = (MR_String) "Unsatisfiable\? ";
#line 468 "declarative_user.m"
            else
#line 469 "declarative_user.m"
              mdb__declarative_user__QuestionPrompt_7 = (MR_String) "Complete\? ";
#line 468 "declarative_user.m"
          }
#line 468 "declarative_user.m"
        else
#line 468 "declarative_user.m"
          if (((MR_tag((MR_Word) mdb__declarative_user__Question_9)) == (MR_mktag((MR_Integer) 2))))
#line 471 "declarative_user.m"
            mdb__declarative_user__QuestionPrompt_7 = (MR_String) "Expected\? ";
#line 468 "declarative_user.m"
          else
#line 468 "declarative_user.m"
            mdb__declarative_user__QuestionPrompt_7 = (MR_String) "Valid\? ";
#line 475 "declarative_user.m"
        if ((mdb__declarative_user__DefaultTruth_6 == (MR_Integer) 0))
#line 475 "declarative_user.m"
          mdb__declarative_user__DefaultPrompt_8 = (MR_String) "[yes] ";
#line 475 "declarative_user.m"
        else
#line 475 "declarative_user.m"
          if ((mdb__declarative_user__DefaultTruth_6 == (MR_Integer) 1))
#line 476 "declarative_user.m"
            mdb__declarative_user__DefaultPrompt_8 = (MR_String) "[no] ";
#line 475 "declarative_user.m"
          else
#line 477 "declarative_user.m"
            mdb__declarative_user__DefaultPrompt_8 = (MR_String) "[inadmissible] ";
#line 463 "declarative_user.m"
        {
#line 463 "declarative_user.m"
          *mdb__declarative_user__Prompt_4 = mercury__string__f_43_43_2_f_0(mdb__declarative_user__QuestionPrompt_7, mdb__declarative_user__DefaultPrompt_8);
        }
#line 460 "declarative_user.m"
      }
#line 459 "declarative_user.m"
  }
#line 453 "declarative_user.m"
}

#line 448 "declarative_user.m"
static MR_Word MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(
#line 448 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1)
#line 448 "declarative_user.m"
{
#line 450 "declarative_user.m"
  {
#line 450 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 450 "declarative_user.m"
    MR_Word mdb__declarative_user__Q_2;

#line 450 "declarative_user.m"
    if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 450 "declarative_user.m"
      mdb__declarative_user__Q_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
#line 450 "declarative_user.m"
    else
#line 451 "declarative_user.m"
      {
#line 451 "declarative_user.m"
        MR_Word mdb__declarative_user__V_5_5;

#line 451 "declarative_user.m"
        mdb__declarative_user__Q_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
#line 451 "declarative_user.m"
        mdb__declarative_user__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 451 "declarative_user.m"
      }
#line 450 "declarative_user.m"
    return mdb__declarative_user__Q_2;
#line 450 "declarative_user.m"
  }
#line 448 "declarative_user.m"
}

#line 717 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__IntroducedFrom__pred__browse_xml_atom__717__1_2_p_0(
#line 717 "declarative_user.m"
  MR_Word mdb__declarative_user__PredOrFunc_15,
#line 717 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_22)
#line 717 "declarative_user.m"
{
#line 717 "declarative_user.m"
  {
#line 717 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded = (mdb__declarative_user__PredOrFunc_15 == mdb__declarative_user__HeadVar__2_22);

#line 717 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 717 "declarative_user.m"
  }
#line 717 "declarative_user.m"
}

#line 698 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__IntroducedFrom__pred__browse_atom__698__1_2_p_0(
#line 698 "declarative_user.m"
  MR_Word mdb__declarative_user__PredOrFunc_20,
#line 698 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_31)
#line 698 "declarative_user.m"
{
#line 698 "declarative_user.m"
  {
#line 698 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded = (mdb__declarative_user__PredOrFunc_20 == mdb__declarative_user__HeadVar__2_31);

#line 698 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 698 "declarative_user.m"
  }
#line 698 "declarative_user.m"
}

#line 198 "declarative_user.m"
void MR_CALL 
mdb__declarative_user____Compare____user_state_0_0(
#line 198 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__1_1,
#line 198 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_2,
#line 198 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__3_3)
#line 198 "declarative_user.m"
{
#line 198 "declarative_user.m"
  {
#line 198 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 198 "declarative_user.m"
    MR_Integer mdb__declarative_user__CastX_21 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;
#line 198 "declarative_user.m"
    MR_Integer mdb__declarative_user__CastY_22 = (MR_Integer) mdb__declarative_user__HeadVar__3_3;

#line 198 "declarative_user.m"
    mdb__declarative_user__succeeded = (mdb__declarative_user__CastX_21 == mdb__declarative_user__CastY_22);
#line 198 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 3828 "mdb.declarative_user.c"
      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 0;
#line 198 "declarative_user.m"
    else
#line 198 "declarative_user.m"
      {
#line 198 "declarative_user.m"
        MR_Word mdb__declarative_user__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));
#line 198 "declarative_user.m"
        MR_Word mdb__declarative_user__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 198 "declarative_user.m"
        MR_Word mdb__declarative_user__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 2)));
#line 198 "declarative_user.m"
        MR_Word mdb__declarative_user__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 3)));
#line 198 "declarative_user.m"
        MR_Word mdb__declarative_user__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 4)));
#line 198 "declarative_user.m"
        MR_Word mdb__declarative_user__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 5)));
#line 198 "declarative_user.m"
        MR_Word mdb__declarative_user__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)));
#line 198 "declarative_user.m"
        MR_Word mdb__declarative_user__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));
#line 198 "declarative_user.m"
        MR_Word mdb__declarative_user__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 2)));
#line 198 "declarative_user.m"
        MR_Word mdb__declarative_user__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 3)));
#line 198 "declarative_user.m"
        MR_Word mdb__declarative_user__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 4)));
#line 198 "declarative_user.m"
        MR_Word mdb__declarative_user__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 5)));
#line 198 "declarative_user.m"
        MR_Word mdb__declarative_user__V_16_16;

#line 198 "declarative_user.m"
        {
#line 198 "declarative_user.m"
          mercury__io____Compare____input_stream_0_0(&mdb__declarative_user__V_16_16, mdb__declarative_user__V_4_4, mdb__declarative_user__V_10_10);
        }
#line 3866 "mdb.declarative_user.c"
        mdb__declarative_user__succeeded = (mdb__declarative_user__V_16_16 == (MR_Integer) 0);
#line 198 "declarative_user.m"
        mdb__declarative_user__succeeded = !(mdb__declarative_user__succeeded);
#line 198 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 198 "declarative_user.m"
          *mdb__declarative_user__HeadVar__1_1 = mdb__declarative_user__V_16_16;
#line 198 "declarative_user.m"
        else
#line 198 "declarative_user.m"
          {
#line 198 "declarative_user.m"
            MR_Word mdb__declarative_user__V_17_17;

#line 198 "declarative_user.m"
            {
#line 198 "declarative_user.m"
              mercury__io____Compare____output_stream_0_0(&mdb__declarative_user__V_17_17, mdb__declarative_user__V_5_5, mdb__declarative_user__V_11_11);
            }
#line 3886 "mdb.declarative_user.c"
            mdb__declarative_user__succeeded = (mdb__declarative_user__V_17_17 == (MR_Integer) 0);
#line 198 "declarative_user.m"
            mdb__declarative_user__succeeded = !(mdb__declarative_user__succeeded);
#line 198 "declarative_user.m"
            if (mdb__declarative_user__succeeded)
#line 198 "declarative_user.m"
              *mdb__declarative_user__HeadVar__1_1 = mdb__declarative_user__V_17_17;
#line 198 "declarative_user.m"
            else
#line 198 "declarative_user.m"
              {
#line 198 "declarative_user.m"
                MR_Word mdb__declarative_user__V_18_18;

#line 198 "declarative_user.m"
                {
#line 198 "declarative_user.m"
                  mdb__browser_info____Compare____browser_persistent_state_0_0(&mdb__declarative_user__V_18_18, mdb__declarative_user__V_6_6, mdb__declarative_user__V_12_12);
                }
#line 3906 "mdb.declarative_user.c"
                mdb__declarative_user__succeeded = (mdb__declarative_user__V_18_18 == (MR_Integer) 0);
#line 198 "declarative_user.m"
                mdb__declarative_user__succeeded = !(mdb__declarative_user__succeeded);
#line 198 "declarative_user.m"
                if (mdb__declarative_user__succeeded)
#line 198 "declarative_user.m"
                  *mdb__declarative_user__HeadVar__1_1 = mdb__declarative_user__V_18_18;
#line 198 "declarative_user.m"
                else
#line 198 "declarative_user.m"
                  {
#line 198 "declarative_user.m"
                    MR_Word mdb__declarative_user__V_19_19;
#line 198 "declarative_user.m"
                    MR_Integer mdb__declarative_user__V_29_29 = (MR_Integer) mdb__declarative_user__V_7_7;
#line 198 "declarative_user.m"
                    MR_Integer mdb__declarative_user__V_30_30 = (MR_Integer) mdb__declarative_user__V_13_13;

#line 198 "declarative_user.m"
                    {
#line 198 "declarative_user.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_user__V_19_19, mdb__declarative_user__V_29_29, mdb__declarative_user__V_30_30);
                    }
#line 3930 "mdb.declarative_user.c"
                    mdb__declarative_user__succeeded = (mdb__declarative_user__V_19_19 == (MR_Integer) 0);
#line 198 "declarative_user.m"
                    mdb__declarative_user__succeeded = !(mdb__declarative_user__succeeded);
#line 198 "declarative_user.m"
                    if (mdb__declarative_user__succeeded)
#line 198 "declarative_user.m"
                      *mdb__declarative_user__HeadVar__1_1 = mdb__declarative_user__V_19_19;
#line 198 "declarative_user.m"
                    else
#line 198 "declarative_user.m"
                      {
#line 198 "declarative_user.m"
                        MR_Word mdb__declarative_user__V_20_20;

#line 198 "declarative_user.m"
                        {
#line 198 "declarative_user.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &mdb__help__mdb__help__type_ctor_info_system_0, &mdb__declarative_user__V_20_20, ((MR_Box) (mdb__declarative_user__V_8_8)), ((MR_Box) (mdb__declarative_user__V_14_14)));
                        }
#line 3950 "mdb.declarative_user.c"
                        mdb__declarative_user__succeeded = (mdb__declarative_user__V_20_20 == (MR_Integer) 0);
#line 198 "declarative_user.m"
                        mdb__declarative_user__succeeded = !(mdb__declarative_user__succeeded);
#line 198 "declarative_user.m"
                        if (mdb__declarative_user__succeeded)
#line 198 "declarative_user.m"
                          *mdb__declarative_user__HeadVar__1_1 = mdb__declarative_user__V_20_20;
#line 198 "declarative_user.m"
                        else
#line 198 "declarative_user.m"
                          {
#line 198 "declarative_user.m"
                            MR_Integer mdb__declarative_user__V_31_31 = (MR_Integer) mdb__declarative_user__V_9_9;
#line 198 "declarative_user.m"
                            MR_Integer mdb__declarative_user__V_32_32 = (MR_Integer) mdb__declarative_user__V_15_15;

#line 198 "declarative_user.m"
                            {
#line 198 "declarative_user.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_user__HeadVar__1_1, mdb__declarative_user__V_31_31, mdb__declarative_user__V_32_32);
#line 198 "declarative_user.m"
                              return;
                            }
#line 198 "declarative_user.m"
                          }
#line 198 "declarative_user.m"
                      }
#line 198 "declarative_user.m"
                  }
#line 198 "declarative_user.m"
              }
#line 198 "declarative_user.m"
          }
#line 198 "declarative_user.m"
      }
#line 198 "declarative_user.m"
  }
#line 198 "declarative_user.m"
}

#line 198 "declarative_user.m"
MR_bool MR_CALL 
mdb__declarative_user____Unify____user_state_0_0(
#line 198 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 198 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_2)
#line 198 "declarative_user.m"
{
#line 198 "declarative_user.m"
  {
#line 198 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 198 "declarative_user.m"
    MR_Integer mdb__declarative_user__CastX_15 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 198 "declarative_user.m"
    MR_Integer mdb__declarative_user__CastY_16 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 198 "declarative_user.m"
    mdb__declarative_user__succeeded = (mdb__declarative_user__CastX_15 == mdb__declarative_user__CastY_16);
#line 198 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 198 "declarative_user.m"
      mdb__declarative_user__succeeded = MR_TRUE;
#line 198 "declarative_user.m"
    else
#line 198 "declarative_user.m"
      {
#line 198 "declarative_user.m"
        MR_Word mdb__declarative_user__TypeCtorInfo_20_20;
#line 198 "declarative_user.m"
        MR_Word mdb__declarative_user__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
#line 198 "declarative_user.m"
        MR_Word mdb__declarative_user__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 198 "declarative_user.m"
        MR_Word mdb__declarative_user__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 2)));
#line 198 "declarative_user.m"
        MR_Word mdb__declarative_user__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 3)));
#line 198 "declarative_user.m"
        MR_Word mdb__declarative_user__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 4)));
#line 198 "declarative_user.m"
        MR_Word mdb__declarative_user__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 5)));
#line 198 "declarative_user.m"
        MR_Word mdb__declarative_user__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));
#line 198 "declarative_user.m"
        MR_Word mdb__declarative_user__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 198 "declarative_user.m"
        MR_Word mdb__declarative_user__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 2)));
#line 198 "declarative_user.m"
        MR_Word mdb__declarative_user__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 3)));
#line 198 "declarative_user.m"
        MR_Word mdb__declarative_user__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 4)));
#line 198 "declarative_user.m"
        MR_Word mdb__declarative_user__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 5)));

#line 4046 "mdb.declarative_user.c"
        {
#line 4048 "mdb.declarative_user.c"
          mdb__declarative_user__succeeded = mercury__io____Unify____input_stream_0_0(mdb__declarative_user__V_3_3, mdb__declarative_user__V_9_9);
        }
#line 198 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 198 "declarative_user.m"
          {
#line 4055 "mdb.declarative_user.c"
            {
#line 4057 "mdb.declarative_user.c"
              mdb__declarative_user__succeeded = mercury__io____Unify____output_stream_0_0(mdb__declarative_user__V_4_4, mdb__declarative_user__V_10_10);
            }
#line 198 "declarative_user.m"
            if (mdb__declarative_user__succeeded)
#line 198 "declarative_user.m"
              {
#line 4064 "mdb.declarative_user.c"
                {
#line 4066 "mdb.declarative_user.c"
                  mdb__declarative_user__succeeded = mdb__browser_info____Unify____browser_persistent_state_0_0(mdb__declarative_user__V_5_5, mdb__declarative_user__V_11_11);
                }
#line 198 "declarative_user.m"
                if (mdb__declarative_user__succeeded)
#line 198 "declarative_user.m"
                  {
#line 4073 "mdb.declarative_user.c"
                    mdb__declarative_user__succeeded = (mdb__declarative_user__V_6_6 == mdb__declarative_user__V_12_12);
#line 198 "declarative_user.m"
                    if (mdb__declarative_user__succeeded)
#line 198 "declarative_user.m"
                      {
#line 4079 "mdb.declarative_user.c"
                        mdb__declarative_user__TypeCtorInfo_20_20 = (MR_Word) &mdb__help__mdb__help__type_ctor_info_system_0;
#line 4081 "mdb.declarative_user.c"
                        {
#line 4083 "mdb.declarative_user.c"
                          mdb__declarative_user__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_user__TypeCtorInfo_20_20, ((MR_Box) (mdb__declarative_user__V_7_7)), ((MR_Box) (mdb__declarative_user__V_13_13)));
                        }
#line 198 "declarative_user.m"
                        if (mdb__declarative_user__succeeded)
#line 4088 "mdb.declarative_user.c"
                          mdb__declarative_user__succeeded = (mdb__declarative_user__V_8_8 == mdb__declarative_user__V_14_14);
#line 198 "declarative_user.m"
                      }
#line 198 "declarative_user.m"
                  }
#line 198 "declarative_user.m"
              }
#line 198 "declarative_user.m"
          }
#line 198 "declarative_user.m"
      }
#line 198 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 198 "declarative_user.m"
  }
#line 198 "declarative_user.m"
}

#line 55 "declarative_user.m"
void MR_CALL 
mdb__declarative_user____Compare____user_search_mode_0_0(
#line 55 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__1_1,
#line 55 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_2,
#line 55 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__3_3)
#line 55 "declarative_user.m"
{
#line 55 "declarative_user.m"
  {
#line 55 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 55 "declarative_user.m"
    MR_Integer mdb__declarative_user__Cast_HeadVar1_4 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;
#line 55 "declarative_user.m"
    MR_Integer mdb__declarative_user__Cast_HeadVar2_5 = (MR_Integer) mdb__declarative_user__HeadVar__3_3;

#line 55 "declarative_user.m"
    {
#line 55 "declarative_user.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_user__HeadVar__1_1, mdb__declarative_user__Cast_HeadVar1_4, mdb__declarative_user__Cast_HeadVar2_5);
#line 55 "declarative_user.m"
      return;
    }
#line 55 "declarative_user.m"
  }
#line 55 "declarative_user.m"
}

#line 55 "declarative_user.m"
MR_bool MR_CALL 
mdb__declarative_user____Unify____user_search_mode_0_0(
#line 55 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_1,
#line 55 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_2)
#line 55 "declarative_user.m"
{
#line 4148 "mdb.declarative_user.c"
  {
#line 4150 "mdb.declarative_user.c"
    MR_bool mdb__declarative_user__succeeded = (mdb__declarative_user__HeadVar__2_1 == mdb__declarative_user__HeadVar__2_2);

#line 4153 "mdb.declarative_user.c"
    return mdb__declarative_user__succeeded;
#line 4155 "mdb.declarative_user.c"
  }
#line 55 "declarative_user.m"
}

#line 36 "declarative_user.m"
void MR_CALL 
mdb__declarative_user____Compare____user_response_1_0(
#line 36 "declarative_user.m"
  MR_Word mdb__declarative_user__TypeInfo_for_T_119,
#line 36 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__1_1,
#line 36 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_2,
#line 36 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__3_3)
#line 36 "declarative_user.m"
{
#line 36 "declarative_user.m"
  {
#line 36 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 36 "declarative_user.m"
    MR_Integer mdb__declarative_user__CastX_117 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;
#line 36 "declarative_user.m"
    MR_Integer mdb__declarative_user__CastY_118 = (MR_Integer) mdb__declarative_user__HeadVar__3_3;

#line 36 "declarative_user.m"
    mdb__declarative_user__succeeded = (mdb__declarative_user__CastX_117 == mdb__declarative_user__CastY_118);
#line 36 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 4186 "mdb.declarative_user.c"
      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 0;
#line 36 "declarative_user.m"
    else
#line 36 "declarative_user.m"
      if ((mdb__declarative_user__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 36 "declarative_user.m"
        if ((mdb__declarative_user__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 36 "declarative_user.m"
          *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 0;
#line 36 "declarative_user.m"
        else
#line 36 "declarative_user.m"
          if ((mdb__declarative_user__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 36 "declarative_user.m"
            *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
          else
#line 36 "declarative_user.m"
            if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4206 "mdb.declarative_user.c"
              *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
            else
#line 36 "declarative_user.m"
              if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4212 "mdb.declarative_user.c"
                *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
              else
#line 36 "declarative_user.m"
                if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4218 "mdb.declarative_user.c"
                  *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                else
#line 36 "declarative_user.m"
                  if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4224 "mdb.declarative_user.c"
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                  else
#line 36 "declarative_user.m"
                    if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4230 "mdb.declarative_user.c"
                      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                    else
#line 4234 "mdb.declarative_user.c"
                      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
      else
#line 36 "declarative_user.m"
        if ((mdb__declarative_user__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 36 "declarative_user.m"
          if ((mdb__declarative_user__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 36 "declarative_user.m"
            *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
          else
#line 36 "declarative_user.m"
            if ((mdb__declarative_user__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 36 "declarative_user.m"
              *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 0;
#line 36 "declarative_user.m"
            else
#line 36 "declarative_user.m"
              if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4254 "mdb.declarative_user.c"
                *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
              else
#line 36 "declarative_user.m"
                if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4260 "mdb.declarative_user.c"
                  *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                else
#line 36 "declarative_user.m"
                  if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4266 "mdb.declarative_user.c"
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                  else
#line 36 "declarative_user.m"
                    if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4272 "mdb.declarative_user.c"
                      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                    else
#line 36 "declarative_user.m"
                      if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4278 "mdb.declarative_user.c"
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                      else
#line 4282 "mdb.declarative_user.c"
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
        else
#line 36 "declarative_user.m"
          if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 36 "declarative_user.m"
            {
#line 36 "declarative_user.m"
              MR_Word mdb__declarative_user__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 36 "declarative_user.m"
              MR_Word mdb__declarative_user__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));

#line 36 "declarative_user.m"
              if ((mdb__declarative_user__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4297 "mdb.declarative_user.c"
                *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
              else
#line 36 "declarative_user.m"
                if ((mdb__declarative_user__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4303 "mdb.declarative_user.c"
                  *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                else
#line 36 "declarative_user.m"
                  if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 36 "declarative_user.m"
                    {
#line 36 "declarative_user.m"
                      MR_Word mdb__declarative_user__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)));
#line 36 "declarative_user.m"
                      MR_Word mdb__declarative_user__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));
#line 36 "declarative_user.m"
                      MR_Word mdb__declarative_user__V_8_8;

#line 36 "declarative_user.m"
                      {
#line 36 "declarative_user.m"
                        mdb__declarative_debugger____Compare____decl_question_1_0(mdb__declarative_user__TypeInfo_for_T_119, &mdb__declarative_user__V_8_8, mdb__declarative_user__V_131_131, mdb__declarative_user__V_6_6);
                      }
#line 4323 "mdb.declarative_user.c"
                      mdb__declarative_user__succeeded = (mdb__declarative_user__V_8_8 == (MR_Integer) 0);
#line 36 "declarative_user.m"
                      mdb__declarative_user__succeeded = !(mdb__declarative_user__succeeded);
#line 36 "declarative_user.m"
                      if (mdb__declarative_user__succeeded)
#line 36 "declarative_user.m"
                        *mdb__declarative_user__HeadVar__1_1 = mdb__declarative_user__V_8_8;
#line 36 "declarative_user.m"
                      else
#line 36 "declarative_user.m"
                        {
#line 36 "declarative_user.m"
                          mdb__declarative_debugger____Compare____decl_answer_1_0(mdb__declarative_user__TypeInfo_for_T_119, mdb__declarative_user__HeadVar__1_1, mdb__declarative_user__V_130_130, mdb__declarative_user__V_7_7);
#line 36 "declarative_user.m"
                          return;
                        }
#line 36 "declarative_user.m"
                    }
#line 36 "declarative_user.m"
                  else
#line 36 "declarative_user.m"
                    if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4346 "mdb.declarative_user.c"
                      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                    else
#line 36 "declarative_user.m"
                      if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4352 "mdb.declarative_user.c"
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                      else
#line 36 "declarative_user.m"
                        if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4358 "mdb.declarative_user.c"
                          *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                        else
#line 36 "declarative_user.m"
                          if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4364 "mdb.declarative_user.c"
                            *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                          else
#line 4368 "mdb.declarative_user.c"
                            *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
            }
#line 36 "declarative_user.m"
          else
#line 36 "declarative_user.m"
            if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 36 "declarative_user.m"
              {
#line 36 "declarative_user.m"
                MR_Word mdb__declarative_user__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));

#line 36 "declarative_user.m"
                if ((mdb__declarative_user__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4383 "mdb.declarative_user.c"
                  *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                else
#line 36 "declarative_user.m"
                  if ((mdb__declarative_user__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4389 "mdb.declarative_user.c"
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                  else
#line 36 "declarative_user.m"
                    if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4395 "mdb.declarative_user.c"
                      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                    else
#line 36 "declarative_user.m"
                      if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 36 "declarative_user.m"
                        {
#line 36 "declarative_user.m"
                          MR_Word mdb__declarative_user__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)));

#line 36 "declarative_user.m"
                          {
#line 36 "declarative_user.m"
                            mdb__declarative_debugger____Compare____decl_question_1_0(mdb__declarative_user__TypeInfo_for_T_119, mdb__declarative_user__HeadVar__1_1, mdb__declarative_user__V_136_136, mdb__declarative_user__V_32_32);
#line 36 "declarative_user.m"
                            return;
                          }
#line 36 "declarative_user.m"
                        }
#line 36 "declarative_user.m"
                      else
#line 36 "declarative_user.m"
                        if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4419 "mdb.declarative_user.c"
                          *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                        else
#line 36 "declarative_user.m"
                          if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4425 "mdb.declarative_user.c"
                            *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                          else
#line 36 "declarative_user.m"
                            if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4431 "mdb.declarative_user.c"
                              *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                            else
#line 4435 "mdb.declarative_user.c"
                              *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
              }
#line 36 "declarative_user.m"
            else
#line 36 "declarative_user.m"
              if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 36 "declarative_user.m"
                {
#line 36 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));

#line 36 "declarative_user.m"
                  if ((mdb__declarative_user__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4450 "mdb.declarative_user.c"
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                  else
#line 36 "declarative_user.m"
                    if ((mdb__declarative_user__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4456 "mdb.declarative_user.c"
                      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                    else
#line 36 "declarative_user.m"
                      if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4462 "mdb.declarative_user.c"
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                      else
#line 36 "declarative_user.m"
                        if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4468 "mdb.declarative_user.c"
                          *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                        else
#line 36 "declarative_user.m"
                          if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 36 "declarative_user.m"
                            {
#line 36 "declarative_user.m"
                              MR_Word mdb__declarative_user__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));
#line 36 "declarative_user.m"
                              MR_Integer mdb__declarative_user__V_137_137 = (MR_Integer) mdb__declarative_user__V_132_132;
#line 36 "declarative_user.m"
                              MR_Integer mdb__declarative_user__V_138_138 = (MR_Integer) mdb__declarative_user__V_83_83;

#line 36 "declarative_user.m"
                              {
#line 36 "declarative_user.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_user__HeadVar__1_1, mdb__declarative_user__V_137_137, mdb__declarative_user__V_138_138);
#line 36 "declarative_user.m"
                                return;
                              }
#line 36 "declarative_user.m"
                            }
#line 36 "declarative_user.m"
                          else
#line 36 "declarative_user.m"
                            if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4496 "mdb.declarative_user.c"
                              *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                            else
#line 36 "declarative_user.m"
                              if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4502 "mdb.declarative_user.c"
                                *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                              else
#line 4506 "mdb.declarative_user.c"
                                *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                }
#line 36 "declarative_user.m"
              else
#line 36 "declarative_user.m"
                if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 36 "declarative_user.m"
                  {
#line 36 "declarative_user.m"
                    MR_Box mdb__declarative_user__V_133_133 = (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1));

#line 36 "declarative_user.m"
                    if ((mdb__declarative_user__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4521 "mdb.declarative_user.c"
                      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                    else
#line 36 "declarative_user.m"
                      if ((mdb__declarative_user__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4527 "mdb.declarative_user.c"
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                      else
#line 36 "declarative_user.m"
                        if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4533 "mdb.declarative_user.c"
                          *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                        else
#line 36 "declarative_user.m"
                          if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4539 "mdb.declarative_user.c"
                            *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                          else
#line 36 "declarative_user.m"
                            if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4545 "mdb.declarative_user.c"
                              *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                            else
#line 36 "declarative_user.m"
                              if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 36 "declarative_user.m"
                                {
#line 36 "declarative_user.m"
                                  MR_Box mdb__declarative_user__V_108_108 = (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1));

#line 36 "declarative_user.m"
                                  {
#line 36 "declarative_user.m"
                                    mercury__builtin__compare_3_p_0(mdb__declarative_user__TypeInfo_for_T_119, mdb__declarative_user__HeadVar__1_1, mdb__declarative_user__V_133_133, mdb__declarative_user__V_108_108);
#line 36 "declarative_user.m"
                                    return;
                                  }
#line 36 "declarative_user.m"
                                }
#line 36 "declarative_user.m"
                              else
#line 36 "declarative_user.m"
                                if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4569 "mdb.declarative_user.c"
                                  *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                                else
#line 4573 "mdb.declarative_user.c"
                                  *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                  }
#line 36 "declarative_user.m"
                else
#line 36 "declarative_user.m"
                  if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 36 "declarative_user.m"
                    {
#line 36 "declarative_user.m"
                      MR_Word mdb__declarative_user__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));

#line 36 "declarative_user.m"
                      if ((mdb__declarative_user__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4588 "mdb.declarative_user.c"
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                      else
#line 36 "declarative_user.m"
                        if ((mdb__declarative_user__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4594 "mdb.declarative_user.c"
                          *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                        else
#line 36 "declarative_user.m"
                          if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4600 "mdb.declarative_user.c"
                            *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                          else
#line 36 "declarative_user.m"
                            if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4606 "mdb.declarative_user.c"
                              *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                            else
#line 36 "declarative_user.m"
                              if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4612 "mdb.declarative_user.c"
                                *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                              else
#line 36 "declarative_user.m"
                                if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4618 "mdb.declarative_user.c"
                                  *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                                else
#line 36 "declarative_user.m"
                                  if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 36 "declarative_user.m"
                                    {
#line 36 "declarative_user.m"
                                      MR_Word mdb__declarative_user__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));

#line 36 "declarative_user.m"
                                      {
#line 36 "declarative_user.m"
                                        mercury__io____Compare____output_stream_0_0(mdb__declarative_user__HeadVar__1_1, mdb__declarative_user__V_134_134, mdb__declarative_user__V_66_66);
#line 36 "declarative_user.m"
                                        return;
                                      }
#line 36 "declarative_user.m"
                                    }
#line 36 "declarative_user.m"
                                  else
#line 4640 "mdb.declarative_user.c"
                                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                    }
#line 36 "declarative_user.m"
                  else
#line 36 "declarative_user.m"
                    {
#line 36 "declarative_user.m"
                      MR_Word mdb__declarative_user__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));

#line 36 "declarative_user.m"
                      if ((mdb__declarative_user__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4653 "mdb.declarative_user.c"
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                      else
#line 36 "declarative_user.m"
                        if ((mdb__declarative_user__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4659 "mdb.declarative_user.c"
                          *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                        else
#line 36 "declarative_user.m"
                          if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4665 "mdb.declarative_user.c"
                            *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                          else
#line 36 "declarative_user.m"
                            if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4671 "mdb.declarative_user.c"
                              *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                            else
#line 36 "declarative_user.m"
                              if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4677 "mdb.declarative_user.c"
                                *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                              else
#line 36 "declarative_user.m"
                                if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4683 "mdb.declarative_user.c"
                                  *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                                else
#line 36 "declarative_user.m"
                                  if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4689 "mdb.declarative_user.c"
                                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                                  else
#line 36 "declarative_user.m"
                                    {
#line 36 "declarative_user.m"
                                      MR_Word mdb__declarative_user__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));

#line 36 "declarative_user.m"
                                      {
#line 36 "declarative_user.m"
                                        mdb__declarative_debugger____Compare____decl_question_1_0(mdb__declarative_user__TypeInfo_for_T_119, mdb__declarative_user__HeadVar__1_1, mdb__declarative_user__V_135_135, mdb__declarative_user__V_49_49);
#line 36 "declarative_user.m"
                                        return;
                                      }
#line 36 "declarative_user.m"
                                    }
#line 36 "declarative_user.m"
                    }
#line 36 "declarative_user.m"
  }
#line 36 "declarative_user.m"
}

#line 36 "declarative_user.m"
MR_bool MR_CALL 
mdb__declarative_user____Unify____user_response_1_0(
#line 36 "declarative_user.m"
  MR_Word mdb__declarative_user__TypeInfo_for_T_23,
#line 36 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 36 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_2)
#line 36 "declarative_user.m"
{
#line 36 "declarative_user.m"
  {
#line 36 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 36 "declarative_user.m"
    MR_Integer mdb__declarative_user__CastX_21 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 36 "declarative_user.m"
    MR_Integer mdb__declarative_user__CastY_22 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 36 "declarative_user.m"
    mdb__declarative_user__succeeded = (mdb__declarative_user__CastX_21 == mdb__declarative_user__CastY_22);
#line 36 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 36 "declarative_user.m"
      mdb__declarative_user__succeeded = MR_TRUE;
#line 36 "declarative_user.m"
    else
#line 36 "declarative_user.m"
      if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 36 "declarative_user.m"
        {
#line 36 "declarative_user.m"
          MR_Integer mdb__declarative_user__CastX_19 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 36 "declarative_user.m"
          MR_Integer mdb__declarative_user__CastY_20 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 36 "declarative_user.m"
          mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_20 == mdb__declarative_user__CastX_19);
#line 36 "declarative_user.m"
        }
#line 36 "declarative_user.m"
      else
#line 36 "declarative_user.m"
        if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 36 "declarative_user.m"
          {
#line 36 "declarative_user.m"
            MR_Integer mdb__declarative_user__CastX_15 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 36 "declarative_user.m"
            MR_Integer mdb__declarative_user__CastY_16 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 36 "declarative_user.m"
            mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_16 == mdb__declarative_user__CastX_15);
#line 36 "declarative_user.m"
          }
#line 36 "declarative_user.m"
        else
#line 36 "declarative_user.m"
          if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 36 "declarative_user.m"
            {
#line 36 "declarative_user.m"
              MR_Word mdb__declarative_user__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
#line 36 "declarative_user.m"
              MR_Word mdb__declarative_user__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 36 "declarative_user.m"
              MR_Word mdb__declarative_user__V_5_5;
#line 36 "declarative_user.m"
              MR_Word mdb__declarative_user__V_6_6;

#line 36 "declarative_user.m"
              mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 36 "declarative_user.m"
              if (mdb__declarative_user__succeeded)
#line 36 "declarative_user.m"
                {
#line 36 "declarative_user.m"
                  mdb__declarative_user__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));
#line 36 "declarative_user.m"
                  mdb__declarative_user__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 4795 "mdb.declarative_user.c"
                  {
#line 4797 "mdb.declarative_user.c"
                    mdb__declarative_user__succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(mdb__declarative_user__TypeInfo_for_T_23, mdb__declarative_user__V_3_3, mdb__declarative_user__V_5_5);
                  }
#line 36 "declarative_user.m"
                  if (mdb__declarative_user__succeeded)
#line 4802 "mdb.declarative_user.c"
                    {
#line 4804 "mdb.declarative_user.c"
                      return mdb__declarative_user__succeeded = mdb__declarative_debugger____Unify____decl_answer_1_0(mdb__declarative_user__TypeInfo_for_T_23, mdb__declarative_user__V_4_4, mdb__declarative_user__V_6_6);
                    }
#line 36 "declarative_user.m"
                }
#line 36 "declarative_user.m"
            }
#line 36 "declarative_user.m"
          else
#line 36 "declarative_user.m"
            if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 36 "declarative_user.m"
              {
#line 36 "declarative_user.m"
                MR_Word mdb__declarative_user__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
#line 36 "declarative_user.m"
                MR_Word mdb__declarative_user__V_8_8;

#line 36 "declarative_user.m"
                mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 36 "declarative_user.m"
                if (mdb__declarative_user__succeeded)
#line 36 "declarative_user.m"
                  {
#line 36 "declarative_user.m"
                    mdb__declarative_user__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));
#line 4830 "mdb.declarative_user.c"
                    {
#line 4832 "mdb.declarative_user.c"
                      return mdb__declarative_user__succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(mdb__declarative_user__TypeInfo_for_T_23, mdb__declarative_user__V_7_7, mdb__declarative_user__V_8_8);
                    }
#line 36 "declarative_user.m"
                  }
#line 36 "declarative_user.m"
              }
#line 36 "declarative_user.m"
            else
#line 36 "declarative_user.m"
              if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 36 "declarative_user.m"
                {
#line 36 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 36 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_14_14;

#line 36 "declarative_user.m"
                  mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 36 "declarative_user.m"
                  if (mdb__declarative_user__succeeded)
#line 36 "declarative_user.m"
                    {
#line 36 "declarative_user.m"
                      mdb__declarative_user__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 4858 "mdb.declarative_user.c"
                      mdb__declarative_user__succeeded = (mdb__declarative_user__V_13_13 == mdb__declarative_user__V_14_14);
#line 36 "declarative_user.m"
                    }
#line 36 "declarative_user.m"
                }
#line 36 "declarative_user.m"
              else
#line 36 "declarative_user.m"
                if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 36 "declarative_user.m"
                  {
#line 36 "declarative_user.m"
                    MR_Box mdb__declarative_user__V_17_17 = (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1));
#line 36 "declarative_user.m"
                    MR_Box mdb__declarative_user__V_18_18;

#line 36 "declarative_user.m"
                    mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 36 "declarative_user.m"
                    if (mdb__declarative_user__succeeded)
#line 36 "declarative_user.m"
                      {
#line 36 "declarative_user.m"
                        mdb__declarative_user__V_18_18 = (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1));
#line 4883 "mdb.declarative_user.c"
                        {
#line 4885 "mdb.declarative_user.c"
                          return mdb__declarative_user__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_user__TypeInfo_for_T_23, mdb__declarative_user__V_17_17, mdb__declarative_user__V_18_18);
                        }
#line 36 "declarative_user.m"
                      }
#line 36 "declarative_user.m"
                  }
#line 36 "declarative_user.m"
                else
#line 36 "declarative_user.m"
                  if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 36 "declarative_user.m"
                    {
#line 36 "declarative_user.m"
                      MR_Word mdb__declarative_user__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 36 "declarative_user.m"
                      MR_Word mdb__declarative_user__V_12_12;

#line 36 "declarative_user.m"
                      mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 36 "declarative_user.m"
                      if (mdb__declarative_user__succeeded)
#line 36 "declarative_user.m"
                        {
#line 36 "declarative_user.m"
                          mdb__declarative_user__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 4911 "mdb.declarative_user.c"
                          {
#line 4913 "mdb.declarative_user.c"
                            return mdb__declarative_user__succeeded = mercury__io____Unify____output_stream_0_0(mdb__declarative_user__V_11_11, mdb__declarative_user__V_12_12);
                          }
#line 36 "declarative_user.m"
                        }
#line 36 "declarative_user.m"
                    }
#line 36 "declarative_user.m"
                  else
#line 36 "declarative_user.m"
                    {
#line 36 "declarative_user.m"
                      MR_Word mdb__declarative_user__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 36 "declarative_user.m"
                      MR_Word mdb__declarative_user__V_10_10;

#line 36 "declarative_user.m"
                      mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 36 "declarative_user.m"
                      if (mdb__declarative_user__succeeded)
#line 36 "declarative_user.m"
                        {
#line 36 "declarative_user.m"
                          mdb__declarative_user__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 4937 "mdb.declarative_user.c"
                          {
#line 4939 "mdb.declarative_user.c"
                            return mdb__declarative_user__succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(mdb__declarative_user__TypeInfo_for_T_23, mdb__declarative_user__V_9_9, mdb__declarative_user__V_10_10);
                          }
#line 36 "declarative_user.m"
                        }
#line 36 "declarative_user.m"
                    }
#line 36 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 36 "declarative_user.m"
  }
#line 36 "declarative_user.m"
}

#line 32 "declarative_user.m"
void MR_CALL 
mdb__declarative_user____Compare____user_question_1_0(
#line 32 "declarative_user.m"
  MR_Word mdb__declarative_user__TypeInfo_for_T_19,
#line 32 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__1_1,
#line 32 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_2,
#line 32 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__3_3)
#line 32 "declarative_user.m"
{
#line 32 "declarative_user.m"
  {
#line 32 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 32 "declarative_user.m"
    MR_Integer mdb__declarative_user__CastX_17 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;
#line 32 "declarative_user.m"
    MR_Integer mdb__declarative_user__CastY_18 = (MR_Integer) mdb__declarative_user__HeadVar__3_3;

#line 32 "declarative_user.m"
    mdb__declarative_user__succeeded = (mdb__declarative_user__CastX_17 == mdb__declarative_user__CastY_18);
#line 32 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 4979 "mdb.declarative_user.c"
      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 0;
#line 32 "declarative_user.m"
    else
#line 32 "declarative_user.m"
      if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 32 "declarative_user.m"
        {
#line 32 "declarative_user.m"
          MR_Word mdb__declarative_user__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));

#line 32 "declarative_user.m"
          if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 32 "declarative_user.m"
            {
#line 32 "declarative_user.m"
              MR_Word mdb__declarative_user__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)));

#line 32 "declarative_user.m"
              {
#line 32 "declarative_user.m"
                mdb__declarative_debugger____Compare____decl_question_1_0(mdb__declarative_user__TypeInfo_for_T_19, mdb__declarative_user__HeadVar__1_1, mdb__declarative_user__V_25_25, mdb__declarative_user__V_5_5);
#line 32 "declarative_user.m"
                return;
              }
#line 32 "declarative_user.m"
            }
#line 32 "declarative_user.m"
          else
#line 5008 "mdb.declarative_user.c"
            *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 32 "declarative_user.m"
        }
#line 32 "declarative_user.m"
      else
#line 32 "declarative_user.m"
        {
#line 32 "declarative_user.m"
          MR_Word mdb__declarative_user__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 32 "declarative_user.m"
          MR_Word mdb__declarative_user__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));

#line 32 "declarative_user.m"
          if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5023 "mdb.declarative_user.c"
            *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 32 "declarative_user.m"
          else
#line 32 "declarative_user.m"
            {
#line 32 "declarative_user.m"
              MR_Word mdb__declarative_user__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)));
#line 32 "declarative_user.m"
              MR_Word mdb__declarative_user__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));
#line 32 "declarative_user.m"
              MR_Word mdb__declarative_user__V_16_16;

#line 32 "declarative_user.m"
              {
#line 32 "declarative_user.m"
                mdb__declarative_debugger____Compare____decl_question_1_0(mdb__declarative_user__TypeInfo_for_T_19, &mdb__declarative_user__V_16_16, mdb__declarative_user__V_27_27, mdb__declarative_user__V_14_14);
              }
#line 5041 "mdb.declarative_user.c"
              mdb__declarative_user__succeeded = (mdb__declarative_user__V_16_16 == (MR_Integer) 0);
#line 32 "declarative_user.m"
              mdb__declarative_user__succeeded = !(mdb__declarative_user__succeeded);
#line 32 "declarative_user.m"
              if (mdb__declarative_user__succeeded)
#line 32 "declarative_user.m"
                *mdb__declarative_user__HeadVar__1_1 = mdb__declarative_user__V_16_16;
#line 32 "declarative_user.m"
              else
#line 32 "declarative_user.m"
                {
#line 32 "declarative_user.m"
                  MR_Integer mdb__declarative_user__V_28_28 = (MR_Integer) mdb__declarative_user__V_26_26;
#line 32 "declarative_user.m"
                  MR_Integer mdb__declarative_user__V_29_29 = (MR_Integer) mdb__declarative_user__V_15_15;

#line 32 "declarative_user.m"
                  {
#line 32 "declarative_user.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_user__HeadVar__1_1, mdb__declarative_user__V_28_28, mdb__declarative_user__V_29_29);
#line 32 "declarative_user.m"
                    return;
                  }
#line 32 "declarative_user.m"
                }
#line 32 "declarative_user.m"
            }
#line 32 "declarative_user.m"
        }
#line 32 "declarative_user.m"
  }
#line 32 "declarative_user.m"
}

#line 32 "declarative_user.m"
MR_bool MR_CALL 
mdb__declarative_user____Unify____user_question_1_0(
#line 32 "declarative_user.m"
  MR_Word mdb__declarative_user__TypeInfo_for_T_11,
#line 32 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 32 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_2)
#line 32 "declarative_user.m"
{
#line 32 "declarative_user.m"
  {
#line 32 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 32 "declarative_user.m"
    MR_Integer mdb__declarative_user__CastX_9 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 32 "declarative_user.m"
    MR_Integer mdb__declarative_user__CastY_10 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 32 "declarative_user.m"
    mdb__declarative_user__succeeded = (mdb__declarative_user__CastX_9 == mdb__declarative_user__CastY_10);
#line 32 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 32 "declarative_user.m"
      mdb__declarative_user__succeeded = MR_TRUE;
#line 32 "declarative_user.m"
    else
#line 32 "declarative_user.m"
      if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 32 "declarative_user.m"
        {
#line 32 "declarative_user.m"
          MR_Word mdb__declarative_user__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
#line 32 "declarative_user.m"
          MR_Word mdb__declarative_user__V_4_4;

#line 32 "declarative_user.m"
          mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 32 "declarative_user.m"
          if (mdb__declarative_user__succeeded)
#line 32 "declarative_user.m"
            {
#line 32 "declarative_user.m"
              mdb__declarative_user__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));
#line 5121 "mdb.declarative_user.c"
              {
#line 5123 "mdb.declarative_user.c"
                return mdb__declarative_user__succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(mdb__declarative_user__TypeInfo_for_T_11, mdb__declarative_user__V_3_3, mdb__declarative_user__V_4_4);
              }
#line 32 "declarative_user.m"
            }
#line 32 "declarative_user.m"
        }
#line 32 "declarative_user.m"
      else
#line 32 "declarative_user.m"
        {
#line 32 "declarative_user.m"
          MR_Word mdb__declarative_user__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
#line 32 "declarative_user.m"
          MR_Word mdb__declarative_user__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 32 "declarative_user.m"
          MR_Word mdb__declarative_user__V_7_7;
#line 32 "declarative_user.m"
          MR_Word mdb__declarative_user__V_8_8;

#line 32 "declarative_user.m"
          mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 32 "declarative_user.m"
          if (mdb__declarative_user__succeeded)
#line 32 "declarative_user.m"
            {
#line 32 "declarative_user.m"
              mdb__declarative_user__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));
#line 32 "declarative_user.m"
              mdb__declarative_user__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 5153 "mdb.declarative_user.c"
              {
#line 5155 "mdb.declarative_user.c"
                mdb__declarative_user__succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(mdb__declarative_user__TypeInfo_for_T_11, mdb__declarative_user__V_5_5, mdb__declarative_user__V_7_7);
              }
#line 32 "declarative_user.m"
              if (mdb__declarative_user__succeeded)
#line 5160 "mdb.declarative_user.c"
                mdb__declarative_user__succeeded = (mdb__declarative_user__V_6_6 == mdb__declarative_user__V_8_8);
#line 32 "declarative_user.m"
            }
#line 32 "declarative_user.m"
        }
#line 32 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 32 "declarative_user.m"
  }
#line 32 "declarative_user.m"
}

#line 132 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user____Compare____user_command_0_0(
#line 132 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__1_1,
#line 132 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_2,
#line 132 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__3_3)
#line 132 "declarative_user.m"
{
#line 132 "declarative_user.m"
  {
#line 132 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 132 "declarative_user.m"
    MR_Integer mdb__declarative_user__CastX_29 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;
#line 132 "declarative_user.m"
    MR_Integer mdb__declarative_user__CastY_30 = (MR_Integer) mdb__declarative_user__HeadVar__3_3;

#line 132 "declarative_user.m"
    mdb__declarative_user__succeeded = (mdb__declarative_user__CastX_29 == mdb__declarative_user__CastY_30);
#line 132 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 5197 "mdb.declarative_user.c"
      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 0;
#line 132 "declarative_user.m"
    else
#line 132 "declarative_user.m"
      {
#line 132 "declarative_user.m"
        MR_Integer mdb__declarative_user__V_4_4;
#line 132 "declarative_user.m"
        MR_Integer mdb__declarative_user__V_5_5;

#line 132 "declarative_user.m"
        {
#line 132 "declarative_user.m"
          mdb__declarative_user____Index____user_command_0_0(mdb__declarative_user__HeadVar__2_2, &mdb__declarative_user__V_4_4);
        }
#line 132 "declarative_user.m"
        {
#line 132 "declarative_user.m"
          mdb__declarative_user____Index____user_command_0_0(mdb__declarative_user__HeadVar__3_3, &mdb__declarative_user__V_5_5);
        }
#line 132 "declarative_user.m"
        mdb__declarative_user__succeeded = (mdb__declarative_user__V_4_4 < mdb__declarative_user__V_5_5);
#line 132 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 5222 "mdb.declarative_user.c"
          *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 132 "declarative_user.m"
        else
#line 132 "declarative_user.m"
          {
#line 132 "declarative_user.m"
            mdb__declarative_user__succeeded = (mdb__declarative_user__V_4_4 > mdb__declarative_user__V_5_5);
#line 132 "declarative_user.m"
            if (mdb__declarative_user__succeeded)
#line 5232 "mdb.declarative_user.c"
              *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 132 "declarative_user.m"
            else
#line 132 "declarative_user.m"
              {
#line 132 "declarative_user.m"
                MR_Word mdb__declarative_user__V_6_6;

#line 132 "declarative_user.m"
                if ((mdb__declarative_user__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 132 "declarative_user.m"
                  {
#line 132 "declarative_user.m"
                    mdb__declarative_user__V_6_6 = (MR_Integer) 0;
#line 132 "declarative_user.m"
                    mdb__declarative_user__succeeded = MR_TRUE;
#line 132 "declarative_user.m"
                  }
#line 132 "declarative_user.m"
                else
#line 132 "declarative_user.m"
                  if ((mdb__declarative_user__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 132 "declarative_user.m"
                    {
#line 132 "declarative_user.m"
                      mdb__declarative_user__V_6_6 = (MR_Integer) 0;
#line 132 "declarative_user.m"
                      mdb__declarative_user__succeeded = MR_TRUE;
#line 132 "declarative_user.m"
                    }
#line 132 "declarative_user.m"
                  else
#line 132 "declarative_user.m"
                    if ((mdb__declarative_user__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 132 "declarative_user.m"
                      {
#line 132 "declarative_user.m"
                        mdb__declarative_user__V_6_6 = (MR_Integer) 0;
#line 132 "declarative_user.m"
                        mdb__declarative_user__succeeded = MR_TRUE;
#line 132 "declarative_user.m"
                      }
#line 132 "declarative_user.m"
                    else
#line 132 "declarative_user.m"
                      if ((mdb__declarative_user__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 132 "declarative_user.m"
                        {
#line 132 "declarative_user.m"
                          mdb__declarative_user__V_6_6 = (MR_Integer) 0;
#line 132 "declarative_user.m"
                          mdb__declarative_user__succeeded = MR_TRUE;
#line 132 "declarative_user.m"
                        }
#line 132 "declarative_user.m"
                      else
#line 132 "declarative_user.m"
                        if ((mdb__declarative_user__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 132 "declarative_user.m"
                          {
#line 132 "declarative_user.m"
                            mdb__declarative_user__V_6_6 = (MR_Integer) 0;
#line 132 "declarative_user.m"
                            mdb__declarative_user__succeeded = MR_TRUE;
#line 132 "declarative_user.m"
                          }
#line 132 "declarative_user.m"
                        else
#line 132 "declarative_user.m"
                          if ((mdb__declarative_user__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 132 "declarative_user.m"
                            {
#line 132 "declarative_user.m"
                              mdb__declarative_user__V_6_6 = (MR_Integer) 0;
#line 132 "declarative_user.m"
                              mdb__declarative_user__succeeded = MR_TRUE;
#line 132 "declarative_user.m"
                            }
#line 132 "declarative_user.m"
                          else
#line 132 "declarative_user.m"
                            if ((mdb__declarative_user__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 132 "declarative_user.m"
                              {
#line 132 "declarative_user.m"
                                mdb__declarative_user__V_6_6 = (MR_Integer) 0;
#line 132 "declarative_user.m"
                                mdb__declarative_user__succeeded = MR_TRUE;
#line 132 "declarative_user.m"
                              }
#line 132 "declarative_user.m"
                            else
#line 132 "declarative_user.m"
                              if ((mdb__declarative_user__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 132 "declarative_user.m"
                                {
#line 132 "declarative_user.m"
                                  mdb__declarative_user__V_6_6 = (MR_Integer) 0;
#line 132 "declarative_user.m"
                                  mdb__declarative_user__succeeded = MR_TRUE;
#line 132 "declarative_user.m"
                                }
#line 132 "declarative_user.m"
                              else
#line 132 "declarative_user.m"
                                if ((mdb__declarative_user__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 132 "declarative_user.m"
                                  {
#line 132 "declarative_user.m"
                                    mdb__declarative_user__V_6_6 = (MR_Integer) 0;
#line 132 "declarative_user.m"
                                    mdb__declarative_user__succeeded = MR_TRUE;
#line 132 "declarative_user.m"
                                  }
#line 132 "declarative_user.m"
                                else
#line 132 "declarative_user.m"
                                  if ((mdb__declarative_user__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 132 "declarative_user.m"
                                    {
#line 132 "declarative_user.m"
                                      mdb__declarative_user__V_6_6 = (MR_Integer) 0;
#line 132 "declarative_user.m"
                                      mdb__declarative_user__succeeded = MR_TRUE;
#line 132 "declarative_user.m"
                                    }
#line 132 "declarative_user.m"
                                  else
#line 132 "declarative_user.m"
                                    if ((mdb__declarative_user__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 132 "declarative_user.m"
                                      {
#line 132 "declarative_user.m"
                                        mdb__declarative_user__V_6_6 = (MR_Integer) 0;
#line 132 "declarative_user.m"
                                        mdb__declarative_user__succeeded = MR_TRUE;
#line 132 "declarative_user.m"
                                      }
#line 132 "declarative_user.m"
                                    else
#line 132 "declarative_user.m"
                                      if ((mdb__declarative_user__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 132 "declarative_user.m"
                                        {
#line 132 "declarative_user.m"
                                          mdb__declarative_user__V_6_6 = (MR_Integer) 0;
#line 132 "declarative_user.m"
                                          mdb__declarative_user__succeeded = MR_TRUE;
#line 132 "declarative_user.m"
                                        }
#line 132 "declarative_user.m"
                                      else
#line 132 "declarative_user.m"
                                        if ((mdb__declarative_user__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 132 "declarative_user.m"
                                          {
#line 132 "declarative_user.m"
                                            mdb__declarative_user__V_6_6 = (MR_Integer) 0;
#line 132 "declarative_user.m"
                                            mdb__declarative_user__succeeded = MR_TRUE;
#line 132 "declarative_user.m"
                                          }
#line 132 "declarative_user.m"
                                        else
#line 132 "declarative_user.m"
                                          if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 132 "declarative_user.m"
                                            {
#line 132 "declarative_user.m"
                                              MR_Word mdb__declarative_user__TypeInfo_31_31;
#line 132 "declarative_user.m"
                                              MR_Word mdb__declarative_user__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));
#line 132 "declarative_user.m"
                                              MR_Word mdb__declarative_user__V_8_8;

#line 132 "declarative_user.m"
                                              mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 132 "declarative_user.m"
                                              if (mdb__declarative_user__succeeded)
#line 132 "declarative_user.m"
                                                {
#line 132 "declarative_user.m"
                                                  mdb__declarative_user__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)));
#line 5416 "mdb.declarative_user.c"
                                                  mdb__declarative_user__TypeInfo_31_31 = (MR_Word) &mdb__declarative_user_scalar_common_1[0];
#line 132 "declarative_user.m"
                                                  {
#line 132 "declarative_user.m"
                                                    mercury__builtin__compare_3_p_0(mdb__declarative_user__TypeInfo_31_31, &mdb__declarative_user__V_6_6, ((MR_Box) (mdb__declarative_user__V_7_7)), ((MR_Box) (mdb__declarative_user__V_8_8)));
                                                  }
#line 132 "declarative_user.m"
                                                  mdb__declarative_user__succeeded = MR_TRUE;
#line 132 "declarative_user.m"
                                                }
#line 132 "declarative_user.m"
                                            }
#line 132 "declarative_user.m"
                                          else
#line 132 "declarative_user.m"
                                            if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 132 "declarative_user.m"
                                              {
#line 132 "declarative_user.m"
                                                MR_Word mdb__declarative_user__TypeInfo_32_32;
#line 132 "declarative_user.m"
                                                MR_Word mdb__declarative_user__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));
#line 132 "declarative_user.m"
                                                MR_Word mdb__declarative_user__V_10_10;

#line 132 "declarative_user.m"
                                                mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 132 "declarative_user.m"
                                                if (mdb__declarative_user__succeeded)
#line 132 "declarative_user.m"
                                                  {
#line 132 "declarative_user.m"
                                                    mdb__declarative_user__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)));
#line 5450 "mdb.declarative_user.c"
                                                    mdb__declarative_user__TypeInfo_32_32 = (MR_Word) &mdb__declarative_user_scalar_common_1[0];
#line 132 "declarative_user.m"
                                                    {
#line 132 "declarative_user.m"
                                                      mercury__builtin__compare_3_p_0(mdb__declarative_user__TypeInfo_32_32, &mdb__declarative_user__V_6_6, ((MR_Box) (mdb__declarative_user__V_9_9)), ((MR_Box) (mdb__declarative_user__V_10_10)));
                                                    }
#line 132 "declarative_user.m"
                                                    mdb__declarative_user__succeeded = MR_TRUE;
#line 132 "declarative_user.m"
                                                  }
#line 132 "declarative_user.m"
                                              }
#line 132 "declarative_user.m"
                                            else
#line 132 "declarative_user.m"
                                              if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 132 "declarative_user.m"
                                                {
#line 132 "declarative_user.m"
                                                  MR_Integer mdb__declarative_user__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 132 "declarative_user.m"
                                                  MR_Integer mdb__declarative_user__V_12_12;

#line 132 "declarative_user.m"
                                                  mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 132 "declarative_user.m"
                                                  if (mdb__declarative_user__succeeded)
#line 132 "declarative_user.m"
                                                    {
#line 132 "declarative_user.m"
                                                      mdb__declarative_user__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));
#line 132 "declarative_user.m"
                                                      {
#line 132 "declarative_user.m"
                                                        mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_user__V_6_6, mdb__declarative_user__V_11_11, mdb__declarative_user__V_12_12);
                                                      }
#line 132 "declarative_user.m"
                                                      mdb__declarative_user__succeeded = MR_TRUE;
#line 132 "declarative_user.m"
                                                    }
#line 132 "declarative_user.m"
                                                }
#line 132 "declarative_user.m"
                                              else
#line 132 "declarative_user.m"
                                                if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 132 "declarative_user.m"
                                                  {
#line 132 "declarative_user.m"
                                                    MR_Word mdb__declarative_user__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 132 "declarative_user.m"
                                                    MR_Word mdb__declarative_user__V_26_26;
#line 132 "declarative_user.m"
                                                    MR_Integer mdb__declarative_user__V_41_41;
#line 132 "declarative_user.m"
                                                    MR_Integer mdb__declarative_user__V_42_42;

#line 132 "declarative_user.m"
                                                    mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 132 "declarative_user.m"
                                                    if (mdb__declarative_user__succeeded)
#line 132 "declarative_user.m"
                                                      {
#line 132 "declarative_user.m"
                                                        mdb__declarative_user__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));
#line 132 "declarative_user.m"
                                                        mdb__declarative_user__V_41_41 = (MR_Integer) mdb__declarative_user__V_25_25;
#line 132 "declarative_user.m"
                                                        mdb__declarative_user__V_42_42 = (MR_Integer) mdb__declarative_user__V_26_26;
#line 132 "declarative_user.m"
                                                        {
#line 132 "declarative_user.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_user__V_6_6, mdb__declarative_user__V_41_41, mdb__declarative_user__V_42_42);
                                                        }
#line 132 "declarative_user.m"
                                                        mdb__declarative_user__succeeded = MR_TRUE;
#line 132 "declarative_user.m"
                                                      }
#line 132 "declarative_user.m"
                                                  }
#line 132 "declarative_user.m"
                                                else
#line 132 "declarative_user.m"
                                                  if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 132 "declarative_user.m"
                                                    {
#line 132 "declarative_user.m"
                                                      MR_Word mdb__declarative_user__TypeInfo_40_40;
#line 132 "declarative_user.m"
                                                      MR_Word mdb__declarative_user__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 132 "declarative_user.m"
                                                      MR_Word mdb__declarative_user__V_28_28;

#line 132 "declarative_user.m"
                                                      mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 132 "declarative_user.m"
                                                      if (mdb__declarative_user__succeeded)
#line 132 "declarative_user.m"
                                                        {
#line 132 "declarative_user.m"
                                                          mdb__declarative_user__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));
#line 5552 "mdb.declarative_user.c"
                                                          mdb__declarative_user__TypeInfo_40_40 = (MR_Word) &mdb__declarative_user_scalar_common_1[1];
#line 132 "declarative_user.m"
                                                          {
#line 132 "declarative_user.m"
                                                            mercury__builtin__compare_3_p_0(mdb__declarative_user__TypeInfo_40_40, &mdb__declarative_user__V_6_6, ((MR_Box) (mdb__declarative_user__V_27_27)), ((MR_Box) (mdb__declarative_user__V_28_28)));
                                                          }
#line 132 "declarative_user.m"
                                                          mdb__declarative_user__succeeded = MR_TRUE;
#line 132 "declarative_user.m"
                                                        }
#line 132 "declarative_user.m"
                                                    }
#line 132 "declarative_user.m"
                                                  else
#line 132 "declarative_user.m"
                                                    if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 132 "declarative_user.m"
                                                      {
#line 132 "declarative_user.m"
                                                        MR_Word mdb__declarative_user__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 132 "declarative_user.m"
                                                        MR_Word mdb__declarative_user__V_24_24;

#line 132 "declarative_user.m"
                                                        mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 132 "declarative_user.m"
                                                        if (mdb__declarative_user__succeeded)
#line 132 "declarative_user.m"
                                                          {
#line 132 "declarative_user.m"
                                                            mdb__declarative_user__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));
#line 132 "declarative_user.m"
                                                            {
#line 132 "declarative_user.m"
                                                              mdb__browser_info____Compare____param_cmd_0_0(&mdb__declarative_user__V_6_6, mdb__declarative_user__V_23_23, mdb__declarative_user__V_24_24);
                                                            }
#line 132 "declarative_user.m"
                                                            mdb__declarative_user__succeeded = MR_TRUE;
#line 132 "declarative_user.m"
                                                          }
#line 132 "declarative_user.m"
                                                      }
#line 132 "declarative_user.m"
                                                    else
#line 132 "declarative_user.m"
                                                      if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 132 "declarative_user.m"
                                                        {
#line 132 "declarative_user.m"
                                                          MR_Integer mdb__declarative_user__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 132 "declarative_user.m"
                                                          MR_Integer mdb__declarative_user__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 2)));
#line 132 "declarative_user.m"
                                                          MR_Integer mdb__declarative_user__V_15_15;
#line 132 "declarative_user.m"
                                                          MR_Integer mdb__declarative_user__V_16_16;
#line 132 "declarative_user.m"
                                                          MR_Word mdb__declarative_user__V_17_17;

#line 132 "declarative_user.m"
                                                          mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 132 "declarative_user.m"
                                                          if (mdb__declarative_user__succeeded)
#line 132 "declarative_user.m"
                                                            {
#line 132 "declarative_user.m"
                                                              mdb__declarative_user__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));
#line 132 "declarative_user.m"
                                                              mdb__declarative_user__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 2)));
#line 132 "declarative_user.m"
                                                              {
#line 132 "declarative_user.m"
                                                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_user__V_17_17, mdb__declarative_user__V_13_13, mdb__declarative_user__V_15_15);
                                                              }
#line 5627 "mdb.declarative_user.c"
                                                              mdb__declarative_user__succeeded = (mdb__declarative_user__V_17_17 == (MR_Integer) 0);
#line 132 "declarative_user.m"
                                                              mdb__declarative_user__succeeded = !(mdb__declarative_user__succeeded);
#line 132 "declarative_user.m"
                                                              if (mdb__declarative_user__succeeded)
#line 132 "declarative_user.m"
                                                                mdb__declarative_user__V_6_6 = mdb__declarative_user__V_17_17;
#line 132 "declarative_user.m"
                                                              else
#line 132 "declarative_user.m"
                                                                {
#line 132 "declarative_user.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_user__V_6_6, mdb__declarative_user__V_14_14, mdb__declarative_user__V_16_16);
                                                                }
#line 132 "declarative_user.m"
                                                              mdb__declarative_user__succeeded = MR_TRUE;
#line 132 "declarative_user.m"
                                                            }
#line 132 "declarative_user.m"
                                                        }
#line 132 "declarative_user.m"
                                                      else
#line 132 "declarative_user.m"
                                                        {
#line 132 "declarative_user.m"
                                                          MR_Integer mdb__declarative_user__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 132 "declarative_user.m"
                                                          MR_Integer mdb__declarative_user__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 2)));
#line 132 "declarative_user.m"
                                                          MR_Integer mdb__declarative_user__V_20_20;
#line 132 "declarative_user.m"
                                                          MR_Integer mdb__declarative_user__V_21_21;
#line 132 "declarative_user.m"
                                                          MR_Word mdb__declarative_user__V_22_22;

#line 132 "declarative_user.m"
                                                          mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 132 "declarative_user.m"
                                                          if (mdb__declarative_user__succeeded)
#line 132 "declarative_user.m"
                                                            {
#line 132 "declarative_user.m"
                                                              mdb__declarative_user__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));
#line 132 "declarative_user.m"
                                                              mdb__declarative_user__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 2)));
#line 132 "declarative_user.m"
                                                              {
#line 132 "declarative_user.m"
                                                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_user__V_22_22, mdb__declarative_user__V_18_18, mdb__declarative_user__V_20_20);
                                                              }
#line 5678 "mdb.declarative_user.c"
                                                              mdb__declarative_user__succeeded = (mdb__declarative_user__V_22_22 == (MR_Integer) 0);
#line 132 "declarative_user.m"
                                                              mdb__declarative_user__succeeded = !(mdb__declarative_user__succeeded);
#line 132 "declarative_user.m"
                                                              if (mdb__declarative_user__succeeded)
#line 132 "declarative_user.m"
                                                                mdb__declarative_user__V_6_6 = mdb__declarative_user__V_22_22;
#line 132 "declarative_user.m"
                                                              else
#line 132 "declarative_user.m"
                                                                {
#line 132 "declarative_user.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_user__V_6_6, mdb__declarative_user__V_19_19, mdb__declarative_user__V_21_21);
                                                                }
#line 132 "declarative_user.m"
                                                              mdb__declarative_user__succeeded = MR_TRUE;
#line 132 "declarative_user.m"
                                                            }
#line 132 "declarative_user.m"
                                                        }
#line 132 "declarative_user.m"
                if (mdb__declarative_user__succeeded)
#line 132 "declarative_user.m"
                  *mdb__declarative_user__HeadVar__1_1 = mdb__declarative_user__V_6_6;
#line 132 "declarative_user.m"
                else
#line 132 "declarative_user.m"
                  {
#line 132 "declarative_user.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 132 "declarative_user.m"
                    return;
                  }
#line 132 "declarative_user.m"
              }
#line 132 "declarative_user.m"
          }
#line 132 "declarative_user.m"
      }
#line 132 "declarative_user.m"
  }
#line 132 "declarative_user.m"
}

#line 132 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user____Index____user_command_0_0(
#line 132 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 132 "declarative_user.m"
  MR_Integer * mdb__declarative_user__HeadVar__2_2)
#line 132 "declarative_user.m"
{
#line 132 "declarative_user.m"
  {
#line 132 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;

#line 132 "declarative_user.m"
    if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 5739 "mdb.declarative_user.c"
      *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 15;
#line 132 "declarative_user.m"
    else
#line 132 "declarative_user.m"
      if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 5745 "mdb.declarative_user.c"
        *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 19;
#line 132 "declarative_user.m"
      else
#line 132 "declarative_user.m"
        if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 5751 "mdb.declarative_user.c"
          *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 20;
#line 132 "declarative_user.m"
        else
#line 132 "declarative_user.m"
          if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 5757 "mdb.declarative_user.c"
            *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 2;
#line 132 "declarative_user.m"
          else
#line 132 "declarative_user.m"
            if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 5763 "mdb.declarative_user.c"
              *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 13;
#line 132 "declarative_user.m"
            else
#line 132 "declarative_user.m"
              if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 5769 "mdb.declarative_user.c"
                *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 1;
#line 132 "declarative_user.m"
              else
#line 132 "declarative_user.m"
                if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 5775 "mdb.declarative_user.c"
                  *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 9;
#line 132 "declarative_user.m"
                else
#line 132 "declarative_user.m"
                  if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 5781 "mdb.declarative_user.c"
                    *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 17;
#line 132 "declarative_user.m"
                  else
#line 132 "declarative_user.m"
                    if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 5787 "mdb.declarative_user.c"
                      *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 3;
#line 132 "declarative_user.m"
                    else
#line 132 "declarative_user.m"
                      if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 5793 "mdb.declarative_user.c"
                        *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 12;
#line 132 "declarative_user.m"
                      else
#line 132 "declarative_user.m"
                        if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 5799 "mdb.declarative_user.c"
                          *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 11;
#line 132 "declarative_user.m"
                        else
#line 132 "declarative_user.m"
                          if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 5805 "mdb.declarative_user.c"
                            *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 14;
#line 132 "declarative_user.m"
                          else
#line 132 "declarative_user.m"
                            if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5811 "mdb.declarative_user.c"
                              *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 0;
#line 132 "declarative_user.m"
                            else
#line 132 "declarative_user.m"
                              if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 5817 "mdb.declarative_user.c"
                                *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 4;
#line 132 "declarative_user.m"
                              else
#line 132 "declarative_user.m"
                                if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 5823 "mdb.declarative_user.c"
                                  *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 5;
#line 132 "declarative_user.m"
                                else
#line 132 "declarative_user.m"
                                  if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 5829 "mdb.declarative_user.c"
                                    *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 6;
#line 132 "declarative_user.m"
                                  else
#line 132 "declarative_user.m"
                                    if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 5835 "mdb.declarative_user.c"
                                      *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 16;
#line 132 "declarative_user.m"
                                    else
#line 132 "declarative_user.m"
                                      if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 5841 "mdb.declarative_user.c"
                                        *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 18;
#line 132 "declarative_user.m"
                                      else
#line 132 "declarative_user.m"
                                        if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 5847 "mdb.declarative_user.c"
                                          *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 10;
#line 132 "declarative_user.m"
                                        else
#line 132 "declarative_user.m"
                                          if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5853 "mdb.declarative_user.c"
                                            *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 7;
#line 132 "declarative_user.m"
                                          else
#line 5857 "mdb.declarative_user.c"
                                            *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 8;
#line 132 "declarative_user.m"
  }
#line 132 "declarative_user.m"
}

#line 132 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_command_0_0(
#line 132 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 132 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_2)
#line 132 "declarative_user.m"
{
#line 132 "declarative_user.m"
  {
#line 132 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 132 "declarative_user.m"
    MR_Integer mdb__declarative_user__CastX_49 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 132 "declarative_user.m"
    MR_Integer mdb__declarative_user__CastY_50 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 132 "declarative_user.m"
    mdb__declarative_user__succeeded = (mdb__declarative_user__CastX_49 == mdb__declarative_user__CastY_50);
#line 132 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 132 "declarative_user.m"
      mdb__declarative_user__succeeded = MR_TRUE;
#line 132 "declarative_user.m"
    else
#line 132 "declarative_user.m"
      if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 132 "declarative_user.m"
        {
#line 132 "declarative_user.m"
          MR_Integer mdb__declarative_user__CastX_37 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 132 "declarative_user.m"
          MR_Integer mdb__declarative_user__CastY_38 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 132 "declarative_user.m"
          mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_38 == mdb__declarative_user__CastX_37);
#line 132 "declarative_user.m"
        }
#line 132 "declarative_user.m"
      else
#line 132 "declarative_user.m"
        if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 132 "declarative_user.m"
          {
#line 132 "declarative_user.m"
            MR_Integer mdb__declarative_user__CastX_45 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 132 "declarative_user.m"
            MR_Integer mdb__declarative_user__CastY_46 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 132 "declarative_user.m"
            mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_46 == mdb__declarative_user__CastX_45);
#line 132 "declarative_user.m"
          }
#line 132 "declarative_user.m"
        else
#line 132 "declarative_user.m"
          if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 132 "declarative_user.m"
            {
#line 132 "declarative_user.m"
              MR_Integer mdb__declarative_user__CastX_47 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 132 "declarative_user.m"
              MR_Integer mdb__declarative_user__CastY_48 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 132 "declarative_user.m"
              mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_48 == mdb__declarative_user__CastX_47);
#line 132 "declarative_user.m"
            }
#line 132 "declarative_user.m"
          else
#line 132 "declarative_user.m"
            if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 132 "declarative_user.m"
              {
#line 132 "declarative_user.m"
                MR_Integer mdb__declarative_user__CastX_7 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 132 "declarative_user.m"
                MR_Integer mdb__declarative_user__CastY_8 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 132 "declarative_user.m"
                mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_8 == mdb__declarative_user__CastX_7);
#line 132 "declarative_user.m"
              }
#line 132 "declarative_user.m"
            else
#line 132 "declarative_user.m"
              if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 132 "declarative_user.m"
                {
#line 132 "declarative_user.m"
                  MR_Integer mdb__declarative_user__CastX_33 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 132 "declarative_user.m"
                  MR_Integer mdb__declarative_user__CastY_34 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 132 "declarative_user.m"
                  mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_34 == mdb__declarative_user__CastX_33);
#line 132 "declarative_user.m"
                }
#line 132 "declarative_user.m"
              else
#line 132 "declarative_user.m"
                if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 132 "declarative_user.m"
                  {
#line 132 "declarative_user.m"
                    MR_Integer mdb__declarative_user__CastX_5 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 132 "declarative_user.m"
                    MR_Integer mdb__declarative_user__CastY_6 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 132 "declarative_user.m"
                    mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_6 == mdb__declarative_user__CastX_5);
#line 132 "declarative_user.m"
                  }
#line 132 "declarative_user.m"
                else
#line 132 "declarative_user.m"
                  if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 132 "declarative_user.m"
                    {
#line 132 "declarative_user.m"
                      MR_Integer mdb__declarative_user__CastX_25 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 132 "declarative_user.m"
                      MR_Integer mdb__declarative_user__CastY_26 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 132 "declarative_user.m"
                      mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_26 == mdb__declarative_user__CastX_25);
#line 132 "declarative_user.m"
                    }
#line 132 "declarative_user.m"
                  else
#line 132 "declarative_user.m"
                    if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 132 "declarative_user.m"
                      {
#line 132 "declarative_user.m"
                        MR_Integer mdb__declarative_user__CastX_41 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 132 "declarative_user.m"
                        MR_Integer mdb__declarative_user__CastY_42 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 132 "declarative_user.m"
                        mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_42 == mdb__declarative_user__CastX_41);
#line 132 "declarative_user.m"
                      }
#line 132 "declarative_user.m"
                    else
#line 132 "declarative_user.m"
                      if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 132 "declarative_user.m"
                        {
#line 132 "declarative_user.m"
                          MR_Integer mdb__declarative_user__CastX_9 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 132 "declarative_user.m"
                          MR_Integer mdb__declarative_user__CastY_10 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 132 "declarative_user.m"
                          mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_10 == mdb__declarative_user__CastX_9);
#line 132 "declarative_user.m"
                        }
#line 132 "declarative_user.m"
                      else
#line 132 "declarative_user.m"
                        if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 132 "declarative_user.m"
                          {
#line 132 "declarative_user.m"
                            MR_Integer mdb__declarative_user__CastX_31 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 132 "declarative_user.m"
                            MR_Integer mdb__declarative_user__CastY_32 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 132 "declarative_user.m"
                            mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_32 == mdb__declarative_user__CastX_31);
#line 132 "declarative_user.m"
                          }
#line 132 "declarative_user.m"
                        else
#line 132 "declarative_user.m"
                          if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 132 "declarative_user.m"
                            {
#line 132 "declarative_user.m"
                              MR_Integer mdb__declarative_user__CastX_29 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 132 "declarative_user.m"
                              MR_Integer mdb__declarative_user__CastY_30 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 132 "declarative_user.m"
                              mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_30 == mdb__declarative_user__CastX_29);
#line 132 "declarative_user.m"
                            }
#line 132 "declarative_user.m"
                          else
#line 132 "declarative_user.m"
                            if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 132 "declarative_user.m"
                              {
#line 132 "declarative_user.m"
                                MR_Integer mdb__declarative_user__CastX_35 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 132 "declarative_user.m"
                                MR_Integer mdb__declarative_user__CastY_36 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 132 "declarative_user.m"
                                mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_36 == mdb__declarative_user__CastX_35);
#line 132 "declarative_user.m"
                              }
#line 132 "declarative_user.m"
                            else
#line 132 "declarative_user.m"
                              if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 132 "declarative_user.m"
                                {
#line 132 "declarative_user.m"
                                  MR_Integer mdb__declarative_user__CastX_3 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 132 "declarative_user.m"
                                  MR_Integer mdb__declarative_user__CastY_4 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 132 "declarative_user.m"
                                  mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_4 == mdb__declarative_user__CastX_3);
#line 132 "declarative_user.m"
                                }
#line 132 "declarative_user.m"
                              else
#line 132 "declarative_user.m"
                                if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 132 "declarative_user.m"
                                  {
#line 132 "declarative_user.m"
                                    MR_Word mdb__declarative_user__TypeInfo_51_51;
#line 132 "declarative_user.m"
                                    MR_Word mdb__declarative_user__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
#line 132 "declarative_user.m"
                                    MR_Word mdb__declarative_user__V_12_12;

#line 132 "declarative_user.m"
                                    mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 132 "declarative_user.m"
                                    if (mdb__declarative_user__succeeded)
#line 132 "declarative_user.m"
                                      {
#line 132 "declarative_user.m"
                                        mdb__declarative_user__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));
#line 6104 "mdb.declarative_user.c"
                                        mdb__declarative_user__TypeInfo_51_51 = (MR_Word) &mdb__declarative_user_scalar_common_1[0];
#line 6106 "mdb.declarative_user.c"
                                        {
#line 6108 "mdb.declarative_user.c"
                                          return mdb__declarative_user__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_user__TypeInfo_51_51, ((MR_Box) (mdb__declarative_user__V_11_11)), ((MR_Box) (mdb__declarative_user__V_12_12)));
                                        }
#line 132 "declarative_user.m"
                                      }
#line 132 "declarative_user.m"
                                  }
#line 132 "declarative_user.m"
                                else
#line 132 "declarative_user.m"
                                  if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 132 "declarative_user.m"
                                    {
#line 132 "declarative_user.m"
                                      MR_Word mdb__declarative_user__TypeInfo_52_52;
#line 132 "declarative_user.m"
                                      MR_Word mdb__declarative_user__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
#line 132 "declarative_user.m"
                                      MR_Word mdb__declarative_user__V_14_14;

#line 132 "declarative_user.m"
                                      mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 132 "declarative_user.m"
                                      if (mdb__declarative_user__succeeded)
#line 132 "declarative_user.m"
                                        {
#line 132 "declarative_user.m"
                                          mdb__declarative_user__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));
#line 6136 "mdb.declarative_user.c"
                                          mdb__declarative_user__TypeInfo_52_52 = (MR_Word) &mdb__declarative_user_scalar_common_1[0];
#line 6138 "mdb.declarative_user.c"
                                          {
#line 6140 "mdb.declarative_user.c"
                                            return mdb__declarative_user__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_user__TypeInfo_52_52, ((MR_Box) (mdb__declarative_user__V_13_13)), ((MR_Box) (mdb__declarative_user__V_14_14)));
                                          }
#line 132 "declarative_user.m"
                                        }
#line 132 "declarative_user.m"
                                    }
#line 132 "declarative_user.m"
                                  else
#line 132 "declarative_user.m"
                                    if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 132 "declarative_user.m"
                                      {
#line 132 "declarative_user.m"
                                        MR_Integer mdb__declarative_user__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 132 "declarative_user.m"
                                        MR_Integer mdb__declarative_user__V_16_16;

#line 132 "declarative_user.m"
                                        mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 132 "declarative_user.m"
                                        if (mdb__declarative_user__succeeded)
#line 132 "declarative_user.m"
                                          {
#line 132 "declarative_user.m"
                                            mdb__declarative_user__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 6166 "mdb.declarative_user.c"
                                            mdb__declarative_user__succeeded = (mdb__declarative_user__V_15_15 == mdb__declarative_user__V_16_16);
#line 132 "declarative_user.m"
                                          }
#line 132 "declarative_user.m"
                                      }
#line 132 "declarative_user.m"
                                    else
#line 132 "declarative_user.m"
                                      if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 132 "declarative_user.m"
                                        {
#line 132 "declarative_user.m"
                                          MR_Word mdb__declarative_user__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 132 "declarative_user.m"
                                          MR_Word mdb__declarative_user__V_40_40;

#line 132 "declarative_user.m"
                                          mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 132 "declarative_user.m"
                                          if (mdb__declarative_user__succeeded)
#line 132 "declarative_user.m"
                                            {
#line 132 "declarative_user.m"
                                              mdb__declarative_user__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 6191 "mdb.declarative_user.c"
                                              mdb__declarative_user__succeeded = (mdb__declarative_user__V_39_39 == mdb__declarative_user__V_40_40);
#line 132 "declarative_user.m"
                                            }
#line 132 "declarative_user.m"
                                        }
#line 132 "declarative_user.m"
                                      else
#line 132 "declarative_user.m"
                                        if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 132 "declarative_user.m"
                                          {
#line 132 "declarative_user.m"
                                            MR_Word mdb__declarative_user__TypeInfo_53_53;
#line 132 "declarative_user.m"
                                            MR_Word mdb__declarative_user__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 132 "declarative_user.m"
                                            MR_Word mdb__declarative_user__V_44_44;

#line 132 "declarative_user.m"
                                            mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 132 "declarative_user.m"
                                            if (mdb__declarative_user__succeeded)
#line 132 "declarative_user.m"
                                              {
#line 132 "declarative_user.m"
                                                mdb__declarative_user__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 6218 "mdb.declarative_user.c"
                                                mdb__declarative_user__TypeInfo_53_53 = (MR_Word) &mdb__declarative_user_scalar_common_1[1];
#line 6220 "mdb.declarative_user.c"
                                                {
#line 6222 "mdb.declarative_user.c"
                                                  return mdb__declarative_user__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_user__TypeInfo_53_53, ((MR_Box) (mdb__declarative_user__V_43_43)), ((MR_Box) (mdb__declarative_user__V_44_44)));
                                                }
#line 132 "declarative_user.m"
                                              }
#line 132 "declarative_user.m"
                                          }
#line 132 "declarative_user.m"
                                        else
#line 132 "declarative_user.m"
                                          if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 132 "declarative_user.m"
                                            {
#line 132 "declarative_user.m"
                                              MR_Word mdb__declarative_user__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 132 "declarative_user.m"
                                              MR_Word mdb__declarative_user__V_28_28;

#line 132 "declarative_user.m"
                                              mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 132 "declarative_user.m"
                                              if (mdb__declarative_user__succeeded)
#line 132 "declarative_user.m"
                                                {
#line 132 "declarative_user.m"
                                                  mdb__declarative_user__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 6248 "mdb.declarative_user.c"
                                                  {
#line 6250 "mdb.declarative_user.c"
                                                    return mdb__declarative_user__succeeded = mdb__browser_info____Unify____param_cmd_0_0(mdb__declarative_user__V_27_27, mdb__declarative_user__V_28_28);
                                                  }
#line 132 "declarative_user.m"
                                                }
#line 132 "declarative_user.m"
                                            }
#line 132 "declarative_user.m"
                                          else
#line 132 "declarative_user.m"
                                            if (((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 132 "declarative_user.m"
                                              {
#line 132 "declarative_user.m"
                                                MR_Integer mdb__declarative_user__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 132 "declarative_user.m"
                                                MR_Integer mdb__declarative_user__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 2)));
#line 132 "declarative_user.m"
                                                MR_Integer mdb__declarative_user__V_19_19;
#line 132 "declarative_user.m"
                                                MR_Integer mdb__declarative_user__V_20_20;

#line 132 "declarative_user.m"
                                                mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 132 "declarative_user.m"
                                                if (mdb__declarative_user__succeeded)
#line 132 "declarative_user.m"
                                                  {
#line 132 "declarative_user.m"
                                                    mdb__declarative_user__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 132 "declarative_user.m"
                                                    mdb__declarative_user__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 2)));
#line 6282 "mdb.declarative_user.c"
                                                    mdb__declarative_user__succeeded = (mdb__declarative_user__V_17_17 == mdb__declarative_user__V_19_19);
#line 132 "declarative_user.m"
                                                    if (mdb__declarative_user__succeeded)
#line 6286 "mdb.declarative_user.c"
                                                      mdb__declarative_user__succeeded = (mdb__declarative_user__V_18_18 == mdb__declarative_user__V_20_20);
#line 132 "declarative_user.m"
                                                  }
#line 132 "declarative_user.m"
                                              }
#line 132 "declarative_user.m"
                                            else
#line 132 "declarative_user.m"
                                              {
#line 132 "declarative_user.m"
                                                MR_Integer mdb__declarative_user__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 132 "declarative_user.m"
                                                MR_Integer mdb__declarative_user__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 2)));
#line 132 "declarative_user.m"
                                                MR_Integer mdb__declarative_user__V_23_23;
#line 132 "declarative_user.m"
                                                MR_Integer mdb__declarative_user__V_24_24;

#line 132 "declarative_user.m"
                                                mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 132 "declarative_user.m"
                                                if (mdb__declarative_user__succeeded)
#line 132 "declarative_user.m"
                                                  {
#line 132 "declarative_user.m"
                                                    mdb__declarative_user__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 132 "declarative_user.m"
                                                    mdb__declarative_user__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 2)));
#line 6315 "mdb.declarative_user.c"
                                                    mdb__declarative_user__succeeded = (mdb__declarative_user__V_21_21 == mdb__declarative_user__V_23_23);
#line 132 "declarative_user.m"
                                                    if (mdb__declarative_user__succeeded)
#line 6319 "mdb.declarative_user.c"
                                                      mdb__declarative_user__succeeded = (mdb__declarative_user__V_22_22 == mdb__declarative_user__V_24_24);
#line 132 "declarative_user.m"
                                                  }
#line 132 "declarative_user.m"
                                              }
#line 132 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 132 "declarative_user.m"
  }
#line 132 "declarative_user.m"
}

#line 1364 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__convert_dirs_to_term_path_from_atom_3_p_0(
#line 1364 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 1364 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_2,
#line 1364 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__3_3)
#line 1364 "declarative_user.m"
{
#line 1367 "declarative_user.m"
  {
#line 1367 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;

#line 1367 "declarative_user.m"
    if ((mdb__declarative_user__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1367 "declarative_user.m"
      *mdb__declarative_user__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1367 "declarative_user.m"
    else
#line 1368 "declarative_user.m"
      {
#line 1368 "declarative_user.m"
        MR_Word mdb__declarative_user__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 1368 "declarative_user.m"
        MR_Word mdb__declarative_user__Dir_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));
#line 1368 "declarative_user.m"
        MR_Word mdb__declarative_user__Dirs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 1368 "declarative_user.m"
        MR_Integer mdb__declarative_user__Pos_10;
#line 1368 "declarative_user.m"
        MR_Word mdb__declarative_user__MaybeValue_14;
#line 1368 "declarative_user.m"
        MR_Box mdb__declarative_user__V_5_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));

#line 1373 "declarative_user.m"
        if (((MR_tag((MR_Word) mdb__declarative_user__Dir_7)) == (MR_mktag((MR_Integer) 2))))
#line 1374 "declarative_user.m"
          {
#line 1374 "declarative_user.m"
            MR_String mdb__declarative_user__Name_15 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_user__Dir_7, (MR_Integer) 0)));

#line 1375 "declarative_user.m"
            {
#line 1375 "declarative_user.m"
              mdb__declarative_user__succeeded = mdb__browse__string_is_return_value_alias_1_p_0(mdb__declarative_user__Name_15);
            }
#line 1383 "declarative_user.m"
            if (mdb__declarative_user__succeeded)
#line 1379 "declarative_user.m"
              {
#line 1379 "declarative_user.m"
                MR_Word mdb__declarative_user__LastArg_16;
#line 1376 "declarative_user.m"
                MR_Box mdb__declarative_user__conv0_LastArg_16;

#line 1376 "declarative_user.m"
                {
#line 1376 "declarative_user.m"
                  mdb__declarative_user__succeeded = mercury__list__last_2_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_user__Args_6, &mdb__declarative_user__conv0_LastArg_16);
                }
#line 1376 "declarative_user.m"
                if (mdb__declarative_user__succeeded)
#line 1376 "declarative_user.m"
                  {
#line 1376 "declarative_user.m"
                    mdb__declarative_user__LastArg_16 = ((MR_Word) mdb__declarative_user__conv0_LastArg_16);
#line 1376 "declarative_user.m"
                    mdb__declarative_user__succeeded = MR_TRUE;
#line 1376 "declarative_user.m"
                  }
#line 1379 "declarative_user.m"
                if (mdb__declarative_user__succeeded)
#line 1377 "declarative_user.m"
                  {
#line 1377 "declarative_user.m"
                    MR_Word mdb__declarative_user__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__LastArg_16, (MR_Integer) 0)));
#line 1377 "declarative_user.m"
                    MR_Integer mdb__declarative_user__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__LastArg_16, (MR_Integer) 1)));

#line 1377 "declarative_user.m"
                    mdb__declarative_user__MaybeValue_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__LastArg_16, (MR_Integer) 2)));
#line 1378 "declarative_user.m"
                    {
#line 1378 "declarative_user.m"
                      mdb__declarative_user__Pos_10 = mercury__list__length_1_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_user__Args_6);
                    }
#line 1377 "declarative_user.m"
                  }
#line 1379 "declarative_user.m"
                else
#line 1380 "declarative_user.m"
                  {
#line 1380 "declarative_user.m"
                    {
#line 1380 "declarative_user.m"
                      mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_user_scalar_common_1[19])));
#line 1380 "declarative_user.m"
                      return;
                    }
#line 1380 "declarative_user.m"
                  }
#line 1379 "declarative_user.m"
              }
#line 1383 "declarative_user.m"
            else
#line 1384 "declarative_user.m"
              {
#line 1384 "declarative_user.m"
                {
#line 1384 "declarative_user.m"
                  mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_user_scalar_common_1[20])));
#line 1384 "declarative_user.m"
                  return;
                }
#line 1384 "declarative_user.m"
              }
#line 1374 "declarative_user.m"
          }
#line 1373 "declarative_user.m"
        else
#line 1370 "declarative_user.m"
          {
#line 1370 "declarative_user.m"
            MR_Word mdb__declarative_user__Arg_11;
#line 1371 "declarative_user.m"
            MR_Box mdb__declarative_user__conv1_Arg_11;
#line 1372 "declarative_user.m"
            MR_Word mdb__declarative_user__V_12_12;
#line 1372 "declarative_user.m"
            MR_Integer mdb__declarative_user__V_13_13;

#line 1370 "declarative_user.m"
            mdb__declarative_user__Pos_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Dir_7, (MR_Integer) 0)));
#line 1371 "declarative_user.m"
            {
#line 1371 "declarative_user.m"
              mdb__declarative_user__conv1_Arg_11 = mercury__list__det_index1_2_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_user__Args_6, mdb__declarative_user__Pos_10);
            }
#line 1371 "declarative_user.m"
            mdb__declarative_user__Arg_11 = ((MR_Word) mdb__declarative_user__conv1_Arg_11);
#line 1372 "declarative_user.m"
            mdb__declarative_user__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Arg_11, (MR_Integer) 0)));
#line 1372 "declarative_user.m"
            mdb__declarative_user__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Arg_11, (MR_Integer) 1)));
#line 1372 "declarative_user.m"
            mdb__declarative_user__MaybeValue_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Arg_11, (MR_Integer) 2)));
#line 1370 "declarative_user.m"
          }
#line 1392 "declarative_user.m"
        if ((mdb__declarative_user__MaybeValue_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1400 "declarative_user.m"
          if ((mdb__declarative_user__Dirs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1398 "declarative_user.m"
            {
#line 1399 "declarative_user.m"
              {
#line 1399 "declarative_user.m"
                MR_Word base;
#line 1399 "declarative_user.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1399 "declarative_user.m"
                *mdb__declarative_user__HeadVar__3_3 = base;
#line 1399 "declarative_user.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__Pos_10));
#line 1399 "declarative_user.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1399 "declarative_user.m"
              }
#line 1398 "declarative_user.m"
            }
#line 1400 "declarative_user.m"
          else
#line 1401 "declarative_user.m"
            {
#line 1402 "declarative_user.m"
              {
#line 1402 "declarative_user.m"
                mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_user_scalar_common_1[21])));
#line 1402 "declarative_user.m"
                return;
              }
#line 1401 "declarative_user.m"
            }
#line 1392 "declarative_user.m"
        else
#line 1389 "declarative_user.m"
          {
#line 1389 "declarative_user.m"
            MR_Word mdb__declarative_user__TermRep_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeValue_14, (MR_Integer) 0)));
#line 1389 "declarative_user.m"
            MR_Word mdb__declarative_user__TermPath0_20;

#line 1390 "declarative_user.m"
            {
#line 1390 "declarative_user.m"
              mdb__browser_info__convert_dirs_to_term_path_3_p_0(mdb__declarative_user__TermRep_19, mdb__declarative_user__Dirs_8, &mdb__declarative_user__TermPath0_20);
            }
#line 1391 "declarative_user.m"
            {
#line 1391 "declarative_user.m"
              MR_Word base;
#line 1391 "declarative_user.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1391 "declarative_user.m"
              *mdb__declarative_user__HeadVar__3_3 = base;
#line 1391 "declarative_user.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__Pos_10));
#line 1391 "declarative_user.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__TermPath0_20));
#line 1391 "declarative_user.m"
            }
#line 1389 "declarative_user.m"
          }
#line 1368 "declarative_user.m"
      }
#line 1367 "declarative_user.m"
  }
#line 1364 "declarative_user.m"
}

#line 1328 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__print_tabled_io_actions_2_5_p_0(
#line 1328 "declarative_user.m"
  MR_Word mdb__declarative_user__User_6,
#line 1328 "declarative_user.m"
  MR_Integer mdb__declarative_user__Cur_7,
#line 1328 "declarative_user.m"
  MR_Integer mdb__declarative_user__End_8)
#line 1328 "declarative_user.m"
{
#line 1334 "declarative_user.m"
  while (MR_TRUE)
#line 1334 "declarative_user.m"
    {
#line 1334 "declarative_user.m"
      /* tailcall optimized into a loop */
#line 1334 "declarative_user.m"
      {
#line 1334 "declarative_user.m"
        MR_bool mdb__declarative_user__succeeded = (mdb__declarative_user__Cur_7 == mdb__declarative_user__End_8);

#line 1334 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 1332 "declarative_user.m"
          {
#line 1332 "declarative_user.m"
          }
#line 1334 "declarative_user.m"
        else
#line 1335 "declarative_user.m"
          {
#line 1335 "declarative_user.m"
            MR_Word mdb__declarative_user__MaybeIoAction_10;
#line 1335 "declarative_user.m"
            MR_Integer mdb__declarative_user__V_15_15;

#line 1335 "declarative_user.m"
            {
#line 1335 "declarative_user.m"
              mdb__io_action__get_maybe_io_action_4_p_0(mdb__declarative_user__Cur_7, &mdb__declarative_user__MaybeIoAction_10);
            }
#line 1343 "declarative_user.m"
            if ((mdb__declarative_user__MaybeIoAction_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1343 "declarative_user.m"
              {
#line 1343 "declarative_user.m"
              }
#line 1343 "declarative_user.m"
            else
#line 1344 "declarative_user.m"
              {
#line 1344 "declarative_user.m"
                MR_Word mdb__declarative_user__IoAction_23 = (MR_Word) MR_body(((MR_Word) mdb__declarative_user__MaybeIoAction_10), (MR_Integer) 1);
#line 1344 "declarative_user.m"
                MR_Word mdb__declarative_user__Term_25;
#line 1344 "declarative_user.m"
                MR_Word mdb__declarative_user__V_28_28;
#line 1344 "declarative_user.m"
                MR_Word mdb__declarative_user__V_33_33;
#line 1346 "declarative_user.m"
                MR_Word mdb__declarative_user__V_32_32;
#line 1346 "declarative_user.m"
                MR_Word mdb__declarative_user__V_34_34;
#line 1346 "declarative_user.m"
                MR_Word mdb__declarative_user__V_35_35;
#line 1346 "declarative_user.m"
                MR_Word mdb__declarative_user__V_36_36;

#line 1345 "declarative_user.m"
                {
#line 1345 "declarative_user.m"
                  mdb__declarative_user__Term_25 = mdb__io_action__io_action_to_browser_term_1_f_0(mdb__declarative_user__IoAction_23);
                }
#line 1346 "declarative_user.m"
                mdb__declarative_user__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
#line 1346 "declarative_user.m"
                mdb__declarative_user__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
#line 1346 "declarative_user.m"
                mdb__declarative_user__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
#line 1346 "declarative_user.m"
                mdb__declarative_user__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
#line 1346 "declarative_user.m"
                mdb__declarative_user__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
#line 1346 "declarative_user.m"
                mdb__declarative_user__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
#line 1346 "declarative_user.m"
                {
#line 1346 "declarative_user.m"
                  mdb__browse__print_browser_term_6_p_0(mdb__declarative_user__Term_25, mdb__declarative_user__V_28_28, (MR_Integer) 2, mdb__declarative_user__V_33_33);
                }
#line 1344 "declarative_user.m"
              }
#line 1337 "declarative_user.m"
            mdb__declarative_user__V_15_15 = (mdb__declarative_user__Cur_7 + (MR_Integer) 1);
#line 1337 "declarative_user.m"
            /* direct tailcall eliminated */
#line 1337 "declarative_user.m"
            {
#line 1337 "declarative_user.m"
              MR_Integer mdb__declarative_user__Cur__tmp_copy_7 = mdb__declarative_user__V_15_15;

#line 1337 "declarative_user.m"
              mdb__declarative_user__Cur_7 = mdb__declarative_user__Cur__tmp_copy_7;
#line 1337 "declarative_user.m"
            }
#line 1337 "declarative_user.m"
            continue;
#line 1335 "declarative_user.m"
          }
#line 1334 "declarative_user.m"
      }
#line 1334 "declarative_user.m"
      break;
#line 1334 "declarative_user.m"
    }
#line 1328 "declarative_user.m"
}

#line 1298 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__write_io_actions_5_p_0(
#line 1298 "declarative_user.m"
  MR_Word mdb__declarative_user__User_6,
#line 1298 "declarative_user.m"
  MR_Integer mdb__declarative_user__NumTabled_7,
#line 1298 "declarative_user.m"
  MR_Word mdb__declarative_user__IoActions_8)
#line 1298 "declarative_user.m"
{
#line 1304 "declarative_user.m"
  {
#line 1304 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded = (mdb__declarative_user__NumTabled_7 == (MR_Integer) 0);

#line 1304 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 1302 "declarative_user.m"
      {
#line 1302 "declarative_user.m"
      }
#line 1304 "declarative_user.m"
    else
#line 1310 "declarative_user.m"
      {
#line 1310 "declarative_user.m"
        MR_Integer mdb__declarative_user__NumPrinted_10;
#line 1310 "declarative_user.m"
        MR_Word mdb__declarative_user__V_21_21;
#line 1310 "declarative_user.m"
        MR_Word mdb__declarative_user__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
#line 1310 "declarative_user.m"
        MR_Word mdb__declarative_user__V_75_75;
#line 1306 "declarative_user.m"
        MR_Word mdb__declarative_user__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
#line 1306 "declarative_user.m"
        MR_Word mdb__declarative_user__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
#line 1306 "declarative_user.m"
        MR_Word mdb__declarative_user__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
#line 1306 "declarative_user.m"
        MR_Word mdb__declarative_user__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
#line 1306 "declarative_user.m"
        MR_Word mdb__declarative_user__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
#line 1311 "declarative_user.m"
        MR_Word mdb__declarative_user__V_45_45;
#line 1311 "declarative_user.m"
        MR_Word mdb__declarative_user__V_46_46;
#line 1311 "declarative_user.m"
        MR_Word mdb__declarative_user__V_47_47;
#line 1311 "declarative_user.m"
        MR_Word mdb__declarative_user__V_48_48;
#line 1311 "declarative_user.m"
        MR_Word mdb__declarative_user__V_49_49;
#line 1313 "declarative_user.m"
        MR_Word mdb__declarative_user__V_71_71;
#line 1313 "declarative_user.m"
        MR_Word mdb__declarative_user__V_72_72;
#line 1313 "declarative_user.m"
        MR_Word mdb__declarative_user__V_73_73;
#line 1313 "declarative_user.m"
        MR_Word mdb__declarative_user__V_74_74;
#line 1313 "declarative_user.m"
        MR_Word mdb__declarative_user__V_76_76;

#line 1305 "declarative_user.m"
        mdb__declarative_user__succeeded = (mdb__declarative_user__NumTabled_7 == (MR_Integer) 1);
#line 1307 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 1306 "declarative_user.m"
          {
#line 1306 "declarative_user.m"
            {
#line 1306 "declarative_user.m"
              mercury__io__write_string_4_p_0(mdb__declarative_user__V_69_69, (MR_String) "1 tabled IO action:");
            }
#line 1306 "declarative_user.m"
          }
#line 1307 "declarative_user.m"
        else
#line 1308 "declarative_user.m"
          {
#line 1308 "declarative_user.m"
            MR_Word mdb__declarative_user__V_18_18;
#line 1309 "declarative_user.m"
            MR_Word mdb__declarative_user__V_40_40;
#line 1309 "declarative_user.m"
            MR_Word mdb__declarative_user__V_41_41;
#line 1309 "declarative_user.m"
            MR_Word mdb__declarative_user__V_42_42;
#line 1309 "declarative_user.m"
            MR_Word mdb__declarative_user__V_43_43;
#line 1309 "declarative_user.m"
            MR_Word mdb__declarative_user__V_44_44;

#line 1308 "declarative_user.m"
            {
#line 1308 "declarative_user.m"
              mercury__io__write_int_4_p_0(mdb__declarative_user__V_69_69, mdb__declarative_user__NumTabled_7);
            }
#line 1309 "declarative_user.m"
            mdb__declarative_user__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
#line 1309 "declarative_user.m"
            mdb__declarative_user__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
#line 1309 "declarative_user.m"
            mdb__declarative_user__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
#line 1309 "declarative_user.m"
            mdb__declarative_user__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
#line 1309 "declarative_user.m"
            mdb__declarative_user__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
#line 1309 "declarative_user.m"
            mdb__declarative_user__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
#line 1309 "declarative_user.m"
            {
#line 1309 "declarative_user.m"
              mercury__io__write_string_4_p_0(mdb__declarative_user__V_18_18, (MR_String) " tabled IO actions:");
            }
#line 1308 "declarative_user.m"
          }
#line 1311 "declarative_user.m"
        mdb__declarative_user__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
#line 1311 "declarative_user.m"
        mdb__declarative_user__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
#line 1311 "declarative_user.m"
        mdb__declarative_user__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
#line 1311 "declarative_user.m"
        mdb__declarative_user__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
#line 1311 "declarative_user.m"
        mdb__declarative_user__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
#line 1311 "declarative_user.m"
        mdb__declarative_user__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
#line 1311 "declarative_user.m"
        {
#line 1311 "declarative_user.m"
          mdb__declarative_user__NumPrinted_10 = mdb__browser_info__get_num_printed_io_actions_1_f_0(mdb__declarative_user__V_21_21);
        }
#line 1313 "declarative_user.m"
        mdb__declarative_user__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
#line 1313 "declarative_user.m"
        mdb__declarative_user__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
#line 1313 "declarative_user.m"
        mdb__declarative_user__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
#line 1313 "declarative_user.m"
        mdb__declarative_user__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
#line 1313 "declarative_user.m"
        mdb__declarative_user__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
#line 1313 "declarative_user.m"
        mdb__declarative_user__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
#line 1312 "declarative_user.m"
        mdb__declarative_user__succeeded = (mdb__declarative_user__NumTabled_7 <= mdb__declarative_user__NumPrinted_10);
#line 1315 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 1313 "declarative_user.m"
          {
#line 1313 "declarative_user.m"
            MR_Integer mdb__declarative_user__Start_82;
#line 1313 "declarative_user.m"
            MR_Integer mdb__declarative_user__End_83;

#line 1313 "declarative_user.m"
            {
#line 1313 "declarative_user.m"
              mercury__io__nl_3_p_0(mdb__declarative_user__V_75_75);
            }
#line 1325 "declarative_user.m"
            mdb__declarative_user__Start_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__IoActions_8, (MR_Integer) 0)));
#line 1325 "declarative_user.m"
            mdb__declarative_user__End_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__IoActions_8, (MR_Integer) 1)));
#line 1326 "declarative_user.m"
            {
#line 1326 "declarative_user.m"
              mdb__declarative_user__print_tabled_io_actions_2_5_p_0(mdb__declarative_user__User_6, mdb__declarative_user__Start_82, mdb__declarative_user__End_83);
#line 1326 "declarative_user.m"
              return;
            }
#line 1313 "declarative_user.m"
          }
#line 1315 "declarative_user.m"
        else
#line 1316 "declarative_user.m"
          {
#line 1316 "declarative_user.m"
            MR_Word mdb__declarative_user__V_28_28;
#line 1317 "declarative_user.m"
            MR_Word mdb__declarative_user__V_60_60;
#line 1317 "declarative_user.m"
            MR_Word mdb__declarative_user__V_61_61;
#line 1317 "declarative_user.m"
            MR_Word mdb__declarative_user__V_62_62;
#line 1317 "declarative_user.m"
            MR_Word mdb__declarative_user__V_63_63;
#line 1317 "declarative_user.m"
            MR_Word mdb__declarative_user__V_64_64;

#line 1316 "declarative_user.m"
            {
#line 1316 "declarative_user.m"
              mercury__io__write_string_4_p_0(mdb__declarative_user__V_75_75, (MR_String) " too many to show");
            }
#line 1317 "declarative_user.m"
            mdb__declarative_user__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
#line 1317 "declarative_user.m"
            mdb__declarative_user__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
#line 1317 "declarative_user.m"
            mdb__declarative_user__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
#line 1317 "declarative_user.m"
            mdb__declarative_user__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
#line 1317 "declarative_user.m"
            mdb__declarative_user__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
#line 1317 "declarative_user.m"
            mdb__declarative_user__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
#line 1317 "declarative_user.m"
            {
#line 1317 "declarative_user.m"
              mercury__io__nl_3_p_0(mdb__declarative_user__V_28_28);
#line 1317 "declarative_user.m"
              return;
            }
#line 1316 "declarative_user.m"
          }
#line 1310 "declarative_user.m"
      }
#line 1304 "declarative_user.m"
  }
#line 1298 "declarative_user.m"
}

#line 1286 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__trace_atom_arg_to_univ_2_p_0(
#line 1286 "declarative_user.m"
  MR_Word mdb__declarative_user__TraceAtomArg_3,
#line 1286 "declarative_user.m"
  MR_Word * mdb__declarative_user__Univ_4)
#line 1286 "declarative_user.m"
{
#line 1288 "declarative_user.m"
  {
#line 1288 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 1288 "declarative_user.m"
    MR_Word mdb__declarative_user__MaybeUniv_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__TraceAtomArg_3, (MR_Integer) 2)));
#line 1289 "declarative_user.m"
    MR_Word mdb__declarative_user__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__TraceAtomArg_3, (MR_Integer) 0)));
#line 1289 "declarative_user.m"
    MR_Integer mdb__declarative_user__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__TraceAtomArg_3, (MR_Integer) 1)));

#line 1293 "declarative_user.m"
    if ((mdb__declarative_user__MaybeUniv_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1294 "declarative_user.m"
      {
#line 1295 "declarative_user.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1295 "declarative_user.m"
        {
#line 1295 "declarative_user.m"
          *mdb__declarative_user__Univ_4 = mercury__univ__univ_1_f_1((MR_Word) &mdb__browse__mdb__browse__type_ctor_info_unbound_0, ((MR_Box) ((MR_Integer) 0)));
        }
#line 1294 "declarative_user.m"
      }
#line 1293 "declarative_user.m"
    else
#line 1291 "declarative_user.m"
      {
#line 1291 "declarative_user.m"
        MR_Word mdb__declarative_user__Rep_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeUniv_5, (MR_Integer) 0)));

#line 1292 "declarative_user.m"
        {
#line 1292 "declarative_user.m"
          mdb__term_rep__rep_to_univ_2_p_0(mdb__declarative_user__Rep_6, mdb__declarative_user__Univ_4);
#line 1292 "declarative_user.m"
          return;
        }
#line 1291 "declarative_user.m"
      }
#line 1288 "declarative_user.m"
  }
#line 1286 "declarative_user.m"
}

#line 1262 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__count_tabled_io_actions_2_8_p_0(
#line 1262 "declarative_user.m"
  MR_Integer mdb__declarative_user__Cur_9,
#line 1262 "declarative_user.m"
  MR_Integer mdb__declarative_user__End_10,
#line 1262 "declarative_user.m"
  MR_Integer mdb__declarative_user__PrevTabled_11,
#line 1262 "declarative_user.m"
  MR_Integer * mdb__declarative_user__Tabled_12,
#line 1262 "declarative_user.m"
  MR_Integer mdb__declarative_user__PrevUntabled_13,
#line 1262 "declarative_user.m"
  MR_Integer * mdb__declarative_user__Untabled_14)
#line 1262 "declarative_user.m"
{
#line 1271 "declarative_user.m"
  while (MR_TRUE)
#line 1271 "declarative_user.m"
    {
#line 1271 "declarative_user.m"
      /* tailcall optimized into a loop */
#line 1271 "declarative_user.m"
      {
#line 1271 "declarative_user.m"
        MR_bool mdb__declarative_user__succeeded = (mdb__declarative_user__Cur_9 == mdb__declarative_user__End_10);

#line 1271 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 1269 "declarative_user.m"
          {
#line 1269 "declarative_user.m"
            *mdb__declarative_user__Untabled_14 = mdb__declarative_user__PrevUntabled_13;
#line 1270 "declarative_user.m"
            *mdb__declarative_user__Tabled_12 = mdb__declarative_user__PrevTabled_11;
#line 1269 "declarative_user.m"
          }
#line 1271 "declarative_user.m"
        else
#line 1272 "declarative_user.m"
          {
#line 1272 "declarative_user.m"
            MR_Word mdb__declarative_user__MaybeIoAction_16;
#line 1272 "declarative_user.m"
            MR_Integer mdb__declarative_user__NewPrevUntabled_18;
#line 1272 "declarative_user.m"
            MR_Integer mdb__declarative_user__NewPrevTabled_19;
#line 1272 "declarative_user.m"
            MR_Integer mdb__declarative_user__V_25_25;

#line 1272 "declarative_user.m"
            {
#line 1272 "declarative_user.m"
              mdb__io_action__get_maybe_io_action_4_p_0(mdb__declarative_user__Cur_9, &mdb__declarative_user__MaybeIoAction_16);
            }
#line 1277 "declarative_user.m"
            if ((mdb__declarative_user__MaybeIoAction_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1278 "declarative_user.m"
              {
#line 1279 "declarative_user.m"
                mdb__declarative_user__NewPrevUntabled_18 = (mdb__declarative_user__PrevUntabled_13 + (MR_Integer) 1);
#line 1280 "declarative_user.m"
                mdb__declarative_user__NewPrevTabled_19 = mdb__declarative_user__PrevTabled_11;
#line 1278 "declarative_user.m"
              }
#line 1277 "declarative_user.m"
            else
#line 1274 "declarative_user.m"
              {
#line 1275 "declarative_user.m"
                mdb__declarative_user__NewPrevUntabled_18 = mdb__declarative_user__PrevUntabled_13;
#line 1276 "declarative_user.m"
                mdb__declarative_user__NewPrevTabled_19 = (mdb__declarative_user__PrevTabled_11 + (MR_Integer) 1);
#line 1274 "declarative_user.m"
              }
#line 1282 "declarative_user.m"
            mdb__declarative_user__V_25_25 = (mdb__declarative_user__Cur_9 + (MR_Integer) 1);
#line 1282 "declarative_user.m"
            /* direct tailcall eliminated */
#line 1282 "declarative_user.m"
            {
#line 1282 "declarative_user.m"
              MR_Integer mdb__declarative_user__Cur__tmp_copy_9 = mdb__declarative_user__V_25_25;
#line 1282 "declarative_user.m"
              MR_Integer mdb__declarative_user__PrevTabled__tmp_copy_11 = mdb__declarative_user__NewPrevTabled_19;
#line 1282 "declarative_user.m"
              MR_Integer mdb__declarative_user__PrevUntabled__tmp_copy_13 = mdb__declarative_user__NewPrevUntabled_18;

#line 1282 "declarative_user.m"
              mdb__declarative_user__PrevUntabled_13 = mdb__declarative_user__PrevUntabled__tmp_copy_13;
#line 1282 "declarative_user.m"
              mdb__declarative_user__PrevTabled_11 = mdb__declarative_user__PrevTabled__tmp_copy_11;
#line 1282 "declarative_user.m"
              mdb__declarative_user__Cur_9 = mdb__declarative_user__Cur__tmp_copy_9;
#line 1282 "declarative_user.m"
            }
#line 1282 "declarative_user.m"
            continue;
#line 1272 "declarative_user.m"
          }
#line 1271 "declarative_user.m"
      }
#line 1271 "declarative_user.m"
      break;
#line 1271 "declarative_user.m"
    }
#line 1262 "declarative_user.m"
}

#line 1227 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__write_decl_atom_6_p_0_1(
#line 1227 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 1227 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 1227 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 1227 "declarative_user.m"
{
#line 1227 "declarative_user.m"
  {
#line 1227 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 1227 "declarative_user.m"
    MR_Word mdb__declarative_user__conv0_Univ_4;

#line 1227 "declarative_user.m"
    {
#line 1227 "declarative_user.m"
      mdb__declarative_user__trace_atom_arg_to_univ_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv0_Univ_4);
    }
#line 1227 "declarative_user.m"
    *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv0_Univ_4));
#line 1227 "declarative_user.m"
  }
#line 1227 "declarative_user.m"
}

#line 1216 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__write_decl_atom_6_p_0(
#line 1216 "declarative_user.m"
  MR_Word mdb__declarative_user__User_7,
#line 1216 "declarative_user.m"
  MR_String mdb__declarative_user__Indent_8,
#line 1216 "declarative_user.m"
  MR_Word mdb__declarative_user__CallerType_9,
#line 1216 "declarative_user.m"
  MR_Word mdb__declarative_user__DeclAtom_10)
#line 1216 "declarative_user.m"
{
#line 1219 "declarative_user.m"
  {
#line 1219 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 1219 "declarative_user.m"
    MR_Word mdb__declarative_user__TraceAtom_12;
#line 1219 "declarative_user.m"
    MR_Word mdb__declarative_user__MaybeIoActions_13;
#line 1219 "declarative_user.m"
    MR_Box mdb__declarative_user__ProcLayout_14;
#line 1219 "declarative_user.m"
    MR_Word mdb__declarative_user__Args0_15;
#line 1219 "declarative_user.m"
    MR_Word mdb__declarative_user__ProcLabel_16;
#line 1219 "declarative_user.m"
    MR_String mdb__declarative_user__Functor_18;
#line 1219 "declarative_user.m"
    MR_Word mdb__declarative_user__PredOrFunc_20;
#line 1219 "declarative_user.m"
    MR_Word mdb__declarative_user__Which_21;
#line 1219 "declarative_user.m"
    MR_Word mdb__declarative_user__Args1_22;
#line 1219 "declarative_user.m"
    MR_Word mdb__declarative_user__Args_23;
#line 1219 "declarative_user.m"
    MR_Word mdb__declarative_user__BrowserTerm_24;
#line 1219 "declarative_user.m"
    MR_Word mdb__declarative_user__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 1)));
#line 1219 "declarative_user.m"
    MR_Word mdb__declarative_user__V_30_30;
#line 1219 "declarative_user.m"
    MR_Word mdb__declarative_user__V_31_31;
#line 1219 "declarative_user.m"
    MR_Word mdb__declarative_user__V_41_41;
#line 1220 "declarative_user.m"
    MR_Word mdb__declarative_user__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 0)));
#line 1220 "declarative_user.m"
    MR_Word mdb__declarative_user__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 2)));
#line 1220 "declarative_user.m"
    MR_Word mdb__declarative_user__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 3)));
#line 1220 "declarative_user.m"
    MR_Word mdb__declarative_user__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 4)));
#line 1220 "declarative_user.m"
    MR_Word mdb__declarative_user__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 5)));
#line 1224 "declarative_user.m"
    MR_Word mdb__declarative_user__V_17_17;
#line 1224 "declarative_user.m"
    MR_Integer mdb__declarative_user__V_19_19;
#line 1232 "declarative_user.m"
    MR_Word mdb__declarative_user__V_40_40;
#line 1232 "declarative_user.m"
    MR_Word mdb__declarative_user__V_42_42;
#line 1232 "declarative_user.m"
    MR_Word mdb__declarative_user__V_43_43;
#line 1232 "declarative_user.m"
    MR_Word mdb__declarative_user__V_44_44;

#line 1220 "declarative_user.m"
    {
#line 1220 "declarative_user.m"
      mercury__io__write_string_4_p_0(mdb__declarative_user__V_27_27, mdb__declarative_user__Indent_8);
    }
#line 1221 "declarative_user.m"
    {
#line 1221 "declarative_user.m"
      mdb__declarative_debugger__unravel_decl_atom_3_p_0(mdb__declarative_user__DeclAtom_10, &mdb__declarative_user__TraceAtom_12, &mdb__declarative_user__MaybeIoActions_13);
    }
#line 1222 "declarative_user.m"
    mdb__declarative_user__ProcLayout_14 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_user__TraceAtom_12, (MR_Integer) 0)));
#line 1222 "declarative_user.m"
    mdb__declarative_user__Args0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__TraceAtom_12, (MR_Integer) 1)));
#line 1223 "declarative_user.m"
    {
#line 1223 "declarative_user.m"
      mdb__declarative_user__ProcLabel_16 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_user__ProcLayout_14);
    }
#line 1224 "declarative_user.m"
    {
#line 1224 "declarative_user.m"
      mdb__declarative_execution__get_pred_attributes_5_p_0(mdb__declarative_user__ProcLabel_16, &mdb__declarative_user__V_17_17, &mdb__declarative_user__Functor_18, &mdb__declarative_user__V_19_19, &mdb__declarative_user__PredOrFunc_20);
    }
#line 1225 "declarative_user.m"
    {
#line 1225 "declarative_user.m"
      mdb__declarative_user__Which_21 = mdb__declarative_execution__chosen_head_vars_presentation_0_f_0();
    }
#line 1226 "declarative_user.m"
    {
#line 1226 "declarative_user.m"
      mdb__declarative_execution__maybe_filter_headvars_3_p_0(mdb__declarative_user__Which_21, mdb__declarative_user__Args0_15, &mdb__declarative_user__Args1_22);
    }
#line 1227 "declarative_user.m"
    {
#line 1227 "declarative_user.m"
      mercury__list__map_3_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, (MR_Word) &mdb__declarative_user_scalar_common_2[17], mdb__declarative_user__Args1_22, &mdb__declarative_user__Args_23);
    }
#line 1230 "declarative_user.m"
    {
#line 1230 "declarative_user.m"
      mdb__declarative_user__V_30_30 = mdb__util__is_function_1_f_0(mdb__declarative_user__PredOrFunc_20);
    }
#line 1230 "declarative_user.m"
    {
#line 1230 "declarative_user.m"
      mdb__declarative_user__BrowserTerm_24 = mdb__browser_term__synthetic_term_to_browser_term_3_f_0(mdb__declarative_user__Functor_18, mdb__declarative_user__Args_23, mdb__declarative_user__V_30_30);
    }
#line 1232 "declarative_user.m"
    mdb__declarative_user__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 0)));
#line 1232 "declarative_user.m"
    mdb__declarative_user__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 1)));
#line 1232 "declarative_user.m"
    mdb__declarative_user__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 2)));
#line 1232 "declarative_user.m"
    mdb__declarative_user__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 3)));
#line 1232 "declarative_user.m"
    mdb__declarative_user__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 4)));
#line 1232 "declarative_user.m"
    mdb__declarative_user__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 5)));
#line 1232 "declarative_user.m"
    {
#line 1232 "declarative_user.m"
      mdb__browse__print_browser_term_6_p_0(mdb__declarative_user__BrowserTerm_24, mdb__declarative_user__V_31_31, mdb__declarative_user__CallerType_9, mdb__declarative_user__V_41_41);
    }
#line 1241 "declarative_user.m"
    if ((mdb__declarative_user__MaybeIoActions_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1251 "declarative_user.m"
      {
#line 1251 "declarative_user.m"
      }
#line 1241 "declarative_user.m"
    else
#line 1241 "declarative_user.m"
      {
#line 1241 "declarative_user.m"
        MR_Word mdb__declarative_user__IoActions_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeIoActions_13, (MR_Integer) 0)));
#line 1241 "declarative_user.m"
        MR_Integer mdb__declarative_user__NumTabled_60;
#line 1241 "declarative_user.m"
        MR_Integer mdb__declarative_user__NumUntabled_61;
#line 1241 "declarative_user.m"
        MR_Integer mdb__declarative_user__Start_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__IoActions_59, (MR_Integer) 0)));
#line 1241 "declarative_user.m"
        MR_Integer mdb__declarative_user__End_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__IoActions_59, (MR_Integer) 1)));

#line 1259 "declarative_user.m"
        {
#line 1259 "declarative_user.m"
          mdb__declarative_user__count_tabled_io_actions_2_8_p_0(mdb__declarative_user__Start_79, mdb__declarative_user__End_80, (MR_Integer) 0, &mdb__declarative_user__NumTabled_60, (MR_Integer) 0, &mdb__declarative_user__NumUntabled_61);
        }
#line 1243 "declarative_user.m"
        {
#line 1243 "declarative_user.m"
          mdb__declarative_user__write_io_actions_5_p_0(mdb__declarative_user__User_7, mdb__declarative_user__NumTabled_60, mdb__declarative_user__IoActions_59);
        }
#line 1244 "declarative_user.m"
        mdb__declarative_user__succeeded = (mdb__declarative_user__NumUntabled_61 > (MR_Integer) 0);
#line 1247 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 1245 "declarative_user.m"
          {
#line 1245 "declarative_user.m"
            MR_Word mdb__declarative_user__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 1)));
#line 1245 "declarative_user.m"
            MR_Word mdb__declarative_user__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 0)));
#line 1245 "declarative_user.m"
            MR_Word mdb__declarative_user__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 2)));
#line 1245 "declarative_user.m"
            MR_Word mdb__declarative_user__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 3)));
#line 1245 "declarative_user.m"
            MR_Word mdb__declarative_user__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 4)));
#line 1245 "declarative_user.m"
            MR_Word mdb__declarative_user__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 5)));

#line 1245 "declarative_user.m"
            {
#line 1245 "declarative_user.m"
              mercury__io__write_string_4_p_0(mdb__declarative_user__V_65_65, (MR_String) "Warning: some IO actions for this atom are not tabled.\n");
#line 1245 "declarative_user.m"
              return;
            }
#line 1245 "declarative_user.m"
          }
#line 1247 "declarative_user.m"
        else
#line 1245 "declarative_user.m"
          {
#line 1245 "declarative_user.m"
          }
#line 1241 "declarative_user.m"
      }
#line 1219 "declarative_user.m"
  }
#line 1216 "declarative_user.m"
}

#line 1209 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__write_decl_final_atom_6_p_0(
#line 1209 "declarative_user.m"
  MR_Word mdb__declarative_user__User_7,
#line 1209 "declarative_user.m"
  MR_String mdb__declarative_user__Indent_8,
#line 1209 "declarative_user.m"
  MR_Word mdb__declarative_user__CallerType_9,
#line 1209 "declarative_user.m"
  MR_Word mdb__declarative_user__FinalAtom_10)
#line 1209 "declarative_user.m"
{
#line 1213 "declarative_user.m"
  {
#line 1213 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 1213 "declarative_user.m"
    MR_Word mdb__declarative_user__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) mdb__declarative_user__FinalAtom_10);

#line 1214 "declarative_user.m"
    {
#line 1214 "declarative_user.m"
      mdb__declarative_user__write_decl_atom_6_p_0(mdb__declarative_user__User_7, mdb__declarative_user__Indent_8, mdb__declarative_user__CallerType_9, mdb__declarative_user__V_14_14);
#line 1214 "declarative_user.m"
      return;
    }
#line 1213 "declarative_user.m"
  }
#line 1209 "declarative_user.m"
}

#line 1202 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__write_decl_init_atom_6_p_0(
#line 1202 "declarative_user.m"
  MR_Word mdb__declarative_user__User_7,
#line 1202 "declarative_user.m"
  MR_String mdb__declarative_user__Indent_8,
#line 1202 "declarative_user.m"
  MR_Word mdb__declarative_user__CallerType_9,
#line 1202 "declarative_user.m"
  MR_Word mdb__declarative_user__InitAtom_10)
#line 1202 "declarative_user.m"
{
#line 1206 "declarative_user.m"
  {
#line 1206 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 1206 "declarative_user.m"
    MR_Word mdb__declarative_user__V_14_14;

#line 1207 "declarative_user.m"
    {
#line 1207 "declarative_user.m"
      mdb__declarative_user__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1207 "declarative_user.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_user__V_14_14, 0) = ((MR_Box) (mdb__declarative_user__InitAtom_10));
#line 1207 "declarative_user.m"
    }
#line 1207 "declarative_user.m"
    {
#line 1207 "declarative_user.m"
      mdb__declarative_user__write_decl_atom_6_p_0(mdb__declarative_user__User_7, mdb__declarative_user__Indent_8, mdb__declarative_user__CallerType_9, mdb__declarative_user__V_14_14);
#line 1207 "declarative_user.m"
      return;
    }
#line 1206 "declarative_user.m"
  }
#line 1202 "declarative_user.m"
}

#line 1177 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__write_decl_bug_4_p_0_1(
#line 1177 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 1177 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 1177 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_2,
#line 1177 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_3)
#line 1177 "declarative_user.m"
{
#line 1177 "declarative_user.m"
  {
#line 1177 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;

#line 1177 "declarative_user.m"
    {
#line 1177 "declarative_user.m"
      mdb__declarative_user__write_decl_final_atom_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 5))), ((MR_Word) mdb__declarative_user__wrapper_arg_1));
#line 1177 "declarative_user.m"
      return;
    }
#line 1177 "declarative_user.m"
  }
#line 1177 "declarative_user.m"
}

#line 1170 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__write_decl_bug_4_p_0(
#line 1170 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 1170 "declarative_user.m"
  MR_Word mdb__declarative_user__User_2)
#line 1170 "declarative_user.m"
{
#line 1173 "declarative_user.m"
  {
#line 1173 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 1173 "declarative_user.m"
    MR_Word mdb__declarative_user__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 1)));
#line 1176 "declarative_user.m"
    MR_Word mdb__declarative_user__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 5)));
#line 1176 "declarative_user.m"
    MR_Word mdb__declarative_user__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 4)));
#line 1176 "declarative_user.m"
    MR_Word mdb__declarative_user__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 3)));
#line 1176 "declarative_user.m"
    MR_Word mdb__declarative_user__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 2)));
#line 1176 "declarative_user.m"
    MR_Word mdb__declarative_user__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 0)));

#line 1173 "declarative_user.m"
    if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1173 "declarative_user.m"
      {
#line 1173 "declarative_user.m"
        MR_Word mdb__declarative_user__EBug_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));

#line 1180 "declarative_user.m"
        if (((MR_tag((MR_Word) mdb__declarative_user__EBug_5)) == (MR_mktag((MR_Integer) 0))))
#line 1175 "declarative_user.m"
          {
#line 1175 "declarative_user.m"
            MR_Word mdb__declarative_user__Atom_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__EBug_5, (MR_Integer) 1)));
#line 1175 "declarative_user.m"
            MR_Word mdb__declarative_user__Contour_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__EBug_5, (MR_Integer) 2)));
#line 1175 "declarative_user.m"
            MR_Word mdb__declarative_user__V_40_40;
#line 1175 "declarative_user.m"
            MR_Word mdb__declarative_user__V_43_43;
#line 1175 "declarative_user.m"
            MR_Word mdb__declarative_user__V_45_45;
#line 1175 "declarative_user.m"
            MR_Word mdb__declarative_user__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__EBug_5, (MR_Integer) 0)));
#line 1175 "declarative_user.m"
            MR_Integer mdb__declarative_user__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__EBug_5, (MR_Integer) 3)));

#line 1176 "declarative_user.m"
            {
#line 1176 "declarative_user.m"
              mercury__io__write_string_4_p_0(mdb__declarative_user__V_114_114, (MR_String) "Found incorrect contour:\n");
            }
#line 1178 "declarative_user.m"
            {
#line 1178 "declarative_user.m"
              mdb__declarative_user__V_43_43 = mdb__declarative_user__decl_caller_type_0_f_0();
            }
#line 1177 "declarative_user.m"
            {
#line 1177 "declarative_user.m"
              mdb__declarative_user__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1177 "declarative_user.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_user__V_40_40, 0) = ((MR_Box) (&mdb__declarative_user_scalar_common_9[0]));
#line 1177 "declarative_user.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_user__V_40_40, 1) = ((MR_Box) (mdb__declarative_user__write_decl_bug_4_p_0_1));
#line 1177 "declarative_user.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_user__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1177 "declarative_user.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_user__V_40_40, 3) = ((MR_Box) (mdb__declarative_user__User_2));
#line 1177 "declarative_user.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_user__V_40_40, 4) = ((MR_Box) ((MR_String) ""));
#line 1177 "declarative_user.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_user__V_40_40, 5) = ((MR_Box) (mdb__declarative_user__V_43_43));
#line 1177 "declarative_user.m"
            }
#line 1177 "declarative_user.m"
            {
#line 1177 "declarative_user.m"
              mercury__io__write_list_5_p_1((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0, mdb__declarative_user__Contour_10, (MR_String) "", mdb__declarative_user__V_40_40);
            }
#line 1179 "declarative_user.m"
            {
#line 1179 "declarative_user.m"
              mdb__declarative_user__V_45_45 = mdb__declarative_user__decl_caller_type_0_f_0();
            }
#line 1179 "declarative_user.m"
            {
#line 1179 "declarative_user.m"
              mdb__declarative_user__write_decl_final_atom_6_p_0(mdb__declarative_user__User_2, (MR_String) "", mdb__declarative_user__V_45_45, mdb__declarative_user__Atom_9);
#line 1179 "declarative_user.m"
              return;
            }
#line 1175 "declarative_user.m"
          }
#line 1180 "declarative_user.m"
        else
#line 1180 "declarative_user.m"
          if (((MR_tag((MR_Word) mdb__declarative_user__EBug_5)) == (MR_mktag((MR_Integer) 1))))
#line 1181 "declarative_user.m"
            {
#line 1181 "declarative_user.m"
              MR_Word mdb__declarative_user__V_34_34;
#line 1181 "declarative_user.m"
              MR_Word mdb__declarative_user__Atom_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__EBug_5, (MR_Integer) 0)));
#line 1181 "declarative_user.m"
              MR_Integer mdb__declarative_user__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_user__EBug_5, (MR_Integer) 1)));

#line 1182 "declarative_user.m"
              {
#line 1182 "declarative_user.m"
                mercury__io__write_string_4_p_0(mdb__declarative_user__V_114_114, (MR_String) "Found partially uncovered atom:\n");
              }
#line 1184 "declarative_user.m"
              {
#line 1184 "declarative_user.m"
                mdb__declarative_user__V_34_34 = mdb__declarative_user__decl_caller_type_0_f_0();
              }
#line 1184 "declarative_user.m"
              {
#line 1184 "declarative_user.m"
                mdb__declarative_user__write_decl_init_atom_6_p_0(mdb__declarative_user__User_2, (MR_String) "", mdb__declarative_user__V_34_34, mdb__declarative_user__Atom_47);
#line 1184 "declarative_user.m"
                return;
              }
#line 1181 "declarative_user.m"
            }
#line 1180 "declarative_user.m"
          else
#line 1186 "declarative_user.m"
            {
#line 1186 "declarative_user.m"
              MR_Word mdb__declarative_user__TypeInfo_103_103;
#line 1186 "declarative_user.m"
              MR_Word mdb__declarative_user__ExceptionRep_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__EBug_5, (MR_Integer) 1)));
#line 1186 "declarative_user.m"
              MR_Word mdb__declarative_user__Exception_15;
#line 1186 "declarative_user.m"
              MR_Word mdb__declarative_user__V_22_22;
#line 1186 "declarative_user.m"
              MR_Word mdb__declarative_user__V_24_24;
#line 1186 "declarative_user.m"
              MR_Box mdb__declarative_user__V_26_26;
#line 1186 "declarative_user.m"
              MR_Word mdb__declarative_user__V_28_28;
#line 1186 "declarative_user.m"
              MR_Word mdb__declarative_user__Atom_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__EBug_5, (MR_Integer) 0)));
#line 1186 "declarative_user.m"
              MR_Integer mdb__declarative_user__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_user__EBug_5, (MR_Integer) 2)));
#line 1191 "declarative_user.m"
              MR_Word mdb__declarative_user__V_84_84;
#line 1191 "declarative_user.m"
              MR_Word mdb__declarative_user__V_85_85;
#line 1191 "declarative_user.m"
              MR_Word mdb__declarative_user__V_86_86;
#line 1191 "declarative_user.m"
              MR_Word mdb__declarative_user__V_87_87;
#line 1191 "declarative_user.m"
              MR_Word mdb__declarative_user__V_88_88;
#line 1193 "declarative_user.m"
              MR_Word mdb__declarative_user__V_89_89;
#line 1193 "declarative_user.m"
              MR_Word mdb__declarative_user__V_90_90;
#line 1193 "declarative_user.m"
              MR_Word mdb__declarative_user__V_91_91;
#line 1193 "declarative_user.m"
              MR_Word mdb__declarative_user__V_92_92;
#line 1193 "declarative_user.m"
              MR_Word mdb__declarative_user__V_93_93;

#line 1187 "declarative_user.m"
              {
#line 1187 "declarative_user.m"
                mercury__io__write_string_4_p_0(mdb__declarative_user__V_114_114, (MR_String) "Found unhandled or incorrect exception:\n");
              }
#line 1189 "declarative_user.m"
              {
#line 1189 "declarative_user.m"
                mdb__declarative_user__V_22_22 = mdb__declarative_user__decl_caller_type_0_f_0();
              }
#line 1189 "declarative_user.m"
              {
#line 1189 "declarative_user.m"
                mdb__declarative_user__write_decl_init_atom_6_p_0(mdb__declarative_user__User_2, (MR_String) "", mdb__declarative_user__V_22_22, mdb__declarative_user__Atom_48);
              }
#line 1190 "declarative_user.m"
              {
#line 1190 "declarative_user.m"
                mdb__term_rep__rep_to_univ_2_p_0(mdb__declarative_user__ExceptionRep_13, &mdb__declarative_user__Exception_15);
              }
#line 1191 "declarative_user.m"
              mdb__declarative_user__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 0)));
#line 1191 "declarative_user.m"
              mdb__declarative_user__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 1)));
#line 1191 "declarative_user.m"
              mdb__declarative_user__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 2)));
#line 1191 "declarative_user.m"
              mdb__declarative_user__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 3)));
#line 1191 "declarative_user.m"
              mdb__declarative_user__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 4)));
#line 1191 "declarative_user.m"
              mdb__declarative_user__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 5)));
#line 1191 "declarative_user.m"
              {
#line 1191 "declarative_user.m"
                mdb__declarative_user__V_26_26 = mercury__univ__univ_value_1_f_0(&mdb__declarative_user__TypeInfo_103_103, mdb__declarative_user__Exception_15);
              }
#line 1191 "declarative_user.m"
              {
#line 1191 "declarative_user.m"
                mercury__io__write_5_p_2(mdb__declarative_user__TypeInfo_103_103, mdb__declarative_user__V_24_24, (MR_Integer) 2, mdb__declarative_user__V_26_26);
              }
#line 1193 "declarative_user.m"
              mdb__declarative_user__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 0)));
#line 1193 "declarative_user.m"
              mdb__declarative_user__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 1)));
#line 1193 "declarative_user.m"
              mdb__declarative_user__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 2)));
#line 1193 "declarative_user.m"
              mdb__declarative_user__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 3)));
#line 1193 "declarative_user.m"
              mdb__declarative_user__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 4)));
#line 1193 "declarative_user.m"
              mdb__declarative_user__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 5)));
#line 1193 "declarative_user.m"
              {
#line 1193 "declarative_user.m"
                mercury__io__nl_3_p_0(mdb__declarative_user__V_28_28);
#line 1193 "declarative_user.m"
                return;
              }
#line 1186 "declarative_user.m"
            }
#line 1173 "declarative_user.m"
      }
#line 1173 "declarative_user.m"
    else
#line 1196 "declarative_user.m"
      {
#line 1196 "declarative_user.m"
        MR_Word mdb__declarative_user__IBug_49 = (MR_Word) MR_body(((MR_Word) mdb__declarative_user__HeadVar__1_1), (MR_Integer) 0);
#line 1196 "declarative_user.m"
        MR_Word mdb__declarative_user__Parent_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__IBug_49, (MR_Integer) 0)));
#line 1196 "declarative_user.m"
        MR_Word mdb__declarative_user__Call_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__IBug_49, (MR_Integer) 2)));
#line 1196 "declarative_user.m"
        MR_Word mdb__declarative_user__V_62_62;
#line 1196 "declarative_user.m"
        MR_Word mdb__declarative_user__V_63_63;
#line 1196 "declarative_user.m"
        MR_Word mdb__declarative_user__V_66_66;
#line 1196 "declarative_user.m"
        MR_Word mdb__declarative_user__V_67_67;
#line 1197 "declarative_user.m"
        MR_Integer mdb__declarative_user__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__IBug_49, (MR_Integer) 3)));

#line 1198 "declarative_user.m"
        {
#line 1198 "declarative_user.m"
          mercury__io__write_string_4_p_0(mdb__declarative_user__V_114_114, (MR_String) "Found inadmissible call:\n");
        }
#line 1199 "declarative_user.m"
        {
#line 1199 "declarative_user.m"
          mdb__declarative_user__V_62_62 = mdb__declarative_user__decl_caller_type_0_f_0();
        }
#line 1199 "declarative_user.m"
        {
#line 1199 "declarative_user.m"
          mdb__declarative_user__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1199 "declarative_user.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_user__V_63_63, 0) = ((MR_Box) (mdb__declarative_user__Parent_52));
#line 1199 "declarative_user.m"
        }
#line 1199 "declarative_user.m"
        {
#line 1199 "declarative_user.m"
          mdb__declarative_user__write_decl_atom_6_p_0(mdb__declarative_user__User_2, (MR_String) "Parent ", mdb__declarative_user__V_62_62, mdb__declarative_user__V_63_63);
        }
#line 1200 "declarative_user.m"
        {
#line 1200 "declarative_user.m"
          mdb__declarative_user__V_66_66 = mdb__declarative_user__decl_caller_type_0_f_0();
        }
#line 1200 "declarative_user.m"
        {
#line 1200 "declarative_user.m"
          mdb__declarative_user__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1200 "declarative_user.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_user__V_67_67, 0) = ((MR_Box) (mdb__declarative_user__Call_54));
#line 1200 "declarative_user.m"
        }
#line 1200 "declarative_user.m"
        {
#line 1200 "declarative_user.m"
          mdb__declarative_user__write_decl_atom_6_p_0(mdb__declarative_user__User_2, (MR_String) "Call ", mdb__declarative_user__V_66_66, mdb__declarative_user__V_67_67);
#line 1200 "declarative_user.m"
          return;
        }
#line 1196 "declarative_user.m"
      }
#line 1173 "declarative_user.m"
  }
#line 1170 "declarative_user.m"
}

#line 1136 "declarative_user.m"
static MR_Word MR_CALL 
mdb__declarative_user__decl_caller_type_0_f_0(void)
#line 1136 "declarative_user.m"
{
#line 1138 "declarative_user.m"
  {
#line 1138 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;

#line 1138 "declarative_user.m"
    return (MR_Integer) 0;
#line 1138 "declarative_user.m"
  }
#line 1136 "declarative_user.m"
}

#line 1072 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__is_dash_1_p_0(
#line 1072 "declarative_user.m"
  MR_Char mdb__declarative_user__HeadVar__1_1)
#line 1072 "declarative_user.m"
{
#line 1074 "declarative_user.m"
  {
#line 1074 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded = (mdb__declarative_user__HeadVar__1_1 == (MR_Char) 45);

#line 1074 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 1074 "declarative_user.m"
  }
#line 1072 "declarative_user.m"
}

#line 1048 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__help_cmd_2_p_0(
#line 1048 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 1048 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2)
#line 1048 "declarative_user.m"
{
#line 1050 "declarative_user.m"
  {
#line 1050 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;

#line 1050 "declarative_user.m"
    if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1050 "declarative_user.m"
      {
#line 1050 "declarative_user.m"
        *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[18]);
#line 1050 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 1050 "declarative_user.m"
      }
#line 1050 "declarative_user.m"
    else
#line 1051 "declarative_user.m"
      {
#line 1051 "declarative_user.m"
        MR_String mdb__declarative_user__Cmd_4 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
#line 1051 "declarative_user.m"
        MR_Word mdb__declarative_user__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 1051 "declarative_user.m"
        MR_Word mdb__declarative_user__V_6_6;

#line 1051 "declarative_user.m"
        mdb__declarative_user__succeeded = (mdb__declarative_user__V_5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1051 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 1051 "declarative_user.m"
          {
#line 1051 "declarative_user.m"
            {
#line 1051 "declarative_user.m"
              mdb__declarative_user__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1051 "declarative_user.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_user__V_6_6, 0) = ((MR_Box) (mdb__declarative_user__Cmd_4));
#line 1051 "declarative_user.m"
            }
#line 1051 "declarative_user.m"
            {
#line 1051 "declarative_user.m"
              MR_Word base;
#line 1051 "declarative_user.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1051 "declarative_user.m"
              *mdb__declarative_user__HeadVar__2_2 = base;
#line 1051 "declarative_user.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1051 "declarative_user.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_user__V_6_6));
#line 1051 "declarative_user.m"
            }
#line 1051 "declarative_user.m"
            mdb__declarative_user__succeeded = MR_TRUE;
#line 1051 "declarative_user.m"
          }
#line 1051 "declarative_user.m"
      }
#line 1050 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 1050 "declarative_user.m"
  }
#line 1048 "declarative_user.m"
}

#line 1029 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__search_mode_cmd_2_p_0(
#line 1029 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 1029 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2)
#line 1029 "declarative_user.m"
{
#line 1031 "declarative_user.m"
  {
#line 1031 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1031 "declarative_user.m"
    MR_Word mdb__declarative_user__V_36_36;
#line 1031 "declarative_user.m"
    MR_String mdb__declarative_user__V_37_37;

#line 1031 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 1031 "declarative_user.m"
      {
#line 1031 "declarative_user.m"
        mdb__declarative_user__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
#line 1031 "declarative_user.m"
        mdb__declarative_user__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 1031 "declarative_user.m"
        mdb__declarative_user__succeeded = (mdb__declarative_user__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1031 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 1031 "declarative_user.m"
          {
#line 1031 "declarative_user.m"
            if ((strcmp(mdb__declarative_user__V_37_37, (MR_String) "b") == 0))
#line 1040 "declarative_user.m"
              {
#line 1040 "declarative_user.m"
                *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[14]);
#line 1040 "declarative_user.m"
                mdb__declarative_user__succeeded = MR_TRUE;
#line 1040 "declarative_user.m"
              }
#line 1031 "declarative_user.m"
            else
#line 1031 "declarative_user.m"
              if ((strcmp(mdb__declarative_user__V_37_37, (MR_String) "dq") == 0))
#line 1038 "declarative_user.m"
                {
#line 1038 "declarative_user.m"
                  *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[15]);
#line 1038 "declarative_user.m"
                  mdb__declarative_user__succeeded = MR_TRUE;
#line 1038 "declarative_user.m"
                }
#line 1031 "declarative_user.m"
              else
#line 1031 "declarative_user.m"
                if ((strcmp(mdb__declarative_user__V_37_37, (MR_String) "td") == 0))
#line 1033 "declarative_user.m"
                  {
#line 1033 "declarative_user.m"
                    *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[16]);
#line 1033 "declarative_user.m"
                    mdb__declarative_user__succeeded = MR_TRUE;
#line 1033 "declarative_user.m"
                  }
#line 1031 "declarative_user.m"
                else
#line 1031 "declarative_user.m"
                  if ((strcmp(mdb__declarative_user__V_37_37, (MR_String) "sdq") == 0))
#line 1045 "declarative_user.m"
                    {
#line 1045 "declarative_user.m"
                      *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[17]);
#line 1045 "declarative_user.m"
                      mdb__declarative_user__succeeded = MR_TRUE;
#line 1045 "declarative_user.m"
                    }
#line 1031 "declarative_user.m"
                  else
#line 1031 "declarative_user.m"
                    if ((strcmp(mdb__declarative_user__V_37_37, (MR_String) "binary") == 0))
#line 1039 "declarative_user.m"
                      {
#line 1039 "declarative_user.m"
                        *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[14]);
#line 1039 "declarative_user.m"
                        mdb__declarative_user__succeeded = MR_TRUE;
#line 1039 "declarative_user.m"
                      }
#line 1031 "declarative_user.m"
                    else
#line 1031 "declarative_user.m"
                      if ((strcmp(mdb__declarative_user__V_37_37, (MR_String) "top-down") == 0))
#line 1031 "declarative_user.m"
                        {
#line 1031 "declarative_user.m"
                          *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[16]);
#line 1031 "declarative_user.m"
                          mdb__declarative_user__succeeded = MR_TRUE;
#line 1031 "declarative_user.m"
                        }
#line 1031 "declarative_user.m"
                      else
#line 1031 "declarative_user.m"
                        if ((strcmp(mdb__declarative_user__V_37_37, (MR_String) "top_down") == 0))
#line 1032 "declarative_user.m"
                          {
#line 1032 "declarative_user.m"
                            *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[16]);
#line 1032 "declarative_user.m"
                            mdb__declarative_user__succeeded = MR_TRUE;
#line 1032 "declarative_user.m"
                          }
#line 1031 "declarative_user.m"
                        else
#line 1031 "declarative_user.m"
                          if ((strcmp(mdb__declarative_user__V_37_37, (MR_String) "divide-and-query") == 0))
#line 1034 "declarative_user.m"
                            {
#line 1034 "declarative_user.m"
                              *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[15]);
#line 1034 "declarative_user.m"
                              mdb__declarative_user__succeeded = MR_TRUE;
#line 1034 "declarative_user.m"
                            }
#line 1031 "declarative_user.m"
                          else
#line 1031 "declarative_user.m"
                            if ((strcmp(mdb__declarative_user__V_37_37, (MR_String) "divide_and_query") == 0))
#line 1036 "declarative_user.m"
                              {
#line 1036 "declarative_user.m"
                                *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[15]);
#line 1036 "declarative_user.m"
                                mdb__declarative_user__succeeded = MR_TRUE;
#line 1036 "declarative_user.m"
                              }
#line 1031 "declarative_user.m"
                            else
#line 1031 "declarative_user.m"
                              if ((strcmp(mdb__declarative_user__V_37_37, (MR_String) "suspicion-divide-and-query") == 0))
#line 1041 "declarative_user.m"
                                {
#line 1041 "declarative_user.m"
                                  *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[17]);
#line 1041 "declarative_user.m"
                                  mdb__declarative_user__succeeded = MR_TRUE;
#line 1041 "declarative_user.m"
                                }
#line 1031 "declarative_user.m"
                              else
#line 1031 "declarative_user.m"
                                if ((strcmp(mdb__declarative_user__V_37_37, (MR_String) "suspicion_divide_and_query") == 0))
#line 1043 "declarative_user.m"
                                  {
#line 1043 "declarative_user.m"
                                    *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[17]);
#line 1043 "declarative_user.m"
                                    mdb__declarative_user__succeeded = MR_TRUE;
#line 1043 "declarative_user.m"
                                  }
#line 1031 "declarative_user.m"
                                else
#line 1031 "declarative_user.m"
                                  mdb__declarative_user__succeeded = MR_FALSE;
#line 1031 "declarative_user.m"
          }
#line 1031 "declarative_user.m"
      }
#line 1031 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 1031 "declarative_user.m"
  }
#line 1029 "declarative_user.m"
}

#line 1024 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__trust_arg_cmd_2_p_0(
#line 1024 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 1024 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2)
#line 1024 "declarative_user.m"
{
#line 1026 "declarative_user.m"
  {
#line 1026 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;

#line 1026 "declarative_user.m"
    if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1026 "declarative_user.m"
      {
#line 1026 "declarative_user.m"
        *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 1026 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 1026 "declarative_user.m"
      }
#line 1026 "declarative_user.m"
    else
#line 1027 "declarative_user.m"
      {
#line 1027 "declarative_user.m"
        MR_String mdb__declarative_user__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
#line 1027 "declarative_user.m"
        MR_Word mdb__declarative_user__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));

#line 1027 "declarative_user.m"
        mdb__declarative_user__succeeded = (strcmp(mdb__declarative_user__V_3_3, (MR_String) "module") == 0);
#line 1027 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 1027 "declarative_user.m"
          {
#line 1027 "declarative_user.m"
            mdb__declarative_user__succeeded = (mdb__declarative_user__V_4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1027 "declarative_user.m"
            if (mdb__declarative_user__succeeded)
#line 1027 "declarative_user.m"
              {
#line 1027 "declarative_user.m"
                *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 1027 "declarative_user.m"
                mdb__declarative_user__succeeded = MR_TRUE;
#line 1027 "declarative_user.m"
              }
#line 1027 "declarative_user.m"
          }
#line 1027 "declarative_user.m"
      }
#line 1026 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 1026 "declarative_user.m"
  }
#line 1024 "declarative_user.m"
}

#line 1009 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__num_io_actions_cmd_2_p_0(
#line 1009 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 1009 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2)
#line 1009 "declarative_user.m"
{
#line 1011 "declarative_user.m"
  {
#line 1011 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1011 "declarative_user.m"
    MR_String mdb__declarative_user__Arg_3;
#line 1011 "declarative_user.m"
    MR_Integer mdb__declarative_user__N_4;
#line 1011 "declarative_user.m"
    MR_Word mdb__declarative_user__V_5_5;
#line 1011 "declarative_user.m"
    MR_Word mdb__declarative_user__V_6_6;

#line 1011 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 1011 "declarative_user.m"
      {
#line 1011 "declarative_user.m"
        mdb__declarative_user__Arg_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
#line 1011 "declarative_user.m"
        mdb__declarative_user__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 1011 "declarative_user.m"
        mdb__declarative_user__succeeded = (mdb__declarative_user__V_5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1011 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 1011 "declarative_user.m"
          {
#line 1012 "declarative_user.m"
            {
#line 1012 "declarative_user.m"
              mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__Arg_3, &mdb__declarative_user__N_4);
            }
#line 1011 "declarative_user.m"
            if (mdb__declarative_user__succeeded)
#line 1011 "declarative_user.m"
              {
#line 1011 "declarative_user.m"
                {
#line 1011 "declarative_user.m"
                  mdb__declarative_user__V_6_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1011 "declarative_user.m"
                  MR_hl_field(MR_mktag(3), mdb__declarative_user__V_6_6, 0) = ((MR_Box) (mdb__declarative_user__N_4));
#line 1011 "declarative_user.m"
                }
#line 1011 "declarative_user.m"
                {
#line 1011 "declarative_user.m"
                  MR_Word base;
#line 1011 "declarative_user.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1011 "declarative_user.m"
                  *mdb__declarative_user__HeadVar__2_2 = base;
#line 1011 "declarative_user.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1011 "declarative_user.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_user__V_6_6));
#line 1011 "declarative_user.m"
                }
#line 1011 "declarative_user.m"
                mdb__declarative_user__succeeded = MR_TRUE;
#line 1011 "declarative_user.m"
              }
#line 1011 "declarative_user.m"
          }
#line 1011 "declarative_user.m"
      }
#line 1011 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 1011 "declarative_user.m"
  }
#line 1009 "declarative_user.m"
}

#line 977 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__format_param_arg_cmd_3_p_0(
#line 977 "declarative_user.m"
  MR_String mdb__declarative_user__Cmd_4,
#line 977 "declarative_user.m"
  MR_Word mdb__declarative_user__ArgWords0_5,
#line 977 "declarative_user.m"
  MR_Word * mdb__declarative_user__Command_6)
#line 977 "declarative_user.m"
{
#line 980 "declarative_user.m"
  {
#line 980 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__ArgWords0_5)) == (MR_mktag((MR_Integer) 1)));
#line 980 "declarative_user.m"
    MR_Word mdb__declarative_user__Setting_15;
#line 980 "declarative_user.m"
    MR_Word mdb__declarative_user__MaybeOptionTable_17;
#line 980 "declarative_user.m"
    MR_Word mdb__declarative_user__V_29_29;
#line 8169 "mdb.declarative_user.c"
    MR_Word mdb__declarative_user__ArgWords1_7;
#line 981 "declarative_user.m"
    MR_String mdb__declarative_user__V_18_18;

#line 981 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 981 "declarative_user.m"
      {
#line 981 "declarative_user.m"
        mdb__declarative_user__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgWords0_5, (MR_Integer) 0)));
#line 981 "declarative_user.m"
        mdb__declarative_user__ArgWords1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgWords0_5, (MR_Integer) 1)));
#line 981 "declarative_user.m"
        mdb__declarative_user__succeeded = (strcmp(mdb__declarative_user__V_18_18, (MR_String) "io") == 0);
#line 981 "declarative_user.m"
      }
#line 8186 "mdb.declarative_user.c"
    if (mdb__declarative_user__succeeded)
#line 8188 "mdb.declarative_user.c"
      {
#line 8190 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__TypeCtorInfo_30_30;
#line 8192 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__TypeCtorInfo_31_31;
#line 8194 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__ParsedCommand_12;
#line 8196 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__FormatCmd_13;
#line 8198 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__MaybeOptionTable0_14;
#line 8200 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__V_19_19;
#line 8202 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__STATE_VARIABLE_OptionTable_20_20;
#line 8204 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__V_21_21;
#line 8206 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__V_22_22;
#line 8208 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__STATE_VARIABLE_OptionTable_23_23;
#line 8210 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__V_24_24;
#line 8212 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__V_25_25;
#line 8214 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__V_26_26;
#line 8216 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__STATE_VARIABLE_OptionTable_27_27;
#line 8218 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__V_28_28;
#line 988 "declarative_user.m"
        MR_String mdb__declarative_user__V_10_10;
#line 988 "declarative_user.m"
        MR_Word mdb__declarative_user__V_11_11;

#line 988 "declarative_user.m"
        mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__ArgWords1_7)) == (MR_mktag((MR_Integer) 1)));
#line 988 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 988 "declarative_user.m"
          {
#line 988 "declarative_user.m"
            mdb__declarative_user__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgWords1_7, (MR_Integer) 0)));
#line 988 "declarative_user.m"
            mdb__declarative_user__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgWords1_7, (MR_Integer) 1)));
#line 989 "declarative_user.m"
            {
#line 989 "declarative_user.m"
              mdb__declarative_user__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 989 "declarative_user.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_user__V_19_19, 0) = ((MR_Box) (mdb__declarative_user__Cmd_4));
#line 989 "declarative_user.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_user__V_19_19, 1) = ((MR_Box) (mdb__declarative_user__ArgWords1_7));
#line 989 "declarative_user.m"
            }
#line 989 "declarative_user.m"
            {
#line 989 "declarative_user.m"
              mdb__declarative_user__succeeded = mdb__parse__parse_2_p_0(mdb__declarative_user__V_19_19, &mdb__declarative_user__ParsedCommand_12);
            }
#line 8250 "mdb.declarative_user.c"
            if (mdb__declarative_user__succeeded)
#line 8252 "mdb.declarative_user.c"
              {
#line 990 "declarative_user.m"
                mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__ParsedCommand_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__ParsedCommand_12, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 990 "declarative_user.m"
                if (mdb__declarative_user__succeeded)
#line 990 "declarative_user.m"
                  {
#line 990 "declarative_user.m"
                    mdb__declarative_user__FormatCmd_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__ParsedCommand_12, (MR_Integer) 1)));
#line 991 "declarative_user.m"
                    mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__FormatCmd_13)) == (MR_mktag((MR_Integer) 2)));
#line 991 "declarative_user.m"
                    if (mdb__declarative_user__succeeded)
#line 991 "declarative_user.m"
                      {
#line 991 "declarative_user.m"
                        mdb__declarative_user__MaybeOptionTable0_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__FormatCmd_13, (MR_Integer) 0)));
#line 991 "declarative_user.m"
                        mdb__declarative_user__Setting_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__FormatCmd_13, (MR_Integer) 1)));
#line 998 "declarative_user.m"
                        mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__MaybeOptionTable0_14)) == (MR_mktag((MR_Integer) 0)));
#line 998 "declarative_user.m"
                        if (mdb__declarative_user__succeeded)
#line 998 "declarative_user.m"
                          {
#line 998 "declarative_user.m"
                            mdb__declarative_user__STATE_VARIABLE_OptionTable_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__MaybeOptionTable0_14, (MR_Integer) 0)));
#line 999 "declarative_user.m"
                            mdb__declarative_user__V_21_21 = (MR_Integer) 0;
#line 999 "declarative_user.m"
                            mdb__declarative_user__V_24_24 = (MR_Integer) 0;
#line 8284 "mdb.declarative_user.c"
                            mdb__declarative_user__TypeCtorInfo_30_30 = (MR_Word) &mdb__parse__mdb__parse__type_ctor_info_setting_option_0;
#line 8286 "mdb.declarative_user.c"
                            mdb__declarative_user__TypeCtorInfo_31_31 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 999 "declarative_user.m"
                            mdb__declarative_user__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_8[1]);
#line 999 "declarative_user.m"
                            {
#line 999 "declarative_user.m"
                              mercury__map__det_update_4_p_0(mdb__declarative_user__TypeCtorInfo_30_30, mdb__declarative_user__TypeCtorInfo_31_31, ((MR_Box) (mdb__declarative_user__V_21_21)), ((MR_Box) (mdb__declarative_user__V_22_22)), mdb__declarative_user__STATE_VARIABLE_OptionTable_20_20, &mdb__declarative_user__STATE_VARIABLE_OptionTable_23_23);
                            }
#line 1000 "declarative_user.m"
                            mdb__declarative_user__V_25_25 = (MR_Integer) 2;
#line 1000 "declarative_user.m"
                            mdb__declarative_user__V_28_28 = (MR_Integer) 1;
#line 1000 "declarative_user.m"
                            mdb__declarative_user__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_8[2]);
#line 1000 "declarative_user.m"
                            {
#line 1000 "declarative_user.m"
                              mercury__map__det_update_4_p_0(mdb__declarative_user__TypeCtorInfo_30_30, mdb__declarative_user__TypeCtorInfo_31_31, ((MR_Box) (mdb__declarative_user__V_25_25)), ((MR_Box) (mdb__declarative_user__V_26_26)), mdb__declarative_user__STATE_VARIABLE_OptionTable_23_23, &mdb__declarative_user__STATE_VARIABLE_OptionTable_27_27);
                            }
#line 1001 "declarative_user.m"
                            {
#line 1001 "declarative_user.m"
                              mdb__declarative_user__MaybeOptionTable_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1001 "declarative_user.m"
                              MR_hl_field(MR_mktag(0), mdb__declarative_user__MaybeOptionTable_17, 0) = ((MR_Box) (mdb__declarative_user__STATE_VARIABLE_OptionTable_27_27));
#line 1001 "declarative_user.m"
                            }
#line 1001 "declarative_user.m"
                            mdb__declarative_user__succeeded = MR_TRUE;
#line 998 "declarative_user.m"
                          }
#line 991 "declarative_user.m"
                      }
#line 990 "declarative_user.m"
                  }
#line 8322 "mdb.declarative_user.c"
              }
#line 988 "declarative_user.m"
          }
#line 8326 "mdb.declarative_user.c"
      }
#line 8328 "mdb.declarative_user.c"
    else
#line 8330 "mdb.declarative_user.c"
      {
#line 8332 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__ParsedCommand_39;
#line 8334 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__FormatCmd_40;
#line 8336 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__V_42_42;
#line 988 "declarative_user.m"
        MR_String mdb__declarative_user__V_32_32;
#line 988 "declarative_user.m"
        MR_Word mdb__declarative_user__V_33_33;

#line 988 "declarative_user.m"
        mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__ArgWords0_5)) == (MR_mktag((MR_Integer) 1)));
#line 988 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 988 "declarative_user.m"
          {
#line 988 "declarative_user.m"
            mdb__declarative_user__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgWords0_5, (MR_Integer) 0)));
#line 988 "declarative_user.m"
            mdb__declarative_user__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgWords0_5, (MR_Integer) 1)));
#line 989 "declarative_user.m"
            {
#line 989 "declarative_user.m"
              mdb__declarative_user__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 989 "declarative_user.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_user__V_42_42, 0) = ((MR_Box) (mdb__declarative_user__Cmd_4));
#line 989 "declarative_user.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_user__V_42_42, 1) = ((MR_Box) (mdb__declarative_user__ArgWords0_5));
#line 989 "declarative_user.m"
            }
#line 989 "declarative_user.m"
            {
#line 989 "declarative_user.m"
              mdb__declarative_user__succeeded = mdb__parse__parse_2_p_0(mdb__declarative_user__V_42_42, &mdb__declarative_user__ParsedCommand_39);
            }
#line 8368 "mdb.declarative_user.c"
            if (mdb__declarative_user__succeeded)
#line 8370 "mdb.declarative_user.c"
              {
#line 990 "declarative_user.m"
                mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__ParsedCommand_39)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__ParsedCommand_39, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 990 "declarative_user.m"
                if (mdb__declarative_user__succeeded)
#line 990 "declarative_user.m"
                  {
#line 990 "declarative_user.m"
                    mdb__declarative_user__FormatCmd_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__ParsedCommand_39, (MR_Integer) 1)));
#line 991 "declarative_user.m"
                    mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__FormatCmd_40)) == (MR_mktag((MR_Integer) 2)));
#line 991 "declarative_user.m"
                    if (mdb__declarative_user__succeeded)
#line 991 "declarative_user.m"
                      {
#line 991 "declarative_user.m"
                        mdb__declarative_user__MaybeOptionTable_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__FormatCmd_40, (MR_Integer) 0)));
#line 991 "declarative_user.m"
                        mdb__declarative_user__Setting_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__FormatCmd_40, (MR_Integer) 1)));
#line 991 "declarative_user.m"
                      }
#line 990 "declarative_user.m"
                  }
#line 8394 "mdb.declarative_user.c"
              }
#line 988 "declarative_user.m"
          }
#line 8398 "mdb.declarative_user.c"
      }
#line 980 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 980 "declarative_user.m"
      {
#line 1007 "declarative_user.m"
        {
#line 1007 "declarative_user.m"
          mdb__declarative_user__V_29_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1007 "declarative_user.m"
          MR_hl_field(MR_mktag(2), mdb__declarative_user__V_29_29, 0) = ((MR_Box) (mdb__declarative_user__MaybeOptionTable_17));
#line 1007 "declarative_user.m"
          MR_hl_field(MR_mktag(2), mdb__declarative_user__V_29_29, 1) = ((MR_Box) (mdb__declarative_user__Setting_15));
#line 1007 "declarative_user.m"
        }
#line 1007 "declarative_user.m"
        {
#line 1007 "declarative_user.m"
          MR_Word base;
#line 1007 "declarative_user.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1007 "declarative_user.m"
          *mdb__declarative_user__Command_6 = base;
#line 1007 "declarative_user.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1007 "declarative_user.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_user__V_29_29));
#line 1007 "declarative_user.m"
        }
#line 1007 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 980 "declarative_user.m"
      }
#line 980 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 980 "declarative_user.m"
  }
#line 977 "declarative_user.m"
}

#line 968 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__format_arg_cmd_2_p_0(
#line 968 "declarative_user.m"
  MR_Word mdb__declarative_user__ArgWords_3,
#line 968 "declarative_user.m"
  MR_Word * mdb__declarative_user__UserCommand_4)
#line 968 "declarative_user.m"
{
#line 970 "declarative_user.m"
  {
#line 970 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__ArgWords_3)) == (MR_mktag((MR_Integer) 1)));
#line 970 "declarative_user.m"
    MR_Word mdb__declarative_user__Command_7;
#line 970 "declarative_user.m"
    MR_Word mdb__declarative_user__FormatCmd_8;
#line 970 "declarative_user.m"
    MR_Word mdb__declarative_user__V_11_11;
#line 970 "declarative_user.m"
    MR_String mdb__declarative_user__V_12_12;
#line 971 "declarative_user.m"
    MR_String mdb__declarative_user__V_5_5;
#line 971 "declarative_user.m"
    MR_Word mdb__declarative_user__V_6_6;
#line 974 "declarative_user.m"
    MR_Word mdb__declarative_user__MaybeOptionTable_9;
#line 974 "declarative_user.m"
    MR_Word mdb__declarative_user__Setting_10;

#line 971 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 971 "declarative_user.m"
      {
#line 971 "declarative_user.m"
        mdb__declarative_user__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgWords_3, (MR_Integer) 0)));
#line 971 "declarative_user.m"
        mdb__declarative_user__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgWords_3, (MR_Integer) 1)));
#line 972 "declarative_user.m"
        mdb__declarative_user__V_12_12 = (MR_String) "format";
#line 972 "declarative_user.m"
        {
#line 972 "declarative_user.m"
          mdb__declarative_user__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 972 "declarative_user.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_user__V_11_11, 0) = ((MR_Box) (mdb__declarative_user__V_12_12));
#line 972 "declarative_user.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_user__V_11_11, 1) = ((MR_Box) (mdb__declarative_user__ArgWords_3));
#line 972 "declarative_user.m"
        }
#line 972 "declarative_user.m"
        {
#line 972 "declarative_user.m"
          mdb__declarative_user__succeeded = mdb__parse__parse_2_p_0(mdb__declarative_user__V_11_11, &mdb__declarative_user__Command_7);
        }
#line 970 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 970 "declarative_user.m"
          {
#line 973 "declarative_user.m"
            mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__Command_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Command_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 973 "declarative_user.m"
            if (mdb__declarative_user__succeeded)
#line 973 "declarative_user.m"
              {
#line 973 "declarative_user.m"
                mdb__declarative_user__FormatCmd_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Command_7, (MR_Integer) 1)));
#line 974 "declarative_user.m"
                mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__FormatCmd_8)) == (MR_mktag((MR_Integer) 1)));
#line 974 "declarative_user.m"
                if (mdb__declarative_user__succeeded)
#line 974 "declarative_user.m"
                  {
#line 974 "declarative_user.m"
                    mdb__declarative_user__MaybeOptionTable_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__FormatCmd_8, (MR_Integer) 0)));
#line 974 "declarative_user.m"
                    mdb__declarative_user__Setting_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__FormatCmd_8, (MR_Integer) 1)));
#line 975 "declarative_user.m"
                    {
#line 975 "declarative_user.m"
                      MR_Word base;
#line 975 "declarative_user.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 975 "declarative_user.m"
                      *mdb__declarative_user__UserCommand_4 = base;
#line 975 "declarative_user.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 975 "declarative_user.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_user__FormatCmd_8));
#line 975 "declarative_user.m"
                    }
#line 975 "declarative_user.m"
                    mdb__declarative_user__succeeded = MR_TRUE;
#line 974 "declarative_user.m"
                  }
#line 973 "declarative_user.m"
              }
#line 970 "declarative_user.m"
          }
#line 971 "declarative_user.m"
      }
#line 970 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 970 "declarative_user.m"
  }
#line 968 "declarative_user.m"
}

#line 1060 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__print_arg_cmd_2_p_0_2(
#line 1060 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 1060 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1)
#line 1060 "declarative_user.m"
{
#line 1060 "declarative_user.m"
  {
#line 1060 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 1060 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;

#line 1060 "declarative_user.m"
    {
#line 1060 "declarative_user.m"
      return mdb__declarative_user__succeeded = mdb__declarative_user__is_dash_1_p_0(((MR_Char) (MR_Word) mdb__declarative_user__wrapper_arg_1));
    }
#line 1060 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 1060 "declarative_user.m"
  }
#line 1060 "declarative_user.m"
}

#line 1060 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__print_arg_cmd_2_p_0_1(
#line 1060 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 1060 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1)
#line 1060 "declarative_user.m"
{
#line 1060 "declarative_user.m"
  {
#line 1060 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 1060 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;

#line 1060 "declarative_user.m"
    {
#line 1060 "declarative_user.m"
      return mdb__declarative_user__succeeded = mdb__declarative_user__is_dash_1_p_0(((MR_Char) (MR_Word) mdb__declarative_user__wrapper_arg_1));
    }
#line 1060 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 1060 "declarative_user.m"
  }
#line 1060 "declarative_user.m"
}

#line 960 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__print_arg_cmd_2_p_0(
#line 960 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 960 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2)
#line 960 "declarative_user.m"
{
#line 962 "declarative_user.m"
  {
#line 962 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;

#line 962 "declarative_user.m"
    if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 962 "declarative_user.m"
      {
#line 962 "declarative_user.m"
        *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 962 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 962 "declarative_user.m"
      }
#line 962 "declarative_user.m"
    else
#line 962 "declarative_user.m"
      {
#line 962 "declarative_user.m"
        MR_Word mdb__declarative_user__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 962 "declarative_user.m"
        MR_String mdb__declarative_user__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));

#line 962 "declarative_user.m"
        if ((mdb__declarative_user__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 963 "declarative_user.m"
          {
#line 963 "declarative_user.m"
            MR_Integer mdb__declarative_user__From_4;
#line 963 "declarative_user.m"
            MR_Integer mdb__declarative_user__To_5;
#line 1059 "declarative_user.m"
            MR_Integer mdb__declarative_user__Num_18;

#line 1056 "declarative_user.m"
            {
#line 1056 "declarative_user.m"
              mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__V_14_14, &mdb__declarative_user__Num_18);
            }
#line 1059 "declarative_user.m"
            if (mdb__declarative_user__succeeded)
#line 1057 "declarative_user.m"
              {
#line 1057 "declarative_user.m"
                mdb__declarative_user__From_4 = mdb__declarative_user__Num_18;
#line 1058 "declarative_user.m"
                mdb__declarative_user__To_5 = mdb__declarative_user__Num_18;
#line 1057 "declarative_user.m"
                mdb__declarative_user__succeeded = MR_TRUE;
#line 1057 "declarative_user.m"
              }
#line 1059 "declarative_user.m"
            else
#line 1060 "declarative_user.m"
              {
#line 1060 "declarative_user.m"
                MR_Word mdb__declarative_user__TypeInfo_18_29;
#line 1060 "declarative_user.m"
                MR_String mdb__declarative_user__FirstStr_19;
#line 1060 "declarative_user.m"
                MR_String mdb__declarative_user__SecondStr_20;
#line 1060 "declarative_user.m"
                MR_Integer mdb__declarative_user__First_21;
#line 1060 "declarative_user.m"
                MR_Integer mdb__declarative_user__Second_22;
#line 1060 "declarative_user.m"
                MR_Word mdb__declarative_user__V_23_23;
#line 1060 "declarative_user.m"
                MR_Word mdb__declarative_user__V_24_24;
#line 1060 "declarative_user.m"
                MR_Word mdb__declarative_user__V_28_28;

#line 1060 "declarative_user.m"
                {
#line 1060 "declarative_user.m"
                  mdb__declarative_user__V_23_23 = mercury__string__words_separator_2_f_0((MR_Word) &mdb__declarative_user_scalar_common_2[15], mdb__declarative_user__V_14_14);
                }
#line 1060 "declarative_user.m"
                mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 1060 "declarative_user.m"
                if (mdb__declarative_user__succeeded)
#line 1060 "declarative_user.m"
                  {
#line 1060 "declarative_user.m"
                    mdb__declarative_user__FirstStr_19 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_23_23, (MR_Integer) 0)));
#line 1060 "declarative_user.m"
                    mdb__declarative_user__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_23_23, (MR_Integer) 1)));
#line 1060 "declarative_user.m"
                    mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 1060 "declarative_user.m"
                    if (mdb__declarative_user__succeeded)
#line 1060 "declarative_user.m"
                      {
#line 1060 "declarative_user.m"
                        mdb__declarative_user__SecondStr_20 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_24_24, (MR_Integer) 0)));
#line 1060 "declarative_user.m"
                        mdb__declarative_user__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_24_24, (MR_Integer) 1)));
#line 8710 "mdb.declarative_user.c"
                        mdb__declarative_user__TypeInfo_18_29 = (MR_Word) &mdb__declarative_user_scalar_common_1[11];
#line 1060 "declarative_user.m"
                        {
#line 1060 "declarative_user.m"
                          mdb__declarative_user__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_user__TypeInfo_18_29, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (mdb__declarative_user__V_28_28)));
                        }
#line 1060 "declarative_user.m"
                        if (mdb__declarative_user__succeeded)
#line 1060 "declarative_user.m"
                          {
#line 1061 "declarative_user.m"
                            {
#line 1061 "declarative_user.m"
                              mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__FirstStr_19, &mdb__declarative_user__First_21);
                            }
#line 1060 "declarative_user.m"
                            if (mdb__declarative_user__succeeded)
#line 1060 "declarative_user.m"
                              {
#line 1062 "declarative_user.m"
                                {
#line 1062 "declarative_user.m"
                                  mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__SecondStr_20, &mdb__declarative_user__Second_22);
                                }
#line 1060 "declarative_user.m"
                                if (mdb__declarative_user__succeeded)
#line 1060 "declarative_user.m"
                                  {
#line 1063 "declarative_user.m"
                                    mdb__declarative_user__succeeded = (mdb__declarative_user__First_21 <= mdb__declarative_user__Second_22);
#line 1066 "declarative_user.m"
                                    if (mdb__declarative_user__succeeded)
#line 1064 "declarative_user.m"
                                      {
#line 1064 "declarative_user.m"
                                        mdb__declarative_user__From_4 = mdb__declarative_user__First_21;
#line 1065 "declarative_user.m"
                                        mdb__declarative_user__To_5 = mdb__declarative_user__Second_22;
#line 1064 "declarative_user.m"
                                      }
#line 1066 "declarative_user.m"
                                    else
#line 1067 "declarative_user.m"
                                      {
#line 1067 "declarative_user.m"
                                        mdb__declarative_user__From_4 = mdb__declarative_user__Second_22;
#line 1068 "declarative_user.m"
                                        mdb__declarative_user__To_5 = mdb__declarative_user__First_21;
#line 1067 "declarative_user.m"
                                      }
#line 1066 "declarative_user.m"
                                    mdb__declarative_user__succeeded = MR_TRUE;
#line 1060 "declarative_user.m"
                                  }
#line 1060 "declarative_user.m"
                              }
#line 1060 "declarative_user.m"
                          }
#line 1060 "declarative_user.m"
                      }
#line 1060 "declarative_user.m"
                  }
#line 1060 "declarative_user.m"
              }
#line 963 "declarative_user.m"
            if (mdb__declarative_user__succeeded)
#line 963 "declarative_user.m"
              {
#line 963 "declarative_user.m"
                {
#line 963 "declarative_user.m"
                  MR_Word base;
#line 963 "declarative_user.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 963 "declarative_user.m"
                  *mdb__declarative_user__HeadVar__2_2 = base;
#line 963 "declarative_user.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 963 "declarative_user.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_user__From_4));
#line 963 "declarative_user.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mdb__declarative_user__To_5));
#line 963 "declarative_user.m"
                }
#line 963 "declarative_user.m"
                mdb__declarative_user__succeeded = MR_TRUE;
#line 963 "declarative_user.m"
              }
#line 963 "declarative_user.m"
          }
#line 962 "declarative_user.m"
        else
#line 965 "declarative_user.m"
          {
#line 965 "declarative_user.m"
            MR_String mdb__declarative_user__Arg_7;
#line 965 "declarative_user.m"
            MR_Integer mdb__declarative_user__From_8;
#line 965 "declarative_user.m"
            MR_Integer mdb__declarative_user__To_9;
#line 965 "declarative_user.m"
            MR_Word mdb__declarative_user__V_12_12;
#line 1059 "declarative_user.m"
            MR_Integer mdb__declarative_user__Num_33;

#line 965 "declarative_user.m"
            mdb__declarative_user__succeeded = (strcmp(mdb__declarative_user__V_14_14, (MR_String) "io") == 0);
#line 965 "declarative_user.m"
            if (mdb__declarative_user__succeeded)
#line 965 "declarative_user.m"
              {
#line 965 "declarative_user.m"
                mdb__declarative_user__Arg_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_13_13, (MR_Integer) 0)));
#line 965 "declarative_user.m"
                mdb__declarative_user__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_13_13, (MR_Integer) 1)));
#line 965 "declarative_user.m"
                mdb__declarative_user__succeeded = (mdb__declarative_user__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 965 "declarative_user.m"
                if (mdb__declarative_user__succeeded)
#line 965 "declarative_user.m"
                  {
#line 1056 "declarative_user.m"
                    {
#line 1056 "declarative_user.m"
                      mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__Arg_7, &mdb__declarative_user__Num_33);
                    }
#line 1059 "declarative_user.m"
                    if (mdb__declarative_user__succeeded)
#line 1057 "declarative_user.m"
                      {
#line 1057 "declarative_user.m"
                        mdb__declarative_user__From_8 = mdb__declarative_user__Num_33;
#line 1058 "declarative_user.m"
                        mdb__declarative_user__To_9 = mdb__declarative_user__Num_33;
#line 1057 "declarative_user.m"
                        mdb__declarative_user__succeeded = MR_TRUE;
#line 1057 "declarative_user.m"
                      }
#line 1059 "declarative_user.m"
                    else
#line 1060 "declarative_user.m"
                      {
#line 1060 "declarative_user.m"
                        MR_Word mdb__declarative_user__TypeInfo_18_44;
#line 1060 "declarative_user.m"
                        MR_String mdb__declarative_user__FirstStr_34;
#line 1060 "declarative_user.m"
                        MR_String mdb__declarative_user__SecondStr_35;
#line 1060 "declarative_user.m"
                        MR_Integer mdb__declarative_user__First_36;
#line 1060 "declarative_user.m"
                        MR_Integer mdb__declarative_user__Second_37;
#line 1060 "declarative_user.m"
                        MR_Word mdb__declarative_user__V_38_38;
#line 1060 "declarative_user.m"
                        MR_Word mdb__declarative_user__V_39_39;
#line 1060 "declarative_user.m"
                        MR_Word mdb__declarative_user__V_43_43;

#line 1060 "declarative_user.m"
                        {
#line 1060 "declarative_user.m"
                          mdb__declarative_user__V_38_38 = mercury__string__words_separator_2_f_0((MR_Word) &mdb__declarative_user_scalar_common_2[16], mdb__declarative_user__Arg_7);
                        }
#line 1060 "declarative_user.m"
                        mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 1060 "declarative_user.m"
                        if (mdb__declarative_user__succeeded)
#line 1060 "declarative_user.m"
                          {
#line 1060 "declarative_user.m"
                            mdb__declarative_user__FirstStr_34 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_38_38, (MR_Integer) 0)));
#line 1060 "declarative_user.m"
                            mdb__declarative_user__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_38_38, (MR_Integer) 1)));
#line 1060 "declarative_user.m"
                            mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 1060 "declarative_user.m"
                            if (mdb__declarative_user__succeeded)
#line 1060 "declarative_user.m"
                              {
#line 1060 "declarative_user.m"
                                mdb__declarative_user__SecondStr_35 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_39_39, (MR_Integer) 0)));
#line 1060 "declarative_user.m"
                                mdb__declarative_user__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_39_39, (MR_Integer) 1)));
#line 8895 "mdb.declarative_user.c"
                                mdb__declarative_user__TypeInfo_18_44 = (MR_Word) &mdb__declarative_user_scalar_common_1[11];
#line 1060 "declarative_user.m"
                                {
#line 1060 "declarative_user.m"
                                  mdb__declarative_user__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_user__TypeInfo_18_44, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (mdb__declarative_user__V_43_43)));
                                }
#line 1060 "declarative_user.m"
                                if (mdb__declarative_user__succeeded)
#line 1060 "declarative_user.m"
                                  {
#line 1061 "declarative_user.m"
                                    {
#line 1061 "declarative_user.m"
                                      mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__FirstStr_34, &mdb__declarative_user__First_36);
                                    }
#line 1060 "declarative_user.m"
                                    if (mdb__declarative_user__succeeded)
#line 1060 "declarative_user.m"
                                      {
#line 1062 "declarative_user.m"
                                        {
#line 1062 "declarative_user.m"
                                          mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__SecondStr_35, &mdb__declarative_user__Second_37);
                                        }
#line 1060 "declarative_user.m"
                                        if (mdb__declarative_user__succeeded)
#line 1060 "declarative_user.m"
                                          {
#line 1063 "declarative_user.m"
                                            mdb__declarative_user__succeeded = (mdb__declarative_user__First_36 <= mdb__declarative_user__Second_37);
#line 1066 "declarative_user.m"
                                            if (mdb__declarative_user__succeeded)
#line 1064 "declarative_user.m"
                                              {
#line 1064 "declarative_user.m"
                                                mdb__declarative_user__From_8 = mdb__declarative_user__First_36;
#line 1065 "declarative_user.m"
                                                mdb__declarative_user__To_9 = mdb__declarative_user__Second_37;
#line 1064 "declarative_user.m"
                                              }
#line 1066 "declarative_user.m"
                                            else
#line 1067 "declarative_user.m"
                                              {
#line 1067 "declarative_user.m"
                                                mdb__declarative_user__From_8 = mdb__declarative_user__Second_37;
#line 1068 "declarative_user.m"
                                                mdb__declarative_user__To_9 = mdb__declarative_user__First_36;
#line 1067 "declarative_user.m"
                                              }
#line 1066 "declarative_user.m"
                                            mdb__declarative_user__succeeded = MR_TRUE;
#line 1060 "declarative_user.m"
                                          }
#line 1060 "declarative_user.m"
                                      }
#line 1060 "declarative_user.m"
                                  }
#line 1060 "declarative_user.m"
                              }
#line 1060 "declarative_user.m"
                          }
#line 1060 "declarative_user.m"
                      }
#line 965 "declarative_user.m"
                    if (mdb__declarative_user__succeeded)
#line 965 "declarative_user.m"
                      {
#line 965 "declarative_user.m"
                        {
#line 965 "declarative_user.m"
                          MR_Word base;
#line 965 "declarative_user.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 965 "declarative_user.m"
                          *mdb__declarative_user__HeadVar__2_2 = base;
#line 965 "declarative_user.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 965 "declarative_user.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_user__From_8));
#line 965 "declarative_user.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mdb__declarative_user__To_9));
#line 965 "declarative_user.m"
                        }
#line 965 "declarative_user.m"
                        mdb__declarative_user__succeeded = MR_TRUE;
#line 965 "declarative_user.m"
                      }
#line 965 "declarative_user.m"
                  }
#line 965 "declarative_user.m"
              }
#line 965 "declarative_user.m"
          }
#line 962 "declarative_user.m"
      }
#line 962 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 962 "declarative_user.m"
  }
#line 960 "declarative_user.m"
}

#line 943 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__browse_arg_cmd_2_p_0(
#line 943 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 943 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2)
#line 943 "declarative_user.m"
{
#line 945 "declarative_user.m"
  {
#line 945 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;

#line 945 "declarative_user.m"
    if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 945 "declarative_user.m"
      {
#line 945 "declarative_user.m"
        *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_8[0]);
#line 945 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 945 "declarative_user.m"
      }
#line 945 "declarative_user.m"
    else
#line 945 "declarative_user.m"
      {
#line 945 "declarative_user.m"
        MR_Word mdb__declarative_user__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 945 "declarative_user.m"
        MR_String mdb__declarative_user__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));

#line 945 "declarative_user.m"
        if ((mdb__declarative_user__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 949 "declarative_user.m"
          {
#line 949 "declarative_user.m"
            MR_Integer mdb__declarative_user__ArgNum_6;

#line 947 "declarative_user.m"
            {
#line 947 "declarative_user.m"
              mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__V_28_28, &mdb__declarative_user__ArgNum_6);
            }
#line 949 "declarative_user.m"
            if (mdb__declarative_user__succeeded)
#line 948 "declarative_user.m"
              {
#line 948 "declarative_user.m"
                MR_Word mdb__declarative_user__V_8_8;

#line 948 "declarative_user.m"
                {
#line 948 "declarative_user.m"
                  mdb__declarative_user__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 948 "declarative_user.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_user__V_8_8, 0) = ((MR_Box) (mdb__declarative_user__ArgNum_6));
#line 948 "declarative_user.m"
                }
#line 948 "declarative_user.m"
                {
#line 948 "declarative_user.m"
                  MR_Word base;
#line 948 "declarative_user.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 948 "declarative_user.m"
                  *mdb__declarative_user__HeadVar__2_2 = base;
#line 948 "declarative_user.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__V_8_8));
#line 948 "declarative_user.m"
                }
#line 948 "declarative_user.m"
                mdb__declarative_user__succeeded = MR_TRUE;
#line 948 "declarative_user.m"
              }
#line 949 "declarative_user.m"
            else
#line 950 "declarative_user.m"
              {
#line 950 "declarative_user.m"
                MR_Word mdb__declarative_user__V_9_9;

#line 950 "declarative_user.m"
                if ((strcmp(mdb__declarative_user__V_28_28, (MR_String) "-x") == 0))
#line 950 "declarative_user.m"
                  mdb__declarative_user__succeeded = MR_TRUE;
#line 950 "declarative_user.m"
                else
#line 950 "declarative_user.m"
                  if ((strcmp(mdb__declarative_user__V_28_28, (MR_String) "--xml") == 0))
#line 950 "declarative_user.m"
                    mdb__declarative_user__succeeded = MR_TRUE;
#line 950 "declarative_user.m"
                  else
#line 950 "declarative_user.m"
                    mdb__declarative_user__succeeded = MR_FALSE;
#line 950 "declarative_user.m"
                if (mdb__declarative_user__succeeded)
#line 950 "declarative_user.m"
                  {
#line 951 "declarative_user.m"
                    mdb__declarative_user__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 951 "declarative_user.m"
                    *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), &mdb__declarative_user_scalar_common_8[0]);
#line 951 "declarative_user.m"
                    mdb__declarative_user__succeeded = MR_TRUE;
#line 950 "declarative_user.m"
                  }
#line 950 "declarative_user.m"
              }
#line 949 "declarative_user.m"
          }
#line 945 "declarative_user.m"
        else
#line 945 "declarative_user.m"
          {
#line 945 "declarative_user.m"
            MR_Word mdb__declarative_user__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_27_27, (MR_Integer) 1)));
#line 945 "declarative_user.m"
            MR_String mdb__declarative_user__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_27_27, (MR_Integer) 0)));

#line 955 "declarative_user.m"
            mdb__declarative_user__succeeded = (mdb__declarative_user__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 945 "declarative_user.m"
            if (mdb__declarative_user__succeeded)
#line 945 "declarative_user.m"
              {
#line 945 "declarative_user.m"
                if ((strcmp(mdb__declarative_user__V_28_28, (MR_String) "-x") == 0))
#line 953 "declarative_user.m"
                  {
#line 953 "declarative_user.m"
                    MR_Integer mdb__declarative_user__ArgNum_11;
#line 953 "declarative_user.m"
                    MR_Word mdb__declarative_user__V_15_15;

#line 954 "declarative_user.m"
                    {
#line 954 "declarative_user.m"
                      mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__V_30_30, &mdb__declarative_user__ArgNum_11);
                    }
#line 953 "declarative_user.m"
                    if (mdb__declarative_user__succeeded)
#line 953 "declarative_user.m"
                      {
#line 953 "declarative_user.m"
                        {
#line 953 "declarative_user.m"
                          mdb__declarative_user__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 953 "declarative_user.m"
                          MR_hl_field(MR_mktag(1), mdb__declarative_user__V_15_15, 0) = ((MR_Box) (mdb__declarative_user__ArgNum_11));
#line 953 "declarative_user.m"
                        }
#line 953 "declarative_user.m"
                        {
#line 953 "declarative_user.m"
                          MR_Word base;
#line 953 "declarative_user.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 953 "declarative_user.m"
                          *mdb__declarative_user__HeadVar__2_2 = base;
#line 953 "declarative_user.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_user__V_15_15));
#line 953 "declarative_user.m"
                        }
#line 953 "declarative_user.m"
                        mdb__declarative_user__succeeded = MR_TRUE;
#line 953 "declarative_user.m"
                      }
#line 953 "declarative_user.m"
                  }
#line 945 "declarative_user.m"
                else
#line 945 "declarative_user.m"
                  if ((strcmp(mdb__declarative_user__V_28_28, (MR_String) "io") == 0))
#line 957 "declarative_user.m"
                    {
#line 957 "declarative_user.m"
                      MR_Integer mdb__declarative_user__ArgNum_23;

#line 958 "declarative_user.m"
                      {
#line 958 "declarative_user.m"
                        mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__V_30_30, &mdb__declarative_user__ArgNum_23);
                      }
#line 957 "declarative_user.m"
                      if (mdb__declarative_user__succeeded)
#line 957 "declarative_user.m"
                        {
#line 957 "declarative_user.m"
                          {
#line 957 "declarative_user.m"
                            MR_Word base;
#line 957 "declarative_user.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 957 "declarative_user.m"
                            *mdb__declarative_user__HeadVar__2_2 = base;
#line 957 "declarative_user.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 957 "declarative_user.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_user__ArgNum_23));
#line 957 "declarative_user.m"
                          }
#line 957 "declarative_user.m"
                          mdb__declarative_user__succeeded = MR_TRUE;
#line 957 "declarative_user.m"
                        }
#line 957 "declarative_user.m"
                    }
#line 945 "declarative_user.m"
                  else
#line 945 "declarative_user.m"
                    if ((strcmp(mdb__declarative_user__V_28_28, (MR_String) "--xml") == 0))
#line 955 "declarative_user.m"
                      {
#line 955 "declarative_user.m"
                        MR_Integer mdb__declarative_user__ArgNum_17;
#line 955 "declarative_user.m"
                        MR_Word mdb__declarative_user__V_21_21;

#line 956 "declarative_user.m"
                        {
#line 956 "declarative_user.m"
                          mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__V_30_30, &mdb__declarative_user__ArgNum_17);
                        }
#line 955 "declarative_user.m"
                        if (mdb__declarative_user__succeeded)
#line 955 "declarative_user.m"
                          {
#line 955 "declarative_user.m"
                            {
#line 955 "declarative_user.m"
                              mdb__declarative_user__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 955 "declarative_user.m"
                              MR_hl_field(MR_mktag(1), mdb__declarative_user__V_21_21, 0) = ((MR_Box) (mdb__declarative_user__ArgNum_17));
#line 955 "declarative_user.m"
                            }
#line 955 "declarative_user.m"
                            {
#line 955 "declarative_user.m"
                              MR_Word base;
#line 955 "declarative_user.m"
                              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 955 "declarative_user.m"
                              *mdb__declarative_user__HeadVar__2_2 = base;
#line 955 "declarative_user.m"
                              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_user__V_21_21));
#line 955 "declarative_user.m"
                            }
#line 955 "declarative_user.m"
                            mdb__declarative_user__succeeded = MR_TRUE;
#line 955 "declarative_user.m"
                          }
#line 955 "declarative_user.m"
                      }
#line 945 "declarative_user.m"
                    else
#line 945 "declarative_user.m"
                      mdb__declarative_user__succeeded = MR_FALSE;
#line 945 "declarative_user.m"
              }
#line 945 "declarative_user.m"
          }
#line 945 "declarative_user.m"
      }
#line 945 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 945 "declarative_user.m"
  }
#line 943 "declarative_user.m"
}

#line 938 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__one_word_cmd_3_p_0(
#line 938 "declarative_user.m"
  MR_Word mdb__declarative_user__Cmd_4,
#line 938 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_2,
#line 938 "declarative_user.m"
  MR_Word * mdb__declarative_user__Cmd_3)
#line 938 "declarative_user.m"
{
#line 941 "declarative_user.m"
  {
#line 941 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded = (mdb__declarative_user__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 941 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 941 "declarative_user.m"
      {
#line 941 "declarative_user.m"
        *mdb__declarative_user__Cmd_3 = mdb__declarative_user__Cmd_4;
#line 941 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 941 "declarative_user.m"
      }
#line 941 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 941 "declarative_user.m"
  }
#line 938 "declarative_user.m"
}

#line 906 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_33(
#line 906 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 906 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 906 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 906 "declarative_user.m"
{
#line 906 "declarative_user.m"
  {
#line 906 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 906 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 906 "declarative_user.m"
    MR_Word mdb__declarative_user__conv32_Cmd_3;

#line 906 "declarative_user.m"
    {
#line 906 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv32_Cmd_3);
    }
#line 906 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 906 "declarative_user.m"
      {
#line 906 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv32_Cmd_3));
#line 906 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 906 "declarative_user.m"
      }
#line 906 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 906 "declarative_user.m"
  }
#line 906 "declarative_user.m"
}

#line 928 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_32(
#line 928 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 928 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 928 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 928 "declarative_user.m"
{
#line 928 "declarative_user.m"
  {
#line 928 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 928 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 928 "declarative_user.m"
    MR_Word mdb__declarative_user__conv31_HeadVar__2_2;

#line 928 "declarative_user.m"
    {
#line 928 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__num_io_actions_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv31_HeadVar__2_2);
    }
#line 928 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 928 "declarative_user.m"
      {
#line 928 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv31_HeadVar__2_2));
#line 928 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 928 "declarative_user.m"
      }
#line 928 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 928 "declarative_user.m"
  }
#line 928 "declarative_user.m"
}

#line 936 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_31(
#line 936 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 936 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 936 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 936 "declarative_user.m"
{
#line 936 "declarative_user.m"
  {
#line 936 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 936 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 936 "declarative_user.m"
    MR_Word mdb__declarative_user__conv30_Cmd_3;

#line 936 "declarative_user.m"
    {
#line 936 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv30_Cmd_3);
    }
#line 936 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 936 "declarative_user.m"
      {
#line 936 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv30_Cmd_3));
#line 936 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 936 "declarative_user.m"
      }
#line 936 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 936 "declarative_user.m"
  }
#line 936 "declarative_user.m"
}

#line 923 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_30(
#line 923 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 923 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 923 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 923 "declarative_user.m"
{
#line 923 "declarative_user.m"
  {
#line 923 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 923 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 923 "declarative_user.m"
    MR_Word mdb__declarative_user__conv29_UserCommand_4;

#line 923 "declarative_user.m"
    {
#line 923 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__format_arg_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv29_UserCommand_4);
    }
#line 923 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 923 "declarative_user.m"
      {
#line 923 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv29_UserCommand_4));
#line 923 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 923 "declarative_user.m"
      }
#line 923 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 923 "declarative_user.m"
  }
#line 923 "declarative_user.m"
}

#line 920 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_29(
#line 920 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 920 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 920 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 920 "declarative_user.m"
{
#line 920 "declarative_user.m"
  {
#line 920 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 920 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 920 "declarative_user.m"
    MR_Word mdb__declarative_user__conv28_HeadVar__2_2;

#line 920 "declarative_user.m"
    {
#line 920 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__browse_arg_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv28_HeadVar__2_2);
    }
#line 920 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 920 "declarative_user.m"
      {
#line 920 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv28_HeadVar__2_2));
#line 920 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 920 "declarative_user.m"
      }
#line 920 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 920 "declarative_user.m"
  }
#line 920 "declarative_user.m"
}

#line 926 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_28(
#line 926 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 926 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 926 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 926 "declarative_user.m"
{
#line 926 "declarative_user.m"
  {
#line 926 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 926 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 926 "declarative_user.m"
    MR_Word mdb__declarative_user__conv27_Command_6;

#line 926 "declarative_user.m"
    {
#line 926 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__format_param_arg_cmd_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv27_Command_6);
    }
#line 926 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 926 "declarative_user.m"
      {
#line 926 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv27_Command_6));
#line 926 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 926 "declarative_user.m"
      }
#line 926 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 926 "declarative_user.m"
  }
#line 926 "declarative_user.m"
}

#line 932 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_27(
#line 932 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 932 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 932 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 932 "declarative_user.m"
{
#line 932 "declarative_user.m"
  {
#line 932 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 932 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 932 "declarative_user.m"
    MR_Word mdb__declarative_user__conv26_HeadVar__2_2;

#line 932 "declarative_user.m"
    {
#line 932 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__trust_arg_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv26_HeadVar__2_2);
    }
#line 932 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 932 "declarative_user.m"
      {
#line 932 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv26_HeadVar__2_2));
#line 932 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 932 "declarative_user.m"
      }
#line 932 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 932 "declarative_user.m"
  }
#line 932 "declarative_user.m"
}

#line 922 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_26(
#line 922 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 922 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 922 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 922 "declarative_user.m"
{
#line 922 "declarative_user.m"
  {
#line 922 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 922 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 922 "declarative_user.m"
    MR_Word mdb__declarative_user__conv25_HeadVar__2_2;

#line 922 "declarative_user.m"
    {
#line 922 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__print_arg_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv25_HeadVar__2_2);
    }
#line 922 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 922 "declarative_user.m"
      {
#line 922 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv25_HeadVar__2_2));
#line 922 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 922 "declarative_user.m"
      }
#line 922 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 922 "declarative_user.m"
  }
#line 922 "declarative_user.m"
}

#line 927 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_25(
#line 927 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 927 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 927 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 927 "declarative_user.m"
{
#line 927 "declarative_user.m"
  {
#line 927 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 927 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 927 "declarative_user.m"
    MR_Word mdb__declarative_user__conv24_Command_6;

#line 927 "declarative_user.m"
    {
#line 927 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__format_param_arg_cmd_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv24_Command_6);
    }
#line 927 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 927 "declarative_user.m"
      {
#line 927 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv24_Command_6));
#line 927 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 927 "declarative_user.m"
      }
#line 927 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 927 "declarative_user.m"
  }
#line 927 "declarative_user.m"
}

#line 924 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_24(
#line 924 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 924 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 924 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 924 "declarative_user.m"
{
#line 924 "declarative_user.m"
  {
#line 924 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 924 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 924 "declarative_user.m"
    MR_Word mdb__declarative_user__conv23_Command_6;

#line 924 "declarative_user.m"
    {
#line 924 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__format_param_arg_cmd_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv23_Command_6);
    }
#line 924 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 924 "declarative_user.m"
      {
#line 924 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv23_Command_6));
#line 924 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 924 "declarative_user.m"
      }
#line 924 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 924 "declarative_user.m"
  }
#line 924 "declarative_user.m"
}

#line 912 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_23(
#line 912 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 912 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 912 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 912 "declarative_user.m"
{
#line 912 "declarative_user.m"
  {
#line 912 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 912 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 912 "declarative_user.m"
    MR_Word mdb__declarative_user__conv22_Cmd_3;

#line 912 "declarative_user.m"
    {
#line 912 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv22_Cmd_3);
    }
#line 912 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 912 "declarative_user.m"
      {
#line 912 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv22_Cmd_3));
#line 912 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 912 "declarative_user.m"
      }
#line 912 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 912 "declarative_user.m"
  }
#line 912 "declarative_user.m"
}

#line 935 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_22(
#line 935 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 935 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 935 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 935 "declarative_user.m"
{
#line 935 "declarative_user.m"
  {
#line 935 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 935 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 935 "declarative_user.m"
    MR_Word mdb__declarative_user__conv21_Cmd_3;

#line 935 "declarative_user.m"
    {
#line 935 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv21_Cmd_3);
    }
#line 935 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 935 "declarative_user.m"
      {
#line 935 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv21_Cmd_3));
#line 935 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 935 "declarative_user.m"
      }
#line 935 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 935 "declarative_user.m"
  }
#line 935 "declarative_user.m"
}

#line 908 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_21(
#line 908 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 908 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 908 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 908 "declarative_user.m"
{
#line 908 "declarative_user.m"
  {
#line 908 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 908 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 908 "declarative_user.m"
    MR_Word mdb__declarative_user__conv20_Cmd_3;

#line 908 "declarative_user.m"
    {
#line 908 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv20_Cmd_3);
    }
#line 908 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 908 "declarative_user.m"
      {
#line 908 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv20_Cmd_3));
#line 908 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 908 "declarative_user.m"
      }
#line 908 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 908 "declarative_user.m"
  }
#line 908 "declarative_user.m"
}

#line 925 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_20(
#line 925 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 925 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 925 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 925 "declarative_user.m"
{
#line 925 "declarative_user.m"
  {
#line 925 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 925 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 925 "declarative_user.m"
    MR_Word mdb__declarative_user__conv19_Command_6;

#line 925 "declarative_user.m"
    {
#line 925 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__format_param_arg_cmd_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv19_Command_6);
    }
#line 925 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 925 "declarative_user.m"
      {
#line 925 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv19_Command_6));
#line 925 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 925 "declarative_user.m"
      }
#line 925 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 925 "declarative_user.m"
  }
#line 925 "declarative_user.m"
}

#line 914 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_19(
#line 914 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 914 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 914 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 914 "declarative_user.m"
{
#line 914 "declarative_user.m"
  {
#line 914 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 914 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 914 "declarative_user.m"
    MR_Word mdb__declarative_user__conv18_Cmd_3;

#line 914 "declarative_user.m"
    {
#line 914 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv18_Cmd_3);
    }
#line 914 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 914 "declarative_user.m"
      {
#line 914 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv18_Cmd_3));
#line 914 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 914 "declarative_user.m"
      }
#line 914 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 914 "declarative_user.m"
  }
#line 914 "declarative_user.m"
}

#line 933 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_18(
#line 933 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 933 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 933 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 933 "declarative_user.m"
{
#line 933 "declarative_user.m"
  {
#line 933 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 933 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 933 "declarative_user.m"
    MR_Word mdb__declarative_user__conv17_HeadVar__2_2;

#line 933 "declarative_user.m"
    {
#line 933 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__search_mode_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv17_HeadVar__2_2);
    }
#line 933 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 933 "declarative_user.m"
      {
#line 933 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv17_HeadVar__2_2));
#line 933 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 933 "declarative_user.m"
      }
#line 933 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 933 "declarative_user.m"
  }
#line 933 "declarative_user.m"
}

#line 918 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_17(
#line 918 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 918 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 918 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 918 "declarative_user.m"
{
#line 918 "declarative_user.m"
  {
#line 918 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 918 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 918 "declarative_user.m"
    MR_Word mdb__declarative_user__conv16_Cmd_3;

#line 918 "declarative_user.m"
    {
#line 918 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv16_Cmd_3);
    }
#line 918 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 918 "declarative_user.m"
      {
#line 918 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv16_Cmd_3));
#line 918 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 918 "declarative_user.m"
      }
#line 918 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 918 "declarative_user.m"
  }
#line 918 "declarative_user.m"
}

#line 917 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_16(
#line 917 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 917 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 917 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 917 "declarative_user.m"
{
#line 917 "declarative_user.m"
  {
#line 917 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 917 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 917 "declarative_user.m"
    MR_Word mdb__declarative_user__conv15_HeadVar__2_2;

#line 917 "declarative_user.m"
    {
#line 917 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__help_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv15_HeadVar__2_2);
    }
#line 917 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 917 "declarative_user.m"
      {
#line 917 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv15_HeadVar__2_2));
#line 917 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 917 "declarative_user.m"
      }
#line 917 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 917 "declarative_user.m"
  }
#line 917 "declarative_user.m"
}

#line 902 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_15(
#line 902 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 902 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 902 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 902 "declarative_user.m"
{
#line 902 "declarative_user.m"
  {
#line 902 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 902 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 902 "declarative_user.m"
    MR_Word mdb__declarative_user__conv14_Cmd_3;

#line 902 "declarative_user.m"
    {
#line 902 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv14_Cmd_3);
    }
#line 902 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 902 "declarative_user.m"
      {
#line 902 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv14_Cmd_3));
#line 902 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 902 "declarative_user.m"
      }
#line 902 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 902 "declarative_user.m"
  }
#line 902 "declarative_user.m"
}

#line 909 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_14(
#line 909 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 909 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 909 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 909 "declarative_user.m"
{
#line 909 "declarative_user.m"
  {
#line 909 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 909 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 909 "declarative_user.m"
    MR_Word mdb__declarative_user__conv13_Cmd_3;

#line 909 "declarative_user.m"
    {
#line 909 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv13_Cmd_3);
    }
#line 909 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 909 "declarative_user.m"
      {
#line 909 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv13_Cmd_3));
#line 909 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 909 "declarative_user.m"
      }
#line 909 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 909 "declarative_user.m"
  }
#line 909 "declarative_user.m"
}

#line 904 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_13(
#line 904 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 904 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 904 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 904 "declarative_user.m"
{
#line 904 "declarative_user.m"
  {
#line 904 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 904 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 904 "declarative_user.m"
    MR_Word mdb__declarative_user__conv12_Cmd_3;

#line 904 "declarative_user.m"
    {
#line 904 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv12_Cmd_3);
    }
#line 904 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 904 "declarative_user.m"
      {
#line 904 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv12_Cmd_3));
#line 904 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 904 "declarative_user.m"
      }
#line 904 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 904 "declarative_user.m"
  }
#line 904 "declarative_user.m"
}

#line 901 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_12(
#line 901 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 901 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 901 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 901 "declarative_user.m"
{
#line 901 "declarative_user.m"
  {
#line 901 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 901 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 901 "declarative_user.m"
    MR_Word mdb__declarative_user__conv11_Cmd_3;

#line 901 "declarative_user.m"
    {
#line 901 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv11_Cmd_3);
    }
#line 901 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 901 "declarative_user.m"
      {
#line 901 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv11_Cmd_3));
#line 901 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 901 "declarative_user.m"
      }
#line 901 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 901 "declarative_user.m"
  }
#line 901 "declarative_user.m"
}

#line 931 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_11(
#line 931 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 931 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 931 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 931 "declarative_user.m"
{
#line 931 "declarative_user.m"
  {
#line 931 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 931 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 931 "declarative_user.m"
    MR_Word mdb__declarative_user__conv10_HeadVar__2_2;

#line 931 "declarative_user.m"
    {
#line 931 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__trust_arg_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv10_HeadVar__2_2);
    }
#line 931 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 931 "declarative_user.m"
      {
#line 931 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv10_HeadVar__2_2));
#line 931 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 931 "declarative_user.m"
      }
#line 931 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 931 "declarative_user.m"
  }
#line 931 "declarative_user.m"
}

#line 907 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_10(
#line 907 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 907 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 907 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 907 "declarative_user.m"
{
#line 907 "declarative_user.m"
  {
#line 907 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 907 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 907 "declarative_user.m"
    MR_Word mdb__declarative_user__conv9_Cmd_3;

#line 907 "declarative_user.m"
    {
#line 907 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv9_Cmd_3);
    }
#line 907 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 907 "declarative_user.m"
      {
#line 907 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv9_Cmd_3));
#line 907 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 907 "declarative_user.m"
      }
#line 907 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 907 "declarative_user.m"
  }
#line 907 "declarative_user.m"
}

#line 913 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_9(
#line 913 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 913 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 913 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 913 "declarative_user.m"
{
#line 913 "declarative_user.m"
  {
#line 913 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 913 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 913 "declarative_user.m"
    MR_Word mdb__declarative_user__conv8_Cmd_3;

#line 913 "declarative_user.m"
    {
#line 913 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv8_Cmd_3);
    }
#line 913 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 913 "declarative_user.m"
      {
#line 913 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv8_Cmd_3));
#line 913 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 913 "declarative_user.m"
      }
#line 913 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 913 "declarative_user.m"
  }
#line 913 "declarative_user.m"
}

#line 921 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_8(
#line 921 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 921 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 921 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 921 "declarative_user.m"
{
#line 921 "declarative_user.m"
  {
#line 921 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 921 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 921 "declarative_user.m"
    MR_Word mdb__declarative_user__conv7_HeadVar__2_2;

#line 921 "declarative_user.m"
    {
#line 921 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__print_arg_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv7_HeadVar__2_2);
    }
#line 921 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 921 "declarative_user.m"
      {
#line 921 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv7_HeadVar__2_2));
#line 921 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 921 "declarative_user.m"
      }
#line 921 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 921 "declarative_user.m"
  }
#line 921 "declarative_user.m"
}

#line 903 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_7(
#line 903 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 903 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 903 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 903 "declarative_user.m"
{
#line 903 "declarative_user.m"
  {
#line 903 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 903 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 903 "declarative_user.m"
    MR_Word mdb__declarative_user__conv6_Cmd_3;

#line 903 "declarative_user.m"
    {
#line 903 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv6_Cmd_3);
    }
#line 903 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 903 "declarative_user.m"
      {
#line 903 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv6_Cmd_3));
#line 903 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 903 "declarative_user.m"
      }
#line 903 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 903 "declarative_user.m"
  }
#line 903 "declarative_user.m"
}

#line 934 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_6(
#line 934 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 934 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 934 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 934 "declarative_user.m"
{
#line 934 "declarative_user.m"
  {
#line 934 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 934 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 934 "declarative_user.m"
    MR_Word mdb__declarative_user__conv5_HeadVar__2_2;

#line 934 "declarative_user.m"
    {
#line 934 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__search_mode_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv5_HeadVar__2_2);
    }
#line 934 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 934 "declarative_user.m"
      {
#line 934 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv5_HeadVar__2_2));
#line 934 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 934 "declarative_user.m"
      }
#line 934 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 934 "declarative_user.m"
  }
#line 934 "declarative_user.m"
}

#line 905 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_5(
#line 905 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 905 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 905 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 905 "declarative_user.m"
{
#line 905 "declarative_user.m"
  {
#line 905 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 905 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 905 "declarative_user.m"
    MR_Word mdb__declarative_user__conv4_Cmd_3;

#line 905 "declarative_user.m"
    {
#line 905 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv4_Cmd_3);
    }
#line 905 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 905 "declarative_user.m"
      {
#line 905 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv4_Cmd_3));
#line 905 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 905 "declarative_user.m"
      }
#line 905 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 905 "declarative_user.m"
  }
#line 905 "declarative_user.m"
}

#line 916 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_4(
#line 916 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 916 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 916 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 916 "declarative_user.m"
{
#line 916 "declarative_user.m"
  {
#line 916 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 916 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 916 "declarative_user.m"
    MR_Word mdb__declarative_user__conv3_HeadVar__2_2;

#line 916 "declarative_user.m"
    {
#line 916 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__help_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv3_HeadVar__2_2);
    }
#line 916 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 916 "declarative_user.m"
      {
#line 916 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv3_HeadVar__2_2));
#line 916 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 916 "declarative_user.m"
      }
#line 916 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 916 "declarative_user.m"
  }
#line 916 "declarative_user.m"
}

#line 919 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_3(
#line 919 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 919 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 919 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 919 "declarative_user.m"
{
#line 919 "declarative_user.m"
  {
#line 919 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 919 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 919 "declarative_user.m"
    MR_Word mdb__declarative_user__conv2_HeadVar__2_2;

#line 919 "declarative_user.m"
    {
#line 919 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__browse_arg_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv2_HeadVar__2_2);
    }
#line 919 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 919 "declarative_user.m"
      {
#line 919 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv2_HeadVar__2_2));
#line 919 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 919 "declarative_user.m"
      }
#line 919 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 919 "declarative_user.m"
  }
#line 919 "declarative_user.m"
}

#line 911 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_2(
#line 911 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 911 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 911 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 911 "declarative_user.m"
{
#line 911 "declarative_user.m"
  {
#line 911 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 911 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 911 "declarative_user.m"
    MR_Word mdb__declarative_user__conv1_Cmd_3;

#line 911 "declarative_user.m"
    {
#line 911 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv1_Cmd_3);
    }
#line 911 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 911 "declarative_user.m"
      {
#line 911 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv1_Cmd_3));
#line 911 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 911 "declarative_user.m"
      }
#line 911 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 911 "declarative_user.m"
  }
#line 911 "declarative_user.m"
}

#line 915 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_1(
#line 915 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 915 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 915 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 915 "declarative_user.m"
{
#line 915 "declarative_user.m"
  {
#line 915 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 915 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 915 "declarative_user.m"
    MR_Word mdb__declarative_user__conv0_HeadVar__2_2;

#line 915 "declarative_user.m"
    {
#line 915 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__help_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv0_HeadVar__2_2);
    }
#line 915 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 915 "declarative_user.m"
      {
#line 915 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv0_HeadVar__2_2));
#line 915 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 915 "declarative_user.m"
      }
#line 915 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 915 "declarative_user.m"
  }
#line 915 "declarative_user.m"
}

#line 897 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0(
#line 897 "declarative_user.m"
  MR_String mdb__declarative_user__HeadVar__1_1,
#line 897 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2)
#line 897 "declarative_user.m"
{
#line 901 "declarative_user.m"
  {
#line 901 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;

#line 901 "declarative_user.m"
    if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "\?") == 0))
#line 915 "declarative_user.m"
      {
#line 915 "declarative_user.m"
        *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_2[2];
#line 915 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 915 "declarative_user.m"
      }
#line 901 "declarative_user.m"
    else
#line 901 "declarative_user.m"
      if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "a") == 0))
#line 911 "declarative_user.m"
        {
#line 911 "declarative_user.m"
          *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_6[1];
#line 911 "declarative_user.m"
          mdb__declarative_user__succeeded = MR_TRUE;
#line 911 "declarative_user.m"
        }
#line 901 "declarative_user.m"
      else
#line 901 "declarative_user.m"
        if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "b") == 0))
#line 919 "declarative_user.m"
          {
#line 919 "declarative_user.m"
            *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_2[3];
#line 919 "declarative_user.m"
            mdb__declarative_user__succeeded = MR_TRUE;
#line 919 "declarative_user.m"
          }
#line 901 "declarative_user.m"
        else
#line 901 "declarative_user.m"
          if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "h") == 0))
#line 916 "declarative_user.m"
            {
#line 916 "declarative_user.m"
              *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_2[4];
#line 916 "declarative_user.m"
              mdb__declarative_user__succeeded = MR_TRUE;
#line 916 "declarative_user.m"
            }
#line 901 "declarative_user.m"
          else
#line 901 "declarative_user.m"
            if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "i") == 0))
#line 905 "declarative_user.m"
              {
#line 905 "declarative_user.m"
                *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_6[2];
#line 905 "declarative_user.m"
                mdb__declarative_user__succeeded = MR_TRUE;
#line 905 "declarative_user.m"
              }
#line 901 "declarative_user.m"
            else
#line 901 "declarative_user.m"
              if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "m") == 0))
#line 934 "declarative_user.m"
                {
#line 934 "declarative_user.m"
                  *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_2[5];
#line 934 "declarative_user.m"
                  mdb__declarative_user__succeeded = MR_TRUE;
#line 934 "declarative_user.m"
                }
#line 901 "declarative_user.m"
              else
#line 901 "declarative_user.m"
                if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "n") == 0))
#line 903 "declarative_user.m"
                  {
#line 903 "declarative_user.m"
                    *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_6[3];
#line 903 "declarative_user.m"
                    mdb__declarative_user__succeeded = MR_TRUE;
#line 903 "declarative_user.m"
                  }
#line 901 "declarative_user.m"
                else
#line 901 "declarative_user.m"
                  if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "p") == 0))
#line 921 "declarative_user.m"
                    {
#line 921 "declarative_user.m"
                      *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_2[6];
#line 921 "declarative_user.m"
                      mdb__declarative_user__succeeded = MR_TRUE;
#line 921 "declarative_user.m"
                    }
#line 901 "declarative_user.m"
                  else
#line 901 "declarative_user.m"
                    if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "q") == 0))
#line 913 "declarative_user.m"
                      {
#line 913 "declarative_user.m"
                        *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_6[4];
#line 913 "declarative_user.m"
                        mdb__declarative_user__succeeded = MR_TRUE;
#line 913 "declarative_user.m"
                      }
#line 901 "declarative_user.m"
                    else
#line 901 "declarative_user.m"
                      if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "s") == 0))
#line 907 "declarative_user.m"
                        {
#line 907 "declarative_user.m"
                          *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_6[5];
#line 907 "declarative_user.m"
                          mdb__declarative_user__succeeded = MR_TRUE;
#line 907 "declarative_user.m"
                        }
#line 901 "declarative_user.m"
                      else
#line 901 "declarative_user.m"
                        if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "t") == 0))
#line 931 "declarative_user.m"
                          {
#line 931 "declarative_user.m"
                            *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_2[7];
#line 931 "declarative_user.m"
                            mdb__declarative_user__succeeded = MR_TRUE;
#line 931 "declarative_user.m"
                          }
#line 901 "declarative_user.m"
                        else
#line 901 "declarative_user.m"
                          if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "y") == 0))
#line 901 "declarative_user.m"
                            {
#line 901 "declarative_user.m"
                              *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_6[6];
#line 901 "declarative_user.m"
                              mdb__declarative_user__succeeded = MR_TRUE;
#line 901 "declarative_user.m"
                            }
#line 901 "declarative_user.m"
                          else
#line 901 "declarative_user.m"
                            if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "no") == 0))
#line 904 "declarative_user.m"
                              {
#line 904 "declarative_user.m"
                                *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_6[7];
#line 904 "declarative_user.m"
                                mdb__declarative_user__succeeded = MR_TRUE;
#line 904 "declarative_user.m"
                              }
#line 901 "declarative_user.m"
                            else
#line 901 "declarative_user.m"
                              if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "pd") == 0))
#line 909 "declarative_user.m"
                                {
#line 909 "declarative_user.m"
                                  *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_6[8];
#line 909 "declarative_user.m"
                                  mdb__declarative_user__succeeded = MR_TRUE;
#line 909 "declarative_user.m"
                                }
#line 901 "declarative_user.m"
                              else
#line 901 "declarative_user.m"
                                if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "yes") == 0))
#line 902 "declarative_user.m"
                                  {
#line 902 "declarative_user.m"
                                    *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_6[9];
#line 902 "declarative_user.m"
                                    mdb__declarative_user__succeeded = MR_TRUE;
#line 902 "declarative_user.m"
                                  }
#line 901 "declarative_user.m"
                                else
#line 901 "declarative_user.m"
                                  if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "help") == 0))
#line 917 "declarative_user.m"
                                    {
#line 917 "declarative_user.m"
                                      *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_2[8];
#line 917 "declarative_user.m"
                                      mdb__declarative_user__succeeded = MR_TRUE;
#line 917 "declarative_user.m"
                                    }
#line 901 "declarative_user.m"
                                  else
#line 901 "declarative_user.m"
                                    if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "info") == 0))
#line 918 "declarative_user.m"
                                      {
#line 918 "declarative_user.m"
                                        *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_6[10];
#line 918 "declarative_user.m"
                                        mdb__declarative_user__succeeded = MR_TRUE;
#line 918 "declarative_user.m"
                                      }
#line 901 "declarative_user.m"
                                    else
#line 901 "declarative_user.m"
                                      if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "mode") == 0))
#line 933 "declarative_user.m"
                                        {
#line 933 "declarative_user.m"
                                          *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_2[9];
#line 933 "declarative_user.m"
                                          mdb__declarative_user__succeeded = MR_TRUE;
#line 933 "declarative_user.m"
                                        }
#line 901 "declarative_user.m"
                                      else
#line 901 "declarative_user.m"
                                        if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "quit") == 0))
#line 914 "declarative_user.m"
                                          {
#line 914 "declarative_user.m"
                                            *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_6[11];
#line 914 "declarative_user.m"
                                            mdb__declarative_user__succeeded = MR_TRUE;
#line 914 "declarative_user.m"
                                          }
#line 901 "declarative_user.m"
                                        else
#line 901 "declarative_user.m"
                                          if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "size") == 0))
#line 925 "declarative_user.m"
                                            {
#line 925 "declarative_user.m"
                                              *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_6[12];
#line 925 "declarative_user.m"
                                              mdb__declarative_user__succeeded = MR_TRUE;
#line 925 "declarative_user.m"
                                            }
#line 901 "declarative_user.m"
                                          else
#line 901 "declarative_user.m"
                                            if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "skip") == 0))
#line 908 "declarative_user.m"
                                              {
#line 908 "declarative_user.m"
                                                *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_6[13];
#line 908 "declarative_user.m"
                                                mdb__declarative_user__succeeded = MR_TRUE;
#line 908 "declarative_user.m"
                                              }
#line 901 "declarative_user.m"
                                            else
#line 901 "declarative_user.m"
                                              if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "undo") == 0))
#line 935 "declarative_user.m"
                                                {
#line 935 "declarative_user.m"
                                                  *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_6[14];
#line 935 "declarative_user.m"
                                                  mdb__declarative_user__succeeded = MR_TRUE;
#line 935 "declarative_user.m"
                                                }
#line 901 "declarative_user.m"
                                              else
#line 901 "declarative_user.m"
                                                if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "abort") == 0))
#line 912 "declarative_user.m"
                                                  {
#line 912 "declarative_user.m"
                                                    *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_6[15];
#line 912 "declarative_user.m"
                                                    mdb__declarative_user__succeeded = MR_TRUE;
#line 912 "declarative_user.m"
                                                  }
#line 901 "declarative_user.m"
                                                else
#line 901 "declarative_user.m"
                                                  if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "depth") == 0))
#line 924 "declarative_user.m"
                                                    {
#line 924 "declarative_user.m"
                                                      *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_6[16];
#line 924 "declarative_user.m"
                                                      mdb__declarative_user__succeeded = MR_TRUE;
#line 924 "declarative_user.m"
                                                    }
#line 901 "declarative_user.m"
                                                  else
#line 901 "declarative_user.m"
                                                    if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "lines") == 0))
#line 927 "declarative_user.m"
                                                      {
#line 927 "declarative_user.m"
                                                        *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_6[17];
#line 927 "declarative_user.m"
                                                        mdb__declarative_user__succeeded = MR_TRUE;
#line 927 "declarative_user.m"
                                                      }
#line 901 "declarative_user.m"
                                                    else
#line 901 "declarative_user.m"
                                                      if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "print") == 0))
#line 922 "declarative_user.m"
                                                        {
#line 922 "declarative_user.m"
                                                          *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_2[10];
#line 922 "declarative_user.m"
                                                          mdb__declarative_user__succeeded = MR_TRUE;
#line 922 "declarative_user.m"
                                                        }
#line 901 "declarative_user.m"
                                                      else
#line 901 "declarative_user.m"
                                                        if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "trust") == 0))
#line 932 "declarative_user.m"
                                                          {
#line 932 "declarative_user.m"
                                                            *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_2[11];
#line 932 "declarative_user.m"
                                                            mdb__declarative_user__succeeded = MR_TRUE;
#line 932 "declarative_user.m"
                                                          }
#line 901 "declarative_user.m"
                                                        else
#line 901 "declarative_user.m"
                                                          if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "width") == 0))
#line 926 "declarative_user.m"
                                                            {
#line 926 "declarative_user.m"
                                                              *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_6[18];
#line 926 "declarative_user.m"
                                                              mdb__declarative_user__succeeded = MR_TRUE;
#line 926 "declarative_user.m"
                                                            }
#line 901 "declarative_user.m"
                                                          else
#line 901 "declarative_user.m"
                                                            if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "browse") == 0))
#line 920 "declarative_user.m"
                                                              {
#line 920 "declarative_user.m"
                                                                *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_2[12];
#line 920 "declarative_user.m"
                                                                mdb__declarative_user__succeeded = MR_TRUE;
#line 920 "declarative_user.m"
                                                              }
#line 901 "declarative_user.m"
                                                            else
#line 901 "declarative_user.m"
                                                              if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "format") == 0))
#line 923 "declarative_user.m"
                                                                {
#line 923 "declarative_user.m"
                                                                  *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_2[13];
#line 923 "declarative_user.m"
                                                                  mdb__declarative_user__succeeded = MR_TRUE;
#line 923 "declarative_user.m"
                                                                }
#line 901 "declarative_user.m"
                                                              else
#line 901 "declarative_user.m"
                                                                if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "params") == 0))
#line 936 "declarative_user.m"
                                                                  {
#line 936 "declarative_user.m"
                                                                    *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_6[19];
#line 936 "declarative_user.m"
                                                                    mdb__declarative_user__succeeded = MR_TRUE;
#line 936 "declarative_user.m"
                                                                  }
#line 901 "declarative_user.m"
                                                                else
#line 901 "declarative_user.m"
                                                                  if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "actions") == 0))
#line 928 "declarative_user.m"
                                                                    {
#line 928 "declarative_user.m"
                                                                      *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_2[14];
#line 928 "declarative_user.m"
                                                                      mdb__declarative_user__succeeded = MR_TRUE;
#line 928 "declarative_user.m"
                                                                    }
#line 901 "declarative_user.m"
                                                                  else
#line 901 "declarative_user.m"
                                                                    if ((strcmp(mdb__declarative_user__HeadVar__1_1, (MR_String) "inadmissible") == 0))
#line 906 "declarative_user.m"
                                                                      {
#line 906 "declarative_user.m"
                                                                        *mdb__declarative_user__HeadVar__2_2 = (MR_Word) &mdb__declarative_user_scalar_common_6[20];
#line 906 "declarative_user.m"
                                                                        mdb__declarative_user__succeeded = MR_TRUE;
#line 906 "declarative_user.m"
                                                                      }
#line 901 "declarative_user.m"
                                                                    else
#line 901 "declarative_user.m"
                                                                      mdb__declarative_user__succeeded = MR_FALSE;
#line 901 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 901 "declarative_user.m"
  }
#line 897 "declarative_user.m"
}

#line 871 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__get_command_6_p_0_1(
#line 871 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 871 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1)
#line 871 "declarative_user.m"
{
#line 871 "declarative_user.m"
  {
#line 871 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 871 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;

#line 871 "declarative_user.m"
    {
#line 871 "declarative_user.m"
      return mdb__declarative_user__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) mdb__declarative_user__wrapper_arg_1));
    }
#line 871 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 871 "declarative_user.m"
  }
#line 871 "declarative_user.m"
}

#line 864 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__get_command_6_p_0(
#line 864 "declarative_user.m"
  MR_String mdb__declarative_user__Prompt_7,
#line 864 "declarative_user.m"
  MR_Word * mdb__declarative_user__Command_8,
#line 864 "declarative_user.m"
  MR_Word mdb__declarative_user__User_9,
#line 864 "declarative_user.m"
  MR_Word * mdb__declarative_user__User_4)
#line 864 "declarative_user.m"
{
#line 867 "declarative_user.m"
  {
#line 867 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 867 "declarative_user.m"
    MR_Word mdb__declarative_user__Result_11;
#line 867 "declarative_user.m"
    MR_Word mdb__declarative_user__V_22_22;
#line 867 "declarative_user.m"
    MR_Word mdb__declarative_user__V_30_30;
#line 868 "declarative_user.m"
    MR_Word mdb__declarative_user__V_31_31;
#line 868 "declarative_user.m"
    MR_Word mdb__declarative_user__V_32_32;
#line 868 "declarative_user.m"
    MR_Word mdb__declarative_user__V_33_33;
#line 868 "declarative_user.m"
    MR_Word mdb__declarative_user__V_34_34;

#line 867 "declarative_user.m"
    *mdb__declarative_user__User_4 = mdb__declarative_user__User_9;
#line 868 "declarative_user.m"
    mdb__declarative_user__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 0)));
#line 868 "declarative_user.m"
    mdb__declarative_user__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 1)));
#line 868 "declarative_user.m"
    mdb__declarative_user__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 2)));
#line 868 "declarative_user.m"
    mdb__declarative_user__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 3)));
#line 868 "declarative_user.m"
    mdb__declarative_user__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 4)));
#line 868 "declarative_user.m"
    mdb__declarative_user__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 5)));
#line 868 "declarative_user.m"
    {
#line 868 "declarative_user.m"
      mdb__util__trace_getline_6_p_0(mdb__declarative_user__Prompt_7, &mdb__declarative_user__Result_11, mdb__declarative_user__V_22_22, mdb__declarative_user__V_30_30);
    }
#line 886 "declarative_user.m"
    if ((mdb__declarative_user__Result_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 894 "declarative_user.m"
      *mdb__declarative_user__Command_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
#line 886 "declarative_user.m"
    else
#line 886 "declarative_user.m"
      if (((MR_tag((MR_Word) mdb__declarative_user__Result_11)) == (MR_mktag((MR_Integer) 2))))
#line 887 "declarative_user.m"
        {
#line 887 "declarative_user.m"
          MR_Word mdb__declarative_user__Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__Result_11, (MR_Integer) 0)));
#line 887 "declarative_user.m"
          MR_String mdb__declarative_user__Msg_19;
#line 887 "declarative_user.m"
          MR_Word mdb__declarative_user__V_25_25;
#line 887 "declarative_user.m"
          MR_Word mdb__declarative_user__V_27_27;
#line 889 "declarative_user.m"
          MR_Word mdb__declarative_user__V_40_40;
#line 889 "declarative_user.m"
          MR_Word mdb__declarative_user__V_41_41;
#line 889 "declarative_user.m"
          MR_Word mdb__declarative_user__V_42_42;
#line 889 "declarative_user.m"
          MR_Word mdb__declarative_user__V_43_43;
#line 889 "declarative_user.m"
          MR_Word mdb__declarative_user__V_44_44;
#line 890 "declarative_user.m"
          MR_Word mdb__declarative_user__V_45_45;
#line 890 "declarative_user.m"
          MR_Word mdb__declarative_user__V_46_46;
#line 890 "declarative_user.m"
          MR_Word mdb__declarative_user__V_47_47;
#line 890 "declarative_user.m"
          MR_Word mdb__declarative_user__V_48_48;
#line 890 "declarative_user.m"
          MR_Word mdb__declarative_user__V_49_49;

#line 888 "declarative_user.m"
          {
#line 888 "declarative_user.m"
            mercury__io__error_message_2_p_0(mdb__declarative_user__Error_18, &mdb__declarative_user__Msg_19);
          }
#line 889 "declarative_user.m"
          mdb__declarative_user__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 0)));
#line 889 "declarative_user.m"
          mdb__declarative_user__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 1)));
#line 889 "declarative_user.m"
          mdb__declarative_user__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 2)));
#line 889 "declarative_user.m"
          mdb__declarative_user__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 3)));
#line 889 "declarative_user.m"
          mdb__declarative_user__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 4)));
#line 889 "declarative_user.m"
          mdb__declarative_user__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 5)));
#line 889 "declarative_user.m"
          {
#line 889 "declarative_user.m"
            mercury__io__write_string_4_p_0(mdb__declarative_user__V_25_25, mdb__declarative_user__Msg_19);
          }
#line 890 "declarative_user.m"
          mdb__declarative_user__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 0)));
#line 890 "declarative_user.m"
          mdb__declarative_user__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 1)));
#line 890 "declarative_user.m"
          mdb__declarative_user__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 2)));
#line 890 "declarative_user.m"
          mdb__declarative_user__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 3)));
#line 890 "declarative_user.m"
          mdb__declarative_user__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 4)));
#line 890 "declarative_user.m"
          mdb__declarative_user__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 5)));
#line 890 "declarative_user.m"
          {
#line 890 "declarative_user.m"
            mercury__io__nl_3_p_0(mdb__declarative_user__V_27_27);
          }
#line 891 "declarative_user.m"
          *mdb__declarative_user__Command_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
#line 887 "declarative_user.m"
        }
#line 886 "declarative_user.m"
      else
#line 870 "declarative_user.m"
        {
#line 870 "declarative_user.m"
          MR_String mdb__declarative_user__String_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Result_11, (MR_Integer) 0)));
#line 870 "declarative_user.m"
          MR_Word mdb__declarative_user__Words_13;

#line 871 "declarative_user.m"
          {
#line 871 "declarative_user.m"
            mdb__declarative_user__Words_13 = mercury__string__words_separator_2_f_0((MR_Word) &mdb__declarative_user_scalar_common_2[1], mdb__declarative_user__String_12);
          }
#line 882 "declarative_user.m"
          if ((mdb__declarative_user__Words_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 884 "declarative_user.m"
            *mdb__declarative_user__Command_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 882 "declarative_user.m"
          else
#line 873 "declarative_user.m"
            {
#line 873 "declarative_user.m"
              MR_String mdb__declarative_user__CmdWord_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Words_13, (MR_Integer) 0)));
#line 873 "declarative_user.m"
              MR_Word mdb__declarative_user__CmdArgs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Words_13, (MR_Integer) 1)));
#line 879 "declarative_user.m"
              MR_Word mdb__declarative_user__CommandPrime_17;
#line 875 "declarative_user.m"
              MR_Word mdb__declarative_user__CmdHandler_16;
#line 876 "declarative_user.m"
              MR_bool MR_CALL (* mdb__declarative_user__func_0)(MR_Box, MR_Box, MR_Box *);
#line 876 "declarative_user.m"
              MR_Box mdb__declarative_user__conv1_CommandPrime_17;

#line 875 "declarative_user.m"
              {
#line 875 "declarative_user.m"
                mdb__declarative_user__succeeded = mdb__declarative_user__cmd_handler_2_p_0(mdb__declarative_user__CmdWord_14, &mdb__declarative_user__CmdHandler_16);
              }
#line 875 "declarative_user.m"
              if (mdb__declarative_user__succeeded)
#line 875 "declarative_user.m"
                {
#line 876 "declarative_user.m"
                  mdb__declarative_user__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mdb__declarative_user__CmdHandler_16, (MR_Integer) 1)));
#line 876 "declarative_user.m"
                  {
#line 876 "declarative_user.m"
                    mdb__declarative_user__succeeded = mdb__declarative_user__func_0(((MR_Box) mdb__declarative_user__CmdHandler_16), ((MR_Box) (mdb__declarative_user__CmdArgs_15)), &mdb__declarative_user__conv1_CommandPrime_17);
                  }
#line 876 "declarative_user.m"
                  if (mdb__declarative_user__succeeded)
#line 876 "declarative_user.m"
                    {
#line 876 "declarative_user.m"
                      mdb__declarative_user__CommandPrime_17 = ((MR_Word) mdb__declarative_user__conv1_CommandPrime_17);
#line 876 "declarative_user.m"
                      mdb__declarative_user__succeeded = MR_TRUE;
#line 876 "declarative_user.m"
                    }
#line 875 "declarative_user.m"
                }
#line 879 "declarative_user.m"
              if (mdb__declarative_user__succeeded)
#line 878 "declarative_user.m"
                *mdb__declarative_user__Command_8 = mdb__declarative_user__CommandPrime_17;
#line 879 "declarative_user.m"
              else
#line 880 "declarative_user.m"
                *mdb__declarative_user__Command_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12));
#line 873 "declarative_user.m"
            }
#line 870 "declarative_user.m"
        }
#line 867 "declarative_user.m"
  }
#line 864 "declarative_user.m"
}

#line 783 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__print_atom_arguments_6_p_0(
#line 783 "declarative_user.m"
  MR_Word mdb__declarative_user__Atom_7,
#line 783 "declarative_user.m"
  MR_Integer mdb__declarative_user__From_8,
#line 783 "declarative_user.m"
  MR_Integer mdb__declarative_user__To_9,
#line 783 "declarative_user.m"
  MR_Word mdb__declarative_user__User_10)
#line 783 "declarative_user.m"
{
#line 786 "declarative_user.m"
  while (MR_TRUE)
#line 786 "declarative_user.m"
    {
#line 786 "declarative_user.m"
      /* tailcall optimized into a loop */
#line 786 "declarative_user.m"
      {
#line 786 "declarative_user.m"
        MR_bool mdb__declarative_user__succeeded;
#line 786 "declarative_user.m"
        MR_Word mdb__declarative_user__OK_12;
#line 786 "declarative_user.m"
        MR_Word mdb__declarative_user__Args0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Atom_7, (MR_Integer) 1)));
#line 786 "declarative_user.m"
        MR_Word mdb__declarative_user__Args_30;
#line 786 "declarative_user.m"
        MR_Word mdb__declarative_user__V_37_37;
#line 801 "declarative_user.m"
        MR_Box mdb__declarative_user__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Atom_7, (MR_Integer) 0)));
#line 812 "declarative_user.m"
        MR_Word mdb__declarative_user__Arg_36;
#line 804 "declarative_user.m"
        MR_Word mdb__declarative_user__ArgInfo_31;
#line 804 "declarative_user.m"
        MR_Word mdb__declarative_user__MaybeArg_34;
#line 804 "declarative_user.m"
        MR_Word mdb__declarative_user__ArgRep_35;
#line 804 "declarative_user.m"
        MR_Box mdb__declarative_user__conv0_ArgInfo_31;
#line 805 "declarative_user.m"
        MR_Word mdb__declarative_user__V_32_32;
#line 805 "declarative_user.m"
        MR_Integer mdb__declarative_user__V_33_33;
#line 789 "declarative_user.m"
        MR_Integer mdb__declarative_user__V_16_16;
#line 789 "declarative_user.m"
        MR_Integer mdb__declarative_user__V_17_17;

#line 802 "declarative_user.m"
        {
#line 802 "declarative_user.m"
          mdb__declarative_user__V_37_37 = mdb__declarative_execution__chosen_head_vars_presentation_0_f_0();
        }
#line 802 "declarative_user.m"
        {
#line 802 "declarative_user.m"
          mdb__declarative_execution__maybe_filter_headvars_3_p_0(mdb__declarative_user__V_37_37, mdb__declarative_user__Args0_29, &mdb__declarative_user__Args_30);
        }
#line 804 "declarative_user.m"
        {
#line 804 "declarative_user.m"
          mdb__declarative_user__succeeded = mercury__list__index1_3_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_user__Args_30, mdb__declarative_user__From_8, &mdb__declarative_user__conv0_ArgInfo_31);
        }
#line 804 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 804 "declarative_user.m"
          {
#line 804 "declarative_user.m"
            mdb__declarative_user__ArgInfo_31 = ((MR_Word) mdb__declarative_user__conv0_ArgInfo_31);
#line 804 "declarative_user.m"
            mdb__declarative_user__succeeded = MR_TRUE;
#line 804 "declarative_user.m"
          }
#line 804 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 804 "declarative_user.m"
          {
#line 805 "declarative_user.m"
            mdb__declarative_user__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgInfo_31, (MR_Integer) 0)));
#line 805 "declarative_user.m"
            mdb__declarative_user__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgInfo_31, (MR_Integer) 1)));
#line 805 "declarative_user.m"
            mdb__declarative_user__MaybeArg_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgInfo_31, (MR_Integer) 2)));
#line 806 "declarative_user.m"
            mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__MaybeArg_34)) == (MR_mktag((MR_Integer) 1)));
#line 806 "declarative_user.m"
            if (mdb__declarative_user__succeeded)
#line 806 "declarative_user.m"
              {
#line 806 "declarative_user.m"
                mdb__declarative_user__ArgRep_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeArg_34, (MR_Integer) 0)));
#line 807 "declarative_user.m"
                {
#line 807 "declarative_user.m"
                  mdb__term_rep__rep_to_univ_2_p_0(mdb__declarative_user__ArgRep_35, &mdb__declarative_user__Arg_36);
                }
#line 807 "declarative_user.m"
                mdb__declarative_user__succeeded = MR_TRUE;
#line 806 "declarative_user.m"
              }
#line 804 "declarative_user.m"
          }
#line 812 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 810 "declarative_user.m"
          {
#line 810 "declarative_user.m"
            MR_Word mdb__declarative_user__V_38_38;
#line 810 "declarative_user.m"
            MR_Word mdb__declarative_user__V_39_39;
#line 810 "declarative_user.m"
            MR_Word mdb__declarative_user__V_47_47;
#line 809 "declarative_user.m"
            MR_Word mdb__declarative_user__V_46_46;
#line 809 "declarative_user.m"
            MR_Word mdb__declarative_user__V_48_48;
#line 809 "declarative_user.m"
            MR_Word mdb__declarative_user__V_49_49;
#line 809 "declarative_user.m"
            MR_Word mdb__declarative_user__V_50_50;

#line 809 "declarative_user.m"
            {
#line 809 "declarative_user.m"
              mdb__declarative_user__V_38_38 = mdb__browser_term__univ_to_browser_term_1_f_0(mdb__declarative_user__Arg_36);
            }
#line 809 "declarative_user.m"
            mdb__declarative_user__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 0)));
#line 809 "declarative_user.m"
            mdb__declarative_user__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 1)));
#line 809 "declarative_user.m"
            mdb__declarative_user__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 2)));
#line 809 "declarative_user.m"
            mdb__declarative_user__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 3)));
#line 809 "declarative_user.m"
            mdb__declarative_user__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 4)));
#line 809 "declarative_user.m"
            mdb__declarative_user__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 5)));
#line 809 "declarative_user.m"
            {
#line 809 "declarative_user.m"
              mdb__browse__print_browser_term_6_p_0(mdb__declarative_user__V_38_38, mdb__declarative_user__V_39_39, (MR_Integer) 0, mdb__declarative_user__V_47_47);
            }
#line 811 "declarative_user.m"
            mdb__declarative_user__OK_12 = (MR_Integer) 1;
#line 810 "declarative_user.m"
          }
#line 812 "declarative_user.m"
        else
#line 813 "declarative_user.m"
          {
#line 813 "declarative_user.m"
            MR_Word mdb__declarative_user__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 1)));
#line 813 "declarative_user.m"
            MR_Word mdb__declarative_user__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 0)));
#line 813 "declarative_user.m"
            MR_Word mdb__declarative_user__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 2)));
#line 813 "declarative_user.m"
            MR_Word mdb__declarative_user__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 3)));
#line 813 "declarative_user.m"
            MR_Word mdb__declarative_user__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 4)));
#line 813 "declarative_user.m"
            MR_Word mdb__declarative_user__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 5)));

#line 813 "declarative_user.m"
            {
#line 813 "declarative_user.m"
              mercury__io__write_string_4_p_0(mdb__declarative_user__V_43_43, (MR_String) "Invalid argument number\n");
            }
#line 814 "declarative_user.m"
            mdb__declarative_user__OK_12 = (MR_Integer) 0;
#line 813 "declarative_user.m"
          }
#line 789 "declarative_user.m"
        mdb__declarative_user__succeeded = (mdb__declarative_user__OK_12 == (MR_Integer) 1);
#line 789 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 789 "declarative_user.m"
          {
#line 790 "declarative_user.m"
            mdb__declarative_user__V_17_17 = (MR_Integer) 1;
#line 790 "declarative_user.m"
            mdb__declarative_user__V_16_16 = (mdb__declarative_user__From_8 + mdb__declarative_user__V_17_17);
#line 790 "declarative_user.m"
            mdb__declarative_user__succeeded = (mdb__declarative_user__V_16_16 <= mdb__declarative_user__To_9);
#line 789 "declarative_user.m"
          }
#line 793 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 792 "declarative_user.m"
          {
#line 792 "declarative_user.m"
            MR_Integer mdb__declarative_user__V_18_18 = (mdb__declarative_user__From_8 + (MR_Integer) 1);

#line 792 "declarative_user.m"
            /* direct tailcall eliminated */
#line 792 "declarative_user.m"
            {
#line 792 "declarative_user.m"
              MR_Integer mdb__declarative_user__From__tmp_copy_8 = mdb__declarative_user__V_18_18;

#line 792 "declarative_user.m"
              mdb__declarative_user__From_8 = mdb__declarative_user__From__tmp_copy_8;
#line 792 "declarative_user.m"
            }
#line 792 "declarative_user.m"
            continue;
#line 792 "declarative_user.m"
          }
#line 793 "declarative_user.m"
        else
#line 792 "declarative_user.m"
          {
#line 792 "declarative_user.m"
          }
#line 786 "declarative_user.m"
      }
#line 786 "declarative_user.m"
      break;
#line 786 "declarative_user.m"
    }
#line 783 "declarative_user.m"
}

#line 763 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__get_user_arg_values_2_p_0(
#line 763 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 763 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2)
#line 763 "declarative_user.m"
{
#line 765 "declarative_user.m"
  {
#line 765 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;

#line 765 "declarative_user.m"
    if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 765 "declarative_user.m"
      *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 765 "declarative_user.m"
    else
#line 766 "declarative_user.m"
      {
#line 766 "declarative_user.m"
        MR_Word mdb__declarative_user__UserVisible_3;
#line 766 "declarative_user.m"
        MR_Word mdb__declarative_user__MaybeValue_5;
#line 766 "declarative_user.m"
        MR_Word mdb__declarative_user__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 766 "declarative_user.m"
        MR_Word mdb__declarative_user__Values0_8;
#line 766 "declarative_user.m"
        MR_Word mdb__declarative_user__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
#line 766 "declarative_user.m"
        MR_Integer mdb__declarative_user__V_4_4;

#line 766 "declarative_user.m"
        mdb__declarative_user__UserVisible_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_11_11, (MR_Integer) 0)));
#line 766 "declarative_user.m"
        mdb__declarative_user__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_11_11, (MR_Integer) 1)));
#line 766 "declarative_user.m"
        mdb__declarative_user__MaybeValue_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_11_11, (MR_Integer) 2)));
#line 767 "declarative_user.m"
        {
#line 767 "declarative_user.m"
          mdb__declarative_user__get_user_arg_values_2_p_0(mdb__declarative_user__Args_6, &mdb__declarative_user__Values0_8);
        }
#line 778 "declarative_user.m"
        if ((mdb__declarative_user__UserVisible_3 == (MR_Integer) 0))
#line 780 "declarative_user.m"
          *mdb__declarative_user__HeadVar__2_2 = mdb__declarative_user__Values0_8;
#line 778 "declarative_user.m"
        else
#line 769 "declarative_user.m"
          {
#line 769 "declarative_user.m"
            MR_Word mdb__declarative_user__Value_10;

#line 773 "declarative_user.m"
            if ((mdb__declarative_user__MaybeValue_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 774 "declarative_user.m"
              {
#line 775 "declarative_user.m"
                mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 775 "declarative_user.m"
                {
#line 775 "declarative_user.m"
                  mdb__declarative_user__Value_10 = mercury__univ__univ_1_f_1((MR_Word) &mdb__browse__mdb__browse__type_ctor_info_unbound_0, ((MR_Box) ((MR_Integer) 0)));
                }
#line 774 "declarative_user.m"
              }
#line 773 "declarative_user.m"
            else
#line 771 "declarative_user.m"
              {
#line 771 "declarative_user.m"
                MR_Word mdb__declarative_user__ValueRep_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeValue_5, (MR_Integer) 0)));

#line 772 "declarative_user.m"
                {
#line 772 "declarative_user.m"
                  mdb__term_rep__rep_to_univ_2_p_0(mdb__declarative_user__ValueRep_9, &mdb__declarative_user__Value_10);
                }
#line 771 "declarative_user.m"
              }
#line 777 "declarative_user.m"
            {
#line 777 "declarative_user.m"
              MR_Word base;
#line 777 "declarative_user.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 777 "declarative_user.m"
              *mdb__declarative_user__HeadVar__2_2 = base;
#line 777 "declarative_user.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__Value_10));
#line 777 "declarative_user.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__Values0_8));
#line 777 "declarative_user.m"
            }
#line 769 "declarative_user.m"
          }
#line 766 "declarative_user.m"
      }
#line 765 "declarative_user.m"
  }
#line 763 "declarative_user.m"
}

#line 752 "declarative_user.m"
static MR_Word MR_CALL 
mdb__declarative_user__get_subterm_mode_from_atoms_for_arg_4_f_0(
#line 752 "declarative_user.m"
  MR_Integer mdb__declarative_user__ArgNum_6,
#line 752 "declarative_user.m"
  MR_Word mdb__declarative_user__InitAtom_7,
#line 752 "declarative_user.m"
  MR_Word mdb__declarative_user__FinalAtom_8,
#line 752 "declarative_user.m"
  MR_Word mdb__declarative_user__Dirs_9)
#line 752 "declarative_user.m"
{
#line 757 "declarative_user.m"
  {
#line 757 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 757 "declarative_user.m"
    MR_Word mdb__declarative_user__Mode_10;
#line 757 "declarative_user.m"
    MR_Word mdb__declarative_user__TermPath_11;
#line 757 "declarative_user.m"
    MR_Word mdb__declarative_user__ArgPos_12;
#line 757 "declarative_user.m"
    MR_Word mdb__declarative_user__Which_15;

#line 758 "declarative_user.m"
    {
#line 758 "declarative_user.m"
      mdb__declarative_user__convert_dirs_to_term_path_from_atom_3_p_0(mdb__declarative_user__FinalAtom_8, mdb__declarative_user__Dirs_9, &mdb__declarative_user__TermPath_11);
    }
#line 439 "declarative_user.m"
    {
#line 439 "declarative_user.m"
      mdb__declarative_user__Which_15 = mdb__declarative_execution__chosen_head_vars_presentation_0_f_0();
    }
#line 443 "declarative_user.m"
    if ((mdb__declarative_user__Which_15 == (MR_Integer) 0))
#line 445 "declarative_user.m"
      {
#line 445 "declarative_user.m"
        mdb__declarative_user__ArgPos_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 445 "declarative_user.m"
        MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgPos_12, 0) = ((MR_Box) (mdb__declarative_user__ArgNum_6));
#line 445 "declarative_user.m"
      }
#line 443 "declarative_user.m"
    else
#line 442 "declarative_user.m"
      {
#line 442 "declarative_user.m"
        mdb__declarative_user__ArgPos_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 442 "declarative_user.m"
        MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgPos_12, 0) = ((MR_Box) (mdb__declarative_user__ArgNum_6));
#line 442 "declarative_user.m"
      }
#line 744 "declarative_user.m"
    {
#line 744 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_tree__trace_atom_subterm_is_ground_3_p_0(mdb__declarative_user__InitAtom_7, mdb__declarative_user__ArgPos_12, mdb__declarative_user__TermPath_11);
    }
#line 746 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 745 "declarative_user.m"
      mdb__declarative_user__Mode_10 = (MR_Integer) 0;
#line 746 "declarative_user.m"
    else
#line 748 "declarative_user.m"
      {
#line 746 "declarative_user.m"
        {
#line 746 "declarative_user.m"
          mdb__declarative_user__succeeded = mdb__declarative_tree__trace_atom_subterm_is_ground_3_p_0(mdb__declarative_user__FinalAtom_8, mdb__declarative_user__ArgPos_12, mdb__declarative_user__TermPath_11);
        }
#line 748 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 747 "declarative_user.m"
          mdb__declarative_user__Mode_10 = (MR_Integer) 1;
#line 748 "declarative_user.m"
        else
#line 749 "declarative_user.m"
          mdb__declarative_user__Mode_10 = (MR_Integer) 2;
#line 748 "declarative_user.m"
      }
#line 757 "declarative_user.m"
    return mdb__declarative_user__Mode_10;
#line 757 "declarative_user.m"
  }
#line 752 "declarative_user.m"
}

#line 724 "declarative_user.m"
static MR_Word MR_CALL 
mdb__declarative_user__get_subterm_mode_from_atoms_3_f_0(
#line 724 "declarative_user.m"
  MR_Word mdb__declarative_user__InitAtom_5,
#line 724 "declarative_user.m"
  MR_Word mdb__declarative_user__FinalAtom_6,
#line 724 "declarative_user.m"
  MR_Word mdb__declarative_user__Dirs_7)
#line 724 "declarative_user.m"
{
#line 727 "declarative_user.m"
  {
#line 727 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 727 "declarative_user.m"
    MR_Word mdb__declarative_user__Mode_8;
#line 727 "declarative_user.m"
    MR_Word mdb__declarative_user__Path_9;

#line 728 "declarative_user.m"
    {
#line 728 "declarative_user.m"
      mdb__declarative_user__convert_dirs_to_term_path_from_atom_3_p_0(mdb__declarative_user__FinalAtom_6, mdb__declarative_user__Dirs_7, &mdb__declarative_user__Path_9);
    }
#line 734 "declarative_user.m"
    if ((mdb__declarative_user__Path_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 736 "declarative_user.m"
      mdb__declarative_user__Mode_8 = (MR_Integer) 3;
#line 734 "declarative_user.m"
    else
#line 730 "declarative_user.m"
      {
#line 730 "declarative_user.m"
        MR_Integer mdb__declarative_user__ArgNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Path_9, (MR_Integer) 0)));
#line 730 "declarative_user.m"
        MR_Word mdb__declarative_user__TermPath_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Path_9, (MR_Integer) 1)));
#line 730 "declarative_user.m"
        MR_Word mdb__declarative_user__ArgPos_12;
#line 730 "declarative_user.m"
        MR_Word mdb__declarative_user__Which_15;

#line 439 "declarative_user.m"
        {
#line 439 "declarative_user.m"
          mdb__declarative_user__Which_15 = mdb__declarative_execution__chosen_head_vars_presentation_0_f_0();
        }
#line 443 "declarative_user.m"
        if ((mdb__declarative_user__Which_15 == (MR_Integer) 0))
#line 445 "declarative_user.m"
          {
#line 445 "declarative_user.m"
            mdb__declarative_user__ArgPos_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 445 "declarative_user.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgPos_12, 0) = ((MR_Box) (mdb__declarative_user__ArgNum_10));
#line 445 "declarative_user.m"
          }
#line 443 "declarative_user.m"
        else
#line 442 "declarative_user.m"
          {
#line 442 "declarative_user.m"
            mdb__declarative_user__ArgPos_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 442 "declarative_user.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgPos_12, 0) = ((MR_Box) (mdb__declarative_user__ArgNum_10));
#line 442 "declarative_user.m"
          }
#line 744 "declarative_user.m"
        {
#line 744 "declarative_user.m"
          mdb__declarative_user__succeeded = mdb__declarative_tree__trace_atom_subterm_is_ground_3_p_0(mdb__declarative_user__InitAtom_5, mdb__declarative_user__ArgPos_12, mdb__declarative_user__TermPath_11);
        }
#line 746 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 745 "declarative_user.m"
          mdb__declarative_user__Mode_8 = (MR_Integer) 0;
#line 746 "declarative_user.m"
        else
#line 748 "declarative_user.m"
          {
#line 746 "declarative_user.m"
            {
#line 746 "declarative_user.m"
              mdb__declarative_user__succeeded = mdb__declarative_tree__trace_atom_subterm_is_ground_3_p_0(mdb__declarative_user__FinalAtom_6, mdb__declarative_user__ArgPos_12, mdb__declarative_user__TermPath_11);
            }
#line 748 "declarative_user.m"
            if (mdb__declarative_user__succeeded)
#line 747 "declarative_user.m"
              mdb__declarative_user__Mode_8 = (MR_Integer) 1;
#line 748 "declarative_user.m"
            else
#line 749 "declarative_user.m"
              mdb__declarative_user__Mode_8 = (MR_Integer) 2;
#line 748 "declarative_user.m"
          }
#line 730 "declarative_user.m"
      }
#line 727 "declarative_user.m"
    return mdb__declarative_user__Mode_8;
#line 727 "declarative_user.m"
  }
#line 724 "declarative_user.m"
}

#line 717 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__browse_xml_atom_4_p_0_1(
#line 717 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg)
#line 717 "declarative_user.m"
{
#line 717 "declarative_user.m"
  {
#line 717 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 717 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;

#line 717 "declarative_user.m"
    {
#line 717 "declarative_user.m"
      return mdb__declarative_user__succeeded = mdb__declarative_user__IntroducedFrom__pred__browse_xml_atom__717__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 4))));
    }
#line 717 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 717 "declarative_user.m"
  }
#line 717 "declarative_user.m"
}

#line 709 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__browse_xml_atom_4_p_0(
#line 709 "declarative_user.m"
  MR_Word mdb__declarative_user__Atom_5,
#line 709 "declarative_user.m"
  MR_Word mdb__declarative_user__User_6)
#line 709 "declarative_user.m"
{
#line 712 "declarative_user.m"
  {
#line 712 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 712 "declarative_user.m"
    MR_Box mdb__declarative_user__ProcLayout_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Atom_5, (MR_Integer) 0)));
#line 712 "declarative_user.m"
    MR_Word mdb__declarative_user__Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Atom_5, (MR_Integer) 1)));
#line 712 "declarative_user.m"
    MR_Word mdb__declarative_user__ProcLabel_10;
#line 712 "declarative_user.m"
    MR_Word mdb__declarative_user__ArgValues_11;
#line 712 "declarative_user.m"
    MR_Word mdb__declarative_user__Module_12;
#line 712 "declarative_user.m"
    MR_String mdb__declarative_user__Name_13;
#line 712 "declarative_user.m"
    MR_Word mdb__declarative_user__PredOrFunc_15;
#line 712 "declarative_user.m"
    MR_Word mdb__declarative_user__IsFunction_16;
#line 712 "declarative_user.m"
    MR_String mdb__declarative_user__ModuleStr_17;
#line 712 "declarative_user.m"
    MR_Word mdb__declarative_user__BrowserTerm_18;
#line 712 "declarative_user.m"
    MR_Word mdb__declarative_user__V_21_21;
#line 712 "declarative_user.m"
    MR_String mdb__declarative_user__V_23_23;
#line 712 "declarative_user.m"
    MR_String mdb__declarative_user__V_24_24;
#line 712 "declarative_user.m"
    MR_Word mdb__declarative_user__V_26_26;
#line 712 "declarative_user.m"
    MR_Word mdb__declarative_user__V_31_31;
#line 716 "declarative_user.m"
    MR_Integer mdb__declarative_user__V_14_14;
#line 721 "declarative_user.m"
    MR_Word mdb__declarative_user__V_30_30;
#line 721 "declarative_user.m"
    MR_Word mdb__declarative_user__V_32_32;
#line 721 "declarative_user.m"
    MR_Word mdb__declarative_user__V_33_33;
#line 721 "declarative_user.m"
    MR_Word mdb__declarative_user__V_34_34;

#line 714 "declarative_user.m"
    {
#line 714 "declarative_user.m"
      mdb__declarative_user__ProcLabel_10 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_user__ProcLayout_8);
    }
#line 715 "declarative_user.m"
    {
#line 715 "declarative_user.m"
      mdb__declarative_user__get_user_arg_values_2_p_0(mdb__declarative_user__Args_9, &mdb__declarative_user__ArgValues_11);
    }
#line 716 "declarative_user.m"
    {
#line 716 "declarative_user.m"
      mdb__declarative_execution__get_pred_attributes_5_p_0(mdb__declarative_user__ProcLabel_10, &mdb__declarative_user__Module_12, &mdb__declarative_user__Name_13, &mdb__declarative_user__V_14_14, &mdb__declarative_user__PredOrFunc_15);
    }
#line 717 "declarative_user.m"
    {
#line 717 "declarative_user.m"
      mdb__declarative_user__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 717 "declarative_user.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_21_21, 0) = ((MR_Box) (&mdb__declarative_user_scalar_common_3[0]));
#line 717 "declarative_user.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_21_21, 1) = ((MR_Box) (mdb__declarative_user__browse_xml_atom_4_p_0_1));
#line 717 "declarative_user.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 717 "declarative_user.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_21_21, 3) = ((MR_Box) (mdb__declarative_user__PredOrFunc_15));
#line 717 "declarative_user.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_21_21, 4) = ((MR_Box) ((MR_Integer) 1));
#line 717 "declarative_user.m"
    }
#line 717 "declarative_user.m"
    {
#line 717 "declarative_user.m"
      mdb__declarative_user__IsFunction_16 = mercury__bool__pred_to_bool_1_f_0(mdb__declarative_user__V_21_21);
    }
#line 718 "declarative_user.m"
    {
#line 718 "declarative_user.m"
      mdb__declarative_user__ModuleStr_17 = mdbcomp__prim_data__sym_name_to_string_1_f_0(mdb__declarative_user__Module_12);
    }
#line 719 "declarative_user.m"
    {
#line 719 "declarative_user.m"
      mdb__declarative_user__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) ".", mdb__declarative_user__Name_13);
    }
#line 719 "declarative_user.m"
    {
#line 719 "declarative_user.m"
      mdb__declarative_user__V_23_23 = mercury__string__f_43_43_2_f_0(mdb__declarative_user__ModuleStr_17, mdb__declarative_user__V_24_24);
    }
#line 719 "declarative_user.m"
    {
#line 719 "declarative_user.m"
      mdb__declarative_user__BrowserTerm_18 = mdb__browser_term__synthetic_term_to_browser_term_3_f_0(mdb__declarative_user__V_23_23, mdb__declarative_user__ArgValues_11, mdb__declarative_user__IsFunction_16);
    }
#line 721 "declarative_user.m"
    mdb__declarative_user__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
#line 721 "declarative_user.m"
    mdb__declarative_user__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
#line 721 "declarative_user.m"
    mdb__declarative_user__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
#line 721 "declarative_user.m"
    mdb__declarative_user__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
#line 721 "declarative_user.m"
    mdb__declarative_user__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
#line 721 "declarative_user.m"
    mdb__declarative_user__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
#line 721 "declarative_user.m"
    {
#line 721 "declarative_user.m"
      mdb__browse__save_and_browse_browser_term_xml_6_p_0(mdb__declarative_user__BrowserTerm_18, mdb__declarative_user__V_26_26, mdb__declarative_user__V_26_26, mdb__declarative_user__V_31_31);
#line 721 "declarative_user.m"
      return;
    }
#line 712 "declarative_user.m"
  }
#line 709 "declarative_user.m"
}

#line 703 "declarative_user.m"
static MR_Box MR_CALL 
mdb__declarative_user__browse_atom_7_p_0_2(
#line 703 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 703 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1)
#line 703 "declarative_user.m"
{
#line 703 "declarative_user.m"
  {
#line 703 "declarative_user.m"
    MR_Box mdb__declarative_user__wrapper_arg_2;
#line 703 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 703 "declarative_user.m"
    MR_Word mdb__declarative_user__conv0_Mode_8;

#line 703 "declarative_user.m"
    {
#line 703 "declarative_user.m"
      mdb__declarative_user__conv0_Mode_8 = mdb__declarative_user__get_subterm_mode_from_atoms_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 4))), ((MR_Word) mdb__declarative_user__wrapper_arg_1));
    }
#line 703 "declarative_user.m"
    mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv0_Mode_8));
#line 703 "declarative_user.m"
    return mdb__declarative_user__wrapper_arg_2;
#line 703 "declarative_user.m"
  }
#line 703 "declarative_user.m"
}

#line 698 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__browse_atom_7_p_0_1(
#line 698 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg)
#line 698 "declarative_user.m"
{
#line 698 "declarative_user.m"
  {
#line 698 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 698 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;

#line 698 "declarative_user.m"
    {
#line 698 "declarative_user.m"
      return mdb__declarative_user__succeeded = mdb__declarative_user__IntroducedFrom__pred__browse_atom__698__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 4))));
    }
#line 698 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 698 "declarative_user.m"
  }
#line 698 "declarative_user.m"
}

#line 689 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__browse_atom_7_p_0(
#line 689 "declarative_user.m"
  MR_Word mdb__declarative_user__InitAtom_8,
#line 689 "declarative_user.m"
  MR_Word mdb__declarative_user__FinalAtom_9,
#line 689 "declarative_user.m"
  MR_Word * mdb__declarative_user__MaybeTrack_10,
#line 689 "declarative_user.m"
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_26,
#line 689 "declarative_user.m"
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_27)
#line 689 "declarative_user.m"
{
#line 693 "declarative_user.m"
  {
#line 693 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 693 "declarative_user.m"
    MR_Box mdb__declarative_user__ProcLayout_13 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalAtom_9, (MR_Integer) 0)));
#line 693 "declarative_user.m"
    MR_Word mdb__declarative_user__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalAtom_9, (MR_Integer) 1)));
#line 693 "declarative_user.m"
    MR_Word mdb__declarative_user__ProcLabel_15;
#line 693 "declarative_user.m"
    MR_Word mdb__declarative_user__ArgValues_16;
#line 693 "declarative_user.m"
    MR_Word mdb__declarative_user__Module_17;
#line 693 "declarative_user.m"
    MR_String mdb__declarative_user__Name_18;
#line 693 "declarative_user.m"
    MR_Word mdb__declarative_user__PredOrFunc_20;
#line 693 "declarative_user.m"
    MR_Word mdb__declarative_user__IsFunction_21;
#line 693 "declarative_user.m"
    MR_String mdb__declarative_user__ModuleStr_22;
#line 693 "declarative_user.m"
    MR_Word mdb__declarative_user__BrowserTerm_23;
#line 693 "declarative_user.m"
    MR_Word mdb__declarative_user__MaybeTrackDirs_24;
#line 693 "declarative_user.m"
    MR_Word mdb__declarative_user__Browser_25;
#line 693 "declarative_user.m"
    MR_Word mdb__declarative_user__V_30_30;
#line 693 "declarative_user.m"
    MR_String mdb__declarative_user__V_32_32;
#line 693 "declarative_user.m"
    MR_String mdb__declarative_user__V_33_33;
#line 693 "declarative_user.m"
    MR_Word mdb__declarative_user__V_35_35;
#line 693 "declarative_user.m"
    MR_Word mdb__declarative_user__V_37_37;
#line 693 "declarative_user.m"
    MR_Word mdb__declarative_user__V_40_40;
#line 693 "declarative_user.m"
    MR_Word mdb__declarative_user__V_42_42;
#line 693 "declarative_user.m"
    MR_Word mdb__declarative_user__V_43_43;
#line 697 "declarative_user.m"
    MR_Integer mdb__declarative_user__V_19_19;
#line 702 "declarative_user.m"
    MR_Word mdb__declarative_user__V_44_44;
#line 702 "declarative_user.m"
    MR_Word mdb__declarative_user__V_45_45;
#line 702 "declarative_user.m"
    MR_Word mdb__declarative_user__V_46_46;
#line 707 "declarative_user.m"
    MR_Word mdb__declarative_user__V_57_57;
#line 707 "declarative_user.m"
    MR_Word mdb__declarative_user__V_58_58;
#line 707 "declarative_user.m"
    MR_Word mdb__declarative_user__V_60_60;
#line 707 "declarative_user.m"
    MR_Word mdb__declarative_user__V_61_61;
#line 707 "declarative_user.m"
    MR_Word mdb__declarative_user__V_62_62;
#line 707 "declarative_user.m"
    MR_Word mdb__declarative_user__V_59_59;

#line 695 "declarative_user.m"
    {
#line 695 "declarative_user.m"
      mdb__declarative_user__ProcLabel_15 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_user__ProcLayout_13);
    }
#line 696 "declarative_user.m"
    {
#line 696 "declarative_user.m"
      mdb__declarative_user__get_user_arg_values_2_p_0(mdb__declarative_user__Args_14, &mdb__declarative_user__ArgValues_16);
    }
#line 697 "declarative_user.m"
    {
#line 697 "declarative_user.m"
      mdb__declarative_execution__get_pred_attributes_5_p_0(mdb__declarative_user__ProcLabel_15, &mdb__declarative_user__Module_17, &mdb__declarative_user__Name_18, &mdb__declarative_user__V_19_19, &mdb__declarative_user__PredOrFunc_20);
    }
#line 698 "declarative_user.m"
    {
#line 698 "declarative_user.m"
      mdb__declarative_user__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 698 "declarative_user.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_30_30, 0) = ((MR_Box) (&mdb__declarative_user_scalar_common_3[0]));
#line 698 "declarative_user.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_30_30, 1) = ((MR_Box) (mdb__declarative_user__browse_atom_7_p_0_1));
#line 698 "declarative_user.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 698 "declarative_user.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_30_30, 3) = ((MR_Box) (mdb__declarative_user__PredOrFunc_20));
#line 698 "declarative_user.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_30_30, 4) = ((MR_Box) ((MR_Integer) 1));
#line 698 "declarative_user.m"
    }
#line 698 "declarative_user.m"
    {
#line 698 "declarative_user.m"
      mdb__declarative_user__IsFunction_21 = mercury__bool__pred_to_bool_1_f_0(mdb__declarative_user__V_30_30);
    }
#line 699 "declarative_user.m"
    {
#line 699 "declarative_user.m"
      mdb__declarative_user__ModuleStr_22 = mdbcomp__prim_data__sym_name_to_string_1_f_0(mdb__declarative_user__Module_17);
    }
#line 700 "declarative_user.m"
    {
#line 700 "declarative_user.m"
      mdb__declarative_user__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) ".", mdb__declarative_user__Name_18);
    }
#line 700 "declarative_user.m"
    {
#line 700 "declarative_user.m"
      mdb__declarative_user__V_32_32 = mercury__string__f_43_43_2_f_0(mdb__declarative_user__ModuleStr_22, mdb__declarative_user__V_33_33);
    }
#line 700 "declarative_user.m"
    {
#line 700 "declarative_user.m"
      mdb__declarative_user__BrowserTerm_23 = mdb__browser_term__synthetic_term_to_browser_term_3_f_0(mdb__declarative_user__V_32_32, mdb__declarative_user__ArgValues_16, mdb__declarative_user__IsFunction_21);
    }
#line 702 "declarative_user.m"
    mdb__declarative_user__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 0)));
#line 702 "declarative_user.m"
    mdb__declarative_user__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 1)));
#line 702 "declarative_user.m"
    mdb__declarative_user__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 2)));
#line 702 "declarative_user.m"
    mdb__declarative_user__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 3)));
#line 702 "declarative_user.m"
    mdb__declarative_user__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 4)));
#line 702 "declarative_user.m"
    mdb__declarative_user__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 5)));
#line 703 "declarative_user.m"
    {
#line 703 "declarative_user.m"
      mdb__declarative_user__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 703 "declarative_user.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_40_40, 0) = ((MR_Box) (&mdb__declarative_user_scalar_common_5[0]));
#line 703 "declarative_user.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_40_40, 1) = ((MR_Box) (mdb__declarative_user__browse_atom_7_p_0_2));
#line 703 "declarative_user.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 703 "declarative_user.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_40_40, 3) = ((MR_Box) (mdb__declarative_user__InitAtom_8));
#line 703 "declarative_user.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_40_40, 4) = ((MR_Box) (mdb__declarative_user__FinalAtom_9));
#line 703 "declarative_user.m"
    }
#line 702 "declarative_user.m"
    {
#line 702 "declarative_user.m"
      mdb__declarative_user__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 702 "declarative_user.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_user__V_37_37, 0) = ((MR_Box) (mdb__declarative_user__V_40_40));
#line 702 "declarative_user.m"
    }
#line 702 "declarative_user.m"
    {
#line 702 "declarative_user.m"
      mdb__browse__browse_browser_term_9_p_0(mdb__declarative_user__BrowserTerm_23, mdb__declarative_user__V_35_35, mdb__declarative_user__V_42_42, mdb__declarative_user__V_37_37, &mdb__declarative_user__MaybeTrackDirs_24, mdb__declarative_user__V_43_43, &mdb__declarative_user__Browser_25);
    }
#line 822 "declarative_user.m"
    if ((mdb__declarative_user__MaybeTrackDirs_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 822 "declarative_user.m"
      *mdb__declarative_user__MaybeTrack_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 822 "declarative_user.m"
    else
#line 825 "declarative_user.m"
      {
#line 825 "declarative_user.m"
        MR_Word mdb__declarative_user__HowTrack_68 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrackDirs_24, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 825 "declarative_user.m"
        MR_Word mdb__declarative_user__ShouldAssertInvalid_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrackDirs_24, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 825 "declarative_user.m"
        MR_Word mdb__declarative_user__Dirs_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrackDirs_24, (MR_Integer) 1)));
#line 825 "declarative_user.m"
        MR_Word mdb__declarative_user__TermPath_71;
#line 825 "declarative_user.m"
        MR_Word mdb__declarative_user__SimplifiedDirs_72;

#line 826 "declarative_user.m"
        {
#line 826 "declarative_user.m"
          mdb__browse__simplify_dirs_2_p_0(mdb__declarative_user__Dirs_70, &mdb__declarative_user__SimplifiedDirs_72);
        }
#line 827 "declarative_user.m"
        {
#line 827 "declarative_user.m"
          mdb__declarative_user__convert_dirs_to_term_path_from_atom_3_p_0(mdb__declarative_user__FinalAtom_9, mdb__declarative_user__SimplifiedDirs_72, &mdb__declarative_user__TermPath_71);
        }
#line 825 "declarative_user.m"
        {
#line 825 "declarative_user.m"
          MR_Word base;
#line 825 "declarative_user.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "declarative_user.m"
          *mdb__declarative_user__MaybeTrack_10 = base;
#line 825 "declarative_user.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((mdb__declarative_user__HowTrack_68 | ((mdb__declarative_user__ShouldAssertInvalid_69 << (MR_Integer) 1)))));
#line 825 "declarative_user.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__TermPath_71));
#line 825 "declarative_user.m"
        }
#line 825 "declarative_user.m"
      }
#line 707 "declarative_user.m"
    mdb__declarative_user__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 0)));
#line 707 "declarative_user.m"
    mdb__declarative_user__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 1)));
#line 707 "declarative_user.m"
    mdb__declarative_user__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 2)));
#line 707 "declarative_user.m"
    mdb__declarative_user__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 3)));
#line 707 "declarative_user.m"
    mdb__declarative_user__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 4)));
#line 707 "declarative_user.m"
    mdb__declarative_user__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 5)));
#line 707 "declarative_user.m"
    {
#line 707 "declarative_user.m"
      MR_Word base;
#line 707 "declarative_user.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 707 "declarative_user.m"
      *mdb__declarative_user__STATE_VARIABLE_User_27 = base;
#line 707 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_user__V_57_57));
#line 707 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_user__V_58_58));
#line 707 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_user__Browser_25));
#line 707 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_user__V_60_60));
#line 707 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_user__V_61_61));
#line 707 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_user__V_62_62));
#line 707 "declarative_user.m"
    }
#line 693 "declarative_user.m"
  }
#line 689 "declarative_user.m"
}

#line 671 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__browse_xml_atom_argument_5_p_0(
#line 671 "declarative_user.m"
  MR_Word mdb__declarative_user__Atom_6,
#line 671 "declarative_user.m"
  MR_Integer mdb__declarative_user__ArgNum_7,
#line 671 "declarative_user.m"
  MR_Word mdb__declarative_user__User_8)
#line 671 "declarative_user.m"
{
#line 674 "declarative_user.m"
  {
#line 674 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 674 "declarative_user.m"
    MR_Word mdb__declarative_user__Args0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Atom_6, (MR_Integer) 1)));
#line 674 "declarative_user.m"
    MR_Word mdb__declarative_user__Args_12;
#line 674 "declarative_user.m"
    MR_Word mdb__declarative_user__V_21_21;
#line 675 "declarative_user.m"
    MR_Box mdb__declarative_user__V_10_10 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Atom_6, (MR_Integer) 0)));
#line 685 "declarative_user.m"
    MR_Word mdb__declarative_user__Arg_18;
#line 678 "declarative_user.m"
    MR_Word mdb__declarative_user__ArgInfo_13;
#line 678 "declarative_user.m"
    MR_Word mdb__declarative_user__MaybeArg_16;
#line 678 "declarative_user.m"
    MR_Word mdb__declarative_user__ArgRep_17;
#line 678 "declarative_user.m"
    MR_Box mdb__declarative_user__conv0_ArgInfo_13;
#line 679 "declarative_user.m"
    MR_Word mdb__declarative_user__V_14_14;
#line 679 "declarative_user.m"
    MR_Integer mdb__declarative_user__V_15_15;

#line 676 "declarative_user.m"
    {
#line 676 "declarative_user.m"
      mdb__declarative_user__V_21_21 = mdb__declarative_execution__chosen_head_vars_presentation_0_f_0();
    }
#line 676 "declarative_user.m"
    {
#line 676 "declarative_user.m"
      mdb__declarative_execution__maybe_filter_headvars_3_p_0(mdb__declarative_user__V_21_21, mdb__declarative_user__Args0_11, &mdb__declarative_user__Args_12);
    }
#line 678 "declarative_user.m"
    {
#line 678 "declarative_user.m"
      mdb__declarative_user__succeeded = mercury__list__index1_3_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_user__Args_12, mdb__declarative_user__ArgNum_7, &mdb__declarative_user__conv0_ArgInfo_13);
    }
#line 678 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 678 "declarative_user.m"
      {
#line 678 "declarative_user.m"
        mdb__declarative_user__ArgInfo_13 = ((MR_Word) mdb__declarative_user__conv0_ArgInfo_13);
#line 678 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 678 "declarative_user.m"
      }
#line 678 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 678 "declarative_user.m"
      {
#line 679 "declarative_user.m"
        mdb__declarative_user__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgInfo_13, (MR_Integer) 0)));
#line 679 "declarative_user.m"
        mdb__declarative_user__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgInfo_13, (MR_Integer) 1)));
#line 679 "declarative_user.m"
        mdb__declarative_user__MaybeArg_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgInfo_13, (MR_Integer) 2)));
#line 680 "declarative_user.m"
        mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__MaybeArg_16)) == (MR_mktag((MR_Integer) 1)));
#line 680 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 680 "declarative_user.m"
          {
#line 680 "declarative_user.m"
            mdb__declarative_user__ArgRep_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeArg_16, (MR_Integer) 0)));
#line 681 "declarative_user.m"
            {
#line 681 "declarative_user.m"
              mdb__term_rep__rep_to_univ_2_p_0(mdb__declarative_user__ArgRep_17, &mdb__declarative_user__Arg_18);
            }
#line 681 "declarative_user.m"
            mdb__declarative_user__succeeded = MR_TRUE;
#line 680 "declarative_user.m"
          }
#line 678 "declarative_user.m"
      }
#line 685 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 683 "declarative_user.m"
      {
#line 683 "declarative_user.m"
        MR_Word mdb__declarative_user__V_22_22;
#line 683 "declarative_user.m"
        MR_Word mdb__declarative_user__V_23_23;
#line 683 "declarative_user.m"
        MR_Word mdb__declarative_user__V_31_31;
#line 683 "declarative_user.m"
        MR_Word mdb__declarative_user__V_30_30;
#line 683 "declarative_user.m"
        MR_Word mdb__declarative_user__V_32_32;
#line 683 "declarative_user.m"
        MR_Word mdb__declarative_user__V_33_33;
#line 683 "declarative_user.m"
        MR_Word mdb__declarative_user__V_34_34;

#line 683 "declarative_user.m"
        {
#line 683 "declarative_user.m"
          mdb__declarative_user__V_22_22 = mdb__browser_term__univ_to_browser_term_1_f_0(mdb__declarative_user__Arg_18);
        }
#line 683 "declarative_user.m"
        mdb__declarative_user__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 0)));
#line 683 "declarative_user.m"
        mdb__declarative_user__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 1)));
#line 683 "declarative_user.m"
        mdb__declarative_user__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 2)));
#line 683 "declarative_user.m"
        mdb__declarative_user__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 3)));
#line 683 "declarative_user.m"
        mdb__declarative_user__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 4)));
#line 683 "declarative_user.m"
        mdb__declarative_user__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 5)));
#line 683 "declarative_user.m"
        {
#line 683 "declarative_user.m"
          mdb__browse__save_and_browse_browser_term_xml_6_p_0(mdb__declarative_user__V_22_22, mdb__declarative_user__V_23_23, mdb__declarative_user__V_23_23, mdb__declarative_user__V_31_31);
#line 683 "declarative_user.m"
          return;
        }
#line 683 "declarative_user.m"
      }
#line 685 "declarative_user.m"
    else
#line 686 "declarative_user.m"
      {
#line 686 "declarative_user.m"
        MR_Word mdb__declarative_user__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 1)));
#line 686 "declarative_user.m"
        MR_Word mdb__declarative_user__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 0)));
#line 686 "declarative_user.m"
        MR_Word mdb__declarative_user__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 2)));
#line 686 "declarative_user.m"
        MR_Word mdb__declarative_user__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 3)));
#line 686 "declarative_user.m"
        MR_Word mdb__declarative_user__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 4)));
#line 686 "declarative_user.m"
        MR_Word mdb__declarative_user__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 5)));

#line 686 "declarative_user.m"
        {
#line 686 "declarative_user.m"
          mercury__io__write_string_4_p_0(mdb__declarative_user__V_27_27, (MR_String) "Invalid argument number\n");
#line 686 "declarative_user.m"
          return;
        }
#line 686 "declarative_user.m"
      }
#line 674 "declarative_user.m"
  }
#line 671 "declarative_user.m"
}

#line 660 "declarative_user.m"
static MR_Box MR_CALL 
mdb__declarative_user__browse_atom_argument_8_p_0_1(
#line 660 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 660 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1)
#line 660 "declarative_user.m"
{
#line 660 "declarative_user.m"
  {
#line 660 "declarative_user.m"
    MR_Box mdb__declarative_user__wrapper_arg_2;
#line 660 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 660 "declarative_user.m"
    MR_Word mdb__declarative_user__conv1_Mode_10;

#line 660 "declarative_user.m"
    {
#line 660 "declarative_user.m"
      mdb__declarative_user__conv1_Mode_10 = mdb__declarative_user__get_subterm_mode_from_atoms_for_arg_4_f_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 5))), ((MR_Word) mdb__declarative_user__wrapper_arg_1));
    }
#line 660 "declarative_user.m"
    mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv1_Mode_10));
#line 660 "declarative_user.m"
    return mdb__declarative_user__wrapper_arg_2;
#line 660 "declarative_user.m"
  }
#line 660 "declarative_user.m"
}

#line 645 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__browse_atom_argument_8_p_0(
#line 645 "declarative_user.m"
  MR_Word mdb__declarative_user__InitAtom_9,
#line 645 "declarative_user.m"
  MR_Word mdb__declarative_user__FinalAtom_10,
#line 645 "declarative_user.m"
  MR_Integer mdb__declarative_user__ArgNum_11,
#line 645 "declarative_user.m"
  MR_Word * mdb__declarative_user__MaybeTrack_12,
#line 645 "declarative_user.m"
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_26,
#line 645 "declarative_user.m"
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_27)
#line 645 "declarative_user.m"
{
#line 649 "declarative_user.m"
  {
#line 649 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 649 "declarative_user.m"
    MR_Word mdb__declarative_user__Args0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalAtom_10, (MR_Integer) 1)));
#line 649 "declarative_user.m"
    MR_Word mdb__declarative_user__Args_17;
#line 649 "declarative_user.m"
    MR_Word mdb__declarative_user__V_30_30;
#line 650 "declarative_user.m"
    MR_Box mdb__declarative_user__V_15_15 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalAtom_10, (MR_Integer) 0)));
#line 666 "declarative_user.m"
    MR_Word mdb__declarative_user__ArgRep_22;
#line 666 "declarative_user.m"
    MR_Word mdb__declarative_user__Arg_23;
#line 653 "declarative_user.m"
    MR_Word mdb__declarative_user__ArgInfo_18;
#line 653 "declarative_user.m"
    MR_Word mdb__declarative_user__MaybeArg_21;
#line 653 "declarative_user.m"
    MR_Box mdb__declarative_user__conv0_ArgInfo_18;
#line 654 "declarative_user.m"
    MR_Word mdb__declarative_user__V_19_19;
#line 654 "declarative_user.m"
    MR_Integer mdb__declarative_user__V_20_20;

#line 651 "declarative_user.m"
    {
#line 651 "declarative_user.m"
      mdb__declarative_user__V_30_30 = mdb__declarative_execution__chosen_head_vars_presentation_0_f_0();
    }
#line 651 "declarative_user.m"
    {
#line 651 "declarative_user.m"
      mdb__declarative_execution__maybe_filter_headvars_3_p_0(mdb__declarative_user__V_30_30, mdb__declarative_user__Args0_16, &mdb__declarative_user__Args_17);
    }
#line 653 "declarative_user.m"
    {
#line 653 "declarative_user.m"
      mdb__declarative_user__succeeded = mercury__list__index1_3_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_user__Args_17, mdb__declarative_user__ArgNum_11, &mdb__declarative_user__conv0_ArgInfo_18);
    }
#line 653 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 653 "declarative_user.m"
      {
#line 653 "declarative_user.m"
        mdb__declarative_user__ArgInfo_18 = ((MR_Word) mdb__declarative_user__conv0_ArgInfo_18);
#line 653 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 653 "declarative_user.m"
      }
#line 653 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 653 "declarative_user.m"
      {
#line 654 "declarative_user.m"
        mdb__declarative_user__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgInfo_18, (MR_Integer) 0)));
#line 654 "declarative_user.m"
        mdb__declarative_user__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgInfo_18, (MR_Integer) 1)));
#line 654 "declarative_user.m"
        mdb__declarative_user__MaybeArg_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgInfo_18, (MR_Integer) 2)));
#line 655 "declarative_user.m"
        mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__MaybeArg_21)) == (MR_mktag((MR_Integer) 1)));
#line 655 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 655 "declarative_user.m"
          {
#line 655 "declarative_user.m"
            mdb__declarative_user__ArgRep_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeArg_21, (MR_Integer) 0)));
#line 656 "declarative_user.m"
            {
#line 656 "declarative_user.m"
              mdb__term_rep__rep_to_univ_2_p_0(mdb__declarative_user__ArgRep_22, &mdb__declarative_user__Arg_23);
            }
#line 656 "declarative_user.m"
            mdb__declarative_user__succeeded = MR_TRUE;
#line 655 "declarative_user.m"
          }
#line 653 "declarative_user.m"
      }
#line 666 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 662 "declarative_user.m"
      {
#line 662 "declarative_user.m"
        MR_Word mdb__declarative_user__MaybeTrackDirs_24;
#line 662 "declarative_user.m"
        MR_Word mdb__declarative_user__Browser_25;
#line 662 "declarative_user.m"
        MR_Word mdb__declarative_user__V_31_31;
#line 662 "declarative_user.m"
        MR_Word mdb__declarative_user__V_32_32;
#line 662 "declarative_user.m"
        MR_Word mdb__declarative_user__V_34_34;
#line 662 "declarative_user.m"
        MR_Word mdb__declarative_user__V_37_37;
#line 662 "declarative_user.m"
        MR_Word mdb__declarative_user__V_42_42;
#line 662 "declarative_user.m"
        MR_Word mdb__declarative_user__V_43_43;
#line 658 "declarative_user.m"
        MR_Word mdb__declarative_user__V_44_44;
#line 658 "declarative_user.m"
        MR_Word mdb__declarative_user__V_45_45;
#line 658 "declarative_user.m"
        MR_Word mdb__declarative_user__V_46_46;
#line 665 "declarative_user.m"
        MR_Word mdb__declarative_user__V_57_57;
#line 665 "declarative_user.m"
        MR_Word mdb__declarative_user__V_58_58;
#line 665 "declarative_user.m"
        MR_Word mdb__declarative_user__V_60_60;
#line 665 "declarative_user.m"
        MR_Word mdb__declarative_user__V_61_61;
#line 665 "declarative_user.m"
        MR_Word mdb__declarative_user__V_62_62;
#line 665 "declarative_user.m"
        MR_Word mdb__declarative_user__V_59_59;

#line 658 "declarative_user.m"
        {
#line 658 "declarative_user.m"
          mdb__declarative_user__V_31_31 = mdb__browser_term__univ_to_browser_term_1_f_0(mdb__declarative_user__Arg_23);
        }
#line 658 "declarative_user.m"
        mdb__declarative_user__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 0)));
#line 658 "declarative_user.m"
        mdb__declarative_user__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 1)));
#line 658 "declarative_user.m"
        mdb__declarative_user__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 2)));
#line 658 "declarative_user.m"
        mdb__declarative_user__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 3)));
#line 658 "declarative_user.m"
        mdb__declarative_user__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 4)));
#line 658 "declarative_user.m"
        mdb__declarative_user__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 5)));
#line 660 "declarative_user.m"
        {
#line 660 "declarative_user.m"
          mdb__declarative_user__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 660 "declarative_user.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_user__V_37_37, 0) = ((MR_Box) (&mdb__declarative_user_scalar_common_4[0]));
#line 660 "declarative_user.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_user__V_37_37, 1) = ((MR_Box) (mdb__declarative_user__browse_atom_argument_8_p_0_1));
#line 660 "declarative_user.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_user__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 660 "declarative_user.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_user__V_37_37, 3) = ((MR_Box) (mdb__declarative_user__ArgNum_11));
#line 660 "declarative_user.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_user__V_37_37, 4) = ((MR_Box) (mdb__declarative_user__InitAtom_9));
#line 660 "declarative_user.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_user__V_37_37, 5) = ((MR_Box) (mdb__declarative_user__FinalAtom_10));
#line 660 "declarative_user.m"
        }
#line 658 "declarative_user.m"
        {
#line 658 "declarative_user.m"
          mdb__declarative_user__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 658 "declarative_user.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_user__V_34_34, 0) = ((MR_Box) (mdb__declarative_user__V_37_37));
#line 658 "declarative_user.m"
        }
#line 658 "declarative_user.m"
        {
#line 658 "declarative_user.m"
          mdb__browse__browse_browser_term_9_p_0(mdb__declarative_user__V_31_31, mdb__declarative_user__V_32_32, mdb__declarative_user__V_42_42, mdb__declarative_user__V_34_34, &mdb__declarative_user__MaybeTrackDirs_24, mdb__declarative_user__V_43_43, &mdb__declarative_user__Browser_25);
        }
#line 834 "declarative_user.m"
        if ((mdb__declarative_user__MaybeTrackDirs_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 834 "declarative_user.m"
          *mdb__declarative_user__MaybeTrack_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 834 "declarative_user.m"
        else
#line 837 "declarative_user.m"
          {
#line 837 "declarative_user.m"
            MR_Word mdb__declarative_user__HowTrack_73 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrackDirs_24, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 837 "declarative_user.m"
            MR_Word mdb__declarative_user__ShouldAssertInvalid_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrackDirs_24, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 837 "declarative_user.m"
            MR_Word mdb__declarative_user__Dirs_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrackDirs_24, (MR_Integer) 1)));
#line 837 "declarative_user.m"
            MR_Word mdb__declarative_user__TermPath_76;
#line 837 "declarative_user.m"
            MR_Word mdb__declarative_user__SimplifiedDirs_77;

#line 838 "declarative_user.m"
            {
#line 838 "declarative_user.m"
              mdb__browse__simplify_dirs_2_p_0(mdb__declarative_user__Dirs_75, &mdb__declarative_user__SimplifiedDirs_77);
            }
#line 839 "declarative_user.m"
            {
#line 839 "declarative_user.m"
              mdb__browser_info__convert_dirs_to_term_path_3_p_0(mdb__declarative_user__ArgRep_22, mdb__declarative_user__SimplifiedDirs_77, &mdb__declarative_user__TermPath_76);
            }
#line 837 "declarative_user.m"
            {
#line 837 "declarative_user.m"
              MR_Word base;
#line 837 "declarative_user.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 837 "declarative_user.m"
              *mdb__declarative_user__MaybeTrack_12 = base;
#line 837 "declarative_user.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((mdb__declarative_user__HowTrack_73 | ((mdb__declarative_user__ShouldAssertInvalid_74 << (MR_Integer) 1)))));
#line 837 "declarative_user.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__TermPath_76));
#line 837 "declarative_user.m"
            }
#line 837 "declarative_user.m"
          }
#line 665 "declarative_user.m"
        mdb__declarative_user__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 0)));
#line 665 "declarative_user.m"
        mdb__declarative_user__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 1)));
#line 665 "declarative_user.m"
        mdb__declarative_user__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 2)));
#line 665 "declarative_user.m"
        mdb__declarative_user__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 3)));
#line 665 "declarative_user.m"
        mdb__declarative_user__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 4)));
#line 665 "declarative_user.m"
        mdb__declarative_user__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 5)));
#line 665 "declarative_user.m"
        {
#line 665 "declarative_user.m"
          MR_Word base;
#line 665 "declarative_user.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 665 "declarative_user.m"
          *mdb__declarative_user__STATE_VARIABLE_User_27 = base;
#line 665 "declarative_user.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_user__V_57_57));
#line 665 "declarative_user.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_user__V_58_58));
#line 665 "declarative_user.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_user__Browser_25));
#line 665 "declarative_user.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_user__V_60_60));
#line 665 "declarative_user.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_user__V_61_61));
#line 665 "declarative_user.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_user__V_62_62));
#line 665 "declarative_user.m"
        }
#line 662 "declarative_user.m"
      }
#line 666 "declarative_user.m"
    else
#line 667 "declarative_user.m"
      {
#line 667 "declarative_user.m"
        MR_Word mdb__declarative_user__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 1)));
#line 667 "declarative_user.m"
        MR_Word mdb__declarative_user__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 0)));
#line 667 "declarative_user.m"
        MR_Word mdb__declarative_user__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 2)));
#line 667 "declarative_user.m"
        MR_Word mdb__declarative_user__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 3)));
#line 667 "declarative_user.m"
        MR_Word mdb__declarative_user__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 4)));
#line 667 "declarative_user.m"
        MR_Word mdb__declarative_user__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 5)));

#line 667 "declarative_user.m"
        {
#line 667 "declarative_user.m"
          mercury__io__write_string_4_p_0(mdb__declarative_user__V_39_39, (MR_String) "Invalid argument number\n");
        }
#line 668 "declarative_user.m"
        *mdb__declarative_user__MaybeTrack_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 668 "declarative_user.m"
        *mdb__declarative_user__STATE_VARIABLE_User_27 = mdb__declarative_user__STATE_VARIABLE_User_0_26;
#line 667 "declarative_user.m"
      }
#line 649 "declarative_user.m"
  }
#line 645 "declarative_user.m"
}

#line 717 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__browse_xml_decl_bug_5_p_0_1(
#line 717 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg)
#line 717 "declarative_user.m"
{
#line 717 "declarative_user.m"
  {
#line 717 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 717 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;

#line 717 "declarative_user.m"
    {
#line 717 "declarative_user.m"
      return mdb__declarative_user__succeeded = mdb__declarative_user__IntroducedFrom__pred__browse_xml_atom__717__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 4))));
    }
#line 717 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 717 "declarative_user.m"
  }
#line 717 "declarative_user.m"
}

#line 632 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__browse_xml_decl_bug_5_p_0(
#line 632 "declarative_user.m"
  MR_Word mdb__declarative_user__Bug_6,
#line 632 "declarative_user.m"
  MR_Word mdb__declarative_user__MaybeArgNum_7,
#line 632 "declarative_user.m"
  MR_Word mdb__declarative_user__User_8)
#line 632 "declarative_user.m"
{
#line 635 "declarative_user.m"
  {
#line 635 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 635 "declarative_user.m"
    MR_Word mdb__declarative_user__FinalAtom_11;

#line 504 "declarative_user.m"
    if (((MR_tag((MR_Word) mdb__declarative_user__Bug_6)) == (MR_mktag((MR_Integer) 1))))
#line 504 "declarative_user.m"
      {
#line 504 "declarative_user.m"
        MR_Word mdb__declarative_user__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Bug_6, (MR_Integer) 0)));

#line 504 "declarative_user.m"
        if (((MR_tag((MR_Word) mdb__declarative_user__V_35_35)) == (MR_mktag((MR_Integer) 0))))
#line 504 "declarative_user.m"
          {
#line 504 "declarative_user.m"
            MR_Word mdb__declarative_user__FinalDeclAtom_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_35_35, (MR_Integer) 1)));
#line 504 "declarative_user.m"
            MR_Word mdb__declarative_user__InitDeclAtom_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_35_35, (MR_Integer) 0)));
#line 504 "declarative_user.m"
            MR_Word mdb__declarative_user__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_35_35, (MR_Integer) 2)));
#line 504 "declarative_user.m"
            MR_Integer mdb__declarative_user__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_35_35, (MR_Integer) 3)));
#line 504 "declarative_user.m"
            MR_Word mdb__declarative_user__V_34_34;

#line 504 "declarative_user.m"
            mdb__declarative_user__FinalAtom_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalDeclAtom_18, (MR_Integer) 0)));
#line 504 "declarative_user.m"
            mdb__declarative_user__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalDeclAtom_18, (MR_Integer) 1)));
#line 504 "declarative_user.m"
          }
#line 504 "declarative_user.m"
        else
#line 504 "declarative_user.m"
          if (((MR_tag((MR_Word) mdb__declarative_user__V_35_35)) == (MR_mktag((MR_Integer) 1))))
#line 506 "declarative_user.m"
            {
#line 506 "declarative_user.m"
              MR_Word mdb__declarative_user__InitDeclAtom_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_35_35, (MR_Integer) 0)));
#line 506 "declarative_user.m"
              MR_Integer mdb__declarative_user__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_35_35, (MR_Integer) 1)));

#line 506 "declarative_user.m"
              mdb__declarative_user__FinalAtom_11 = (MR_Word) mdb__declarative_user__InitDeclAtom_22;
#line 506 "declarative_user.m"
            }
#line 504 "declarative_user.m"
          else
#line 508 "declarative_user.m"
            {
#line 508 "declarative_user.m"
              MR_Word mdb__declarative_user__InitDeclAtom_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__V_35_35, (MR_Integer) 0)));
#line 508 "declarative_user.m"
              MR_Word mdb__declarative_user__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__V_35_35, (MR_Integer) 1)));
#line 508 "declarative_user.m"
              MR_Integer mdb__declarative_user__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_user__V_35_35, (MR_Integer) 2)));

#line 508 "declarative_user.m"
              mdb__declarative_user__FinalAtom_11 = (MR_Word) mdb__declarative_user__InitDeclAtom_25;
#line 508 "declarative_user.m"
            }
#line 504 "declarative_user.m"
      }
#line 504 "declarative_user.m"
    else
#line 510 "declarative_user.m"
      {
#line 510 "declarative_user.m"
        MR_Word mdb__declarative_user__InitDeclAtom_31;
#line 510 "declarative_user.m"
        MR_Word mdb__declarative_user__V_33_33 = (MR_Word) MR_body(((MR_Word) mdb__declarative_user__Bug_6), (MR_Integer) 0);
#line 510 "declarative_user.m"
        MR_Word mdb__declarative_user__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_33_33, (MR_Integer) 0)));
#line 510 "declarative_user.m"
        MR_Integer mdb__declarative_user__V_32_32;

#line 510 "declarative_user.m"
        mdb__declarative_user__InitDeclAtom_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_33_33, (MR_Integer) 2)));
#line 510 "declarative_user.m"
        mdb__declarative_user__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_33_33, (MR_Integer) 3)));
#line 510 "declarative_user.m"
        mdb__declarative_user__FinalAtom_11 = (MR_Word) mdb__declarative_user__InitDeclAtom_31;
#line 510 "declarative_user.m"
      }
#line 640 "declarative_user.m"
    if ((mdb__declarative_user__MaybeArgNum_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 712 "declarative_user.m"
      {
#line 712 "declarative_user.m"
        MR_Box mdb__declarative_user__ProcLayout_41 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalAtom_11, (MR_Integer) 0)));
#line 712 "declarative_user.m"
        MR_Word mdb__declarative_user__Args_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalAtom_11, (MR_Integer) 1)));
#line 712 "declarative_user.m"
        MR_Word mdb__declarative_user__ProcLabel_43;
#line 712 "declarative_user.m"
        MR_Word mdb__declarative_user__ArgValues_44;
#line 712 "declarative_user.m"
        MR_Word mdb__declarative_user__Module_45;
#line 712 "declarative_user.m"
        MR_String mdb__declarative_user__Name_46;
#line 712 "declarative_user.m"
        MR_Word mdb__declarative_user__PredOrFunc_48;
#line 712 "declarative_user.m"
        MR_Word mdb__declarative_user__IsFunction_49;
#line 712 "declarative_user.m"
        MR_String mdb__declarative_user__ModuleStr_50;
#line 712 "declarative_user.m"
        MR_Word mdb__declarative_user__BrowserTerm_51;
#line 712 "declarative_user.m"
        MR_Word mdb__declarative_user__V_52_52;
#line 712 "declarative_user.m"
        MR_String mdb__declarative_user__V_54_54;
#line 712 "declarative_user.m"
        MR_String mdb__declarative_user__V_55_55;
#line 712 "declarative_user.m"
        MR_Word mdb__declarative_user__V_57_57;
#line 712 "declarative_user.m"
        MR_Word mdb__declarative_user__V_62_62;
#line 716 "declarative_user.m"
        MR_Integer mdb__declarative_user__V_47_47;
#line 721 "declarative_user.m"
        MR_Word mdb__declarative_user__V_61_61;
#line 721 "declarative_user.m"
        MR_Word mdb__declarative_user__V_63_63;
#line 721 "declarative_user.m"
        MR_Word mdb__declarative_user__V_64_64;
#line 721 "declarative_user.m"
        MR_Word mdb__declarative_user__V_65_65;

#line 714 "declarative_user.m"
        {
#line 714 "declarative_user.m"
          mdb__declarative_user__ProcLabel_43 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_user__ProcLayout_41);
        }
#line 715 "declarative_user.m"
        {
#line 715 "declarative_user.m"
          mdb__declarative_user__get_user_arg_values_2_p_0(mdb__declarative_user__Args_42, &mdb__declarative_user__ArgValues_44);
        }
#line 716 "declarative_user.m"
        {
#line 716 "declarative_user.m"
          mdb__declarative_execution__get_pred_attributes_5_p_0(mdb__declarative_user__ProcLabel_43, &mdb__declarative_user__Module_45, &mdb__declarative_user__Name_46, &mdb__declarative_user__V_47_47, &mdb__declarative_user__PredOrFunc_48);
        }
#line 717 "declarative_user.m"
        {
#line 717 "declarative_user.m"
          mdb__declarative_user__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 717 "declarative_user.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_user__V_52_52, 0) = ((MR_Box) (&mdb__declarative_user_scalar_common_3[0]));
#line 717 "declarative_user.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_user__V_52_52, 1) = ((MR_Box) (mdb__declarative_user__browse_xml_decl_bug_5_p_0_1));
#line 717 "declarative_user.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_user__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 717 "declarative_user.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_user__V_52_52, 3) = ((MR_Box) (mdb__declarative_user__PredOrFunc_48));
#line 717 "declarative_user.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_user__V_52_52, 4) = ((MR_Box) ((MR_Integer) 1));
#line 717 "declarative_user.m"
        }
#line 717 "declarative_user.m"
        {
#line 717 "declarative_user.m"
          mdb__declarative_user__IsFunction_49 = mercury__bool__pred_to_bool_1_f_0(mdb__declarative_user__V_52_52);
        }
#line 718 "declarative_user.m"
        {
#line 718 "declarative_user.m"
          mdb__declarative_user__ModuleStr_50 = mdbcomp__prim_data__sym_name_to_string_1_f_0(mdb__declarative_user__Module_45);
        }
#line 719 "declarative_user.m"
        {
#line 719 "declarative_user.m"
          mdb__declarative_user__V_55_55 = mercury__string__f_43_43_2_f_0((MR_String) ".", mdb__declarative_user__Name_46);
        }
#line 719 "declarative_user.m"
        {
#line 719 "declarative_user.m"
          mdb__declarative_user__V_54_54 = mercury__string__f_43_43_2_f_0(mdb__declarative_user__ModuleStr_50, mdb__declarative_user__V_55_55);
        }
#line 719 "declarative_user.m"
        {
#line 719 "declarative_user.m"
          mdb__declarative_user__BrowserTerm_51 = mdb__browser_term__synthetic_term_to_browser_term_3_f_0(mdb__declarative_user__V_54_54, mdb__declarative_user__ArgValues_44, mdb__declarative_user__IsFunction_49);
        }
#line 721 "declarative_user.m"
        mdb__declarative_user__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 0)));
#line 721 "declarative_user.m"
        mdb__declarative_user__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 1)));
#line 721 "declarative_user.m"
        mdb__declarative_user__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 2)));
#line 721 "declarative_user.m"
        mdb__declarative_user__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 3)));
#line 721 "declarative_user.m"
        mdb__declarative_user__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 4)));
#line 721 "declarative_user.m"
        mdb__declarative_user__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 5)));
#line 721 "declarative_user.m"
        {
#line 721 "declarative_user.m"
          mdb__browse__save_and_browse_browser_term_xml_6_p_0(mdb__declarative_user__BrowserTerm_51, mdb__declarative_user__V_57_57, mdb__declarative_user__V_57_57, mdb__declarative_user__V_62_62);
#line 721 "declarative_user.m"
          return;
        }
#line 712 "declarative_user.m"
      }
#line 640 "declarative_user.m"
    else
#line 638 "declarative_user.m"
      {
#line 638 "declarative_user.m"
        MR_Integer mdb__declarative_user__ArgNum_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeArgNum_7, (MR_Integer) 0)));

#line 639 "declarative_user.m"
        {
#line 639 "declarative_user.m"
          mdb__declarative_user__browse_xml_atom_argument_5_p_0(mdb__declarative_user__FinalAtom_11, mdb__declarative_user__ArgNum_12, mdb__declarative_user__User_8);
#line 639 "declarative_user.m"
          return;
        }
#line 638 "declarative_user.m"
      }
#line 635 "declarative_user.m"
  }
#line 632 "declarative_user.m"
}

#line 619 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__browse_decl_bug_6_p_0(
#line 619 "declarative_user.m"
  MR_Word mdb__declarative_user__Bug_7,
#line 619 "declarative_user.m"
  MR_Word mdb__declarative_user__MaybeArgNum_8,
#line 619 "declarative_user.m"
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_16,
#line 619 "declarative_user.m"
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_17)
#line 619 "declarative_user.m"
{
#line 622 "declarative_user.m"
  {
#line 622 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 622 "declarative_user.m"
    MR_Word mdb__declarative_user__InitAtom_11;
#line 622 "declarative_user.m"
    MR_Word mdb__declarative_user__FinalAtom_12;

#line 504 "declarative_user.m"
    if (((MR_tag((MR_Word) mdb__declarative_user__Bug_7)) == (MR_mktag((MR_Integer) 1))))
#line 504 "declarative_user.m"
      {
#line 504 "declarative_user.m"
        MR_Word mdb__declarative_user__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Bug_7, (MR_Integer) 0)));

#line 504 "declarative_user.m"
        if (((MR_tag((MR_Word) mdb__declarative_user__V_42_42)) == (MR_mktag((MR_Integer) 0))))
#line 504 "declarative_user.m"
          {
#line 504 "declarative_user.m"
            MR_Word mdb__declarative_user__InitDeclAtom_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_42_42, (MR_Integer) 0)));
#line 504 "declarative_user.m"
            MR_Word mdb__declarative_user__FinalDeclAtom_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_42_42, (MR_Integer) 1)));
#line 504 "declarative_user.m"
            MR_Word mdb__declarative_user__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_42_42, (MR_Integer) 2)));
#line 504 "declarative_user.m"
            MR_Integer mdb__declarative_user__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_42_42, (MR_Integer) 3)));
#line 504 "declarative_user.m"
            MR_Word mdb__declarative_user__V_41_41;

#line 504 "declarative_user.m"
            mdb__declarative_user__InitAtom_11 = (MR_Word) mdb__declarative_user__InitDeclAtom_24;
#line 504 "declarative_user.m"
            mdb__declarative_user__FinalAtom_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalDeclAtom_25, (MR_Integer) 0)));
#line 504 "declarative_user.m"
            mdb__declarative_user__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalDeclAtom_25, (MR_Integer) 1)));
#line 504 "declarative_user.m"
          }
#line 504 "declarative_user.m"
        else
#line 504 "declarative_user.m"
          if (((MR_tag((MR_Word) mdb__declarative_user__V_42_42)) == (MR_mktag((MR_Integer) 1))))
#line 506 "declarative_user.m"
            {
#line 506 "declarative_user.m"
              MR_Word mdb__declarative_user__InitDeclAtom_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_42_42, (MR_Integer) 0)));
#line 506 "declarative_user.m"
              MR_Integer mdb__declarative_user__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_42_42, (MR_Integer) 1)));

#line 506 "declarative_user.m"
              mdb__declarative_user__InitAtom_11 = (MR_Word) mdb__declarative_user__InitDeclAtom_29;
#line 506 "declarative_user.m"
              mdb__declarative_user__FinalAtom_12 = mdb__declarative_user__InitAtom_11;
#line 506 "declarative_user.m"
            }
#line 504 "declarative_user.m"
          else
#line 508 "declarative_user.m"
            {
#line 508 "declarative_user.m"
              MR_Word mdb__declarative_user__InitDeclAtom_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__V_42_42, (MR_Integer) 0)));
#line 508 "declarative_user.m"
              MR_Word mdb__declarative_user__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__V_42_42, (MR_Integer) 1)));
#line 508 "declarative_user.m"
              MR_Integer mdb__declarative_user__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_user__V_42_42, (MR_Integer) 2)));

#line 508 "declarative_user.m"
              mdb__declarative_user__InitAtom_11 = (MR_Word) mdb__declarative_user__InitDeclAtom_32;
#line 508 "declarative_user.m"
              mdb__declarative_user__FinalAtom_12 = mdb__declarative_user__InitAtom_11;
#line 508 "declarative_user.m"
            }
#line 504 "declarative_user.m"
      }
#line 504 "declarative_user.m"
    else
#line 510 "declarative_user.m"
      {
#line 510 "declarative_user.m"
        MR_Word mdb__declarative_user__InitDeclAtom_38;
#line 510 "declarative_user.m"
        MR_Word mdb__declarative_user__V_40_40 = (MR_Word) MR_body(((MR_Word) mdb__declarative_user__Bug_7), (MR_Integer) 0);
#line 510 "declarative_user.m"
        MR_Word mdb__declarative_user__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_40_40, (MR_Integer) 0)));
#line 510 "declarative_user.m"
        MR_Integer mdb__declarative_user__V_39_39;

#line 510 "declarative_user.m"
        mdb__declarative_user__InitDeclAtom_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_40_40, (MR_Integer) 2)));
#line 510 "declarative_user.m"
        mdb__declarative_user__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_40_40, (MR_Integer) 3)));
#line 510 "declarative_user.m"
        mdb__declarative_user__InitAtom_11 = (MR_Word) mdb__declarative_user__InitDeclAtom_38;
#line 510 "declarative_user.m"
        mdb__declarative_user__FinalAtom_12 = mdb__declarative_user__InitAtom_11;
#line 510 "declarative_user.m"
      }
#line 627 "declarative_user.m"
    if ((mdb__declarative_user__MaybeArgNum_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 629 "declarative_user.m"
      {
#line 629 "declarative_user.m"
        MR_Word mdb__declarative_user__V_15_15;

#line 629 "declarative_user.m"
        {
#line 629 "declarative_user.m"
          mdb__declarative_user__browse_atom_7_p_0(mdb__declarative_user__InitAtom_11, mdb__declarative_user__FinalAtom_12, &mdb__declarative_user__V_15_15, mdb__declarative_user__STATE_VARIABLE_User_0_16, mdb__declarative_user__STATE_VARIABLE_User_17);
        }
#line 629 "declarative_user.m"
      }
#line 627 "declarative_user.m"
    else
#line 625 "declarative_user.m"
      {
#line 625 "declarative_user.m"
        MR_Integer mdb__declarative_user__ArgNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeArgNum_8, (MR_Integer) 0)));
#line 626 "declarative_user.m"
        MR_Word mdb__declarative_user__V_14_14;

#line 626 "declarative_user.m"
        {
#line 626 "declarative_user.m"
          mdb__declarative_user__browse_atom_argument_8_p_0(mdb__declarative_user__InitAtom_11, mdb__declarative_user__FinalAtom_12, mdb__declarative_user__ArgNum_13, &mdb__declarative_user__V_14_14, mdb__declarative_user__STATE_VARIABLE_User_0_16, mdb__declarative_user__STATE_VARIABLE_User_17);
        }
#line 625 "declarative_user.m"
      }
#line 622 "declarative_user.m"
  }
#line 619 "declarative_user.m"
}

#line 602 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__browse_io_action_6_p_0(
#line 602 "declarative_user.m"
  MR_Word mdb__declarative_user__IoAction_7,
#line 602 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2,
#line 602 "declarative_user.m"
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_17,
#line 602 "declarative_user.m"
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_18)
#line 602 "declarative_user.m"
{
#line 605 "declarative_user.m"
  {
#line 605 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 605 "declarative_user.m"
    MR_Word mdb__declarative_user__Term_10;
#line 605 "declarative_user.m"
    MR_Word mdb__declarative_user__MaybeTrackDirs_11;
#line 605 "declarative_user.m"
    MR_Word mdb__declarative_user__Browser_12;
#line 605 "declarative_user.m"
    MR_Word mdb__declarative_user__V_21_21;
#line 605 "declarative_user.m"
    MR_Word mdb__declarative_user__STATE_VARIABLE_User_29_29;
#line 605 "declarative_user.m"
    MR_Word mdb__declarative_user__V_32_32;
#line 605 "declarative_user.m"
    MR_Word mdb__declarative_user__V_33_33;
#line 607 "declarative_user.m"
    MR_Word mdb__declarative_user__V_34_34;
#line 607 "declarative_user.m"
    MR_Word mdb__declarative_user__V_35_35;
#line 607 "declarative_user.m"
    MR_Word mdb__declarative_user__V_36_36;
#line 617 "declarative_user.m"
    MR_Word mdb__declarative_user__V_52_52;
#line 617 "declarative_user.m"
    MR_Word mdb__declarative_user__V_53_53;
#line 617 "declarative_user.m"
    MR_Word mdb__declarative_user__V_55_55;
#line 617 "declarative_user.m"
    MR_Word mdb__declarative_user__V_56_56;
#line 617 "declarative_user.m"
    MR_Word mdb__declarative_user__V_57_57;
#line 617 "declarative_user.m"
    MR_Word mdb__declarative_user__V_54_54;

#line 605 "declarative_user.m"
    *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 606 "declarative_user.m"
    {
#line 606 "declarative_user.m"
      mdb__declarative_user__Term_10 = mdb__io_action__io_action_to_browser_term_1_f_0(mdb__declarative_user__IoAction_7);
    }
#line 607 "declarative_user.m"
    mdb__declarative_user__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 0)));
#line 607 "declarative_user.m"
    mdb__declarative_user__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 1)));
#line 607 "declarative_user.m"
    mdb__declarative_user__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 2)));
#line 607 "declarative_user.m"
    mdb__declarative_user__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 3)));
#line 607 "declarative_user.m"
    mdb__declarative_user__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 4)));
#line 607 "declarative_user.m"
    mdb__declarative_user__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 5)));
#line 607 "declarative_user.m"
    {
#line 607 "declarative_user.m"
      mdb__browse__browse_browser_term_9_p_0(mdb__declarative_user__Term_10, mdb__declarative_user__V_21_21, mdb__declarative_user__V_32_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__declarative_user__MaybeTrackDirs_11, mdb__declarative_user__V_33_33, &mdb__declarative_user__Browser_12);
    }
#line 614 "declarative_user.m"
    if ((mdb__declarative_user__MaybeTrackDirs_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "declarative_user.m"
      mdb__declarative_user__STATE_VARIABLE_User_29_29 = mdb__declarative_user__STATE_VARIABLE_User_0_17;
#line 614 "declarative_user.m"
    else
#line 610 "declarative_user.m"
      {
#line 610 "declarative_user.m"
        MR_Word mdb__declarative_user__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 1)));
#line 611 "declarative_user.m"
        MR_Word mdb__declarative_user__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 0)));
#line 611 "declarative_user.m"
        MR_Word mdb__declarative_user__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 2)));
#line 611 "declarative_user.m"
        MR_Word mdb__declarative_user__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 3)));
#line 611 "declarative_user.m"
        MR_Word mdb__declarative_user__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 4)));
#line 611 "declarative_user.m"
        MR_Word mdb__declarative_user__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 5)));
#line 613 "declarative_user.m"
        MR_Word mdb__declarative_user__V_16_16;

#line 611 "declarative_user.m"
        {
#line 611 "declarative_user.m"
          mercury__io__write_string_4_p_0(mdb__declarative_user__V_26_26, (MR_String) "Sorry, tracking of I/O actions is not yet supported.\n");
        }
#line 613 "declarative_user.m"
        {
#line 613 "declarative_user.m"
          mdb__declarative_user__browse_io_action_6_p_0(mdb__declarative_user__IoAction_7, &mdb__declarative_user__V_16_16, mdb__declarative_user__STATE_VARIABLE_User_0_17, &mdb__declarative_user__STATE_VARIABLE_User_29_29);
        }
#line 610 "declarative_user.m"
      }
#line 617 "declarative_user.m"
    mdb__declarative_user__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_29_29, (MR_Integer) 0)));
#line 617 "declarative_user.m"
    mdb__declarative_user__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_29_29, (MR_Integer) 1)));
#line 617 "declarative_user.m"
    mdb__declarative_user__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_29_29, (MR_Integer) 2)));
#line 617 "declarative_user.m"
    mdb__declarative_user__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_29_29, (MR_Integer) 3)));
#line 617 "declarative_user.m"
    mdb__declarative_user__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_29_29, (MR_Integer) 4)));
#line 617 "declarative_user.m"
    mdb__declarative_user__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_29_29, (MR_Integer) 5)));
#line 617 "declarative_user.m"
    {
#line 617 "declarative_user.m"
      MR_Word base;
#line 617 "declarative_user.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 617 "declarative_user.m"
      *mdb__declarative_user__STATE_VARIABLE_User_18 = base;
#line 617 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_user__V_52_52));
#line 617 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_user__V_53_53));
#line 617 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_user__Browser_12));
#line 617 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_user__V_55_55));
#line 617 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_user__V_56_56));
#line 617 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_user__V_57_57));
#line 617 "declarative_user.m"
    }
#line 605 "declarative_user.m"
  }
#line 602 "declarative_user.m"
}

#line 566 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__print_chosen_io_actions_6_p_0(
#line 566 "declarative_user.m"
  MR_Word mdb__declarative_user__MaybeIoActions_7,
#line 566 "declarative_user.m"
  MR_Integer mdb__declarative_user__From_8,
#line 566 "declarative_user.m"
  MR_Integer mdb__declarative_user__To_9,
#line 566 "declarative_user.m"
  MR_Word mdb__declarative_user__User0_10)
#line 566 "declarative_user.m"
{
#line 569 "declarative_user.m"
  while (MR_TRUE)
#line 569 "declarative_user.m"
    {
#line 569 "declarative_user.m"
      /* tailcall optimized into a loop */
#line 569 "declarative_user.m"
      {
#line 569 "declarative_user.m"
        MR_bool mdb__declarative_user__succeeded;
#line 569 "declarative_user.m"
        MR_Word mdb__declarative_user__OK_12;
#line 572 "declarative_user.m"
        MR_Integer mdb__declarative_user__V_16_16;
#line 572 "declarative_user.m"
        MR_Integer mdb__declarative_user__V_17_17;

#line 585 "declarative_user.m"
        if ((mdb__declarative_user__MaybeIoActions_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 597 "declarative_user.m"
          {
#line 598 "declarative_user.m"
            {
#line 598 "declarative_user.m"
              mercury__io__write_string_3_p_0((MR_String) "No such IO action.\n");
            }
#line 599 "declarative_user.m"
            mdb__declarative_user__OK_12 = (MR_Integer) 0;
#line 597 "declarative_user.m"
          }
#line 585 "declarative_user.m"
        else
#line 585 "declarative_user.m"
          {
#line 585 "declarative_user.m"
            MR_Word mdb__declarative_user__IoActions_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeIoActions_7, (MR_Integer) 0)));
#line 585 "declarative_user.m"
            MR_Word mdb__declarative_user__MaybeIoAction_29;

#line 586 "declarative_user.m"
            {
#line 586 "declarative_user.m"
              mdb__declarative_user__find_tabled_io_action_5_p_0(mdb__declarative_user__IoActions_28, mdb__declarative_user__From_8, &mdb__declarative_user__MaybeIoAction_29);
            }
#line 591 "declarative_user.m"
            if ((mdb__declarative_user__MaybeIoAction_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 592 "declarative_user.m"
              {
#line 593 "declarative_user.m"
                {
#line 593 "declarative_user.m"
                  mercury__io__write_string_3_p_0((MR_String) "No such IO action.\n");
                }
#line 594 "declarative_user.m"
                mdb__declarative_user__OK_12 = (MR_Integer) 0;
#line 592 "declarative_user.m"
              }
#line 591 "declarative_user.m"
            else
#line 588 "declarative_user.m"
              {
#line 588 "declarative_user.m"
                MR_Word mdb__declarative_user__IoAction_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeIoAction_29, (MR_Integer) 0)));
#line 588 "declarative_user.m"
                MR_Word mdb__declarative_user__Term_45;
#line 588 "declarative_user.m"
                MR_Word mdb__declarative_user__V_48_48;
#line 588 "declarative_user.m"
                MR_Word mdb__declarative_user__V_53_53;
#line 1346 "declarative_user.m"
                MR_Word mdb__declarative_user__V_52_52;
#line 1346 "declarative_user.m"
                MR_Word mdb__declarative_user__V_54_54;
#line 1346 "declarative_user.m"
                MR_Word mdb__declarative_user__V_55_55;
#line 1346 "declarative_user.m"
                MR_Word mdb__declarative_user__V_56_56;

#line 1345 "declarative_user.m"
                {
#line 1345 "declarative_user.m"
                  mdb__declarative_user__Term_45 = mdb__io_action__io_action_to_browser_term_1_f_0(mdb__declarative_user__IoAction_43);
                }
#line 1346 "declarative_user.m"
                mdb__declarative_user__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User0_10, (MR_Integer) 0)));
#line 1346 "declarative_user.m"
                mdb__declarative_user__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User0_10, (MR_Integer) 1)));
#line 1346 "declarative_user.m"
                mdb__declarative_user__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User0_10, (MR_Integer) 2)));
#line 1346 "declarative_user.m"
                mdb__declarative_user__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User0_10, (MR_Integer) 3)));
#line 1346 "declarative_user.m"
                mdb__declarative_user__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User0_10, (MR_Integer) 4)));
#line 1346 "declarative_user.m"
                mdb__declarative_user__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User0_10, (MR_Integer) 5)));
#line 1346 "declarative_user.m"
                {
#line 1346 "declarative_user.m"
                  mdb__browse__print_browser_term_6_p_0(mdb__declarative_user__Term_45, mdb__declarative_user__V_48_48, (MR_Integer) 2, mdb__declarative_user__V_53_53);
                }
#line 590 "declarative_user.m"
                mdb__declarative_user__OK_12 = (MR_Integer) 1;
#line 588 "declarative_user.m"
              }
#line 585 "declarative_user.m"
          }
#line 572 "declarative_user.m"
        mdb__declarative_user__succeeded = (mdb__declarative_user__OK_12 == (MR_Integer) 1);
#line 572 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 572 "declarative_user.m"
          {
#line 573 "declarative_user.m"
            mdb__declarative_user__V_17_17 = (MR_Integer) 1;
#line 573 "declarative_user.m"
            mdb__declarative_user__V_16_16 = (mdb__declarative_user__From_8 + mdb__declarative_user__V_17_17);
#line 573 "declarative_user.m"
            mdb__declarative_user__succeeded = (mdb__declarative_user__V_16_16 <= mdb__declarative_user__To_9);
#line 572 "declarative_user.m"
          }
#line 576 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 575 "declarative_user.m"
          {
#line 575 "declarative_user.m"
            MR_Integer mdb__declarative_user__V_18_18 = (mdb__declarative_user__From_8 + (MR_Integer) 1);

#line 575 "declarative_user.m"
            /* direct tailcall eliminated */
#line 575 "declarative_user.m"
            {
#line 575 "declarative_user.m"
              MR_Integer mdb__declarative_user__From__tmp_copy_8 = mdb__declarative_user__V_18_18;

#line 575 "declarative_user.m"
              mdb__declarative_user__From_8 = mdb__declarative_user__From__tmp_copy_8;
#line 575 "declarative_user.m"
            }
#line 575 "declarative_user.m"
            continue;
#line 575 "declarative_user.m"
          }
#line 576 "declarative_user.m"
        else
#line 575 "declarative_user.m"
          {
#line 575 "declarative_user.m"
          }
#line 569 "declarative_user.m"
      }
#line 569 "declarative_user.m"
      break;
#line 569 "declarative_user.m"
    }
#line 566 "declarative_user.m"
}

#line 542 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__find_tabled_io_action_5_p_0(
#line 542 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 542 "declarative_user.m"
  MR_Integer mdb__declarative_user__TabledActionNum_8,
#line 542 "declarative_user.m"
  MR_Word * mdb__declarative_user__MaybeIoAction_9)
#line 542 "declarative_user.m"
{
#line 546 "declarative_user.m"
  while (MR_TRUE)
#line 546 "declarative_user.m"
    {
#line 546 "declarative_user.m"
      /* tailcall optimized into a loop */
#line 546 "declarative_user.m"
      {
#line 546 "declarative_user.m"
        MR_bool mdb__declarative_user__succeeded;
#line 546 "declarative_user.m"
        MR_Integer mdb__declarative_user__Cur_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
#line 546 "declarative_user.m"
        MR_Integer mdb__declarative_user__End_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));

#line 547 "declarative_user.m"
        mdb__declarative_user__succeeded = (mdb__declarative_user__Cur_6 == mdb__declarative_user__End_7);
#line 549 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 548 "declarative_user.m"
          *mdb__declarative_user__MaybeIoAction_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 549 "declarative_user.m"
        else
#line 550 "declarative_user.m"
          {
#line 550 "declarative_user.m"
            MR_Word mdb__declarative_user__MaybeTabledIoAction_11;

#line 550 "declarative_user.m"
            {
#line 550 "declarative_user.m"
              mdb__io_action__get_maybe_io_action_4_p_0(mdb__declarative_user__Cur_6, &mdb__declarative_user__MaybeTabledIoAction_11);
            }
#line 559 "declarative_user.m"
            if ((mdb__declarative_user__MaybeTabledIoAction_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 560 "declarative_user.m"
              {
#line 560 "declarative_user.m"
                MR_Word mdb__declarative_user__V_16_16;
#line 560 "declarative_user.m"
                MR_Integer mdb__declarative_user__V_18_18 = (mdb__declarative_user__Cur_6 + (MR_Integer) 1);

#line 561 "declarative_user.m"
                {
#line 561 "declarative_user.m"
                  mdb__declarative_user__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 561 "declarative_user.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_user__V_16_16, 0) = ((MR_Box) (mdb__declarative_user__V_18_18));
#line 561 "declarative_user.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_user__V_16_16, 1) = ((MR_Box) (mdb__declarative_user__End_7));
#line 561 "declarative_user.m"
                }
#line 561 "declarative_user.m"
                /* direct tailcall eliminated */
#line 561 "declarative_user.m"
                {
#line 561 "declarative_user.m"
                  MR_Word mdb__declarative_user__HeadVar__1__tmp_copy_1 = mdb__declarative_user__V_16_16;

#line 561 "declarative_user.m"
                  mdb__declarative_user__HeadVar__1_1 = mdb__declarative_user__HeadVar__1__tmp_copy_1;
#line 561 "declarative_user.m"
                }
#line 561 "declarative_user.m"
                continue;
#line 560 "declarative_user.m"
              }
#line 559 "declarative_user.m"
            else
#line 552 "declarative_user.m"
              {
#line 552 "declarative_user.m"
                MR_Word mdb__declarative_user__IoAction_12 = (MR_Word) MR_body(((MR_Word) mdb__declarative_user__MaybeTabledIoAction_11), (MR_Integer) 1);

#line 553 "declarative_user.m"
                mdb__declarative_user__succeeded = (mdb__declarative_user__TabledActionNum_8 == (MR_Integer) 1);
#line 555 "declarative_user.m"
                if (mdb__declarative_user__succeeded)
#line 554 "declarative_user.m"
                  {
#line 554 "declarative_user.m"
                    MR_Word base;
#line 554 "declarative_user.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 554 "declarative_user.m"
                    *mdb__declarative_user__MaybeIoAction_9 = base;
#line 554 "declarative_user.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__IoAction_12));
#line 554 "declarative_user.m"
                  }
#line 555 "declarative_user.m"
                else
#line 556 "declarative_user.m"
                  {
#line 556 "declarative_user.m"
                    MR_Word mdb__declarative_user__V_20_20;
#line 556 "declarative_user.m"
                    MR_Integer mdb__declarative_user__V_21_21;
#line 556 "declarative_user.m"
                    MR_Integer mdb__declarative_user__V_23_23 = (mdb__declarative_user__Cur_6 + (MR_Integer) 1);

#line 556 "declarative_user.m"
                    {
#line 556 "declarative_user.m"
                      mdb__declarative_user__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 556 "declarative_user.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_20_20, 0) = ((MR_Box) (mdb__declarative_user__V_23_23));
#line 556 "declarative_user.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_20_20, 1) = ((MR_Box) (mdb__declarative_user__End_7));
#line 556 "declarative_user.m"
                    }
#line 556 "declarative_user.m"
                    mdb__declarative_user__V_21_21 = (mdb__declarative_user__TabledActionNum_8 - (MR_Integer) 1);
#line 556 "declarative_user.m"
                    /* direct tailcall eliminated */
#line 556 "declarative_user.m"
                    {
#line 556 "declarative_user.m"
                      MR_Word mdb__declarative_user__HeadVar__1__tmp_copy_1 = mdb__declarative_user__V_20_20;
#line 556 "declarative_user.m"
                      MR_Integer mdb__declarative_user__TabledActionNum__tmp_copy_8 = mdb__declarative_user__V_21_21;

#line 556 "declarative_user.m"
                      mdb__declarative_user__TabledActionNum_8 = mdb__declarative_user__TabledActionNum__tmp_copy_8;
#line 556 "declarative_user.m"
                      mdb__declarative_user__HeadVar__1_1 = mdb__declarative_user__HeadVar__1__tmp_copy_1;
#line 556 "declarative_user.m"
                    }
#line 556 "declarative_user.m"
                    continue;
#line 556 "declarative_user.m"
                  }
#line 552 "declarative_user.m"
              }
#line 550 "declarative_user.m"
          }
#line 546 "declarative_user.m"
      }
#line 546 "declarative_user.m"
      break;
#line 546 "declarative_user.m"
    }
#line 542 "declarative_user.m"
}

#line 521 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__browse_chosen_io_action_7_p_0(
#line 521 "declarative_user.m"
  MR_Word mdb__declarative_user__MaybeIoActions_8,
#line 521 "declarative_user.m"
  MR_Integer mdb__declarative_user__ActionNum_9,
#line 521 "declarative_user.m"
  MR_Word * mdb__declarative_user__MaybeTrack_10,
#line 521 "declarative_user.m"
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_16,
#line 521 "declarative_user.m"
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_17)
#line 521 "declarative_user.m"
{
#line 527 "declarative_user.m"
  {
#line 527 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;

#line 527 "declarative_user.m"
    if ((mdb__declarative_user__MaybeIoActions_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 537 "declarative_user.m"
      {
#line 538 "declarative_user.m"
        {
#line 538 "declarative_user.m"
          mercury__io__write_string_3_p_0((MR_String) "No such IO action.\n");
        }
#line 539 "declarative_user.m"
        *mdb__declarative_user__MaybeTrack_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 539 "declarative_user.m"
        *mdb__declarative_user__STATE_VARIABLE_User_17 = mdb__declarative_user__STATE_VARIABLE_User_0_16;
#line 537 "declarative_user.m"
      }
#line 527 "declarative_user.m"
    else
#line 527 "declarative_user.m"
      {
#line 527 "declarative_user.m"
        MR_Word mdb__declarative_user__IoActions_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeIoActions_8, (MR_Integer) 0)));
#line 527 "declarative_user.m"
        MR_Word mdb__declarative_user__MaybeIoAction_14;

#line 528 "declarative_user.m"
        {
#line 528 "declarative_user.m"
          mdb__declarative_user__find_tabled_io_action_5_p_0(mdb__declarative_user__IoActions_13, mdb__declarative_user__ActionNum_9, &mdb__declarative_user__MaybeIoAction_14);
        }
#line 532 "declarative_user.m"
        if ((mdb__declarative_user__MaybeIoAction_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 533 "declarative_user.m"
          {
#line 534 "declarative_user.m"
            *mdb__declarative_user__MaybeTrack_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 534 "declarative_user.m"
            *mdb__declarative_user__STATE_VARIABLE_User_17 = mdb__declarative_user__STATE_VARIABLE_User_0_16;
#line 533 "declarative_user.m"
          }
#line 532 "declarative_user.m"
        else
#line 530 "declarative_user.m"
          {
#line 530 "declarative_user.m"
            MR_Word mdb__declarative_user__IoAction_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeIoAction_14, (MR_Integer) 0)));

#line 531 "declarative_user.m"
            {
#line 531 "declarative_user.m"
              mdb__declarative_user__browse_io_action_6_p_0(mdb__declarative_user__IoAction_15, mdb__declarative_user__MaybeTrack_10, mdb__declarative_user__STATE_VARIABLE_User_0_16, mdb__declarative_user__STATE_VARIABLE_User_17);
#line 531 "declarative_user.m"
              return;
            }
#line 530 "declarative_user.m"
          }
#line 527 "declarative_user.m"
      }
#line 527 "declarative_user.m"
  }
#line 521 "declarative_user.m"
}

#line 513 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__decl_bug_io_actions_2_p_0(
#line 513 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 513 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2)
#line 513 "declarative_user.m"
{
#line 515 "declarative_user.m"
  {
#line 515 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;

#line 515 "declarative_user.m"
    if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 515 "declarative_user.m"
      {
#line 515 "declarative_user.m"
        MR_Word mdb__declarative_user__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));

#line 515 "declarative_user.m"
        if (((MR_tag((MR_Word) mdb__declarative_user__V_21_21)) == (MR_mktag((MR_Integer) 0))))
#line 515 "declarative_user.m"
          {
#line 515 "declarative_user.m"
            MR_Word mdb__declarative_user__FinalDeclAtom_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_21_21, (MR_Integer) 1)));
#line 515 "declarative_user.m"
            MR_Word mdb__declarative_user__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_21_21, (MR_Integer) 0)));
#line 515 "declarative_user.m"
            MR_Word mdb__declarative_user__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_21_21, (MR_Integer) 2)));
#line 515 "declarative_user.m"
            MR_Integer mdb__declarative_user__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_21_21, (MR_Integer) 3)));
#line 515 "declarative_user.m"
            MR_Word mdb__declarative_user__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalDeclAtom_4, (MR_Integer) 0)));

#line 515 "declarative_user.m"
            *mdb__declarative_user__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalDeclAtom_4, (MR_Integer) 1)));
#line 515 "declarative_user.m"
          }
#line 515 "declarative_user.m"
        else
#line 515 "declarative_user.m"
          if (((MR_tag((MR_Word) mdb__declarative_user__V_21_21)) == (MR_mktag((MR_Integer) 1))))
#line 517 "declarative_user.m"
            *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 515 "declarative_user.m"
          else
#line 518 "declarative_user.m"
            *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 515 "declarative_user.m"
      }
#line 515 "declarative_user.m"
    else
#line 519 "declarative_user.m"
      *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 515 "declarative_user.m"
  }
#line 513 "declarative_user.m"
}

#line 436 "declarative_user.m"
static MR_Word MR_CALL 
mdb__declarative_user__arg_num_to_arg_pos_1_f_0(
#line 436 "declarative_user.m"
  MR_Integer mdb__declarative_user__ArgNum_3)
#line 436 "declarative_user.m"
{
#line 438 "declarative_user.m"
  {
#line 438 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 438 "declarative_user.m"
    MR_Word mdb__declarative_user__ArgPos_4;
#line 438 "declarative_user.m"
    MR_Word mdb__declarative_user__Which_5;

#line 439 "declarative_user.m"
    {
#line 439 "declarative_user.m"
      mdb__declarative_user__Which_5 = mdb__declarative_execution__chosen_head_vars_presentation_0_f_0();
    }
#line 443 "declarative_user.m"
    if ((mdb__declarative_user__Which_5 == (MR_Integer) 0))
#line 445 "declarative_user.m"
      {
#line 445 "declarative_user.m"
        mdb__declarative_user__ArgPos_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 445 "declarative_user.m"
        MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgPos_4, 0) = ((MR_Box) (mdb__declarative_user__ArgNum_3));
#line 445 "declarative_user.m"
      }
#line 443 "declarative_user.m"
    else
#line 442 "declarative_user.m"
      {
#line 442 "declarative_user.m"
        mdb__declarative_user__ArgPos_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 442 "declarative_user.m"
        MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgPos_4, 0) = ((MR_Box) (mdb__declarative_user__ArgNum_3));
#line 442 "declarative_user.m"
      }
#line 438 "declarative_user.m"
    return mdb__declarative_user__ArgPos_4;
#line 438 "declarative_user.m"
  }
#line 436 "declarative_user.m"
}

#line 250 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__handle_command_7_p_0(
#line 250 "declarative_user.m"
  MR_Word mdb__declarative_user__TypeInfo_for_T_234,
#line 250 "declarative_user.m"
  MR_Word mdb__declarative_user__Cmd_8,
#line 250 "declarative_user.m"
  MR_Word mdb__declarative_user__UserQuestion_9,
#line 250 "declarative_user.m"
  MR_Word * mdb__declarative_user__Response_10,
#line 250 "declarative_user.m"
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_57,
#line 250 "declarative_user.m"
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_58)
#line 250 "declarative_user.m"
{
#line 261 "declarative_user.m"
  while (MR_TRUE)
#line 261 "declarative_user.m"
    {
#line 261 "declarative_user.m"
      /* tailcall optimized into a loop */
#line 261 "declarative_user.m"
      {
#line 261 "declarative_user.m"
        MR_bool mdb__declarative_user__succeeded;

#line 261 "declarative_user.m"
        if ((mdb__declarative_user__Cmd_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 382 "declarative_user.m"
          {
#line 382 "declarative_user.m"
            MR_Word mdb__declarative_user__STATE_VARIABLE_User_85_85;
#line 383 "declarative_user.m"
            MR_Word mdb__declarative_user__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 0)));
#line 383 "declarative_user.m"
            MR_Word mdb__declarative_user__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 1)));
#line 383 "declarative_user.m"
            MR_Word mdb__declarative_user__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 2)));
#line 383 "declarative_user.m"
            MR_Word mdb__declarative_user__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 4)));
#line 383 "declarative_user.m"
            MR_Word mdb__declarative_user__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 5)));
#line 383 "declarative_user.m"
            MR_Word mdb__declarative_user__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 3)));

#line 383 "declarative_user.m"
            {
#line 383 "declarative_user.m"
              mdb__declarative_user__STATE_VARIABLE_User_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 383 "declarative_user.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_85_85, 0) = ((MR_Box) (mdb__declarative_user__V_213_213));
#line 383 "declarative_user.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_85_85, 1) = ((MR_Box) (mdb__declarative_user__V_214_214));
#line 383 "declarative_user.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_85_85, 2) = ((MR_Box) (mdb__declarative_user__V_215_215));
#line 383 "declarative_user.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_85_85, 3) = ((MR_Box) ((MR_Integer) 1));
#line 383 "declarative_user.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_85_85, 4) = ((MR_Box) (mdb__declarative_user__V_217_217));
#line 383 "declarative_user.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_85_85, 5) = ((MR_Box) (mdb__declarative_user__V_218_218));
#line 383 "declarative_user.m"
            }
#line 384 "declarative_user.m"
            {
#line 384 "declarative_user.m"
              mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_85_85, mdb__declarative_user__STATE_VARIABLE_User_58);
#line 384 "declarative_user.m"
              return;
            }
#line 382 "declarative_user.m"
          }
#line 261 "declarative_user.m"
        else
#line 261 "declarative_user.m"
          if ((mdb__declarative_user__Cmd_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 411 "declarative_user.m"
            {
#line 411 "declarative_user.m"
              MR_Word mdb__declarative_user__Command_54;

#line 415 "declarative_user.m"
              if (((MR_tag((MR_Word) mdb__declarative_user__UserQuestion_9)) == (MR_mktag((MR_Integer) 0))))
#line 414 "declarative_user.m"
                mdb__declarative_user__Command_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 415 "declarative_user.m"
              else
#line 416 "declarative_user.m"
                {
#line 416 "declarative_user.m"
                  MR_Word mdb__declarative_user__Truth_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__UserQuestion_9, (MR_Integer) 1)));
#line 416 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__UserQuestion_9, (MR_Integer) 0)));

#line 420 "declarative_user.m"
                  if ((mdb__declarative_user__Truth_56 == (MR_Integer) 0))
#line 418 "declarative_user.m"
                    mdb__declarative_user__Command_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 420 "declarative_user.m"
                  else
#line 420 "declarative_user.m"
                    if ((mdb__declarative_user__Truth_56 == (MR_Integer) 1))
#line 421 "declarative_user.m"
                      mdb__declarative_user__Command_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 420 "declarative_user.m"
                    else
#line 424 "declarative_user.m"
                      mdb__declarative_user__Command_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 416 "declarative_user.m"
                }
#line 428 "declarative_user.m"
              /* direct tailcall eliminated */
#line 428 "declarative_user.m"
              {
#line 428 "declarative_user.m"
                MR_Word mdb__declarative_user__Cmd__tmp_copy_8 = mdb__declarative_user__Command_54;

#line 428 "declarative_user.m"
                mdb__declarative_user__Cmd_8 = mdb__declarative_user__Cmd__tmp_copy_8;
#line 428 "declarative_user.m"
              }
#line 428 "declarative_user.m"
              continue;
#line 411 "declarative_user.m"
            }
#line 261 "declarative_user.m"
          else
#line 261 "declarative_user.m"
            if ((mdb__declarative_user__Cmd_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 430 "declarative_user.m"
              {
#line 430 "declarative_user.m"
                MR_Word mdb__declarative_user__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 1)));
#line 431 "declarative_user.m"
                MR_Word mdb__declarative_user__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 0)));
#line 431 "declarative_user.m"
                MR_Word mdb__declarative_user__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 2)));
#line 431 "declarative_user.m"
                MR_Word mdb__declarative_user__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 3)));
#line 431 "declarative_user.m"
                MR_Word mdb__declarative_user__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 4)));
#line 431 "declarative_user.m"
                MR_Word mdb__declarative_user__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 5)));

#line 431 "declarative_user.m"
                {
#line 431 "declarative_user.m"
                  mercury__io__write_string_4_p_0(mdb__declarative_user__V_61_61, (MR_String) "Unknown command, \'h\' for help.\n");
                }
#line 433 "declarative_user.m"
                {
#line 433 "declarative_user.m"
                  mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_0_57, mdb__declarative_user__STATE_VARIABLE_User_58);
#line 433 "declarative_user.m"
                  return;
                }
#line 430 "declarative_user.m"
              }
#line 261 "declarative_user.m"
            else
#line 261 "declarative_user.m"
              if ((mdb__declarative_user__Cmd_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 268 "declarative_user.m"
                {
#line 268 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_136_136;
#line 268 "declarative_user.m"
                  MR_Word mdb__declarative_user__Question_144;
#line 268 "declarative_user.m"
                  MR_Box mdb__declarative_user__Node_145;

#line 269 "declarative_user.m"
                  {
#line 269 "declarative_user.m"
                    mdb__declarative_user__Question_144 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
                  }
#line 270 "declarative_user.m"
                  {
#line 270 "declarative_user.m"
                    mdb__declarative_user__Node_145 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__Question_144);
                  }
#line 271 "declarative_user.m"
                  {
#line 271 "declarative_user.m"
                    mdb__declarative_user__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 271 "declarative_user.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_user__V_136_136, 0) = mdb__declarative_user__Node_145;
#line 271 "declarative_user.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_user__V_136_136, 1) = ((MR_Box) ((MR_Integer) 2));
#line 271 "declarative_user.m"
                  }
#line 271 "declarative_user.m"
                  {
#line 271 "declarative_user.m"
                    MR_Word base;
#line 271 "declarative_user.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "declarative_user.m"
                    *mdb__declarative_user__Response_10 = base;
#line 271 "declarative_user.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__Question_144));
#line 271 "declarative_user.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__V_136_136));
#line 271 "declarative_user.m"
                  }
#line 272 "declarative_user.m"
                  *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
#line 268 "declarative_user.m"
                }
#line 261 "declarative_user.m"
              else
#line 261 "declarative_user.m"
                if ((mdb__declarative_user__Cmd_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 359 "declarative_user.m"
                  {
#line 359 "declarative_user.m"
                    MR_Word mdb__declarative_user__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 1)));
#line 360 "declarative_user.m"
                    MR_Word mdb__declarative_user__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 0)));
#line 360 "declarative_user.m"
                    MR_Word mdb__declarative_user__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 2)));
#line 360 "declarative_user.m"
                    MR_Word mdb__declarative_user__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 3)));
#line 360 "declarative_user.m"
                    MR_Word mdb__declarative_user__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 4)));
#line 360 "declarative_user.m"
                    MR_Word mdb__declarative_user__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 5)));

#line 360 "declarative_user.m"
                    {
#line 360 "declarative_user.m"
                      MR_Word base;
#line 360 "declarative_user.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 360 "declarative_user.m"
                      *mdb__declarative_user__Response_10 = base;
#line 360 "declarative_user.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 360 "declarative_user.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_user__V_96_96));
#line 360 "declarative_user.m"
                    }
#line 360 "declarative_user.m"
                    *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
#line 359 "declarative_user.m"
                  }
#line 261 "declarative_user.m"
                else
#line 261 "declarative_user.m"
                  if ((mdb__declarative_user__Cmd_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 262 "declarative_user.m"
                    {
#line 262 "declarative_user.m"
                      MR_Word mdb__declarative_user__V_138_138;
#line 262 "declarative_user.m"
                      MR_Word mdb__declarative_user__Question_142;
#line 262 "declarative_user.m"
                      MR_Box mdb__declarative_user__Node_143;

#line 263 "declarative_user.m"
                      {
#line 263 "declarative_user.m"
                        mdb__declarative_user__Question_142 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
                      }
#line 264 "declarative_user.m"
                      {
#line 264 "declarative_user.m"
                        mdb__declarative_user__Node_143 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__Question_142);
                      }
#line 265 "declarative_user.m"
                      {
#line 265 "declarative_user.m"
                        mdb__declarative_user__V_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 265 "declarative_user.m"
                        MR_hl_field(MR_mktag(0), mdb__declarative_user__V_138_138, 0) = mdb__declarative_user__Node_143;
#line 265 "declarative_user.m"
                        MR_hl_field(MR_mktag(0), mdb__declarative_user__V_138_138, 1) = ((MR_Box) ((MR_Integer) 1));
#line 265 "declarative_user.m"
                      }
#line 265 "declarative_user.m"
                      {
#line 265 "declarative_user.m"
                        MR_Word base;
#line 265 "declarative_user.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "declarative_user.m"
                        *mdb__declarative_user__Response_10 = base;
#line 265 "declarative_user.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__Question_142));
#line 265 "declarative_user.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__V_138_138));
#line 265 "declarative_user.m"
                      }
#line 266 "declarative_user.m"
                      *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
#line 262 "declarative_user.m"
                    }
#line 261 "declarative_user.m"
                  else
#line 261 "declarative_user.m"
                    if ((mdb__declarative_user__Cmd_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 386 "declarative_user.m"
                      {
#line 386 "declarative_user.m"
                        MR_Word mdb__declarative_user__Question_190;
#line 386 "declarative_user.m"
                        MR_Box mdb__declarative_user__Node_191;

#line 387 "declarative_user.m"
                        {
#line 387 "declarative_user.m"
                          mdb__declarative_user__Question_190 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
                        }
#line 388 "declarative_user.m"
                        {
#line 388 "declarative_user.m"
                          mdb__declarative_user__Node_191 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__Question_190);
                        }
#line 389 "declarative_user.m"
                        {
#line 389 "declarative_user.m"
                          MR_Word base;
#line 389 "declarative_user.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "declarative_user.m"
                          *mdb__declarative_user__Response_10 = base;
#line 389 "declarative_user.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 389 "declarative_user.m"
                          MR_hl_field(MR_mktag(3), base, 1) = mdb__declarative_user__Node_191;
#line 389 "declarative_user.m"
                        }
#line 389 "declarative_user.m"
                        *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
#line 386 "declarative_user.m"
                      }
#line 261 "declarative_user.m"
                    else
#line 261 "declarative_user.m"
                      if ((mdb__declarative_user__Cmd_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 391 "declarative_user.m"
                        {
#line 392 "declarative_user.m"
                          *mdb__declarative_user__Response_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 392 "declarative_user.m"
                          *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
#line 391 "declarative_user.m"
                        }
#line 261 "declarative_user.m"
                      else
#line 261 "declarative_user.m"
                        if ((mdb__declarative_user__Cmd_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 274 "declarative_user.m"
                          {
#line 274 "declarative_user.m"
                            MR_Word mdb__declarative_user__V_135_135;
#line 274 "declarative_user.m"
                            MR_Word mdb__declarative_user__Question_146;
#line 274 "declarative_user.m"
                            MR_Box mdb__declarative_user__Node_147;

#line 275 "declarative_user.m"
                            {
#line 275 "declarative_user.m"
                              mdb__declarative_user__Question_146 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
                            }
#line 276 "declarative_user.m"
                            {
#line 276 "declarative_user.m"
                              mdb__declarative_user__Node_147 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__Question_146);
                            }
#line 277 "declarative_user.m"
                            {
#line 277 "declarative_user.m"
                              mdb__declarative_user__V_135_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 277 "declarative_user.m"
                              MR_hl_field(MR_mktag(3), mdb__declarative_user__V_135_135, 0) = mdb__declarative_user__Node_147;
#line 277 "declarative_user.m"
                            }
#line 277 "declarative_user.m"
                            {
#line 277 "declarative_user.m"
                              MR_Word base;
#line 277 "declarative_user.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 277 "declarative_user.m"
                              *mdb__declarative_user__Response_10 = base;
#line 277 "declarative_user.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__Question_146));
#line 277 "declarative_user.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__V_135_135));
#line 277 "declarative_user.m"
                            }
#line 277 "declarative_user.m"
                            *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
#line 274 "declarative_user.m"
                          }
#line 261 "declarative_user.m"
                        else
#line 261 "declarative_user.m"
                          if ((mdb__declarative_user__Cmd_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 355 "declarative_user.m"
                            {
#line 355 "declarative_user.m"
                              MR_Word mdb__declarative_user__Question_184;

#line 356 "declarative_user.m"
                              {
#line 356 "declarative_user.m"
                                mdb__declarative_user__Question_184 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
                              }
#line 357 "declarative_user.m"
                              {
#line 357 "declarative_user.m"
                                MR_Word base;
#line 357 "declarative_user.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 357 "declarative_user.m"
                                *mdb__declarative_user__Response_10 = base;
#line 357 "declarative_user.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 357 "declarative_user.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_user__Question_184));
#line 357 "declarative_user.m"
                              }
#line 357 "declarative_user.m"
                              *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
#line 355 "declarative_user.m"
                            }
#line 261 "declarative_user.m"
                          else
#line 261 "declarative_user.m"
                            if ((mdb__declarative_user__Cmd_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 351 "declarative_user.m"
                              {
#line 351 "declarative_user.m"
                                MR_Word mdb__declarative_user__Question_183;

#line 352 "declarative_user.m"
                                {
#line 352 "declarative_user.m"
                                  mdb__declarative_user__Question_183 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
                                }
#line 353 "declarative_user.m"
                                {
#line 353 "declarative_user.m"
                                  MR_Word base;
#line 353 "declarative_user.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 353 "declarative_user.m"
                                  *mdb__declarative_user__Response_10 = base;
#line 353 "declarative_user.m"
                                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_user__Question_183));
#line 353 "declarative_user.m"
                                }
#line 353 "declarative_user.m"
                                *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
#line 351 "declarative_user.m"
                              }
#line 261 "declarative_user.m"
                            else
#line 261 "declarative_user.m"
                              if ((mdb__declarative_user__Cmd_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 362 "declarative_user.m"
                                {
#line 363 "declarative_user.m"
                                  *mdb__declarative_user__Response_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 363 "declarative_user.m"
                                  *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
#line 362 "declarative_user.m"
                                }
#line 261 "declarative_user.m"
                              else
#line 261 "declarative_user.m"
                                if ((mdb__declarative_user__Cmd_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 256 "declarative_user.m"
                                  {
#line 256 "declarative_user.m"
                                    MR_Word mdb__declarative_user__Question_13;
#line 256 "declarative_user.m"
                                    MR_Box mdb__declarative_user__Node_14;
#line 256 "declarative_user.m"
                                    MR_Word mdb__declarative_user__V_140_140;

#line 257 "declarative_user.m"
                                    {
#line 257 "declarative_user.m"
                                      mdb__declarative_user__Question_13 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
                                    }
#line 258 "declarative_user.m"
                                    {
#line 258 "declarative_user.m"
                                      mdb__declarative_user__Node_14 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__Question_13);
                                    }
#line 259 "declarative_user.m"
                                    {
#line 259 "declarative_user.m"
                                      mdb__declarative_user__V_140_140 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 259 "declarative_user.m"
                                      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_140_140, 0) = mdb__declarative_user__Node_14;
#line 259 "declarative_user.m"
                                      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_140_140, 1) = ((MR_Box) ((MR_Integer) 0));
#line 259 "declarative_user.m"
                                    }
#line 259 "declarative_user.m"
                                    {
#line 259 "declarative_user.m"
                                      MR_Word base;
#line 259 "declarative_user.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 259 "declarative_user.m"
                                      *mdb__declarative_user__Response_10 = base;
#line 259 "declarative_user.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__Question_13));
#line 259 "declarative_user.m"
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__V_140_140));
#line 259 "declarative_user.m"
                                    }
#line 260 "declarative_user.m"
                                    *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
#line 256 "declarative_user.m"
                                  }
#line 261 "declarative_user.m"
                                else
#line 261 "declarative_user.m"
                                  if (((MR_tag((MR_Word) mdb__declarative_user__Cmd_8)) == (MR_mktag((MR_Integer) 1))))
#line 279 "declarative_user.m"
                                    {
#line 279 "declarative_user.m"
                                      MR_Word mdb__declarative_user__MaybeArgNum_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Cmd_8, (MR_Integer) 0)));
#line 279 "declarative_user.m"
                                      MR_Word mdb__declarative_user__InitAtom_16;
#line 279 "declarative_user.m"
                                      MR_Word mdb__declarative_user__FinalAtom_17;
#line 279 "declarative_user.m"
                                      MR_Word mdb__declarative_user__Question_174;

#line 280 "declarative_user.m"
                                      {
#line 280 "declarative_user.m"
                                        mdb__declarative_user__Question_174 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
                                      }
#line 281 "declarative_user.m"
                                      {
#line 281 "declarative_user.m"
                                        mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_116_114_97_99_101_95_97_116_111_109_115_95_95_91_49_93_95_48_3_p_0(mdb__declarative_user__Question_174, &mdb__declarative_user__InitAtom_16, &mdb__declarative_user__FinalAtom_17);
                                      }
#line 297 "declarative_user.m"
                                      if ((mdb__declarative_user__MaybeArgNum_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 298 "declarative_user.m"
                                        {
#line 298 "declarative_user.m"
                                          MR_Word mdb__declarative_user__STATE_VARIABLE_User_118_118;
#line 298 "declarative_user.m"
                                          MR_Word mdb__declarative_user__MaybeTrack_167;

#line 299 "declarative_user.m"
                                          {
#line 299 "declarative_user.m"
                                            mdb__declarative_user__browse_atom_7_p_0(mdb__declarative_user__InitAtom_16, mdb__declarative_user__FinalAtom_17, &mdb__declarative_user__MaybeTrack_167, mdb__declarative_user__STATE_VARIABLE_User_0_57, &mdb__declarative_user__STATE_VARIABLE_User_118_118);
                                          }
#line 303 "declarative_user.m"
                                          if ((mdb__declarative_user__MaybeTrack_167 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 301 "declarative_user.m"
                                            {
#line 301 "declarative_user.m"
                                              mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_118_118, mdb__declarative_user__STATE_VARIABLE_User_58);
#line 301 "declarative_user.m"
                                              return;
                                            }
#line 303 "declarative_user.m"
                                          else
#line 303 "declarative_user.m"
                                            {
#line 303 "declarative_user.m"
                                              MR_Word mdb__declarative_user__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrack_167, (MR_Integer) 1)));
#line 303 "declarative_user.m"
                                              MR_Word mdb__declarative_user__V_236_236 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrack_167, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 303 "declarative_user.m"
                                              MR_Word mdb__declarative_user__V_237_237 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrack_167, (MR_Integer) 0)))) & (MR_Integer) 1);

#line 303 "declarative_user.m"
                                              if ((mdb__declarative_user__V_235_235 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 315 "declarative_user.m"
                                                {
#line 315 "declarative_user.m"
                                                  MR_Word mdb__declarative_user__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_118_118, (MR_Integer) 1)));
#line 316 "declarative_user.m"
                                                  MR_Word mdb__declarative_user__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_118_118, (MR_Integer) 0)));
#line 316 "declarative_user.m"
                                                  MR_Word mdb__declarative_user__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_118_118, (MR_Integer) 2)));
#line 316 "declarative_user.m"
                                                  MR_Word mdb__declarative_user__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_118_118, (MR_Integer) 3)));
#line 316 "declarative_user.m"
                                                  MR_Word mdb__declarative_user__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_118_118, (MR_Integer) 4)));
#line 316 "declarative_user.m"
                                                  MR_Word mdb__declarative_user__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_118_118, (MR_Integer) 5)));

#line 316 "declarative_user.m"
                                                  {
#line 316 "declarative_user.m"
                                                    mercury__io__write_string_4_p_0(mdb__declarative_user__V_121_121, (MR_String) "Cannot track the entire atom. Please select a subterm to track.\n");
                                                  }
#line 319 "declarative_user.m"
                                                  {
#line 319 "declarative_user.m"
                                                    mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_118_118, mdb__declarative_user__STATE_VARIABLE_User_58);
#line 319 "declarative_user.m"
                                                    return;
                                                  }
#line 315 "declarative_user.m"
                                                }
#line 303 "declarative_user.m"
                                              else
#line 305 "declarative_user.m"
                                                {
#line 305 "declarative_user.m"
                                                  MR_Box mdb__declarative_user__Node_151;
#line 305 "declarative_user.m"
                                                  MR_Integer mdb__declarative_user__ArgNum_152 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_235_235, (MR_Integer) 0)));
#line 305 "declarative_user.m"
                                                  MR_Word mdb__declarative_user__TermPath_155 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_235_235, (MR_Integer) 1)));
#line 305 "declarative_user.m"
                                                  MR_Word mdb__declarative_user__ArgPos_156;
#line 305 "declarative_user.m"
                                                  MR_Word mdb__declarative_user__Answer_157;

#line 306 "declarative_user.m"
                                                  {
#line 306 "declarative_user.m"
                                                    mdb__declarative_user__ArgPos_156 = mdb__declarative_user__arg_num_to_arg_pos_1_f_0(mdb__declarative_user__ArgNum_152);
                                                  }
#line 307 "declarative_user.m"
                                                  {
#line 307 "declarative_user.m"
                                                    mdb__declarative_user__Node_151 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__Question_174);
                                                  }
#line 308 "declarative_user.m"
                                                  {
#line 308 "declarative_user.m"
                                                    mdb__declarative_user__Answer_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 308 "declarative_user.m"
                                                    MR_hl_field(MR_mktag(1), mdb__declarative_user__Answer_157, 0) = mdb__declarative_user__Node_151;
#line 308 "declarative_user.m"
                                                    MR_hl_field(MR_mktag(1), mdb__declarative_user__Answer_157, 1) = ((MR_Box) (mdb__declarative_user__ArgPos_156));
#line 308 "declarative_user.m"
                                                    MR_hl_field(MR_mktag(1), mdb__declarative_user__Answer_157, 2) = ((MR_Box) (mdb__declarative_user__TermPath_155));
#line 308 "declarative_user.m"
                                                    MR_hl_field(MR_mktag(1), mdb__declarative_user__Answer_157, 3) = ((MR_Box) ((mdb__declarative_user__V_237_237 | ((mdb__declarative_user__V_236_236 << (MR_Integer) 1)))));
#line 308 "declarative_user.m"
                                                  }
#line 310 "declarative_user.m"
                                                  {
#line 310 "declarative_user.m"
                                                    MR_Word base;
#line 310 "declarative_user.m"
                                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "declarative_user.m"
                                                    *mdb__declarative_user__Response_10 = base;
#line 310 "declarative_user.m"
                                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__Question_174));
#line 310 "declarative_user.m"
                                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__Answer_157));
#line 310 "declarative_user.m"
                                                  }
#line 310 "declarative_user.m"
                                                  *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_118_118;
#line 305 "declarative_user.m"
                                                }
#line 303 "declarative_user.m"
                                            }
#line 298 "declarative_user.m"
                                        }
#line 297 "declarative_user.m"
                                      else
#line 283 "declarative_user.m"
                                        {
#line 283 "declarative_user.m"
                                          MR_Integer mdb__declarative_user__ArgNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeArgNum_15, (MR_Integer) 0)));
#line 283 "declarative_user.m"
                                          MR_Word mdb__declarative_user__MaybeTrack_19;
#line 283 "declarative_user.m"
                                          MR_Word mdb__declarative_user__STATE_VARIABLE_User_131_131;

#line 284 "declarative_user.m"
                                          {
#line 284 "declarative_user.m"
                                            mdb__declarative_user__browse_atom_argument_8_p_0(mdb__declarative_user__InitAtom_16, mdb__declarative_user__FinalAtom_17, mdb__declarative_user__ArgNum_18, &mdb__declarative_user__MaybeTrack_19, mdb__declarative_user__STATE_VARIABLE_User_0_57, &mdb__declarative_user__STATE_VARIABLE_User_131_131);
                                          }
#line 289 "declarative_user.m"
                                          if ((mdb__declarative_user__MaybeTrack_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 287 "declarative_user.m"
                                            {
#line 287 "declarative_user.m"
                                              mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_131_131, mdb__declarative_user__STATE_VARIABLE_User_58);
#line 287 "declarative_user.m"
                                              return;
                                            }
#line 289 "declarative_user.m"
                                          else
#line 290 "declarative_user.m"
                                            {
#line 290 "declarative_user.m"
                                              MR_Word mdb__declarative_user__HowTrack_20 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrack_19, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 290 "declarative_user.m"
                                              MR_Word mdb__declarative_user__ShouldAssertInvalid_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrack_19, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 290 "declarative_user.m"
                                              MR_Word mdb__declarative_user__TermPath_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrack_19, (MR_Integer) 1)));
#line 290 "declarative_user.m"
                                              MR_Word mdb__declarative_user__ArgPos_23;
#line 290 "declarative_user.m"
                                              MR_Word mdb__declarative_user__Answer_24;
#line 290 "declarative_user.m"
                                              MR_Box mdb__declarative_user__Node_148;

#line 291 "declarative_user.m"
                                              {
#line 291 "declarative_user.m"
                                                mdb__declarative_user__ArgPos_23 = mdb__declarative_user__arg_num_to_arg_pos_1_f_0(mdb__declarative_user__ArgNum_18);
                                              }
#line 292 "declarative_user.m"
                                              {
#line 292 "declarative_user.m"
                                                mdb__declarative_user__Node_148 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__Question_174);
                                              }
#line 293 "declarative_user.m"
                                              {
#line 293 "declarative_user.m"
                                                mdb__declarative_user__Answer_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 293 "declarative_user.m"
                                                MR_hl_field(MR_mktag(1), mdb__declarative_user__Answer_24, 0) = mdb__declarative_user__Node_148;
#line 293 "declarative_user.m"
                                                MR_hl_field(MR_mktag(1), mdb__declarative_user__Answer_24, 1) = ((MR_Box) (mdb__declarative_user__ArgPos_23));
#line 293 "declarative_user.m"
                                                MR_hl_field(MR_mktag(1), mdb__declarative_user__Answer_24, 2) = ((MR_Box) (mdb__declarative_user__TermPath_22));
#line 293 "declarative_user.m"
                                                MR_hl_field(MR_mktag(1), mdb__declarative_user__Answer_24, 3) = ((MR_Box) ((mdb__declarative_user__HowTrack_20 | ((mdb__declarative_user__ShouldAssertInvalid_21 << (MR_Integer) 1)))));
#line 293 "declarative_user.m"
                                              }
#line 295 "declarative_user.m"
                                              {
#line 295 "declarative_user.m"
                                                MR_Word base;
#line 295 "declarative_user.m"
                                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "declarative_user.m"
                                                *mdb__declarative_user__Response_10 = base;
#line 295 "declarative_user.m"
                                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__Question_174));
#line 295 "declarative_user.m"
                                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__Answer_24));
#line 295 "declarative_user.m"
                                              }
#line 295 "declarative_user.m"
                                              *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_131_131;
#line 290 "declarative_user.m"
                                            }
#line 283 "declarative_user.m"
                                        }
#line 279 "declarative_user.m"
                                    }
#line 261 "declarative_user.m"
                                  else
#line 261 "declarative_user.m"
                                    if (((MR_tag((MR_Word) mdb__declarative_user__Cmd_8)) == (MR_mktag((MR_Integer) 2))))
#line 323 "declarative_user.m"
                                      {
#line 323 "declarative_user.m"
                                        MR_Word mdb__declarative_user__Question_178;
#line 323 "declarative_user.m"
                                        MR_Word mdb__declarative_user__MaybeArgNum_179 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__Cmd_8, (MR_Integer) 0)));
#line 323 "declarative_user.m"
                                        MR_Word mdb__declarative_user__FinalAtom_180;
#line 325 "declarative_user.m"
                                        MR_Word mdb__declarative_user__V_27_27;

#line 324 "declarative_user.m"
                                        {
#line 324 "declarative_user.m"
                                          mdb__declarative_user__Question_178 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
                                        }
#line 325 "declarative_user.m"
                                        {
#line 325 "declarative_user.m"
                                          mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_116_114_97_99_101_95_97_116_111_109_115_95_95_91_49_93_95_48_3_p_0(mdb__declarative_user__Question_178, &mdb__declarative_user__V_27_27, &mdb__declarative_user__FinalAtom_180);
                                        }
#line 329 "declarative_user.m"
                                        if ((mdb__declarative_user__MaybeArgNum_179 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 330 "declarative_user.m"
                                          {
#line 330 "declarative_user.m"
                                            mdb__declarative_user__browse_xml_atom_4_p_0(mdb__declarative_user__FinalAtom_180, mdb__declarative_user__STATE_VARIABLE_User_0_57);
                                          }
#line 329 "declarative_user.m"
                                        else
#line 327 "declarative_user.m"
                                          {
#line 327 "declarative_user.m"
                                            MR_Integer mdb__declarative_user__ArgNum_176 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeArgNum_179, (MR_Integer) 0)));

#line 328 "declarative_user.m"
                                            {
#line 328 "declarative_user.m"
                                              mdb__declarative_user__browse_xml_atom_argument_5_p_0(mdb__declarative_user__FinalAtom_180, mdb__declarative_user__ArgNum_176, mdb__declarative_user__STATE_VARIABLE_User_0_57);
                                            }
#line 327 "declarative_user.m"
                                          }
#line 333 "declarative_user.m"
                                        {
#line 333 "declarative_user.m"
                                          mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_0_57, mdb__declarative_user__STATE_VARIABLE_User_58);
#line 333 "declarative_user.m"
                                          return;
                                        }
#line 323 "declarative_user.m"
                                      }
#line 261 "declarative_user.m"
                                    else
#line 261 "declarative_user.m"
                                      if (((((MR_tag((MR_Word) mdb__declarative_user__Cmd_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Cmd_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 365 "declarative_user.m"
                                        {
#line 365 "declarative_user.m"
                                          MR_Integer mdb__declarative_user__ActionNum_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Cmd_8, (MR_Integer) 1)));
#line 365 "declarative_user.m"
                                          MR_Word mdb__declarative_user__MaybeIoActions_45;
#line 365 "declarative_user.m"
                                          MR_Word mdb__declarative_user__STATE_VARIABLE_User_92_92;
#line 365 "declarative_user.m"
                                          MR_Word mdb__declarative_user__Question_185;
#line 369 "declarative_user.m"
                                          MR_Word mdb__declarative_user___MaybeTrack_46;

#line 366 "declarative_user.m"
                                          {
#line 366 "declarative_user.m"
                                            mdb__declarative_user__Question_185 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
                                          }
#line 367 "declarative_user.m"
                                          {
#line 367 "declarative_user.m"
                                            mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_105_111_95_97_99_116_105_111_110_115_95_95_91_49_93_95_48_2_p_0(mdb__declarative_user__Question_185, &mdb__declarative_user__MaybeIoActions_45);
                                          }
#line 369 "declarative_user.m"
                                          {
#line 369 "declarative_user.m"
                                            mdb__declarative_user__browse_chosen_io_action_7_p_0(mdb__declarative_user__MaybeIoActions_45, mdb__declarative_user__ActionNum_44, &mdb__declarative_user___MaybeTrack_46, mdb__declarative_user__STATE_VARIABLE_User_0_57, &mdb__declarative_user__STATE_VARIABLE_User_92_92);
                                          }
#line 371 "declarative_user.m"
                                          {
#line 371 "declarative_user.m"
                                            mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_92_92, mdb__declarative_user__STATE_VARIABLE_User_58);
#line 371 "declarative_user.m"
                                            return;
                                          }
#line 365 "declarative_user.m"
                                        }
#line 261 "declarative_user.m"
                                      else
#line 261 "declarative_user.m"
                                        if (((((MR_tag((MR_Word) mdb__declarative_user__Cmd_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Cmd_8, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 379 "declarative_user.m"
                                          {
#line 379 "declarative_user.m"
                                            MR_Word mdb__declarative_user__Mode_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Cmd_8, (MR_Integer) 1)));

#line 380 "declarative_user.m"
                                            {
#line 380 "declarative_user.m"
                                              MR_Word base;
#line 380 "declarative_user.m"
                                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 380 "declarative_user.m"
                                              *mdb__declarative_user__Response_10 = base;
#line 380 "declarative_user.m"
                                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 380 "declarative_user.m"
                                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_user__Mode_47));
#line 380 "declarative_user.m"
                                            }
#line 380 "declarative_user.m"
                                            *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
#line 379 "declarative_user.m"
                                          }
#line 261 "declarative_user.m"
                                        else
#line 261 "declarative_user.m"
                                          if (((((MR_tag((MR_Word) mdb__declarative_user__Cmd_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Cmd_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 394 "declarative_user.m"
                                            {
#line 394 "declarative_user.m"
                                              MR_Word mdb__declarative_user__MaybeCmd_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Cmd_8, (MR_Integer) 1)));
#line 394 "declarative_user.m"
                                              MR_Word mdb__declarative_user__Path_50;
#line 394 "declarative_user.m"
                                              MR_Word mdb__declarative_user__Res_51;
#line 394 "declarative_user.m"
                                              MR_Word mdb__declarative_user__V_75_75;
#line 394 "declarative_user.m"
                                              MR_Word mdb__declarative_user__V_220_220;
#line 402 "declarative_user.m"
                                              MR_Word mdb__declarative_user__V_219_219;
#line 402 "declarative_user.m"
                                              MR_Word mdb__declarative_user__V_221_221;
#line 402 "declarative_user.m"
                                              MR_Word mdb__declarative_user__V_222_222;
#line 402 "declarative_user.m"
                                              MR_Word mdb__declarative_user__V_223_223;

#line 398 "declarative_user.m"
                                              if ((mdb__declarative_user__MaybeCmd_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 399 "declarative_user.m"
                                                mdb__declarative_user__Path_50 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[3]);
#line 398 "declarative_user.m"
                                              else
#line 396 "declarative_user.m"
                                                {
#line 396 "declarative_user.m"
                                                  MR_String mdb__declarative_user__CmdName_49 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeCmd_48, (MR_Integer) 0)));
#line 396 "declarative_user.m"
                                                  MR_Word mdb__declarative_user__V_73_73;

#line 397 "declarative_user.m"
                                                  {
#line 397 "declarative_user.m"
                                                    mdb__declarative_user__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "declarative_user.m"
                                                    MR_hl_field(MR_mktag(1), mdb__declarative_user__V_73_73, 0) = ((MR_Box) (mdb__declarative_user__CmdName_49));
#line 397 "declarative_user.m"
                                                    MR_hl_field(MR_mktag(1), mdb__declarative_user__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 397 "declarative_user.m"
                                                  }
#line 397 "declarative_user.m"
                                                  {
#line 397 "declarative_user.m"
                                                    mdb__declarative_user__Path_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "declarative_user.m"
                                                    MR_hl_field(MR_mktag(1), mdb__declarative_user__Path_50, 0) = ((MR_Box) ((MR_String) "decl"));
#line 397 "declarative_user.m"
                                                    MR_hl_field(MR_mktag(1), mdb__declarative_user__Path_50, 1) = ((MR_Box) (mdb__declarative_user__V_73_73));
#line 397 "declarative_user.m"
                                                  }
#line 396 "declarative_user.m"
                                                }
#line 402 "declarative_user.m"
                                              mdb__declarative_user__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 0)));
#line 402 "declarative_user.m"
                                              mdb__declarative_user__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 1)));
#line 402 "declarative_user.m"
                                              mdb__declarative_user__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 2)));
#line 402 "declarative_user.m"
                                              mdb__declarative_user__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 3)));
#line 402 "declarative_user.m"
                                              mdb__declarative_user__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 4)));
#line 402 "declarative_user.m"
                                              mdb__declarative_user__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 5)));
#line 402 "declarative_user.m"
                                              {
#line 402 "declarative_user.m"
                                                mdb__help__path_6_p_0(mdb__declarative_user__V_75_75, mdb__declarative_user__Path_50, mdb__declarative_user__V_220_220, &mdb__declarative_user__Res_51);
                                              }
#line 405 "declarative_user.m"
                                              if ((mdb__declarative_user__Res_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 404 "declarative_user.m"
                                                {
#line 404 "declarative_user.m"
                                                }
#line 405 "declarative_user.m"
                                              else
#line 406 "declarative_user.m"
                                                {
#line 406 "declarative_user.m"
                                                  MR_String mdb__declarative_user__Message_52 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Res_51, (MR_Integer) 0)));
#line 406 "declarative_user.m"
                                                  MR_Word mdb__declarative_user__V_78_78;

#line 407 "declarative_user.m"
                                                  {
#line 407 "declarative_user.m"
                                                    mdb__declarative_user__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "declarative_user.m"
                                                    MR_hl_field(MR_mktag(1), mdb__declarative_user__V_78_78, 0) = ((MR_Box) (mdb__declarative_user__Message_52));
#line 407 "declarative_user.m"
                                                    MR_hl_field(MR_mktag(1), mdb__declarative_user__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[12])));
#line 407 "declarative_user.m"
                                                  }
#line 407 "declarative_user.m"
                                                  {
#line 407 "declarative_user.m"
                                                    mercury__io__write_strings_3_p_0(mdb__declarative_user__V_78_78);
                                                  }
#line 406 "declarative_user.m"
                                                }
#line 409 "declarative_user.m"
                                              {
#line 409 "declarative_user.m"
                                                mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_0_57, mdb__declarative_user__STATE_VARIABLE_User_58);
#line 409 "declarative_user.m"
                                                return;
                                              }
#line 394 "declarative_user.m"
                                            }
#line 261 "declarative_user.m"
                                          else
#line 261 "declarative_user.m"
                                            if (((((MR_tag((MR_Word) mdb__declarative_user__Cmd_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Cmd_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 341 "declarative_user.m"
                                              {
#line 341 "declarative_user.m"
                                                MR_Word mdb__declarative_user__ParamCommand_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Cmd_8, (MR_Integer) 1)));
#line 341 "declarative_user.m"
                                                MR_Word mdb__declarative_user__Browser0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 2)));
#line 341 "declarative_user.m"
                                                MR_Word mdb__declarative_user__Info0_35;
#line 341 "declarative_user.m"
                                                MR_Word mdb__declarative_user__Info_36;
#line 341 "declarative_user.m"
                                                MR_Word mdb__declarative_user__Browser_41;
#line 341 "declarative_user.m"
                                                MR_Word mdb__declarative_user__STATE_VARIABLE_User_108_108;
#line 342 "declarative_user.m"
                                                MR_Word mdb__declarative_user__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 0)));
#line 342 "declarative_user.m"
                                                MR_Word mdb__declarative_user__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 1)));
#line 342 "declarative_user.m"
                                                MR_Word mdb__declarative_user__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 3)));
#line 342 "declarative_user.m"
                                                MR_Word mdb__declarative_user__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 4)));
#line 342 "declarative_user.m"
                                                MR_Word mdb__declarative_user__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 5)));
#line 347 "declarative_user.m"
                                                MR_Word mdb__declarative_user__V_37_37;
#line 347 "declarative_user.m"
                                                MR_Word mdb__declarative_user__V_38_38;
#line 347 "declarative_user.m"
                                                MR_Word mdb__declarative_user__V_39_39;
#line 347 "declarative_user.m"
                                                MR_Word mdb__declarative_user__V_40_40;
#line 347 "declarative_user.m"
                                                MR_Word mdb__declarative_user__V_42_42;
#line 347 "declarative_user.m"
                                                MR_Word mdb__declarative_user__V_43_43;
#line 348 "declarative_user.m"
                                                MR_Word mdb__declarative_user__V_202_202;
#line 348 "declarative_user.m"
                                                MR_Word mdb__declarative_user__V_203_203;
#line 348 "declarative_user.m"
                                                MR_Word mdb__declarative_user__V_205_205;
#line 348 "declarative_user.m"
                                                MR_Word mdb__declarative_user__V_206_206;
#line 348 "declarative_user.m"
                                                MR_Word mdb__declarative_user__V_207_207;
#line 348 "declarative_user.m"
                                                MR_Word mdb__declarative_user__V_204_204;

#line 344 "declarative_user.m"
                                                {
#line 344 "declarative_user.m"
                                                  mdb__declarative_user__Info0_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 344 "declarative_user.m"
                                                  MR_hl_field(MR_mktag(0), mdb__declarative_user__Info0_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_2[0])));
#line 344 "declarative_user.m"
                                                  MR_hl_field(MR_mktag(0), mdb__declarative_user__Info0_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 344 "declarative_user.m"
                                                  MR_hl_field(MR_mktag(0), mdb__declarative_user__Info0_35, 2) = ((MR_Box) ((MR_Integer) 0));
#line 344 "declarative_user.m"
                                                  MR_hl_field(MR_mktag(0), mdb__declarative_user__Info0_35, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 344 "declarative_user.m"
                                                  MR_hl_field(MR_mktag(0), mdb__declarative_user__Info0_35, 4) = ((MR_Box) (mdb__declarative_user__Browser0_33));
#line 344 "declarative_user.m"
                                                  MR_hl_field(MR_mktag(0), mdb__declarative_user__Info0_35, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 344 "declarative_user.m"
                                                  MR_hl_field(MR_mktag(0), mdb__declarative_user__Info0_35, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 344 "declarative_user.m"
                                                }
#line 345 "declarative_user.m"
                                                {
#line 345 "declarative_user.m"
                                                  mdb__browser_info__run_param_command_7_p_0((MR_Integer) 0, mdb__declarative_user__ParamCommand_32, (MR_Integer) 0, mdb__declarative_user__Info0_35, &mdb__declarative_user__Info_36);
                                                }
#line 347 "declarative_user.m"
                                                mdb__declarative_user__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Info_36, (MR_Integer) 0)));
#line 347 "declarative_user.m"
                                                mdb__declarative_user__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Info_36, (MR_Integer) 1)));
#line 347 "declarative_user.m"
                                                mdb__declarative_user__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Info_36, (MR_Integer) 2)));
#line 347 "declarative_user.m"
                                                mdb__declarative_user__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Info_36, (MR_Integer) 3)));
#line 347 "declarative_user.m"
                                                mdb__declarative_user__Browser_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Info_36, (MR_Integer) 4)));
#line 347 "declarative_user.m"
                                                mdb__declarative_user__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Info_36, (MR_Integer) 5)));
#line 347 "declarative_user.m"
                                                mdb__declarative_user__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Info_36, (MR_Integer) 6)));
#line 348 "declarative_user.m"
                                                mdb__declarative_user__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 0)));
#line 348 "declarative_user.m"
                                                mdb__declarative_user__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 1)));
#line 348 "declarative_user.m"
                                                mdb__declarative_user__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 2)));
#line 348 "declarative_user.m"
                                                mdb__declarative_user__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 3)));
#line 348 "declarative_user.m"
                                                mdb__declarative_user__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 4)));
#line 348 "declarative_user.m"
                                                mdb__declarative_user__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 5)));
#line 348 "declarative_user.m"
                                                {
#line 348 "declarative_user.m"
                                                  mdb__declarative_user__STATE_VARIABLE_User_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 348 "declarative_user.m"
                                                  MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_108_108, 0) = ((MR_Box) (mdb__declarative_user__V_202_202));
#line 348 "declarative_user.m"
                                                  MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_108_108, 1) = ((MR_Box) (mdb__declarative_user__V_203_203));
#line 348 "declarative_user.m"
                                                  MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_108_108, 2) = ((MR_Box) (mdb__declarative_user__Browser_41));
#line 348 "declarative_user.m"
                                                  MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_108_108, 3) = ((MR_Box) (mdb__declarative_user__V_205_205));
#line 348 "declarative_user.m"
                                                  MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_108_108, 4) = ((MR_Box) (mdb__declarative_user__V_206_206));
#line 348 "declarative_user.m"
                                                  MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_108_108, 5) = ((MR_Box) (mdb__declarative_user__V_207_207));
#line 348 "declarative_user.m"
                                                }
#line 349 "declarative_user.m"
                                                {
#line 349 "declarative_user.m"
                                                  mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_108_108, mdb__declarative_user__STATE_VARIABLE_User_58);
#line 349 "declarative_user.m"
                                                  return;
                                                }
#line 341 "declarative_user.m"
                                              }
#line 261 "declarative_user.m"
                                            else
#line 261 "declarative_user.m"
                                              if (((((MR_tag((MR_Word) mdb__declarative_user__Cmd_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Cmd_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 335 "declarative_user.m"
                                                {
#line 335 "declarative_user.m"
                                                  MR_Integer mdb__declarative_user__From_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Cmd_8, (MR_Integer) 1)));
#line 335 "declarative_user.m"
                                                  MR_Integer mdb__declarative_user__To_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Cmd_8, (MR_Integer) 2)));
#line 335 "declarative_user.m"
                                                  MR_Word mdb__declarative_user__TraceAtom_31;
#line 335 "declarative_user.m"
                                                  MR_Word mdb__declarative_user__Question_182;
#line 337 "declarative_user.m"
                                                  MR_Word mdb__declarative_user__V_30_30;

#line 336 "declarative_user.m"
                                                  {
#line 336 "declarative_user.m"
                                                    mdb__declarative_user__Question_182 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
                                                  }
#line 337 "declarative_user.m"
                                                  {
#line 337 "declarative_user.m"
                                                    mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_116_114_97_99_101_95_97_116_111_109_115_95_95_91_49_93_95_48_3_p_0(mdb__declarative_user__Question_182, &mdb__declarative_user__V_30_30, &mdb__declarative_user__TraceAtom_31);
                                                  }
#line 338 "declarative_user.m"
                                                  {
#line 338 "declarative_user.m"
                                                    mdb__declarative_user__print_atom_arguments_6_p_0(mdb__declarative_user__TraceAtom_31, mdb__declarative_user__From_28, mdb__declarative_user__To_29, mdb__declarative_user__STATE_VARIABLE_User_0_57);
                                                  }
#line 339 "declarative_user.m"
                                                  {
#line 339 "declarative_user.m"
                                                    mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_0_57, mdb__declarative_user__STATE_VARIABLE_User_58);
#line 339 "declarative_user.m"
                                                    return;
                                                  }
#line 335 "declarative_user.m"
                                                }
#line 261 "declarative_user.m"
                                              else
#line 373 "declarative_user.m"
                                                {
#line 373 "declarative_user.m"
                                                  MR_Word mdb__declarative_user__Question_186;
#line 373 "declarative_user.m"
                                                  MR_Integer mdb__declarative_user__From_187 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Cmd_8, (MR_Integer) 1)));
#line 373 "declarative_user.m"
                                                  MR_Integer mdb__declarative_user__To_188 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Cmd_8, (MR_Integer) 2)));
#line 373 "declarative_user.m"
                                                  MR_Word mdb__declarative_user__MaybeIoActions_189;

#line 374 "declarative_user.m"
                                                  {
#line 374 "declarative_user.m"
                                                    mdb__declarative_user__Question_186 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
                                                  }
#line 375 "declarative_user.m"
                                                  {
#line 375 "declarative_user.m"
                                                    mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_105_111_95_97_99_116_105_111_110_115_95_95_91_49_93_95_48_2_p_0(mdb__declarative_user__Question_186, &mdb__declarative_user__MaybeIoActions_189);
                                                  }
#line 376 "declarative_user.m"
                                                  {
#line 376 "declarative_user.m"
                                                    mdb__declarative_user__print_chosen_io_actions_6_p_0(mdb__declarative_user__MaybeIoActions_189, mdb__declarative_user__From_187, mdb__declarative_user__To_188, mdb__declarative_user__STATE_VARIABLE_User_0_57);
                                                  }
#line 377 "declarative_user.m"
                                                  {
#line 377 "declarative_user.m"
                                                    mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_0_57, mdb__declarative_user__STATE_VARIABLE_User_58);
#line 377 "declarative_user.m"
                                                    return;
                                                  }
#line 373 "declarative_user.m"
                                                }
#line 261 "declarative_user.m"
      }
#line 261 "declarative_user.m"
      break;
#line 261 "declarative_user.m"
    }
#line 250 "declarative_user.m"
}

#line 99 "declarative_user.m"
void MR_CALL 
mdb__declarative_user__set_user_testing_flag_3_p_0(
#line 99 "declarative_user.m"
  MR_Word mdb__declarative_user__Testing_4,
#line 99 "declarative_user.m"
  MR_Word mdb__declarative_user__User_5,
#line 99 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__3_3)
#line 99 "declarative_user.m"
{
#line 1360 "declarative_user.m"
  {
#line 1360 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 1360 "declarative_user.m"
    MR_Word mdb__declarative_user__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_5, (MR_Integer) 0)));
#line 1360 "declarative_user.m"
    MR_Word mdb__declarative_user__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_5, (MR_Integer) 1)));
#line 1360 "declarative_user.m"
    MR_Word mdb__declarative_user__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_5, (MR_Integer) 2)));
#line 1360 "declarative_user.m"
    MR_Word mdb__declarative_user__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_5, (MR_Integer) 3)));
#line 1360 "declarative_user.m"
    MR_Word mdb__declarative_user__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_5, (MR_Integer) 4)));
#line 1360 "declarative_user.m"
    MR_Word mdb__declarative_user__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_5, (MR_Integer) 5)));

#line 1360 "declarative_user.m"
    {
#line 1360 "declarative_user.m"
      MR_Word base;
#line 1360 "declarative_user.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1360 "declarative_user.m"
      *mdb__declarative_user__HeadVar__3_3 = base;
#line 1360 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_user__V_6_6));
#line 1360 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_user__V_7_7));
#line 1360 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_user__V_8_8));
#line 1360 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_user__V_9_9));
#line 1360 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_user__V_10_10));
#line 1360 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_user__Testing_4));
#line 1360 "declarative_user.m"
    }
#line 1360 "declarative_user.m"
  }
#line 99 "declarative_user.m"
}

#line 95 "declarative_user.m"
MR_Word MR_CALL 
mdb__declarative_user__get_user_input_stream_1_f_0(
#line 95 "declarative_user.m"
  MR_Word mdb__declarative_user__User_3)
#line 95 "declarative_user.m"
{
#line 1358 "declarative_user.m"
  {
#line 1358 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 1358 "declarative_user.m"
    MR_Word mdb__declarative_user__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 0)));
#line 1358 "declarative_user.m"
    MR_Word mdb__declarative_user__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 1)));
#line 1358 "declarative_user.m"
    MR_Word mdb__declarative_user__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 2)));
#line 1358 "declarative_user.m"
    MR_Word mdb__declarative_user__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 3)));
#line 1358 "declarative_user.m"
    MR_Word mdb__declarative_user__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 4)));
#line 1358 "declarative_user.m"
    MR_Word mdb__declarative_user__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 5)));

#line 1358 "declarative_user.m"
    return mdb__declarative_user__HeadVar__2_2;
#line 1358 "declarative_user.m"
  }
#line 95 "declarative_user.m"
}

#line 91 "declarative_user.m"
MR_Word MR_CALL 
mdb__declarative_user__get_user_output_stream_1_f_0(
#line 91 "declarative_user.m"
  MR_Word mdb__declarative_user__User_3)
#line 91 "declarative_user.m"
{
#line 1356 "declarative_user.m"
  {
#line 1356 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 1356 "declarative_user.m"
    MR_Word mdb__declarative_user__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 1)));
#line 1356 "declarative_user.m"
    MR_Word mdb__declarative_user__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 0)));
#line 1356 "declarative_user.m"
    MR_Word mdb__declarative_user__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 2)));
#line 1356 "declarative_user.m"
    MR_Word mdb__declarative_user__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 3)));
#line 1356 "declarative_user.m"
    MR_Word mdb__declarative_user__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 4)));
#line 1356 "declarative_user.m"
    MR_Word mdb__declarative_user__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 5)));

#line 1356 "declarative_user.m"
    return mdb__declarative_user__HeadVar__2_2;
#line 1356 "declarative_user.m"
  }
#line 91 "declarative_user.m"
}

#line 86 "declarative_user.m"
void MR_CALL 
mdb__declarative_user__set_browser_state_3_p_0(
#line 86 "declarative_user.m"
  MR_Word mdb__declarative_user__Browser_4,
#line 86 "declarative_user.m"
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_6,
#line 86 "declarative_user.m"
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_7)
#line 86 "declarative_user.m"
{
#line 1354 "declarative_user.m"
  {
#line 1354 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 1354 "declarative_user.m"
    MR_Word mdb__declarative_user__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_6, (MR_Integer) 0)));
#line 1354 "declarative_user.m"
    MR_Word mdb__declarative_user__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_6, (MR_Integer) 1)));
#line 1354 "declarative_user.m"
    MR_Word mdb__declarative_user__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_6, (MR_Integer) 3)));
#line 1354 "declarative_user.m"
    MR_Word mdb__declarative_user__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_6, (MR_Integer) 4)));
#line 1354 "declarative_user.m"
    MR_Word mdb__declarative_user__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_6, (MR_Integer) 5)));
#line 1354 "declarative_user.m"
    MR_Word mdb__declarative_user__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_6, (MR_Integer) 2)));

#line 1354 "declarative_user.m"
    {
#line 1354 "declarative_user.m"
      MR_Word base;
#line 1354 "declarative_user.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1354 "declarative_user.m"
      *mdb__declarative_user__STATE_VARIABLE_User_7 = base;
#line 1354 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_user__V_9_9));
#line 1354 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_user__V_10_10));
#line 1354 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_user__Browser_4));
#line 1354 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_user__V_12_12));
#line 1354 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_user__V_13_13));
#line 1354 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_user__V_14_14));
#line 1354 "declarative_user.m"
    }
#line 1354 "declarative_user.m"
  }
#line 86 "declarative_user.m"
}

#line 82 "declarative_user.m"
MR_Word MR_CALL 
mdb__declarative_user__get_browser_state_1_f_0(
#line 82 "declarative_user.m"
  MR_Word mdb__declarative_user__User_3)
#line 82 "declarative_user.m"
{
#line 1351 "declarative_user.m"
  {
#line 1351 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 1351 "declarative_user.m"
    MR_Word mdb__declarative_user__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 2)));
#line 1351 "declarative_user.m"
    MR_Word mdb__declarative_user__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 0)));
#line 1351 "declarative_user.m"
    MR_Word mdb__declarative_user__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 1)));
#line 1351 "declarative_user.m"
    MR_Word mdb__declarative_user__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 3)));
#line 1351 "declarative_user.m"
    MR_Word mdb__declarative_user__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 4)));
#line 1351 "declarative_user.m"
    MR_Word mdb__declarative_user__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 5)));

#line 1351 "declarative_user.m"
    return mdb__declarative_user__HeadVar__2_2;
#line 1351 "declarative_user.m"
  }
#line 82 "declarative_user.m"
}

#line 77 "declarative_user.m"
void MR_CALL 
mdb__declarative_user__user_confirm_bug_6_p_0(
#line 77 "declarative_user.m"
  MR_Word mdb__declarative_user__Bug_7,
#line 77 "declarative_user.m"
  MR_Word * mdb__declarative_user__Response_8,
#line 77 "declarative_user.m"
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_23,
#line 77 "declarative_user.m"
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_24)
#line 77 "declarative_user.m"
{
#line 1080 "declarative_user.m"
  while (MR_TRUE)
#line 1080 "declarative_user.m"
    {
#line 1080 "declarative_user.m"
      /* tailcall optimized into a loop */
#line 1080 "declarative_user.m"
      {
#line 1080 "declarative_user.m"
        MR_bool mdb__declarative_user__succeeded;
#line 1080 "declarative_user.m"
        MR_Word mdb__declarative_user__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_23, (MR_Integer) 5)));
#line 1080 "declarative_user.m"
        MR_Word mdb__declarative_user__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_23, (MR_Integer) 4)));
#line 1080 "declarative_user.m"
        MR_Word mdb__declarative_user__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_23, (MR_Integer) 3)));
#line 1080 "declarative_user.m"
        MR_Word mdb__declarative_user__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_23, (MR_Integer) 2)));
#line 1080 "declarative_user.m"
        MR_Word mdb__declarative_user__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_23, (MR_Integer) 1)));
#line 1080 "declarative_user.m"
        MR_Word mdb__declarative_user__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_23, (MR_Integer) 0)));

#line 1080 "declarative_user.m"
        if ((mdb__declarative_user__V_58_58 == (MR_Integer) 0))
#line 1083 "declarative_user.m"
          {
#line 1083 "declarative_user.m"
            MR_Word mdb__declarative_user__Command_11;
#line 1083 "declarative_user.m"
            MR_Word mdb__declarative_user__STATE_VARIABLE_User_30_30;

#line 1084 "declarative_user.m"
            {
#line 1084 "declarative_user.m"
              mdb__declarative_user__write_decl_bug_4_p_0(mdb__declarative_user__Bug_7, mdb__declarative_user__STATE_VARIABLE_User_0_23);
            }
#line 1085 "declarative_user.m"
            {
#line 1085 "declarative_user.m"
              mdb__declarative_user__get_command_6_p_0((MR_String) "Is this a bug\? ", &mdb__declarative_user__Command_11, mdb__declarative_user__STATE_VARIABLE_User_0_23, &mdb__declarative_user__STATE_VARIABLE_User_30_30);
            }
#line 1089 "declarative_user.m"
            if ((mdb__declarative_user__Command_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1090 "declarative_user.m"
              {
#line 1091 "declarative_user.m"
                *mdb__declarative_user__Response_8 = (MR_Integer) 1;
#line 1091 "declarative_user.m"
                *mdb__declarative_user__STATE_VARIABLE_User_24 = mdb__declarative_user__STATE_VARIABLE_User_30_30;
#line 1090 "declarative_user.m"
              }
#line 1089 "declarative_user.m"
            else
#line 1089 "declarative_user.m"
              if ((mdb__declarative_user__Command_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 1093 "declarative_user.m"
                {
#line 1094 "declarative_user.m"
                  *mdb__declarative_user__Response_8 = (MR_Integer) 2;
#line 1094 "declarative_user.m"
                  *mdb__declarative_user__STATE_VARIABLE_User_24 = mdb__declarative_user__STATE_VARIABLE_User_30_30;
#line 1093 "declarative_user.m"
                }
#line 1089 "declarative_user.m"
              else
#line 1089 "declarative_user.m"
                if ((mdb__declarative_user__Command_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1087 "declarative_user.m"
                  {
#line 1088 "declarative_user.m"
                    *mdb__declarative_user__Response_8 = (MR_Integer) 0;
#line 1088 "declarative_user.m"
                    *mdb__declarative_user__STATE_VARIABLE_User_24 = mdb__declarative_user__STATE_VARIABLE_User_30_30;
#line 1087 "declarative_user.m"
                  }
#line 1089 "declarative_user.m"
                else
#line 1089 "declarative_user.m"
                  if (((MR_tag((MR_Word) mdb__declarative_user__Command_11)) == (MR_mktag((MR_Integer) 1))))
#line 1096 "declarative_user.m"
                    {
#line 1096 "declarative_user.m"
                      MR_Word mdb__declarative_user__MaybeArgNum_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Command_11, (MR_Integer) 0)));
#line 1096 "declarative_user.m"
                      MR_Word mdb__declarative_user__STATE_VARIABLE_User_42_42;

#line 1097 "declarative_user.m"
                      {
#line 1097 "declarative_user.m"
                        mdb__declarative_user__browse_decl_bug_6_p_0(mdb__declarative_user__Bug_7, mdb__declarative_user__MaybeArgNum_12, mdb__declarative_user__STATE_VARIABLE_User_30_30, &mdb__declarative_user__STATE_VARIABLE_User_42_42);
                      }
#line 1098 "declarative_user.m"
                      /* direct tailcall eliminated */
#line 1098 "declarative_user.m"
                      {
#line 1098 "declarative_user.m"
                        MR_Word mdb__declarative_user__STATE_VARIABLE_User_0__tmp_copy_23 = mdb__declarative_user__STATE_VARIABLE_User_42_42;

#line 1098 "declarative_user.m"
                        mdb__declarative_user__STATE_VARIABLE_User_0_23 = mdb__declarative_user__STATE_VARIABLE_User_0__tmp_copy_23;
#line 1098 "declarative_user.m"
                      }
#line 1098 "declarative_user.m"
                      continue;
#line 1096 "declarative_user.m"
                    }
#line 1089 "declarative_user.m"
                  else
#line 1089 "declarative_user.m"
                    if (((MR_tag((MR_Word) mdb__declarative_user__Command_11)) == (MR_mktag((MR_Integer) 2))))
#line 1100 "declarative_user.m"
                      {
#line 1100 "declarative_user.m"
                        MR_Word mdb__declarative_user__MaybeArgNum_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__Command_11, (MR_Integer) 0)));

#line 1101 "declarative_user.m"
                        {
#line 1101 "declarative_user.m"
                          mdb__declarative_user__browse_xml_decl_bug_5_p_0(mdb__declarative_user__Bug_7, mdb__declarative_user__MaybeArgNum_47, mdb__declarative_user__STATE_VARIABLE_User_30_30);
                        }
#line 1102 "declarative_user.m"
                        /* direct tailcall eliminated */
#line 1102 "declarative_user.m"
                        {
#line 1102 "declarative_user.m"
                          MR_Word mdb__declarative_user__STATE_VARIABLE_User_0__tmp_copy_23 = mdb__declarative_user__STATE_VARIABLE_User_30_30;

#line 1102 "declarative_user.m"
                          mdb__declarative_user__STATE_VARIABLE_User_0_23 = mdb__declarative_user__STATE_VARIABLE_User_0__tmp_copy_23;
#line 1102 "declarative_user.m"
                        }
#line 1102 "declarative_user.m"
                        continue;
#line 1100 "declarative_user.m"
                      }
#line 1089 "declarative_user.m"
                    else
#line 1089 "declarative_user.m"
                      if (((((MR_tag((MR_Word) mdb__declarative_user__Command_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Command_11, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1104 "declarative_user.m"
                        {
#line 1104 "declarative_user.m"
                          MR_Integer mdb__declarative_user__ActionNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Command_11, (MR_Integer) 1)));
#line 1104 "declarative_user.m"
                          MR_Word mdb__declarative_user__MaybeIoActions_14;
#line 1104 "declarative_user.m"
                          MR_Word mdb__declarative_user__STATE_VARIABLE_User_35_35;
#line 1106 "declarative_user.m"
                          MR_Word mdb__declarative_user___MaybeTrack_15;

#line 1105 "declarative_user.m"
                          {
#line 1105 "declarative_user.m"
                            mdb__declarative_user__decl_bug_io_actions_2_p_0(mdb__declarative_user__Bug_7, &mdb__declarative_user__MaybeIoActions_14);
                          }
#line 1106 "declarative_user.m"
                          {
#line 1106 "declarative_user.m"
                            mdb__declarative_user__browse_chosen_io_action_7_p_0(mdb__declarative_user__MaybeIoActions_14, mdb__declarative_user__ActionNum_13, &mdb__declarative_user___MaybeTrack_15, mdb__declarative_user__STATE_VARIABLE_User_30_30, &mdb__declarative_user__STATE_VARIABLE_User_35_35);
                          }
#line 1108 "declarative_user.m"
                          /* direct tailcall eliminated */
#line 1108 "declarative_user.m"
                          {
#line 1108 "declarative_user.m"
                            MR_Word mdb__declarative_user__STATE_VARIABLE_User_0__tmp_copy_23 = mdb__declarative_user__STATE_VARIABLE_User_35_35;

#line 1108 "declarative_user.m"
                            mdb__declarative_user__STATE_VARIABLE_User_0_23 = mdb__declarative_user__STATE_VARIABLE_User_0__tmp_copy_23;
#line 1108 "declarative_user.m"
                          }
#line 1108 "declarative_user.m"
                          continue;
#line 1104 "declarative_user.m"
                        }
#line 1089 "declarative_user.m"
                      else
#line 1125 "declarative_user.m"
                        {
#line 1125 "declarative_user.m"
                          MR_Word mdb__declarative_user__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_30_30, (MR_Integer) 1)));
#line 854 "declarative_user.m"
                          MR_Word mdb__declarative_user__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_30_30, (MR_Integer) 0)));
#line 854 "declarative_user.m"
                          MR_Word mdb__declarative_user__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_30_30, (MR_Integer) 2)));
#line 854 "declarative_user.m"
                          MR_Word mdb__declarative_user__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_30_30, (MR_Integer) 3)));
#line 854 "declarative_user.m"
                          MR_Word mdb__declarative_user__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_30_30, (MR_Integer) 4)));
#line 854 "declarative_user.m"
                          MR_Word mdb__declarative_user__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_30_30, (MR_Integer) 5)));

#line 854 "declarative_user.m"
                          {
#line 854 "declarative_user.m"
                            mercury__io__write_strings_4_p_0(mdb__declarative_user__V_68_68, (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[10]));
                          }
#line 1127 "declarative_user.m"
                          /* direct tailcall eliminated */
#line 1127 "declarative_user.m"
                          {
#line 1127 "declarative_user.m"
                            MR_Word mdb__declarative_user__STATE_VARIABLE_User_0__tmp_copy_23 = mdb__declarative_user__STATE_VARIABLE_User_30_30;

#line 1127 "declarative_user.m"
                            mdb__declarative_user__STATE_VARIABLE_User_0_23 = mdb__declarative_user__STATE_VARIABLE_User_0__tmp_copy_23;
#line 1127 "declarative_user.m"
                          }
#line 1127 "declarative_user.m"
                          continue;
#line 1125 "declarative_user.m"
                        }
#line 1083 "declarative_user.m"
          }
#line 1080 "declarative_user.m"
        else
#line 1080 "declarative_user.m"
          {
#line 1081 "declarative_user.m"
            *mdb__declarative_user__Response_8 = (MR_Integer) 0;
#line 1081 "declarative_user.m"
            *mdb__declarative_user__STATE_VARIABLE_User_24 = mdb__declarative_user__STATE_VARIABLE_User_0_23;
#line 1080 "declarative_user.m"
          }
#line 1080 "declarative_user.m"
      }
#line 1080 "declarative_user.m"
      break;
#line 1080 "declarative_user.m"
    }
#line 77 "declarative_user.m"
}

#line 72 "declarative_user.m"
void MR_CALL 
mdb__declarative_user__query_user_6_p_0(
#line 72 "declarative_user.m"
  MR_Word mdb__declarative_user__TypeInfo_for_T_67,
#line 72 "declarative_user.m"
  MR_Word mdb__declarative_user__UserQuestion_7,
#line 72 "declarative_user.m"
  MR_Word * mdb__declarative_user__Response_8,
#line 72 "declarative_user.m"
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_16,
#line 72 "declarative_user.m"
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_17)
#line 72 "declarative_user.m"
{
#line 223 "declarative_user.m"
  {
#line 223 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 223 "declarative_user.m"
    MR_Word mdb__declarative_user__Question_11;
#line 223 "declarative_user.m"
    MR_Word mdb__declarative_user__V_68_68;
#line 223 "declarative_user.m"
    MR_Word mdb__declarative_user__V_70_70;
#line 226 "declarative_user.m"
    MR_Word mdb__declarative_user__V_69_69;
#line 226 "declarative_user.m"
    MR_Word mdb__declarative_user__V_71_71;
#line 226 "declarative_user.m"
    MR_Word mdb__declarative_user__V_72_72;
#line 226 "declarative_user.m"
    MR_Word mdb__declarative_user__V_73_73;

#line 450 "declarative_user.m"
    if (((MR_tag((MR_Word) mdb__declarative_user__UserQuestion_7)) == (MR_mktag((MR_Integer) 0))))
#line 450 "declarative_user.m"
      mdb__declarative_user__Question_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__UserQuestion_7, (MR_Integer) 0)));
#line 450 "declarative_user.m"
    else
#line 451 "declarative_user.m"
      {
#line 451 "declarative_user.m"
        MR_Word mdb__declarative_user__V_82_82;

#line 451 "declarative_user.m"
        mdb__declarative_user__Question_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__UserQuestion_7, (MR_Integer) 0)));
#line 451 "declarative_user.m"
        mdb__declarative_user__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__UserQuestion_7, (MR_Integer) 1)));
#line 451 "declarative_user.m"
      }
#line 226 "declarative_user.m"
    mdb__declarative_user__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 0)));
#line 226 "declarative_user.m"
    mdb__declarative_user__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 1)));
#line 226 "declarative_user.m"
    mdb__declarative_user__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 2)));
#line 226 "declarative_user.m"
    mdb__declarative_user__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 3)));
#line 226 "declarative_user.m"
    mdb__declarative_user__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 4)));
#line 226 "declarative_user.m"
    mdb__declarative_user__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 5)));
#line 230 "declarative_user.m"
    if ((mdb__declarative_user__V_68_68 == (MR_Integer) 0))
#line 231 "declarative_user.m"
      {
#line 231 "declarative_user.m"
        MR_String mdb__declarative_user__Prompt_13;
#line 231 "declarative_user.m"
        MR_Word mdb__declarative_user__Command_14;
#line 231 "declarative_user.m"
        MR_Word mdb__declarative_user__STATE_VARIABLE_User_24_24;
#line 231 "declarative_user.m"
        MR_Word mdb__declarative_user__STATE_VARIABLE_User_26_26;
#line 231 "declarative_user.m"
        MR_Word mdb__declarative_user__STATE_VARIABLE_User_28_28;
#line 243 "declarative_user.m"
        MR_Word mdb__declarative_user__V_15_15;

#line 237 "declarative_user.m"
        if ((mdb__declarative_user__V_70_70 == (MR_Integer) 0))
#line 238 "declarative_user.m"
          {
#line 239 "declarative_user.m"
            mdb__declarative_user__Prompt_13 = (MR_String) "dd> ";
#line 239 "declarative_user.m"
            mdb__declarative_user__STATE_VARIABLE_User_24_24 = mdb__declarative_user__STATE_VARIABLE_User_0_16;
#line 238 "declarative_user.m"
          }
#line 237 "declarative_user.m"
        else
#line 233 "declarative_user.m"
          {
#line 236 "declarative_user.m"
            MR_Word mdb__declarative_user__V_50_50;
#line 236 "declarative_user.m"
            MR_Word mdb__declarative_user__V_51_51;
#line 236 "declarative_user.m"
            MR_Word mdb__declarative_user__V_52_52;
#line 236 "declarative_user.m"
            MR_Word mdb__declarative_user__V_54_54;
#line 236 "declarative_user.m"
            MR_Word mdb__declarative_user__V_55_55;
#line 236 "declarative_user.m"
            MR_Word mdb__declarative_user__V_53_53;

#line 234 "declarative_user.m"
            {
#line 234 "declarative_user.m"
              mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_4_p_0(mdb__declarative_user__Question_11, mdb__declarative_user__STATE_VARIABLE_User_0_16);
            }
#line 235 "declarative_user.m"
            {
#line 235 "declarative_user.m"
              mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_113_117_101_115_116_105_111_110_95_112_114_111_109_112_116_95_95_91_49_93_95_48_2_p_0(mdb__declarative_user__UserQuestion_7, &mdb__declarative_user__Prompt_13);
            }
#line 236 "declarative_user.m"
            mdb__declarative_user__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 0)));
#line 236 "declarative_user.m"
            mdb__declarative_user__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 1)));
#line 236 "declarative_user.m"
            mdb__declarative_user__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 2)));
#line 236 "declarative_user.m"
            mdb__declarative_user__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 3)));
#line 236 "declarative_user.m"
            mdb__declarative_user__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 4)));
#line 236 "declarative_user.m"
            mdb__declarative_user__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 5)));
#line 236 "declarative_user.m"
            {
#line 236 "declarative_user.m"
              mdb__declarative_user__STATE_VARIABLE_User_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 236 "declarative_user.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_24_24, 0) = ((MR_Box) (mdb__declarative_user__V_50_50));
#line 236 "declarative_user.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_24_24, 1) = ((MR_Box) (mdb__declarative_user__V_51_51));
#line 236 "declarative_user.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_24_24, 2) = ((MR_Box) (mdb__declarative_user__V_52_52));
#line 236 "declarative_user.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_24_24, 3) = ((MR_Box) ((MR_Integer) 0));
#line 236 "declarative_user.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_24_24, 4) = ((MR_Box) (mdb__declarative_user__V_54_54));
#line 236 "declarative_user.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_24_24, 5) = ((MR_Box) (mdb__declarative_user__V_55_55));
#line 236 "declarative_user.m"
            }
#line 233 "declarative_user.m"
          }
#line 241 "declarative_user.m"
        {
#line 241 "declarative_user.m"
          mdb__declarative_user__get_command_6_p_0(mdb__declarative_user__Prompt_13, &mdb__declarative_user__Command_14, mdb__declarative_user__STATE_VARIABLE_User_24_24, &mdb__declarative_user__STATE_VARIABLE_User_26_26);
        }
#line 242 "declarative_user.m"
        {
#line 242 "declarative_user.m"
          mdb__declarative_user__handle_command_7_p_0(mdb__declarative_user__TypeInfo_for_T_67, mdb__declarative_user__Command_14, mdb__declarative_user__UserQuestion_7, mdb__declarative_user__Response_8, mdb__declarative_user__STATE_VARIABLE_User_26_26, &mdb__declarative_user__STATE_VARIABLE_User_28_28);
        }
#line 243 "declarative_user.m"
        mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) *mdb__declarative_user__Response_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), *mdb__declarative_user__Response_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 243 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 243 "declarative_user.m"
          mdb__declarative_user__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), *mdb__declarative_user__Response_8, (MR_Integer) 1)));
#line 243 "declarative_user.m"
        mdb__declarative_user__succeeded = !(mdb__declarative_user__succeeded);
#line 245 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 244 "declarative_user.m"
          {
#line 244 "declarative_user.m"
            MR_Word mdb__declarative_user__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_28_28, (MR_Integer) 0)));
#line 244 "declarative_user.m"
            MR_Word mdb__declarative_user__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_28_28, (MR_Integer) 1)));
#line 244 "declarative_user.m"
            MR_Word mdb__declarative_user__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_28_28, (MR_Integer) 2)));
#line 244 "declarative_user.m"
            MR_Word mdb__declarative_user__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_28_28, (MR_Integer) 4)));
#line 244 "declarative_user.m"
            MR_Word mdb__declarative_user__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_28_28, (MR_Integer) 5)));
#line 244 "declarative_user.m"
            MR_Word mdb__declarative_user__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_28_28, (MR_Integer) 3)));

#line 244 "declarative_user.m"
            {
#line 244 "declarative_user.m"
              MR_Word base;
#line 244 "declarative_user.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 244 "declarative_user.m"
              *mdb__declarative_user__STATE_VARIABLE_User_17 = base;
#line 244 "declarative_user.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_user__V_61_61));
#line 244 "declarative_user.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_user__V_62_62));
#line 244 "declarative_user.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_user__V_63_63));
#line 244 "declarative_user.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 1));
#line 244 "declarative_user.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_user__V_65_65));
#line 244 "declarative_user.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_user__V_66_66));
#line 244 "declarative_user.m"
            }
#line 244 "declarative_user.m"
          }
#line 245 "declarative_user.m"
        else
#line 244 "declarative_user.m"
          *mdb__declarative_user__STATE_VARIABLE_User_17 = mdb__declarative_user__STATE_VARIABLE_User_28_28;
#line 231 "declarative_user.m"
      }
#line 230 "declarative_user.m"
    else
#line 226 "declarative_user.m"
      {
#line 226 "declarative_user.m"
        MR_Box mdb__declarative_user__Node_12;
#line 226 "declarative_user.m"
        MR_Word mdb__declarative_user__V_33_33;

#line 227 "declarative_user.m"
        {
#line 227 "declarative_user.m"
          mdb__declarative_user__Node_12 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_user__TypeInfo_for_T_67, mdb__declarative_user__Question_11);
        }
#line 228 "declarative_user.m"
        {
#line 228 "declarative_user.m"
          mdb__declarative_user__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 228 "declarative_user.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_user__V_33_33, 0) = mdb__declarative_user__Node_12;
#line 228 "declarative_user.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_user__V_33_33, 1) = ((MR_Box) ((MR_Integer) 1));
#line 228 "declarative_user.m"
        }
#line 228 "declarative_user.m"
        {
#line 228 "declarative_user.m"
          MR_Word base;
#line 228 "declarative_user.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "declarative_user.m"
          *mdb__declarative_user__Response_8 = base;
#line 228 "declarative_user.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__Question_11));
#line 228 "declarative_user.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__V_33_33));
#line 228 "declarative_user.m"
        }
#line 229 "declarative_user.m"
        *mdb__declarative_user__STATE_VARIABLE_User_17 = mdb__declarative_user__STATE_VARIABLE_User_0_16;
#line 226 "declarative_user.m"
      }
#line 223 "declarative_user.m"
  }
#line 72 "declarative_user.m"
}

#line 63 "declarative_user.m"
void MR_CALL 
mdb__declarative_user__user_state_init_5_p_0(
#line 63 "declarative_user.m"
  MR_Word mdb__declarative_user__InStr_6,
#line 63 "declarative_user.m"
  MR_Word mdb__declarative_user__OutStr_7,
#line 63 "declarative_user.m"
  MR_Word mdb__declarative_user__Browser_8,
#line 63 "declarative_user.m"
  MR_Word mdb__declarative_user__HelpSystem_9,
#line 63 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__5_5)
#line 63 "declarative_user.m"
{
#line 218 "declarative_user.m"
  {
#line 218 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;

#line 218 "declarative_user.m"
    {
#line 218 "declarative_user.m"
      MR_Word base;
#line 218 "declarative_user.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 218 "declarative_user.m"
      *mdb__declarative_user__HeadVar__5_5 = base;
#line 218 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_user__InStr_6));
#line 218 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_user__OutStr_7));
#line 218 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_user__Browser_8));
#line 218 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 1));
#line 218 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_user__HelpSystem_9));
#line 218 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Integer) 0));
#line 218 "declarative_user.m"
    }
#line 218 "declarative_user.m"
  }
#line 63 "declarative_user.m"
}

void mercury__mdb__declarative_user__init(void)
{
}

void mercury__mdb__declarative_user__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_command_0);
	MR_register_type_ctor_info(&mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_question_1);
	MR_register_type_ctor_info(&mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_response_1);
	MR_register_type_ctor_info(&mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_search_mode_0);
	MR_register_type_ctor_info(&mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_state_0);
}

void mercury__mdb__declarative_user__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdb.declarative_user. */
