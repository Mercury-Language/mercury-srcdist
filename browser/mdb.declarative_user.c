/*
** Automatically generated from `declarative_user.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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


/* :- module mdb.declarative_user. */
/* :- implementation. */

/*
INIT mercury__mdb__declarative_user__init
ENDINIT
*/

#include "mdb.declarative_user.mih"


#include "mdb.mih"
#include "mdbcomp.mih"
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
#include "exception.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"




#line 96 "mdb.declarative_user.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_user__list__pti_list_1__plain_mdb__browser_info__type_ctor_info_down_dir_0;

#line 99 "mdb.declarative_user.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_user__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 102 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_0;

#line 105 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_1;

#line 108 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_2;

#line 111 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_3;

#line 114 "mdb.declarative_user.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_user__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 117 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_4[1];

#line 120 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_4;

#line 123 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_5[1];

#line 126 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_5;

#line 129 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_6[1];

#line 132 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_6;

#line 135 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_7[2];

#line 138 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_7;

#line 141 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_8[2];

#line 144 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_8;

#line 147 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_9;

#line 150 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_10[1];

#line 153 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_10;

#line 156 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_11;

#line 159 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_12;

#line 162 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_13;

#line 165 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_14;

#line 168 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_15;

#line 171 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_16[1];

#line 174 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_16;

#line 177 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_17;

#line 180 "mdb.declarative_user.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_user__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

#line 183 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_18[1];

#line 186 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_18;

#line 189 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_19;

#line 192 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_20;

#line 195 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_0[13];

#line 198 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_1[1];

#line 201 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_2[1];

#line 204 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_3[6];

#line 207 "mdb.declarative_user.c"
static const MR_DuPtagLayout mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_command_0[4];

#line 210 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_command_0[21];

#line 213 "mdb.declarative_user.c"
static const MR_Integer mdb__declarative_user__mdb__declarative_user__functor_number_map_user_command_0[21];

#line 216 "mdb.declarative_user.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_user__mdb__declarative_debugger__pti_decl_question_1__pseudo_1;

#line 219 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_question_1_0[1];

#line 222 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_question_1_0;

#line 225 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_question_1_1[2];

#line 228 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_question_1_1;

#line 231 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_question_1_0[1];

#line 234 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_question_1_1[1];

#line 237 "mdb.declarative_user.c"
static const MR_DuPtagLayout mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_question_1[2];

#line 240 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_question_1[2];

#line 243 "mdb.declarative_user.c"
static const MR_Integer mdb__declarative_user__mdb__declarative_user__functor_number_map_user_question_1[2];

#line 246 "mdb.declarative_user.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_user__mdb__declarative_debugger__pti_decl_answer_1__pseudo_1;

#line 249 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_0[2];

#line 252 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_0;

#line 255 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_1[1];

#line 258 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_1;

#line 261 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_2[1];

#line 264 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_2;

#line 267 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_3[1];

#line 270 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_3;

#line 273 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_4[1];

#line 276 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_4;

#line 279 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_5;

#line 282 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_6[1];

#line 285 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_6;

#line 288 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_7;

#line 291 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_0[2];

#line 294 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_1[1];

#line 297 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_2[1];

#line 300 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_3[4];

#line 303 "mdb.declarative_user.c"
static const MR_DuPtagLayout mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_response_1[4];

#line 306 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_response_1[8];

#line 309 "mdb.declarative_user.c"
static const MR_Integer mdb__declarative_user__mdb__declarative_user__functor_number_map_user_response_1[8];

#line 312 "mdb.declarative_user.c"
static const MR_EnumFunctorDesc mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_0;

#line 315 "mdb.declarative_user.c"
static const MR_EnumFunctorDesc mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_1;

#line 318 "mdb.declarative_user.c"
static const MR_EnumFunctorDesc mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_2;

#line 321 "mdb.declarative_user.c"
static const MR_EnumFunctorDesc mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_3;

#line 324 "mdb.declarative_user.c"
static const MR_EnumFunctorDescPtr mdb__declarative_user__mdb__declarative_user__enum_value_ordered_user_search_mode_0[4];

#line 327 "mdb.declarative_user.c"
static const MR_EnumFunctorDescPtr mdb__declarative_user__mdb__declarative_user__enum_name_ordered_user_search_mode_0[4];

#line 330 "mdb.declarative_user.c"
static const MR_Integer mdb__declarative_user__mdb__declarative_user__functor_number_map_user_search_mode_0[4];

#line 333 "mdb.declarative_user.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_user__list__ti_list_1mdb__help__type_ctor_info_entry_0;

#line 336 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_state_0_0[6];

#line 339 "mdb.declarative_user.c"
static const MR_ConstString mdb__declarative_user__mdb__declarative_user__field_names_user_state_0_0[6];

#line 342 "mdb.declarative_user.c"
static const MR_DuFunctorDesc mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_state_0_0;

#line 345 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_state_0_0[1];

#line 348 "mdb.declarative_user.c"
static const MR_DuPtagLayout mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_state_0[1];

#line 351 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_state_0[1];

#line 354 "mdb.declarative_user.c"
static const MR_Integer mdb__declarative_user__mdb__declarative_user__functor_number_map_user_state_0[1];

#line 357 "mdb.declarative_user.c"
static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_command_0_0_10001(
#line 360 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 362 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_2);

#line 365 "mdb.declarative_user.c"
static void MR_CALL 
mdb__declarative_user____Compare____user_command_0_0_10001(
#line 368 "mdb.declarative_user.c"
  MR_Box * mdb__declarative_user__wrapper_arg_1,
#line 370 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_2,
#line 372 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_3);

#line 375 "mdb.declarative_user.c"
static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_question_1_0_10001(
#line 378 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 380 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_2,
#line 382 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_3);

#line 385 "mdb.declarative_user.c"
static void MR_CALL 
mdb__declarative_user____Compare____user_question_1_0_10001(
#line 388 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 390 "mdb.declarative_user.c"
  MR_Box * mdb__declarative_user__wrapper_arg_2,
#line 392 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_3,
#line 394 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_4);

#line 397 "mdb.declarative_user.c"
static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_response_1_0_10001(
#line 400 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 402 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_2,
#line 404 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_3);

#line 407 "mdb.declarative_user.c"
static void MR_CALL 
mdb__declarative_user____Compare____user_response_1_0_10001(
#line 410 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 412 "mdb.declarative_user.c"
  MR_Box * mdb__declarative_user__wrapper_arg_2,
#line 414 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_3,
#line 416 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_4);

#line 419 "mdb.declarative_user.c"
static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_search_mode_0_0_10001(
#line 422 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 424 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_2);

#line 427 "mdb.declarative_user.c"
static void MR_CALL 
mdb__declarative_user____Compare____user_search_mode_0_0_10001(
#line 430 "mdb.declarative_user.c"
  MR_Box * mdb__declarative_user__wrapper_arg_1,
#line 432 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_2,
#line 434 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_3);

#line 437 "mdb.declarative_user.c"
static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_state_0_0_10001(
#line 440 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 442 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_2);

#line 445 "mdb.declarative_user.c"
static void MR_CALL 
mdb__declarative_user____Compare____user_state_0_0_10001(
#line 448 "mdb.declarative_user.c"
  MR_Box * mdb__declarative_user__wrapper_arg_1,
#line 450 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_2,
#line 452 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_3);

#line 1151 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_4_p_0_1(
#line 1151 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 1151 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 1151 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_2,
#line 1151 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_3);

#line 1136 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_4_p_0(
#line 1136 "declarative_user.m"
  MR_Word mdb__declarative_user__Question_5,
#line 1136 "declarative_user.m"
  MR_Word mdb__declarative_user__User_6);

#line 492 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_105_111_95_97_99_116_105_111_110_115_95_95_91_49_93_95_48_2_p_0(
#line 492 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 492 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2);

#line 482 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_116_114_97_99_101_95_97_116_111_109_115_95_95_91_49_93_95_48_3_p_0(
#line 482 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 482 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2,
#line 482 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__3_3);

#line 452 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_113_117_101_115_116_105_111_110_95_112_114_111_109_112_116_95_95_91_49_93_95_48_2_p_0(
#line 452 "declarative_user.m"
  MR_Word mdb__declarative_user__UserQuestion_3,
#line 452 "declarative_user.m"
  MR_String * mdb__declarative_user__Prompt_4);

#line 447 "declarative_user.m"
static MR_Word MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(
#line 447 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1);

#line 716 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__IntroducedFrom__pred__browse_xml_atom__716__1_2_p_0(
#line 716 "declarative_user.m"
  MR_Word mdb__declarative_user__PredOrFunc_15,
#line 716 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_22);

#line 697 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__IntroducedFrom__pred__browse_atom__697__1_2_p_0(
#line 697 "declarative_user.m"
  MR_Word mdb__declarative_user__PredOrFunc_20,
#line 697 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_31);

#line 133 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user____Compare____user_command_0_0(
#line 133 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__1_1,
#line 133 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_2,
#line 133 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__3_3);

#line 133 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user____Index____user_command_0_0(
#line 133 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 133 "declarative_user.m"
  MR_Integer * mdb__declarative_user__HeadVar__2_2);

#line 133 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_command_0_0(
#line 133 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 133 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_2);

#line 1358 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__convert_dirs_to_term_path_from_atom_3_p_0(
#line 1358 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 1358 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_2,
#line 1358 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__3_3);

#line 1322 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__print_tabled_io_actions_2_5_p_0(
#line 1322 "declarative_user.m"
  MR_Word mdb__declarative_user__User_6,
#line 1322 "declarative_user.m"
  MR_Integer mdb__declarative_user__Cur_7,
#line 1322 "declarative_user.m"
  MR_Integer mdb__declarative_user__End_8);

#line 1292 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__write_io_actions_5_p_0(
#line 1292 "declarative_user.m"
  MR_Word mdb__declarative_user__User_6,
#line 1292 "declarative_user.m"
  MR_Integer mdb__declarative_user__NumTabled_7,
#line 1292 "declarative_user.m"
  MR_Word mdb__declarative_user__IoActions_8);

#line 1280 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__trace_atom_arg_to_univ_2_p_0(
#line 1280 "declarative_user.m"
  MR_Word mdb__declarative_user__TraceAtomArg_3,
#line 1280 "declarative_user.m"
  MR_Word * mdb__declarative_user__Univ_4);

#line 1256 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__count_tabled_io_actions_2_8_p_0(
#line 1256 "declarative_user.m"
  MR_Integer mdb__declarative_user__Cur_9,
#line 1256 "declarative_user.m"
  MR_Integer mdb__declarative_user__End_10,
#line 1256 "declarative_user.m"
  MR_Integer mdb__declarative_user__PrevTabled_11,
#line 1256 "declarative_user.m"
  MR_Integer * mdb__declarative_user__Tabled_12,
#line 1256 "declarative_user.m"
  MR_Integer mdb__declarative_user__PrevUntabled_13,
#line 1256 "declarative_user.m"
  MR_Integer * mdb__declarative_user__Untabled_14);

#line 1221 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__write_decl_atom_6_p_0_1(
#line 1221 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 1221 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 1221 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 1210 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__write_decl_atom_6_p_0(
#line 1210 "declarative_user.m"
  MR_Word mdb__declarative_user__User_7,
#line 1210 "declarative_user.m"
  MR_String mdb__declarative_user__Indent_8,
#line 1210 "declarative_user.m"
  MR_Word mdb__declarative_user__CallerType_9,
#line 1210 "declarative_user.m"
  MR_Word mdb__declarative_user__DeclAtom_10);

#line 1203 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__write_decl_final_atom_6_p_0(
#line 1203 "declarative_user.m"
  MR_Word mdb__declarative_user__User_7,
#line 1203 "declarative_user.m"
  MR_String mdb__declarative_user__Indent_8,
#line 1203 "declarative_user.m"
  MR_Word mdb__declarative_user__CallerType_9,
#line 1203 "declarative_user.m"
  MR_Word mdb__declarative_user__FinalAtom_10);

#line 1196 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__write_decl_init_atom_6_p_0(
#line 1196 "declarative_user.m"
  MR_Word mdb__declarative_user__User_7,
#line 1196 "declarative_user.m"
  MR_String mdb__declarative_user__Indent_8,
#line 1196 "declarative_user.m"
  MR_Word mdb__declarative_user__CallerType_9,
#line 1196 "declarative_user.m"
  MR_Word mdb__declarative_user__InitAtom_10);

#line 1172 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__write_decl_bug_4_p_0_1(
#line 1172 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 1172 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 1172 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_2,
#line 1172 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_3);

#line 1164 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__write_decl_bug_4_p_0(
#line 1164 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 1164 "declarative_user.m"
  MR_Word mdb__declarative_user__User_2);

#line 1130 "declarative_user.m"
static MR_Word MR_CALL 
mdb__declarative_user__decl_caller_type_0_f_0(void);

#line 1066 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__is_dash_1_p_0(
#line 1066 "declarative_user.m"
  MR_Char mdb__declarative_user__HeadVar__1_1);

#line 1042 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__help_cmd_2_p_0(
#line 1042 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 1042 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2);

#line 1023 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__search_mode_cmd_2_p_0(
#line 1023 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 1023 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2);

#line 1018 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__trust_arg_cmd_2_p_0(
#line 1018 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 1018 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2);

#line 1003 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__num_io_actions_cmd_2_p_0(
#line 1003 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 1003 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2);

#line 971 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__format_param_arg_cmd_3_p_0(
#line 971 "declarative_user.m"
  MR_String mdb__declarative_user__Cmd_4,
#line 971 "declarative_user.m"
  MR_Word mdb__declarative_user__ArgWords0_5,
#line 971 "declarative_user.m"
  MR_Word * mdb__declarative_user__Command_6);

#line 962 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__format_arg_cmd_2_p_0(
#line 962 "declarative_user.m"
  MR_Word mdb__declarative_user__ArgWords_3,
#line 962 "declarative_user.m"
  MR_Word * mdb__declarative_user__UserCommand_4);

#line 1054 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__print_arg_cmd_2_p_0_2(
#line 1054 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 1054 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1);

#line 1054 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__print_arg_cmd_2_p_0_1(
#line 1054 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 1054 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1);

#line 954 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__print_arg_cmd_2_p_0(
#line 954 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 954 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2);

#line 937 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__browse_arg_cmd_2_p_0(
#line 937 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 937 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2);

#line 932 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__one_word_cmd_3_p_0(
#line 932 "declarative_user.m"
  MR_Word mdb__declarative_user__Cmd_4,
#line 932 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_2,
#line 932 "declarative_user.m"
  MR_Word * mdb__declarative_user__Cmd_3);

#line 896 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_33(
#line 896 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 896 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 896 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 895 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_32(
#line 895 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 895 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 895 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 920 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_31(
#line 920 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 920 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 920 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 929 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_30(
#line 929 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 929 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 929 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 926 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_29(
#line 926 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 926 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 926 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 925 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_28(
#line 925 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 925 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 925 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 902 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_27(
#line 902 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 902 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 902 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 919 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_26(
#line 919 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 919 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 919 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 901 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_25(
#line 901 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 901 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 901 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 908 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_24(
#line 908 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 908 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 908 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 907 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_23(
#line 907 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 907 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 907 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 916 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_22(
#line 916 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 916 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 916 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 903 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_21(
#line 903 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 903 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 903 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 930 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_20(
#line 930 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 930 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 930 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 915 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_19(
#line 915 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 915 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 915 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 898 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_18(
#line 898 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 898 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 898 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 897 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_17(
#line 897 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 897 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 897 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 927 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_16(
#line 927 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 927 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 927 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 928 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_15(
#line 928 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 928 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 928 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 921 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_14(
#line 921 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 921 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 921 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 912 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_13(
#line 912 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 912 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 912 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 900 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_12(
#line 900 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 900 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 900 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 899 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_11(
#line 899 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 899 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 899 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 911 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_10(
#line 911 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 911 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 911 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 910 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_9(
#line 910 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 910 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 910 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 917 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_8(
#line 917 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 917 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 917 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 918 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_7(
#line 918 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 918 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 918 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 914 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_6(
#line 914 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 914 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 914 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 913 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_5(
#line 913 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 913 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 913 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 922 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_4(
#line 922 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 922 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 922 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 906 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_3(
#line 906 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 906 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 906 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 905 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_2(
#line 905 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 905 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 905 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 909 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_1(
#line 909 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 909 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 909 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2);

#line 891 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0(
#line 891 "declarative_user.m"
  MR_String mdb__declarative_user__HeadVar__1_1,
#line 891 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2);

#line 865 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__get_command_6_p_0_1(
#line 865 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 865 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1);

#line 858 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__get_command_6_p_0(
#line 858 "declarative_user.m"
  MR_String mdb__declarative_user__Prompt_7,
#line 858 "declarative_user.m"
  MR_Word * mdb__declarative_user__Command_8,
#line 858 "declarative_user.m"
  MR_Word mdb__declarative_user__User_9,
#line 858 "declarative_user.m"
  MR_Word * mdb__declarative_user__User_4);

#line 781 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__print_atom_arguments_6_p_0(
#line 781 "declarative_user.m"
  MR_Word mdb__declarative_user__Atom_7,
#line 781 "declarative_user.m"
  MR_Integer mdb__declarative_user__From_8,
#line 781 "declarative_user.m"
  MR_Integer mdb__declarative_user__To_9,
#line 781 "declarative_user.m"
  MR_Word mdb__declarative_user__User_10);

#line 761 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__get_user_arg_values_2_p_0(
#line 761 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 761 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2);

#line 751 "declarative_user.m"
static MR_Word MR_CALL 
mdb__declarative_user__get_subterm_mode_from_atoms_for_arg_4_f_0(
#line 751 "declarative_user.m"
  MR_Integer mdb__declarative_user__ArgNum_6,
#line 751 "declarative_user.m"
  MR_Word mdb__declarative_user__InitAtom_7,
#line 751 "declarative_user.m"
  MR_Word mdb__declarative_user__FinalAtom_8,
#line 751 "declarative_user.m"
  MR_Word mdb__declarative_user__Dirs_9);

#line 723 "declarative_user.m"
static MR_Word MR_CALL 
mdb__declarative_user__get_subterm_mode_from_atoms_3_f_0(
#line 723 "declarative_user.m"
  MR_Word mdb__declarative_user__InitAtom_5,
#line 723 "declarative_user.m"
  MR_Word mdb__declarative_user__FinalAtom_6,
#line 723 "declarative_user.m"
  MR_Word mdb__declarative_user__Dirs_7);

#line 716 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__browse_xml_atom_4_p_0_1(
#line 716 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg);

#line 708 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__browse_xml_atom_4_p_0(
#line 708 "declarative_user.m"
  MR_Word mdb__declarative_user__Atom_5,
#line 708 "declarative_user.m"
  MR_Word mdb__declarative_user__User_6);

#line 702 "declarative_user.m"
static MR_Box MR_CALL 
mdb__declarative_user__browse_atom_7_p_0_2(
#line 702 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 702 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1);

#line 697 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__browse_atom_7_p_0_1(
#line 697 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg);

#line 688 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__browse_atom_7_p_0(
#line 688 "declarative_user.m"
  MR_Word mdb__declarative_user__InitAtom_8,
#line 688 "declarative_user.m"
  MR_Word mdb__declarative_user__FinalAtom_9,
#line 688 "declarative_user.m"
  MR_Word * mdb__declarative_user__MaybeTrack_10,
#line 688 "declarative_user.m"
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_26,
#line 688 "declarative_user.m"
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_27);

#line 670 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__browse_xml_atom_argument_5_p_0(
#line 670 "declarative_user.m"
  MR_Word mdb__declarative_user__Atom_6,
#line 670 "declarative_user.m"
  MR_Integer mdb__declarative_user__ArgNum_7,
#line 670 "declarative_user.m"
  MR_Word mdb__declarative_user__User_8);

#line 659 "declarative_user.m"
static MR_Box MR_CALL 
mdb__declarative_user__browse_atom_argument_8_p_0_1(
#line 659 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 659 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1);

#line 644 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__browse_atom_argument_8_p_0(
#line 644 "declarative_user.m"
  MR_Word mdb__declarative_user__InitAtom_9,
#line 644 "declarative_user.m"
  MR_Word mdb__declarative_user__FinalAtom_10,
#line 644 "declarative_user.m"
  MR_Integer mdb__declarative_user__ArgNum_11,
#line 644 "declarative_user.m"
  MR_Word * mdb__declarative_user__MaybeTrack_12,
#line 644 "declarative_user.m"
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_26,
#line 644 "declarative_user.m"
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_27);

#line 716 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__browse_xml_decl_bug_5_p_0_1(
#line 716 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg);

#line 631 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__browse_xml_decl_bug_5_p_0(
#line 631 "declarative_user.m"
  MR_Word mdb__declarative_user__Bug_6,
#line 631 "declarative_user.m"
  MR_Word mdb__declarative_user__MaybeArgNum_7,
#line 631 "declarative_user.m"
  MR_Word mdb__declarative_user__User_8);

#line 618 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__browse_decl_bug_6_p_0(
#line 618 "declarative_user.m"
  MR_Word mdb__declarative_user__Bug_7,
#line 618 "declarative_user.m"
  MR_Word mdb__declarative_user__MaybeArgNum_8,
#line 618 "declarative_user.m"
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_16,
#line 618 "declarative_user.m"
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_17);

#line 601 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__browse_io_action_6_p_0(
#line 601 "declarative_user.m"
  MR_Word mdb__declarative_user__IoAction_7,
#line 601 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2,
#line 601 "declarative_user.m"
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_17,
#line 601 "declarative_user.m"
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_18);

#line 565 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__print_chosen_io_actions_6_p_0(
#line 565 "declarative_user.m"
  MR_Word mdb__declarative_user__MaybeIoActions_7,
#line 565 "declarative_user.m"
  MR_Integer mdb__declarative_user__From_8,
#line 565 "declarative_user.m"
  MR_Integer mdb__declarative_user__To_9,
#line 565 "declarative_user.m"
  MR_Word mdb__declarative_user__User0_10);

#line 541 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__find_tabled_io_action_5_p_0(
#line 541 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 541 "declarative_user.m"
  MR_Integer mdb__declarative_user__TabledActionNum_8,
#line 541 "declarative_user.m"
  MR_Word * mdb__declarative_user__MaybeIoAction_9);

#line 520 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__browse_chosen_io_action_7_p_0(
#line 520 "declarative_user.m"
  MR_Word mdb__declarative_user__MaybeIoActions_8,
#line 520 "declarative_user.m"
  MR_Integer mdb__declarative_user__ActionNum_9,
#line 520 "declarative_user.m"
  MR_Word * mdb__declarative_user__MaybeTrack_10,
#line 520 "declarative_user.m"
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_16,
#line 520 "declarative_user.m"
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_17);

#line 512 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__decl_bug_io_actions_2_p_0(
#line 512 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 512 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2);

#line 435 "declarative_user.m"
static MR_Word MR_CALL 
mdb__declarative_user__arg_num_to_arg_pos_1_f_0(
#line 435 "declarative_user.m"
  MR_Integer mdb__declarative_user__ArgNum_3);

#line 251 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__handle_command_7_p_0(
#line 251 "declarative_user.m"
  MR_Word mdb__declarative_user__TypeInfo_for_T_234,
#line 251 "declarative_user.m"
  MR_Word mdb__declarative_user__Cmd_8,
#line 251 "declarative_user.m"
  MR_Word mdb__declarative_user__UserQuestion_9,
#line 251 "declarative_user.m"
  MR_Word * mdb__declarative_user__Response_10,
#line 251 "declarative_user.m"
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_57,
#line 251 "declarative_user.m"
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_58);


static /* final */ const MR_Box mdb__declarative_user_scalar_common_1[23][2];

static /* final */ const MR_Box mdb__declarative_user_scalar_common_2[18][3];

static /* final */ const MR_Box mdb__declarative_user_scalar_common_3[3][5];

static /* final */ const MR_Box mdb__declarative_user_scalar_common_4[1][8];

static /* final */ const MR_Box mdb__declarative_user_scalar_common_5[1][7];

static /* final */ const MR_Box mdb__declarative_user_scalar_common_6[21][4];

static /* final */ const MR_Box mdb__declarative_user_scalar_common_7[2][6];

static /* final */ const MR_Box mdb__declarative_user_scalar_common_9[3][1];

static /* final */ const MR_Box mdb__declarative_user_scalar_common_11[1][9];


#line 895 "declarative_user.m"
/* sealed */ struct mdb__declarative_user__vector_common_type_8_0_s {
#line 895 "declarative_user.m"
  const MR_Word mdb__declarative_user__vector_common_type_8_0__vct_8_f_0;
#line 895 "declarative_user.m"
};

static /* final */ const struct mdb__declarative_user__vector_common_type_8_0_s mdb__declarative_user_vector_common_8[33];

#line 1025 "declarative_user.m"
/* sealed */ struct mdb__declarative_user__vector_common_type_10_0_s {
#line 1025 "declarative_user.m"
  const MR_String mdb__declarative_user__vector_common_type_10_0__vct_10_f_0;
#line 1025 "declarative_user.m"
  const MR_Word mdb__declarative_user__vector_common_type_10_0__vct_10_f_1;
#line 1025 "declarative_user.m"
};

static /* final */ const struct mdb__declarative_user__vector_common_type_10_0_s mdb__declarative_user_vector_common_10[64];



static /* final */ const MR_Box mdb__declarative_user_scalar_common_1[23][2] = {
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdb__help__mdb__help__type_ctor_info_entry_0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "decl_debug")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "concepts")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "\th, \?\thelp\t\tthis help message\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "abort this diagnosis session and return to mdb\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "\tq\tquit\t\t")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "\tb\tbrowse\t\tbrowse the suspect\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "\tn\tno\t\tdo not accept that the suspect is a bug\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "\ty\tyes\t\tconfirm that the suspect is a bug\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "Answer one of:\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "convert_dirs_to_term_path_from_atom")),
    ((MR_Box) ((MR_String) "argument list empty"))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "convert_dirs_to_term_path_from_atom")),
    ((MR_Box) ((MR_String) "argument of atom cannot be named"))
  },
  /* row 22 */
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
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_5)),
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
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_15)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_16)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_19)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_22)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_28)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_3[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_29)),
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
    ((MR_Box) (&mdb__declarative_user__list__pti_list_1__plain_mdb__browser_info__type_ctor_info_down_dir_0)),
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
    ((MR_Box) (&mdb__declarative_user__list__pti_list_1__plain_mdb__browser_info__type_ctor_info_down_dir_0)),
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
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "depth"))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_11)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_12)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_13)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))))
  },
  /* row 7 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_14)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "lines"))
  },
  /* row 8 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_17)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 9 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_18)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 10 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_20)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[14])))
  },
  /* row 11 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_21)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))
  },
  /* row 12 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_23)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))))
  },
  /* row 13 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_24)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))))
  },
  /* row 14 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_25)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))
  },
  /* row 15 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_26)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "size"))
  },
  /* row 16 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_27)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))
  },
  /* row 17 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_30)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))))
  },
  /* row 18 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[1])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_31)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "width"))
  },
  /* row 19 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_32)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) (&mdb__declarative_user_scalar_common_7[0])),
    ((MR_Box) (mdb__declarative_user__cmd_handler_2_p_0_33)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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

static /* final */ const MR_Box mdb__declarative_user_scalar_common_9[3][1] = {
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

static /* final */ const MR_Box mdb__declarative_user_scalar_common_11[1][9] = {
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


static /* final */ const struct mdb__declarative_user__vector_common_type_8_0_s mdb__declarative_user_vector_common_8[33] = {
  /* row 0 */   {     (MR_Word) &mdb__declarative_user_scalar_common_2[2] },
  /* row 1 */   {     (MR_Word) &mdb__declarative_user_scalar_common_6[1] },
  /* row 2 */   {     (MR_Word) &mdb__declarative_user_scalar_common_6[2] },
  /* row 3 */   {     (MR_Word) &mdb__declarative_user_scalar_common_2[3] },
  /* row 4 */   {     (MR_Word) &mdb__declarative_user_scalar_common_2[4] },
  /* row 5 */   {     (MR_Word) &mdb__declarative_user_scalar_common_2[5] },
  /* row 6 */   {     (MR_Word) &mdb__declarative_user_scalar_common_6[3] },
  /* row 7 */   {     (MR_Word) &mdb__declarative_user_scalar_common_2[6] },
  /* row 8 */   {     (MR_Word) &mdb__declarative_user_scalar_common_2[7] },
  /* row 9 */   {     (MR_Word) &mdb__declarative_user_scalar_common_2[8] },
  /* row 10 */   {     (MR_Word) &mdb__declarative_user_scalar_common_6[4] },
  /* row 11 */   {     (MR_Word) &mdb__declarative_user_scalar_common_6[5] },
  /* row 12 */   {     (MR_Word) &mdb__declarative_user_scalar_common_6[6] },
  /* row 13 */   {     (MR_Word) &mdb__declarative_user_scalar_common_6[7] },
  /* row 14 */   {     (MR_Word) &mdb__declarative_user_scalar_common_2[9] },
  /* row 15 */   {     (MR_Word) &mdb__declarative_user_scalar_common_2[10] },
  /* row 16 */   {     (MR_Word) &mdb__declarative_user_scalar_common_6[8] },
  /* row 17 */   {     (MR_Word) &mdb__declarative_user_scalar_common_6[9] },
  /* row 18 */   {     (MR_Word) &mdb__declarative_user_scalar_common_2[11] },
  /* row 19 */   {     (MR_Word) &mdb__declarative_user_scalar_common_6[10] },
  /* row 20 */   {     (MR_Word) &mdb__declarative_user_scalar_common_6[11] },
  /* row 21 */   {     (MR_Word) &mdb__declarative_user_scalar_common_2[12] },
  /* row 22 */   {     (MR_Word) &mdb__declarative_user_scalar_common_6[12] },
  /* row 23 */   {     (MR_Word) &mdb__declarative_user_scalar_common_6[13] },
  /* row 24 */   {     (MR_Word) &mdb__declarative_user_scalar_common_6[14] },
  /* row 25 */   {     (MR_Word) &mdb__declarative_user_scalar_common_6[15] },
  /* row 26 */   {     (MR_Word) &mdb__declarative_user_scalar_common_6[16] },
  /* row 27 */   {     (MR_Word) &mdb__declarative_user_scalar_common_2[13] },
  /* row 28 */   {     (MR_Word) &mdb__declarative_user_scalar_common_2[14] },
  /* row 29 */   {     (MR_Word) &mdb__declarative_user_scalar_common_6[17] },
  /* row 30 */   {     (MR_Word) &mdb__declarative_user_scalar_common_6[18] },
  /* row 31 */   {     (MR_Word) &mdb__declarative_user_scalar_common_6[19] },
  /* row 32 */   {     (MR_Word) &mdb__declarative_user_scalar_common_6[20] },
};

static /* final */ const struct mdb__declarative_user__vector_common_type_10_0_s mdb__declarative_user_vector_common_10[64] = {
  /* row 0 */
  {
    (MR_String) "top-down",
    (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[18])
  },
  /* row 1 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 2 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 3 */
  {
    (MR_String) "binary",
    (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[15])
  },
  /* row 4 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 5 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 6 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 7 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 8 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 9 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 10 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 11 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 12 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 13 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 14 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 15 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 16 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 17 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 18 */
  {
    (MR_String) "suspicion_divide_and_query",
    (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[17])
  },
  /* row 19 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 20 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 21 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 22 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 23 */
  {
    (MR_String) "dq",
    (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[16])
  },
  /* row 24 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 25 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 26 */
  {
    (MR_String) "td",
    (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[18])
  },
  /* row 27 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 28 */
  {
    (MR_String) "divide_and_query",
    (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[16])
  },
  /* row 29 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 30 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 31 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 32 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 33 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 34 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 35 */
  {
    (MR_String) "b",
    (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[15])
  },
  /* row 36 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 37 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 38 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 39 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 40 */
  {
    (MR_String) "suspicion-divide-and-query",
    (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[17])
  },
  /* row 41 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 42 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 43 */
  {
    (MR_String) "sdq",
    (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[17])
  },
  /* row 44 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 45 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 46 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 47 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 48 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 49 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 50 */
  {
    (MR_String) "top_down",
    (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[18])
  },
  /* row 51 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 52 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 53 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 54 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 55 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 56 */
  {
    (MR_String) "divide-and-query",
    (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[16])
  },
  /* row 57 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 58 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 59 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 60 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 61 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 62 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 63 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
};


#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



#line 2249 "mdb.declarative_user.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_user__list__pti_list_1__plain_mdb__browser_info__type_ctor_info_down_dir_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_down_dir_0
  }
};

#line 2257 "mdb.declarative_user.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_user__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2265 "mdb.declarative_user.c"
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

#line 2280 "mdb.declarative_user.c"
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

#line 2295 "mdb.declarative_user.c"
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

#line 2310 "mdb.declarative_user.c"
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

#line 2325 "mdb.declarative_user.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_user__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2333 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_4[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

#line 2338 "mdb.declarative_user.c"
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

#line 2353 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_5[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

#line 2358 "mdb.declarative_user.c"
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

#line 2373 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2378 "mdb.declarative_user.c"
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

#line 2393 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_7[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2399 "mdb.declarative_user.c"
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

#line 2414 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_8[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2420 "mdb.declarative_user.c"
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

#line 2435 "mdb.declarative_user.c"
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

#line 2450 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_10[1] = {
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_param_cmd_0
};

#line 2455 "mdb.declarative_user.c"
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

#line 2470 "mdb.declarative_user.c"
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

#line 2485 "mdb.declarative_user.c"
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

#line 2500 "mdb.declarative_user.c"
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

#line 2515 "mdb.declarative_user.c"
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

#line 2530 "mdb.declarative_user.c"
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

#line 2545 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_16[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_search_mode_0
};

#line 2550 "mdb.declarative_user.c"
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

#line 2565 "mdb.declarative_user.c"
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

#line 2580 "mdb.declarative_user.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_user__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2588 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_command_0_18[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

#line 2593 "mdb.declarative_user.c"
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

#line 2608 "mdb.declarative_user.c"
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

#line 2623 "mdb.declarative_user.c"
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

#line 2638 "mdb.declarative_user.c"
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

#line 2655 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_1[1] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_4
};

#line 2660 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_2[1] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_5
};

#line 2665 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_command_0_3[6] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_6,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_7,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_8,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_10,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_16,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_command_0_18
};

#line 2675 "mdb.declarative_user.c"
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

#line 2699 "mdb.declarative_user.c"
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

#line 2724 "mdb.declarative_user.c"
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

#line 2749 "mdb.declarative_user.c"
const MR_TypeCtorInfo_Struct mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_command_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_user____Unify____user_command_0_0_10001)),
  ((MR_Box) (mdb__declarative_user____Compare____user_command_0_0_10001)),
  (MR_String) "mdb.declarative_user",
  (MR_String) "user_command",
  {     mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_command_0 },
  {     mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_command_0 },
  (MR_Integer) 21,
  (MR_Integer) 4,
  mdb__declarative_user__mdb__declarative_user__functor_number_map_user_command_0
};

#line 2766 "mdb.declarative_user.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_user__mdb__declarative_debugger__pti_decl_question_1__pseudo_1 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2774 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_question_1_0[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__mdb__declarative_debugger__pti_decl_question_1__pseudo_1
};

#line 2779 "mdb.declarative_user.c"
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

#line 2794 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_question_1_1[2] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__mdb__declarative_debugger__pti_decl_question_1__pseudo_1,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0
};

#line 2800 "mdb.declarative_user.c"
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

#line 2815 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_question_1_0[1] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_question_1_0
};

#line 2820 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_question_1_1[1] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_question_1_1
};

#line 2825 "mdb.declarative_user.c"
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

#line 2839 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_question_1[2] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_question_1_0,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_question_1_1
};

#line 2845 "mdb.declarative_user.c"
static const MR_Integer mdb__declarative_user__mdb__declarative_user__functor_number_map_user_question_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2851 "mdb.declarative_user.c"
const MR_TypeCtorInfo_Struct mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_question_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_user____Unify____user_question_1_0_10001)),
  ((MR_Box) (mdb__declarative_user____Compare____user_question_1_0_10001)),
  (MR_String) "mdb.declarative_user",
  (MR_String) "user_question",
  {     mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_question_1 },
  {     mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_question_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__declarative_user__mdb__declarative_user__functor_number_map_user_question_1
};

#line 2868 "mdb.declarative_user.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_user__mdb__declarative_debugger__pti_decl_answer_1__pseudo_1 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_answer_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2876 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_0[2] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__mdb__declarative_debugger__pti_decl_question_1__pseudo_1,
  (MR_PseudoTypeInfo) &mdb__declarative_user__mdb__declarative_debugger__pti_decl_answer_1__pseudo_1
};

#line 2882 "mdb.declarative_user.c"
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

#line 2897 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_1[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__mdb__declarative_debugger__pti_decl_question_1__pseudo_1
};

#line 2902 "mdb.declarative_user.c"
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

#line 2917 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_2[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__mdb__declarative_debugger__pti_decl_question_1__pseudo_1
};

#line 2922 "mdb.declarative_user.c"
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

#line 2937 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_3[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_output_stream_0
};

#line 2942 "mdb.declarative_user.c"
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

#line 2957 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_4[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_search_mode_0
};

#line 2962 "mdb.declarative_user.c"
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

#line 2977 "mdb.declarative_user.c"
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

#line 2992 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_response_1_6[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2997 "mdb.declarative_user.c"
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

#line 3012 "mdb.declarative_user.c"
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

#line 3027 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_0[2] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_5,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_7
};

#line 3033 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_1[1] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_0
};

#line 3038 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_2[1] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_1
};

#line 3043 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_response_1_3[4] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_2,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_3,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_4,
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_response_1_6
};

#line 3051 "mdb.declarative_user.c"
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

#line 3075 "mdb.declarative_user.c"
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

#line 3087 "mdb.declarative_user.c"
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

#line 3099 "mdb.declarative_user.c"
const MR_TypeCtorInfo_Struct mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_response_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_user____Unify____user_response_1_0_10001)),
  ((MR_Box) (mdb__declarative_user____Compare____user_response_1_0_10001)),
  (MR_String) "mdb.declarative_user",
  (MR_String) "user_response",
  {     mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_response_1 },
  {     mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_response_1 },
  (MR_Integer) 8,
  (MR_Integer) 4,
  mdb__declarative_user__mdb__declarative_user__functor_number_map_user_response_1
};

#line 3116 "mdb.declarative_user.c"
static const MR_EnumFunctorDesc mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_0 = {
  (MR_String) "user_top_down",
  (MR_Integer) 0
};

#line 3122 "mdb.declarative_user.c"
static const MR_EnumFunctorDesc mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_1 = {
  (MR_String) "user_divide_and_query",
  (MR_Integer) 1
};

#line 3128 "mdb.declarative_user.c"
static const MR_EnumFunctorDesc mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_2 = {
  (MR_String) "user_suspicion_divide_and_query",
  (MR_Integer) 2
};

#line 3134 "mdb.declarative_user.c"
static const MR_EnumFunctorDesc mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_3 = {
  (MR_String) "user_binary",
  (MR_Integer) 3
};

#line 3140 "mdb.declarative_user.c"
static const MR_EnumFunctorDescPtr mdb__declarative_user__mdb__declarative_user__enum_value_ordered_user_search_mode_0[4] = {
  &mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_0,
  &mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_1,
  &mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_2,
  &mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_3
};

#line 3148 "mdb.declarative_user.c"
static const MR_EnumFunctorDescPtr mdb__declarative_user__mdb__declarative_user__enum_name_ordered_user_search_mode_0[4] = {
  &mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_3,
  &mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_1,
  &mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_2,
  &mdb__declarative_user__mdb__declarative_user__enum_functor_desc_user_search_mode_0_0
};

#line 3156 "mdb.declarative_user.c"
static const MR_Integer mdb__declarative_user__mdb__declarative_user__functor_number_map_user_search_mode_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 3164 "mdb.declarative_user.c"
const MR_TypeCtorInfo_Struct mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_search_mode_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_user____Unify____user_search_mode_0_0_10001)),
  ((MR_Box) (mdb__declarative_user____Compare____user_search_mode_0_0_10001)),
  (MR_String) "mdb.declarative_user",
  (MR_String) "user_search_mode",
  {     mdb__declarative_user__mdb__declarative_user__enum_name_ordered_user_search_mode_0 },
  {     mdb__declarative_user__mdb__declarative_user__enum_value_ordered_user_search_mode_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mdb__declarative_user__mdb__declarative_user__functor_number_map_user_search_mode_0
};

#line 3181 "mdb.declarative_user.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_user__list__ti_list_1mdb__help__type_ctor_info_entry_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdb__help__mdb__help__type_ctor_info_entry_0
  }
};

#line 3189 "mdb.declarative_user.c"
static const MR_PseudoTypeInfo mdb__declarative_user__mdb__declarative_user__field_types_user_state_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_input_stream_0,
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_output_stream_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_browser_persistent_state_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mdb__declarative_user__list__ti_list_1mdb__help__type_ctor_info_entry_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 3199 "mdb.declarative_user.c"
static const MR_ConstString mdb__declarative_user__mdb__declarative_user__field_names_user_state_0_0[6] = {
  (MR_String) "instr",
  (MR_String) "outstr",
  (MR_String) "browser",
  (MR_String) "display_question",
  (MR_String) "help_system",
  (MR_String) "testing"
};

#line 3209 "mdb.declarative_user.c"
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

#line 3224 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_state_0_0[1] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_state_0_0
};

#line 3229 "mdb.declarative_user.c"
static const MR_DuPtagLayout mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_state_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_user__mdb__declarative_user__du_stag_ordered_user_state_0_0
  }
};

#line 3238 "mdb.declarative_user.c"
static const MR_DuFunctorDescPtr mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_state_0[1] = {
  &mdb__declarative_user__mdb__declarative_user__du_functor_desc_user_state_0_0
};

#line 3243 "mdb.declarative_user.c"
static const MR_Integer mdb__declarative_user__mdb__declarative_user__functor_number_map_user_state_0[1] = {
  (MR_Integer) 0
};

#line 3248 "mdb.declarative_user.c"
const MR_TypeCtorInfo_Struct mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_state_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_user____Unify____user_state_0_0_10001)),
  ((MR_Box) (mdb__declarative_user____Compare____user_state_0_0_10001)),
  (MR_String) "mdb.declarative_user",
  (MR_String) "user_state",
  {     mdb__declarative_user__mdb__declarative_user__du_name_ordered_user_state_0 },
  {     mdb__declarative_user__mdb__declarative_user__du_ptag_ordered_user_state_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_user__mdb__declarative_user__functor_number_map_user_state_0
};

#line 3265 "mdb.declarative_user.c"
static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_command_0_0_10001(
#line 3268 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 3270 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_2)
#line 3272 "mdb.declarative_user.c"
{
#line 3274 "mdb.declarative_user.c"
  {
#line 3276 "mdb.declarative_user.c"
    MR_bool mdb__declarative_user__succeeded;

#line 3279 "mdb.declarative_user.c"
    {
#line 3281 "mdb.declarative_user.c"
      mdb__declarative_user__succeeded = mdb__declarative_user____Unify____user_command_0_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), ((MR_Word) mdb__declarative_user__wrapper_arg_2));
    }
#line 3284 "mdb.declarative_user.c"
    return mdb__declarative_user__succeeded;
#line 3286 "mdb.declarative_user.c"
  }
#line 3288 "mdb.declarative_user.c"
}

#line 3291 "mdb.declarative_user.c"
static void MR_CALL 
mdb__declarative_user____Compare____user_command_0_0_10001(
#line 3294 "mdb.declarative_user.c"
  MR_Box * mdb__declarative_user__wrapper_arg_1,
#line 3296 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_2,
#line 3298 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_3)
#line 3300 "mdb.declarative_user.c"
{
#line 3302 "mdb.declarative_user.c"
  {
#line 3304 "mdb.declarative_user.c"
    MR_Word mdb__declarative_user__conv0_HeadVar__1_1;

#line 3307 "mdb.declarative_user.c"
    {
#line 3309 "mdb.declarative_user.c"
      mdb__declarative_user____Compare____user_command_0_0(&mdb__declarative_user__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_user__wrapper_arg_2), ((MR_Word) mdb__declarative_user__wrapper_arg_3));
    }
#line 3312 "mdb.declarative_user.c"
    *mdb__declarative_user__wrapper_arg_1 = ((MR_Box) (mdb__declarative_user__conv0_HeadVar__1_1));
#line 3314 "mdb.declarative_user.c"
  }
#line 3316 "mdb.declarative_user.c"
}

#line 3319 "mdb.declarative_user.c"
static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_question_1_0_10001(
#line 3322 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 3324 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_2,
#line 3326 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_3)
#line 3328 "mdb.declarative_user.c"
{
#line 3330 "mdb.declarative_user.c"
  {
#line 3332 "mdb.declarative_user.c"
    MR_bool mdb__declarative_user__succeeded;

#line 3335 "mdb.declarative_user.c"
    {
#line 3337 "mdb.declarative_user.c"
      mdb__declarative_user__succeeded = mdb__declarative_user____Unify____user_question_1_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), ((MR_Word) mdb__declarative_user__wrapper_arg_2), ((MR_Word) mdb__declarative_user__wrapper_arg_3));
    }
#line 3340 "mdb.declarative_user.c"
    return mdb__declarative_user__succeeded;
#line 3342 "mdb.declarative_user.c"
  }
#line 3344 "mdb.declarative_user.c"
}

#line 3347 "mdb.declarative_user.c"
static void MR_CALL 
mdb__declarative_user____Compare____user_question_1_0_10001(
#line 3350 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 3352 "mdb.declarative_user.c"
  MR_Box * mdb__declarative_user__wrapper_arg_2,
#line 3354 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_3,
#line 3356 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_4)
#line 3358 "mdb.declarative_user.c"
{
#line 3360 "mdb.declarative_user.c"
  {
#line 3362 "mdb.declarative_user.c"
    MR_Word mdb__declarative_user__conv0_HeadVar__1_1;

#line 3365 "mdb.declarative_user.c"
    {
#line 3367 "mdb.declarative_user.c"
      mdb__declarative_user____Compare____user_question_1_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_user__wrapper_arg_3), ((MR_Word) mdb__declarative_user__wrapper_arg_4));
    }
#line 3370 "mdb.declarative_user.c"
    *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv0_HeadVar__1_1));
#line 3372 "mdb.declarative_user.c"
  }
#line 3374 "mdb.declarative_user.c"
}

#line 3377 "mdb.declarative_user.c"
static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_response_1_0_10001(
#line 3380 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 3382 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_2,
#line 3384 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_3)
#line 3386 "mdb.declarative_user.c"
{
#line 3388 "mdb.declarative_user.c"
  {
#line 3390 "mdb.declarative_user.c"
    MR_bool mdb__declarative_user__succeeded;

#line 3393 "mdb.declarative_user.c"
    {
#line 3395 "mdb.declarative_user.c"
      mdb__declarative_user__succeeded = mdb__declarative_user____Unify____user_response_1_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), ((MR_Word) mdb__declarative_user__wrapper_arg_2), ((MR_Word) mdb__declarative_user__wrapper_arg_3));
    }
#line 3398 "mdb.declarative_user.c"
    return mdb__declarative_user__succeeded;
#line 3400 "mdb.declarative_user.c"
  }
#line 3402 "mdb.declarative_user.c"
}

#line 3405 "mdb.declarative_user.c"
static void MR_CALL 
mdb__declarative_user____Compare____user_response_1_0_10001(
#line 3408 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 3410 "mdb.declarative_user.c"
  MR_Box * mdb__declarative_user__wrapper_arg_2,
#line 3412 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_3,
#line 3414 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_4)
#line 3416 "mdb.declarative_user.c"
{
#line 3418 "mdb.declarative_user.c"
  {
#line 3420 "mdb.declarative_user.c"
    MR_Word mdb__declarative_user__conv0_HeadVar__1_1;

#line 3423 "mdb.declarative_user.c"
    {
#line 3425 "mdb.declarative_user.c"
      mdb__declarative_user____Compare____user_response_1_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_user__wrapper_arg_3), ((MR_Word) mdb__declarative_user__wrapper_arg_4));
    }
#line 3428 "mdb.declarative_user.c"
    *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv0_HeadVar__1_1));
#line 3430 "mdb.declarative_user.c"
  }
#line 3432 "mdb.declarative_user.c"
}

#line 3435 "mdb.declarative_user.c"
static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_search_mode_0_0_10001(
#line 3438 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 3440 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_2)
#line 3442 "mdb.declarative_user.c"
{
#line 3444 "mdb.declarative_user.c"
  {
#line 3446 "mdb.declarative_user.c"
    MR_bool mdb__declarative_user__succeeded;

#line 3449 "mdb.declarative_user.c"
    {
#line 3451 "mdb.declarative_user.c"
      mdb__declarative_user__succeeded = mdb__declarative_user____Unify____user_search_mode_0_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), ((MR_Word) mdb__declarative_user__wrapper_arg_2));
    }
#line 3454 "mdb.declarative_user.c"
    return mdb__declarative_user__succeeded;
#line 3456 "mdb.declarative_user.c"
  }
#line 3458 "mdb.declarative_user.c"
}

#line 3461 "mdb.declarative_user.c"
static void MR_CALL 
mdb__declarative_user____Compare____user_search_mode_0_0_10001(
#line 3464 "mdb.declarative_user.c"
  MR_Box * mdb__declarative_user__wrapper_arg_1,
#line 3466 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_2,
#line 3468 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_3)
#line 3470 "mdb.declarative_user.c"
{
#line 3472 "mdb.declarative_user.c"
  {
#line 3474 "mdb.declarative_user.c"
    MR_Word mdb__declarative_user__conv0_HeadVar__1_1;

#line 3477 "mdb.declarative_user.c"
    {
#line 3479 "mdb.declarative_user.c"
      mdb__declarative_user____Compare____user_search_mode_0_0(&mdb__declarative_user__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_user__wrapper_arg_2), ((MR_Word) mdb__declarative_user__wrapper_arg_3));
    }
#line 3482 "mdb.declarative_user.c"
    *mdb__declarative_user__wrapper_arg_1 = ((MR_Box) (mdb__declarative_user__conv0_HeadVar__1_1));
#line 3484 "mdb.declarative_user.c"
  }
#line 3486 "mdb.declarative_user.c"
}

#line 3489 "mdb.declarative_user.c"
static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_state_0_0_10001(
#line 3492 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 3494 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_2)
#line 3496 "mdb.declarative_user.c"
{
#line 3498 "mdb.declarative_user.c"
  {
#line 3500 "mdb.declarative_user.c"
    MR_bool mdb__declarative_user__succeeded;

#line 3503 "mdb.declarative_user.c"
    {
#line 3505 "mdb.declarative_user.c"
      mdb__declarative_user__succeeded = mdb__declarative_user____Unify____user_state_0_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), ((MR_Word) mdb__declarative_user__wrapper_arg_2));
    }
#line 3508 "mdb.declarative_user.c"
    return mdb__declarative_user__succeeded;
#line 3510 "mdb.declarative_user.c"
  }
#line 3512 "mdb.declarative_user.c"
}

#line 3515 "mdb.declarative_user.c"
static void MR_CALL 
mdb__declarative_user____Compare____user_state_0_0_10001(
#line 3518 "mdb.declarative_user.c"
  MR_Box * mdb__declarative_user__wrapper_arg_1,
#line 3520 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_2,
#line 3522 "mdb.declarative_user.c"
  MR_Box mdb__declarative_user__wrapper_arg_3)
#line 3524 "mdb.declarative_user.c"
{
#line 3526 "mdb.declarative_user.c"
  {
#line 3528 "mdb.declarative_user.c"
    MR_Word mdb__declarative_user__conv0_HeadVar__1_1;

#line 3531 "mdb.declarative_user.c"
    {
#line 3533 "mdb.declarative_user.c"
      mdb__declarative_user____Compare____user_state_0_0(&mdb__declarative_user__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_user__wrapper_arg_2), ((MR_Word) mdb__declarative_user__wrapper_arg_3));
    }
#line 3536 "mdb.declarative_user.c"
    *mdb__declarative_user__wrapper_arg_1 = ((MR_Box) (mdb__declarative_user__conv0_HeadVar__1_1));
#line 3538 "mdb.declarative_user.c"
  }
#line 3540 "mdb.declarative_user.c"
}

#line 1151 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_4_p_0_1(
#line 1151 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 1151 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 1151 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_2,
#line 1151 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_3)
#line 1151 "declarative_user.m"
{
#line 1151 "declarative_user.m"
  {
#line 1151 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;

#line 1151 "declarative_user.m"
    {
#line 1151 "declarative_user.m"
      mdb__declarative_user__write_decl_final_atom_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 5))), ((MR_Word) mdb__declarative_user__wrapper_arg_1));
    }
#line 1151 "declarative_user.m"
  }
#line 1151 "declarative_user.m"
}

#line 1136 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_4_p_0(
#line 1136 "declarative_user.m"
  MR_Word mdb__declarative_user__Question_5,
#line 1136 "declarative_user.m"
  MR_Word mdb__declarative_user__User_6)
#line 1136 "declarative_user.m"
{
#line 1143 "declarative_user.m"
  {
#line 1143 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;

#line 1143 "declarative_user.m"
#line 1143 "declarative_user.m"
    switch (MR_tag((MR_Word) mdb__declarative_user__Question_5)) {
#line 1143 "declarative_user.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1143 "declarative_user.m"
      case (MR_Integer) 0:
#line 1141 "declarative_user.m"
        {
#line 1141 "declarative_user.m"
          MR_Word mdb__declarative_user__Atom_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Question_5, (MR_Integer) 2)));
#line 1141 "declarative_user.m"
          MR_Box mdb__declarative_user__V_8_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_user__Question_5, (MR_Integer) 0));
#line 1141 "declarative_user.m"
          MR_Word mdb__declarative_user__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Question_5, (MR_Integer) 1)));

#line 1142 "declarative_user.m"
          {
#line 1142 "declarative_user.m"
            mdb__declarative_user__write_decl_final_atom_6_p_0(mdb__declarative_user__User_6, (MR_String) "", (MR_Integer) 0, mdb__declarative_user__Atom_10);
          }
#line 1141 "declarative_user.m"
        }
#line 1143 "declarative_user.m"
        break;
#line 1143 "declarative_user.m"
      case (MR_Integer) 1:
#line 1144 "declarative_user.m"
        {
#line 1144 "declarative_user.m"
          MR_Word mdb__declarative_user__Call_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Question_5, (MR_Integer) 1)));
#line 1144 "declarative_user.m"
          MR_Word mdb__declarative_user__Solns_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Question_5, (MR_Integer) 2)));
#line 1144 "declarative_user.m"
          MR_Word mdb__declarative_user__V_81_81;
#line 1144 "declarative_user.m"
          MR_Box mdb__declarative_user__V_11_11 = (MR_hl_field(MR_mktag(1), mdb__declarative_user__Question_5, (MR_Integer) 0));

#line 1201 "declarative_user.m"
          {
#line 1201 "declarative_user.m"
            mdb__declarative_user__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1201 "declarative_user.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_user__V_81_81, 0) = ((MR_Box) (mdb__declarative_user__Call_12));
#line 1201 "declarative_user.m"
          }
#line 1201 "declarative_user.m"
          {
#line 1201 "declarative_user.m"
            mdb__declarative_user__write_decl_atom_6_p_0(mdb__declarative_user__User_6, (MR_String) "Call ", (MR_Integer) 0, mdb__declarative_user__V_81_81);
          }
#line 1148 "declarative_user.m"
          if ((mdb__declarative_user__Solns_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1147 "declarative_user.m"
            {
#line 1147 "declarative_user.m"
            }
#line 1148 "declarative_user.m"
          else
#line 1149 "declarative_user.m"
            {
#line 1149 "declarative_user.m"
              MR_Word mdb__declarative_user__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
#line 1149 "declarative_user.m"
              MR_Word mdb__declarative_user__V_39_39;
#line 1150 "declarative_user.m"
              MR_Word mdb__declarative_user__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
#line 1150 "declarative_user.m"
              MR_Word mdb__declarative_user__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
#line 1150 "declarative_user.m"
              MR_Word mdb__declarative_user__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
#line 1150 "declarative_user.m"
              MR_Word mdb__declarative_user__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
#line 1150 "declarative_user.m"
              MR_Word mdb__declarative_user__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
#line 1151 "declarative_user.m"
              MR_Box mdb__declarative_user__conv0_STATE_VARIABLE_IO_20;

#line 1150 "declarative_user.m"
              {
#line 1150 "declarative_user.m"
                mercury__io__write_string_4_p_0(mdb__declarative_user__V_36_36, (MR_String) "Solutions:\n");
              }
#line 1151 "declarative_user.m"
              {
#line 1151 "declarative_user.m"
                mdb__declarative_user__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1151 "declarative_user.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_user__V_39_39, 0) = ((MR_Box) (&mdb__declarative_user_scalar_common_11[0]));
#line 1151 "declarative_user.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_user__V_39_39, 1) = ((MR_Box) (mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_4_p_0_1));
#line 1151 "declarative_user.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_user__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1151 "declarative_user.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_user__V_39_39, 3) = ((MR_Box) (mdb__declarative_user__User_6));
#line 1151 "declarative_user.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_user__V_39_39, 4) = ((MR_Box) ((MR_String) "\t"));
#line 1151 "declarative_user.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_user__V_39_39, 5) = ((MR_Box) ((MR_Integer) 2));
#line 1151 "declarative_user.m"
              }
#line 1151 "declarative_user.m"
              {
#line 1151 "declarative_user.m"
                mercury__list__foldl_4_p_10((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, mdb__declarative_user__V_39_39, mdb__declarative_user__Solns_13, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_user__conv0_STATE_VARIABLE_IO_20);
              }
#line 1149 "declarative_user.m"
            }
#line 1144 "declarative_user.m"
        }
#line 1143 "declarative_user.m"
        break;
#line 1143 "declarative_user.m"
      case (MR_Integer) 2:
#line 1155 "declarative_user.m"
        {
#line 1155 "declarative_user.m"
          MR_Word mdb__declarative_user__TypeInfo_73_73;
#line 1155 "declarative_user.m"
          MR_Word mdb__declarative_user__ExceptionRep_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__Question_5, (MR_Integer) 2)));
#line 1155 "declarative_user.m"
          MR_Word mdb__declarative_user__Exception_18;
#line 1155 "declarative_user.m"
          MR_Word mdb__declarative_user__V_24_24;
#line 1155 "declarative_user.m"
          MR_Word mdb__declarative_user__V_27_27;
#line 1155 "declarative_user.m"
          MR_Box mdb__declarative_user__V_29_29;
#line 1155 "declarative_user.m"
          MR_Word mdb__declarative_user__V_31_31;
#line 1155 "declarative_user.m"
          MR_Word mdb__declarative_user__Call_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__Question_5, (MR_Integer) 1)));
#line 1155 "declarative_user.m"
          MR_Word mdb__declarative_user__V_90_90;
#line 1155 "declarative_user.m"
          MR_Box mdb__declarative_user__V_16_16 = (MR_hl_field(MR_mktag(2), mdb__declarative_user__Question_5, (MR_Integer) 0));
#line 1157 "declarative_user.m"
          MR_Word mdb__declarative_user__V_52_52;
#line 1157 "declarative_user.m"
          MR_Word mdb__declarative_user__V_53_53;
#line 1157 "declarative_user.m"
          MR_Word mdb__declarative_user__V_54_54;
#line 1157 "declarative_user.m"
          MR_Word mdb__declarative_user__V_55_55;
#line 1157 "declarative_user.m"
          MR_Word mdb__declarative_user__V_56_56;
#line 1159 "declarative_user.m"
          MR_Word mdb__declarative_user__V_57_57;
#line 1159 "declarative_user.m"
          MR_Word mdb__declarative_user__V_58_58;
#line 1159 "declarative_user.m"
          MR_Word mdb__declarative_user__V_59_59;
#line 1159 "declarative_user.m"
          MR_Word mdb__declarative_user__V_60_60;
#line 1159 "declarative_user.m"
          MR_Word mdb__declarative_user__V_61_61;
#line 1161 "declarative_user.m"
          MR_Word mdb__declarative_user__V_62_62;
#line 1161 "declarative_user.m"
          MR_Word mdb__declarative_user__V_63_63;
#line 1161 "declarative_user.m"
          MR_Word mdb__declarative_user__V_64_64;
#line 1161 "declarative_user.m"
          MR_Word mdb__declarative_user__V_65_65;
#line 1161 "declarative_user.m"
          MR_Word mdb__declarative_user__V_66_66;

#line 1201 "declarative_user.m"
          {
#line 1201 "declarative_user.m"
            mdb__declarative_user__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1201 "declarative_user.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_user__V_90_90, 0) = ((MR_Box) (mdb__declarative_user__Call_46));
#line 1201 "declarative_user.m"
          }
#line 1201 "declarative_user.m"
          {
#line 1201 "declarative_user.m"
            mdb__declarative_user__write_decl_atom_6_p_0(mdb__declarative_user__User_6, (MR_String) "Call ", (MR_Integer) 0, mdb__declarative_user__V_90_90);
          }
#line 1157 "declarative_user.m"
          mdb__declarative_user__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
#line 1157 "declarative_user.m"
          mdb__declarative_user__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
#line 1157 "declarative_user.m"
          mdb__declarative_user__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
#line 1157 "declarative_user.m"
          mdb__declarative_user__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
#line 1157 "declarative_user.m"
          mdb__declarative_user__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
#line 1157 "declarative_user.m"
          mdb__declarative_user__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
#line 1157 "declarative_user.m"
          {
#line 1157 "declarative_user.m"
            mercury__io__write_string_4_p_0(mdb__declarative_user__V_24_24, (MR_String) "Throws ");
          }
#line 1158 "declarative_user.m"
          {
#line 1158 "declarative_user.m"
            mdb__term_rep__rep_to_univ_2_p_0(mdb__declarative_user__ExceptionRep_17, &mdb__declarative_user__Exception_18);
          }
#line 1159 "declarative_user.m"
          mdb__declarative_user__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
#line 1159 "declarative_user.m"
          mdb__declarative_user__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
#line 1159 "declarative_user.m"
          mdb__declarative_user__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
#line 1159 "declarative_user.m"
          mdb__declarative_user__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
#line 1159 "declarative_user.m"
          mdb__declarative_user__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
#line 1159 "declarative_user.m"
          mdb__declarative_user__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
#line 1159 "declarative_user.m"
          {
#line 1159 "declarative_user.m"
            mdb__declarative_user__V_29_29 = mercury__univ__univ_value_1_f_0(&mdb__declarative_user__TypeInfo_73_73, mdb__declarative_user__Exception_18);
          }
#line 1159 "declarative_user.m"
          {
#line 1159 "declarative_user.m"
            mercury__io__write_5_p_2(mdb__declarative_user__TypeInfo_73_73, mdb__declarative_user__V_27_27, (MR_Integer) 2, mdb__declarative_user__V_29_29);
          }
#line 1161 "declarative_user.m"
          mdb__declarative_user__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
#line 1161 "declarative_user.m"
          mdb__declarative_user__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
#line 1161 "declarative_user.m"
          mdb__declarative_user__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
#line 1161 "declarative_user.m"
          mdb__declarative_user__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
#line 1161 "declarative_user.m"
          mdb__declarative_user__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
#line 1161 "declarative_user.m"
          mdb__declarative_user__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
#line 1161 "declarative_user.m"
          {
#line 1161 "declarative_user.m"
            mercury__io__nl_3_p_0(mdb__declarative_user__V_31_31);
          }
#line 1155 "declarative_user.m"
        }
#line 1143 "declarative_user.m"
        break;
#line 1143 "declarative_user.m"
    }
#line 1143 "declarative_user.m"
  }
#line 1136 "declarative_user.m"
}

#line 492 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_105_111_95_97_99_116_105_111_110_115_95_95_91_49_93_95_48_2_p_0(
#line 492 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 492 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2)
#line 492 "declarative_user.m"
{
#line 495 "declarative_user.m"
  {
#line 495 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;

#line 495 "declarative_user.m"
#line 495 "declarative_user.m"
    switch (MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) {
#line 495 "declarative_user.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 495 "declarative_user.m"
      case (MR_Integer) 0:
#line 495 "declarative_user.m"
        {
#line 495 "declarative_user.m"
          MR_Word mdb__declarative_user__FinalDeclAtom_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 2)));
#line 495 "declarative_user.m"
          MR_Box mdb__declarative_user__V_3_3 = (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0));
#line 495 "declarative_user.m"
          MR_Word mdb__declarative_user__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 495 "declarative_user.m"
          MR_Word mdb__declarative_user__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalDeclAtom_5, (MR_Integer) 0)));

#line 495 "declarative_user.m"
          *mdb__declarative_user__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalDeclAtom_5, (MR_Integer) 1)));
#line 495 "declarative_user.m"
        }
#line 495 "declarative_user.m"
        break;
#line 495 "declarative_user.m"
      case (MR_Integer) 1:
#line 497 "declarative_user.m"
        *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 495 "declarative_user.m"
        break;
#line 495 "declarative_user.m"
      case (MR_Integer) 2:
#line 498 "declarative_user.m"
        *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 495 "declarative_user.m"
        break;
#line 495 "declarative_user.m"
    }
#line 495 "declarative_user.m"
  }
#line 492 "declarative_user.m"
}

#line 482 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_116_114_97_99_101_95_97_116_111_109_115_95_95_91_49_93_95_48_3_p_0(
#line 482 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 482 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2,
#line 482 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__3_3)
#line 482 "declarative_user.m"
{
#line 485 "declarative_user.m"
  {
#line 485 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;

#line 485 "declarative_user.m"
#line 485 "declarative_user.m"
    switch (MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) {
#line 485 "declarative_user.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 485 "declarative_user.m"
      case (MR_Integer) 0:
#line 485 "declarative_user.m"
        {
#line 485 "declarative_user.m"
          MR_Word mdb__declarative_user__InitDeclAtom_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 485 "declarative_user.m"
          MR_Word mdb__declarative_user__FinalDeclAtom_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 2)));
#line 485 "declarative_user.m"
          MR_Box mdb__declarative_user__V_4_4 = (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0));
#line 485 "declarative_user.m"
          MR_Word mdb__declarative_user__V_13_13;

#line 485 "declarative_user.m"
          *mdb__declarative_user__HeadVar__2_2 = (MR_Word) mdb__declarative_user__InitDeclAtom_5;
#line 485 "declarative_user.m"
          *mdb__declarative_user__HeadVar__3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalDeclAtom_6, (MR_Integer) 0)));
#line 485 "declarative_user.m"
          mdb__declarative_user__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalDeclAtom_6, (MR_Integer) 1)));
#line 485 "declarative_user.m"
        }
#line 485 "declarative_user.m"
        break;
#line 485 "declarative_user.m"
      case (MR_Integer) 1:
#line 487 "declarative_user.m"
        {
#line 487 "declarative_user.m"
          MR_Word mdb__declarative_user__InitDeclAtom_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 487 "declarative_user.m"
          MR_Box mdb__declarative_user__V_7_7 = (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0));
#line 487 "declarative_user.m"
          MR_Word mdb__declarative_user__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 2)));

#line 487 "declarative_user.m"
          *mdb__declarative_user__HeadVar__2_2 = (MR_Word) mdb__declarative_user__InitDeclAtom_8;
#line 487 "declarative_user.m"
          *mdb__declarative_user__HeadVar__3_3 = *mdb__declarative_user__HeadVar__2_2;
#line 487 "declarative_user.m"
        }
#line 485 "declarative_user.m"
        break;
#line 485 "declarative_user.m"
      case (MR_Integer) 2:
#line 489 "declarative_user.m"
        {
#line 489 "declarative_user.m"
          MR_Word mdb__declarative_user__InitDeclAtom_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 489 "declarative_user.m"
          MR_Box mdb__declarative_user__V_10_10 = (MR_hl_field(MR_mktag(2), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0));
#line 489 "declarative_user.m"
          MR_Word mdb__declarative_user__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 2)));

#line 489 "declarative_user.m"
          *mdb__declarative_user__HeadVar__2_2 = (MR_Word) mdb__declarative_user__InitDeclAtom_11;
#line 489 "declarative_user.m"
          *mdb__declarative_user__HeadVar__3_3 = *mdb__declarative_user__HeadVar__2_2;
#line 489 "declarative_user.m"
        }
#line 485 "declarative_user.m"
        break;
#line 485 "declarative_user.m"
    }
#line 485 "declarative_user.m"
  }
#line 482 "declarative_user.m"
}

#line 452 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_113_117_101_115_116_105_111_110_95_112_114_111_109_112_116_95_95_91_49_93_95_48_2_p_0(
#line 452 "declarative_user.m"
  MR_Word mdb__declarative_user__UserQuestion_3,
#line 452 "declarative_user.m"
  MR_String * mdb__declarative_user__Prompt_4)
#line 452 "declarative_user.m"
{
#line 458 "declarative_user.m"
  {
#line 458 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;

#line 458 "declarative_user.m"
    if (((MR_tag((MR_Word) mdb__declarative_user__UserQuestion_3)) == (MR_mktag((MR_Integer) 0))))
#line 456 "declarative_user.m"
      {
#line 456 "declarative_user.m"
        MR_Word mdb__declarative_user__Question_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__UserQuestion_3, (MR_Integer) 0)));

#line 467 "declarative_user.m"
#line 467 "declarative_user.m"
        switch (MR_tag((MR_Word) mdb__declarative_user__Question_5)) {
#line 467 "declarative_user.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 467 "declarative_user.m"
          case (MR_Integer) 0:
#line 467 "declarative_user.m"
            *mdb__declarative_user__Prompt_4 = (MR_String) "Valid\? ";
#line 467 "declarative_user.m"
            break;
#line 467 "declarative_user.m"
          case (MR_Integer) 1:
#line 467 "declarative_user.m"
            {
#line 467 "declarative_user.m"
              MR_Word mdb__declarative_user__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Question_5, (MR_Integer) 2)));
#line 468 "declarative_user.m"
              MR_Word mdb__declarative_user__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Question_5, (MR_Integer) 1)));
#line 468 "declarative_user.m"
              MR_Box mdb__declarative_user__V_27_27 = (MR_hl_field(MR_mktag(1), mdb__declarative_user__Question_5, (MR_Integer) 0));

#line 467 "declarative_user.m"
              if ((mdb__declarative_user__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 469 "declarative_user.m"
                *mdb__declarative_user__Prompt_4 = (MR_String) "Unsatisfiable\? ";
#line 467 "declarative_user.m"
              else
#line 468 "declarative_user.m"
                *mdb__declarative_user__Prompt_4 = (MR_String) "Complete\? ";
#line 467 "declarative_user.m"
            }
#line 467 "declarative_user.m"
            break;
#line 467 "declarative_user.m"
          case (MR_Integer) 2:
#line 470 "declarative_user.m"
            *mdb__declarative_user__Prompt_4 = (MR_String) "Expected\? ";
#line 467 "declarative_user.m"
            break;
#line 467 "declarative_user.m"
        }
#line 456 "declarative_user.m"
      }
#line 458 "declarative_user.m"
    else
#line 459 "declarative_user.m"
      {
#line 459 "declarative_user.m"
        MR_Word mdb__declarative_user__DefaultTruth_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__UserQuestion_3, (MR_Integer) 1)));
#line 459 "declarative_user.m"
        MR_String mdb__declarative_user__QuestionPrompt_7;
#line 459 "declarative_user.m"
        MR_String mdb__declarative_user__DefaultPrompt_8;
#line 459 "declarative_user.m"
        MR_Word mdb__declarative_user__Question_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__UserQuestion_3, (MR_Integer) 0)));

#line 467 "declarative_user.m"
#line 467 "declarative_user.m"
        switch (MR_tag((MR_Word) mdb__declarative_user__Question_9)) {
#line 467 "declarative_user.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 467 "declarative_user.m"
          case (MR_Integer) 0:
#line 467 "declarative_user.m"
            mdb__declarative_user__QuestionPrompt_7 = (MR_String) "Valid\? ";
#line 467 "declarative_user.m"
            break;
#line 467 "declarative_user.m"
          case (MR_Integer) 1:
#line 467 "declarative_user.m"
            {
#line 467 "declarative_user.m"
              MR_Word mdb__declarative_user__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Question_9, (MR_Integer) 2)));
#line 468 "declarative_user.m"
              MR_Word mdb__declarative_user__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Question_9, (MR_Integer) 1)));
#line 468 "declarative_user.m"
              MR_Box mdb__declarative_user__V_44_44 = (MR_hl_field(MR_mktag(1), mdb__declarative_user__Question_9, (MR_Integer) 0));

#line 467 "declarative_user.m"
              if ((mdb__declarative_user__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 469 "declarative_user.m"
                mdb__declarative_user__QuestionPrompt_7 = (MR_String) "Unsatisfiable\? ";
#line 467 "declarative_user.m"
              else
#line 468 "declarative_user.m"
                mdb__declarative_user__QuestionPrompt_7 = (MR_String) "Complete\? ";
#line 467 "declarative_user.m"
            }
#line 467 "declarative_user.m"
            break;
#line 467 "declarative_user.m"
          case (MR_Integer) 2:
#line 470 "declarative_user.m"
            mdb__declarative_user__QuestionPrompt_7 = (MR_String) "Expected\? ";
#line 467 "declarative_user.m"
            break;
#line 467 "declarative_user.m"
        }
#line 474 "declarative_user.m"
#line 474 "declarative_user.m"
        switch (mdb__declarative_user__DefaultTruth_6) {
#line 474 "declarative_user.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 474 "declarative_user.m"
          case (MR_Integer) 0:
#line 474 "declarative_user.m"
            mdb__declarative_user__DefaultPrompt_8 = (MR_String) "[yes] ";
#line 474 "declarative_user.m"
            break;
#line 474 "declarative_user.m"
          case (MR_Integer) 1:
#line 475 "declarative_user.m"
            mdb__declarative_user__DefaultPrompt_8 = (MR_String) "[no] ";
#line 474 "declarative_user.m"
            break;
#line 474 "declarative_user.m"
          case (MR_Integer) 2:
#line 476 "declarative_user.m"
            mdb__declarative_user__DefaultPrompt_8 = (MR_String) "[inadmissible] ";
#line 474 "declarative_user.m"
            break;
#line 474 "declarative_user.m"
        }
#line 462 "declarative_user.m"
        {
#line 462 "declarative_user.m"
          *mdb__declarative_user__Prompt_4 = mercury__string__f_43_43_2_f_0(mdb__declarative_user__QuestionPrompt_7, mdb__declarative_user__DefaultPrompt_8);
        }
#line 459 "declarative_user.m"
      }
#line 458 "declarative_user.m"
  }
#line 452 "declarative_user.m"
}

#line 447 "declarative_user.m"
static MR_Word MR_CALL 
mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(
#line 447 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1)
#line 447 "declarative_user.m"
{
#line 449 "declarative_user.m"
  {
#line 449 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 449 "declarative_user.m"
    MR_Word mdb__declarative_user__Q_2;

#line 449 "declarative_user.m"
    if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 449 "declarative_user.m"
      mdb__declarative_user__Q_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
#line 449 "declarative_user.m"
    else
#line 450 "declarative_user.m"
      {
#line 450 "declarative_user.m"
        MR_Word mdb__declarative_user__V_5_5;

#line 450 "declarative_user.m"
        mdb__declarative_user__Q_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
#line 450 "declarative_user.m"
        mdb__declarative_user__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 450 "declarative_user.m"
      }
#line 449 "declarative_user.m"
    return mdb__declarative_user__Q_2;
#line 449 "declarative_user.m"
  }
#line 447 "declarative_user.m"
}

#line 716 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__IntroducedFrom__pred__browse_xml_atom__716__1_2_p_0(
#line 716 "declarative_user.m"
  MR_Word mdb__declarative_user__PredOrFunc_15,
#line 716 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_22)
#line 716 "declarative_user.m"
{
#line 716 "declarative_user.m"
  {
#line 716 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded = (mdb__declarative_user__PredOrFunc_15 == mdb__declarative_user__HeadVar__2_22);

#line 716 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 716 "declarative_user.m"
  }
#line 716 "declarative_user.m"
}

#line 697 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__IntroducedFrom__pred__browse_atom__697__1_2_p_0(
#line 697 "declarative_user.m"
  MR_Word mdb__declarative_user__PredOrFunc_20,
#line 697 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_31)
#line 697 "declarative_user.m"
{
#line 697 "declarative_user.m"
  {
#line 697 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded = (mdb__declarative_user__PredOrFunc_20 == mdb__declarative_user__HeadVar__2_31);

#line 697 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 697 "declarative_user.m"
  }
#line 697 "declarative_user.m"
}

#line 199 "declarative_user.m"
void MR_CALL 
mdb__declarative_user____Compare____user_state_0_0(
#line 199 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__1_1,
#line 199 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_2,
#line 199 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__3_3)
#line 199 "declarative_user.m"
{
#line 199 "declarative_user.m"
  {
#line 199 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 199 "declarative_user.m"
    MR_Integer mdb__declarative_user__CastX_21 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;
#line 199 "declarative_user.m"
    MR_Integer mdb__declarative_user__CastY_22 = (MR_Integer) mdb__declarative_user__HeadVar__3_3;

#line 199 "declarative_user.m"
    mdb__declarative_user__succeeded = (mdb__declarative_user__CastX_21 == mdb__declarative_user__CastY_22);
#line 199 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 4244 "mdb.declarative_user.c"
      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 0;
#line 199 "declarative_user.m"
    else
#line 199 "declarative_user.m"
      {
#line 199 "declarative_user.m"
        MR_Word mdb__declarative_user__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));
#line 199 "declarative_user.m"
        MR_Word mdb__declarative_user__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 199 "declarative_user.m"
        MR_Word mdb__declarative_user__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 2)));
#line 199 "declarative_user.m"
        MR_Word mdb__declarative_user__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 3)));
#line 199 "declarative_user.m"
        MR_Word mdb__declarative_user__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 4)));
#line 199 "declarative_user.m"
        MR_Word mdb__declarative_user__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 5)));
#line 199 "declarative_user.m"
        MR_Word mdb__declarative_user__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)));
#line 199 "declarative_user.m"
        MR_Word mdb__declarative_user__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));
#line 199 "declarative_user.m"
        MR_Word mdb__declarative_user__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 2)));
#line 199 "declarative_user.m"
        MR_Word mdb__declarative_user__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 3)));
#line 199 "declarative_user.m"
        MR_Word mdb__declarative_user__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 4)));
#line 199 "declarative_user.m"
        MR_Word mdb__declarative_user__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 5)));
#line 199 "declarative_user.m"
        MR_Word mdb__declarative_user__V_16_16;

#line 199 "declarative_user.m"
        {
#line 199 "declarative_user.m"
          mercury__io____Compare____input_stream_0_0(&mdb__declarative_user__V_16_16, mdb__declarative_user__V_4_4, mdb__declarative_user__V_10_10);
        }
#line 4282 "mdb.declarative_user.c"
        mdb__declarative_user__succeeded = (mdb__declarative_user__V_16_16 == (MR_Integer) 0);
#line 199 "declarative_user.m"
        mdb__declarative_user__succeeded = !(mdb__declarative_user__succeeded);
#line 199 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 199 "declarative_user.m"
          *mdb__declarative_user__HeadVar__1_1 = mdb__declarative_user__V_16_16;
#line 199 "declarative_user.m"
        else
#line 199 "declarative_user.m"
          {
#line 199 "declarative_user.m"
            MR_Word mdb__declarative_user__V_17_17;

#line 199 "declarative_user.m"
            {
#line 199 "declarative_user.m"
              mercury__io____Compare____output_stream_0_0(&mdb__declarative_user__V_17_17, mdb__declarative_user__V_5_5, mdb__declarative_user__V_11_11);
            }
#line 4302 "mdb.declarative_user.c"
            mdb__declarative_user__succeeded = (mdb__declarative_user__V_17_17 == (MR_Integer) 0);
#line 199 "declarative_user.m"
            mdb__declarative_user__succeeded = !(mdb__declarative_user__succeeded);
#line 199 "declarative_user.m"
            if (mdb__declarative_user__succeeded)
#line 199 "declarative_user.m"
              *mdb__declarative_user__HeadVar__1_1 = mdb__declarative_user__V_17_17;
#line 199 "declarative_user.m"
            else
#line 199 "declarative_user.m"
              {
#line 199 "declarative_user.m"
                MR_Word mdb__declarative_user__V_18_18;

#line 199 "declarative_user.m"
                {
#line 199 "declarative_user.m"
                  mdb__browser_info____Compare____browser_persistent_state_0_0(&mdb__declarative_user__V_18_18, mdb__declarative_user__V_6_6, mdb__declarative_user__V_12_12);
                }
#line 4322 "mdb.declarative_user.c"
                mdb__declarative_user__succeeded = (mdb__declarative_user__V_18_18 == (MR_Integer) 0);
#line 199 "declarative_user.m"
                mdb__declarative_user__succeeded = !(mdb__declarative_user__succeeded);
#line 199 "declarative_user.m"
                if (mdb__declarative_user__succeeded)
#line 199 "declarative_user.m"
                  *mdb__declarative_user__HeadVar__1_1 = mdb__declarative_user__V_18_18;
#line 199 "declarative_user.m"
                else
#line 199 "declarative_user.m"
                  {
#line 199 "declarative_user.m"
                    MR_Word mdb__declarative_user__V_19_19;
#line 199 "declarative_user.m"
                    MR_Integer mdb__declarative_user__V_29_29 = (MR_Integer) mdb__declarative_user__V_7_7;
#line 199 "declarative_user.m"
                    MR_Integer mdb__declarative_user__V_30_30 = (MR_Integer) mdb__declarative_user__V_13_13;

#line 199 "declarative_user.m"
                    {
#line 199 "declarative_user.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_user__V_19_19, mdb__declarative_user__V_29_29, mdb__declarative_user__V_30_30);
                    }
#line 4346 "mdb.declarative_user.c"
                    mdb__declarative_user__succeeded = (mdb__declarative_user__V_19_19 == (MR_Integer) 0);
#line 199 "declarative_user.m"
                    mdb__declarative_user__succeeded = !(mdb__declarative_user__succeeded);
#line 199 "declarative_user.m"
                    if (mdb__declarative_user__succeeded)
#line 199 "declarative_user.m"
                      *mdb__declarative_user__HeadVar__1_1 = mdb__declarative_user__V_19_19;
#line 199 "declarative_user.m"
                    else
#line 199 "declarative_user.m"
                      {
#line 199 "declarative_user.m"
                        MR_Word mdb__declarative_user__V_20_20;

#line 199 "declarative_user.m"
                        {
#line 199 "declarative_user.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_user_scalar_common_1[2], &mdb__declarative_user__V_20_20, ((MR_Box) (mdb__declarative_user__V_8_8)), ((MR_Box) (mdb__declarative_user__V_14_14)));
                        }
#line 4366 "mdb.declarative_user.c"
                        mdb__declarative_user__succeeded = (mdb__declarative_user__V_20_20 == (MR_Integer) 0);
#line 199 "declarative_user.m"
                        mdb__declarative_user__succeeded = !(mdb__declarative_user__succeeded);
#line 199 "declarative_user.m"
                        if (mdb__declarative_user__succeeded)
#line 199 "declarative_user.m"
                          *mdb__declarative_user__HeadVar__1_1 = mdb__declarative_user__V_20_20;
#line 199 "declarative_user.m"
                        else
#line 199 "declarative_user.m"
                          {
#line 199 "declarative_user.m"
                            MR_Integer mdb__declarative_user__V_31_31 = (MR_Integer) mdb__declarative_user__V_9_9;
#line 199 "declarative_user.m"
                            MR_Integer mdb__declarative_user__V_32_32 = (MR_Integer) mdb__declarative_user__V_15_15;

#line 199 "declarative_user.m"
                            {
#line 199 "declarative_user.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_user__HeadVar__1_1, mdb__declarative_user__V_31_31, mdb__declarative_user__V_32_32);
                            }
#line 199 "declarative_user.m"
                          }
#line 199 "declarative_user.m"
                      }
#line 199 "declarative_user.m"
                  }
#line 199 "declarative_user.m"
              }
#line 199 "declarative_user.m"
          }
#line 199 "declarative_user.m"
      }
#line 199 "declarative_user.m"
  }
#line 199 "declarative_user.m"
}

#line 199 "declarative_user.m"
MR_bool MR_CALL 
mdb__declarative_user____Unify____user_state_0_0(
#line 199 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 199 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_2)
#line 199 "declarative_user.m"
{
#line 199 "declarative_user.m"
  {
#line 199 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 199 "declarative_user.m"
    MR_Integer mdb__declarative_user__CastX_15 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 199 "declarative_user.m"
    MR_Integer mdb__declarative_user__CastY_16 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 199 "declarative_user.m"
    mdb__declarative_user__succeeded = (mdb__declarative_user__CastX_15 == mdb__declarative_user__CastY_16);
#line 199 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 199 "declarative_user.m"
      mdb__declarative_user__succeeded = MR_TRUE;
#line 199 "declarative_user.m"
    else
#line 199 "declarative_user.m"
      {
#line 199 "declarative_user.m"
        MR_Word mdb__declarative_user__TypeInfo_20_20;
#line 199 "declarative_user.m"
        MR_Word mdb__declarative_user__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
#line 199 "declarative_user.m"
        MR_Word mdb__declarative_user__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 199 "declarative_user.m"
        MR_Word mdb__declarative_user__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 2)));
#line 199 "declarative_user.m"
        MR_Word mdb__declarative_user__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 3)));
#line 199 "declarative_user.m"
        MR_Word mdb__declarative_user__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 4)));
#line 199 "declarative_user.m"
        MR_Word mdb__declarative_user__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 5)));
#line 199 "declarative_user.m"
        MR_Word mdb__declarative_user__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));
#line 199 "declarative_user.m"
        MR_Word mdb__declarative_user__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 199 "declarative_user.m"
        MR_Word mdb__declarative_user__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 2)));
#line 199 "declarative_user.m"
        MR_Word mdb__declarative_user__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 3)));
#line 199 "declarative_user.m"
        MR_Word mdb__declarative_user__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 4)));
#line 199 "declarative_user.m"
        MR_Word mdb__declarative_user__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 5)));

#line 4460 "mdb.declarative_user.c"
        {
#line 4462 "mdb.declarative_user.c"
          mdb__declarative_user__succeeded = mercury__io____Unify____input_stream_0_0(mdb__declarative_user__V_3_3, mdb__declarative_user__V_9_9);
        }
#line 199 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 199 "declarative_user.m"
          {
#line 4469 "mdb.declarative_user.c"
            {
#line 4471 "mdb.declarative_user.c"
              mdb__declarative_user__succeeded = mercury__io____Unify____output_stream_0_0(mdb__declarative_user__V_4_4, mdb__declarative_user__V_10_10);
            }
#line 199 "declarative_user.m"
            if (mdb__declarative_user__succeeded)
#line 199 "declarative_user.m"
              {
#line 4478 "mdb.declarative_user.c"
                {
#line 4480 "mdb.declarative_user.c"
                  mdb__declarative_user__succeeded = mdb__browser_info____Unify____browser_persistent_state_0_0(mdb__declarative_user__V_5_5, mdb__declarative_user__V_11_11);
                }
#line 199 "declarative_user.m"
                if (mdb__declarative_user__succeeded)
#line 199 "declarative_user.m"
                  {
#line 4487 "mdb.declarative_user.c"
                    mdb__declarative_user__succeeded = (mdb__declarative_user__V_6_6 == mdb__declarative_user__V_12_12);
#line 199 "declarative_user.m"
                    if (mdb__declarative_user__succeeded)
#line 199 "declarative_user.m"
                      {
#line 4493 "mdb.declarative_user.c"
                        mdb__declarative_user__TypeInfo_20_20 = (MR_Word) &mdb__declarative_user_scalar_common_1[2];
#line 4495 "mdb.declarative_user.c"
                        {
#line 4497 "mdb.declarative_user.c"
                          mdb__declarative_user__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_user__TypeInfo_20_20, ((MR_Box) (mdb__declarative_user__V_7_7)), ((MR_Box) (mdb__declarative_user__V_13_13)));
                        }
#line 199 "declarative_user.m"
                        if (mdb__declarative_user__succeeded)
#line 4502 "mdb.declarative_user.c"
                          mdb__declarative_user__succeeded = (mdb__declarative_user__V_8_8 == mdb__declarative_user__V_14_14);
#line 199 "declarative_user.m"
                      }
#line 199 "declarative_user.m"
                  }
#line 199 "declarative_user.m"
              }
#line 199 "declarative_user.m"
          }
#line 199 "declarative_user.m"
      }
#line 199 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 199 "declarative_user.m"
  }
#line 199 "declarative_user.m"
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
#line 4560 "mdb.declarative_user.c"
  {
#line 4562 "mdb.declarative_user.c"
    MR_bool mdb__declarative_user__succeeded = (mdb__declarative_user__HeadVar__2_1 == mdb__declarative_user__HeadVar__2_2);

#line 4565 "mdb.declarative_user.c"
    return mdb__declarative_user__succeeded;
#line 4567 "mdb.declarative_user.c"
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
#line 4598 "mdb.declarative_user.c"
      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 0;
#line 36 "declarative_user.m"
    else
#line 36 "declarative_user.m"
#line 36 "declarative_user.m"
      switch (MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) {
#line 36 "declarative_user.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 36 "declarative_user.m"
        case (MR_Integer) 0:
#line 36 "declarative_user.m"
#line 36 "declarative_user.m"
          switch (MR_unmkbody(mdb__declarative_user__HeadVar__2_2)) {
#line 36 "declarative_user.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 36 "declarative_user.m"
            case (MR_Integer) 0:
#line 36 "declarative_user.m"
#line 36 "declarative_user.m"
              switch (MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) {
#line 36 "declarative_user.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 36 "declarative_user.m"
                case (MR_Integer) 0:
#line 36 "declarative_user.m"
#line 36 "declarative_user.m"
                  switch (MR_unmkbody(mdb__declarative_user__HeadVar__3_3)) {
#line 36 "declarative_user.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 36 "declarative_user.m"
                    case (MR_Integer) 0:
#line 36 "declarative_user.m"
                      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 0;
#line 36 "declarative_user.m"
                      break;
#line 36 "declarative_user.m"
                    case (MR_Integer) 1:
#line 36 "declarative_user.m"
                      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                      break;
#line 36 "declarative_user.m"
                  }
#line 36 "declarative_user.m"
                  break;
#line 36 "declarative_user.m"
                case (MR_Integer) 1:
#line 4646 "mdb.declarative_user.c"
                  *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                  break;
#line 36 "declarative_user.m"
                case (MR_Integer) 2:
#line 4652 "mdb.declarative_user.c"
                  *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                  break;
#line 36 "declarative_user.m"
                case (MR_Integer) 3:
#line 36 "declarative_user.m"
#line 36 "declarative_user.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) {
#line 36 "declarative_user.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 36 "declarative_user.m"
                    case (MR_Integer) 0:
#line 4665 "mdb.declarative_user.c"
                      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                      break;
#line 36 "declarative_user.m"
                    case (MR_Integer) 1:
#line 4671 "mdb.declarative_user.c"
                      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                      break;
#line 36 "declarative_user.m"
                    case (MR_Integer) 2:
#line 4677 "mdb.declarative_user.c"
                      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                      break;
#line 36 "declarative_user.m"
                    case (MR_Integer) 3:
#line 4683 "mdb.declarative_user.c"
                      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                      break;
#line 36 "declarative_user.m"
                  }
#line 36 "declarative_user.m"
                  break;
#line 36 "declarative_user.m"
              }
#line 36 "declarative_user.m"
              break;
#line 36 "declarative_user.m"
            case (MR_Integer) 1:
#line 36 "declarative_user.m"
#line 36 "declarative_user.m"
              switch (MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) {
#line 36 "declarative_user.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 36 "declarative_user.m"
                case (MR_Integer) 0:
#line 36 "declarative_user.m"
#line 36 "declarative_user.m"
                  switch (MR_unmkbody(mdb__declarative_user__HeadVar__3_3)) {
#line 36 "declarative_user.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 36 "declarative_user.m"
                    case (MR_Integer) 0:
#line 36 "declarative_user.m"
                      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                      break;
#line 36 "declarative_user.m"
                    case (MR_Integer) 1:
#line 36 "declarative_user.m"
                      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 0;
#line 36 "declarative_user.m"
                      break;
#line 36 "declarative_user.m"
                  }
#line 36 "declarative_user.m"
                  break;
#line 36 "declarative_user.m"
                case (MR_Integer) 1:
#line 4727 "mdb.declarative_user.c"
                  *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                  break;
#line 36 "declarative_user.m"
                case (MR_Integer) 2:
#line 4733 "mdb.declarative_user.c"
                  *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                  break;
#line 36 "declarative_user.m"
                case (MR_Integer) 3:
#line 36 "declarative_user.m"
#line 36 "declarative_user.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) {
#line 36 "declarative_user.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 36 "declarative_user.m"
                    case (MR_Integer) 0:
#line 4746 "mdb.declarative_user.c"
                      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                      break;
#line 36 "declarative_user.m"
                    case (MR_Integer) 1:
#line 4752 "mdb.declarative_user.c"
                      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                      break;
#line 36 "declarative_user.m"
                    case (MR_Integer) 2:
#line 4758 "mdb.declarative_user.c"
                      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                      break;
#line 36 "declarative_user.m"
                    case (MR_Integer) 3:
#line 4764 "mdb.declarative_user.c"
                      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                      break;
#line 36 "declarative_user.m"
                  }
#line 36 "declarative_user.m"
                  break;
#line 36 "declarative_user.m"
              }
#line 36 "declarative_user.m"
              break;
#line 36 "declarative_user.m"
          }
#line 36 "declarative_user.m"
          break;
#line 36 "declarative_user.m"
        case (MR_Integer) 1:
#line 36 "declarative_user.m"
          {
#line 36 "declarative_user.m"
            MR_Word mdb__declarative_user__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 36 "declarative_user.m"
            MR_Word mdb__declarative_user__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));

#line 36 "declarative_user.m"
#line 36 "declarative_user.m"
            switch (MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) {
#line 36 "declarative_user.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 36 "declarative_user.m"
              case (MR_Integer) 0:
#line 36 "declarative_user.m"
#line 36 "declarative_user.m"
                switch (MR_unmkbody(mdb__declarative_user__HeadVar__3_3)) {
#line 36 "declarative_user.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 36 "declarative_user.m"
                  case (MR_Integer) 0:
#line 4803 "mdb.declarative_user.c"
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                    break;
#line 36 "declarative_user.m"
                  case (MR_Integer) 1:
#line 4809 "mdb.declarative_user.c"
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                    break;
#line 36 "declarative_user.m"
                }
#line 36 "declarative_user.m"
                break;
#line 36 "declarative_user.m"
              case (MR_Integer) 1:
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
#line 4833 "mdb.declarative_user.c"
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
                    }
#line 36 "declarative_user.m"
                }
#line 36 "declarative_user.m"
                break;
#line 36 "declarative_user.m"
              case (MR_Integer) 2:
#line 4854 "mdb.declarative_user.c"
                *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                break;
#line 36 "declarative_user.m"
              case (MR_Integer) 3:
#line 36 "declarative_user.m"
#line 36 "declarative_user.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) {
#line 36 "declarative_user.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 36 "declarative_user.m"
                  case (MR_Integer) 0:
#line 4867 "mdb.declarative_user.c"
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                    break;
#line 36 "declarative_user.m"
                  case (MR_Integer) 1:
#line 4873 "mdb.declarative_user.c"
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                    break;
#line 36 "declarative_user.m"
                  case (MR_Integer) 2:
#line 4879 "mdb.declarative_user.c"
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                    break;
#line 36 "declarative_user.m"
                  case (MR_Integer) 3:
#line 4885 "mdb.declarative_user.c"
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                    break;
#line 36 "declarative_user.m"
                }
#line 36 "declarative_user.m"
                break;
#line 36 "declarative_user.m"
            }
#line 36 "declarative_user.m"
          }
#line 36 "declarative_user.m"
          break;
#line 36 "declarative_user.m"
        case (MR_Integer) 2:
#line 36 "declarative_user.m"
          {
#line 36 "declarative_user.m"
            MR_Word mdb__declarative_user__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));

#line 36 "declarative_user.m"
#line 36 "declarative_user.m"
            switch (MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) {
#line 36 "declarative_user.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 36 "declarative_user.m"
              case (MR_Integer) 0:
#line 36 "declarative_user.m"
#line 36 "declarative_user.m"
                switch (MR_unmkbody(mdb__declarative_user__HeadVar__3_3)) {
#line 36 "declarative_user.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 36 "declarative_user.m"
                  case (MR_Integer) 0:
#line 4920 "mdb.declarative_user.c"
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                    break;
#line 36 "declarative_user.m"
                  case (MR_Integer) 1:
#line 4926 "mdb.declarative_user.c"
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                    break;
#line 36 "declarative_user.m"
                }
#line 36 "declarative_user.m"
                break;
#line 36 "declarative_user.m"
              case (MR_Integer) 1:
#line 4936 "mdb.declarative_user.c"
                *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                break;
#line 36 "declarative_user.m"
              case (MR_Integer) 2:
#line 36 "declarative_user.m"
                {
#line 36 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)));

#line 36 "declarative_user.m"
                  {
#line 36 "declarative_user.m"
                    mdb__declarative_debugger____Compare____decl_question_1_0(mdb__declarative_user__TypeInfo_for_T_119, mdb__declarative_user__HeadVar__1_1, mdb__declarative_user__V_136_136, mdb__declarative_user__V_32_32);
                  }
#line 36 "declarative_user.m"
                }
#line 36 "declarative_user.m"
                break;
#line 36 "declarative_user.m"
              case (MR_Integer) 3:
#line 36 "declarative_user.m"
#line 36 "declarative_user.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) {
#line 36 "declarative_user.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 36 "declarative_user.m"
                  case (MR_Integer) 0:
#line 4965 "mdb.declarative_user.c"
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                    break;
#line 36 "declarative_user.m"
                  case (MR_Integer) 1:
#line 4971 "mdb.declarative_user.c"
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                    break;
#line 36 "declarative_user.m"
                  case (MR_Integer) 2:
#line 4977 "mdb.declarative_user.c"
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                    break;
#line 36 "declarative_user.m"
                  case (MR_Integer) 3:
#line 4983 "mdb.declarative_user.c"
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                    break;
#line 36 "declarative_user.m"
                }
#line 36 "declarative_user.m"
                break;
#line 36 "declarative_user.m"
            }
#line 36 "declarative_user.m"
          }
#line 36 "declarative_user.m"
          break;
#line 36 "declarative_user.m"
        case (MR_Integer) 3:
#line 36 "declarative_user.m"
#line 36 "declarative_user.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) {
#line 36 "declarative_user.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 36 "declarative_user.m"
            case (MR_Integer) 0:
#line 36 "declarative_user.m"
              {
#line 36 "declarative_user.m"
                MR_Word mdb__declarative_user__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));

#line 36 "declarative_user.m"
#line 36 "declarative_user.m"
                switch (MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) {
#line 36 "declarative_user.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 36 "declarative_user.m"
                  case (MR_Integer) 0:
#line 36 "declarative_user.m"
#line 36 "declarative_user.m"
                    switch (MR_unmkbody(mdb__declarative_user__HeadVar__3_3)) {
#line 36 "declarative_user.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 36 "declarative_user.m"
                      case (MR_Integer) 0:
#line 5025 "mdb.declarative_user.c"
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                        break;
#line 36 "declarative_user.m"
                      case (MR_Integer) 1:
#line 5031 "mdb.declarative_user.c"
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                        break;
#line 36 "declarative_user.m"
                    }
#line 36 "declarative_user.m"
                    break;
#line 36 "declarative_user.m"
                  case (MR_Integer) 1:
#line 5041 "mdb.declarative_user.c"
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                    break;
#line 36 "declarative_user.m"
                  case (MR_Integer) 2:
#line 5047 "mdb.declarative_user.c"
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                    break;
#line 36 "declarative_user.m"
                  case (MR_Integer) 3:
#line 36 "declarative_user.m"
#line 36 "declarative_user.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) {
#line 36 "declarative_user.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 36 "declarative_user.m"
                      case (MR_Integer) 0:
#line 36 "declarative_user.m"
                        {
#line 36 "declarative_user.m"
                          MR_Word mdb__declarative_user__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));

#line 36 "declarative_user.m"
                          {
#line 36 "declarative_user.m"
                            mdb__declarative_debugger____Compare____decl_question_1_0(mdb__declarative_user__TypeInfo_for_T_119, mdb__declarative_user__HeadVar__1_1, mdb__declarative_user__V_135_135, mdb__declarative_user__V_49_49);
                          }
#line 36 "declarative_user.m"
                        }
#line 36 "declarative_user.m"
                        break;
#line 36 "declarative_user.m"
                      case (MR_Integer) 1:
#line 5076 "mdb.declarative_user.c"
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                        break;
#line 36 "declarative_user.m"
                      case (MR_Integer) 2:
#line 5082 "mdb.declarative_user.c"
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                        break;
#line 36 "declarative_user.m"
                      case (MR_Integer) 3:
#line 5088 "mdb.declarative_user.c"
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                        break;
#line 36 "declarative_user.m"
                    }
#line 36 "declarative_user.m"
                    break;
#line 36 "declarative_user.m"
                }
#line 36 "declarative_user.m"
              }
#line 36 "declarative_user.m"
              break;
#line 36 "declarative_user.m"
            case (MR_Integer) 1:
#line 36 "declarative_user.m"
              {
#line 36 "declarative_user.m"
                MR_Word mdb__declarative_user__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));

#line 36 "declarative_user.m"
#line 36 "declarative_user.m"
                switch (MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) {
#line 36 "declarative_user.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 36 "declarative_user.m"
                  case (MR_Integer) 0:
#line 36 "declarative_user.m"
#line 36 "declarative_user.m"
                    switch (MR_unmkbody(mdb__declarative_user__HeadVar__3_3)) {
#line 36 "declarative_user.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 36 "declarative_user.m"
                      case (MR_Integer) 0:
#line 5123 "mdb.declarative_user.c"
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                        break;
#line 36 "declarative_user.m"
                      case (MR_Integer) 1:
#line 5129 "mdb.declarative_user.c"
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                        break;
#line 36 "declarative_user.m"
                    }
#line 36 "declarative_user.m"
                    break;
#line 36 "declarative_user.m"
                  case (MR_Integer) 1:
#line 5139 "mdb.declarative_user.c"
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                    break;
#line 36 "declarative_user.m"
                  case (MR_Integer) 2:
#line 5145 "mdb.declarative_user.c"
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                    break;
#line 36 "declarative_user.m"
                  case (MR_Integer) 3:
#line 36 "declarative_user.m"
#line 36 "declarative_user.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) {
#line 36 "declarative_user.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 36 "declarative_user.m"
                      case (MR_Integer) 0:
#line 5158 "mdb.declarative_user.c"
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                        break;
#line 36 "declarative_user.m"
                      case (MR_Integer) 1:
#line 36 "declarative_user.m"
                        {
#line 36 "declarative_user.m"
                          MR_Word mdb__declarative_user__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));

#line 36 "declarative_user.m"
                          {
#line 36 "declarative_user.m"
                            mercury__io____Compare____output_stream_0_0(mdb__declarative_user__HeadVar__1_1, mdb__declarative_user__V_134_134, mdb__declarative_user__V_66_66);
                          }
#line 36 "declarative_user.m"
                        }
#line 36 "declarative_user.m"
                        break;
#line 36 "declarative_user.m"
                      case (MR_Integer) 2:
#line 5180 "mdb.declarative_user.c"
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                        break;
#line 36 "declarative_user.m"
                      case (MR_Integer) 3:
#line 5186 "mdb.declarative_user.c"
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                        break;
#line 36 "declarative_user.m"
                    }
#line 36 "declarative_user.m"
                    break;
#line 36 "declarative_user.m"
                }
#line 36 "declarative_user.m"
              }
#line 36 "declarative_user.m"
              break;
#line 36 "declarative_user.m"
            case (MR_Integer) 2:
#line 36 "declarative_user.m"
              {
#line 36 "declarative_user.m"
                MR_Word mdb__declarative_user__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));

#line 36 "declarative_user.m"
#line 36 "declarative_user.m"
                switch (MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) {
#line 36 "declarative_user.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 36 "declarative_user.m"
                  case (MR_Integer) 0:
#line 36 "declarative_user.m"
#line 36 "declarative_user.m"
                    switch (MR_unmkbody(mdb__declarative_user__HeadVar__3_3)) {
#line 36 "declarative_user.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 36 "declarative_user.m"
                      case (MR_Integer) 0:
#line 5221 "mdb.declarative_user.c"
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                        break;
#line 36 "declarative_user.m"
                      case (MR_Integer) 1:
#line 5227 "mdb.declarative_user.c"
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                        break;
#line 36 "declarative_user.m"
                    }
#line 36 "declarative_user.m"
                    break;
#line 36 "declarative_user.m"
                  case (MR_Integer) 1:
#line 5237 "mdb.declarative_user.c"
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                    break;
#line 36 "declarative_user.m"
                  case (MR_Integer) 2:
#line 5243 "mdb.declarative_user.c"
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                    break;
#line 36 "declarative_user.m"
                  case (MR_Integer) 3:
#line 36 "declarative_user.m"
#line 36 "declarative_user.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) {
#line 36 "declarative_user.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 36 "declarative_user.m"
                      case (MR_Integer) 0:
#line 5256 "mdb.declarative_user.c"
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                        break;
#line 36 "declarative_user.m"
                      case (MR_Integer) 1:
#line 5262 "mdb.declarative_user.c"
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                        break;
#line 36 "declarative_user.m"
                      case (MR_Integer) 2:
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
                          }
#line 36 "declarative_user.m"
                        }
#line 36 "declarative_user.m"
                        break;
#line 36 "declarative_user.m"
                      case (MR_Integer) 3:
#line 5288 "mdb.declarative_user.c"
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                        break;
#line 36 "declarative_user.m"
                    }
#line 36 "declarative_user.m"
                    break;
#line 36 "declarative_user.m"
                }
#line 36 "declarative_user.m"
              }
#line 36 "declarative_user.m"
              break;
#line 36 "declarative_user.m"
            case (MR_Integer) 3:
#line 36 "declarative_user.m"
              {
#line 36 "declarative_user.m"
                MR_Box mdb__declarative_user__V_133_133 = (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1));

#line 36 "declarative_user.m"
#line 36 "declarative_user.m"
                switch (MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) {
#line 36 "declarative_user.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 36 "declarative_user.m"
                  case (MR_Integer) 0:
#line 36 "declarative_user.m"
#line 36 "declarative_user.m"
                    switch (MR_unmkbody(mdb__declarative_user__HeadVar__3_3)) {
#line 36 "declarative_user.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 36 "declarative_user.m"
                      case (MR_Integer) 0:
#line 5323 "mdb.declarative_user.c"
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                        break;
#line 36 "declarative_user.m"
                      case (MR_Integer) 1:
#line 5329 "mdb.declarative_user.c"
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "declarative_user.m"
                        break;
#line 36 "declarative_user.m"
                    }
#line 36 "declarative_user.m"
                    break;
#line 36 "declarative_user.m"
                  case (MR_Integer) 1:
#line 5339 "mdb.declarative_user.c"
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                    break;
#line 36 "declarative_user.m"
                  case (MR_Integer) 2:
#line 5345 "mdb.declarative_user.c"
                    *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                    break;
#line 36 "declarative_user.m"
                  case (MR_Integer) 3:
#line 36 "declarative_user.m"
#line 36 "declarative_user.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) {
#line 36 "declarative_user.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 36 "declarative_user.m"
                      case (MR_Integer) 0:
#line 5358 "mdb.declarative_user.c"
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                        break;
#line 36 "declarative_user.m"
                      case (MR_Integer) 1:
#line 5364 "mdb.declarative_user.c"
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                        break;
#line 36 "declarative_user.m"
                      case (MR_Integer) 2:
#line 5370 "mdb.declarative_user.c"
                        *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "declarative_user.m"
                        break;
#line 36 "declarative_user.m"
                      case (MR_Integer) 3:
#line 36 "declarative_user.m"
                        {
#line 36 "declarative_user.m"
                          MR_Box mdb__declarative_user__V_108_108 = (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1));

#line 36 "declarative_user.m"
                          {
#line 36 "declarative_user.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_user__TypeInfo_for_T_119, mdb__declarative_user__HeadVar__1_1, mdb__declarative_user__V_133_133, mdb__declarative_user__V_108_108);
                          }
#line 36 "declarative_user.m"
                        }
#line 36 "declarative_user.m"
                        break;
#line 36 "declarative_user.m"
                    }
#line 36 "declarative_user.m"
                    break;
#line 36 "declarative_user.m"
                }
#line 36 "declarative_user.m"
              }
#line 36 "declarative_user.m"
              break;
#line 36 "declarative_user.m"
          }
#line 36 "declarative_user.m"
          break;
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
#line 36 "declarative_user.m"
      switch (MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) {
#line 36 "declarative_user.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 36 "declarative_user.m"
        case (MR_Integer) 0:
#line 36 "declarative_user.m"
#line 36 "declarative_user.m"
          switch (MR_unmkbody(mdb__declarative_user__HeadVar__1_1)) {
#line 36 "declarative_user.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 36 "declarative_user.m"
            case (MR_Integer) 0:
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
              break;
#line 36 "declarative_user.m"
            case (MR_Integer) 1:
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
              break;
#line 36 "declarative_user.m"
          }
#line 36 "declarative_user.m"
          break;
#line 36 "declarative_user.m"
        case (MR_Integer) 1:
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
#line 5508 "mdb.declarative_user.c"
                {
#line 5510 "mdb.declarative_user.c"
                  mdb__declarative_user__succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(mdb__declarative_user__TypeInfo_for_T_23, mdb__declarative_user__V_3_3, mdb__declarative_user__V_5_5);
                }
#line 36 "declarative_user.m"
                if (mdb__declarative_user__succeeded)
#line 5515 "mdb.declarative_user.c"
                  {
#line 5517 "mdb.declarative_user.c"
                    mdb__declarative_user__succeeded = mdb__declarative_debugger____Unify____decl_answer_1_0(mdb__declarative_user__TypeInfo_for_T_23, mdb__declarative_user__V_4_4, mdb__declarative_user__V_6_6);
                  }
#line 36 "declarative_user.m"
              }
#line 36 "declarative_user.m"
          }
#line 36 "declarative_user.m"
          break;
#line 36 "declarative_user.m"
        case (MR_Integer) 2:
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
#line 5543 "mdb.declarative_user.c"
                {
#line 5545 "mdb.declarative_user.c"
                  mdb__declarative_user__succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(mdb__declarative_user__TypeInfo_for_T_23, mdb__declarative_user__V_7_7, mdb__declarative_user__V_8_8);
                }
#line 36 "declarative_user.m"
              }
#line 36 "declarative_user.m"
          }
#line 36 "declarative_user.m"
          break;
#line 36 "declarative_user.m"
        case (MR_Integer) 3:
#line 36 "declarative_user.m"
#line 36 "declarative_user.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)))) {
#line 36 "declarative_user.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 36 "declarative_user.m"
            case (MR_Integer) 0:
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
#line 5578 "mdb.declarative_user.c"
                    {
#line 5580 "mdb.declarative_user.c"
                      mdb__declarative_user__succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(mdb__declarative_user__TypeInfo_for_T_23, mdb__declarative_user__V_9_9, mdb__declarative_user__V_10_10);
                    }
#line 36 "declarative_user.m"
                  }
#line 36 "declarative_user.m"
              }
#line 36 "declarative_user.m"
              break;
#line 36 "declarative_user.m"
            case (MR_Integer) 1:
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
#line 5606 "mdb.declarative_user.c"
                    {
#line 5608 "mdb.declarative_user.c"
                      mdb__declarative_user__succeeded = mercury__io____Unify____output_stream_0_0(mdb__declarative_user__V_11_11, mdb__declarative_user__V_12_12);
                    }
#line 36 "declarative_user.m"
                  }
#line 36 "declarative_user.m"
              }
#line 36 "declarative_user.m"
              break;
#line 36 "declarative_user.m"
            case (MR_Integer) 2:
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
#line 5634 "mdb.declarative_user.c"
                    mdb__declarative_user__succeeded = (mdb__declarative_user__V_13_13 == mdb__declarative_user__V_14_14);
#line 36 "declarative_user.m"
                  }
#line 36 "declarative_user.m"
              }
#line 36 "declarative_user.m"
              break;
#line 36 "declarative_user.m"
            case (MR_Integer) 3:
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
#line 5659 "mdb.declarative_user.c"
                    {
#line 5661 "mdb.declarative_user.c"
                      mdb__declarative_user__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_user__TypeInfo_for_T_23, mdb__declarative_user__V_17_17, mdb__declarative_user__V_18_18);
                    }
#line 36 "declarative_user.m"
                  }
#line 36 "declarative_user.m"
              }
#line 36 "declarative_user.m"
              break;
#line 36 "declarative_user.m"
          }
#line 36 "declarative_user.m"
          break;
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
#line 5709 "mdb.declarative_user.c"
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
            }
#line 32 "declarative_user.m"
          }
#line 32 "declarative_user.m"
        else
#line 5736 "mdb.declarative_user.c"
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
#line 5751 "mdb.declarative_user.c"
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
#line 5769 "mdb.declarative_user.c"
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
#line 5847 "mdb.declarative_user.c"
            {
#line 5849 "mdb.declarative_user.c"
              mdb__declarative_user__succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(mdb__declarative_user__TypeInfo_for_T_11, mdb__declarative_user__V_3_3, mdb__declarative_user__V_4_4);
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
#line 5879 "mdb.declarative_user.c"
            {
#line 5881 "mdb.declarative_user.c"
              mdb__declarative_user__succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(mdb__declarative_user__TypeInfo_for_T_11, mdb__declarative_user__V_5_5, mdb__declarative_user__V_7_7);
            }
#line 32 "declarative_user.m"
            if (mdb__declarative_user__succeeded)
#line 5886 "mdb.declarative_user.c"
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

#line 133 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user____Compare____user_command_0_0(
#line 133 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__1_1,
#line 133 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_2,
#line 133 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__3_3)
#line 133 "declarative_user.m"
{
#line 133 "declarative_user.m"
  {
#line 133 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 133 "declarative_user.m"
    MR_Integer mdb__declarative_user__CastX_29 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;
#line 133 "declarative_user.m"
    MR_Integer mdb__declarative_user__CastY_30 = (MR_Integer) mdb__declarative_user__HeadVar__3_3;

#line 133 "declarative_user.m"
    mdb__declarative_user__succeeded = (mdb__declarative_user__CastX_29 == mdb__declarative_user__CastY_30);
#line 133 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 5923 "mdb.declarative_user.c"
      *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 0;
#line 133 "declarative_user.m"
    else
#line 133 "declarative_user.m"
      {
#line 133 "declarative_user.m"
        MR_Integer mdb__declarative_user__V_4_4;
#line 133 "declarative_user.m"
        MR_Integer mdb__declarative_user__V_5_5;

#line 133 "declarative_user.m"
        {
#line 133 "declarative_user.m"
          mdb__declarative_user____Index____user_command_0_0(mdb__declarative_user__HeadVar__2_2, &mdb__declarative_user__V_4_4);
        }
#line 133 "declarative_user.m"
        {
#line 133 "declarative_user.m"
          mdb__declarative_user____Index____user_command_0_0(mdb__declarative_user__HeadVar__3_3, &mdb__declarative_user__V_5_5);
        }
#line 133 "declarative_user.m"
        mdb__declarative_user__succeeded = (mdb__declarative_user__V_4_4 < mdb__declarative_user__V_5_5);
#line 133 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 5948 "mdb.declarative_user.c"
          *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 1;
#line 133 "declarative_user.m"
        else
#line 133 "declarative_user.m"
          {
#line 133 "declarative_user.m"
            mdb__declarative_user__succeeded = (mdb__declarative_user__V_4_4 > mdb__declarative_user__V_5_5);
#line 133 "declarative_user.m"
            if (mdb__declarative_user__succeeded)
#line 5958 "mdb.declarative_user.c"
              *mdb__declarative_user__HeadVar__1_1 = (MR_Integer) 2;
#line 133 "declarative_user.m"
            else
#line 133 "declarative_user.m"
              {
#line 133 "declarative_user.m"
                MR_Word mdb__declarative_user__V_6_6;

#line 133 "declarative_user.m"
#line 133 "declarative_user.m"
                switch (MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) {
#line 133 "declarative_user.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 133 "declarative_user.m"
                  case (MR_Integer) 0:
#line 133 "declarative_user.m"
#line 133 "declarative_user.m"
                    switch (MR_unmkbody(mdb__declarative_user__HeadVar__2_2)) {
#line 133 "declarative_user.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 133 "declarative_user.m"
                      case (MR_Integer) 0:
#line 133 "declarative_user.m"
                        {
#line 133 "declarative_user.m"
                          mdb__declarative_user__V_6_6 = (MR_Integer) 0;
#line 133 "declarative_user.m"
                          mdb__declarative_user__succeeded = MR_TRUE;
#line 133 "declarative_user.m"
                        }
#line 133 "declarative_user.m"
                        break;
#line 133 "declarative_user.m"
                      case (MR_Integer) 1:
#line 133 "declarative_user.m"
                        {
#line 133 "declarative_user.m"
                          mdb__declarative_user__V_6_6 = (MR_Integer) 0;
#line 133 "declarative_user.m"
                          mdb__declarative_user__succeeded = MR_TRUE;
#line 133 "declarative_user.m"
                        }
#line 133 "declarative_user.m"
                        break;
#line 133 "declarative_user.m"
                      case (MR_Integer) 2:
#line 133 "declarative_user.m"
                        {
#line 133 "declarative_user.m"
                          mdb__declarative_user__V_6_6 = (MR_Integer) 0;
#line 133 "declarative_user.m"
                          mdb__declarative_user__succeeded = MR_TRUE;
#line 133 "declarative_user.m"
                        }
#line 133 "declarative_user.m"
                        break;
#line 133 "declarative_user.m"
                      case (MR_Integer) 3:
#line 133 "declarative_user.m"
                        {
#line 133 "declarative_user.m"
                          mdb__declarative_user__V_6_6 = (MR_Integer) 0;
#line 133 "declarative_user.m"
                          mdb__declarative_user__succeeded = MR_TRUE;
#line 133 "declarative_user.m"
                        }
#line 133 "declarative_user.m"
                        break;
#line 133 "declarative_user.m"
                      case (MR_Integer) 4:
#line 133 "declarative_user.m"
                        {
#line 133 "declarative_user.m"
                          mdb__declarative_user__V_6_6 = (MR_Integer) 0;
#line 133 "declarative_user.m"
                          mdb__declarative_user__succeeded = MR_TRUE;
#line 133 "declarative_user.m"
                        }
#line 133 "declarative_user.m"
                        break;
#line 133 "declarative_user.m"
                      case (MR_Integer) 5:
#line 133 "declarative_user.m"
                        {
#line 133 "declarative_user.m"
                          mdb__declarative_user__V_6_6 = (MR_Integer) 0;
#line 133 "declarative_user.m"
                          mdb__declarative_user__succeeded = MR_TRUE;
#line 133 "declarative_user.m"
                        }
#line 133 "declarative_user.m"
                        break;
#line 133 "declarative_user.m"
                      case (MR_Integer) 6:
#line 133 "declarative_user.m"
                        {
#line 133 "declarative_user.m"
                          mdb__declarative_user__V_6_6 = (MR_Integer) 0;
#line 133 "declarative_user.m"
                          mdb__declarative_user__succeeded = MR_TRUE;
#line 133 "declarative_user.m"
                        }
#line 133 "declarative_user.m"
                        break;
#line 133 "declarative_user.m"
                      case (MR_Integer) 7:
#line 133 "declarative_user.m"
                        {
#line 133 "declarative_user.m"
                          mdb__declarative_user__V_6_6 = (MR_Integer) 0;
#line 133 "declarative_user.m"
                          mdb__declarative_user__succeeded = MR_TRUE;
#line 133 "declarative_user.m"
                        }
#line 133 "declarative_user.m"
                        break;
#line 133 "declarative_user.m"
                      case (MR_Integer) 8:
#line 133 "declarative_user.m"
                        {
#line 133 "declarative_user.m"
                          mdb__declarative_user__V_6_6 = (MR_Integer) 0;
#line 133 "declarative_user.m"
                          mdb__declarative_user__succeeded = MR_TRUE;
#line 133 "declarative_user.m"
                        }
#line 133 "declarative_user.m"
                        break;
#line 133 "declarative_user.m"
                      case (MR_Integer) 9:
#line 133 "declarative_user.m"
                        {
#line 133 "declarative_user.m"
                          mdb__declarative_user__V_6_6 = (MR_Integer) 0;
#line 133 "declarative_user.m"
                          mdb__declarative_user__succeeded = MR_TRUE;
#line 133 "declarative_user.m"
                        }
#line 133 "declarative_user.m"
                        break;
#line 133 "declarative_user.m"
                      case (MR_Integer) 10:
#line 133 "declarative_user.m"
                        {
#line 133 "declarative_user.m"
                          mdb__declarative_user__V_6_6 = (MR_Integer) 0;
#line 133 "declarative_user.m"
                          mdb__declarative_user__succeeded = MR_TRUE;
#line 133 "declarative_user.m"
                        }
#line 133 "declarative_user.m"
                        break;
#line 133 "declarative_user.m"
                      case (MR_Integer) 11:
#line 133 "declarative_user.m"
                        {
#line 133 "declarative_user.m"
                          mdb__declarative_user__V_6_6 = (MR_Integer) 0;
#line 133 "declarative_user.m"
                          mdb__declarative_user__succeeded = MR_TRUE;
#line 133 "declarative_user.m"
                        }
#line 133 "declarative_user.m"
                        break;
#line 133 "declarative_user.m"
                      case (MR_Integer) 12:
#line 133 "declarative_user.m"
                        {
#line 133 "declarative_user.m"
                          mdb__declarative_user__V_6_6 = (MR_Integer) 0;
#line 133 "declarative_user.m"
                          mdb__declarative_user__succeeded = MR_TRUE;
#line 133 "declarative_user.m"
                        }
#line 133 "declarative_user.m"
                        break;
#line 133 "declarative_user.m"
                    }
#line 133 "declarative_user.m"
                    break;
#line 133 "declarative_user.m"
                  case (MR_Integer) 1:
#line 133 "declarative_user.m"
                    {
#line 133 "declarative_user.m"
                      MR_Word mdb__declarative_user__TypeInfo_31_31;
#line 133 "declarative_user.m"
                      MR_Word mdb__declarative_user__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));
#line 133 "declarative_user.m"
                      MR_Word mdb__declarative_user__V_8_8;

#line 133 "declarative_user.m"
                      mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 133 "declarative_user.m"
                      if (mdb__declarative_user__succeeded)
#line 133 "declarative_user.m"
                        {
#line 133 "declarative_user.m"
                          mdb__declarative_user__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)));
#line 6158 "mdb.declarative_user.c"
                          mdb__declarative_user__TypeInfo_31_31 = (MR_Word) &mdb__declarative_user_scalar_common_1[0];
#line 133 "declarative_user.m"
                          {
#line 133 "declarative_user.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_user__TypeInfo_31_31, &mdb__declarative_user__V_6_6, ((MR_Box) (mdb__declarative_user__V_7_7)), ((MR_Box) (mdb__declarative_user__V_8_8)));
                          }
#line 133 "declarative_user.m"
                          mdb__declarative_user__succeeded = MR_TRUE;
#line 133 "declarative_user.m"
                        }
#line 133 "declarative_user.m"
                    }
#line 133 "declarative_user.m"
                    break;
#line 133 "declarative_user.m"
                  case (MR_Integer) 2:
#line 133 "declarative_user.m"
                    {
#line 133 "declarative_user.m"
                      MR_Word mdb__declarative_user__TypeInfo_32_32;
#line 133 "declarative_user.m"
                      MR_Word mdb__declarative_user__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));
#line 133 "declarative_user.m"
                      MR_Word mdb__declarative_user__V_10_10;

#line 133 "declarative_user.m"
                      mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 133 "declarative_user.m"
                      if (mdb__declarative_user__succeeded)
#line 133 "declarative_user.m"
                        {
#line 133 "declarative_user.m"
                          mdb__declarative_user__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)));
#line 6192 "mdb.declarative_user.c"
                          mdb__declarative_user__TypeInfo_32_32 = (MR_Word) &mdb__declarative_user_scalar_common_1[0];
#line 133 "declarative_user.m"
                          {
#line 133 "declarative_user.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_user__TypeInfo_32_32, &mdb__declarative_user__V_6_6, ((MR_Box) (mdb__declarative_user__V_9_9)), ((MR_Box) (mdb__declarative_user__V_10_10)));
                          }
#line 133 "declarative_user.m"
                          mdb__declarative_user__succeeded = MR_TRUE;
#line 133 "declarative_user.m"
                        }
#line 133 "declarative_user.m"
                    }
#line 133 "declarative_user.m"
                    break;
#line 133 "declarative_user.m"
                  case (MR_Integer) 3:
#line 133 "declarative_user.m"
#line 133 "declarative_user.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) {
#line 133 "declarative_user.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 133 "declarative_user.m"
                      case (MR_Integer) 0:
#line 133 "declarative_user.m"
                        {
#line 133 "declarative_user.m"
                          MR_Integer mdb__declarative_user__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 133 "declarative_user.m"
                          MR_Integer mdb__declarative_user__V_12_12;

#line 133 "declarative_user.m"
                          mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 133 "declarative_user.m"
                          if (mdb__declarative_user__succeeded)
#line 133 "declarative_user.m"
                            {
#line 133 "declarative_user.m"
                              mdb__declarative_user__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));
#line 133 "declarative_user.m"
                              {
#line 133 "declarative_user.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_user__V_6_6, mdb__declarative_user__V_11_11, mdb__declarative_user__V_12_12);
                              }
#line 133 "declarative_user.m"
                              mdb__declarative_user__succeeded = MR_TRUE;
#line 133 "declarative_user.m"
                            }
#line 133 "declarative_user.m"
                        }
#line 133 "declarative_user.m"
                        break;
#line 133 "declarative_user.m"
                      case (MR_Integer) 1:
#line 133 "declarative_user.m"
                        {
#line 133 "declarative_user.m"
                          MR_Integer mdb__declarative_user__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 133 "declarative_user.m"
                          MR_Integer mdb__declarative_user__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 2)));
#line 133 "declarative_user.m"
                          MR_Integer mdb__declarative_user__V_15_15;
#line 133 "declarative_user.m"
                          MR_Integer mdb__declarative_user__V_16_16;
#line 133 "declarative_user.m"
                          MR_Word mdb__declarative_user__V_17_17;

#line 133 "declarative_user.m"
                          mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 133 "declarative_user.m"
                          if (mdb__declarative_user__succeeded)
#line 133 "declarative_user.m"
                            {
#line 133 "declarative_user.m"
                              mdb__declarative_user__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));
#line 133 "declarative_user.m"
                              mdb__declarative_user__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 2)));
#line 133 "declarative_user.m"
                              {
#line 133 "declarative_user.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_user__V_17_17, mdb__declarative_user__V_13_13, mdb__declarative_user__V_15_15);
                              }
#line 6274 "mdb.declarative_user.c"
                              mdb__declarative_user__succeeded = (mdb__declarative_user__V_17_17 == (MR_Integer) 0);
#line 133 "declarative_user.m"
                              mdb__declarative_user__succeeded = !(mdb__declarative_user__succeeded);
#line 133 "declarative_user.m"
                              if (mdb__declarative_user__succeeded)
#line 133 "declarative_user.m"
                                mdb__declarative_user__V_6_6 = mdb__declarative_user__V_17_17;
#line 133 "declarative_user.m"
                              else
#line 133 "declarative_user.m"
                                {
#line 133 "declarative_user.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_user__V_6_6, mdb__declarative_user__V_14_14, mdb__declarative_user__V_16_16);
                                }
#line 133 "declarative_user.m"
                              mdb__declarative_user__succeeded = MR_TRUE;
#line 133 "declarative_user.m"
                            }
#line 133 "declarative_user.m"
                        }
#line 133 "declarative_user.m"
                        break;
#line 133 "declarative_user.m"
                      case (MR_Integer) 2:
#line 133 "declarative_user.m"
                        {
#line 133 "declarative_user.m"
                          MR_Integer mdb__declarative_user__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 133 "declarative_user.m"
                          MR_Integer mdb__declarative_user__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 2)));
#line 133 "declarative_user.m"
                          MR_Integer mdb__declarative_user__V_20_20;
#line 133 "declarative_user.m"
                          MR_Integer mdb__declarative_user__V_21_21;
#line 133 "declarative_user.m"
                          MR_Word mdb__declarative_user__V_22_22;

#line 133 "declarative_user.m"
                          mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 133 "declarative_user.m"
                          if (mdb__declarative_user__succeeded)
#line 133 "declarative_user.m"
                            {
#line 133 "declarative_user.m"
                              mdb__declarative_user__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));
#line 133 "declarative_user.m"
                              mdb__declarative_user__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 2)));
#line 133 "declarative_user.m"
                              {
#line 133 "declarative_user.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_user__V_22_22, mdb__declarative_user__V_18_18, mdb__declarative_user__V_20_20);
                              }
#line 6327 "mdb.declarative_user.c"
                              mdb__declarative_user__succeeded = (mdb__declarative_user__V_22_22 == (MR_Integer) 0);
#line 133 "declarative_user.m"
                              mdb__declarative_user__succeeded = !(mdb__declarative_user__succeeded);
#line 133 "declarative_user.m"
                              if (mdb__declarative_user__succeeded)
#line 133 "declarative_user.m"
                                mdb__declarative_user__V_6_6 = mdb__declarative_user__V_22_22;
#line 133 "declarative_user.m"
                              else
#line 133 "declarative_user.m"
                                {
#line 133 "declarative_user.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_user__V_6_6, mdb__declarative_user__V_19_19, mdb__declarative_user__V_21_21);
                                }
#line 133 "declarative_user.m"
                              mdb__declarative_user__succeeded = MR_TRUE;
#line 133 "declarative_user.m"
                            }
#line 133 "declarative_user.m"
                        }
#line 133 "declarative_user.m"
                        break;
#line 133 "declarative_user.m"
                      case (MR_Integer) 3:
#line 133 "declarative_user.m"
                        {
#line 133 "declarative_user.m"
                          MR_Word mdb__declarative_user__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 133 "declarative_user.m"
                          MR_Word mdb__declarative_user__V_24_24;

#line 133 "declarative_user.m"
                          mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 133 "declarative_user.m"
                          if (mdb__declarative_user__succeeded)
#line 133 "declarative_user.m"
                            {
#line 133 "declarative_user.m"
                              mdb__declarative_user__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));
#line 133 "declarative_user.m"
                              {
#line 133 "declarative_user.m"
                                mdb__browser_info____Compare____param_cmd_0_0(&mdb__declarative_user__V_6_6, mdb__declarative_user__V_23_23, mdb__declarative_user__V_24_24);
                              }
#line 133 "declarative_user.m"
                              mdb__declarative_user__succeeded = MR_TRUE;
#line 133 "declarative_user.m"
                            }
#line 133 "declarative_user.m"
                        }
#line 133 "declarative_user.m"
                        break;
#line 133 "declarative_user.m"
                      case (MR_Integer) 4:
#line 133 "declarative_user.m"
                        {
#line 133 "declarative_user.m"
                          MR_Word mdb__declarative_user__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 133 "declarative_user.m"
                          MR_Word mdb__declarative_user__V_26_26;
#line 133 "declarative_user.m"
                          MR_Integer mdb__declarative_user__V_41_41;
#line 133 "declarative_user.m"
                          MR_Integer mdb__declarative_user__V_42_42;

#line 133 "declarative_user.m"
                          mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 133 "declarative_user.m"
                          if (mdb__declarative_user__succeeded)
#line 133 "declarative_user.m"
                            {
#line 133 "declarative_user.m"
                              mdb__declarative_user__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));
#line 133 "declarative_user.m"
                              mdb__declarative_user__V_41_41 = (MR_Integer) mdb__declarative_user__V_25_25;
#line 133 "declarative_user.m"
                              mdb__declarative_user__V_42_42 = (MR_Integer) mdb__declarative_user__V_26_26;
#line 133 "declarative_user.m"
                              {
#line 133 "declarative_user.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_user__V_6_6, mdb__declarative_user__V_41_41, mdb__declarative_user__V_42_42);
                              }
#line 133 "declarative_user.m"
                              mdb__declarative_user__succeeded = MR_TRUE;
#line 133 "declarative_user.m"
                            }
#line 133 "declarative_user.m"
                        }
#line 133 "declarative_user.m"
                        break;
#line 133 "declarative_user.m"
                      case (MR_Integer) 5:
#line 133 "declarative_user.m"
                        {
#line 133 "declarative_user.m"
                          MR_Word mdb__declarative_user__TypeInfo_40_40;
#line 133 "declarative_user.m"
                          MR_Word mdb__declarative_user__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 133 "declarative_user.m"
                          MR_Word mdb__declarative_user__V_28_28;

#line 133 "declarative_user.m"
                          mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 133 "declarative_user.m"
                          if (mdb__declarative_user__succeeded)
#line 133 "declarative_user.m"
                            {
#line 133 "declarative_user.m"
                              mdb__declarative_user__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__3_3, (MR_Integer) 1)));
#line 6437 "mdb.declarative_user.c"
                              mdb__declarative_user__TypeInfo_40_40 = (MR_Word) &mdb__declarative_user_scalar_common_1[1];
#line 133 "declarative_user.m"
                              {
#line 133 "declarative_user.m"
                                mercury__builtin__compare_3_p_0(mdb__declarative_user__TypeInfo_40_40, &mdb__declarative_user__V_6_6, ((MR_Box) (mdb__declarative_user__V_27_27)), ((MR_Box) (mdb__declarative_user__V_28_28)));
                              }
#line 133 "declarative_user.m"
                              mdb__declarative_user__succeeded = MR_TRUE;
#line 133 "declarative_user.m"
                            }
#line 133 "declarative_user.m"
                        }
#line 133 "declarative_user.m"
                        break;
#line 133 "declarative_user.m"
                    }
#line 133 "declarative_user.m"
                    break;
#line 133 "declarative_user.m"
                }
#line 133 "declarative_user.m"
                if (mdb__declarative_user__succeeded)
#line 133 "declarative_user.m"
                  *mdb__declarative_user__HeadVar__1_1 = mdb__declarative_user__V_6_6;
#line 133 "declarative_user.m"
                else
#line 133 "declarative_user.m"
                  {
#line 133 "declarative_user.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 133 "declarative_user.m"
                    return;
                  }
#line 133 "declarative_user.m"
              }
#line 133 "declarative_user.m"
          }
#line 133 "declarative_user.m"
      }
#line 133 "declarative_user.m"
  }
#line 133 "declarative_user.m"
}

#line 133 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user____Index____user_command_0_0(
#line 133 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 133 "declarative_user.m"
  MR_Integer * mdb__declarative_user__HeadVar__2_2)
#line 133 "declarative_user.m"
{
#line 133 "declarative_user.m"
  {
#line 133 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;

#line 133 "declarative_user.m"
#line 133 "declarative_user.m"
    switch (MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) {
#line 133 "declarative_user.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 133 "declarative_user.m"
      case (MR_Integer) 0:
#line 133 "declarative_user.m"
#line 133 "declarative_user.m"
        switch (MR_unmkbody(mdb__declarative_user__HeadVar__1_1)) {
#line 133 "declarative_user.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 133 "declarative_user.m"
          case (MR_Integer) 0:
#line 6510 "mdb.declarative_user.c"
            *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 0;
#line 133 "declarative_user.m"
            break;
#line 133 "declarative_user.m"
          case (MR_Integer) 1:
#line 6516 "mdb.declarative_user.c"
            *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 1;
#line 133 "declarative_user.m"
            break;
#line 133 "declarative_user.m"
          case (MR_Integer) 2:
#line 6522 "mdb.declarative_user.c"
            *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 2;
#line 133 "declarative_user.m"
            break;
#line 133 "declarative_user.m"
          case (MR_Integer) 3:
#line 6528 "mdb.declarative_user.c"
            *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 3;
#line 133 "declarative_user.m"
            break;
#line 133 "declarative_user.m"
          case (MR_Integer) 4:
#line 6534 "mdb.declarative_user.c"
            *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 9;
#line 133 "declarative_user.m"
            break;
#line 133 "declarative_user.m"
          case (MR_Integer) 5:
#line 6540 "mdb.declarative_user.c"
            *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 11;
#line 133 "declarative_user.m"
            break;
#line 133 "declarative_user.m"
          case (MR_Integer) 6:
#line 6546 "mdb.declarative_user.c"
            *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 12;
#line 133 "declarative_user.m"
            break;
#line 133 "declarative_user.m"
          case (MR_Integer) 7:
#line 6552 "mdb.declarative_user.c"
            *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 13;
#line 133 "declarative_user.m"
            break;
#line 133 "declarative_user.m"
          case (MR_Integer) 8:
#line 6558 "mdb.declarative_user.c"
            *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 14;
#line 133 "declarative_user.m"
            break;
#line 133 "declarative_user.m"
          case (MR_Integer) 9:
#line 6564 "mdb.declarative_user.c"
            *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 15;
#line 133 "declarative_user.m"
            break;
#line 133 "declarative_user.m"
          case (MR_Integer) 10:
#line 6570 "mdb.declarative_user.c"
            *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 17;
#line 133 "declarative_user.m"
            break;
#line 133 "declarative_user.m"
          case (MR_Integer) 11:
#line 6576 "mdb.declarative_user.c"
            *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 19;
#line 133 "declarative_user.m"
            break;
#line 133 "declarative_user.m"
          case (MR_Integer) 12:
#line 6582 "mdb.declarative_user.c"
            *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 20;
#line 133 "declarative_user.m"
            break;
#line 133 "declarative_user.m"
        }
#line 133 "declarative_user.m"
        break;
#line 133 "declarative_user.m"
      case (MR_Integer) 1:
#line 6592 "mdb.declarative_user.c"
        *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 4;
#line 133 "declarative_user.m"
        break;
#line 133 "declarative_user.m"
      case (MR_Integer) 2:
#line 6598 "mdb.declarative_user.c"
        *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 5;
#line 133 "declarative_user.m"
        break;
#line 133 "declarative_user.m"
      case (MR_Integer) 3:
#line 133 "declarative_user.m"
#line 133 "declarative_user.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)))) {
#line 133 "declarative_user.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 133 "declarative_user.m"
          case (MR_Integer) 0:
#line 6611 "mdb.declarative_user.c"
            *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 6;
#line 133 "declarative_user.m"
            break;
#line 133 "declarative_user.m"
          case (MR_Integer) 1:
#line 6617 "mdb.declarative_user.c"
            *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 7;
#line 133 "declarative_user.m"
            break;
#line 133 "declarative_user.m"
          case (MR_Integer) 2:
#line 6623 "mdb.declarative_user.c"
            *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 8;
#line 133 "declarative_user.m"
            break;
#line 133 "declarative_user.m"
          case (MR_Integer) 3:
#line 6629 "mdb.declarative_user.c"
            *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 10;
#line 133 "declarative_user.m"
            break;
#line 133 "declarative_user.m"
          case (MR_Integer) 4:
#line 6635 "mdb.declarative_user.c"
            *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 16;
#line 133 "declarative_user.m"
            break;
#line 133 "declarative_user.m"
          case (MR_Integer) 5:
#line 6641 "mdb.declarative_user.c"
            *mdb__declarative_user__HeadVar__2_2 = (MR_Integer) 18;
#line 133 "declarative_user.m"
            break;
#line 133 "declarative_user.m"
        }
#line 133 "declarative_user.m"
        break;
#line 133 "declarative_user.m"
    }
#line 133 "declarative_user.m"
  }
#line 133 "declarative_user.m"
}

#line 133 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user____Unify____user_command_0_0(
#line 133 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 133 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_2)
#line 133 "declarative_user.m"
{
#line 133 "declarative_user.m"
  {
#line 133 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 133 "declarative_user.m"
    MR_Integer mdb__declarative_user__CastX_49 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 133 "declarative_user.m"
    MR_Integer mdb__declarative_user__CastY_50 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 133 "declarative_user.m"
    mdb__declarative_user__succeeded = (mdb__declarative_user__CastX_49 == mdb__declarative_user__CastY_50);
#line 133 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 133 "declarative_user.m"
      mdb__declarative_user__succeeded = MR_TRUE;
#line 133 "declarative_user.m"
    else
#line 133 "declarative_user.m"
#line 133 "declarative_user.m"
      switch (MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) {
#line 133 "declarative_user.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 133 "declarative_user.m"
        case (MR_Integer) 0:
#line 133 "declarative_user.m"
#line 133 "declarative_user.m"
          switch (MR_unmkbody(mdb__declarative_user__HeadVar__1_1)) {
#line 133 "declarative_user.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 133 "declarative_user.m"
            case (MR_Integer) 0:
#line 133 "declarative_user.m"
              {
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__CastX_3 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__CastY_4 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 133 "declarative_user.m"
                mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_4 == mdb__declarative_user__CastX_3);
#line 133 "declarative_user.m"
              }
#line 133 "declarative_user.m"
              break;
#line 133 "declarative_user.m"
            case (MR_Integer) 1:
#line 133 "declarative_user.m"
              {
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__CastX_5 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__CastY_6 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 133 "declarative_user.m"
                mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_6 == mdb__declarative_user__CastX_5);
#line 133 "declarative_user.m"
              }
#line 133 "declarative_user.m"
              break;
#line 133 "declarative_user.m"
            case (MR_Integer) 2:
#line 133 "declarative_user.m"
              {
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__CastX_7 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__CastY_8 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 133 "declarative_user.m"
                mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_8 == mdb__declarative_user__CastX_7);
#line 133 "declarative_user.m"
              }
#line 133 "declarative_user.m"
              break;
#line 133 "declarative_user.m"
            case (MR_Integer) 3:
#line 133 "declarative_user.m"
              {
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__CastX_9 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__CastY_10 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 133 "declarative_user.m"
                mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_10 == mdb__declarative_user__CastX_9);
#line 133 "declarative_user.m"
              }
#line 133 "declarative_user.m"
              break;
#line 133 "declarative_user.m"
            case (MR_Integer) 4:
#line 133 "declarative_user.m"
              {
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__CastX_25 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__CastY_26 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 133 "declarative_user.m"
                mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_26 == mdb__declarative_user__CastX_25);
#line 133 "declarative_user.m"
              }
#line 133 "declarative_user.m"
              break;
#line 133 "declarative_user.m"
            case (MR_Integer) 5:
#line 133 "declarative_user.m"
              {
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__CastX_29 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__CastY_30 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 133 "declarative_user.m"
                mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_30 == mdb__declarative_user__CastX_29);
#line 133 "declarative_user.m"
              }
#line 133 "declarative_user.m"
              break;
#line 133 "declarative_user.m"
            case (MR_Integer) 6:
#line 133 "declarative_user.m"
              {
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__CastX_31 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__CastY_32 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 133 "declarative_user.m"
                mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_32 == mdb__declarative_user__CastX_31);
#line 133 "declarative_user.m"
              }
#line 133 "declarative_user.m"
              break;
#line 133 "declarative_user.m"
            case (MR_Integer) 7:
#line 133 "declarative_user.m"
              {
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__CastX_33 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__CastY_34 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 133 "declarative_user.m"
                mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_34 == mdb__declarative_user__CastX_33);
#line 133 "declarative_user.m"
              }
#line 133 "declarative_user.m"
              break;
#line 133 "declarative_user.m"
            case (MR_Integer) 8:
#line 133 "declarative_user.m"
              {
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__CastX_35 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__CastY_36 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 133 "declarative_user.m"
                mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_36 == mdb__declarative_user__CastX_35);
#line 133 "declarative_user.m"
              }
#line 133 "declarative_user.m"
              break;
#line 133 "declarative_user.m"
            case (MR_Integer) 9:
#line 133 "declarative_user.m"
              {
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__CastX_37 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__CastY_38 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 133 "declarative_user.m"
                mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_38 == mdb__declarative_user__CastX_37);
#line 133 "declarative_user.m"
              }
#line 133 "declarative_user.m"
              break;
#line 133 "declarative_user.m"
            case (MR_Integer) 10:
#line 133 "declarative_user.m"
              {
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__CastX_41 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__CastY_42 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 133 "declarative_user.m"
                mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_42 == mdb__declarative_user__CastX_41);
#line 133 "declarative_user.m"
              }
#line 133 "declarative_user.m"
              break;
#line 133 "declarative_user.m"
            case (MR_Integer) 11:
#line 133 "declarative_user.m"
              {
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__CastX_45 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__CastY_46 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 133 "declarative_user.m"
                mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_46 == mdb__declarative_user__CastX_45);
#line 133 "declarative_user.m"
              }
#line 133 "declarative_user.m"
              break;
#line 133 "declarative_user.m"
            case (MR_Integer) 12:
#line 133 "declarative_user.m"
              {
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__CastX_47 = (MR_Integer) mdb__declarative_user__HeadVar__1_1;
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__CastY_48 = (MR_Integer) mdb__declarative_user__HeadVar__2_2;

#line 133 "declarative_user.m"
                mdb__declarative_user__succeeded = (mdb__declarative_user__CastY_48 == mdb__declarative_user__CastX_47);
#line 133 "declarative_user.m"
              }
#line 133 "declarative_user.m"
              break;
#line 133 "declarative_user.m"
          }
#line 133 "declarative_user.m"
          break;
#line 133 "declarative_user.m"
        case (MR_Integer) 1:
#line 133 "declarative_user.m"
          {
#line 133 "declarative_user.m"
            MR_Word mdb__declarative_user__TypeInfo_51_51;
#line 133 "declarative_user.m"
            MR_Word mdb__declarative_user__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
#line 133 "declarative_user.m"
            MR_Word mdb__declarative_user__V_12_12;

#line 133 "declarative_user.m"
            mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 133 "declarative_user.m"
            if (mdb__declarative_user__succeeded)
#line 133 "declarative_user.m"
              {
#line 133 "declarative_user.m"
                mdb__declarative_user__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));
#line 6912 "mdb.declarative_user.c"
                mdb__declarative_user__TypeInfo_51_51 = (MR_Word) &mdb__declarative_user_scalar_common_1[0];
#line 6914 "mdb.declarative_user.c"
                {
#line 6916 "mdb.declarative_user.c"
                  mdb__declarative_user__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_user__TypeInfo_51_51, ((MR_Box) (mdb__declarative_user__V_11_11)), ((MR_Box) (mdb__declarative_user__V_12_12)));
                }
#line 133 "declarative_user.m"
              }
#line 133 "declarative_user.m"
          }
#line 133 "declarative_user.m"
          break;
#line 133 "declarative_user.m"
        case (MR_Integer) 2:
#line 133 "declarative_user.m"
          {
#line 133 "declarative_user.m"
            MR_Word mdb__declarative_user__TypeInfo_52_52;
#line 133 "declarative_user.m"
            MR_Word mdb__declarative_user__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
#line 133 "declarative_user.m"
            MR_Word mdb__declarative_user__V_14_14;

#line 133 "declarative_user.m"
            mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 133 "declarative_user.m"
            if (mdb__declarative_user__succeeded)
#line 133 "declarative_user.m"
              {
#line 133 "declarative_user.m"
                mdb__declarative_user__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));
#line 6944 "mdb.declarative_user.c"
                mdb__declarative_user__TypeInfo_52_52 = (MR_Word) &mdb__declarative_user_scalar_common_1[0];
#line 6946 "mdb.declarative_user.c"
                {
#line 6948 "mdb.declarative_user.c"
                  mdb__declarative_user__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_user__TypeInfo_52_52, ((MR_Box) (mdb__declarative_user__V_13_13)), ((MR_Box) (mdb__declarative_user__V_14_14)));
                }
#line 133 "declarative_user.m"
              }
#line 133 "declarative_user.m"
          }
#line 133 "declarative_user.m"
          break;
#line 133 "declarative_user.m"
        case (MR_Integer) 3:
#line 133 "declarative_user.m"
#line 133 "declarative_user.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)))) {
#line 133 "declarative_user.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 133 "declarative_user.m"
            case (MR_Integer) 0:
#line 133 "declarative_user.m"
              {
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__V_16_16;

#line 133 "declarative_user.m"
                mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 133 "declarative_user.m"
                if (mdb__declarative_user__succeeded)
#line 133 "declarative_user.m"
                  {
#line 133 "declarative_user.m"
                    mdb__declarative_user__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 6981 "mdb.declarative_user.c"
                    mdb__declarative_user__succeeded = (mdb__declarative_user__V_15_15 == mdb__declarative_user__V_16_16);
#line 133 "declarative_user.m"
                  }
#line 133 "declarative_user.m"
              }
#line 133 "declarative_user.m"
              break;
#line 133 "declarative_user.m"
            case (MR_Integer) 1:
#line 133 "declarative_user.m"
              {
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 2)));
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__V_19_19;
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__V_20_20;

#line 133 "declarative_user.m"
                mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 133 "declarative_user.m"
                if (mdb__declarative_user__succeeded)
#line 133 "declarative_user.m"
                  {
#line 133 "declarative_user.m"
                    mdb__declarative_user__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 133 "declarative_user.m"
                    mdb__declarative_user__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 2)));
#line 7012 "mdb.declarative_user.c"
                    mdb__declarative_user__succeeded = (mdb__declarative_user__V_17_17 == mdb__declarative_user__V_19_19);
#line 133 "declarative_user.m"
                    if (mdb__declarative_user__succeeded)
#line 7016 "mdb.declarative_user.c"
                      mdb__declarative_user__succeeded = (mdb__declarative_user__V_18_18 == mdb__declarative_user__V_20_20);
#line 133 "declarative_user.m"
                  }
#line 133 "declarative_user.m"
              }
#line 133 "declarative_user.m"
              break;
#line 133 "declarative_user.m"
            case (MR_Integer) 2:
#line 133 "declarative_user.m"
              {
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 2)));
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__V_23_23;
#line 133 "declarative_user.m"
                MR_Integer mdb__declarative_user__V_24_24;

#line 133 "declarative_user.m"
                mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 133 "declarative_user.m"
                if (mdb__declarative_user__succeeded)
#line 133 "declarative_user.m"
                  {
#line 133 "declarative_user.m"
                    mdb__declarative_user__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 133 "declarative_user.m"
                    mdb__declarative_user__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 2)));
#line 7047 "mdb.declarative_user.c"
                    mdb__declarative_user__succeeded = (mdb__declarative_user__V_21_21 == mdb__declarative_user__V_23_23);
#line 133 "declarative_user.m"
                    if (mdb__declarative_user__succeeded)
#line 7051 "mdb.declarative_user.c"
                      mdb__declarative_user__succeeded = (mdb__declarative_user__V_22_22 == mdb__declarative_user__V_24_24);
#line 133 "declarative_user.m"
                  }
#line 133 "declarative_user.m"
              }
#line 133 "declarative_user.m"
              break;
#line 133 "declarative_user.m"
            case (MR_Integer) 3:
#line 133 "declarative_user.m"
              {
#line 133 "declarative_user.m"
                MR_Word mdb__declarative_user__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 133 "declarative_user.m"
                MR_Word mdb__declarative_user__V_28_28;

#line 133 "declarative_user.m"
                mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 133 "declarative_user.m"
                if (mdb__declarative_user__succeeded)
#line 133 "declarative_user.m"
                  {
#line 133 "declarative_user.m"
                    mdb__declarative_user__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 7076 "mdb.declarative_user.c"
                    {
#line 7078 "mdb.declarative_user.c"
                      mdb__declarative_user__succeeded = mdb__browser_info____Unify____param_cmd_0_0(mdb__declarative_user__V_27_27, mdb__declarative_user__V_28_28);
                    }
#line 133 "declarative_user.m"
                  }
#line 133 "declarative_user.m"
              }
#line 133 "declarative_user.m"
              break;
#line 133 "declarative_user.m"
            case (MR_Integer) 4:
#line 133 "declarative_user.m"
              {
#line 133 "declarative_user.m"
                MR_Word mdb__declarative_user__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 133 "declarative_user.m"
                MR_Word mdb__declarative_user__V_40_40;

#line 133 "declarative_user.m"
                mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 133 "declarative_user.m"
                if (mdb__declarative_user__succeeded)
#line 133 "declarative_user.m"
                  {
#line 133 "declarative_user.m"
                    mdb__declarative_user__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 7104 "mdb.declarative_user.c"
                    mdb__declarative_user__succeeded = (mdb__declarative_user__V_39_39 == mdb__declarative_user__V_40_40);
#line 133 "declarative_user.m"
                  }
#line 133 "declarative_user.m"
              }
#line 133 "declarative_user.m"
              break;
#line 133 "declarative_user.m"
            case (MR_Integer) 5:
#line 133 "declarative_user.m"
              {
#line 133 "declarative_user.m"
                MR_Word mdb__declarative_user__TypeInfo_53_53;
#line 133 "declarative_user.m"
                MR_Word mdb__declarative_user__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 133 "declarative_user.m"
                MR_Word mdb__declarative_user__V_44_44;

#line 133 "declarative_user.m"
                mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 133 "declarative_user.m"
                if (mdb__declarative_user__succeeded)
#line 133 "declarative_user.m"
                  {
#line 133 "declarative_user.m"
                    mdb__declarative_user__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 7131 "mdb.declarative_user.c"
                    mdb__declarative_user__TypeInfo_53_53 = (MR_Word) &mdb__declarative_user_scalar_common_1[1];
#line 7133 "mdb.declarative_user.c"
                    {
#line 7135 "mdb.declarative_user.c"
                      mdb__declarative_user__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_user__TypeInfo_53_53, ((MR_Box) (mdb__declarative_user__V_43_43)), ((MR_Box) (mdb__declarative_user__V_44_44)));
                    }
#line 133 "declarative_user.m"
                  }
#line 133 "declarative_user.m"
              }
#line 133 "declarative_user.m"
              break;
#line 133 "declarative_user.m"
          }
#line 133 "declarative_user.m"
          break;
#line 133 "declarative_user.m"
      }
#line 133 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 133 "declarative_user.m"
  }
#line 133 "declarative_user.m"
}

#line 1358 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__convert_dirs_to_term_path_from_atom_3_p_0(
#line 1358 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 1358 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_2,
#line 1358 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__3_3)
#line 1358 "declarative_user.m"
{
#line 1361 "declarative_user.m"
  {
#line 1361 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;

#line 1361 "declarative_user.m"
    if ((mdb__declarative_user__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1361 "declarative_user.m"
      *mdb__declarative_user__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1361 "declarative_user.m"
    else
#line 1362 "declarative_user.m"
      {
#line 1362 "declarative_user.m"
        MR_Word mdb__declarative_user__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 1362 "declarative_user.m"
        MR_Word mdb__declarative_user__Dir_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 0)));
#line 1362 "declarative_user.m"
        MR_Word mdb__declarative_user__Dirs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__2_2, (MR_Integer) 1)));
#line 1362 "declarative_user.m"
        MR_Integer mdb__declarative_user__Pos_10;
#line 1362 "declarative_user.m"
        MR_Word mdb__declarative_user__MaybeValue_14;
#line 1362 "declarative_user.m"
        MR_Box mdb__declarative_user__V_5_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));

#line 1367 "declarative_user.m"
        if (((MR_tag((MR_Word) mdb__declarative_user__Dir_7)) == (MR_mktag((MR_Integer) 1))))
#line 1368 "declarative_user.m"
          {
#line 1368 "declarative_user.m"
            MR_String mdb__declarative_user__Name_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Dir_7, (MR_Integer) 0)));

#line 1369 "declarative_user.m"
            {
#line 1369 "declarative_user.m"
              mdb__declarative_user__succeeded = mdb__browse__string_is_return_value_alias_1_p_0(mdb__declarative_user__Name_15);
            }
#line 1369 "declarative_user.m"
            if (mdb__declarative_user__succeeded)
#line 1370 "declarative_user.m"
              {
#line 1370 "declarative_user.m"
                MR_Word mdb__declarative_user__LastArg_16;
#line 1370 "declarative_user.m"
                MR_Box mdb__declarative_user__conv0_LastArg_16;

#line 1370 "declarative_user.m"
                {
#line 1370 "declarative_user.m"
                  mdb__declarative_user__succeeded = mercury__list__last_2_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_user__Args_6, &mdb__declarative_user__conv0_LastArg_16);
                }
#line 1370 "declarative_user.m"
                if (mdb__declarative_user__succeeded)
#line 1370 "declarative_user.m"
                  {
#line 1370 "declarative_user.m"
                    mdb__declarative_user__LastArg_16 = ((MR_Word) mdb__declarative_user__conv0_LastArg_16);
#line 1370 "declarative_user.m"
                    mdb__declarative_user__succeeded = MR_TRUE;
#line 1370 "declarative_user.m"
                  }
#line 1370 "declarative_user.m"
                if (mdb__declarative_user__succeeded)
#line 1371 "declarative_user.m"
                  {
#line 1371 "declarative_user.m"
                    MR_Word mdb__declarative_user__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__LastArg_16, (MR_Integer) 0)));
#line 1371 "declarative_user.m"
                    MR_Integer mdb__declarative_user__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__LastArg_16, (MR_Integer) 1)));

#line 1371 "declarative_user.m"
                    mdb__declarative_user__MaybeValue_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__LastArg_16, (MR_Integer) 2)));
#line 1372 "declarative_user.m"
                    {
#line 1372 "declarative_user.m"
                      mdb__declarative_user__Pos_10 = mercury__list__length_1_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_user__Args_6);
                    }
#line 1371 "declarative_user.m"
                  }
#line 1370 "declarative_user.m"
                else
#line 1374 "declarative_user.m"
                  {
#line 1374 "declarative_user.m"
                    {
#line 1374 "declarative_user.m"
                      mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_user_scalar_common_1[20])));
#line 1374 "declarative_user.m"
                      return;
                    }
#line 1374 "declarative_user.m"
                  }
#line 1370 "declarative_user.m"
              }
#line 1369 "declarative_user.m"
            else
#line 1378 "declarative_user.m"
              {
#line 1378 "declarative_user.m"
                {
#line 1378 "declarative_user.m"
                  mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_user_scalar_common_1[21])));
#line 1378 "declarative_user.m"
                  return;
                }
#line 1378 "declarative_user.m"
              }
#line 1368 "declarative_user.m"
          }
#line 1367 "declarative_user.m"
        else
#line 1364 "declarative_user.m"
          {
#line 1364 "declarative_user.m"
            MR_Word mdb__declarative_user__Arg_11;
#line 1365 "declarative_user.m"
            MR_Box mdb__declarative_user__conv1_Arg_11;
#line 1366 "declarative_user.m"
            MR_Word mdb__declarative_user__V_12_12;
#line 1366 "declarative_user.m"
            MR_Integer mdb__declarative_user__V_13_13;

#line 1364 "declarative_user.m"
            mdb__declarative_user__Pos_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Dir_7, (MR_Integer) 0)));
#line 1365 "declarative_user.m"
            {
#line 1365 "declarative_user.m"
              mdb__declarative_user__conv1_Arg_11 = mercury__list__det_index1_2_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_user__Args_6, mdb__declarative_user__Pos_10);
            }
#line 1365 "declarative_user.m"
            mdb__declarative_user__Arg_11 = ((MR_Word) mdb__declarative_user__conv1_Arg_11);
#line 1366 "declarative_user.m"
            mdb__declarative_user__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Arg_11, (MR_Integer) 0)));
#line 1366 "declarative_user.m"
            mdb__declarative_user__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Arg_11, (MR_Integer) 1)));
#line 1366 "declarative_user.m"
            mdb__declarative_user__MaybeValue_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Arg_11, (MR_Integer) 2)));
#line 1364 "declarative_user.m"
          }
#line 1386 "declarative_user.m"
        if ((mdb__declarative_user__MaybeValue_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1394 "declarative_user.m"
          if ((mdb__declarative_user__Dirs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1392 "declarative_user.m"
            {
#line 1393 "declarative_user.m"
              {
#line 1393 "declarative_user.m"
                MR_Word base;
#line 1393 "declarative_user.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1393 "declarative_user.m"
                *mdb__declarative_user__HeadVar__3_3 = base;
#line 1393 "declarative_user.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__Pos_10));
#line 1393 "declarative_user.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1393 "declarative_user.m"
              }
#line 1392 "declarative_user.m"
            }
#line 1394 "declarative_user.m"
          else
#line 1395 "declarative_user.m"
            {
#line 1396 "declarative_user.m"
              {
#line 1396 "declarative_user.m"
                mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_user_scalar_common_1[22])));
#line 1396 "declarative_user.m"
                return;
              }
#line 1395 "declarative_user.m"
            }
#line 1386 "declarative_user.m"
        else
#line 1383 "declarative_user.m"
          {
#line 1383 "declarative_user.m"
            MR_Word mdb__declarative_user__TermRep_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeValue_14, (MR_Integer) 0)));
#line 1383 "declarative_user.m"
            MR_Word mdb__declarative_user__TermPath0_20;

#line 1384 "declarative_user.m"
            {
#line 1384 "declarative_user.m"
              mdb__browser_info__convert_dirs_to_term_path_3_p_0(mdb__declarative_user__TermRep_19, mdb__declarative_user__Dirs_8, &mdb__declarative_user__TermPath0_20);
            }
#line 1385 "declarative_user.m"
            {
#line 1385 "declarative_user.m"
              MR_Word base;
#line 1385 "declarative_user.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1385 "declarative_user.m"
              *mdb__declarative_user__HeadVar__3_3 = base;
#line 1385 "declarative_user.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__Pos_10));
#line 1385 "declarative_user.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__TermPath0_20));
#line 1385 "declarative_user.m"
            }
#line 1383 "declarative_user.m"
          }
#line 1362 "declarative_user.m"
      }
#line 1361 "declarative_user.m"
  }
#line 1358 "declarative_user.m"
}

#line 1322 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__print_tabled_io_actions_2_5_p_0(
#line 1322 "declarative_user.m"
  MR_Word mdb__declarative_user__User_6,
#line 1322 "declarative_user.m"
  MR_Integer mdb__declarative_user__Cur_7,
#line 1322 "declarative_user.m"
  MR_Integer mdb__declarative_user__End_8)
#line 1322 "declarative_user.m"
{
#line 1326 "declarative_user.m"
  while (MR_TRUE)
#line 1326 "declarative_user.m"
    {
#line 1326 "declarative_user.m"
      /* tailcall optimized into a loop */
#line 1326 "declarative_user.m"
      {
#line 1326 "declarative_user.m"
        MR_bool mdb__declarative_user__succeeded = (mdb__declarative_user__Cur_7 == mdb__declarative_user__End_8);

#line 1326 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 1326 "declarative_user.m"
          {
#line 1326 "declarative_user.m"
          }
#line 1326 "declarative_user.m"
        else
#line 1329 "declarative_user.m"
          {
#line 1329 "declarative_user.m"
            MR_Word mdb__declarative_user__MaybeIoAction_10;
#line 1329 "declarative_user.m"
            MR_Integer mdb__declarative_user__V_15_15;

#line 1329 "declarative_user.m"
            {
#line 1329 "declarative_user.m"
              mdb__io_action__get_maybe_io_action_4_p_0(mdb__declarative_user__Cur_7, &mdb__declarative_user__MaybeIoAction_10);
            }
#line 1337 "declarative_user.m"
            if ((mdb__declarative_user__MaybeIoAction_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1337 "declarative_user.m"
              {
#line 1337 "declarative_user.m"
              }
#line 1337 "declarative_user.m"
            else
#line 1338 "declarative_user.m"
              {
#line 1338 "declarative_user.m"
                MR_Word mdb__declarative_user__IoAction_23 = (MR_Word) MR_body(((MR_Word) mdb__declarative_user__MaybeIoAction_10), (MR_Integer) 1);
#line 1338 "declarative_user.m"
                MR_Word mdb__declarative_user__Term_25;
#line 1338 "declarative_user.m"
                MR_Word mdb__declarative_user__V_28_28;
#line 1338 "declarative_user.m"
                MR_Word mdb__declarative_user__V_33_33;
#line 1340 "declarative_user.m"
                MR_Word mdb__declarative_user__V_32_32;
#line 1340 "declarative_user.m"
                MR_Word mdb__declarative_user__V_34_34;
#line 1340 "declarative_user.m"
                MR_Word mdb__declarative_user__V_35_35;
#line 1340 "declarative_user.m"
                MR_Word mdb__declarative_user__V_36_36;

#line 1339 "declarative_user.m"
                {
#line 1339 "declarative_user.m"
                  mdb__declarative_user__Term_25 = mdb__io_action__io_action_to_browser_term_1_f_0(mdb__declarative_user__IoAction_23);
                }
#line 1340 "declarative_user.m"
                mdb__declarative_user__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
#line 1340 "declarative_user.m"
                mdb__declarative_user__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
#line 1340 "declarative_user.m"
                mdb__declarative_user__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
#line 1340 "declarative_user.m"
                mdb__declarative_user__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
#line 1340 "declarative_user.m"
                mdb__declarative_user__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
#line 1340 "declarative_user.m"
                mdb__declarative_user__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
#line 1340 "declarative_user.m"
                {
#line 1340 "declarative_user.m"
                  mdb__browse__print_browser_term_6_p_0(mdb__declarative_user__Term_25, mdb__declarative_user__V_28_28, (MR_Integer) 2, mdb__declarative_user__V_33_33);
                }
#line 1338 "declarative_user.m"
              }
#line 1331 "declarative_user.m"
            mdb__declarative_user__V_15_15 = (mdb__declarative_user__Cur_7 + (MR_Integer) 1);
#line 1331 "declarative_user.m"
            /* direct tailcall eliminated */
#line 1331 "declarative_user.m"
            {
#line 1331 "declarative_user.m"
              MR_Integer mdb__declarative_user__Cur__tmp_copy_7 = mdb__declarative_user__V_15_15;

#line 1331 "declarative_user.m"
              mdb__declarative_user__Cur_7 = mdb__declarative_user__Cur__tmp_copy_7;
#line 1331 "declarative_user.m"
            }
#line 1331 "declarative_user.m"
            continue;
#line 1329 "declarative_user.m"
          }
#line 1326 "declarative_user.m"
      }
#line 1326 "declarative_user.m"
      break;
#line 1326 "declarative_user.m"
    }
#line 1322 "declarative_user.m"
}

#line 1292 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__write_io_actions_5_p_0(
#line 1292 "declarative_user.m"
  MR_Word mdb__declarative_user__User_6,
#line 1292 "declarative_user.m"
  MR_Integer mdb__declarative_user__NumTabled_7,
#line 1292 "declarative_user.m"
  MR_Word mdb__declarative_user__IoActions_8)
#line 1292 "declarative_user.m"
{
#line 1296 "declarative_user.m"
  {
#line 1296 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded = (mdb__declarative_user__NumTabled_7 == (MR_Integer) 0);

#line 1296 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 1296 "declarative_user.m"
      {
#line 1296 "declarative_user.m"
      }
#line 1296 "declarative_user.m"
    else
#line 1304 "declarative_user.m"
      {
#line 1304 "declarative_user.m"
        MR_Integer mdb__declarative_user__NumPrinted_10;
#line 1304 "declarative_user.m"
        MR_Word mdb__declarative_user__V_21_21;
#line 1304 "declarative_user.m"
        MR_Word mdb__declarative_user__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
#line 1304 "declarative_user.m"
        MR_Word mdb__declarative_user__V_75_75;
#line 1300 "declarative_user.m"
        MR_Word mdb__declarative_user__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
#line 1300 "declarative_user.m"
        MR_Word mdb__declarative_user__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
#line 1300 "declarative_user.m"
        MR_Word mdb__declarative_user__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
#line 1300 "declarative_user.m"
        MR_Word mdb__declarative_user__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
#line 1300 "declarative_user.m"
        MR_Word mdb__declarative_user__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
#line 1305 "declarative_user.m"
        MR_Word mdb__declarative_user__V_45_45;
#line 1305 "declarative_user.m"
        MR_Word mdb__declarative_user__V_46_46;
#line 1305 "declarative_user.m"
        MR_Word mdb__declarative_user__V_47_47;
#line 1305 "declarative_user.m"
        MR_Word mdb__declarative_user__V_48_48;
#line 1305 "declarative_user.m"
        MR_Word mdb__declarative_user__V_49_49;
#line 1307 "declarative_user.m"
        MR_Word mdb__declarative_user__V_71_71;
#line 1307 "declarative_user.m"
        MR_Word mdb__declarative_user__V_72_72;
#line 1307 "declarative_user.m"
        MR_Word mdb__declarative_user__V_73_73;
#line 1307 "declarative_user.m"
        MR_Word mdb__declarative_user__V_74_74;
#line 1307 "declarative_user.m"
        MR_Word mdb__declarative_user__V_76_76;

#line 1299 "declarative_user.m"
        mdb__declarative_user__succeeded = (mdb__declarative_user__NumTabled_7 == (MR_Integer) 1);
#line 1299 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 1300 "declarative_user.m"
          {
#line 1300 "declarative_user.m"
            {
#line 1300 "declarative_user.m"
              mercury__io__write_string_4_p_0(mdb__declarative_user__V_69_69, (MR_String) "1 tabled IO action:");
            }
#line 1300 "declarative_user.m"
          }
#line 1299 "declarative_user.m"
        else
#line 1302 "declarative_user.m"
          {
#line 1302 "declarative_user.m"
            MR_Word mdb__declarative_user__V_18_18;
#line 1303 "declarative_user.m"
            MR_Word mdb__declarative_user__V_40_40;
#line 1303 "declarative_user.m"
            MR_Word mdb__declarative_user__V_41_41;
#line 1303 "declarative_user.m"
            MR_Word mdb__declarative_user__V_42_42;
#line 1303 "declarative_user.m"
            MR_Word mdb__declarative_user__V_43_43;
#line 1303 "declarative_user.m"
            MR_Word mdb__declarative_user__V_44_44;

#line 1302 "declarative_user.m"
            {
#line 1302 "declarative_user.m"
              mercury__io__write_int_4_p_0(mdb__declarative_user__V_69_69, mdb__declarative_user__NumTabled_7);
            }
#line 1303 "declarative_user.m"
            mdb__declarative_user__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
#line 1303 "declarative_user.m"
            mdb__declarative_user__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
#line 1303 "declarative_user.m"
            mdb__declarative_user__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
#line 1303 "declarative_user.m"
            mdb__declarative_user__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
#line 1303 "declarative_user.m"
            mdb__declarative_user__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
#line 1303 "declarative_user.m"
            mdb__declarative_user__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
#line 1303 "declarative_user.m"
            {
#line 1303 "declarative_user.m"
              mercury__io__write_string_4_p_0(mdb__declarative_user__V_18_18, (MR_String) " tabled IO actions:");
            }
#line 1302 "declarative_user.m"
          }
#line 1305 "declarative_user.m"
        mdb__declarative_user__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
#line 1305 "declarative_user.m"
        mdb__declarative_user__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
#line 1305 "declarative_user.m"
        mdb__declarative_user__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
#line 1305 "declarative_user.m"
        mdb__declarative_user__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
#line 1305 "declarative_user.m"
        mdb__declarative_user__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
#line 1305 "declarative_user.m"
        mdb__declarative_user__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
#line 1305 "declarative_user.m"
        {
#line 1305 "declarative_user.m"
          mdb__declarative_user__NumPrinted_10 = mdb__browser_info__get_num_printed_io_actions_1_f_0(mdb__declarative_user__V_21_21);
        }
#line 1307 "declarative_user.m"
        mdb__declarative_user__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
#line 1307 "declarative_user.m"
        mdb__declarative_user__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
#line 1307 "declarative_user.m"
        mdb__declarative_user__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
#line 1307 "declarative_user.m"
        mdb__declarative_user__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
#line 1307 "declarative_user.m"
        mdb__declarative_user__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
#line 1307 "declarative_user.m"
        mdb__declarative_user__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
#line 1306 "declarative_user.m"
        mdb__declarative_user__succeeded = (mdb__declarative_user__NumTabled_7 <= mdb__declarative_user__NumPrinted_10);
#line 1306 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 1307 "declarative_user.m"
          {
#line 1307 "declarative_user.m"
            MR_Integer mdb__declarative_user__Start_82;
#line 1307 "declarative_user.m"
            MR_Integer mdb__declarative_user__End_83;

#line 1307 "declarative_user.m"
            {
#line 1307 "declarative_user.m"
              mercury__io__nl_3_p_0(mdb__declarative_user__V_75_75);
            }
#line 1319 "declarative_user.m"
            mdb__declarative_user__Start_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__IoActions_8, (MR_Integer) 0)));
#line 1319 "declarative_user.m"
            mdb__declarative_user__End_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__IoActions_8, (MR_Integer) 1)));
#line 1320 "declarative_user.m"
            {
#line 1320 "declarative_user.m"
              mdb__declarative_user__print_tabled_io_actions_2_5_p_0(mdb__declarative_user__User_6, mdb__declarative_user__Start_82, mdb__declarative_user__End_83);
            }
#line 1307 "declarative_user.m"
          }
#line 1306 "declarative_user.m"
        else
#line 1310 "declarative_user.m"
          {
#line 1310 "declarative_user.m"
            MR_Word mdb__declarative_user__V_28_28;
#line 1311 "declarative_user.m"
            MR_Word mdb__declarative_user__V_60_60;
#line 1311 "declarative_user.m"
            MR_Word mdb__declarative_user__V_61_61;
#line 1311 "declarative_user.m"
            MR_Word mdb__declarative_user__V_62_62;
#line 1311 "declarative_user.m"
            MR_Word mdb__declarative_user__V_63_63;
#line 1311 "declarative_user.m"
            MR_Word mdb__declarative_user__V_64_64;

#line 1310 "declarative_user.m"
            {
#line 1310 "declarative_user.m"
              mercury__io__write_string_4_p_0(mdb__declarative_user__V_75_75, (MR_String) " too many to show");
            }
#line 1311 "declarative_user.m"
            mdb__declarative_user__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
#line 1311 "declarative_user.m"
            mdb__declarative_user__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
#line 1311 "declarative_user.m"
            mdb__declarative_user__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
#line 1311 "declarative_user.m"
            mdb__declarative_user__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
#line 1311 "declarative_user.m"
            mdb__declarative_user__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
#line 1311 "declarative_user.m"
            mdb__declarative_user__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
#line 1311 "declarative_user.m"
            {
#line 1311 "declarative_user.m"
              mercury__io__nl_3_p_0(mdb__declarative_user__V_28_28);
            }
#line 1310 "declarative_user.m"
          }
#line 1304 "declarative_user.m"
      }
#line 1296 "declarative_user.m"
  }
#line 1292 "declarative_user.m"
}

#line 1280 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__trace_atom_arg_to_univ_2_p_0(
#line 1280 "declarative_user.m"
  MR_Word mdb__declarative_user__TraceAtomArg_3,
#line 1280 "declarative_user.m"
  MR_Word * mdb__declarative_user__Univ_4)
#line 1280 "declarative_user.m"
{
#line 1282 "declarative_user.m"
  {
#line 1282 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 1282 "declarative_user.m"
    MR_Word mdb__declarative_user__MaybeUniv_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__TraceAtomArg_3, (MR_Integer) 2)));
#line 1283 "declarative_user.m"
    MR_Word mdb__declarative_user__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__TraceAtomArg_3, (MR_Integer) 0)));
#line 1283 "declarative_user.m"
    MR_Integer mdb__declarative_user__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__TraceAtomArg_3, (MR_Integer) 1)));

#line 1287 "declarative_user.m"
    if ((mdb__declarative_user__MaybeUniv_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1288 "declarative_user.m"
      {
#line 1289 "declarative_user.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1289 "declarative_user.m"
        {
#line 1289 "declarative_user.m"
          *mdb__declarative_user__Univ_4 = mercury__univ__univ_1_f_1((MR_Word) &mdb__browse__mdb__browse__type_ctor_info_unbound_0, ((MR_Box) ((MR_Integer) 0)));
        }
#line 1288 "declarative_user.m"
      }
#line 1287 "declarative_user.m"
    else
#line 1285 "declarative_user.m"
      {
#line 1285 "declarative_user.m"
        MR_Word mdb__declarative_user__Rep_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeUniv_5, (MR_Integer) 0)));

#line 1286 "declarative_user.m"
        {
#line 1286 "declarative_user.m"
          mdb__term_rep__rep_to_univ_2_p_0(mdb__declarative_user__Rep_6, mdb__declarative_user__Univ_4);
        }
#line 1285 "declarative_user.m"
      }
#line 1282 "declarative_user.m"
  }
#line 1280 "declarative_user.m"
}

#line 1256 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__count_tabled_io_actions_2_8_p_0(
#line 1256 "declarative_user.m"
  MR_Integer mdb__declarative_user__Cur_9,
#line 1256 "declarative_user.m"
  MR_Integer mdb__declarative_user__End_10,
#line 1256 "declarative_user.m"
  MR_Integer mdb__declarative_user__PrevTabled_11,
#line 1256 "declarative_user.m"
  MR_Integer * mdb__declarative_user__Tabled_12,
#line 1256 "declarative_user.m"
  MR_Integer mdb__declarative_user__PrevUntabled_13,
#line 1256 "declarative_user.m"
  MR_Integer * mdb__declarative_user__Untabled_14)
#line 1256 "declarative_user.m"
{
#line 1262 "declarative_user.m"
  while (MR_TRUE)
#line 1262 "declarative_user.m"
    {
#line 1262 "declarative_user.m"
      /* tailcall optimized into a loop */
#line 1262 "declarative_user.m"
      {
#line 1262 "declarative_user.m"
        MR_bool mdb__declarative_user__succeeded = (mdb__declarative_user__Cur_9 == mdb__declarative_user__End_10);

#line 1262 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 1263 "declarative_user.m"
          {
#line 1263 "declarative_user.m"
            *mdb__declarative_user__Untabled_14 = mdb__declarative_user__PrevUntabled_13;
#line 1264 "declarative_user.m"
            *mdb__declarative_user__Tabled_12 = mdb__declarative_user__PrevTabled_11;
#line 1263 "declarative_user.m"
          }
#line 1262 "declarative_user.m"
        else
#line 1266 "declarative_user.m"
          {
#line 1266 "declarative_user.m"
            MR_Word mdb__declarative_user__MaybeIoAction_16;
#line 1266 "declarative_user.m"
            MR_Integer mdb__declarative_user__NewPrevUntabled_18;
#line 1266 "declarative_user.m"
            MR_Integer mdb__declarative_user__NewPrevTabled_19;
#line 1266 "declarative_user.m"
            MR_Integer mdb__declarative_user__V_25_25;

#line 1266 "declarative_user.m"
            {
#line 1266 "declarative_user.m"
              mdb__io_action__get_maybe_io_action_4_p_0(mdb__declarative_user__Cur_9, &mdb__declarative_user__MaybeIoAction_16);
            }
#line 1271 "declarative_user.m"
            if ((mdb__declarative_user__MaybeIoAction_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1272 "declarative_user.m"
              {
#line 1273 "declarative_user.m"
                mdb__declarative_user__NewPrevUntabled_18 = (mdb__declarative_user__PrevUntabled_13 + (MR_Integer) 1);
#line 1274 "declarative_user.m"
                mdb__declarative_user__NewPrevTabled_19 = mdb__declarative_user__PrevTabled_11;
#line 1272 "declarative_user.m"
              }
#line 1271 "declarative_user.m"
            else
#line 1268 "declarative_user.m"
              {
#line 1269 "declarative_user.m"
                mdb__declarative_user__NewPrevUntabled_18 = mdb__declarative_user__PrevUntabled_13;
#line 1270 "declarative_user.m"
                mdb__declarative_user__NewPrevTabled_19 = (mdb__declarative_user__PrevTabled_11 + (MR_Integer) 1);
#line 1268 "declarative_user.m"
              }
#line 1276 "declarative_user.m"
            mdb__declarative_user__V_25_25 = (mdb__declarative_user__Cur_9 + (MR_Integer) 1);
#line 1276 "declarative_user.m"
            /* direct tailcall eliminated */
#line 1276 "declarative_user.m"
            {
#line 1276 "declarative_user.m"
              MR_Integer mdb__declarative_user__Cur__tmp_copy_9 = mdb__declarative_user__V_25_25;
#line 1276 "declarative_user.m"
              MR_Integer mdb__declarative_user__PrevTabled__tmp_copy_11 = mdb__declarative_user__NewPrevTabled_19;
#line 1276 "declarative_user.m"
              MR_Integer mdb__declarative_user__PrevUntabled__tmp_copy_13 = mdb__declarative_user__NewPrevUntabled_18;

#line 1276 "declarative_user.m"
              mdb__declarative_user__PrevUntabled_13 = mdb__declarative_user__PrevUntabled__tmp_copy_13;
#line 1276 "declarative_user.m"
              mdb__declarative_user__PrevTabled_11 = mdb__declarative_user__PrevTabled__tmp_copy_11;
#line 1276 "declarative_user.m"
              mdb__declarative_user__Cur_9 = mdb__declarative_user__Cur__tmp_copy_9;
#line 1276 "declarative_user.m"
            }
#line 1276 "declarative_user.m"
            continue;
#line 1266 "declarative_user.m"
          }
#line 1262 "declarative_user.m"
      }
#line 1262 "declarative_user.m"
      break;
#line 1262 "declarative_user.m"
    }
#line 1256 "declarative_user.m"
}

#line 1221 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__write_decl_atom_6_p_0_1(
#line 1221 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 1221 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 1221 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 1221 "declarative_user.m"
{
#line 1221 "declarative_user.m"
  {
#line 1221 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 1221 "declarative_user.m"
    MR_Word mdb__declarative_user__conv0_Univ_4;

#line 1221 "declarative_user.m"
    {
#line 1221 "declarative_user.m"
      mdb__declarative_user__trace_atom_arg_to_univ_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv0_Univ_4);
    }
#line 1221 "declarative_user.m"
    *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv0_Univ_4));
#line 1221 "declarative_user.m"
  }
#line 1221 "declarative_user.m"
}

#line 1210 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__write_decl_atom_6_p_0(
#line 1210 "declarative_user.m"
  MR_Word mdb__declarative_user__User_7,
#line 1210 "declarative_user.m"
  MR_String mdb__declarative_user__Indent_8,
#line 1210 "declarative_user.m"
  MR_Word mdb__declarative_user__CallerType_9,
#line 1210 "declarative_user.m"
  MR_Word mdb__declarative_user__DeclAtom_10)
#line 1210 "declarative_user.m"
{
#line 1213 "declarative_user.m"
  {
#line 1213 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 1213 "declarative_user.m"
    MR_Word mdb__declarative_user__TraceAtom_12;
#line 1213 "declarative_user.m"
    MR_Word mdb__declarative_user__MaybeIoActions_13;
#line 1213 "declarative_user.m"
    MR_Box mdb__declarative_user__ProcLayout_14;
#line 1213 "declarative_user.m"
    MR_Word mdb__declarative_user__Args0_15;
#line 1213 "declarative_user.m"
    MR_Word mdb__declarative_user__ProcLabel_16;
#line 1213 "declarative_user.m"
    MR_String mdb__declarative_user__Functor_18;
#line 1213 "declarative_user.m"
    MR_Word mdb__declarative_user__PredOrFunc_20;
#line 1213 "declarative_user.m"
    MR_Word mdb__declarative_user__Which_21;
#line 1213 "declarative_user.m"
    MR_Word mdb__declarative_user__Args1_22;
#line 1213 "declarative_user.m"
    MR_Word mdb__declarative_user__Args_23;
#line 1213 "declarative_user.m"
    MR_Word mdb__declarative_user__BrowserTerm_24;
#line 1213 "declarative_user.m"
    MR_Word mdb__declarative_user__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 1)));
#line 1213 "declarative_user.m"
    MR_Word mdb__declarative_user__V_30_30;
#line 1213 "declarative_user.m"
    MR_Word mdb__declarative_user__V_31_31;
#line 1213 "declarative_user.m"
    MR_Word mdb__declarative_user__V_41_41;
#line 1214 "declarative_user.m"
    MR_Word mdb__declarative_user__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 0)));
#line 1214 "declarative_user.m"
    MR_Word mdb__declarative_user__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 2)));
#line 1214 "declarative_user.m"
    MR_Word mdb__declarative_user__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 3)));
#line 1214 "declarative_user.m"
    MR_Word mdb__declarative_user__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 4)));
#line 1214 "declarative_user.m"
    MR_Word mdb__declarative_user__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 5)));
#line 1218 "declarative_user.m"
    MR_Word mdb__declarative_user__V_17_17;
#line 1218 "declarative_user.m"
    MR_Integer mdb__declarative_user__V_19_19;
#line 1226 "declarative_user.m"
    MR_Word mdb__declarative_user__V_40_40;
#line 1226 "declarative_user.m"
    MR_Word mdb__declarative_user__V_42_42;
#line 1226 "declarative_user.m"
    MR_Word mdb__declarative_user__V_43_43;
#line 1226 "declarative_user.m"
    MR_Word mdb__declarative_user__V_44_44;

#line 1214 "declarative_user.m"
    {
#line 1214 "declarative_user.m"
      mercury__io__write_string_4_p_0(mdb__declarative_user__V_27_27, mdb__declarative_user__Indent_8);
    }
#line 1215 "declarative_user.m"
    {
#line 1215 "declarative_user.m"
      mdb__declarative_debugger__unravel_decl_atom_3_p_0(mdb__declarative_user__DeclAtom_10, &mdb__declarative_user__TraceAtom_12, &mdb__declarative_user__MaybeIoActions_13);
    }
#line 1216 "declarative_user.m"
    mdb__declarative_user__ProcLayout_14 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_user__TraceAtom_12, (MR_Integer) 0)));
#line 1216 "declarative_user.m"
    mdb__declarative_user__Args0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__TraceAtom_12, (MR_Integer) 1)));
#line 1217 "declarative_user.m"
    {
#line 1217 "declarative_user.m"
      mdb__declarative_user__ProcLabel_16 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_user__ProcLayout_14);
    }
#line 1218 "declarative_user.m"
    {
#line 1218 "declarative_user.m"
      mdb__declarative_execution__get_pred_attributes_5_p_0(mdb__declarative_user__ProcLabel_16, &mdb__declarative_user__V_17_17, &mdb__declarative_user__Functor_18, &mdb__declarative_user__V_19_19, &mdb__declarative_user__PredOrFunc_20);
    }
#line 1219 "declarative_user.m"
    {
#line 1219 "declarative_user.m"
      mdb__declarative_user__Which_21 = mdb__declarative_execution__chosen_head_vars_presentation_0_f_0();
    }
#line 1220 "declarative_user.m"
    {
#line 1220 "declarative_user.m"
      mdb__declarative_execution__maybe_filter_headvars_3_p_0(mdb__declarative_user__Which_21, mdb__declarative_user__Args0_15, &mdb__declarative_user__Args1_22);
    }
#line 1221 "declarative_user.m"
    {
#line 1221 "declarative_user.m"
      mercury__list__map_3_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, (MR_Word) &mdb__declarative_user_scalar_common_2[17], mdb__declarative_user__Args1_22, &mdb__declarative_user__Args_23);
    }
#line 1225 "declarative_user.m"
    {
#line 1225 "declarative_user.m"
      mdb__declarative_user__V_30_30 = mdb__util__is_function_1_f_0(mdb__declarative_user__PredOrFunc_20);
    }
#line 1224 "declarative_user.m"
    {
#line 1224 "declarative_user.m"
      mdb__declarative_user__BrowserTerm_24 = mdb__browser_term__synthetic_term_to_browser_term_3_f_0(mdb__declarative_user__Functor_18, mdb__declarative_user__Args_23, mdb__declarative_user__V_30_30);
    }
#line 1226 "declarative_user.m"
    mdb__declarative_user__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 0)));
#line 1226 "declarative_user.m"
    mdb__declarative_user__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 1)));
#line 1226 "declarative_user.m"
    mdb__declarative_user__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 2)));
#line 1226 "declarative_user.m"
    mdb__declarative_user__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 3)));
#line 1226 "declarative_user.m"
    mdb__declarative_user__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 4)));
#line 1226 "declarative_user.m"
    mdb__declarative_user__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 5)));
#line 1226 "declarative_user.m"
    {
#line 1226 "declarative_user.m"
      mdb__browse__print_browser_term_6_p_0(mdb__declarative_user__BrowserTerm_24, mdb__declarative_user__V_31_31, mdb__declarative_user__CallerType_9, mdb__declarative_user__V_41_41);
    }
#line 1235 "declarative_user.m"
    if ((mdb__declarative_user__MaybeIoActions_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1245 "declarative_user.m"
      {
#line 1245 "declarative_user.m"
      }
#line 1235 "declarative_user.m"
    else
#line 1235 "declarative_user.m"
      {
#line 1235 "declarative_user.m"
        MR_Word mdb__declarative_user__IoActions_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeIoActions_13, (MR_Integer) 0)));
#line 1235 "declarative_user.m"
        MR_Integer mdb__declarative_user__NumTabled_60;
#line 1235 "declarative_user.m"
        MR_Integer mdb__declarative_user__NumUntabled_61;
#line 1235 "declarative_user.m"
        MR_Integer mdb__declarative_user__Start_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__IoActions_59, (MR_Integer) 0)));
#line 1235 "declarative_user.m"
        MR_Integer mdb__declarative_user__End_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__IoActions_59, (MR_Integer) 1)));

#line 1253 "declarative_user.m"
        {
#line 1253 "declarative_user.m"
          mdb__declarative_user__count_tabled_io_actions_2_8_p_0(mdb__declarative_user__Start_79, mdb__declarative_user__End_80, (MR_Integer) 0, &mdb__declarative_user__NumTabled_60, (MR_Integer) 0, &mdb__declarative_user__NumUntabled_61);
        }
#line 1237 "declarative_user.m"
        {
#line 1237 "declarative_user.m"
          mdb__declarative_user__write_io_actions_5_p_0(mdb__declarative_user__User_7, mdb__declarative_user__NumTabled_60, mdb__declarative_user__IoActions_59);
        }
#line 1238 "declarative_user.m"
        mdb__declarative_user__succeeded = (mdb__declarative_user__NumUntabled_61 > (MR_Integer) 0);
#line 1238 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 1239 "declarative_user.m"
          {
#line 1239 "declarative_user.m"
            MR_Word mdb__declarative_user__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 1)));
#line 1239 "declarative_user.m"
            MR_Word mdb__declarative_user__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 0)));
#line 1239 "declarative_user.m"
            MR_Word mdb__declarative_user__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 2)));
#line 1239 "declarative_user.m"
            MR_Word mdb__declarative_user__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 3)));
#line 1239 "declarative_user.m"
            MR_Word mdb__declarative_user__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 4)));
#line 1239 "declarative_user.m"
            MR_Word mdb__declarative_user__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_7, (MR_Integer) 5)));

#line 1239 "declarative_user.m"
            {
#line 1239 "declarative_user.m"
              mercury__io__write_string_4_p_0(mdb__declarative_user__V_65_65, (MR_String) "Warning: some IO actions for this atom are not tabled.\n");
            }
#line 1239 "declarative_user.m"
          }
#line 1238 "declarative_user.m"
        else
#line 1238 "declarative_user.m"
          {
#line 1238 "declarative_user.m"
          }
#line 1235 "declarative_user.m"
      }
#line 1213 "declarative_user.m"
  }
#line 1210 "declarative_user.m"
}

#line 1203 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__write_decl_final_atom_6_p_0(
#line 1203 "declarative_user.m"
  MR_Word mdb__declarative_user__User_7,
#line 1203 "declarative_user.m"
  MR_String mdb__declarative_user__Indent_8,
#line 1203 "declarative_user.m"
  MR_Word mdb__declarative_user__CallerType_9,
#line 1203 "declarative_user.m"
  MR_Word mdb__declarative_user__FinalAtom_10)
#line 1203 "declarative_user.m"
{
#line 1207 "declarative_user.m"
  {
#line 1207 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 1207 "declarative_user.m"
    MR_Word mdb__declarative_user__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) mdb__declarative_user__FinalAtom_10);

#line 1208 "declarative_user.m"
    {
#line 1208 "declarative_user.m"
      mdb__declarative_user__write_decl_atom_6_p_0(mdb__declarative_user__User_7, mdb__declarative_user__Indent_8, mdb__declarative_user__CallerType_9, mdb__declarative_user__V_14_14);
    }
#line 1207 "declarative_user.m"
  }
#line 1203 "declarative_user.m"
}

#line 1196 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__write_decl_init_atom_6_p_0(
#line 1196 "declarative_user.m"
  MR_Word mdb__declarative_user__User_7,
#line 1196 "declarative_user.m"
  MR_String mdb__declarative_user__Indent_8,
#line 1196 "declarative_user.m"
  MR_Word mdb__declarative_user__CallerType_9,
#line 1196 "declarative_user.m"
  MR_Word mdb__declarative_user__InitAtom_10)
#line 1196 "declarative_user.m"
{
#line 1200 "declarative_user.m"
  {
#line 1200 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 1200 "declarative_user.m"
    MR_Word mdb__declarative_user__V_14_14;

#line 1201 "declarative_user.m"
    {
#line 1201 "declarative_user.m"
      mdb__declarative_user__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1201 "declarative_user.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_user__V_14_14, 0) = ((MR_Box) (mdb__declarative_user__InitAtom_10));
#line 1201 "declarative_user.m"
    }
#line 1201 "declarative_user.m"
    {
#line 1201 "declarative_user.m"
      mdb__declarative_user__write_decl_atom_6_p_0(mdb__declarative_user__User_7, mdb__declarative_user__Indent_8, mdb__declarative_user__CallerType_9, mdb__declarative_user__V_14_14);
    }
#line 1200 "declarative_user.m"
  }
#line 1196 "declarative_user.m"
}

#line 1172 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__write_decl_bug_4_p_0_1(
#line 1172 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 1172 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 1172 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_2,
#line 1172 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_3)
#line 1172 "declarative_user.m"
{
#line 1172 "declarative_user.m"
  {
#line 1172 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;

#line 1172 "declarative_user.m"
    {
#line 1172 "declarative_user.m"
      mdb__declarative_user__write_decl_final_atom_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 5))), ((MR_Word) mdb__declarative_user__wrapper_arg_1));
    }
#line 1172 "declarative_user.m"
  }
#line 1172 "declarative_user.m"
}

#line 1164 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__write_decl_bug_4_p_0(
#line 1164 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 1164 "declarative_user.m"
  MR_Word mdb__declarative_user__User_2)
#line 1164 "declarative_user.m"
{
#line 1167 "declarative_user.m"
  {
#line 1167 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 1167 "declarative_user.m"
    MR_Word mdb__declarative_user__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 1)));
#line 1170 "declarative_user.m"
    MR_Word mdb__declarative_user__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 5)));
#line 1170 "declarative_user.m"
    MR_Word mdb__declarative_user__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 4)));
#line 1170 "declarative_user.m"
    MR_Word mdb__declarative_user__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 3)));
#line 1170 "declarative_user.m"
    MR_Word mdb__declarative_user__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 2)));
#line 1170 "declarative_user.m"
    MR_Word mdb__declarative_user__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 0)));

#line 1167 "declarative_user.m"
    if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1167 "declarative_user.m"
      {
#line 1167 "declarative_user.m"
        MR_Word mdb__declarative_user__EBug_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));

#line 1174 "declarative_user.m"
#line 1174 "declarative_user.m"
        switch (MR_tag((MR_Word) mdb__declarative_user__EBug_5)) {
#line 1174 "declarative_user.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1174 "declarative_user.m"
          case (MR_Integer) 0:
#line 1169 "declarative_user.m"
            {
#line 1169 "declarative_user.m"
              MR_Word mdb__declarative_user__Atom_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__EBug_5, (MR_Integer) 1)));
#line 1169 "declarative_user.m"
              MR_Word mdb__declarative_user__Contour_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__EBug_5, (MR_Integer) 2)));
#line 1169 "declarative_user.m"
              MR_Word mdb__declarative_user__V_40_40;
#line 1169 "declarative_user.m"
              MR_Word mdb__declarative_user__V_43_43;
#line 1169 "declarative_user.m"
              MR_Word mdb__declarative_user__V_45_45;
#line 1169 "declarative_user.m"
              MR_Word mdb__declarative_user__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__EBug_5, (MR_Integer) 0)));
#line 1169 "declarative_user.m"
              MR_Integer mdb__declarative_user__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__EBug_5, (MR_Integer) 3)));

#line 1170 "declarative_user.m"
              {
#line 1170 "declarative_user.m"
                mercury__io__write_string_4_p_0(mdb__declarative_user__V_114_114, (MR_String) "Found incorrect contour:\n");
              }
#line 1172 "declarative_user.m"
              {
#line 1172 "declarative_user.m"
                mdb__declarative_user__V_43_43 = mdb__declarative_user__decl_caller_type_0_f_0();
              }
#line 1172 "declarative_user.m"
              {
#line 1172 "declarative_user.m"
                mdb__declarative_user__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1172 "declarative_user.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_user__V_40_40, 0) = ((MR_Box) (&mdb__declarative_user_scalar_common_11[0]));
#line 1172 "declarative_user.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_user__V_40_40, 1) = ((MR_Box) (mdb__declarative_user__write_decl_bug_4_p_0_1));
#line 1172 "declarative_user.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_user__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1172 "declarative_user.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_user__V_40_40, 3) = ((MR_Box) (mdb__declarative_user__User_2));
#line 1172 "declarative_user.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_user__V_40_40, 4) = ((MR_Box) ((MR_String) ""));
#line 1172 "declarative_user.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_user__V_40_40, 5) = ((MR_Box) (mdb__declarative_user__V_43_43));
#line 1172 "declarative_user.m"
              }
#line 1171 "declarative_user.m"
              {
#line 1171 "declarative_user.m"
                mercury__io__write_list_5_p_1((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0, mdb__declarative_user__Contour_10, (MR_String) "", mdb__declarative_user__V_40_40);
              }
#line 1173 "declarative_user.m"
              {
#line 1173 "declarative_user.m"
                mdb__declarative_user__V_45_45 = mdb__declarative_user__decl_caller_type_0_f_0();
              }
#line 1173 "declarative_user.m"
              {
#line 1173 "declarative_user.m"
                mdb__declarative_user__write_decl_final_atom_6_p_0(mdb__declarative_user__User_2, (MR_String) "", mdb__declarative_user__V_45_45, mdb__declarative_user__Atom_9);
              }
#line 1169 "declarative_user.m"
            }
#line 1174 "declarative_user.m"
            break;
#line 1174 "declarative_user.m"
          case (MR_Integer) 1:
#line 1175 "declarative_user.m"
            {
#line 1175 "declarative_user.m"
              MR_Word mdb__declarative_user__V_34_34;
#line 1175 "declarative_user.m"
              MR_Word mdb__declarative_user__Atom_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__EBug_5, (MR_Integer) 0)));
#line 1175 "declarative_user.m"
              MR_Integer mdb__declarative_user__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_user__EBug_5, (MR_Integer) 1)));

#line 1176 "declarative_user.m"
              {
#line 1176 "declarative_user.m"
                mercury__io__write_string_4_p_0(mdb__declarative_user__V_114_114, (MR_String) "Found partially uncovered atom:\n");
              }
#line 1178 "declarative_user.m"
              {
#line 1178 "declarative_user.m"
                mdb__declarative_user__V_34_34 = mdb__declarative_user__decl_caller_type_0_f_0();
              }
#line 1178 "declarative_user.m"
              {
#line 1178 "declarative_user.m"
                mdb__declarative_user__write_decl_init_atom_6_p_0(mdb__declarative_user__User_2, (MR_String) "", mdb__declarative_user__V_34_34, mdb__declarative_user__Atom_47);
              }
#line 1175 "declarative_user.m"
            }
#line 1174 "declarative_user.m"
            break;
#line 1174 "declarative_user.m"
          case (MR_Integer) 2:
#line 1180 "declarative_user.m"
            {
#line 1180 "declarative_user.m"
              MR_Word mdb__declarative_user__TypeInfo_103_103;
#line 1180 "declarative_user.m"
              MR_Word mdb__declarative_user__ExceptionRep_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__EBug_5, (MR_Integer) 1)));
#line 1180 "declarative_user.m"
              MR_Word mdb__declarative_user__Exception_15;
#line 1180 "declarative_user.m"
              MR_Word mdb__declarative_user__V_22_22;
#line 1180 "declarative_user.m"
              MR_Word mdb__declarative_user__V_24_24;
#line 1180 "declarative_user.m"
              MR_Box mdb__declarative_user__V_26_26;
#line 1180 "declarative_user.m"
              MR_Word mdb__declarative_user__V_28_28;
#line 1180 "declarative_user.m"
              MR_Word mdb__declarative_user__Atom_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__EBug_5, (MR_Integer) 0)));
#line 1180 "declarative_user.m"
              MR_Integer mdb__declarative_user__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_user__EBug_5, (MR_Integer) 2)));
#line 1185 "declarative_user.m"
              MR_Word mdb__declarative_user__V_84_84;
#line 1185 "declarative_user.m"
              MR_Word mdb__declarative_user__V_85_85;
#line 1185 "declarative_user.m"
              MR_Word mdb__declarative_user__V_86_86;
#line 1185 "declarative_user.m"
              MR_Word mdb__declarative_user__V_87_87;
#line 1185 "declarative_user.m"
              MR_Word mdb__declarative_user__V_88_88;
#line 1187 "declarative_user.m"
              MR_Word mdb__declarative_user__V_89_89;
#line 1187 "declarative_user.m"
              MR_Word mdb__declarative_user__V_90_90;
#line 1187 "declarative_user.m"
              MR_Word mdb__declarative_user__V_91_91;
#line 1187 "declarative_user.m"
              MR_Word mdb__declarative_user__V_92_92;
#line 1187 "declarative_user.m"
              MR_Word mdb__declarative_user__V_93_93;

#line 1181 "declarative_user.m"
              {
#line 1181 "declarative_user.m"
                mercury__io__write_string_4_p_0(mdb__declarative_user__V_114_114, (MR_String) "Found unhandled or incorrect exception:\n");
              }
#line 1183 "declarative_user.m"
              {
#line 1183 "declarative_user.m"
                mdb__declarative_user__V_22_22 = mdb__declarative_user__decl_caller_type_0_f_0();
              }
#line 1183 "declarative_user.m"
              {
#line 1183 "declarative_user.m"
                mdb__declarative_user__write_decl_init_atom_6_p_0(mdb__declarative_user__User_2, (MR_String) "", mdb__declarative_user__V_22_22, mdb__declarative_user__Atom_48);
              }
#line 1184 "declarative_user.m"
              {
#line 1184 "declarative_user.m"
                mdb__term_rep__rep_to_univ_2_p_0(mdb__declarative_user__ExceptionRep_13, &mdb__declarative_user__Exception_15);
              }
#line 1185 "declarative_user.m"
              mdb__declarative_user__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 0)));
#line 1185 "declarative_user.m"
              mdb__declarative_user__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 1)));
#line 1185 "declarative_user.m"
              mdb__declarative_user__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 2)));
#line 1185 "declarative_user.m"
              mdb__declarative_user__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 3)));
#line 1185 "declarative_user.m"
              mdb__declarative_user__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 4)));
#line 1185 "declarative_user.m"
              mdb__declarative_user__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 5)));
#line 1186 "declarative_user.m"
              {
#line 1186 "declarative_user.m"
                mdb__declarative_user__V_26_26 = mercury__univ__univ_value_1_f_0(&mdb__declarative_user__TypeInfo_103_103, mdb__declarative_user__Exception_15);
              }
#line 1185 "declarative_user.m"
              {
#line 1185 "declarative_user.m"
                mercury__io__write_5_p_2(mdb__declarative_user__TypeInfo_103_103, mdb__declarative_user__V_24_24, (MR_Integer) 2, mdb__declarative_user__V_26_26);
              }
#line 1187 "declarative_user.m"
              mdb__declarative_user__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 0)));
#line 1187 "declarative_user.m"
              mdb__declarative_user__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 1)));
#line 1187 "declarative_user.m"
              mdb__declarative_user__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 2)));
#line 1187 "declarative_user.m"
              mdb__declarative_user__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 3)));
#line 1187 "declarative_user.m"
              mdb__declarative_user__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 4)));
#line 1187 "declarative_user.m"
              mdb__declarative_user__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_2, (MR_Integer) 5)));
#line 1187 "declarative_user.m"
              {
#line 1187 "declarative_user.m"
                mercury__io__nl_3_p_0(mdb__declarative_user__V_28_28);
              }
#line 1180 "declarative_user.m"
            }
#line 1174 "declarative_user.m"
            break;
#line 1174 "declarative_user.m"
        }
#line 1167 "declarative_user.m"
      }
#line 1167 "declarative_user.m"
    else
#line 1190 "declarative_user.m"
      {
#line 1190 "declarative_user.m"
        MR_Word mdb__declarative_user__IBug_49 = (MR_Word) MR_body(((MR_Word) mdb__declarative_user__HeadVar__1_1), (MR_Integer) 0);
#line 1190 "declarative_user.m"
        MR_Word mdb__declarative_user__Parent_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__IBug_49, (MR_Integer) 0)));
#line 1190 "declarative_user.m"
        MR_Word mdb__declarative_user__Call_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__IBug_49, (MR_Integer) 2)));
#line 1190 "declarative_user.m"
        MR_Word mdb__declarative_user__V_62_62;
#line 1190 "declarative_user.m"
        MR_Word mdb__declarative_user__V_63_63;
#line 1190 "declarative_user.m"
        MR_Word mdb__declarative_user__V_66_66;
#line 1190 "declarative_user.m"
        MR_Word mdb__declarative_user__V_67_67;
#line 1191 "declarative_user.m"
        MR_Integer mdb__declarative_user__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__IBug_49, (MR_Integer) 3)));

#line 1192 "declarative_user.m"
        {
#line 1192 "declarative_user.m"
          mercury__io__write_string_4_p_0(mdb__declarative_user__V_114_114, (MR_String) "Found inadmissible call:\n");
        }
#line 1193 "declarative_user.m"
        {
#line 1193 "declarative_user.m"
          mdb__declarative_user__V_62_62 = mdb__declarative_user__decl_caller_type_0_f_0();
        }
#line 1193 "declarative_user.m"
        {
#line 1193 "declarative_user.m"
          mdb__declarative_user__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1193 "declarative_user.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_user__V_63_63, 0) = ((MR_Box) (mdb__declarative_user__Parent_52));
#line 1193 "declarative_user.m"
        }
#line 1193 "declarative_user.m"
        {
#line 1193 "declarative_user.m"
          mdb__declarative_user__write_decl_atom_6_p_0(mdb__declarative_user__User_2, (MR_String) "Parent ", mdb__declarative_user__V_62_62, mdb__declarative_user__V_63_63);
        }
#line 1194 "declarative_user.m"
        {
#line 1194 "declarative_user.m"
          mdb__declarative_user__V_66_66 = mdb__declarative_user__decl_caller_type_0_f_0();
        }
#line 1194 "declarative_user.m"
        {
#line 1194 "declarative_user.m"
          mdb__declarative_user__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1194 "declarative_user.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_user__V_67_67, 0) = ((MR_Box) (mdb__declarative_user__Call_54));
#line 1194 "declarative_user.m"
        }
#line 1194 "declarative_user.m"
        {
#line 1194 "declarative_user.m"
          mdb__declarative_user__write_decl_atom_6_p_0(mdb__declarative_user__User_2, (MR_String) "Call ", mdb__declarative_user__V_66_66, mdb__declarative_user__V_67_67);
        }
#line 1190 "declarative_user.m"
      }
#line 1167 "declarative_user.m"
  }
#line 1164 "declarative_user.m"
}

#line 1130 "declarative_user.m"
static MR_Word MR_CALL 
mdb__declarative_user__decl_caller_type_0_f_0(void)
#line 1130 "declarative_user.m"
{
#line 1132 "declarative_user.m"
  {
#line 1132 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;

#line 1132 "declarative_user.m"
    return (MR_Integer) 0;
#line 1132 "declarative_user.m"
  }
#line 1130 "declarative_user.m"
}

#line 1066 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__is_dash_1_p_0(
#line 1066 "declarative_user.m"
  MR_Char mdb__declarative_user__HeadVar__1_1)
#line 1066 "declarative_user.m"
{
#line 1068 "declarative_user.m"
  {
#line 1068 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded = (mdb__declarative_user__HeadVar__1_1 == (MR_Char) 45);

#line 1068 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 1068 "declarative_user.m"
  }
#line 1066 "declarative_user.m"
}

#line 1042 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__help_cmd_2_p_0(
#line 1042 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 1042 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2)
#line 1042 "declarative_user.m"
{
#line 1044 "declarative_user.m"
  {
#line 1044 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;

#line 1044 "declarative_user.m"
    if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1044 "declarative_user.m"
      {
#line 1044 "declarative_user.m"
        *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_user_scalar_common_1[19]);
#line 1044 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 1044 "declarative_user.m"
      }
#line 1044 "declarative_user.m"
    else
#line 1045 "declarative_user.m"
      {
#line 1045 "declarative_user.m"
        MR_String mdb__declarative_user__Cmd_4 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
#line 1045 "declarative_user.m"
        MR_Word mdb__declarative_user__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 1045 "declarative_user.m"
        MR_Word mdb__declarative_user__V_6_6;

#line 1045 "declarative_user.m"
        mdb__declarative_user__succeeded = (mdb__declarative_user__V_5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1045 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 1045 "declarative_user.m"
          {
#line 1045 "declarative_user.m"
            {
#line 1045 "declarative_user.m"
              mdb__declarative_user__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1045 "declarative_user.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_user__V_6_6, 0) = ((MR_Box) (mdb__declarative_user__Cmd_4));
#line 1045 "declarative_user.m"
            }
#line 1045 "declarative_user.m"
            {
#line 1045 "declarative_user.m"
              MR_Word base;
#line 1045 "declarative_user.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1045 "declarative_user.m"
              *mdb__declarative_user__HeadVar__2_2 = base;
#line 1045 "declarative_user.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1045 "declarative_user.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_user__V_6_6));
#line 1045 "declarative_user.m"
            }
#line 1045 "declarative_user.m"
            mdb__declarative_user__succeeded = MR_TRUE;
#line 1045 "declarative_user.m"
          }
#line 1045 "declarative_user.m"
      }
#line 1044 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 1044 "declarative_user.m"
  }
#line 1042 "declarative_user.m"
}

#line 1023 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__search_mode_cmd_2_p_0(
#line 1023 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 1023 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2)
#line 1023 "declarative_user.m"
{
#line 1025 "declarative_user.m"
  {
#line 1025 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1025 "declarative_user.m"
    MR_Word mdb__declarative_user__V_36_36;
#line 1025 "declarative_user.m"
    MR_String mdb__declarative_user__V_37_37;
#line 1025 "declarative_user.m"
    MR_Integer mdb__declarative_user__slot_0;
#line 1025 "declarative_user.m"
    MR_String mdb__declarative_user__str_1;

#line 1025 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 1025 "declarative_user.m"
      {
#line 1025 "declarative_user.m"
        mdb__declarative_user__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
#line 1025 "declarative_user.m"
        mdb__declarative_user__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 1025 "declarative_user.m"
        mdb__declarative_user__succeeded = (mdb__declarative_user__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1025 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 1025 "declarative_user.m"
          {
#line 1025 "declarative_user.m"
            /* hashed string simple lookup switch */
#line 1025 "declarative_user.m"
            /* compute the hash value of the input string */
#line 1025 "declarative_user.m"
            mdb__declarative_user__slot_0 = ((MR_hash_string6(mdb__declarative_user__V_37_37)) & (MR_Integer) 63);
#line 1025 "declarative_user.m"
            /* no collisions; no hash chain loop */
#line 1025 "declarative_user.m"
            /* lookup the string for this hash slot */
#line 1025 "declarative_user.m"
            mdb__declarative_user__str_1 = ((&mdb__declarative_user_vector_common_10[0 + mdb__declarative_user__slot_0]))->mdb__declarative_user__vector_common_type_10_0__vct_10_f_0;
#line 1025 "declarative_user.m"
            /* did we find a match? */
#line 1025 "declarative_user.m"
            if ((((mdb__declarative_user__str_1 != NULL)) && ((strcmp(mdb__declarative_user__str_1, mdb__declarative_user__V_37_37) == 0))))
#line 1025 "declarative_user.m"
              {
#line 1025 "declarative_user.m"
                /* we found a match; look up the results */
#line 1025 "declarative_user.m"
                *mdb__declarative_user__HeadVar__2_2 = ((&mdb__declarative_user_vector_common_10[0 + mdb__declarative_user__slot_0]))->mdb__declarative_user__vector_common_type_10_0__vct_10_f_1;
#line 1025 "declarative_user.m"
                mdb__declarative_user__succeeded = MR_TRUE;
#line 1025 "declarative_user.m"
                /* jump out of search loop */
#line 1025 "declarative_user.m"
                goto label_0;
#line 1025 "declarative_user.m"
              }
#line 1025 "declarative_user.m"
            mdb__declarative_user__succeeded = MR_FALSE;
#line 1025 "declarative_user.m"
          label_0:;
#line 1025 "declarative_user.m"
          }
#line 1025 "declarative_user.m"
      }
#line 1025 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 1025 "declarative_user.m"
  }
#line 1023 "declarative_user.m"
}

#line 1018 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__trust_arg_cmd_2_p_0(
#line 1018 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 1018 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2)
#line 1018 "declarative_user.m"
{
#line 1020 "declarative_user.m"
  {
#line 1020 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;

#line 1020 "declarative_user.m"
    if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1020 "declarative_user.m"
      {
#line 1020 "declarative_user.m"
        *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 1020 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 1020 "declarative_user.m"
      }
#line 1020 "declarative_user.m"
    else
#line 1021 "declarative_user.m"
      {
#line 1021 "declarative_user.m"
        MR_String mdb__declarative_user__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
#line 1021 "declarative_user.m"
        MR_Word mdb__declarative_user__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));

#line 1021 "declarative_user.m"
        mdb__declarative_user__succeeded = (strcmp(mdb__declarative_user__V_3_3, (MR_String) "module") == 0);
#line 1021 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 1021 "declarative_user.m"
          {
#line 1021 "declarative_user.m"
            mdb__declarative_user__succeeded = (mdb__declarative_user__V_4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1021 "declarative_user.m"
            if (mdb__declarative_user__succeeded)
#line 1021 "declarative_user.m"
              {
#line 1021 "declarative_user.m"
                *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 1021 "declarative_user.m"
                mdb__declarative_user__succeeded = MR_TRUE;
#line 1021 "declarative_user.m"
              }
#line 1021 "declarative_user.m"
          }
#line 1021 "declarative_user.m"
      }
#line 1020 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 1020 "declarative_user.m"
  }
#line 1018 "declarative_user.m"
}

#line 1003 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__num_io_actions_cmd_2_p_0(
#line 1003 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 1003 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2)
#line 1003 "declarative_user.m"
{
#line 1005 "declarative_user.m"
  {
#line 1005 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1005 "declarative_user.m"
    MR_String mdb__declarative_user__Arg_3;
#line 1005 "declarative_user.m"
    MR_Integer mdb__declarative_user__N_4;
#line 1005 "declarative_user.m"
    MR_Word mdb__declarative_user__V_5_5;
#line 1005 "declarative_user.m"
    MR_Word mdb__declarative_user__V_6_6;

#line 1005 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 1005 "declarative_user.m"
      {
#line 1005 "declarative_user.m"
        mdb__declarative_user__Arg_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
#line 1005 "declarative_user.m"
        mdb__declarative_user__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 1005 "declarative_user.m"
        mdb__declarative_user__succeeded = (mdb__declarative_user__V_5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1005 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 1005 "declarative_user.m"
          {
#line 1006 "declarative_user.m"
            {
#line 1006 "declarative_user.m"
              mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__Arg_3, &mdb__declarative_user__N_4);
            }
#line 1005 "declarative_user.m"
            if (mdb__declarative_user__succeeded)
#line 1005 "declarative_user.m"
              {
#line 1005 "declarative_user.m"
                {
#line 1005 "declarative_user.m"
                  mdb__declarative_user__V_6_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1005 "declarative_user.m"
                  MR_hl_field(MR_mktag(3), mdb__declarative_user__V_6_6, 0) = ((MR_Box) (mdb__declarative_user__N_4));
#line 1005 "declarative_user.m"
                }
#line 1005 "declarative_user.m"
                {
#line 1005 "declarative_user.m"
                  MR_Word base;
#line 1005 "declarative_user.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1005 "declarative_user.m"
                  *mdb__declarative_user__HeadVar__2_2 = base;
#line 1005 "declarative_user.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1005 "declarative_user.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_user__V_6_6));
#line 1005 "declarative_user.m"
                }
#line 1005 "declarative_user.m"
                mdb__declarative_user__succeeded = MR_TRUE;
#line 1005 "declarative_user.m"
              }
#line 1005 "declarative_user.m"
          }
#line 1005 "declarative_user.m"
      }
#line 1005 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 1005 "declarative_user.m"
  }
#line 1003 "declarative_user.m"
}

#line 971 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__format_param_arg_cmd_3_p_0(
#line 971 "declarative_user.m"
  MR_String mdb__declarative_user__Cmd_4,
#line 971 "declarative_user.m"
  MR_Word mdb__declarative_user__ArgWords0_5,
#line 971 "declarative_user.m"
  MR_Word * mdb__declarative_user__Command_6)
#line 971 "declarative_user.m"
{
#line 974 "declarative_user.m"
  {
#line 974 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__ArgWords0_5)) == (MR_mktag((MR_Integer) 1)));
#line 974 "declarative_user.m"
    MR_Word mdb__declarative_user__Setting_15;
#line 974 "declarative_user.m"
    MR_Word mdb__declarative_user__MaybeOptionTable_17;
#line 974 "declarative_user.m"
    MR_Word mdb__declarative_user__V_29_29;
#line 8887 "mdb.declarative_user.c"
    MR_Word mdb__declarative_user__ArgWords1_7;
#line 975 "declarative_user.m"
    MR_String mdb__declarative_user__V_18_18;

#line 975 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 975 "declarative_user.m"
      {
#line 975 "declarative_user.m"
        mdb__declarative_user__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgWords0_5, (MR_Integer) 0)));
#line 975 "declarative_user.m"
        mdb__declarative_user__ArgWords1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgWords0_5, (MR_Integer) 1)));
#line 975 "declarative_user.m"
        mdb__declarative_user__succeeded = (strcmp(mdb__declarative_user__V_18_18, (MR_String) "io") == 0);
#line 975 "declarative_user.m"
      }
#line 8904 "mdb.declarative_user.c"
    if (mdb__declarative_user__succeeded)
#line 8906 "mdb.declarative_user.c"
      {
#line 8908 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__TypeCtorInfo_30_30;
#line 8910 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__TypeCtorInfo_31_31;
#line 8912 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__ParsedCommand_12;
#line 8914 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__FormatCmd_13;
#line 8916 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__MaybeOptionTable0_14;
#line 8918 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__V_19_19;
#line 8920 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__STATE_VARIABLE_OptionTable_20_20;
#line 8922 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__V_21_21;
#line 8924 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__V_22_22;
#line 8926 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__STATE_VARIABLE_OptionTable_23_23;
#line 8928 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__V_24_24;
#line 8930 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__V_25_25;
#line 8932 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__V_26_26;
#line 8934 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__STATE_VARIABLE_OptionTable_27_27;
#line 8936 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__V_28_28;
#line 982 "declarative_user.m"
        MR_String mdb__declarative_user__V_10_10;
#line 982 "declarative_user.m"
        MR_Word mdb__declarative_user__V_11_11;

#line 982 "declarative_user.m"
        mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__ArgWords1_7)) == (MR_mktag((MR_Integer) 1)));
#line 982 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 982 "declarative_user.m"
          {
#line 982 "declarative_user.m"
            mdb__declarative_user__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgWords1_7, (MR_Integer) 0)));
#line 982 "declarative_user.m"
            mdb__declarative_user__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgWords1_7, (MR_Integer) 1)));
#line 983 "declarative_user.m"
            {
#line 983 "declarative_user.m"
              mdb__declarative_user__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 983 "declarative_user.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_user__V_19_19, 0) = ((MR_Box) (mdb__declarative_user__Cmd_4));
#line 983 "declarative_user.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_user__V_19_19, 1) = ((MR_Box) (mdb__declarative_user__ArgWords1_7));
#line 983 "declarative_user.m"
            }
#line 983 "declarative_user.m"
            {
#line 983 "declarative_user.m"
              mdb__declarative_user__succeeded = mdb__parse__parse_2_p_0(mdb__declarative_user__V_19_19, &mdb__declarative_user__ParsedCommand_12);
            }
#line 8968 "mdb.declarative_user.c"
            if (mdb__declarative_user__succeeded)
#line 8970 "mdb.declarative_user.c"
              {
#line 984 "declarative_user.m"
                mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__ParsedCommand_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__ParsedCommand_12, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 984 "declarative_user.m"
                if (mdb__declarative_user__succeeded)
#line 984 "declarative_user.m"
                  {
#line 984 "declarative_user.m"
                    mdb__declarative_user__FormatCmd_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__ParsedCommand_12, (MR_Integer) 1)));
#line 985 "declarative_user.m"
                    mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__FormatCmd_13)) == (MR_mktag((MR_Integer) 2)));
#line 985 "declarative_user.m"
                    if (mdb__declarative_user__succeeded)
#line 985 "declarative_user.m"
                      {
#line 985 "declarative_user.m"
                        mdb__declarative_user__MaybeOptionTable0_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__FormatCmd_13, (MR_Integer) 0)));
#line 985 "declarative_user.m"
                        mdb__declarative_user__Setting_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__FormatCmd_13, (MR_Integer) 1)));
#line 992 "declarative_user.m"
                        mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__MaybeOptionTable0_14)) == (MR_mktag((MR_Integer) 0)));
#line 992 "declarative_user.m"
                        if (mdb__declarative_user__succeeded)
#line 992 "declarative_user.m"
                          {
#line 992 "declarative_user.m"
                            mdb__declarative_user__STATE_VARIABLE_OptionTable_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__MaybeOptionTable0_14, (MR_Integer) 0)));
#line 993 "declarative_user.m"
                            mdb__declarative_user__V_21_21 = (MR_Integer) 0;
#line 993 "declarative_user.m"
                            mdb__declarative_user__V_24_24 = (MR_Integer) 0;
#line 9002 "mdb.declarative_user.c"
                            mdb__declarative_user__TypeCtorInfo_30_30 = (MR_Word) &mdb__parse__mdb__parse__type_ctor_info_setting_option_0;
#line 9004 "mdb.declarative_user.c"
                            mdb__declarative_user__TypeCtorInfo_31_31 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 993 "declarative_user.m"
                            mdb__declarative_user__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_9[1]);
#line 993 "declarative_user.m"
                            {
#line 993 "declarative_user.m"
                              mercury__map__det_update_4_p_0(mdb__declarative_user__TypeCtorInfo_30_30, mdb__declarative_user__TypeCtorInfo_31_31, ((MR_Box) (mdb__declarative_user__V_21_21)), ((MR_Box) (mdb__declarative_user__V_22_22)), mdb__declarative_user__STATE_VARIABLE_OptionTable_20_20, &mdb__declarative_user__STATE_VARIABLE_OptionTable_23_23);
                            }
#line 994 "declarative_user.m"
                            mdb__declarative_user__V_25_25 = (MR_Integer) 2;
#line 994 "declarative_user.m"
                            mdb__declarative_user__V_28_28 = (MR_Integer) 1;
#line 994 "declarative_user.m"
                            mdb__declarative_user__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_9[2]);
#line 994 "declarative_user.m"
                            {
#line 994 "declarative_user.m"
                              mercury__map__det_update_4_p_0(mdb__declarative_user__TypeCtorInfo_30_30, mdb__declarative_user__TypeCtorInfo_31_31, ((MR_Box) (mdb__declarative_user__V_25_25)), ((MR_Box) (mdb__declarative_user__V_26_26)), mdb__declarative_user__STATE_VARIABLE_OptionTable_23_23, &mdb__declarative_user__STATE_VARIABLE_OptionTable_27_27);
                            }
#line 995 "declarative_user.m"
                            {
#line 995 "declarative_user.m"
                              mdb__declarative_user__MaybeOptionTable_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 995 "declarative_user.m"
                              MR_hl_field(MR_mktag(0), mdb__declarative_user__MaybeOptionTable_17, 0) = ((MR_Box) (mdb__declarative_user__STATE_VARIABLE_OptionTable_27_27));
#line 995 "declarative_user.m"
                            }
#line 995 "declarative_user.m"
                            mdb__declarative_user__succeeded = MR_TRUE;
#line 992 "declarative_user.m"
                          }
#line 985 "declarative_user.m"
                      }
#line 984 "declarative_user.m"
                  }
#line 9040 "mdb.declarative_user.c"
              }
#line 982 "declarative_user.m"
          }
#line 9044 "mdb.declarative_user.c"
      }
#line 9046 "mdb.declarative_user.c"
    else
#line 9048 "mdb.declarative_user.c"
      {
#line 9050 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__ParsedCommand_39;
#line 9052 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__FormatCmd_40;
#line 9054 "mdb.declarative_user.c"
        MR_Word mdb__declarative_user__V_42_42;
#line 982 "declarative_user.m"
        MR_String mdb__declarative_user__V_32_32;
#line 982 "declarative_user.m"
        MR_Word mdb__declarative_user__V_33_33;

#line 982 "declarative_user.m"
        mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__ArgWords0_5)) == (MR_mktag((MR_Integer) 1)));
#line 982 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 982 "declarative_user.m"
          {
#line 982 "declarative_user.m"
            mdb__declarative_user__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgWords0_5, (MR_Integer) 0)));
#line 982 "declarative_user.m"
            mdb__declarative_user__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgWords0_5, (MR_Integer) 1)));
#line 983 "declarative_user.m"
            {
#line 983 "declarative_user.m"
              mdb__declarative_user__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 983 "declarative_user.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_user__V_42_42, 0) = ((MR_Box) (mdb__declarative_user__Cmd_4));
#line 983 "declarative_user.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_user__V_42_42, 1) = ((MR_Box) (mdb__declarative_user__ArgWords0_5));
#line 983 "declarative_user.m"
            }
#line 983 "declarative_user.m"
            {
#line 983 "declarative_user.m"
              mdb__declarative_user__succeeded = mdb__parse__parse_2_p_0(mdb__declarative_user__V_42_42, &mdb__declarative_user__ParsedCommand_39);
            }
#line 9086 "mdb.declarative_user.c"
            if (mdb__declarative_user__succeeded)
#line 9088 "mdb.declarative_user.c"
              {
#line 984 "declarative_user.m"
                mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__ParsedCommand_39)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__ParsedCommand_39, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 984 "declarative_user.m"
                if (mdb__declarative_user__succeeded)
#line 984 "declarative_user.m"
                  {
#line 984 "declarative_user.m"
                    mdb__declarative_user__FormatCmd_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__ParsedCommand_39, (MR_Integer) 1)));
#line 985 "declarative_user.m"
                    mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__FormatCmd_40)) == (MR_mktag((MR_Integer) 2)));
#line 985 "declarative_user.m"
                    if (mdb__declarative_user__succeeded)
#line 985 "declarative_user.m"
                      {
#line 985 "declarative_user.m"
                        mdb__declarative_user__MaybeOptionTable_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__FormatCmd_40, (MR_Integer) 0)));
#line 985 "declarative_user.m"
                        mdb__declarative_user__Setting_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__FormatCmd_40, (MR_Integer) 1)));
#line 985 "declarative_user.m"
                      }
#line 984 "declarative_user.m"
                  }
#line 9112 "mdb.declarative_user.c"
              }
#line 982 "declarative_user.m"
          }
#line 9116 "mdb.declarative_user.c"
      }
#line 974 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 974 "declarative_user.m"
      {
#line 1001 "declarative_user.m"
        {
#line 1001 "declarative_user.m"
          mdb__declarative_user__V_29_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1001 "declarative_user.m"
          MR_hl_field(MR_mktag(2), mdb__declarative_user__V_29_29, 0) = ((MR_Box) (mdb__declarative_user__MaybeOptionTable_17));
#line 1001 "declarative_user.m"
          MR_hl_field(MR_mktag(2), mdb__declarative_user__V_29_29, 1) = ((MR_Box) (mdb__declarative_user__Setting_15));
#line 1001 "declarative_user.m"
        }
#line 1001 "declarative_user.m"
        {
#line 1001 "declarative_user.m"
          MR_Word base;
#line 1001 "declarative_user.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1001 "declarative_user.m"
          *mdb__declarative_user__Command_6 = base;
#line 1001 "declarative_user.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1001 "declarative_user.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_user__V_29_29));
#line 1001 "declarative_user.m"
        }
#line 1001 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 974 "declarative_user.m"
      }
#line 974 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 974 "declarative_user.m"
  }
#line 971 "declarative_user.m"
}

#line 962 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__format_arg_cmd_2_p_0(
#line 962 "declarative_user.m"
  MR_Word mdb__declarative_user__ArgWords_3,
#line 962 "declarative_user.m"
  MR_Word * mdb__declarative_user__UserCommand_4)
#line 962 "declarative_user.m"
{
#line 964 "declarative_user.m"
  {
#line 964 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__ArgWords_3)) == (MR_mktag((MR_Integer) 1)));
#line 964 "declarative_user.m"
    MR_Word mdb__declarative_user__Command_7;
#line 964 "declarative_user.m"
    MR_Word mdb__declarative_user__FormatCmd_8;
#line 964 "declarative_user.m"
    MR_Word mdb__declarative_user__V_11_11;
#line 964 "declarative_user.m"
    MR_String mdb__declarative_user__V_12_12;
#line 965 "declarative_user.m"
    MR_String mdb__declarative_user__V_5_5;
#line 965 "declarative_user.m"
    MR_Word mdb__declarative_user__V_6_6;
#line 968 "declarative_user.m"
    MR_Word mdb__declarative_user__MaybeOptionTable_9;
#line 968 "declarative_user.m"
    MR_Word mdb__declarative_user__Setting_10;

#line 965 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 965 "declarative_user.m"
      {
#line 965 "declarative_user.m"
        mdb__declarative_user__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgWords_3, (MR_Integer) 0)));
#line 965 "declarative_user.m"
        mdb__declarative_user__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgWords_3, (MR_Integer) 1)));
#line 966 "declarative_user.m"
        mdb__declarative_user__V_12_12 = (MR_String) "format";
#line 966 "declarative_user.m"
        {
#line 966 "declarative_user.m"
          mdb__declarative_user__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 966 "declarative_user.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_user__V_11_11, 0) = ((MR_Box) (mdb__declarative_user__V_12_12));
#line 966 "declarative_user.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_user__V_11_11, 1) = ((MR_Box) (mdb__declarative_user__ArgWords_3));
#line 966 "declarative_user.m"
        }
#line 966 "declarative_user.m"
        {
#line 966 "declarative_user.m"
          mdb__declarative_user__succeeded = mdb__parse__parse_2_p_0(mdb__declarative_user__V_11_11, &mdb__declarative_user__Command_7);
        }
#line 964 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 964 "declarative_user.m"
          {
#line 967 "declarative_user.m"
            mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) mdb__declarative_user__Command_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Command_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 967 "declarative_user.m"
            if (mdb__declarative_user__succeeded)
#line 967 "declarative_user.m"
              {
#line 967 "declarative_user.m"
                mdb__declarative_user__FormatCmd_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Command_7, (MR_Integer) 1)));
#line 968 "declarative_user.m"
                mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__FormatCmd_8)) == (MR_mktag((MR_Integer) 1)));
#line 968 "declarative_user.m"
                if (mdb__declarative_user__succeeded)
#line 968 "declarative_user.m"
                  {
#line 968 "declarative_user.m"
                    mdb__declarative_user__MaybeOptionTable_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__FormatCmd_8, (MR_Integer) 0)));
#line 968 "declarative_user.m"
                    mdb__declarative_user__Setting_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__FormatCmd_8, (MR_Integer) 1)));
#line 969 "declarative_user.m"
                    {
#line 969 "declarative_user.m"
                      MR_Word base;
#line 969 "declarative_user.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 969 "declarative_user.m"
                      *mdb__declarative_user__UserCommand_4 = base;
#line 969 "declarative_user.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 969 "declarative_user.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_user__FormatCmd_8));
#line 969 "declarative_user.m"
                    }
#line 969 "declarative_user.m"
                    mdb__declarative_user__succeeded = MR_TRUE;
#line 968 "declarative_user.m"
                  }
#line 967 "declarative_user.m"
              }
#line 964 "declarative_user.m"
          }
#line 965 "declarative_user.m"
      }
#line 964 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 964 "declarative_user.m"
  }
#line 962 "declarative_user.m"
}

#line 1054 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__print_arg_cmd_2_p_0_2(
#line 1054 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 1054 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1)
#line 1054 "declarative_user.m"
{
#line 1054 "declarative_user.m"
  {
#line 1054 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 1054 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;

#line 1054 "declarative_user.m"
    {
#line 1054 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__is_dash_1_p_0(((MR_Char) (MR_Word) mdb__declarative_user__wrapper_arg_1));
    }
#line 1054 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 1054 "declarative_user.m"
  }
#line 1054 "declarative_user.m"
}

#line 1054 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__print_arg_cmd_2_p_0_1(
#line 1054 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 1054 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1)
#line 1054 "declarative_user.m"
{
#line 1054 "declarative_user.m"
  {
#line 1054 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 1054 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;

#line 1054 "declarative_user.m"
    {
#line 1054 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__is_dash_1_p_0(((MR_Char) (MR_Word) mdb__declarative_user__wrapper_arg_1));
    }
#line 1054 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 1054 "declarative_user.m"
  }
#line 1054 "declarative_user.m"
}

#line 954 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__print_arg_cmd_2_p_0(
#line 954 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 954 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2)
#line 954 "declarative_user.m"
{
#line 956 "declarative_user.m"
  {
#line 956 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;

#line 956 "declarative_user.m"
    if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 956 "declarative_user.m"
      {
#line 956 "declarative_user.m"
        *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 956 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 956 "declarative_user.m"
      }
#line 956 "declarative_user.m"
    else
#line 956 "declarative_user.m"
      {
#line 956 "declarative_user.m"
        MR_Word mdb__declarative_user__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 956 "declarative_user.m"
        MR_String mdb__declarative_user__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));

#line 956 "declarative_user.m"
        if ((mdb__declarative_user__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 957 "declarative_user.m"
          {
#line 957 "declarative_user.m"
            MR_Integer mdb__declarative_user__From_4;
#line 957 "declarative_user.m"
            MR_Integer mdb__declarative_user__To_5;
#line 1050 "declarative_user.m"
            MR_Integer mdb__declarative_user__Num_18;

#line 1050 "declarative_user.m"
            {
#line 1050 "declarative_user.m"
              mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__V_14_14, &mdb__declarative_user__Num_18);
            }
#line 1050 "declarative_user.m"
            if (mdb__declarative_user__succeeded)
#line 1051 "declarative_user.m"
              {
#line 1051 "declarative_user.m"
                mdb__declarative_user__From_4 = mdb__declarative_user__Num_18;
#line 1052 "declarative_user.m"
                mdb__declarative_user__To_5 = mdb__declarative_user__Num_18;
#line 1051 "declarative_user.m"
                mdb__declarative_user__succeeded = MR_TRUE;
#line 1051 "declarative_user.m"
              }
#line 1050 "declarative_user.m"
            else
#line 1054 "declarative_user.m"
              {
#line 1054 "declarative_user.m"
                MR_Word mdb__declarative_user__TypeInfo_18_29;
#line 1054 "declarative_user.m"
                MR_String mdb__declarative_user__FirstStr_19;
#line 1054 "declarative_user.m"
                MR_String mdb__declarative_user__SecondStr_20;
#line 1054 "declarative_user.m"
                MR_Integer mdb__declarative_user__First_21;
#line 1054 "declarative_user.m"
                MR_Integer mdb__declarative_user__Second_22;
#line 1054 "declarative_user.m"
                MR_Word mdb__declarative_user__V_23_23;
#line 1054 "declarative_user.m"
                MR_Word mdb__declarative_user__V_24_24;
#line 1054 "declarative_user.m"
                MR_Word mdb__declarative_user__V_28_28;

#line 1054 "declarative_user.m"
                {
#line 1054 "declarative_user.m"
                  mdb__declarative_user__V_23_23 = mercury__string__words_separator_2_f_0((MR_Word) &mdb__declarative_user_scalar_common_2[15], mdb__declarative_user__V_14_14);
                }
#line 1054 "declarative_user.m"
                mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 1054 "declarative_user.m"
                if (mdb__declarative_user__succeeded)
#line 1054 "declarative_user.m"
                  {
#line 1054 "declarative_user.m"
                    mdb__declarative_user__FirstStr_19 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_23_23, (MR_Integer) 0)));
#line 1054 "declarative_user.m"
                    mdb__declarative_user__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_23_23, (MR_Integer) 1)));
#line 1054 "declarative_user.m"
                    mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 1054 "declarative_user.m"
                    if (mdb__declarative_user__succeeded)
#line 1054 "declarative_user.m"
                      {
#line 1054 "declarative_user.m"
                        mdb__declarative_user__SecondStr_20 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_24_24, (MR_Integer) 0)));
#line 1054 "declarative_user.m"
                        mdb__declarative_user__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_24_24, (MR_Integer) 1)));
#line 9428 "mdb.declarative_user.c"
                        mdb__declarative_user__TypeInfo_18_29 = (MR_Word) &mdb__declarative_user_scalar_common_1[12];
#line 1054 "declarative_user.m"
                        {
#line 1054 "declarative_user.m"
                          mdb__declarative_user__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_user__TypeInfo_18_29, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (mdb__declarative_user__V_28_28)));
                        }
#line 1054 "declarative_user.m"
                        if (mdb__declarative_user__succeeded)
#line 1054 "declarative_user.m"
                          {
#line 1055 "declarative_user.m"
                            {
#line 1055 "declarative_user.m"
                              mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__FirstStr_19, &mdb__declarative_user__First_21);
                            }
#line 1054 "declarative_user.m"
                            if (mdb__declarative_user__succeeded)
#line 1054 "declarative_user.m"
                              {
#line 1056 "declarative_user.m"
                                {
#line 1056 "declarative_user.m"
                                  mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__SecondStr_20, &mdb__declarative_user__Second_22);
                                }
#line 1054 "declarative_user.m"
                                if (mdb__declarative_user__succeeded)
#line 1054 "declarative_user.m"
                                  {
#line 1057 "declarative_user.m"
                                    mdb__declarative_user__succeeded = (mdb__declarative_user__First_21 <= mdb__declarative_user__Second_22);
#line 1057 "declarative_user.m"
                                    if (mdb__declarative_user__succeeded)
#line 1058 "declarative_user.m"
                                      {
#line 1058 "declarative_user.m"
                                        mdb__declarative_user__From_4 = mdb__declarative_user__First_21;
#line 1059 "declarative_user.m"
                                        mdb__declarative_user__To_5 = mdb__declarative_user__Second_22;
#line 1058 "declarative_user.m"
                                      }
#line 1057 "declarative_user.m"
                                    else
#line 1061 "declarative_user.m"
                                      {
#line 1061 "declarative_user.m"
                                        mdb__declarative_user__From_4 = mdb__declarative_user__Second_22;
#line 1062 "declarative_user.m"
                                        mdb__declarative_user__To_5 = mdb__declarative_user__First_21;
#line 1061 "declarative_user.m"
                                      }
#line 1057 "declarative_user.m"
                                    mdb__declarative_user__succeeded = MR_TRUE;
#line 1054 "declarative_user.m"
                                  }
#line 1054 "declarative_user.m"
                              }
#line 1054 "declarative_user.m"
                          }
#line 1054 "declarative_user.m"
                      }
#line 1054 "declarative_user.m"
                  }
#line 1054 "declarative_user.m"
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
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 957 "declarative_user.m"
                  *mdb__declarative_user__HeadVar__2_2 = base;
#line 957 "declarative_user.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 957 "declarative_user.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_user__From_4));
#line 957 "declarative_user.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mdb__declarative_user__To_5));
#line 957 "declarative_user.m"
                }
#line 957 "declarative_user.m"
                mdb__declarative_user__succeeded = MR_TRUE;
#line 957 "declarative_user.m"
              }
#line 957 "declarative_user.m"
          }
#line 956 "declarative_user.m"
        else
#line 959 "declarative_user.m"
          {
#line 959 "declarative_user.m"
            MR_String mdb__declarative_user__Arg_7;
#line 959 "declarative_user.m"
            MR_Integer mdb__declarative_user__From_8;
#line 959 "declarative_user.m"
            MR_Integer mdb__declarative_user__To_9;
#line 959 "declarative_user.m"
            MR_Word mdb__declarative_user__V_12_12;
#line 1050 "declarative_user.m"
            MR_Integer mdb__declarative_user__Num_33;

#line 959 "declarative_user.m"
            mdb__declarative_user__succeeded = (strcmp(mdb__declarative_user__V_14_14, (MR_String) "io") == 0);
#line 959 "declarative_user.m"
            if (mdb__declarative_user__succeeded)
#line 959 "declarative_user.m"
              {
#line 959 "declarative_user.m"
                mdb__declarative_user__Arg_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_13_13, (MR_Integer) 0)));
#line 959 "declarative_user.m"
                mdb__declarative_user__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_13_13, (MR_Integer) 1)));
#line 959 "declarative_user.m"
                mdb__declarative_user__succeeded = (mdb__declarative_user__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 959 "declarative_user.m"
                if (mdb__declarative_user__succeeded)
#line 959 "declarative_user.m"
                  {
#line 1050 "declarative_user.m"
                    {
#line 1050 "declarative_user.m"
                      mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__Arg_7, &mdb__declarative_user__Num_33);
                    }
#line 1050 "declarative_user.m"
                    if (mdb__declarative_user__succeeded)
#line 1051 "declarative_user.m"
                      {
#line 1051 "declarative_user.m"
                        mdb__declarative_user__From_8 = mdb__declarative_user__Num_33;
#line 1052 "declarative_user.m"
                        mdb__declarative_user__To_9 = mdb__declarative_user__Num_33;
#line 1051 "declarative_user.m"
                        mdb__declarative_user__succeeded = MR_TRUE;
#line 1051 "declarative_user.m"
                      }
#line 1050 "declarative_user.m"
                    else
#line 1054 "declarative_user.m"
                      {
#line 1054 "declarative_user.m"
                        MR_Word mdb__declarative_user__TypeInfo_18_44;
#line 1054 "declarative_user.m"
                        MR_String mdb__declarative_user__FirstStr_34;
#line 1054 "declarative_user.m"
                        MR_String mdb__declarative_user__SecondStr_35;
#line 1054 "declarative_user.m"
                        MR_Integer mdb__declarative_user__First_36;
#line 1054 "declarative_user.m"
                        MR_Integer mdb__declarative_user__Second_37;
#line 1054 "declarative_user.m"
                        MR_Word mdb__declarative_user__V_38_38;
#line 1054 "declarative_user.m"
                        MR_Word mdb__declarative_user__V_39_39;
#line 1054 "declarative_user.m"
                        MR_Word mdb__declarative_user__V_43_43;

#line 1054 "declarative_user.m"
                        {
#line 1054 "declarative_user.m"
                          mdb__declarative_user__V_38_38 = mercury__string__words_separator_2_f_0((MR_Word) &mdb__declarative_user_scalar_common_2[16], mdb__declarative_user__Arg_7);
                        }
#line 1054 "declarative_user.m"
                        mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 1054 "declarative_user.m"
                        if (mdb__declarative_user__succeeded)
#line 1054 "declarative_user.m"
                          {
#line 1054 "declarative_user.m"
                            mdb__declarative_user__FirstStr_34 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_38_38, (MR_Integer) 0)));
#line 1054 "declarative_user.m"
                            mdb__declarative_user__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_38_38, (MR_Integer) 1)));
#line 1054 "declarative_user.m"
                            mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 1054 "declarative_user.m"
                            if (mdb__declarative_user__succeeded)
#line 1054 "declarative_user.m"
                              {
#line 1054 "declarative_user.m"
                                mdb__declarative_user__SecondStr_35 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_39_39, (MR_Integer) 0)));
#line 1054 "declarative_user.m"
                                mdb__declarative_user__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_39_39, (MR_Integer) 1)));
#line 9613 "mdb.declarative_user.c"
                                mdb__declarative_user__TypeInfo_18_44 = (MR_Word) &mdb__declarative_user_scalar_common_1[12];
#line 1054 "declarative_user.m"
                                {
#line 1054 "declarative_user.m"
                                  mdb__declarative_user__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_user__TypeInfo_18_44, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (mdb__declarative_user__V_43_43)));
                                }
#line 1054 "declarative_user.m"
                                if (mdb__declarative_user__succeeded)
#line 1054 "declarative_user.m"
                                  {
#line 1055 "declarative_user.m"
                                    {
#line 1055 "declarative_user.m"
                                      mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__FirstStr_34, &mdb__declarative_user__First_36);
                                    }
#line 1054 "declarative_user.m"
                                    if (mdb__declarative_user__succeeded)
#line 1054 "declarative_user.m"
                                      {
#line 1056 "declarative_user.m"
                                        {
#line 1056 "declarative_user.m"
                                          mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__SecondStr_35, &mdb__declarative_user__Second_37);
                                        }
#line 1054 "declarative_user.m"
                                        if (mdb__declarative_user__succeeded)
#line 1054 "declarative_user.m"
                                          {
#line 1057 "declarative_user.m"
                                            mdb__declarative_user__succeeded = (mdb__declarative_user__First_36 <= mdb__declarative_user__Second_37);
#line 1057 "declarative_user.m"
                                            if (mdb__declarative_user__succeeded)
#line 1058 "declarative_user.m"
                                              {
#line 1058 "declarative_user.m"
                                                mdb__declarative_user__From_8 = mdb__declarative_user__First_36;
#line 1059 "declarative_user.m"
                                                mdb__declarative_user__To_9 = mdb__declarative_user__Second_37;
#line 1058 "declarative_user.m"
                                              }
#line 1057 "declarative_user.m"
                                            else
#line 1061 "declarative_user.m"
                                              {
#line 1061 "declarative_user.m"
                                                mdb__declarative_user__From_8 = mdb__declarative_user__Second_37;
#line 1062 "declarative_user.m"
                                                mdb__declarative_user__To_9 = mdb__declarative_user__First_36;
#line 1061 "declarative_user.m"
                                              }
#line 1057 "declarative_user.m"
                                            mdb__declarative_user__succeeded = MR_TRUE;
#line 1054 "declarative_user.m"
                                          }
#line 1054 "declarative_user.m"
                                      }
#line 1054 "declarative_user.m"
                                  }
#line 1054 "declarative_user.m"
                              }
#line 1054 "declarative_user.m"
                          }
#line 1054 "declarative_user.m"
                      }
#line 959 "declarative_user.m"
                    if (mdb__declarative_user__succeeded)
#line 959 "declarative_user.m"
                      {
#line 959 "declarative_user.m"
                        {
#line 959 "declarative_user.m"
                          MR_Word base;
#line 959 "declarative_user.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 959 "declarative_user.m"
                          *mdb__declarative_user__HeadVar__2_2 = base;
#line 959 "declarative_user.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 959 "declarative_user.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_user__From_8));
#line 959 "declarative_user.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mdb__declarative_user__To_9));
#line 959 "declarative_user.m"
                        }
#line 959 "declarative_user.m"
                        mdb__declarative_user__succeeded = MR_TRUE;
#line 959 "declarative_user.m"
                      }
#line 959 "declarative_user.m"
                  }
#line 959 "declarative_user.m"
              }
#line 959 "declarative_user.m"
          }
#line 956 "declarative_user.m"
      }
#line 956 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 956 "declarative_user.m"
  }
#line 954 "declarative_user.m"
}

#line 937 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__browse_arg_cmd_2_p_0(
#line 937 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 937 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2)
#line 937 "declarative_user.m"
{
#line 939 "declarative_user.m"
  {
#line 939 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;

#line 939 "declarative_user.m"
    if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 939 "declarative_user.m"
      {
#line 939 "declarative_user.m"
        *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_9[0]);
#line 939 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 939 "declarative_user.m"
      }
#line 939 "declarative_user.m"
    else
#line 939 "declarative_user.m"
      {
#line 939 "declarative_user.m"
        MR_Word mdb__declarative_user__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 939 "declarative_user.m"
        MR_String mdb__declarative_user__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));

#line 939 "declarative_user.m"
        if ((mdb__declarative_user__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 941 "declarative_user.m"
          {
#line 941 "declarative_user.m"
            MR_Integer mdb__declarative_user__ArgNum_6;

#line 941 "declarative_user.m"
            {
#line 941 "declarative_user.m"
              mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__V_28_28, &mdb__declarative_user__ArgNum_6);
            }
#line 941 "declarative_user.m"
            if (mdb__declarative_user__succeeded)
#line 942 "declarative_user.m"
              {
#line 942 "declarative_user.m"
                MR_Word mdb__declarative_user__V_8_8;

#line 942 "declarative_user.m"
                {
#line 942 "declarative_user.m"
                  mdb__declarative_user__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 942 "declarative_user.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_user__V_8_8, 0) = ((MR_Box) (mdb__declarative_user__ArgNum_6));
#line 942 "declarative_user.m"
                }
#line 942 "declarative_user.m"
                {
#line 942 "declarative_user.m"
                  MR_Word base;
#line 942 "declarative_user.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 942 "declarative_user.m"
                  *mdb__declarative_user__HeadVar__2_2 = base;
#line 942 "declarative_user.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__V_8_8));
#line 942 "declarative_user.m"
                }
#line 942 "declarative_user.m"
                mdb__declarative_user__succeeded = MR_TRUE;
#line 942 "declarative_user.m"
              }
#line 941 "declarative_user.m"
            else
#line 944 "declarative_user.m"
              {
#line 944 "declarative_user.m"
                MR_Word mdb__declarative_user__V_9_9;

#line 944 "declarative_user.m"
                if ((strcmp(mdb__declarative_user__V_28_28, (MR_String) "-x") == 0))
#line 944 "declarative_user.m"
                  mdb__declarative_user__succeeded = MR_TRUE;
#line 944 "declarative_user.m"
                else
#line 944 "declarative_user.m"
                if ((strcmp(mdb__declarative_user__V_28_28, (MR_String) "--xml") == 0))
#line 944 "declarative_user.m"
                  mdb__declarative_user__succeeded = MR_TRUE;
#line 944 "declarative_user.m"
                else
#line 944 "declarative_user.m"
                  mdb__declarative_user__succeeded = MR_FALSE;
#line 944 "declarative_user.m"
                if (mdb__declarative_user__succeeded)
#line 944 "declarative_user.m"
                  {
#line 945 "declarative_user.m"
                    mdb__declarative_user__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 945 "declarative_user.m"
                    *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), &mdb__declarative_user_scalar_common_9[0]);
#line 945 "declarative_user.m"
                    mdb__declarative_user__succeeded = MR_TRUE;
#line 944 "declarative_user.m"
                  }
#line 944 "declarative_user.m"
              }
#line 941 "declarative_user.m"
          }
#line 939 "declarative_user.m"
        else
#line 939 "declarative_user.m"
          {
#line 939 "declarative_user.m"
            MR_Word mdb__declarative_user__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_27_27, (MR_Integer) 1)));
#line 939 "declarative_user.m"
            MR_String mdb__declarative_user__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_27_27, (MR_Integer) 0)));

#line 949 "declarative_user.m"
            mdb__declarative_user__succeeded = (mdb__declarative_user__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "declarative_user.m"
            if (mdb__declarative_user__succeeded)
#line 939 "declarative_user.m"
              {
#line 939 "declarative_user.m"
                if ((strcmp(mdb__declarative_user__V_28_28, (MR_String) "-x") == 0))
#line 947 "declarative_user.m"
                  {
#line 947 "declarative_user.m"
                    MR_Integer mdb__declarative_user__ArgNum_11;
#line 947 "declarative_user.m"
                    MR_Word mdb__declarative_user__V_15_15;

#line 948 "declarative_user.m"
                    {
#line 948 "declarative_user.m"
                      mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__V_30_30, &mdb__declarative_user__ArgNum_11);
                    }
#line 947 "declarative_user.m"
                    if (mdb__declarative_user__succeeded)
#line 947 "declarative_user.m"
                      {
#line 947 "declarative_user.m"
                        {
#line 947 "declarative_user.m"
                          mdb__declarative_user__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 947 "declarative_user.m"
                          MR_hl_field(MR_mktag(1), mdb__declarative_user__V_15_15, 0) = ((MR_Box) (mdb__declarative_user__ArgNum_11));
#line 947 "declarative_user.m"
                        }
#line 947 "declarative_user.m"
                        {
#line 947 "declarative_user.m"
                          MR_Word base;
#line 947 "declarative_user.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 947 "declarative_user.m"
                          *mdb__declarative_user__HeadVar__2_2 = base;
#line 947 "declarative_user.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_user__V_15_15));
#line 947 "declarative_user.m"
                        }
#line 947 "declarative_user.m"
                        mdb__declarative_user__succeeded = MR_TRUE;
#line 947 "declarative_user.m"
                      }
#line 947 "declarative_user.m"
                  }
#line 939 "declarative_user.m"
                else
#line 939 "declarative_user.m"
                if ((strcmp(mdb__declarative_user__V_28_28, (MR_String) "io") == 0))
#line 951 "declarative_user.m"
                  {
#line 951 "declarative_user.m"
                    MR_Integer mdb__declarative_user__ArgNum_23;

#line 952 "declarative_user.m"
                    {
#line 952 "declarative_user.m"
                      mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__V_30_30, &mdb__declarative_user__ArgNum_23);
                    }
#line 951 "declarative_user.m"
                    if (mdb__declarative_user__succeeded)
#line 951 "declarative_user.m"
                      {
#line 951 "declarative_user.m"
                        {
#line 951 "declarative_user.m"
                          MR_Word base;
#line 951 "declarative_user.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 951 "declarative_user.m"
                          *mdb__declarative_user__HeadVar__2_2 = base;
#line 951 "declarative_user.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 951 "declarative_user.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_user__ArgNum_23));
#line 951 "declarative_user.m"
                        }
#line 951 "declarative_user.m"
                        mdb__declarative_user__succeeded = MR_TRUE;
#line 951 "declarative_user.m"
                      }
#line 951 "declarative_user.m"
                  }
#line 939 "declarative_user.m"
                else
#line 939 "declarative_user.m"
                if ((strcmp(mdb__declarative_user__V_28_28, (MR_String) "--xml") == 0))
#line 949 "declarative_user.m"
                  {
#line 949 "declarative_user.m"
                    MR_Integer mdb__declarative_user__ArgNum_17;
#line 949 "declarative_user.m"
                    MR_Word mdb__declarative_user__V_21_21;

#line 950 "declarative_user.m"
                    {
#line 950 "declarative_user.m"
                      mdb__declarative_user__succeeded = mercury__string__to_int_2_p_0(mdb__declarative_user__V_30_30, &mdb__declarative_user__ArgNum_17);
                    }
#line 949 "declarative_user.m"
                    if (mdb__declarative_user__succeeded)
#line 949 "declarative_user.m"
                      {
#line 949 "declarative_user.m"
                        {
#line 949 "declarative_user.m"
                          mdb__declarative_user__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 949 "declarative_user.m"
                          MR_hl_field(MR_mktag(1), mdb__declarative_user__V_21_21, 0) = ((MR_Box) (mdb__declarative_user__ArgNum_17));
#line 949 "declarative_user.m"
                        }
#line 949 "declarative_user.m"
                        {
#line 949 "declarative_user.m"
                          MR_Word base;
#line 949 "declarative_user.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 949 "declarative_user.m"
                          *mdb__declarative_user__HeadVar__2_2 = base;
#line 949 "declarative_user.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_user__V_21_21));
#line 949 "declarative_user.m"
                        }
#line 949 "declarative_user.m"
                        mdb__declarative_user__succeeded = MR_TRUE;
#line 949 "declarative_user.m"
                      }
#line 949 "declarative_user.m"
                  }
#line 939 "declarative_user.m"
                else
#line 939 "declarative_user.m"
                  mdb__declarative_user__succeeded = MR_FALSE;
#line 939 "declarative_user.m"
              }
#line 939 "declarative_user.m"
          }
#line 939 "declarative_user.m"
      }
#line 939 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 939 "declarative_user.m"
  }
#line 937 "declarative_user.m"
}

#line 932 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__one_word_cmd_3_p_0(
#line 932 "declarative_user.m"
  MR_Word mdb__declarative_user__Cmd_4,
#line 932 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__2_2,
#line 932 "declarative_user.m"
  MR_Word * mdb__declarative_user__Cmd_3)
#line 932 "declarative_user.m"
{
#line 935 "declarative_user.m"
  {
#line 935 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded = (mdb__declarative_user__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 935 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 935 "declarative_user.m"
      {
#line 935 "declarative_user.m"
        *mdb__declarative_user__Cmd_3 = mdb__declarative_user__Cmd_4;
#line 935 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 935 "declarative_user.m"
      }
#line 935 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 935 "declarative_user.m"
  }
#line 932 "declarative_user.m"
}

#line 896 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_33(
#line 896 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 896 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 896 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 896 "declarative_user.m"
{
#line 896 "declarative_user.m"
  {
#line 896 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 896 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 896 "declarative_user.m"
    MR_Word mdb__declarative_user__conv32_Cmd_3;

#line 896 "declarative_user.m"
    {
#line 896 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv32_Cmd_3);
    }
#line 896 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 896 "declarative_user.m"
      {
#line 896 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv32_Cmd_3));
#line 896 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 896 "declarative_user.m"
      }
#line 896 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 896 "declarative_user.m"
  }
#line 896 "declarative_user.m"
}

#line 895 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_32(
#line 895 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 895 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 895 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 895 "declarative_user.m"
{
#line 895 "declarative_user.m"
  {
#line 895 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 895 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 895 "declarative_user.m"
    MR_Word mdb__declarative_user__conv31_Cmd_3;

#line 895 "declarative_user.m"
    {
#line 895 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv31_Cmd_3);
    }
#line 895 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 895 "declarative_user.m"
      {
#line 895 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv31_Cmd_3));
#line 895 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 895 "declarative_user.m"
      }
#line 895 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 895 "declarative_user.m"
  }
#line 895 "declarative_user.m"
}

#line 920 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_31(
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
    MR_Word mdb__declarative_user__conv30_Command_6;

#line 920 "declarative_user.m"
    {
#line 920 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__format_param_arg_cmd_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv30_Command_6);
    }
#line 920 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 920 "declarative_user.m"
      {
#line 920 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv30_Command_6));
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

#line 929 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_30(
#line 929 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 929 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 929 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 929 "declarative_user.m"
{
#line 929 "declarative_user.m"
  {
#line 929 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 929 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 929 "declarative_user.m"
    MR_Word mdb__declarative_user__conv29_Cmd_3;

#line 929 "declarative_user.m"
    {
#line 929 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv29_Cmd_3);
    }
#line 929 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 929 "declarative_user.m"
      {
#line 929 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv29_Cmd_3));
#line 929 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 929 "declarative_user.m"
      }
#line 929 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 929 "declarative_user.m"
  }
#line 929 "declarative_user.m"
}

#line 926 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_29(
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
    MR_Word mdb__declarative_user__conv28_HeadVar__2_2;

#line 926 "declarative_user.m"
    {
#line 926 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__trust_arg_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv28_HeadVar__2_2);
    }
#line 926 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 926 "declarative_user.m"
      {
#line 926 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv28_HeadVar__2_2));
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

#line 925 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_28(
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
    MR_Word mdb__declarative_user__conv27_HeadVar__2_2;

#line 925 "declarative_user.m"
    {
#line 925 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__trust_arg_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv27_HeadVar__2_2);
    }
#line 925 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 925 "declarative_user.m"
      {
#line 925 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv27_HeadVar__2_2));
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

#line 902 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_27(
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
    MR_Word mdb__declarative_user__conv26_Cmd_3;

#line 902 "declarative_user.m"
    {
#line 902 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv26_Cmd_3);
    }
#line 902 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 902 "declarative_user.m"
      {
#line 902 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv26_Cmd_3));
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

#line 919 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_26(
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
    MR_Word mdb__declarative_user__conv25_Command_6;

#line 919 "declarative_user.m"
    {
#line 919 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__format_param_arg_cmd_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv25_Command_6);
    }
#line 919 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 919 "declarative_user.m"
      {
#line 919 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv25_Command_6));
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

#line 901 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_25(
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
    MR_Word mdb__declarative_user__conv24_Cmd_3;

#line 901 "declarative_user.m"
    {
#line 901 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv24_Cmd_3);
    }
#line 901 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 901 "declarative_user.m"
      {
#line 901 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv24_Cmd_3));
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

#line 908 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_24(
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
    MR_Word mdb__declarative_user__conv23_Cmd_3;

#line 908 "declarative_user.m"
    {
#line 908 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv23_Cmd_3);
    }
#line 908 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 908 "declarative_user.m"
      {
#line 908 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv23_Cmd_3));
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

#line 907 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_23(
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
    MR_Word mdb__declarative_user__conv22_Cmd_3;

#line 907 "declarative_user.m"
    {
#line 907 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv22_Cmd_3);
    }
#line 907 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 907 "declarative_user.m"
      {
#line 907 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv22_Cmd_3));
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

#line 916 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_22(
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
    MR_Word mdb__declarative_user__conv21_HeadVar__2_2;

#line 916 "declarative_user.m"
    {
#line 916 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__print_arg_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv21_HeadVar__2_2);
    }
#line 916 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 916 "declarative_user.m"
      {
#line 916 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv21_HeadVar__2_2));
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

#line 903 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_21(
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
    MR_Word mdb__declarative_user__conv20_Cmd_3;

#line 903 "declarative_user.m"
    {
#line 903 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv20_Cmd_3);
    }
#line 903 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 903 "declarative_user.m"
      {
#line 903 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv20_Cmd_3));
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

#line 930 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_20(
#line 930 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 930 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 930 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 930 "declarative_user.m"
{
#line 930 "declarative_user.m"
  {
#line 930 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 930 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 930 "declarative_user.m"
    MR_Word mdb__declarative_user__conv19_Cmd_3;

#line 930 "declarative_user.m"
    {
#line 930 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv19_Cmd_3);
    }
#line 930 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 930 "declarative_user.m"
      {
#line 930 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv19_Cmd_3));
#line 930 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 930 "declarative_user.m"
      }
#line 930 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 930 "declarative_user.m"
  }
#line 930 "declarative_user.m"
}

#line 915 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_19(
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
    MR_Word mdb__declarative_user__conv18_HeadVar__2_2;

#line 915 "declarative_user.m"
    {
#line 915 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__print_arg_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv18_HeadVar__2_2);
    }
#line 915 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 915 "declarative_user.m"
      {
#line 915 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv18_HeadVar__2_2));
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

#line 898 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_18(
#line 898 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 898 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 898 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 898 "declarative_user.m"
{
#line 898 "declarative_user.m"
  {
#line 898 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 898 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 898 "declarative_user.m"
    MR_Word mdb__declarative_user__conv17_Cmd_3;

#line 898 "declarative_user.m"
    {
#line 898 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv17_Cmd_3);
    }
#line 898 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 898 "declarative_user.m"
      {
#line 898 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv17_Cmd_3));
#line 898 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 898 "declarative_user.m"
      }
#line 898 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 898 "declarative_user.m"
  }
#line 898 "declarative_user.m"
}

#line 897 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_17(
#line 897 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 897 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 897 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 897 "declarative_user.m"
{
#line 897 "declarative_user.m"
  {
#line 897 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 897 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 897 "declarative_user.m"
    MR_Word mdb__declarative_user__conv16_Cmd_3;

#line 897 "declarative_user.m"
    {
#line 897 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv16_Cmd_3);
    }
#line 897 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 897 "declarative_user.m"
      {
#line 897 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv16_Cmd_3));
#line 897 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 897 "declarative_user.m"
      }
#line 897 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 897 "declarative_user.m"
  }
#line 897 "declarative_user.m"
}

#line 927 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_16(
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
    MR_Word mdb__declarative_user__conv15_HeadVar__2_2;

#line 927 "declarative_user.m"
    {
#line 927 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__search_mode_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv15_HeadVar__2_2);
    }
#line 927 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 927 "declarative_user.m"
      {
#line 927 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv15_HeadVar__2_2));
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

#line 928 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_15(
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
    MR_Word mdb__declarative_user__conv14_HeadVar__2_2;

#line 928 "declarative_user.m"
    {
#line 928 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__search_mode_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv14_HeadVar__2_2);
    }
#line 928 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 928 "declarative_user.m"
      {
#line 928 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv14_HeadVar__2_2));
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

#line 921 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_14(
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
    MR_Word mdb__declarative_user__conv13_Command_6;

#line 921 "declarative_user.m"
    {
#line 921 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__format_param_arg_cmd_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv13_Command_6);
    }
#line 921 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 921 "declarative_user.m"
      {
#line 921 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv13_Command_6));
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

#line 912 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_13(
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
    MR_Word mdb__declarative_user__conv12_Cmd_3;

#line 912 "declarative_user.m"
    {
#line 912 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv12_Cmd_3);
    }
#line 912 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 912 "declarative_user.m"
      {
#line 912 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv12_Cmd_3));
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

#line 900 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_12(
#line 900 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 900 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 900 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 900 "declarative_user.m"
{
#line 900 "declarative_user.m"
  {
#line 900 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 900 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 900 "declarative_user.m"
    MR_Word mdb__declarative_user__conv11_Cmd_3;

#line 900 "declarative_user.m"
    {
#line 900 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv11_Cmd_3);
    }
#line 900 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 900 "declarative_user.m"
      {
#line 900 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv11_Cmd_3));
#line 900 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 900 "declarative_user.m"
      }
#line 900 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 900 "declarative_user.m"
  }
#line 900 "declarative_user.m"
}

#line 899 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_11(
#line 899 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 899 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 899 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 899 "declarative_user.m"
{
#line 899 "declarative_user.m"
  {
#line 899 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 899 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 899 "declarative_user.m"
    MR_Word mdb__declarative_user__conv10_Cmd_3;

#line 899 "declarative_user.m"
    {
#line 899 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv10_Cmd_3);
    }
#line 899 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 899 "declarative_user.m"
      {
#line 899 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv10_Cmd_3));
#line 899 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 899 "declarative_user.m"
      }
#line 899 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 899 "declarative_user.m"
  }
#line 899 "declarative_user.m"
}

#line 911 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_10(
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
    MR_Word mdb__declarative_user__conv9_HeadVar__2_2;

#line 911 "declarative_user.m"
    {
#line 911 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__help_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv9_HeadVar__2_2);
    }
#line 911 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 911 "declarative_user.m"
      {
#line 911 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv9_HeadVar__2_2));
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

#line 910 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_9(
#line 910 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 910 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1,
#line 910 "declarative_user.m"
  MR_Box * mdb__declarative_user__wrapper_arg_2)
#line 910 "declarative_user.m"
{
#line 910 "declarative_user.m"
  {
#line 910 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 910 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 910 "declarative_user.m"
    MR_Word mdb__declarative_user__conv8_HeadVar__2_2;

#line 910 "declarative_user.m"
    {
#line 910 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__help_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv8_HeadVar__2_2);
    }
#line 910 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 910 "declarative_user.m"
      {
#line 910 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv8_HeadVar__2_2));
#line 910 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 910 "declarative_user.m"
      }
#line 910 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 910 "declarative_user.m"
  }
#line 910 "declarative_user.m"
}

#line 917 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_8(
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
    MR_Word mdb__declarative_user__conv7_UserCommand_4;

#line 917 "declarative_user.m"
    {
#line 917 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__format_arg_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv7_UserCommand_4);
    }
#line 917 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 917 "declarative_user.m"
      {
#line 917 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv7_UserCommand_4));
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

#line 918 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_7(
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
    MR_Word mdb__declarative_user__conv6_Command_6;

#line 918 "declarative_user.m"
    {
#line 918 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__format_param_arg_cmd_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv6_Command_6);
    }
#line 918 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 918 "declarative_user.m"
      {
#line 918 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv6_Command_6));
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

#line 914 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_6(
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
    MR_Word mdb__declarative_user__conv5_HeadVar__2_2;

#line 914 "declarative_user.m"
    {
#line 914 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__browse_arg_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv5_HeadVar__2_2);
    }
#line 914 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 914 "declarative_user.m"
      {
#line 914 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv5_HeadVar__2_2));
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

#line 913 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_5(
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
    MR_Word mdb__declarative_user__conv4_HeadVar__2_2;

#line 913 "declarative_user.m"
    {
#line 913 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__browse_arg_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv4_HeadVar__2_2);
    }
#line 913 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 913 "declarative_user.m"
      {
#line 913 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv4_HeadVar__2_2));
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

#line 922 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_4(
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
    MR_Word mdb__declarative_user__conv3_HeadVar__2_2;

#line 922 "declarative_user.m"
    {
#line 922 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__num_io_actions_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv3_HeadVar__2_2);
    }
#line 922 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 922 "declarative_user.m"
      {
#line 922 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv3_HeadVar__2_2));
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

#line 906 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_3(
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
    MR_Word mdb__declarative_user__conv2_Cmd_3;

#line 906 "declarative_user.m"
    {
#line 906 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv2_Cmd_3);
    }
#line 906 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 906 "declarative_user.m"
      {
#line 906 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv2_Cmd_3));
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

#line 905 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_2(
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
    MR_Word mdb__declarative_user__conv1_Cmd_3;

#line 905 "declarative_user.m"
    {
#line 905 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__one_word_cmd_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv1_Cmd_3);
    }
#line 905 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 905 "declarative_user.m"
      {
#line 905 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv1_Cmd_3));
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

#line 909 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0_1(
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
    MR_Word mdb__declarative_user__conv0_HeadVar__2_2;

#line 909 "declarative_user.m"
    {
#line 909 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__help_cmd_2_p_0(((MR_Word) mdb__declarative_user__wrapper_arg_1), &mdb__declarative_user__conv0_HeadVar__2_2);
    }
#line 909 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 909 "declarative_user.m"
      {
#line 909 "declarative_user.m"
        *mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv0_HeadVar__2_2));
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

#line 891 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__cmd_handler_2_p_0(
#line 891 "declarative_user.m"
  MR_String mdb__declarative_user__HeadVar__1_1,
#line 891 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2)
#line 891 "declarative_user.m"
{
#line 895 "declarative_user.m"
  {
#line 895 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;

#line 895 "declarative_user.m"
    {
#line 895 "declarative_user.m"
      MR_Integer mdb__declarative_user__case_num_0 = (MR_Integer) -1;

#line 895 "declarative_user.m"
#line 895 "declarative_user.m"
      switch (MR_nth_code_unit(mdb__declarative_user__HeadVar__1_1, 0)) {
#line 895 "declarative_user.m"
        case (MR_Integer) 63:
#line 895 "declarative_user.m"
          if (MR_offset_streq(1, mdb__declarative_user__HeadVar__1_1, (MR_String) "\?"))
#line 895 "declarative_user.m"
            mdb__declarative_user__case_num_0 = (MR_Integer) 0;
#line 895 "declarative_user.m"
          break;
#line 895 "declarative_user.m"
        case (MR_Integer) 97:
#line 895 "declarative_user.m"
#line 895 "declarative_user.m"
          switch (MR_nth_code_unit(mdb__declarative_user__HeadVar__1_1, 1)) {
#line 895 "declarative_user.m"
            case (MR_Integer) 0:
#line 895 "declarative_user.m"
              mdb__declarative_user__case_num_0 = (MR_Integer) 1;
#line 895 "declarative_user.m"
              break;
#line 895 "declarative_user.m"
            case (MR_Integer) 98:
#line 895 "declarative_user.m"
              if (MR_offset_streq(2, mdb__declarative_user__HeadVar__1_1, (MR_String) "abort"))
#line 895 "declarative_user.m"
                mdb__declarative_user__case_num_0 = (MR_Integer) 2;
#line 895 "declarative_user.m"
              break;
#line 895 "declarative_user.m"
            case (MR_Integer) 99:
#line 895 "declarative_user.m"
              if (MR_offset_streq(2, mdb__declarative_user__HeadVar__1_1, (MR_String) "actions"))
#line 895 "declarative_user.m"
                mdb__declarative_user__case_num_0 = (MR_Integer) 3;
#line 895 "declarative_user.m"
              break;
#line 895 "declarative_user.m"
          }
#line 895 "declarative_user.m"
          break;
#line 895 "declarative_user.m"
        case (MR_Integer) 98:
#line 895 "declarative_user.m"
#line 895 "declarative_user.m"
          switch (MR_nth_code_unit(mdb__declarative_user__HeadVar__1_1, 1)) {
#line 895 "declarative_user.m"
            case (MR_Integer) 0:
#line 895 "declarative_user.m"
              mdb__declarative_user__case_num_0 = (MR_Integer) 4;
#line 895 "declarative_user.m"
              break;
#line 895 "declarative_user.m"
            case (MR_Integer) 114:
#line 895 "declarative_user.m"
              if (MR_offset_streq(2, mdb__declarative_user__HeadVar__1_1, (MR_String) "browse"))
#line 895 "declarative_user.m"
                mdb__declarative_user__case_num_0 = (MR_Integer) 5;
#line 895 "declarative_user.m"
              break;
#line 895 "declarative_user.m"
          }
#line 895 "declarative_user.m"
          break;
#line 895 "declarative_user.m"
        case (MR_Integer) 100:
#line 895 "declarative_user.m"
          if (MR_offset_streq(1, mdb__declarative_user__HeadVar__1_1, (MR_String) "depth"))
#line 895 "declarative_user.m"
            mdb__declarative_user__case_num_0 = (MR_Integer) 6;
#line 895 "declarative_user.m"
          break;
#line 895 "declarative_user.m"
        case (MR_Integer) 102:
#line 895 "declarative_user.m"
          if (MR_offset_streq(1, mdb__declarative_user__HeadVar__1_1, (MR_String) "format"))
#line 895 "declarative_user.m"
            mdb__declarative_user__case_num_0 = (MR_Integer) 7;
#line 895 "declarative_user.m"
          break;
#line 895 "declarative_user.m"
        case (MR_Integer) 104:
#line 895 "declarative_user.m"
#line 895 "declarative_user.m"
          switch (MR_nth_code_unit(mdb__declarative_user__HeadVar__1_1, 1)) {
#line 895 "declarative_user.m"
            case (MR_Integer) 0:
#line 895 "declarative_user.m"
              mdb__declarative_user__case_num_0 = (MR_Integer) 8;
#line 895 "declarative_user.m"
              break;
#line 895 "declarative_user.m"
            case (MR_Integer) 101:
#line 895 "declarative_user.m"
              if (MR_offset_streq(2, mdb__declarative_user__HeadVar__1_1, (MR_String) "help"))
#line 895 "declarative_user.m"
                mdb__declarative_user__case_num_0 = (MR_Integer) 9;
#line 895 "declarative_user.m"
              break;
#line 895 "declarative_user.m"
          }
#line 895 "declarative_user.m"
          break;
#line 895 "declarative_user.m"
        case (MR_Integer) 105:
#line 895 "declarative_user.m"
#line 895 "declarative_user.m"
          switch (MR_nth_code_unit(mdb__declarative_user__HeadVar__1_1, 1)) {
#line 895 "declarative_user.m"
            case (MR_Integer) 0:
#line 895 "declarative_user.m"
              mdb__declarative_user__case_num_0 = (MR_Integer) 10;
#line 895 "declarative_user.m"
              break;
#line 895 "declarative_user.m"
            case (MR_Integer) 110:
#line 895 "declarative_user.m"
#line 895 "declarative_user.m"
              switch (MR_nth_code_unit(mdb__declarative_user__HeadVar__1_1, 2)) {
#line 895 "declarative_user.m"
                case (MR_Integer) 97:
#line 895 "declarative_user.m"
                  if (MR_offset_streq(3, mdb__declarative_user__HeadVar__1_1, (MR_String) "inadmissible"))
#line 895 "declarative_user.m"
                    mdb__declarative_user__case_num_0 = (MR_Integer) 11;
#line 895 "declarative_user.m"
                  break;
#line 895 "declarative_user.m"
                case (MR_Integer) 102:
#line 895 "declarative_user.m"
                  if (MR_offset_streq(3, mdb__declarative_user__HeadVar__1_1, (MR_String) "info"))
#line 895 "declarative_user.m"
                    mdb__declarative_user__case_num_0 = (MR_Integer) 12;
#line 895 "declarative_user.m"
                  break;
#line 895 "declarative_user.m"
              }
#line 895 "declarative_user.m"
              break;
#line 895 "declarative_user.m"
          }
#line 895 "declarative_user.m"
          break;
#line 895 "declarative_user.m"
        case (MR_Integer) 108:
#line 895 "declarative_user.m"
          if (MR_offset_streq(1, mdb__declarative_user__HeadVar__1_1, (MR_String) "lines"))
#line 895 "declarative_user.m"
            mdb__declarative_user__case_num_0 = (MR_Integer) 13;
#line 895 "declarative_user.m"
          break;
#line 895 "declarative_user.m"
        case (MR_Integer) 109:
#line 895 "declarative_user.m"
#line 895 "declarative_user.m"
          switch (MR_nth_code_unit(mdb__declarative_user__HeadVar__1_1, 1)) {
#line 895 "declarative_user.m"
            case (MR_Integer) 0:
#line 895 "declarative_user.m"
              mdb__declarative_user__case_num_0 = (MR_Integer) 14;
#line 895 "declarative_user.m"
              break;
#line 895 "declarative_user.m"
            case (MR_Integer) 111:
#line 895 "declarative_user.m"
              if (MR_offset_streq(2, mdb__declarative_user__HeadVar__1_1, (MR_String) "mode"))
#line 895 "declarative_user.m"
                mdb__declarative_user__case_num_0 = (MR_Integer) 15;
#line 895 "declarative_user.m"
              break;
#line 895 "declarative_user.m"
          }
#line 895 "declarative_user.m"
          break;
#line 895 "declarative_user.m"
        case (MR_Integer) 110:
#line 895 "declarative_user.m"
#line 895 "declarative_user.m"
          switch (MR_nth_code_unit(mdb__declarative_user__HeadVar__1_1, 1)) {
#line 895 "declarative_user.m"
            case (MR_Integer) 0:
#line 895 "declarative_user.m"
              mdb__declarative_user__case_num_0 = (MR_Integer) 16;
#line 895 "declarative_user.m"
              break;
#line 895 "declarative_user.m"
            case (MR_Integer) 111:
#line 895 "declarative_user.m"
              if (MR_offset_streq(2, mdb__declarative_user__HeadVar__1_1, (MR_String) "no"))
#line 895 "declarative_user.m"
                mdb__declarative_user__case_num_0 = (MR_Integer) 17;
#line 895 "declarative_user.m"
              break;
#line 895 "declarative_user.m"
          }
#line 895 "declarative_user.m"
          break;
#line 895 "declarative_user.m"
        case (MR_Integer) 112:
#line 895 "declarative_user.m"
#line 895 "declarative_user.m"
          switch (MR_nth_code_unit(mdb__declarative_user__HeadVar__1_1, 1)) {
#line 895 "declarative_user.m"
            case (MR_Integer) 0:
#line 895 "declarative_user.m"
              mdb__declarative_user__case_num_0 = (MR_Integer) 18;
#line 895 "declarative_user.m"
              break;
#line 895 "declarative_user.m"
            case (MR_Integer) 97:
#line 895 "declarative_user.m"
              if (MR_offset_streq(2, mdb__declarative_user__HeadVar__1_1, (MR_String) "params"))
#line 895 "declarative_user.m"
                mdb__declarative_user__case_num_0 = (MR_Integer) 19;
#line 895 "declarative_user.m"
              break;
#line 895 "declarative_user.m"
            case (MR_Integer) 100:
#line 895 "declarative_user.m"
              if (MR_offset_streq(2, mdb__declarative_user__HeadVar__1_1, (MR_String) "pd"))
#line 895 "declarative_user.m"
                mdb__declarative_user__case_num_0 = (MR_Integer) 20;
#line 895 "declarative_user.m"
              break;
#line 895 "declarative_user.m"
            case (MR_Integer) 114:
#line 895 "declarative_user.m"
              if (MR_offset_streq(2, mdb__declarative_user__HeadVar__1_1, (MR_String) "print"))
#line 895 "declarative_user.m"
                mdb__declarative_user__case_num_0 = (MR_Integer) 21;
#line 895 "declarative_user.m"
              break;
#line 895 "declarative_user.m"
          }
#line 895 "declarative_user.m"
          break;
#line 895 "declarative_user.m"
        case (MR_Integer) 113:
#line 895 "declarative_user.m"
#line 895 "declarative_user.m"
          switch (MR_nth_code_unit(mdb__declarative_user__HeadVar__1_1, 1)) {
#line 895 "declarative_user.m"
            case (MR_Integer) 0:
#line 895 "declarative_user.m"
              mdb__declarative_user__case_num_0 = (MR_Integer) 22;
#line 895 "declarative_user.m"
              break;
#line 895 "declarative_user.m"
            case (MR_Integer) 117:
#line 895 "declarative_user.m"
              if (MR_offset_streq(2, mdb__declarative_user__HeadVar__1_1, (MR_String) "quit"))
#line 895 "declarative_user.m"
                mdb__declarative_user__case_num_0 = (MR_Integer) 23;
#line 895 "declarative_user.m"
              break;
#line 895 "declarative_user.m"
          }
#line 895 "declarative_user.m"
          break;
#line 895 "declarative_user.m"
        case (MR_Integer) 115:
#line 895 "declarative_user.m"
#line 895 "declarative_user.m"
          switch (MR_nth_code_unit(mdb__declarative_user__HeadVar__1_1, 1)) {
#line 895 "declarative_user.m"
            case (MR_Integer) 0:
#line 895 "declarative_user.m"
              mdb__declarative_user__case_num_0 = (MR_Integer) 24;
#line 895 "declarative_user.m"
              break;
#line 895 "declarative_user.m"
            case (MR_Integer) 105:
#line 895 "declarative_user.m"
              if (MR_offset_streq(2, mdb__declarative_user__HeadVar__1_1, (MR_String) "size"))
#line 895 "declarative_user.m"
                mdb__declarative_user__case_num_0 = (MR_Integer) 25;
#line 895 "declarative_user.m"
              break;
#line 895 "declarative_user.m"
            case (MR_Integer) 107:
#line 895 "declarative_user.m"
              if (MR_offset_streq(2, mdb__declarative_user__HeadVar__1_1, (MR_String) "skip"))
#line 895 "declarative_user.m"
                mdb__declarative_user__case_num_0 = (MR_Integer) 26;
#line 895 "declarative_user.m"
              break;
#line 895 "declarative_user.m"
          }
#line 895 "declarative_user.m"
          break;
#line 895 "declarative_user.m"
        case (MR_Integer) 116:
#line 895 "declarative_user.m"
#line 895 "declarative_user.m"
          switch (MR_nth_code_unit(mdb__declarative_user__HeadVar__1_1, 1)) {
#line 895 "declarative_user.m"
            case (MR_Integer) 0:
#line 895 "declarative_user.m"
              mdb__declarative_user__case_num_0 = (MR_Integer) 27;
#line 895 "declarative_user.m"
              break;
#line 895 "declarative_user.m"
            case (MR_Integer) 114:
#line 895 "declarative_user.m"
              if (MR_offset_streq(2, mdb__declarative_user__HeadVar__1_1, (MR_String) "trust"))
#line 895 "declarative_user.m"
                mdb__declarative_user__case_num_0 = (MR_Integer) 28;
#line 895 "declarative_user.m"
              break;
#line 895 "declarative_user.m"
          }
#line 895 "declarative_user.m"
          break;
#line 895 "declarative_user.m"
        case (MR_Integer) 117:
#line 895 "declarative_user.m"
          if (MR_offset_streq(1, mdb__declarative_user__HeadVar__1_1, (MR_String) "undo"))
#line 895 "declarative_user.m"
            mdb__declarative_user__case_num_0 = (MR_Integer) 29;
#line 895 "declarative_user.m"
          break;
#line 895 "declarative_user.m"
        case (MR_Integer) 119:
#line 895 "declarative_user.m"
          if (MR_offset_streq(1, mdb__declarative_user__HeadVar__1_1, (MR_String) "width"))
#line 895 "declarative_user.m"
            mdb__declarative_user__case_num_0 = (MR_Integer) 30;
#line 895 "declarative_user.m"
          break;
#line 895 "declarative_user.m"
        case (MR_Integer) 121:
#line 895 "declarative_user.m"
#line 895 "declarative_user.m"
          switch (MR_nth_code_unit(mdb__declarative_user__HeadVar__1_1, 1)) {
#line 895 "declarative_user.m"
            case (MR_Integer) 0:
#line 895 "declarative_user.m"
              mdb__declarative_user__case_num_0 = (MR_Integer) 31;
#line 895 "declarative_user.m"
              break;
#line 895 "declarative_user.m"
            case (MR_Integer) 101:
#line 895 "declarative_user.m"
              if (MR_offset_streq(2, mdb__declarative_user__HeadVar__1_1, (MR_String) "yes"))
#line 895 "declarative_user.m"
                mdb__declarative_user__case_num_0 = (MR_Integer) 32;
#line 895 "declarative_user.m"
              break;
#line 895 "declarative_user.m"
          }
#line 895 "declarative_user.m"
          break;
#line 895 "declarative_user.m"
      }
#line 895 "declarative_user.m"
      if ((mdb__declarative_user__case_num_0 < (MR_Integer) 0))
#line 895 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_FALSE;
#line 895 "declarative_user.m"
      else
#line 895 "declarative_user.m"
        {
#line 895 "declarative_user.m"
          /* we found a match; look up the results */
#line 895 "declarative_user.m"
          *mdb__declarative_user__HeadVar__2_2 = ((&mdb__declarative_user_vector_common_8[0 + mdb__declarative_user__case_num_0]))->mdb__declarative_user__vector_common_type_8_0__vct_8_f_0;
#line 895 "declarative_user.m"
          mdb__declarative_user__succeeded = MR_TRUE;
#line 895 "declarative_user.m"
        }
#line 895 "declarative_user.m"
    }
#line 895 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 895 "declarative_user.m"
  }
#line 891 "declarative_user.m"
}

#line 865 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__get_command_6_p_0_1(
#line 865 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 865 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1)
#line 865 "declarative_user.m"
{
#line 865 "declarative_user.m"
  {
#line 865 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 865 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;

#line 865 "declarative_user.m"
    {
#line 865 "declarative_user.m"
      mdb__declarative_user__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) mdb__declarative_user__wrapper_arg_1));
    }
#line 865 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 865 "declarative_user.m"
  }
#line 865 "declarative_user.m"
}

#line 858 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__get_command_6_p_0(
#line 858 "declarative_user.m"
  MR_String mdb__declarative_user__Prompt_7,
#line 858 "declarative_user.m"
  MR_Word * mdb__declarative_user__Command_8,
#line 858 "declarative_user.m"
  MR_Word mdb__declarative_user__User_9,
#line 858 "declarative_user.m"
  MR_Word * mdb__declarative_user__User_4)
#line 858 "declarative_user.m"
{
#line 861 "declarative_user.m"
  {
#line 861 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 861 "declarative_user.m"
    MR_Word mdb__declarative_user__Result_11;
#line 861 "declarative_user.m"
    MR_Word mdb__declarative_user__V_22_22;
#line 861 "declarative_user.m"
    MR_Word mdb__declarative_user__V_30_30;
#line 862 "declarative_user.m"
    MR_Word mdb__declarative_user__V_31_31;
#line 862 "declarative_user.m"
    MR_Word mdb__declarative_user__V_32_32;
#line 862 "declarative_user.m"
    MR_Word mdb__declarative_user__V_33_33;
#line 862 "declarative_user.m"
    MR_Word mdb__declarative_user__V_34_34;

#line 861 "declarative_user.m"
    *mdb__declarative_user__User_4 = mdb__declarative_user__User_9;
#line 862 "declarative_user.m"
    mdb__declarative_user__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 0)));
#line 862 "declarative_user.m"
    mdb__declarative_user__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 1)));
#line 862 "declarative_user.m"
    mdb__declarative_user__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 2)));
#line 862 "declarative_user.m"
    mdb__declarative_user__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 3)));
#line 862 "declarative_user.m"
    mdb__declarative_user__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 4)));
#line 862 "declarative_user.m"
    mdb__declarative_user__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 5)));
#line 862 "declarative_user.m"
    {
#line 862 "declarative_user.m"
      mdb__util__trace_getline_6_p_0(mdb__declarative_user__Prompt_7, &mdb__declarative_user__Result_11, mdb__declarative_user__V_22_22, mdb__declarative_user__V_30_30);
    }
#line 880 "declarative_user.m"
#line 880 "declarative_user.m"
    switch (MR_tag((MR_Word) mdb__declarative_user__Result_11)) {
#line 880 "declarative_user.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 880 "declarative_user.m"
      case (MR_Integer) 0:
#line 888 "declarative_user.m"
        *mdb__declarative_user__Command_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
#line 880 "declarative_user.m"
        break;
#line 880 "declarative_user.m"
      case (MR_Integer) 1:
#line 864 "declarative_user.m"
        {
#line 864 "declarative_user.m"
          MR_String mdb__declarative_user__String_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Result_11, (MR_Integer) 0)));
#line 864 "declarative_user.m"
          MR_Word mdb__declarative_user__Words_13;

#line 865 "declarative_user.m"
          {
#line 865 "declarative_user.m"
            mdb__declarative_user__Words_13 = mercury__string__words_separator_2_f_0((MR_Word) &mdb__declarative_user_scalar_common_2[1], mdb__declarative_user__String_12);
          }
#line 876 "declarative_user.m"
          if ((mdb__declarative_user__Words_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 878 "declarative_user.m"
            *mdb__declarative_user__Command_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 876 "declarative_user.m"
          else
#line 867 "declarative_user.m"
            {
#line 867 "declarative_user.m"
              MR_String mdb__declarative_user__CmdWord_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Words_13, (MR_Integer) 0)));
#line 867 "declarative_user.m"
              MR_Word mdb__declarative_user__CmdArgs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Words_13, (MR_Integer) 1)));
#line 868 "declarative_user.m"
              MR_Word mdb__declarative_user__CommandPrime_17;
#line 869 "declarative_user.m"
              MR_Word mdb__declarative_user__CmdHandler_16;
#line 870 "declarative_user.m"
              MR_bool MR_CALL (* mdb__declarative_user__func_0)(MR_Box, MR_Box, MR_Box *);
#line 870 "declarative_user.m"
              MR_Box mdb__declarative_user__conv1_CommandPrime_17;

#line 869 "declarative_user.m"
              {
#line 869 "declarative_user.m"
                mdb__declarative_user__succeeded = mdb__declarative_user__cmd_handler_2_p_0(mdb__declarative_user__CmdWord_14, &mdb__declarative_user__CmdHandler_16);
              }
#line 869 "declarative_user.m"
              if (mdb__declarative_user__succeeded)
#line 869 "declarative_user.m"
                {
#line 870 "declarative_user.m"
                  mdb__declarative_user__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mdb__declarative_user__CmdHandler_16, (MR_Integer) 1)));
#line 870 "declarative_user.m"
                  {
#line 870 "declarative_user.m"
                    mdb__declarative_user__succeeded = mdb__declarative_user__func_0(((MR_Box) mdb__declarative_user__CmdHandler_16), ((MR_Box) (mdb__declarative_user__CmdArgs_15)), &mdb__declarative_user__conv1_CommandPrime_17);
                  }
#line 870 "declarative_user.m"
                  if (mdb__declarative_user__succeeded)
#line 870 "declarative_user.m"
                    {
#line 870 "declarative_user.m"
                      mdb__declarative_user__CommandPrime_17 = ((MR_Word) mdb__declarative_user__conv1_CommandPrime_17);
#line 870 "declarative_user.m"
                      mdb__declarative_user__succeeded = MR_TRUE;
#line 870 "declarative_user.m"
                    }
#line 869 "declarative_user.m"
                }
#line 868 "declarative_user.m"
              if (mdb__declarative_user__succeeded)
#line 872 "declarative_user.m"
                *mdb__declarative_user__Command_8 = mdb__declarative_user__CommandPrime_17;
#line 868 "declarative_user.m"
              else
#line 874 "declarative_user.m"
                *mdb__declarative_user__Command_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12));
#line 867 "declarative_user.m"
            }
#line 864 "declarative_user.m"
        }
#line 880 "declarative_user.m"
        break;
#line 880 "declarative_user.m"
      case (MR_Integer) 2:
#line 881 "declarative_user.m"
        {
#line 881 "declarative_user.m"
          MR_Word mdb__declarative_user__Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__Result_11, (MR_Integer) 0)));
#line 881 "declarative_user.m"
          MR_String mdb__declarative_user__Msg_19;
#line 881 "declarative_user.m"
          MR_Word mdb__declarative_user__V_25_25;
#line 881 "declarative_user.m"
          MR_Word mdb__declarative_user__V_27_27;
#line 883 "declarative_user.m"
          MR_Word mdb__declarative_user__V_40_40;
#line 883 "declarative_user.m"
          MR_Word mdb__declarative_user__V_41_41;
#line 883 "declarative_user.m"
          MR_Word mdb__declarative_user__V_42_42;
#line 883 "declarative_user.m"
          MR_Word mdb__declarative_user__V_43_43;
#line 883 "declarative_user.m"
          MR_Word mdb__declarative_user__V_44_44;
#line 884 "declarative_user.m"
          MR_Word mdb__declarative_user__V_45_45;
#line 884 "declarative_user.m"
          MR_Word mdb__declarative_user__V_46_46;
#line 884 "declarative_user.m"
          MR_Word mdb__declarative_user__V_47_47;
#line 884 "declarative_user.m"
          MR_Word mdb__declarative_user__V_48_48;
#line 884 "declarative_user.m"
          MR_Word mdb__declarative_user__V_49_49;

#line 882 "declarative_user.m"
          {
#line 882 "declarative_user.m"
            mercury__io__error_message_2_p_0(mdb__declarative_user__Error_18, &mdb__declarative_user__Msg_19);
          }
#line 883 "declarative_user.m"
          mdb__declarative_user__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 0)));
#line 883 "declarative_user.m"
          mdb__declarative_user__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 1)));
#line 883 "declarative_user.m"
          mdb__declarative_user__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 2)));
#line 883 "declarative_user.m"
          mdb__declarative_user__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 3)));
#line 883 "declarative_user.m"
          mdb__declarative_user__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 4)));
#line 883 "declarative_user.m"
          mdb__declarative_user__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 5)));
#line 883 "declarative_user.m"
          {
#line 883 "declarative_user.m"
            mercury__io__write_string_4_p_0(mdb__declarative_user__V_25_25, mdb__declarative_user__Msg_19);
          }
#line 884 "declarative_user.m"
          mdb__declarative_user__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 0)));
#line 884 "declarative_user.m"
          mdb__declarative_user__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 1)));
#line 884 "declarative_user.m"
          mdb__declarative_user__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 2)));
#line 884 "declarative_user.m"
          mdb__declarative_user__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 3)));
#line 884 "declarative_user.m"
          mdb__declarative_user__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 4)));
#line 884 "declarative_user.m"
          mdb__declarative_user__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_9, (MR_Integer) 5)));
#line 884 "declarative_user.m"
          {
#line 884 "declarative_user.m"
            mercury__io__nl_3_p_0(mdb__declarative_user__V_27_27);
          }
#line 885 "declarative_user.m"
          *mdb__declarative_user__Command_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
#line 881 "declarative_user.m"
        }
#line 880 "declarative_user.m"
        break;
#line 880 "declarative_user.m"
    }
#line 861 "declarative_user.m"
  }
#line 858 "declarative_user.m"
}

#line 781 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__print_atom_arguments_6_p_0(
#line 781 "declarative_user.m"
  MR_Word mdb__declarative_user__Atom_7,
#line 781 "declarative_user.m"
  MR_Integer mdb__declarative_user__From_8,
#line 781 "declarative_user.m"
  MR_Integer mdb__declarative_user__To_9,
#line 781 "declarative_user.m"
  MR_Word mdb__declarative_user__User_10)
#line 781 "declarative_user.m"
{
#line 784 "declarative_user.m"
  while (MR_TRUE)
#line 784 "declarative_user.m"
    {
#line 784 "declarative_user.m"
      /* tailcall optimized into a loop */
#line 784 "declarative_user.m"
      {
#line 784 "declarative_user.m"
        MR_bool mdb__declarative_user__succeeded;
#line 784 "declarative_user.m"
        MR_Word mdb__declarative_user__OK_12;
#line 784 "declarative_user.m"
        MR_Word mdb__declarative_user__Args0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Atom_7, (MR_Integer) 1)));
#line 784 "declarative_user.m"
        MR_Word mdb__declarative_user__Args_30;
#line 784 "declarative_user.m"
        MR_Word mdb__declarative_user__V_37_37;
#line 799 "declarative_user.m"
        MR_Box mdb__declarative_user__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Atom_7, (MR_Integer) 0)));
#line 801 "declarative_user.m"
        MR_Word mdb__declarative_user__Arg_36;
#line 802 "declarative_user.m"
        MR_Word mdb__declarative_user__ArgInfo_31;
#line 802 "declarative_user.m"
        MR_Word mdb__declarative_user__MaybeArg_34;
#line 802 "declarative_user.m"
        MR_Word mdb__declarative_user__ArgRep_35;
#line 802 "declarative_user.m"
        MR_Box mdb__declarative_user__conv0_ArgInfo_31;
#line 803 "declarative_user.m"
        MR_Word mdb__declarative_user__V_32_32;
#line 803 "declarative_user.m"
        MR_Integer mdb__declarative_user__V_33_33;
#line 787 "declarative_user.m"
        MR_Integer mdb__declarative_user__V_16_16;
#line 787 "declarative_user.m"
        MR_Integer mdb__declarative_user__V_17_17;

#line 800 "declarative_user.m"
        {
#line 800 "declarative_user.m"
          mdb__declarative_user__V_37_37 = mdb__declarative_execution__chosen_head_vars_presentation_0_f_0();
        }
#line 800 "declarative_user.m"
        {
#line 800 "declarative_user.m"
          mdb__declarative_execution__maybe_filter_headvars_3_p_0(mdb__declarative_user__V_37_37, mdb__declarative_user__Args0_29, &mdb__declarative_user__Args_30);
        }
#line 802 "declarative_user.m"
        {
#line 802 "declarative_user.m"
          mdb__declarative_user__succeeded = mercury__list__index1_3_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_user__Args_30, mdb__declarative_user__From_8, &mdb__declarative_user__conv0_ArgInfo_31);
        }
#line 802 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 802 "declarative_user.m"
          {
#line 802 "declarative_user.m"
            mdb__declarative_user__ArgInfo_31 = ((MR_Word) mdb__declarative_user__conv0_ArgInfo_31);
#line 802 "declarative_user.m"
            mdb__declarative_user__succeeded = MR_TRUE;
#line 802 "declarative_user.m"
          }
#line 802 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 802 "declarative_user.m"
          {
#line 803 "declarative_user.m"
            mdb__declarative_user__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgInfo_31, (MR_Integer) 0)));
#line 803 "declarative_user.m"
            mdb__declarative_user__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgInfo_31, (MR_Integer) 1)));
#line 803 "declarative_user.m"
            mdb__declarative_user__MaybeArg_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgInfo_31, (MR_Integer) 2)));
#line 804 "declarative_user.m"
            mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__MaybeArg_34)) == (MR_mktag((MR_Integer) 1)));
#line 804 "declarative_user.m"
            if (mdb__declarative_user__succeeded)
#line 804 "declarative_user.m"
              {
#line 804 "declarative_user.m"
                mdb__declarative_user__ArgRep_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeArg_34, (MR_Integer) 0)));
#line 805 "declarative_user.m"
                {
#line 805 "declarative_user.m"
                  mdb__term_rep__rep_to_univ_2_p_0(mdb__declarative_user__ArgRep_35, &mdb__declarative_user__Arg_36);
                }
#line 805 "declarative_user.m"
                mdb__declarative_user__succeeded = MR_TRUE;
#line 804 "declarative_user.m"
              }
#line 802 "declarative_user.m"
          }
#line 801 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 808 "declarative_user.m"
          {
#line 808 "declarative_user.m"
            MR_Word mdb__declarative_user__V_38_38;
#line 808 "declarative_user.m"
            MR_Word mdb__declarative_user__V_39_39;
#line 808 "declarative_user.m"
            MR_Word mdb__declarative_user__V_47_47;
#line 807 "declarative_user.m"
            MR_Word mdb__declarative_user__V_46_46;
#line 807 "declarative_user.m"
            MR_Word mdb__declarative_user__V_48_48;
#line 807 "declarative_user.m"
            MR_Word mdb__declarative_user__V_49_49;
#line 807 "declarative_user.m"
            MR_Word mdb__declarative_user__V_50_50;

#line 807 "declarative_user.m"
            {
#line 807 "declarative_user.m"
              mdb__declarative_user__V_38_38 = mdb__browser_term__univ_to_browser_term_1_f_0(mdb__declarative_user__Arg_36);
            }
#line 807 "declarative_user.m"
            mdb__declarative_user__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 0)));
#line 807 "declarative_user.m"
            mdb__declarative_user__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 1)));
#line 807 "declarative_user.m"
            mdb__declarative_user__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 2)));
#line 807 "declarative_user.m"
            mdb__declarative_user__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 3)));
#line 807 "declarative_user.m"
            mdb__declarative_user__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 4)));
#line 807 "declarative_user.m"
            mdb__declarative_user__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 5)));
#line 807 "declarative_user.m"
            {
#line 807 "declarative_user.m"
              mdb__browse__print_browser_term_6_p_0(mdb__declarative_user__V_38_38, mdb__declarative_user__V_39_39, (MR_Integer) 0, mdb__declarative_user__V_47_47);
            }
#line 809 "declarative_user.m"
            mdb__declarative_user__OK_12 = (MR_Integer) 1;
#line 808 "declarative_user.m"
          }
#line 801 "declarative_user.m"
        else
#line 811 "declarative_user.m"
          {
#line 811 "declarative_user.m"
            MR_Word mdb__declarative_user__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 1)));
#line 811 "declarative_user.m"
            MR_Word mdb__declarative_user__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 0)));
#line 811 "declarative_user.m"
            MR_Word mdb__declarative_user__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 2)));
#line 811 "declarative_user.m"
            MR_Word mdb__declarative_user__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 3)));
#line 811 "declarative_user.m"
            MR_Word mdb__declarative_user__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 4)));
#line 811 "declarative_user.m"
            MR_Word mdb__declarative_user__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_10, (MR_Integer) 5)));

#line 811 "declarative_user.m"
            {
#line 811 "declarative_user.m"
              mercury__io__write_string_4_p_0(mdb__declarative_user__V_43_43, (MR_String) "Invalid argument number\n");
            }
#line 812 "declarative_user.m"
            mdb__declarative_user__OK_12 = (MR_Integer) 0;
#line 811 "declarative_user.m"
          }
#line 787 "declarative_user.m"
        mdb__declarative_user__succeeded = (mdb__declarative_user__OK_12 == (MR_Integer) 1);
#line 787 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 787 "declarative_user.m"
          {
#line 788 "declarative_user.m"
            mdb__declarative_user__V_17_17 = (MR_Integer) 1;
#line 788 "declarative_user.m"
            mdb__declarative_user__V_16_16 = (mdb__declarative_user__From_8 + mdb__declarative_user__V_17_17);
#line 788 "declarative_user.m"
            mdb__declarative_user__succeeded = (mdb__declarative_user__V_16_16 <= mdb__declarative_user__To_9);
#line 787 "declarative_user.m"
          }
#line 786 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 790 "declarative_user.m"
          {
#line 790 "declarative_user.m"
            MR_Integer mdb__declarative_user__V_18_18 = (mdb__declarative_user__From_8 + (MR_Integer) 1);

#line 790 "declarative_user.m"
            /* direct tailcall eliminated */
#line 790 "declarative_user.m"
            {
#line 790 "declarative_user.m"
              MR_Integer mdb__declarative_user__From__tmp_copy_8 = mdb__declarative_user__V_18_18;

#line 790 "declarative_user.m"
              mdb__declarative_user__From_8 = mdb__declarative_user__From__tmp_copy_8;
#line 790 "declarative_user.m"
            }
#line 790 "declarative_user.m"
            continue;
#line 790 "declarative_user.m"
          }
#line 786 "declarative_user.m"
        else
#line 786 "declarative_user.m"
          {
#line 786 "declarative_user.m"
          }
#line 784 "declarative_user.m"
      }
#line 784 "declarative_user.m"
      break;
#line 784 "declarative_user.m"
    }
#line 781 "declarative_user.m"
}

#line 761 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__get_user_arg_values_2_p_0(
#line 761 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 761 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2)
#line 761 "declarative_user.m"
{
#line 763 "declarative_user.m"
  {
#line 763 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;

#line 763 "declarative_user.m"
    if ((mdb__declarative_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 763 "declarative_user.m"
      *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 763 "declarative_user.m"
    else
#line 764 "declarative_user.m"
      {
#line 764 "declarative_user.m"
        MR_Word mdb__declarative_user__UserVisible_3;
#line 764 "declarative_user.m"
        MR_Word mdb__declarative_user__MaybeValue_5;
#line 764 "declarative_user.m"
        MR_Word mdb__declarative_user__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));
#line 764 "declarative_user.m"
        MR_Word mdb__declarative_user__Values0_8;
#line 764 "declarative_user.m"
        MR_Word mdb__declarative_user__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
#line 764 "declarative_user.m"
        MR_Integer mdb__declarative_user__V_4_4;

#line 764 "declarative_user.m"
        mdb__declarative_user__UserVisible_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_11_11, (MR_Integer) 0)));
#line 764 "declarative_user.m"
        mdb__declarative_user__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_11_11, (MR_Integer) 1)));
#line 764 "declarative_user.m"
        mdb__declarative_user__MaybeValue_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_11_11, (MR_Integer) 2)));
#line 765 "declarative_user.m"
        {
#line 765 "declarative_user.m"
          mdb__declarative_user__get_user_arg_values_2_p_0(mdb__declarative_user__Args_6, &mdb__declarative_user__Values0_8);
        }
#line 776 "declarative_user.m"
#line 776 "declarative_user.m"
        switch (mdb__declarative_user__UserVisible_3) {
#line 776 "declarative_user.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 776 "declarative_user.m"
          case (MR_Integer) 0:
#line 778 "declarative_user.m"
            *mdb__declarative_user__HeadVar__2_2 = mdb__declarative_user__Values0_8;
#line 776 "declarative_user.m"
            break;
#line 776 "declarative_user.m"
          case (MR_Integer) 1:
#line 767 "declarative_user.m"
            {
#line 767 "declarative_user.m"
              MR_Word mdb__declarative_user__Value_10;

#line 771 "declarative_user.m"
              if ((mdb__declarative_user__MaybeValue_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 772 "declarative_user.m"
                {
#line 773 "declarative_user.m"
                  mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 773 "declarative_user.m"
                  {
#line 773 "declarative_user.m"
                    mdb__declarative_user__Value_10 = mercury__univ__univ_1_f_1((MR_Word) &mdb__browse__mdb__browse__type_ctor_info_unbound_0, ((MR_Box) ((MR_Integer) 0)));
                  }
#line 772 "declarative_user.m"
                }
#line 771 "declarative_user.m"
              else
#line 769 "declarative_user.m"
                {
#line 769 "declarative_user.m"
                  MR_Word mdb__declarative_user__ValueRep_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeValue_5, (MR_Integer) 0)));

#line 770 "declarative_user.m"
                  {
#line 770 "declarative_user.m"
                    mdb__term_rep__rep_to_univ_2_p_0(mdb__declarative_user__ValueRep_9, &mdb__declarative_user__Value_10);
                  }
#line 769 "declarative_user.m"
                }
#line 775 "declarative_user.m"
              {
#line 775 "declarative_user.m"
                MR_Word base;
#line 775 "declarative_user.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "declarative_user.m"
                *mdb__declarative_user__HeadVar__2_2 = base;
#line 775 "declarative_user.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__Value_10));
#line 775 "declarative_user.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__Values0_8));
#line 775 "declarative_user.m"
              }
#line 767 "declarative_user.m"
            }
#line 776 "declarative_user.m"
            break;
#line 776 "declarative_user.m"
        }
#line 764 "declarative_user.m"
      }
#line 763 "declarative_user.m"
  }
#line 761 "declarative_user.m"
}

#line 751 "declarative_user.m"
static MR_Word MR_CALL 
mdb__declarative_user__get_subterm_mode_from_atoms_for_arg_4_f_0(
#line 751 "declarative_user.m"
  MR_Integer mdb__declarative_user__ArgNum_6,
#line 751 "declarative_user.m"
  MR_Word mdb__declarative_user__InitAtom_7,
#line 751 "declarative_user.m"
  MR_Word mdb__declarative_user__FinalAtom_8,
#line 751 "declarative_user.m"
  MR_Word mdb__declarative_user__Dirs_9)
#line 751 "declarative_user.m"
{
#line 755 "declarative_user.m"
  {
#line 755 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 755 "declarative_user.m"
    MR_Word mdb__declarative_user__Mode_10;
#line 755 "declarative_user.m"
    MR_Word mdb__declarative_user__TermPath_11;
#line 755 "declarative_user.m"
    MR_Word mdb__declarative_user__ArgPos_12;
#line 755 "declarative_user.m"
    MR_Word mdb__declarative_user__Which_15;

#line 756 "declarative_user.m"
    {
#line 756 "declarative_user.m"
      mdb__declarative_user__convert_dirs_to_term_path_from_atom_3_p_0(mdb__declarative_user__FinalAtom_8, mdb__declarative_user__Dirs_9, &mdb__declarative_user__TermPath_11);
    }
#line 438 "declarative_user.m"
    {
#line 438 "declarative_user.m"
      mdb__declarative_user__Which_15 = mdb__declarative_execution__chosen_head_vars_presentation_0_f_0();
    }
#line 442 "declarative_user.m"
#line 442 "declarative_user.m"
    switch (mdb__declarative_user__Which_15) {
#line 442 "declarative_user.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 442 "declarative_user.m"
      case (MR_Integer) 0:
#line 444 "declarative_user.m"
        {
#line 444 "declarative_user.m"
          mdb__declarative_user__ArgPos_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 444 "declarative_user.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgPos_12, 0) = ((MR_Box) (mdb__declarative_user__ArgNum_6));
#line 444 "declarative_user.m"
        }
#line 442 "declarative_user.m"
        break;
#line 442 "declarative_user.m"
      case (MR_Integer) 1:
#line 441 "declarative_user.m"
        {
#line 441 "declarative_user.m"
          mdb__declarative_user__ArgPos_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 441 "declarative_user.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgPos_12, 0) = ((MR_Box) (mdb__declarative_user__ArgNum_6));
#line 441 "declarative_user.m"
        }
#line 442 "declarative_user.m"
        break;
#line 442 "declarative_user.m"
    }
#line 743 "declarative_user.m"
    {
#line 743 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_tree__trace_atom_subterm_is_ground_3_p_0(mdb__declarative_user__InitAtom_7, mdb__declarative_user__ArgPos_12, mdb__declarative_user__TermPath_11);
    }
#line 743 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 744 "declarative_user.m"
      mdb__declarative_user__Mode_10 = (MR_Integer) 0;
#line 743 "declarative_user.m"
    else
#line 745 "declarative_user.m"
      {
#line 745 "declarative_user.m"
        {
#line 745 "declarative_user.m"
          mdb__declarative_user__succeeded = mdb__declarative_tree__trace_atom_subterm_is_ground_3_p_0(mdb__declarative_user__FinalAtom_8, mdb__declarative_user__ArgPos_12, mdb__declarative_user__TermPath_11);
        }
#line 745 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 746 "declarative_user.m"
          mdb__declarative_user__Mode_10 = (MR_Integer) 1;
#line 745 "declarative_user.m"
        else
#line 748 "declarative_user.m"
          mdb__declarative_user__Mode_10 = (MR_Integer) 2;
#line 745 "declarative_user.m"
      }
#line 755 "declarative_user.m"
    return mdb__declarative_user__Mode_10;
#line 755 "declarative_user.m"
  }
#line 751 "declarative_user.m"
}

#line 723 "declarative_user.m"
static MR_Word MR_CALL 
mdb__declarative_user__get_subterm_mode_from_atoms_3_f_0(
#line 723 "declarative_user.m"
  MR_Word mdb__declarative_user__InitAtom_5,
#line 723 "declarative_user.m"
  MR_Word mdb__declarative_user__FinalAtom_6,
#line 723 "declarative_user.m"
  MR_Word mdb__declarative_user__Dirs_7)
#line 723 "declarative_user.m"
{
#line 726 "declarative_user.m"
  {
#line 726 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 726 "declarative_user.m"
    MR_Word mdb__declarative_user__Mode_8;
#line 726 "declarative_user.m"
    MR_Word mdb__declarative_user__Path_9;

#line 727 "declarative_user.m"
    {
#line 727 "declarative_user.m"
      mdb__declarative_user__convert_dirs_to_term_path_from_atom_3_p_0(mdb__declarative_user__FinalAtom_6, mdb__declarative_user__Dirs_7, &mdb__declarative_user__Path_9);
    }
#line 733 "declarative_user.m"
    if ((mdb__declarative_user__Path_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 735 "declarative_user.m"
      mdb__declarative_user__Mode_8 = (MR_Integer) 3;
#line 733 "declarative_user.m"
    else
#line 729 "declarative_user.m"
      {
#line 729 "declarative_user.m"
        MR_Integer mdb__declarative_user__ArgNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Path_9, (MR_Integer) 0)));
#line 729 "declarative_user.m"
        MR_Word mdb__declarative_user__TermPath_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Path_9, (MR_Integer) 1)));
#line 729 "declarative_user.m"
        MR_Word mdb__declarative_user__ArgPos_12;
#line 729 "declarative_user.m"
        MR_Word mdb__declarative_user__Which_15;

#line 438 "declarative_user.m"
        {
#line 438 "declarative_user.m"
          mdb__declarative_user__Which_15 = mdb__declarative_execution__chosen_head_vars_presentation_0_f_0();
        }
#line 442 "declarative_user.m"
#line 442 "declarative_user.m"
        switch (mdb__declarative_user__Which_15) {
#line 442 "declarative_user.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 442 "declarative_user.m"
          case (MR_Integer) 0:
#line 444 "declarative_user.m"
            {
#line 444 "declarative_user.m"
              mdb__declarative_user__ArgPos_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 444 "declarative_user.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgPos_12, 0) = ((MR_Box) (mdb__declarative_user__ArgNum_10));
#line 444 "declarative_user.m"
            }
#line 442 "declarative_user.m"
            break;
#line 442 "declarative_user.m"
          case (MR_Integer) 1:
#line 441 "declarative_user.m"
            {
#line 441 "declarative_user.m"
              mdb__declarative_user__ArgPos_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 441 "declarative_user.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgPos_12, 0) = ((MR_Box) (mdb__declarative_user__ArgNum_10));
#line 441 "declarative_user.m"
            }
#line 442 "declarative_user.m"
            break;
#line 442 "declarative_user.m"
        }
#line 743 "declarative_user.m"
        {
#line 743 "declarative_user.m"
          mdb__declarative_user__succeeded = mdb__declarative_tree__trace_atom_subterm_is_ground_3_p_0(mdb__declarative_user__InitAtom_5, mdb__declarative_user__ArgPos_12, mdb__declarative_user__TermPath_11);
        }
#line 743 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 744 "declarative_user.m"
          mdb__declarative_user__Mode_8 = (MR_Integer) 0;
#line 743 "declarative_user.m"
        else
#line 745 "declarative_user.m"
          {
#line 745 "declarative_user.m"
            {
#line 745 "declarative_user.m"
              mdb__declarative_user__succeeded = mdb__declarative_tree__trace_atom_subterm_is_ground_3_p_0(mdb__declarative_user__FinalAtom_6, mdb__declarative_user__ArgPos_12, mdb__declarative_user__TermPath_11);
            }
#line 745 "declarative_user.m"
            if (mdb__declarative_user__succeeded)
#line 746 "declarative_user.m"
              mdb__declarative_user__Mode_8 = (MR_Integer) 1;
#line 745 "declarative_user.m"
            else
#line 748 "declarative_user.m"
              mdb__declarative_user__Mode_8 = (MR_Integer) 2;
#line 745 "declarative_user.m"
          }
#line 729 "declarative_user.m"
      }
#line 726 "declarative_user.m"
    return mdb__declarative_user__Mode_8;
#line 726 "declarative_user.m"
  }
#line 723 "declarative_user.m"
}

#line 716 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__browse_xml_atom_4_p_0_1(
#line 716 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg)
#line 716 "declarative_user.m"
{
#line 716 "declarative_user.m"
  {
#line 716 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 716 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;

#line 716 "declarative_user.m"
    {
#line 716 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__IntroducedFrom__pred__browse_xml_atom__716__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 4))));
    }
#line 716 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 716 "declarative_user.m"
  }
#line 716 "declarative_user.m"
}

#line 708 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__browse_xml_atom_4_p_0(
#line 708 "declarative_user.m"
  MR_Word mdb__declarative_user__Atom_5,
#line 708 "declarative_user.m"
  MR_Word mdb__declarative_user__User_6)
#line 708 "declarative_user.m"
{
#line 711 "declarative_user.m"
  {
#line 711 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 711 "declarative_user.m"
    MR_Box mdb__declarative_user__ProcLayout_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Atom_5, (MR_Integer) 0)));
#line 711 "declarative_user.m"
    MR_Word mdb__declarative_user__Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Atom_5, (MR_Integer) 1)));
#line 711 "declarative_user.m"
    MR_Word mdb__declarative_user__ProcLabel_10;
#line 711 "declarative_user.m"
    MR_Word mdb__declarative_user__ArgValues_11;
#line 711 "declarative_user.m"
    MR_Word mdb__declarative_user__Module_12;
#line 711 "declarative_user.m"
    MR_String mdb__declarative_user__Name_13;
#line 711 "declarative_user.m"
    MR_Word mdb__declarative_user__PredOrFunc_15;
#line 711 "declarative_user.m"
    MR_Word mdb__declarative_user__IsFunction_16;
#line 711 "declarative_user.m"
    MR_String mdb__declarative_user__ModuleStr_17;
#line 711 "declarative_user.m"
    MR_Word mdb__declarative_user__BrowserTerm_18;
#line 711 "declarative_user.m"
    MR_Word mdb__declarative_user__V_21_21;
#line 711 "declarative_user.m"
    MR_String mdb__declarative_user__V_23_23;
#line 711 "declarative_user.m"
    MR_String mdb__declarative_user__V_24_24;
#line 711 "declarative_user.m"
    MR_Word mdb__declarative_user__V_26_26;
#line 711 "declarative_user.m"
    MR_Word mdb__declarative_user__V_31_31;
#line 715 "declarative_user.m"
    MR_Integer mdb__declarative_user__V_14_14;
#line 720 "declarative_user.m"
    MR_Word mdb__declarative_user__V_30_30;
#line 720 "declarative_user.m"
    MR_Word mdb__declarative_user__V_32_32;
#line 720 "declarative_user.m"
    MR_Word mdb__declarative_user__V_33_33;
#line 720 "declarative_user.m"
    MR_Word mdb__declarative_user__V_34_34;

#line 713 "declarative_user.m"
    {
#line 713 "declarative_user.m"
      mdb__declarative_user__ProcLabel_10 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_user__ProcLayout_8);
    }
#line 714 "declarative_user.m"
    {
#line 714 "declarative_user.m"
      mdb__declarative_user__get_user_arg_values_2_p_0(mdb__declarative_user__Args_9, &mdb__declarative_user__ArgValues_11);
    }
#line 715 "declarative_user.m"
    {
#line 715 "declarative_user.m"
      mdb__declarative_execution__get_pred_attributes_5_p_0(mdb__declarative_user__ProcLabel_10, &mdb__declarative_user__Module_12, &mdb__declarative_user__Name_13, &mdb__declarative_user__V_14_14, &mdb__declarative_user__PredOrFunc_15);
    }
#line 716 "declarative_user.m"
    {
#line 716 "declarative_user.m"
      mdb__declarative_user__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 716 "declarative_user.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_21_21, 0) = ((MR_Box) (&mdb__declarative_user_scalar_common_3[0]));
#line 716 "declarative_user.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_21_21, 1) = ((MR_Box) (mdb__declarative_user__browse_xml_atom_4_p_0_1));
#line 716 "declarative_user.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 716 "declarative_user.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_21_21, 3) = ((MR_Box) (mdb__declarative_user__PredOrFunc_15));
#line 716 "declarative_user.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_21_21, 4) = ((MR_Box) ((MR_Integer) 1));
#line 716 "declarative_user.m"
    }
#line 716 "declarative_user.m"
    {
#line 716 "declarative_user.m"
      mdb__declarative_user__IsFunction_16 = mercury__bool__pred_to_bool_1_f_0(mdb__declarative_user__V_21_21);
    }
#line 717 "declarative_user.m"
    {
#line 717 "declarative_user.m"
      mdb__declarative_user__ModuleStr_17 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdb__declarative_user__Module_12);
    }
#line 718 "declarative_user.m"
    {
#line 718 "declarative_user.m"
      mdb__declarative_user__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) ".", mdb__declarative_user__Name_13);
    }
#line 718 "declarative_user.m"
    {
#line 718 "declarative_user.m"
      mdb__declarative_user__V_23_23 = mercury__string__f_43_43_2_f_0(mdb__declarative_user__ModuleStr_17, mdb__declarative_user__V_24_24);
    }
#line 718 "declarative_user.m"
    {
#line 718 "declarative_user.m"
      mdb__declarative_user__BrowserTerm_18 = mdb__browser_term__synthetic_term_to_browser_term_3_f_0(mdb__declarative_user__V_23_23, mdb__declarative_user__ArgValues_11, mdb__declarative_user__IsFunction_16);
    }
#line 720 "declarative_user.m"
    mdb__declarative_user__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 0)));
#line 720 "declarative_user.m"
    mdb__declarative_user__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 1)));
#line 720 "declarative_user.m"
    mdb__declarative_user__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 2)));
#line 720 "declarative_user.m"
    mdb__declarative_user__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 3)));
#line 720 "declarative_user.m"
    mdb__declarative_user__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 4)));
#line 720 "declarative_user.m"
    mdb__declarative_user__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_6, (MR_Integer) 5)));
#line 720 "declarative_user.m"
    {
#line 720 "declarative_user.m"
      mdb__browse__save_and_browse_browser_term_xml_6_p_0(mdb__declarative_user__BrowserTerm_18, mdb__declarative_user__V_26_26, mdb__declarative_user__V_26_26, mdb__declarative_user__V_31_31);
    }
#line 711 "declarative_user.m"
  }
#line 708 "declarative_user.m"
}

#line 702 "declarative_user.m"
static MR_Box MR_CALL 
mdb__declarative_user__browse_atom_7_p_0_2(
#line 702 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 702 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1)
#line 702 "declarative_user.m"
{
#line 702 "declarative_user.m"
  {
#line 702 "declarative_user.m"
    MR_Box mdb__declarative_user__wrapper_arg_2;
#line 702 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 702 "declarative_user.m"
    MR_Word mdb__declarative_user__conv0_Mode_8;

#line 702 "declarative_user.m"
    {
#line 702 "declarative_user.m"
      mdb__declarative_user__conv0_Mode_8 = mdb__declarative_user__get_subterm_mode_from_atoms_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 4))), ((MR_Word) mdb__declarative_user__wrapper_arg_1));
    }
#line 702 "declarative_user.m"
    mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv0_Mode_8));
#line 702 "declarative_user.m"
    return mdb__declarative_user__wrapper_arg_2;
#line 702 "declarative_user.m"
  }
#line 702 "declarative_user.m"
}

#line 697 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__browse_atom_7_p_0_1(
#line 697 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg)
#line 697 "declarative_user.m"
{
#line 697 "declarative_user.m"
  {
#line 697 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 697 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;

#line 697 "declarative_user.m"
    {
#line 697 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__IntroducedFrom__pred__browse_atom__697__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 4))));
    }
#line 697 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 697 "declarative_user.m"
  }
#line 697 "declarative_user.m"
}

#line 688 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__browse_atom_7_p_0(
#line 688 "declarative_user.m"
  MR_Word mdb__declarative_user__InitAtom_8,
#line 688 "declarative_user.m"
  MR_Word mdb__declarative_user__FinalAtom_9,
#line 688 "declarative_user.m"
  MR_Word * mdb__declarative_user__MaybeTrack_10,
#line 688 "declarative_user.m"
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_26,
#line 688 "declarative_user.m"
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_27)
#line 688 "declarative_user.m"
{
#line 692 "declarative_user.m"
  {
#line 692 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 692 "declarative_user.m"
    MR_Box mdb__declarative_user__ProcLayout_13 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalAtom_9, (MR_Integer) 0)));
#line 692 "declarative_user.m"
    MR_Word mdb__declarative_user__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalAtom_9, (MR_Integer) 1)));
#line 692 "declarative_user.m"
    MR_Word mdb__declarative_user__ProcLabel_15;
#line 692 "declarative_user.m"
    MR_Word mdb__declarative_user__ArgValues_16;
#line 692 "declarative_user.m"
    MR_Word mdb__declarative_user__Module_17;
#line 692 "declarative_user.m"
    MR_String mdb__declarative_user__Name_18;
#line 692 "declarative_user.m"
    MR_Word mdb__declarative_user__PredOrFunc_20;
#line 692 "declarative_user.m"
    MR_Word mdb__declarative_user__IsFunction_21;
#line 692 "declarative_user.m"
    MR_String mdb__declarative_user__ModuleStr_22;
#line 692 "declarative_user.m"
    MR_Word mdb__declarative_user__BrowserTerm_23;
#line 692 "declarative_user.m"
    MR_Word mdb__declarative_user__MaybeTrackDirs_24;
#line 692 "declarative_user.m"
    MR_Word mdb__declarative_user__Browser_25;
#line 692 "declarative_user.m"
    MR_Word mdb__declarative_user__V_30_30;
#line 692 "declarative_user.m"
    MR_String mdb__declarative_user__V_32_32;
#line 692 "declarative_user.m"
    MR_String mdb__declarative_user__V_33_33;
#line 692 "declarative_user.m"
    MR_Word mdb__declarative_user__V_35_35;
#line 692 "declarative_user.m"
    MR_Word mdb__declarative_user__V_37_37;
#line 692 "declarative_user.m"
    MR_Word mdb__declarative_user__V_40_40;
#line 692 "declarative_user.m"
    MR_Word mdb__declarative_user__V_42_42;
#line 692 "declarative_user.m"
    MR_Word mdb__declarative_user__V_43_43;
#line 696 "declarative_user.m"
    MR_Integer mdb__declarative_user__V_19_19;
#line 701 "declarative_user.m"
    MR_Word mdb__declarative_user__V_44_44;
#line 701 "declarative_user.m"
    MR_Word mdb__declarative_user__V_45_45;
#line 701 "declarative_user.m"
    MR_Word mdb__declarative_user__V_46_46;
#line 706 "declarative_user.m"
    MR_Word mdb__declarative_user__V_57_57;
#line 706 "declarative_user.m"
    MR_Word mdb__declarative_user__V_58_58;
#line 706 "declarative_user.m"
    MR_Word mdb__declarative_user__V_60_60;
#line 706 "declarative_user.m"
    MR_Word mdb__declarative_user__V_61_61;
#line 706 "declarative_user.m"
    MR_Word mdb__declarative_user__V_62_62;
#line 706 "declarative_user.m"
    MR_Word mdb__declarative_user__V_59_59;

#line 694 "declarative_user.m"
    {
#line 694 "declarative_user.m"
      mdb__declarative_user__ProcLabel_15 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_user__ProcLayout_13);
    }
#line 695 "declarative_user.m"
    {
#line 695 "declarative_user.m"
      mdb__declarative_user__get_user_arg_values_2_p_0(mdb__declarative_user__Args_14, &mdb__declarative_user__ArgValues_16);
    }
#line 696 "declarative_user.m"
    {
#line 696 "declarative_user.m"
      mdb__declarative_execution__get_pred_attributes_5_p_0(mdb__declarative_user__ProcLabel_15, &mdb__declarative_user__Module_17, &mdb__declarative_user__Name_18, &mdb__declarative_user__V_19_19, &mdb__declarative_user__PredOrFunc_20);
    }
#line 697 "declarative_user.m"
    {
#line 697 "declarative_user.m"
      mdb__declarative_user__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 697 "declarative_user.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_30_30, 0) = ((MR_Box) (&mdb__declarative_user_scalar_common_3[0]));
#line 697 "declarative_user.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_30_30, 1) = ((MR_Box) (mdb__declarative_user__browse_atom_7_p_0_1));
#line 697 "declarative_user.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 697 "declarative_user.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_30_30, 3) = ((MR_Box) (mdb__declarative_user__PredOrFunc_20));
#line 697 "declarative_user.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_30_30, 4) = ((MR_Box) ((MR_Integer) 1));
#line 697 "declarative_user.m"
    }
#line 697 "declarative_user.m"
    {
#line 697 "declarative_user.m"
      mdb__declarative_user__IsFunction_21 = mercury__bool__pred_to_bool_1_f_0(mdb__declarative_user__V_30_30);
    }
#line 698 "declarative_user.m"
    {
#line 698 "declarative_user.m"
      mdb__declarative_user__ModuleStr_22 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdb__declarative_user__Module_17);
    }
#line 699 "declarative_user.m"
    {
#line 699 "declarative_user.m"
      mdb__declarative_user__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) ".", mdb__declarative_user__Name_18);
    }
#line 699 "declarative_user.m"
    {
#line 699 "declarative_user.m"
      mdb__declarative_user__V_32_32 = mercury__string__f_43_43_2_f_0(mdb__declarative_user__ModuleStr_22, mdb__declarative_user__V_33_33);
    }
#line 699 "declarative_user.m"
    {
#line 699 "declarative_user.m"
      mdb__declarative_user__BrowserTerm_23 = mdb__browser_term__synthetic_term_to_browser_term_3_f_0(mdb__declarative_user__V_32_32, mdb__declarative_user__ArgValues_16, mdb__declarative_user__IsFunction_21);
    }
#line 701 "declarative_user.m"
    mdb__declarative_user__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 0)));
#line 701 "declarative_user.m"
    mdb__declarative_user__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 1)));
#line 701 "declarative_user.m"
    mdb__declarative_user__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 2)));
#line 701 "declarative_user.m"
    mdb__declarative_user__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 3)));
#line 701 "declarative_user.m"
    mdb__declarative_user__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 4)));
#line 701 "declarative_user.m"
    mdb__declarative_user__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 5)));
#line 702 "declarative_user.m"
    {
#line 702 "declarative_user.m"
      mdb__declarative_user__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 702 "declarative_user.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_40_40, 0) = ((MR_Box) (&mdb__declarative_user_scalar_common_5[0]));
#line 702 "declarative_user.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_40_40, 1) = ((MR_Box) (mdb__declarative_user__browse_atom_7_p_0_2));
#line 702 "declarative_user.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 702 "declarative_user.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_40_40, 3) = ((MR_Box) (mdb__declarative_user__InitAtom_8));
#line 702 "declarative_user.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_40_40, 4) = ((MR_Box) (mdb__declarative_user__FinalAtom_9));
#line 702 "declarative_user.m"
    }
#line 702 "declarative_user.m"
    {
#line 702 "declarative_user.m"
      mdb__declarative_user__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 702 "declarative_user.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_user__V_37_37, 0) = ((MR_Box) (mdb__declarative_user__V_40_40));
#line 702 "declarative_user.m"
    }
#line 701 "declarative_user.m"
    {
#line 701 "declarative_user.m"
      mdb__browse__browse_browser_term_9_p_0(mdb__declarative_user__BrowserTerm_23, mdb__declarative_user__V_35_35, mdb__declarative_user__V_42_42, mdb__declarative_user__V_37_37, &mdb__declarative_user__MaybeTrackDirs_24, mdb__declarative_user__V_43_43, &mdb__declarative_user__Browser_25);
    }
#line 819 "declarative_user.m"
    if ((mdb__declarative_user__MaybeTrackDirs_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 819 "declarative_user.m"
      *mdb__declarative_user__MaybeTrack_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 819 "declarative_user.m"
    else
#line 820 "declarative_user.m"
      {
#line 820 "declarative_user.m"
        MR_Word mdb__declarative_user__HowTrack_70 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrackDirs_24, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 820 "declarative_user.m"
        MR_Word mdb__declarative_user__ShouldAssertInvalid_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrackDirs_24, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 820 "declarative_user.m"
        MR_Word mdb__declarative_user__Dirs_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrackDirs_24, (MR_Integer) 1)));
#line 820 "declarative_user.m"
        MR_Word mdb__declarative_user__TermPath_73;

#line 822 "declarative_user.m"
        {
#line 822 "declarative_user.m"
          mdb__declarative_user__convert_dirs_to_term_path_from_atom_3_p_0(mdb__declarative_user__FinalAtom_9, mdb__declarative_user__Dirs_72, &mdb__declarative_user__TermPath_73);
        }
#line 823 "declarative_user.m"
        {
#line 823 "declarative_user.m"
          MR_Word base;
#line 823 "declarative_user.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 823 "declarative_user.m"
          *mdb__declarative_user__MaybeTrack_10 = base;
#line 823 "declarative_user.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((mdb__declarative_user__HowTrack_70 | ((mdb__declarative_user__ShouldAssertInvalid_71 << (MR_Integer) 1)))));
#line 823 "declarative_user.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__TermPath_73));
#line 823 "declarative_user.m"
        }
#line 820 "declarative_user.m"
      }
#line 706 "declarative_user.m"
    mdb__declarative_user__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 0)));
#line 706 "declarative_user.m"
    mdb__declarative_user__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 1)));
#line 706 "declarative_user.m"
    mdb__declarative_user__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 2)));
#line 706 "declarative_user.m"
    mdb__declarative_user__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 3)));
#line 706 "declarative_user.m"
    mdb__declarative_user__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 4)));
#line 706 "declarative_user.m"
    mdb__declarative_user__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 5)));
#line 706 "declarative_user.m"
    {
#line 706 "declarative_user.m"
      MR_Word base;
#line 706 "declarative_user.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 706 "declarative_user.m"
      *mdb__declarative_user__STATE_VARIABLE_User_27 = base;
#line 706 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_user__V_57_57));
#line 706 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_user__V_58_58));
#line 706 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_user__Browser_25));
#line 706 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_user__V_60_60));
#line 706 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_user__V_61_61));
#line 706 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_user__V_62_62));
#line 706 "declarative_user.m"
    }
#line 692 "declarative_user.m"
  }
#line 688 "declarative_user.m"
}

#line 670 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__browse_xml_atom_argument_5_p_0(
#line 670 "declarative_user.m"
  MR_Word mdb__declarative_user__Atom_6,
#line 670 "declarative_user.m"
  MR_Integer mdb__declarative_user__ArgNum_7,
#line 670 "declarative_user.m"
  MR_Word mdb__declarative_user__User_8)
#line 670 "declarative_user.m"
{
#line 673 "declarative_user.m"
  {
#line 673 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 673 "declarative_user.m"
    MR_Word mdb__declarative_user__Args0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Atom_6, (MR_Integer) 1)));
#line 673 "declarative_user.m"
    MR_Word mdb__declarative_user__Args_12;
#line 673 "declarative_user.m"
    MR_Word mdb__declarative_user__V_21_21;
#line 674 "declarative_user.m"
    MR_Box mdb__declarative_user__V_10_10 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Atom_6, (MR_Integer) 0)));
#line 676 "declarative_user.m"
    MR_Word mdb__declarative_user__Arg_18;
#line 677 "declarative_user.m"
    MR_Word mdb__declarative_user__ArgInfo_13;
#line 677 "declarative_user.m"
    MR_Word mdb__declarative_user__MaybeArg_16;
#line 677 "declarative_user.m"
    MR_Word mdb__declarative_user__ArgRep_17;
#line 677 "declarative_user.m"
    MR_Box mdb__declarative_user__conv0_ArgInfo_13;
#line 678 "declarative_user.m"
    MR_Word mdb__declarative_user__V_14_14;
#line 678 "declarative_user.m"
    MR_Integer mdb__declarative_user__V_15_15;

#line 675 "declarative_user.m"
    {
#line 675 "declarative_user.m"
      mdb__declarative_user__V_21_21 = mdb__declarative_execution__chosen_head_vars_presentation_0_f_0();
    }
#line 675 "declarative_user.m"
    {
#line 675 "declarative_user.m"
      mdb__declarative_execution__maybe_filter_headvars_3_p_0(mdb__declarative_user__V_21_21, mdb__declarative_user__Args0_11, &mdb__declarative_user__Args_12);
    }
#line 677 "declarative_user.m"
    {
#line 677 "declarative_user.m"
      mdb__declarative_user__succeeded = mercury__list__index1_3_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_user__Args_12, mdb__declarative_user__ArgNum_7, &mdb__declarative_user__conv0_ArgInfo_13);
    }
#line 677 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 677 "declarative_user.m"
      {
#line 677 "declarative_user.m"
        mdb__declarative_user__ArgInfo_13 = ((MR_Word) mdb__declarative_user__conv0_ArgInfo_13);
#line 677 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 677 "declarative_user.m"
      }
#line 677 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 677 "declarative_user.m"
      {
#line 678 "declarative_user.m"
        mdb__declarative_user__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgInfo_13, (MR_Integer) 0)));
#line 678 "declarative_user.m"
        mdb__declarative_user__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgInfo_13, (MR_Integer) 1)));
#line 678 "declarative_user.m"
        mdb__declarative_user__MaybeArg_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgInfo_13, (MR_Integer) 2)));
#line 679 "declarative_user.m"
        mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__MaybeArg_16)) == (MR_mktag((MR_Integer) 1)));
#line 679 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 679 "declarative_user.m"
          {
#line 679 "declarative_user.m"
            mdb__declarative_user__ArgRep_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeArg_16, (MR_Integer) 0)));
#line 680 "declarative_user.m"
            {
#line 680 "declarative_user.m"
              mdb__term_rep__rep_to_univ_2_p_0(mdb__declarative_user__ArgRep_17, &mdb__declarative_user__Arg_18);
            }
#line 680 "declarative_user.m"
            mdb__declarative_user__succeeded = MR_TRUE;
#line 679 "declarative_user.m"
          }
#line 677 "declarative_user.m"
      }
#line 676 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 682 "declarative_user.m"
      {
#line 682 "declarative_user.m"
        MR_Word mdb__declarative_user__V_22_22;
#line 682 "declarative_user.m"
        MR_Word mdb__declarative_user__V_23_23;
#line 682 "declarative_user.m"
        MR_Word mdb__declarative_user__V_31_31;
#line 682 "declarative_user.m"
        MR_Word mdb__declarative_user__V_30_30;
#line 682 "declarative_user.m"
        MR_Word mdb__declarative_user__V_32_32;
#line 682 "declarative_user.m"
        MR_Word mdb__declarative_user__V_33_33;
#line 682 "declarative_user.m"
        MR_Word mdb__declarative_user__V_34_34;

#line 682 "declarative_user.m"
        {
#line 682 "declarative_user.m"
          mdb__declarative_user__V_22_22 = mdb__browser_term__univ_to_browser_term_1_f_0(mdb__declarative_user__Arg_18);
        }
#line 682 "declarative_user.m"
        mdb__declarative_user__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 0)));
#line 682 "declarative_user.m"
        mdb__declarative_user__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 1)));
#line 682 "declarative_user.m"
        mdb__declarative_user__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 2)));
#line 682 "declarative_user.m"
        mdb__declarative_user__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 3)));
#line 682 "declarative_user.m"
        mdb__declarative_user__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 4)));
#line 682 "declarative_user.m"
        mdb__declarative_user__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 5)));
#line 682 "declarative_user.m"
        {
#line 682 "declarative_user.m"
          mdb__browse__save_and_browse_browser_term_xml_6_p_0(mdb__declarative_user__V_22_22, mdb__declarative_user__V_23_23, mdb__declarative_user__V_23_23, mdb__declarative_user__V_31_31);
        }
#line 682 "declarative_user.m"
      }
#line 676 "declarative_user.m"
    else
#line 685 "declarative_user.m"
      {
#line 685 "declarative_user.m"
        MR_Word mdb__declarative_user__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 1)));
#line 685 "declarative_user.m"
        MR_Word mdb__declarative_user__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 0)));
#line 685 "declarative_user.m"
        MR_Word mdb__declarative_user__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 2)));
#line 685 "declarative_user.m"
        MR_Word mdb__declarative_user__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 3)));
#line 685 "declarative_user.m"
        MR_Word mdb__declarative_user__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 4)));
#line 685 "declarative_user.m"
        MR_Word mdb__declarative_user__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 5)));

#line 685 "declarative_user.m"
        {
#line 685 "declarative_user.m"
          mercury__io__write_string_4_p_0(mdb__declarative_user__V_27_27, (MR_String) "Invalid argument number\n");
        }
#line 685 "declarative_user.m"
      }
#line 673 "declarative_user.m"
  }
#line 670 "declarative_user.m"
}

#line 659 "declarative_user.m"
static MR_Box MR_CALL 
mdb__declarative_user__browse_atom_argument_8_p_0_1(
#line 659 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg,
#line 659 "declarative_user.m"
  MR_Box mdb__declarative_user__wrapper_arg_1)
#line 659 "declarative_user.m"
{
#line 659 "declarative_user.m"
  {
#line 659 "declarative_user.m"
    MR_Box mdb__declarative_user__wrapper_arg_2;
#line 659 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;
#line 659 "declarative_user.m"
    MR_Word mdb__declarative_user__conv1_Mode_10;

#line 659 "declarative_user.m"
    {
#line 659 "declarative_user.m"
      mdb__declarative_user__conv1_Mode_10 = mdb__declarative_user__get_subterm_mode_from_atoms_for_arg_4_f_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 5))), ((MR_Word) mdb__declarative_user__wrapper_arg_1));
    }
#line 659 "declarative_user.m"
    mdb__declarative_user__wrapper_arg_2 = ((MR_Box) (mdb__declarative_user__conv1_Mode_10));
#line 659 "declarative_user.m"
    return mdb__declarative_user__wrapper_arg_2;
#line 659 "declarative_user.m"
  }
#line 659 "declarative_user.m"
}

#line 644 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__browse_atom_argument_8_p_0(
#line 644 "declarative_user.m"
  MR_Word mdb__declarative_user__InitAtom_9,
#line 644 "declarative_user.m"
  MR_Word mdb__declarative_user__FinalAtom_10,
#line 644 "declarative_user.m"
  MR_Integer mdb__declarative_user__ArgNum_11,
#line 644 "declarative_user.m"
  MR_Word * mdb__declarative_user__MaybeTrack_12,
#line 644 "declarative_user.m"
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_26,
#line 644 "declarative_user.m"
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_27)
#line 644 "declarative_user.m"
{
#line 648 "declarative_user.m"
  {
#line 648 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 648 "declarative_user.m"
    MR_Word mdb__declarative_user__Args0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalAtom_10, (MR_Integer) 1)));
#line 648 "declarative_user.m"
    MR_Word mdb__declarative_user__Args_17;
#line 648 "declarative_user.m"
    MR_Word mdb__declarative_user__V_30_30;
#line 649 "declarative_user.m"
    MR_Box mdb__declarative_user__V_15_15 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalAtom_10, (MR_Integer) 0)));
#line 651 "declarative_user.m"
    MR_Word mdb__declarative_user__ArgRep_22;
#line 651 "declarative_user.m"
    MR_Word mdb__declarative_user__Arg_23;
#line 652 "declarative_user.m"
    MR_Word mdb__declarative_user__ArgInfo_18;
#line 652 "declarative_user.m"
    MR_Word mdb__declarative_user__MaybeArg_21;
#line 652 "declarative_user.m"
    MR_Box mdb__declarative_user__conv0_ArgInfo_18;
#line 653 "declarative_user.m"
    MR_Word mdb__declarative_user__V_19_19;
#line 653 "declarative_user.m"
    MR_Integer mdb__declarative_user__V_20_20;

#line 650 "declarative_user.m"
    {
#line 650 "declarative_user.m"
      mdb__declarative_user__V_30_30 = mdb__declarative_execution__chosen_head_vars_presentation_0_f_0();
    }
#line 650 "declarative_user.m"
    {
#line 650 "declarative_user.m"
      mdb__declarative_execution__maybe_filter_headvars_3_p_0(mdb__declarative_user__V_30_30, mdb__declarative_user__Args0_16, &mdb__declarative_user__Args_17);
    }
#line 652 "declarative_user.m"
    {
#line 652 "declarative_user.m"
      mdb__declarative_user__succeeded = mercury__list__index1_3_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_user__Args_17, mdb__declarative_user__ArgNum_11, &mdb__declarative_user__conv0_ArgInfo_18);
    }
#line 652 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 652 "declarative_user.m"
      {
#line 652 "declarative_user.m"
        mdb__declarative_user__ArgInfo_18 = ((MR_Word) mdb__declarative_user__conv0_ArgInfo_18);
#line 652 "declarative_user.m"
        mdb__declarative_user__succeeded = MR_TRUE;
#line 652 "declarative_user.m"
      }
#line 652 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 652 "declarative_user.m"
      {
#line 653 "declarative_user.m"
        mdb__declarative_user__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgInfo_18, (MR_Integer) 0)));
#line 653 "declarative_user.m"
        mdb__declarative_user__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgInfo_18, (MR_Integer) 1)));
#line 653 "declarative_user.m"
        mdb__declarative_user__MaybeArg_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgInfo_18, (MR_Integer) 2)));
#line 654 "declarative_user.m"
        mdb__declarative_user__succeeded = ((MR_tag((MR_Word) mdb__declarative_user__MaybeArg_21)) == (MR_mktag((MR_Integer) 1)));
#line 654 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 654 "declarative_user.m"
          {
#line 654 "declarative_user.m"
            mdb__declarative_user__ArgRep_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeArg_21, (MR_Integer) 0)));
#line 655 "declarative_user.m"
            {
#line 655 "declarative_user.m"
              mdb__term_rep__rep_to_univ_2_p_0(mdb__declarative_user__ArgRep_22, &mdb__declarative_user__Arg_23);
            }
#line 655 "declarative_user.m"
            mdb__declarative_user__succeeded = MR_TRUE;
#line 654 "declarative_user.m"
          }
#line 652 "declarative_user.m"
      }
#line 651 "declarative_user.m"
    if (mdb__declarative_user__succeeded)
#line 661 "declarative_user.m"
      {
#line 661 "declarative_user.m"
        MR_Word mdb__declarative_user__MaybeTrackDirs_24;
#line 661 "declarative_user.m"
        MR_Word mdb__declarative_user__Browser_25;
#line 661 "declarative_user.m"
        MR_Word mdb__declarative_user__V_31_31;
#line 661 "declarative_user.m"
        MR_Word mdb__declarative_user__V_32_32;
#line 661 "declarative_user.m"
        MR_Word mdb__declarative_user__V_34_34;
#line 661 "declarative_user.m"
        MR_Word mdb__declarative_user__V_37_37;
#line 661 "declarative_user.m"
        MR_Word mdb__declarative_user__V_42_42;
#line 661 "declarative_user.m"
        MR_Word mdb__declarative_user__V_43_43;
#line 657 "declarative_user.m"
        MR_Word mdb__declarative_user__V_44_44;
#line 657 "declarative_user.m"
        MR_Word mdb__declarative_user__V_45_45;
#line 657 "declarative_user.m"
        MR_Word mdb__declarative_user__V_46_46;
#line 664 "declarative_user.m"
        MR_Word mdb__declarative_user__V_57_57;
#line 664 "declarative_user.m"
        MR_Word mdb__declarative_user__V_58_58;
#line 664 "declarative_user.m"
        MR_Word mdb__declarative_user__V_60_60;
#line 664 "declarative_user.m"
        MR_Word mdb__declarative_user__V_61_61;
#line 664 "declarative_user.m"
        MR_Word mdb__declarative_user__V_62_62;
#line 664 "declarative_user.m"
        MR_Word mdb__declarative_user__V_59_59;

#line 657 "declarative_user.m"
        {
#line 657 "declarative_user.m"
          mdb__declarative_user__V_31_31 = mdb__browser_term__univ_to_browser_term_1_f_0(mdb__declarative_user__Arg_23);
        }
#line 657 "declarative_user.m"
        mdb__declarative_user__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 0)));
#line 657 "declarative_user.m"
        mdb__declarative_user__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 1)));
#line 657 "declarative_user.m"
        mdb__declarative_user__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 2)));
#line 657 "declarative_user.m"
        mdb__declarative_user__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 3)));
#line 657 "declarative_user.m"
        mdb__declarative_user__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 4)));
#line 657 "declarative_user.m"
        mdb__declarative_user__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 5)));
#line 659 "declarative_user.m"
        {
#line 659 "declarative_user.m"
          mdb__declarative_user__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 659 "declarative_user.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_user__V_37_37, 0) = ((MR_Box) (&mdb__declarative_user_scalar_common_4[0]));
#line 659 "declarative_user.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_user__V_37_37, 1) = ((MR_Box) (mdb__declarative_user__browse_atom_argument_8_p_0_1));
#line 659 "declarative_user.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_user__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 659 "declarative_user.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_user__V_37_37, 3) = ((MR_Box) (mdb__declarative_user__ArgNum_11));
#line 659 "declarative_user.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_user__V_37_37, 4) = ((MR_Box) (mdb__declarative_user__InitAtom_9));
#line 659 "declarative_user.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_user__V_37_37, 5) = ((MR_Box) (mdb__declarative_user__FinalAtom_10));
#line 659 "declarative_user.m"
        }
#line 659 "declarative_user.m"
        {
#line 659 "declarative_user.m"
          mdb__declarative_user__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 659 "declarative_user.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_user__V_34_34, 0) = ((MR_Box) (mdb__declarative_user__V_37_37));
#line 659 "declarative_user.m"
        }
#line 657 "declarative_user.m"
        {
#line 657 "declarative_user.m"
          mdb__browse__browse_browser_term_9_p_0(mdb__declarative_user__V_31_31, mdb__declarative_user__V_32_32, mdb__declarative_user__V_42_42, mdb__declarative_user__V_34_34, &mdb__declarative_user__MaybeTrackDirs_24, mdb__declarative_user__V_43_43, &mdb__declarative_user__Browser_25);
        }
#line 829 "declarative_user.m"
        if ((mdb__declarative_user__MaybeTrackDirs_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 829 "declarative_user.m"
          *mdb__declarative_user__MaybeTrack_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 829 "declarative_user.m"
        else
#line 830 "declarative_user.m"
          {
#line 830 "declarative_user.m"
            MR_Word mdb__declarative_user__HowTrack_75 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrackDirs_24, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 830 "declarative_user.m"
            MR_Word mdb__declarative_user__ShouldAssertInvalid_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrackDirs_24, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 830 "declarative_user.m"
            MR_Word mdb__declarative_user__Dirs_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrackDirs_24, (MR_Integer) 1)));
#line 830 "declarative_user.m"
            MR_Word mdb__declarative_user__TermPath_78;

#line 832 "declarative_user.m"
            {
#line 832 "declarative_user.m"
              mdb__browser_info__convert_dirs_to_term_path_3_p_0(mdb__declarative_user__ArgRep_22, mdb__declarative_user__Dirs_77, &mdb__declarative_user__TermPath_78);
            }
#line 833 "declarative_user.m"
            {
#line 833 "declarative_user.m"
              MR_Word base;
#line 833 "declarative_user.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 833 "declarative_user.m"
              *mdb__declarative_user__MaybeTrack_12 = base;
#line 833 "declarative_user.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((mdb__declarative_user__HowTrack_75 | ((mdb__declarative_user__ShouldAssertInvalid_76 << (MR_Integer) 1)))));
#line 833 "declarative_user.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__TermPath_78));
#line 833 "declarative_user.m"
            }
#line 830 "declarative_user.m"
          }
#line 664 "declarative_user.m"
        mdb__declarative_user__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 0)));
#line 664 "declarative_user.m"
        mdb__declarative_user__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 1)));
#line 664 "declarative_user.m"
        mdb__declarative_user__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 2)));
#line 664 "declarative_user.m"
        mdb__declarative_user__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 3)));
#line 664 "declarative_user.m"
        mdb__declarative_user__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 4)));
#line 664 "declarative_user.m"
        mdb__declarative_user__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 5)));
#line 664 "declarative_user.m"
        {
#line 664 "declarative_user.m"
          MR_Word base;
#line 664 "declarative_user.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 664 "declarative_user.m"
          *mdb__declarative_user__STATE_VARIABLE_User_27 = base;
#line 664 "declarative_user.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_user__V_57_57));
#line 664 "declarative_user.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_user__V_58_58));
#line 664 "declarative_user.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_user__Browser_25));
#line 664 "declarative_user.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_user__V_60_60));
#line 664 "declarative_user.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_user__V_61_61));
#line 664 "declarative_user.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_user__V_62_62));
#line 664 "declarative_user.m"
        }
#line 661 "declarative_user.m"
      }
#line 651 "declarative_user.m"
    else
#line 666 "declarative_user.m"
      {
#line 666 "declarative_user.m"
        MR_Word mdb__declarative_user__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 1)));
#line 666 "declarative_user.m"
        MR_Word mdb__declarative_user__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 0)));
#line 666 "declarative_user.m"
        MR_Word mdb__declarative_user__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 2)));
#line 666 "declarative_user.m"
        MR_Word mdb__declarative_user__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 3)));
#line 666 "declarative_user.m"
        MR_Word mdb__declarative_user__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 4)));
#line 666 "declarative_user.m"
        MR_Word mdb__declarative_user__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_26, (MR_Integer) 5)));

#line 666 "declarative_user.m"
        {
#line 666 "declarative_user.m"
          mercury__io__write_string_4_p_0(mdb__declarative_user__V_39_39, (MR_String) "Invalid argument number\n");
        }
#line 667 "declarative_user.m"
        *mdb__declarative_user__MaybeTrack_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 666 "declarative_user.m"
        *mdb__declarative_user__STATE_VARIABLE_User_27 = mdb__declarative_user__STATE_VARIABLE_User_0_26;
#line 666 "declarative_user.m"
      }
#line 648 "declarative_user.m"
  }
#line 644 "declarative_user.m"
}

#line 716 "declarative_user.m"
static MR_bool MR_CALL 
mdb__declarative_user__browse_xml_decl_bug_5_p_0_1(
#line 716 "declarative_user.m"
  MR_Box mdb__declarative_user__closure_arg)
#line 716 "declarative_user.m"
{
#line 716 "declarative_user.m"
  {
#line 716 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 716 "declarative_user.m"
    MR_Box mdb__declarative_user__closure = mdb__declarative_user__closure_arg;

#line 716 "declarative_user.m"
    {
#line 716 "declarative_user.m"
      mdb__declarative_user__succeeded = mdb__declarative_user__IntroducedFrom__pred__browse_xml_atom__716__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__closure, (MR_Integer) 4))));
    }
#line 716 "declarative_user.m"
    return mdb__declarative_user__succeeded;
#line 716 "declarative_user.m"
  }
#line 716 "declarative_user.m"
}

#line 631 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__browse_xml_decl_bug_5_p_0(
#line 631 "declarative_user.m"
  MR_Word mdb__declarative_user__Bug_6,
#line 631 "declarative_user.m"
  MR_Word mdb__declarative_user__MaybeArgNum_7,
#line 631 "declarative_user.m"
  MR_Word mdb__declarative_user__User_8)
#line 631 "declarative_user.m"
{
#line 634 "declarative_user.m"
  {
#line 634 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 634 "declarative_user.m"
    MR_Word mdb__declarative_user__FinalAtom_11;

#line 503 "declarative_user.m"
    if (((MR_tag((MR_Word) mdb__declarative_user__Bug_6)) == (MR_mktag((MR_Integer) 1))))
#line 503 "declarative_user.m"
      {
#line 503 "declarative_user.m"
        MR_Word mdb__declarative_user__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Bug_6, (MR_Integer) 0)));

#line 503 "declarative_user.m"
#line 503 "declarative_user.m"
        switch (MR_tag((MR_Word) mdb__declarative_user__V_35_35)) {
#line 503 "declarative_user.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 503 "declarative_user.m"
          case (MR_Integer) 0:
#line 503 "declarative_user.m"
            {
#line 503 "declarative_user.m"
              MR_Word mdb__declarative_user__FinalDeclAtom_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_35_35, (MR_Integer) 1)));
#line 503 "declarative_user.m"
              MR_Word mdb__declarative_user__InitDeclAtom_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_35_35, (MR_Integer) 0)));
#line 503 "declarative_user.m"
              MR_Word mdb__declarative_user__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_35_35, (MR_Integer) 2)));
#line 503 "declarative_user.m"
              MR_Integer mdb__declarative_user__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_35_35, (MR_Integer) 3)));
#line 503 "declarative_user.m"
              MR_Word mdb__declarative_user__V_34_34;

#line 503 "declarative_user.m"
              mdb__declarative_user__FinalAtom_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalDeclAtom_18, (MR_Integer) 0)));
#line 503 "declarative_user.m"
              mdb__declarative_user__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalDeclAtom_18, (MR_Integer) 1)));
#line 503 "declarative_user.m"
            }
#line 503 "declarative_user.m"
            break;
#line 503 "declarative_user.m"
          case (MR_Integer) 1:
#line 505 "declarative_user.m"
            {
#line 505 "declarative_user.m"
              MR_Word mdb__declarative_user__InitDeclAtom_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_35_35, (MR_Integer) 0)));
#line 505 "declarative_user.m"
              MR_Integer mdb__declarative_user__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_35_35, (MR_Integer) 1)));

#line 505 "declarative_user.m"
              mdb__declarative_user__FinalAtom_11 = (MR_Word) mdb__declarative_user__InitDeclAtom_22;
#line 505 "declarative_user.m"
            }
#line 503 "declarative_user.m"
            break;
#line 503 "declarative_user.m"
          case (MR_Integer) 2:
#line 507 "declarative_user.m"
            {
#line 507 "declarative_user.m"
              MR_Word mdb__declarative_user__InitDeclAtom_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__V_35_35, (MR_Integer) 0)));
#line 507 "declarative_user.m"
              MR_Word mdb__declarative_user__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__V_35_35, (MR_Integer) 1)));
#line 507 "declarative_user.m"
              MR_Integer mdb__declarative_user__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_user__V_35_35, (MR_Integer) 2)));

#line 507 "declarative_user.m"
              mdb__declarative_user__FinalAtom_11 = (MR_Word) mdb__declarative_user__InitDeclAtom_25;
#line 507 "declarative_user.m"
            }
#line 503 "declarative_user.m"
            break;
#line 503 "declarative_user.m"
        }
#line 503 "declarative_user.m"
      }
#line 503 "declarative_user.m"
    else
#line 509 "declarative_user.m"
      {
#line 509 "declarative_user.m"
        MR_Word mdb__declarative_user__InitDeclAtom_31;
#line 509 "declarative_user.m"
        MR_Word mdb__declarative_user__V_33_33 = (MR_Word) MR_body(((MR_Word) mdb__declarative_user__Bug_6), (MR_Integer) 0);
#line 509 "declarative_user.m"
        MR_Word mdb__declarative_user__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_33_33, (MR_Integer) 0)));
#line 509 "declarative_user.m"
        MR_Integer mdb__declarative_user__V_32_32;

#line 509 "declarative_user.m"
        mdb__declarative_user__InitDeclAtom_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_33_33, (MR_Integer) 2)));
#line 509 "declarative_user.m"
        mdb__declarative_user__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_33_33, (MR_Integer) 3)));
#line 509 "declarative_user.m"
        mdb__declarative_user__FinalAtom_11 = (MR_Word) mdb__declarative_user__InitDeclAtom_31;
#line 509 "declarative_user.m"
      }
#line 639 "declarative_user.m"
    if ((mdb__declarative_user__MaybeArgNum_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 711 "declarative_user.m"
      {
#line 711 "declarative_user.m"
        MR_Box mdb__declarative_user__ProcLayout_41 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalAtom_11, (MR_Integer) 0)));
#line 711 "declarative_user.m"
        MR_Word mdb__declarative_user__Args_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalAtom_11, (MR_Integer) 1)));
#line 711 "declarative_user.m"
        MR_Word mdb__declarative_user__ProcLabel_43;
#line 711 "declarative_user.m"
        MR_Word mdb__declarative_user__ArgValues_44;
#line 711 "declarative_user.m"
        MR_Word mdb__declarative_user__Module_45;
#line 711 "declarative_user.m"
        MR_String mdb__declarative_user__Name_46;
#line 711 "declarative_user.m"
        MR_Word mdb__declarative_user__PredOrFunc_48;
#line 711 "declarative_user.m"
        MR_Word mdb__declarative_user__IsFunction_49;
#line 711 "declarative_user.m"
        MR_String mdb__declarative_user__ModuleStr_50;
#line 711 "declarative_user.m"
        MR_Word mdb__declarative_user__BrowserTerm_51;
#line 711 "declarative_user.m"
        MR_Word mdb__declarative_user__V_52_52;
#line 711 "declarative_user.m"
        MR_String mdb__declarative_user__V_54_54;
#line 711 "declarative_user.m"
        MR_String mdb__declarative_user__V_55_55;
#line 711 "declarative_user.m"
        MR_Word mdb__declarative_user__V_57_57;
#line 711 "declarative_user.m"
        MR_Word mdb__declarative_user__V_62_62;
#line 715 "declarative_user.m"
        MR_Integer mdb__declarative_user__V_47_47;
#line 720 "declarative_user.m"
        MR_Word mdb__declarative_user__V_61_61;
#line 720 "declarative_user.m"
        MR_Word mdb__declarative_user__V_63_63;
#line 720 "declarative_user.m"
        MR_Word mdb__declarative_user__V_64_64;
#line 720 "declarative_user.m"
        MR_Word mdb__declarative_user__V_65_65;

#line 713 "declarative_user.m"
        {
#line 713 "declarative_user.m"
          mdb__declarative_user__ProcLabel_43 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_user__ProcLayout_41);
        }
#line 714 "declarative_user.m"
        {
#line 714 "declarative_user.m"
          mdb__declarative_user__get_user_arg_values_2_p_0(mdb__declarative_user__Args_42, &mdb__declarative_user__ArgValues_44);
        }
#line 715 "declarative_user.m"
        {
#line 715 "declarative_user.m"
          mdb__declarative_execution__get_pred_attributes_5_p_0(mdb__declarative_user__ProcLabel_43, &mdb__declarative_user__Module_45, &mdb__declarative_user__Name_46, &mdb__declarative_user__V_47_47, &mdb__declarative_user__PredOrFunc_48);
        }
#line 716 "declarative_user.m"
        {
#line 716 "declarative_user.m"
          mdb__declarative_user__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 716 "declarative_user.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_user__V_52_52, 0) = ((MR_Box) (&mdb__declarative_user_scalar_common_3[0]));
#line 716 "declarative_user.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_user__V_52_52, 1) = ((MR_Box) (mdb__declarative_user__browse_xml_decl_bug_5_p_0_1));
#line 716 "declarative_user.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_user__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 716 "declarative_user.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_user__V_52_52, 3) = ((MR_Box) (mdb__declarative_user__PredOrFunc_48));
#line 716 "declarative_user.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_user__V_52_52, 4) = ((MR_Box) ((MR_Integer) 1));
#line 716 "declarative_user.m"
        }
#line 716 "declarative_user.m"
        {
#line 716 "declarative_user.m"
          mdb__declarative_user__IsFunction_49 = mercury__bool__pred_to_bool_1_f_0(mdb__declarative_user__V_52_52);
        }
#line 717 "declarative_user.m"
        {
#line 717 "declarative_user.m"
          mdb__declarative_user__ModuleStr_50 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdb__declarative_user__Module_45);
        }
#line 718 "declarative_user.m"
        {
#line 718 "declarative_user.m"
          mdb__declarative_user__V_55_55 = mercury__string__f_43_43_2_f_0((MR_String) ".", mdb__declarative_user__Name_46);
        }
#line 718 "declarative_user.m"
        {
#line 718 "declarative_user.m"
          mdb__declarative_user__V_54_54 = mercury__string__f_43_43_2_f_0(mdb__declarative_user__ModuleStr_50, mdb__declarative_user__V_55_55);
        }
#line 718 "declarative_user.m"
        {
#line 718 "declarative_user.m"
          mdb__declarative_user__BrowserTerm_51 = mdb__browser_term__synthetic_term_to_browser_term_3_f_0(mdb__declarative_user__V_54_54, mdb__declarative_user__ArgValues_44, mdb__declarative_user__IsFunction_49);
        }
#line 720 "declarative_user.m"
        mdb__declarative_user__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 0)));
#line 720 "declarative_user.m"
        mdb__declarative_user__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 1)));
#line 720 "declarative_user.m"
        mdb__declarative_user__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 2)));
#line 720 "declarative_user.m"
        mdb__declarative_user__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 3)));
#line 720 "declarative_user.m"
        mdb__declarative_user__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 4)));
#line 720 "declarative_user.m"
        mdb__declarative_user__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_8, (MR_Integer) 5)));
#line 720 "declarative_user.m"
        {
#line 720 "declarative_user.m"
          mdb__browse__save_and_browse_browser_term_xml_6_p_0(mdb__declarative_user__BrowserTerm_51, mdb__declarative_user__V_57_57, mdb__declarative_user__V_57_57, mdb__declarative_user__V_62_62);
        }
#line 711 "declarative_user.m"
      }
#line 639 "declarative_user.m"
    else
#line 637 "declarative_user.m"
      {
#line 637 "declarative_user.m"
        MR_Integer mdb__declarative_user__ArgNum_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeArgNum_7, (MR_Integer) 0)));

#line 638 "declarative_user.m"
        {
#line 638 "declarative_user.m"
          mdb__declarative_user__browse_xml_atom_argument_5_p_0(mdb__declarative_user__FinalAtom_11, mdb__declarative_user__ArgNum_12, mdb__declarative_user__User_8);
        }
#line 637 "declarative_user.m"
      }
#line 634 "declarative_user.m"
  }
#line 631 "declarative_user.m"
}

#line 618 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__browse_decl_bug_6_p_0(
#line 618 "declarative_user.m"
  MR_Word mdb__declarative_user__Bug_7,
#line 618 "declarative_user.m"
  MR_Word mdb__declarative_user__MaybeArgNum_8,
#line 618 "declarative_user.m"
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_16,
#line 618 "declarative_user.m"
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_17)
#line 618 "declarative_user.m"
{
#line 621 "declarative_user.m"
  {
#line 621 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 621 "declarative_user.m"
    MR_Word mdb__declarative_user__InitAtom_11;
#line 621 "declarative_user.m"
    MR_Word mdb__declarative_user__FinalAtom_12;

#line 503 "declarative_user.m"
    if (((MR_tag((MR_Word) mdb__declarative_user__Bug_7)) == (MR_mktag((MR_Integer) 1))))
#line 503 "declarative_user.m"
      {
#line 503 "declarative_user.m"
        MR_Word mdb__declarative_user__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Bug_7, (MR_Integer) 0)));

#line 503 "declarative_user.m"
#line 503 "declarative_user.m"
        switch (MR_tag((MR_Word) mdb__declarative_user__V_42_42)) {
#line 503 "declarative_user.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 503 "declarative_user.m"
          case (MR_Integer) 0:
#line 503 "declarative_user.m"
            {
#line 503 "declarative_user.m"
              MR_Word mdb__declarative_user__InitDeclAtom_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_42_42, (MR_Integer) 0)));
#line 503 "declarative_user.m"
              MR_Word mdb__declarative_user__FinalDeclAtom_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_42_42, (MR_Integer) 1)));
#line 503 "declarative_user.m"
              MR_Word mdb__declarative_user__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_42_42, (MR_Integer) 2)));
#line 503 "declarative_user.m"
              MR_Integer mdb__declarative_user__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_42_42, (MR_Integer) 3)));
#line 503 "declarative_user.m"
              MR_Word mdb__declarative_user__V_41_41;

#line 503 "declarative_user.m"
              mdb__declarative_user__InitAtom_11 = (MR_Word) mdb__declarative_user__InitDeclAtom_24;
#line 503 "declarative_user.m"
              mdb__declarative_user__FinalAtom_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalDeclAtom_25, (MR_Integer) 0)));
#line 503 "declarative_user.m"
              mdb__declarative_user__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalDeclAtom_25, (MR_Integer) 1)));
#line 503 "declarative_user.m"
            }
#line 503 "declarative_user.m"
            break;
#line 503 "declarative_user.m"
          case (MR_Integer) 1:
#line 505 "declarative_user.m"
            {
#line 505 "declarative_user.m"
              MR_Word mdb__declarative_user__InitDeclAtom_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_42_42, (MR_Integer) 0)));
#line 505 "declarative_user.m"
              MR_Integer mdb__declarative_user__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_42_42, (MR_Integer) 1)));

#line 505 "declarative_user.m"
              mdb__declarative_user__InitAtom_11 = (MR_Word) mdb__declarative_user__InitDeclAtom_29;
#line 505 "declarative_user.m"
              mdb__declarative_user__FinalAtom_12 = mdb__declarative_user__InitAtom_11;
#line 505 "declarative_user.m"
            }
#line 503 "declarative_user.m"
            break;
#line 503 "declarative_user.m"
          case (MR_Integer) 2:
#line 507 "declarative_user.m"
            {
#line 507 "declarative_user.m"
              MR_Word mdb__declarative_user__InitDeclAtom_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__V_42_42, (MR_Integer) 0)));
#line 507 "declarative_user.m"
              MR_Word mdb__declarative_user__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__V_42_42, (MR_Integer) 1)));
#line 507 "declarative_user.m"
              MR_Integer mdb__declarative_user__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_user__V_42_42, (MR_Integer) 2)));

#line 507 "declarative_user.m"
              mdb__declarative_user__InitAtom_11 = (MR_Word) mdb__declarative_user__InitDeclAtom_32;
#line 507 "declarative_user.m"
              mdb__declarative_user__FinalAtom_12 = mdb__declarative_user__InitAtom_11;
#line 507 "declarative_user.m"
            }
#line 503 "declarative_user.m"
            break;
#line 503 "declarative_user.m"
        }
#line 503 "declarative_user.m"
      }
#line 503 "declarative_user.m"
    else
#line 509 "declarative_user.m"
      {
#line 509 "declarative_user.m"
        MR_Word mdb__declarative_user__InitDeclAtom_38;
#line 509 "declarative_user.m"
        MR_Word mdb__declarative_user__V_40_40 = (MR_Word) MR_body(((MR_Word) mdb__declarative_user__Bug_7), (MR_Integer) 0);
#line 509 "declarative_user.m"
        MR_Word mdb__declarative_user__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_40_40, (MR_Integer) 0)));
#line 509 "declarative_user.m"
        MR_Integer mdb__declarative_user__V_39_39;

#line 509 "declarative_user.m"
        mdb__declarative_user__InitDeclAtom_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_40_40, (MR_Integer) 2)));
#line 509 "declarative_user.m"
        mdb__declarative_user__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_40_40, (MR_Integer) 3)));
#line 509 "declarative_user.m"
        mdb__declarative_user__InitAtom_11 = (MR_Word) mdb__declarative_user__InitDeclAtom_38;
#line 509 "declarative_user.m"
        mdb__declarative_user__FinalAtom_12 = mdb__declarative_user__InitAtom_11;
#line 509 "declarative_user.m"
      }
#line 626 "declarative_user.m"
    if ((mdb__declarative_user__MaybeArgNum_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 628 "declarative_user.m"
      {
#line 628 "declarative_user.m"
        MR_Word mdb__declarative_user__V_15_15;

#line 628 "declarative_user.m"
        {
#line 628 "declarative_user.m"
          mdb__declarative_user__browse_atom_7_p_0(mdb__declarative_user__InitAtom_11, mdb__declarative_user__FinalAtom_12, &mdb__declarative_user__V_15_15, mdb__declarative_user__STATE_VARIABLE_User_0_16, mdb__declarative_user__STATE_VARIABLE_User_17);
        }
#line 628 "declarative_user.m"
      }
#line 626 "declarative_user.m"
    else
#line 624 "declarative_user.m"
      {
#line 624 "declarative_user.m"
        MR_Integer mdb__declarative_user__ArgNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeArgNum_8, (MR_Integer) 0)));
#line 625 "declarative_user.m"
        MR_Word mdb__declarative_user__V_14_14;

#line 625 "declarative_user.m"
        {
#line 625 "declarative_user.m"
          mdb__declarative_user__browse_atom_argument_8_p_0(mdb__declarative_user__InitAtom_11, mdb__declarative_user__FinalAtom_12, mdb__declarative_user__ArgNum_13, &mdb__declarative_user__V_14_14, mdb__declarative_user__STATE_VARIABLE_User_0_16, mdb__declarative_user__STATE_VARIABLE_User_17);
        }
#line 624 "declarative_user.m"
      }
#line 621 "declarative_user.m"
  }
#line 618 "declarative_user.m"
}

#line 601 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__browse_io_action_6_p_0(
#line 601 "declarative_user.m"
  MR_Word mdb__declarative_user__IoAction_7,
#line 601 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2,
#line 601 "declarative_user.m"
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_17,
#line 601 "declarative_user.m"
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_18)
#line 601 "declarative_user.m"
{
#line 604 "declarative_user.m"
  {
#line 604 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 604 "declarative_user.m"
    MR_Word mdb__declarative_user__Term_10;
#line 604 "declarative_user.m"
    MR_Word mdb__declarative_user__MaybeTrackDirs_11;
#line 604 "declarative_user.m"
    MR_Word mdb__declarative_user__Browser_12;
#line 604 "declarative_user.m"
    MR_Word mdb__declarative_user__V_21_21;
#line 604 "declarative_user.m"
    MR_Word mdb__declarative_user__STATE_VARIABLE_User_29_29;
#line 604 "declarative_user.m"
    MR_Word mdb__declarative_user__V_32_32;
#line 604 "declarative_user.m"
    MR_Word mdb__declarative_user__V_33_33;
#line 606 "declarative_user.m"
    MR_Word mdb__declarative_user__V_34_34;
#line 606 "declarative_user.m"
    MR_Word mdb__declarative_user__V_35_35;
#line 606 "declarative_user.m"
    MR_Word mdb__declarative_user__V_36_36;
#line 616 "declarative_user.m"
    MR_Word mdb__declarative_user__V_52_52;
#line 616 "declarative_user.m"
    MR_Word mdb__declarative_user__V_53_53;
#line 616 "declarative_user.m"
    MR_Word mdb__declarative_user__V_55_55;
#line 616 "declarative_user.m"
    MR_Word mdb__declarative_user__V_56_56;
#line 616 "declarative_user.m"
    MR_Word mdb__declarative_user__V_57_57;
#line 616 "declarative_user.m"
    MR_Word mdb__declarative_user__V_54_54;

#line 604 "declarative_user.m"
    *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 605 "declarative_user.m"
    {
#line 605 "declarative_user.m"
      mdb__declarative_user__Term_10 = mdb__io_action__io_action_to_browser_term_1_f_0(mdb__declarative_user__IoAction_7);
    }
#line 606 "declarative_user.m"
    mdb__declarative_user__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 0)));
#line 606 "declarative_user.m"
    mdb__declarative_user__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 1)));
#line 606 "declarative_user.m"
    mdb__declarative_user__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 2)));
#line 606 "declarative_user.m"
    mdb__declarative_user__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 3)));
#line 606 "declarative_user.m"
    mdb__declarative_user__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 4)));
#line 606 "declarative_user.m"
    mdb__declarative_user__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 5)));
#line 606 "declarative_user.m"
    {
#line 606 "declarative_user.m"
      mdb__browse__browse_browser_term_9_p_0(mdb__declarative_user__Term_10, mdb__declarative_user__V_21_21, mdb__declarative_user__V_32_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__declarative_user__MaybeTrackDirs_11, mdb__declarative_user__V_33_33, &mdb__declarative_user__Browser_12);
    }
#line 613 "declarative_user.m"
    if ((mdb__declarative_user__MaybeTrackDirs_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 614 "declarative_user.m"
      mdb__declarative_user__STATE_VARIABLE_User_29_29 = mdb__declarative_user__STATE_VARIABLE_User_0_17;
#line 613 "declarative_user.m"
    else
#line 609 "declarative_user.m"
      {
#line 609 "declarative_user.m"
        MR_Word mdb__declarative_user__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 1)));
#line 610 "declarative_user.m"
        MR_Word mdb__declarative_user__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 0)));
#line 610 "declarative_user.m"
        MR_Word mdb__declarative_user__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 2)));
#line 610 "declarative_user.m"
        MR_Word mdb__declarative_user__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 3)));
#line 610 "declarative_user.m"
        MR_Word mdb__declarative_user__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 4)));
#line 610 "declarative_user.m"
        MR_Word mdb__declarative_user__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_17, (MR_Integer) 5)));
#line 612 "declarative_user.m"
        MR_Word mdb__declarative_user__V_16_16;

#line 610 "declarative_user.m"
        {
#line 610 "declarative_user.m"
          mercury__io__write_string_4_p_0(mdb__declarative_user__V_26_26, (MR_String) "Sorry, tracking of I/O actions is not yet supported.\n");
        }
#line 612 "declarative_user.m"
        {
#line 612 "declarative_user.m"
          mdb__declarative_user__browse_io_action_6_p_0(mdb__declarative_user__IoAction_7, &mdb__declarative_user__V_16_16, mdb__declarative_user__STATE_VARIABLE_User_0_17, &mdb__declarative_user__STATE_VARIABLE_User_29_29);
        }
#line 609 "declarative_user.m"
      }
#line 616 "declarative_user.m"
    mdb__declarative_user__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_29_29, (MR_Integer) 0)));
#line 616 "declarative_user.m"
    mdb__declarative_user__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_29_29, (MR_Integer) 1)));
#line 616 "declarative_user.m"
    mdb__declarative_user__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_29_29, (MR_Integer) 2)));
#line 616 "declarative_user.m"
    mdb__declarative_user__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_29_29, (MR_Integer) 3)));
#line 616 "declarative_user.m"
    mdb__declarative_user__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_29_29, (MR_Integer) 4)));
#line 616 "declarative_user.m"
    mdb__declarative_user__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_29_29, (MR_Integer) 5)));
#line 616 "declarative_user.m"
    {
#line 616 "declarative_user.m"
      MR_Word base;
#line 616 "declarative_user.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 616 "declarative_user.m"
      *mdb__declarative_user__STATE_VARIABLE_User_18 = base;
#line 616 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_user__V_52_52));
#line 616 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_user__V_53_53));
#line 616 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_user__Browser_12));
#line 616 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_user__V_55_55));
#line 616 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_user__V_56_56));
#line 616 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_user__V_57_57));
#line 616 "declarative_user.m"
    }
#line 604 "declarative_user.m"
  }
#line 601 "declarative_user.m"
}

#line 565 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__print_chosen_io_actions_6_p_0(
#line 565 "declarative_user.m"
  MR_Word mdb__declarative_user__MaybeIoActions_7,
#line 565 "declarative_user.m"
  MR_Integer mdb__declarative_user__From_8,
#line 565 "declarative_user.m"
  MR_Integer mdb__declarative_user__To_9,
#line 565 "declarative_user.m"
  MR_Word mdb__declarative_user__User0_10)
#line 565 "declarative_user.m"
{
#line 568 "declarative_user.m"
  while (MR_TRUE)
#line 568 "declarative_user.m"
    {
#line 568 "declarative_user.m"
      /* tailcall optimized into a loop */
#line 568 "declarative_user.m"
      {
#line 568 "declarative_user.m"
        MR_bool mdb__declarative_user__succeeded;
#line 568 "declarative_user.m"
        MR_Word mdb__declarative_user__OK_12;
#line 571 "declarative_user.m"
        MR_Integer mdb__declarative_user__V_16_16;
#line 571 "declarative_user.m"
        MR_Integer mdb__declarative_user__V_17_17;

#line 584 "declarative_user.m"
        if ((mdb__declarative_user__MaybeIoActions_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 596 "declarative_user.m"
          {
#line 597 "declarative_user.m"
            {
#line 597 "declarative_user.m"
              mercury__io__write_string_3_p_0((MR_String) "No such IO action.\n");
            }
#line 598 "declarative_user.m"
            mdb__declarative_user__OK_12 = (MR_Integer) 0;
#line 596 "declarative_user.m"
          }
#line 584 "declarative_user.m"
        else
#line 584 "declarative_user.m"
          {
#line 584 "declarative_user.m"
            MR_Word mdb__declarative_user__IoActions_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeIoActions_7, (MR_Integer) 0)));
#line 584 "declarative_user.m"
            MR_Word mdb__declarative_user__MaybeIoAction_29;

#line 585 "declarative_user.m"
            {
#line 585 "declarative_user.m"
              mdb__declarative_user__find_tabled_io_action_5_p_0(mdb__declarative_user__IoActions_28, mdb__declarative_user__From_8, &mdb__declarative_user__MaybeIoAction_29);
            }
#line 590 "declarative_user.m"
            if ((mdb__declarative_user__MaybeIoAction_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 591 "declarative_user.m"
              {
#line 592 "declarative_user.m"
                {
#line 592 "declarative_user.m"
                  mercury__io__write_string_3_p_0((MR_String) "No such IO action.\n");
                }
#line 593 "declarative_user.m"
                mdb__declarative_user__OK_12 = (MR_Integer) 0;
#line 591 "declarative_user.m"
              }
#line 590 "declarative_user.m"
            else
#line 587 "declarative_user.m"
              {
#line 587 "declarative_user.m"
                MR_Word mdb__declarative_user__IoAction_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeIoAction_29, (MR_Integer) 0)));
#line 587 "declarative_user.m"
                MR_Word mdb__declarative_user__Term_45;
#line 587 "declarative_user.m"
                MR_Word mdb__declarative_user__V_48_48;
#line 587 "declarative_user.m"
                MR_Word mdb__declarative_user__V_53_53;
#line 1340 "declarative_user.m"
                MR_Word mdb__declarative_user__V_52_52;
#line 1340 "declarative_user.m"
                MR_Word mdb__declarative_user__V_54_54;
#line 1340 "declarative_user.m"
                MR_Word mdb__declarative_user__V_55_55;
#line 1340 "declarative_user.m"
                MR_Word mdb__declarative_user__V_56_56;

#line 1339 "declarative_user.m"
                {
#line 1339 "declarative_user.m"
                  mdb__declarative_user__Term_45 = mdb__io_action__io_action_to_browser_term_1_f_0(mdb__declarative_user__IoAction_43);
                }
#line 1340 "declarative_user.m"
                mdb__declarative_user__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User0_10, (MR_Integer) 0)));
#line 1340 "declarative_user.m"
                mdb__declarative_user__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User0_10, (MR_Integer) 1)));
#line 1340 "declarative_user.m"
                mdb__declarative_user__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User0_10, (MR_Integer) 2)));
#line 1340 "declarative_user.m"
                mdb__declarative_user__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User0_10, (MR_Integer) 3)));
#line 1340 "declarative_user.m"
                mdb__declarative_user__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User0_10, (MR_Integer) 4)));
#line 1340 "declarative_user.m"
                mdb__declarative_user__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User0_10, (MR_Integer) 5)));
#line 1340 "declarative_user.m"
                {
#line 1340 "declarative_user.m"
                  mdb__browse__print_browser_term_6_p_0(mdb__declarative_user__Term_45, mdb__declarative_user__V_48_48, (MR_Integer) 2, mdb__declarative_user__V_53_53);
                }
#line 589 "declarative_user.m"
                mdb__declarative_user__OK_12 = (MR_Integer) 1;
#line 587 "declarative_user.m"
              }
#line 584 "declarative_user.m"
          }
#line 571 "declarative_user.m"
        mdb__declarative_user__succeeded = (mdb__declarative_user__OK_12 == (MR_Integer) 1);
#line 571 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 571 "declarative_user.m"
          {
#line 572 "declarative_user.m"
            mdb__declarative_user__V_17_17 = (MR_Integer) 1;
#line 572 "declarative_user.m"
            mdb__declarative_user__V_16_16 = (mdb__declarative_user__From_8 + mdb__declarative_user__V_17_17);
#line 572 "declarative_user.m"
            mdb__declarative_user__succeeded = (mdb__declarative_user__V_16_16 <= mdb__declarative_user__To_9);
#line 571 "declarative_user.m"
          }
#line 570 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 574 "declarative_user.m"
          {
#line 574 "declarative_user.m"
            MR_Integer mdb__declarative_user__V_18_18 = (mdb__declarative_user__From_8 + (MR_Integer) 1);

#line 574 "declarative_user.m"
            /* direct tailcall eliminated */
#line 574 "declarative_user.m"
            {
#line 574 "declarative_user.m"
              MR_Integer mdb__declarative_user__From__tmp_copy_8 = mdb__declarative_user__V_18_18;

#line 574 "declarative_user.m"
              mdb__declarative_user__From_8 = mdb__declarative_user__From__tmp_copy_8;
#line 574 "declarative_user.m"
            }
#line 574 "declarative_user.m"
            continue;
#line 574 "declarative_user.m"
          }
#line 570 "declarative_user.m"
        else
#line 570 "declarative_user.m"
          {
#line 570 "declarative_user.m"
          }
#line 568 "declarative_user.m"
      }
#line 568 "declarative_user.m"
      break;
#line 568 "declarative_user.m"
    }
#line 565 "declarative_user.m"
}

#line 541 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__find_tabled_io_action_5_p_0(
#line 541 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 541 "declarative_user.m"
  MR_Integer mdb__declarative_user__TabledActionNum_8,
#line 541 "declarative_user.m"
  MR_Word * mdb__declarative_user__MaybeIoAction_9)
#line 541 "declarative_user.m"
{
#line 545 "declarative_user.m"
  while (MR_TRUE)
#line 545 "declarative_user.m"
    {
#line 545 "declarative_user.m"
      /* tailcall optimized into a loop */
#line 545 "declarative_user.m"
      {
#line 545 "declarative_user.m"
        MR_bool mdb__declarative_user__succeeded;
#line 545 "declarative_user.m"
        MR_Integer mdb__declarative_user__Cur_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));
#line 545 "declarative_user.m"
        MR_Integer mdb__declarative_user__End_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 1)));

#line 546 "declarative_user.m"
        mdb__declarative_user__succeeded = (mdb__declarative_user__Cur_6 == mdb__declarative_user__End_7);
#line 546 "declarative_user.m"
        if (mdb__declarative_user__succeeded)
#line 547 "declarative_user.m"
          *mdb__declarative_user__MaybeIoAction_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 546 "declarative_user.m"
        else
#line 549 "declarative_user.m"
          {
#line 549 "declarative_user.m"
            MR_Word mdb__declarative_user__MaybeTabledIoAction_11;

#line 549 "declarative_user.m"
            {
#line 549 "declarative_user.m"
              mdb__io_action__get_maybe_io_action_4_p_0(mdb__declarative_user__Cur_6, &mdb__declarative_user__MaybeTabledIoAction_11);
            }
#line 558 "declarative_user.m"
            if ((mdb__declarative_user__MaybeTabledIoAction_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 559 "declarative_user.m"
              {
#line 559 "declarative_user.m"
                MR_Word mdb__declarative_user__V_16_16;
#line 559 "declarative_user.m"
                MR_Integer mdb__declarative_user__V_18_18 = (mdb__declarative_user__Cur_6 + (MR_Integer) 1);

#line 560 "declarative_user.m"
                {
#line 560 "declarative_user.m"
                  mdb__declarative_user__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 560 "declarative_user.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_user__V_16_16, 0) = ((MR_Box) (mdb__declarative_user__V_18_18));
#line 560 "declarative_user.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_user__V_16_16, 1) = ((MR_Box) (mdb__declarative_user__End_7));
#line 560 "declarative_user.m"
                }
#line 560 "declarative_user.m"
                /* direct tailcall eliminated */
#line 560 "declarative_user.m"
                {
#line 560 "declarative_user.m"
                  MR_Word mdb__declarative_user__HeadVar__1__tmp_copy_1 = mdb__declarative_user__V_16_16;

#line 560 "declarative_user.m"
                  mdb__declarative_user__HeadVar__1_1 = mdb__declarative_user__HeadVar__1__tmp_copy_1;
#line 560 "declarative_user.m"
                }
#line 560 "declarative_user.m"
                continue;
#line 559 "declarative_user.m"
              }
#line 558 "declarative_user.m"
            else
#line 551 "declarative_user.m"
              {
#line 551 "declarative_user.m"
                MR_Word mdb__declarative_user__IoAction_12 = (MR_Word) MR_body(((MR_Word) mdb__declarative_user__MaybeTabledIoAction_11), (MR_Integer) 1);

#line 552 "declarative_user.m"
                mdb__declarative_user__succeeded = (mdb__declarative_user__TabledActionNum_8 == (MR_Integer) 1);
#line 552 "declarative_user.m"
                if (mdb__declarative_user__succeeded)
#line 553 "declarative_user.m"
                  {
#line 553 "declarative_user.m"
                    MR_Word base;
#line 553 "declarative_user.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 553 "declarative_user.m"
                    *mdb__declarative_user__MaybeIoAction_9 = base;
#line 553 "declarative_user.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__IoAction_12));
#line 553 "declarative_user.m"
                  }
#line 552 "declarative_user.m"
                else
#line 555 "declarative_user.m"
                  {
#line 555 "declarative_user.m"
                    MR_Word mdb__declarative_user__V_20_20;
#line 555 "declarative_user.m"
                    MR_Integer mdb__declarative_user__V_21_21;
#line 555 "declarative_user.m"
                    MR_Integer mdb__declarative_user__V_23_23 = (mdb__declarative_user__Cur_6 + (MR_Integer) 1);

#line 555 "declarative_user.m"
                    {
#line 555 "declarative_user.m"
                      mdb__declarative_user__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 555 "declarative_user.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_20_20, 0) = ((MR_Box) (mdb__declarative_user__V_23_23));
#line 555 "declarative_user.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_user__V_20_20, 1) = ((MR_Box) (mdb__declarative_user__End_7));
#line 555 "declarative_user.m"
                    }
#line 556 "declarative_user.m"
                    mdb__declarative_user__V_21_21 = (mdb__declarative_user__TabledActionNum_8 - (MR_Integer) 1);
#line 555 "declarative_user.m"
                    /* direct tailcall eliminated */
#line 555 "declarative_user.m"
                    {
#line 555 "declarative_user.m"
                      MR_Word mdb__declarative_user__HeadVar__1__tmp_copy_1 = mdb__declarative_user__V_20_20;
#line 555 "declarative_user.m"
                      MR_Integer mdb__declarative_user__TabledActionNum__tmp_copy_8 = mdb__declarative_user__V_21_21;

#line 555 "declarative_user.m"
                      mdb__declarative_user__TabledActionNum_8 = mdb__declarative_user__TabledActionNum__tmp_copy_8;
#line 555 "declarative_user.m"
                      mdb__declarative_user__HeadVar__1_1 = mdb__declarative_user__HeadVar__1__tmp_copy_1;
#line 555 "declarative_user.m"
                    }
#line 555 "declarative_user.m"
                    continue;
#line 555 "declarative_user.m"
                  }
#line 551 "declarative_user.m"
              }
#line 549 "declarative_user.m"
          }
#line 545 "declarative_user.m"
      }
#line 545 "declarative_user.m"
      break;
#line 545 "declarative_user.m"
    }
#line 541 "declarative_user.m"
}

#line 520 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__browse_chosen_io_action_7_p_0(
#line 520 "declarative_user.m"
  MR_Word mdb__declarative_user__MaybeIoActions_8,
#line 520 "declarative_user.m"
  MR_Integer mdb__declarative_user__ActionNum_9,
#line 520 "declarative_user.m"
  MR_Word * mdb__declarative_user__MaybeTrack_10,
#line 520 "declarative_user.m"
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_16,
#line 520 "declarative_user.m"
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_17)
#line 520 "declarative_user.m"
{
#line 526 "declarative_user.m"
  {
#line 526 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;

#line 526 "declarative_user.m"
    if ((mdb__declarative_user__MaybeIoActions_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 536 "declarative_user.m"
      {
#line 537 "declarative_user.m"
        {
#line 537 "declarative_user.m"
          mercury__io__write_string_3_p_0((MR_String) "No such IO action.\n");
        }
#line 538 "declarative_user.m"
        *mdb__declarative_user__MaybeTrack_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 536 "declarative_user.m"
        *mdb__declarative_user__STATE_VARIABLE_User_17 = mdb__declarative_user__STATE_VARIABLE_User_0_16;
#line 536 "declarative_user.m"
      }
#line 526 "declarative_user.m"
    else
#line 526 "declarative_user.m"
      {
#line 526 "declarative_user.m"
        MR_Word mdb__declarative_user__IoActions_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeIoActions_8, (MR_Integer) 0)));
#line 526 "declarative_user.m"
        MR_Word mdb__declarative_user__MaybeIoAction_14;

#line 527 "declarative_user.m"
        {
#line 527 "declarative_user.m"
          mdb__declarative_user__find_tabled_io_action_5_p_0(mdb__declarative_user__IoActions_13, mdb__declarative_user__ActionNum_9, &mdb__declarative_user__MaybeIoAction_14);
        }
#line 531 "declarative_user.m"
        if ((mdb__declarative_user__MaybeIoAction_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "declarative_user.m"
          {
#line 533 "declarative_user.m"
            *mdb__declarative_user__MaybeTrack_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 532 "declarative_user.m"
            *mdb__declarative_user__STATE_VARIABLE_User_17 = mdb__declarative_user__STATE_VARIABLE_User_0_16;
#line 532 "declarative_user.m"
          }
#line 531 "declarative_user.m"
        else
#line 529 "declarative_user.m"
          {
#line 529 "declarative_user.m"
            MR_Word mdb__declarative_user__IoAction_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeIoAction_14, (MR_Integer) 0)));

#line 530 "declarative_user.m"
            {
#line 530 "declarative_user.m"
              mdb__declarative_user__browse_io_action_6_p_0(mdb__declarative_user__IoAction_15, mdb__declarative_user__MaybeTrack_10, mdb__declarative_user__STATE_VARIABLE_User_0_16, mdb__declarative_user__STATE_VARIABLE_User_17);
            }
#line 529 "declarative_user.m"
          }
#line 526 "declarative_user.m"
      }
#line 526 "declarative_user.m"
  }
#line 520 "declarative_user.m"
}

#line 512 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__decl_bug_io_actions_2_p_0(
#line 512 "declarative_user.m"
  MR_Word mdb__declarative_user__HeadVar__1_1,
#line 512 "declarative_user.m"
  MR_Word * mdb__declarative_user__HeadVar__2_2)
#line 512 "declarative_user.m"
{
#line 514 "declarative_user.m"
  {
#line 514 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;

#line 514 "declarative_user.m"
    if (((MR_tag((MR_Word) mdb__declarative_user__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 514 "declarative_user.m"
      {
#line 514 "declarative_user.m"
        MR_Word mdb__declarative_user__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__HeadVar__1_1, (MR_Integer) 0)));

#line 514 "declarative_user.m"
#line 514 "declarative_user.m"
        switch (MR_tag((MR_Word) mdb__declarative_user__V_21_21)) {
#line 514 "declarative_user.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 514 "declarative_user.m"
          case (MR_Integer) 0:
#line 514 "declarative_user.m"
            {
#line 514 "declarative_user.m"
              MR_Word mdb__declarative_user__FinalDeclAtom_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_21_21, (MR_Integer) 1)));
#line 514 "declarative_user.m"
              MR_Word mdb__declarative_user__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_21_21, (MR_Integer) 0)));
#line 514 "declarative_user.m"
              MR_Word mdb__declarative_user__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_21_21, (MR_Integer) 2)));
#line 514 "declarative_user.m"
              MR_Integer mdb__declarative_user__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_user__V_21_21, (MR_Integer) 3)));
#line 514 "declarative_user.m"
              MR_Word mdb__declarative_user__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalDeclAtom_4, (MR_Integer) 0)));

#line 514 "declarative_user.m"
              *mdb__declarative_user__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__FinalDeclAtom_4, (MR_Integer) 1)));
#line 514 "declarative_user.m"
            }
#line 514 "declarative_user.m"
            break;
#line 514 "declarative_user.m"
          case (MR_Integer) 1:
#line 516 "declarative_user.m"
            *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 514 "declarative_user.m"
            break;
#line 514 "declarative_user.m"
          case (MR_Integer) 2:
#line 517 "declarative_user.m"
            *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 514 "declarative_user.m"
            break;
#line 514 "declarative_user.m"
        }
#line 514 "declarative_user.m"
      }
#line 514 "declarative_user.m"
    else
#line 518 "declarative_user.m"
      *mdb__declarative_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 514 "declarative_user.m"
  }
#line 512 "declarative_user.m"
}

#line 435 "declarative_user.m"
static MR_Word MR_CALL 
mdb__declarative_user__arg_num_to_arg_pos_1_f_0(
#line 435 "declarative_user.m"
  MR_Integer mdb__declarative_user__ArgNum_3)
#line 435 "declarative_user.m"
{
#line 437 "declarative_user.m"
  {
#line 437 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 437 "declarative_user.m"
    MR_Word mdb__declarative_user__ArgPos_4;
#line 437 "declarative_user.m"
    MR_Word mdb__declarative_user__Which_5;

#line 438 "declarative_user.m"
    {
#line 438 "declarative_user.m"
      mdb__declarative_user__Which_5 = mdb__declarative_execution__chosen_head_vars_presentation_0_f_0();
    }
#line 442 "declarative_user.m"
#line 442 "declarative_user.m"
    switch (mdb__declarative_user__Which_5) {
#line 442 "declarative_user.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 442 "declarative_user.m"
      case (MR_Integer) 0:
#line 444 "declarative_user.m"
        {
#line 444 "declarative_user.m"
          mdb__declarative_user__ArgPos_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 444 "declarative_user.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_user__ArgPos_4, 0) = ((MR_Box) (mdb__declarative_user__ArgNum_3));
#line 444 "declarative_user.m"
        }
#line 442 "declarative_user.m"
        break;
#line 442 "declarative_user.m"
      case (MR_Integer) 1:
#line 441 "declarative_user.m"
        {
#line 441 "declarative_user.m"
          mdb__declarative_user__ArgPos_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 441 "declarative_user.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_user__ArgPos_4, 0) = ((MR_Box) (mdb__declarative_user__ArgNum_3));
#line 441 "declarative_user.m"
        }
#line 442 "declarative_user.m"
        break;
#line 442 "declarative_user.m"
    }
#line 437 "declarative_user.m"
    return mdb__declarative_user__ArgPos_4;
#line 437 "declarative_user.m"
  }
#line 435 "declarative_user.m"
}

#line 251 "declarative_user.m"
static void MR_CALL 
mdb__declarative_user__handle_command_7_p_0(
#line 251 "declarative_user.m"
  MR_Word mdb__declarative_user__TypeInfo_for_T_234,
#line 251 "declarative_user.m"
  MR_Word mdb__declarative_user__Cmd_8,
#line 251 "declarative_user.m"
  MR_Word mdb__declarative_user__UserQuestion_9,
#line 251 "declarative_user.m"
  MR_Word * mdb__declarative_user__Response_10,
#line 251 "declarative_user.m"
  MR_Word mdb__declarative_user__STATE_VARIABLE_User_0_57,
#line 251 "declarative_user.m"
  MR_Word * mdb__declarative_user__STATE_VARIABLE_User_58)
#line 251 "declarative_user.m"
{
#line 262 "declarative_user.m"
  while (MR_TRUE)
#line 262 "declarative_user.m"
    {
#line 262 "declarative_user.m"
      /* tailcall optimized into a loop */
#line 262 "declarative_user.m"
      {
#line 262 "declarative_user.m"
        MR_bool mdb__declarative_user__succeeded;

#line 262 "declarative_user.m"
#line 262 "declarative_user.m"
        switch (MR_tag((MR_Word) mdb__declarative_user__Cmd_8)) {
#line 262 "declarative_user.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 262 "declarative_user.m"
          case (MR_Integer) 0:
#line 262 "declarative_user.m"
#line 262 "declarative_user.m"
            switch (MR_unmkbody(mdb__declarative_user__Cmd_8)) {
#line 262 "declarative_user.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 262 "declarative_user.m"
              case (MR_Integer) 0:
#line 257 "declarative_user.m"
                {
#line 257 "declarative_user.m"
                  MR_Word mdb__declarative_user__Question_13;
#line 257 "declarative_user.m"
                  MR_Box mdb__declarative_user__Node_14;
#line 257 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_140_140;

#line 258 "declarative_user.m"
                  {
#line 258 "declarative_user.m"
                    mdb__declarative_user__Question_13 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
                  }
#line 259 "declarative_user.m"
                  {
#line 259 "declarative_user.m"
                    mdb__declarative_user__Node_14 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__Question_13);
                  }
#line 261 "declarative_user.m"
                  {
#line 261 "declarative_user.m"
                    mdb__declarative_user__V_140_140 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 261 "declarative_user.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_user__V_140_140, 0) = mdb__declarative_user__Node_14;
#line 261 "declarative_user.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_user__V_140_140, 1) = ((MR_Box) ((MR_Integer) 0));
#line 261 "declarative_user.m"
                  }
#line 260 "declarative_user.m"
                  {
#line 260 "declarative_user.m"
                    MR_Word base;
#line 260 "declarative_user.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 260 "declarative_user.m"
                    *mdb__declarative_user__Response_10 = base;
#line 260 "declarative_user.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__Question_13));
#line 260 "declarative_user.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__V_140_140));
#line 260 "declarative_user.m"
                  }
#line 257 "declarative_user.m"
                  *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
#line 257 "declarative_user.m"
                }
#line 262 "declarative_user.m"
                break;
#line 262 "declarative_user.m"
              case (MR_Integer) 1:
#line 263 "declarative_user.m"
                {
#line 263 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_138_138;
#line 263 "declarative_user.m"
                  MR_Word mdb__declarative_user__Question_142;
#line 263 "declarative_user.m"
                  MR_Box mdb__declarative_user__Node_143;

#line 264 "declarative_user.m"
                  {
#line 264 "declarative_user.m"
                    mdb__declarative_user__Question_142 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
                  }
#line 265 "declarative_user.m"
                  {
#line 265 "declarative_user.m"
                    mdb__declarative_user__Node_143 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__Question_142);
                  }
#line 267 "declarative_user.m"
                  {
#line 267 "declarative_user.m"
                    mdb__declarative_user__V_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 267 "declarative_user.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_user__V_138_138, 0) = mdb__declarative_user__Node_143;
#line 267 "declarative_user.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_user__V_138_138, 1) = ((MR_Box) ((MR_Integer) 1));
#line 267 "declarative_user.m"
                  }
#line 266 "declarative_user.m"
                  {
#line 266 "declarative_user.m"
                    MR_Word base;
#line 266 "declarative_user.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "declarative_user.m"
                    *mdb__declarative_user__Response_10 = base;
#line 266 "declarative_user.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__Question_142));
#line 266 "declarative_user.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__V_138_138));
#line 266 "declarative_user.m"
                  }
#line 263 "declarative_user.m"
                  *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
#line 263 "declarative_user.m"
                }
#line 262 "declarative_user.m"
                break;
#line 262 "declarative_user.m"
              case (MR_Integer) 2:
#line 269 "declarative_user.m"
                {
#line 269 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_136_136;
#line 269 "declarative_user.m"
                  MR_Word mdb__declarative_user__Question_144;
#line 269 "declarative_user.m"
                  MR_Box mdb__declarative_user__Node_145;

#line 270 "declarative_user.m"
                  {
#line 270 "declarative_user.m"
                    mdb__declarative_user__Question_144 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
                  }
#line 271 "declarative_user.m"
                  {
#line 271 "declarative_user.m"
                    mdb__declarative_user__Node_145 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__Question_144);
                  }
#line 273 "declarative_user.m"
                  {
#line 273 "declarative_user.m"
                    mdb__declarative_user__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 273 "declarative_user.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_user__V_136_136, 0) = mdb__declarative_user__Node_145;
#line 273 "declarative_user.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_user__V_136_136, 1) = ((MR_Box) ((MR_Integer) 2));
#line 273 "declarative_user.m"
                  }
#line 272 "declarative_user.m"
                  {
#line 272 "declarative_user.m"
                    MR_Word base;
#line 272 "declarative_user.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "declarative_user.m"
                    *mdb__declarative_user__Response_10 = base;
#line 272 "declarative_user.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__Question_144));
#line 272 "declarative_user.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__V_136_136));
#line 272 "declarative_user.m"
                  }
#line 269 "declarative_user.m"
                  *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
#line 269 "declarative_user.m"
                }
#line 262 "declarative_user.m"
                break;
#line 262 "declarative_user.m"
              case (MR_Integer) 3:
#line 275 "declarative_user.m"
                {
#line 275 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_135_135;
#line 275 "declarative_user.m"
                  MR_Word mdb__declarative_user__Question_146;
#line 275 "declarative_user.m"
                  MR_Box mdb__declarative_user__Node_147;

#line 276 "declarative_user.m"
                  {
#line 276 "declarative_user.m"
                    mdb__declarative_user__Question_146 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
                  }
#line 277 "declarative_user.m"
                  {
#line 277 "declarative_user.m"
                    mdb__declarative_user__Node_147 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__Question_146);
                  }
#line 278 "declarative_user.m"
                  {
#line 278 "declarative_user.m"
                    mdb__declarative_user__V_135_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 278 "declarative_user.m"
                    MR_hl_field(MR_mktag(3), mdb__declarative_user__V_135_135, 0) = mdb__declarative_user__Node_147;
#line 278 "declarative_user.m"
                  }
#line 278 "declarative_user.m"
                  {
#line 278 "declarative_user.m"
                    MR_Word base;
#line 278 "declarative_user.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "declarative_user.m"
                    *mdb__declarative_user__Response_10 = base;
#line 278 "declarative_user.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__Question_146));
#line 278 "declarative_user.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__V_135_135));
#line 278 "declarative_user.m"
                  }
#line 275 "declarative_user.m"
                  *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
#line 275 "declarative_user.m"
                }
#line 262 "declarative_user.m"
                break;
#line 262 "declarative_user.m"
              case (MR_Integer) 4:
#line 385 "declarative_user.m"
                {
#line 385 "declarative_user.m"
                  MR_Word mdb__declarative_user__Question_190;
#line 385 "declarative_user.m"
                  MR_Box mdb__declarative_user__Node_191;

#line 386 "declarative_user.m"
                  {
#line 386 "declarative_user.m"
                    mdb__declarative_user__Question_190 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
                  }
#line 387 "declarative_user.m"
                  {
#line 387 "declarative_user.m"
                    mdb__declarative_user__Node_191 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__Question_190);
                  }
#line 388 "declarative_user.m"
                  {
#line 388 "declarative_user.m"
                    MR_Word base;
#line 388 "declarative_user.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "declarative_user.m"
                    *mdb__declarative_user__Response_10 = base;
#line 388 "declarative_user.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 388 "declarative_user.m"
                    MR_hl_field(MR_mktag(3), base, 1) = mdb__declarative_user__Node_191;
#line 388 "declarative_user.m"
                  }
#line 385 "declarative_user.m"
                  *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
#line 385 "declarative_user.m"
                }
#line 262 "declarative_user.m"
                break;
#line 262 "declarative_user.m"
              case (MR_Integer) 5:
#line 350 "declarative_user.m"
                {
#line 350 "declarative_user.m"
                  MR_Word mdb__declarative_user__Question_183;

#line 351 "declarative_user.m"
                  {
#line 351 "declarative_user.m"
                    mdb__declarative_user__Question_183 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
                  }
#line 352 "declarative_user.m"
                  {
#line 352 "declarative_user.m"
                    MR_Word base;
#line 352 "declarative_user.m"
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 352 "declarative_user.m"
                    *mdb__declarative_user__Response_10 = base;
#line 352 "declarative_user.m"
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_user__Question_183));
#line 352 "declarative_user.m"
                  }
#line 350 "declarative_user.m"
                  *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
#line 350 "declarative_user.m"
                }
#line 262 "declarative_user.m"
                break;
#line 262 "declarative_user.m"
              case (MR_Integer) 6:
#line 354 "declarative_user.m"
                {
#line 354 "declarative_user.m"
                  MR_Word mdb__declarative_user__Question_184;

#line 355 "declarative_user.m"
                  {
#line 355 "declarative_user.m"
                    mdb__declarative_user__Question_184 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
                  }
#line 356 "declarative_user.m"
                  {
#line 356 "declarative_user.m"
                    MR_Word base;
#line 356 "declarative_user.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "declarative_user.m"
                    *mdb__declarative_user__Response_10 = base;
#line 356 "declarative_user.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 356 "declarative_user.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_user__Question_184));
#line 356 "declarative_user.m"
                  }
#line 354 "declarative_user.m"
                  *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
#line 354 "declarative_user.m"
                }
#line 262 "declarative_user.m"
                break;
#line 262 "declarative_user.m"
              case (MR_Integer) 7:
#line 358 "declarative_user.m"
                {
#line 358 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 1)));
#line 359 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 0)));
#line 359 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 2)));
#line 359 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 3)));
#line 359 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 4)));
#line 359 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 5)));

#line 359 "declarative_user.m"
                  {
#line 359 "declarative_user.m"
                    MR_Word base;
#line 359 "declarative_user.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 359 "declarative_user.m"
                    *mdb__declarative_user__Response_10 = base;
#line 359 "declarative_user.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 359 "declarative_user.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_user__V_96_96));
#line 359 "declarative_user.m"
                  }
#line 358 "declarative_user.m"
                  *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
#line 358 "declarative_user.m"
                }
#line 262 "declarative_user.m"
                break;
#line 262 "declarative_user.m"
              case (MR_Integer) 8:
#line 361 "declarative_user.m"
                {
#line 362 "declarative_user.m"
                  *mdb__declarative_user__Response_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 361 "declarative_user.m"
                  *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
#line 361 "declarative_user.m"
                }
#line 262 "declarative_user.m"
                break;
#line 262 "declarative_user.m"
              case (MR_Integer) 9:
#line 381 "declarative_user.m"
                {
#line 381 "declarative_user.m"
                  MR_Word mdb__declarative_user__STATE_VARIABLE_User_85_85;
#line 382 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 0)));
#line 382 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 1)));
#line 382 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 2)));
#line 382 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 4)));
#line 382 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 5)));
#line 382 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 3)));

#line 382 "declarative_user.m"
                  {
#line 382 "declarative_user.m"
                    mdb__declarative_user__STATE_VARIABLE_User_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 382 "declarative_user.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_85_85, 0) = ((MR_Box) (mdb__declarative_user__V_213_213));
#line 382 "declarative_user.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_85_85, 1) = ((MR_Box) (mdb__declarative_user__V_214_214));
#line 382 "declarative_user.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_85_85, 2) = ((MR_Box) (mdb__declarative_user__V_215_215));
#line 382 "declarative_user.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_85_85, 3) = ((MR_Box) ((MR_Integer) 1));
#line 382 "declarative_user.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_85_85, 4) = ((MR_Box) (mdb__declarative_user__V_217_217));
#line 382 "declarative_user.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_85_85, 5) = ((MR_Box) (mdb__declarative_user__V_218_218));
#line 382 "declarative_user.m"
                  }
#line 383 "declarative_user.m"
                  {
#line 383 "declarative_user.m"
                    mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_85_85, mdb__declarative_user__STATE_VARIABLE_User_58);
                  }
#line 381 "declarative_user.m"
                }
#line 262 "declarative_user.m"
                break;
#line 262 "declarative_user.m"
              case (MR_Integer) 10:
#line 390 "declarative_user.m"
                {
#line 391 "declarative_user.m"
                  *mdb__declarative_user__Response_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 390 "declarative_user.m"
                  *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
#line 390 "declarative_user.m"
                }
#line 262 "declarative_user.m"
                break;
#line 262 "declarative_user.m"
              case (MR_Integer) 11:
#line 410 "declarative_user.m"
                {
#line 410 "declarative_user.m"
                  MR_Word mdb__declarative_user__Command_54;

#line 414 "declarative_user.m"
                  if (((MR_tag((MR_Word) mdb__declarative_user__UserQuestion_9)) == (MR_mktag((MR_Integer) 0))))
#line 413 "declarative_user.m"
                    mdb__declarative_user__Command_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 414 "declarative_user.m"
                  else
#line 415 "declarative_user.m"
                    {
#line 415 "declarative_user.m"
                      MR_Word mdb__declarative_user__Truth_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__UserQuestion_9, (MR_Integer) 1)));
#line 415 "declarative_user.m"
                      MR_Word mdb__declarative_user__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__UserQuestion_9, (MR_Integer) 0)));

#line 419 "declarative_user.m"
#line 419 "declarative_user.m"
                      switch (mdb__declarative_user__Truth_56) {
#line 419 "declarative_user.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 419 "declarative_user.m"
                        case (MR_Integer) 0:
#line 417 "declarative_user.m"
                          mdb__declarative_user__Command_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 419 "declarative_user.m"
                          break;
#line 419 "declarative_user.m"
                        case (MR_Integer) 1:
#line 420 "declarative_user.m"
                          mdb__declarative_user__Command_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 419 "declarative_user.m"
                          break;
#line 419 "declarative_user.m"
                        case (MR_Integer) 2:
#line 423 "declarative_user.m"
                          mdb__declarative_user__Command_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 419 "declarative_user.m"
                          break;
#line 419 "declarative_user.m"
                      }
#line 415 "declarative_user.m"
                    }
#line 427 "declarative_user.m"
                  /* direct tailcall eliminated */
#line 427 "declarative_user.m"
                  {
#line 427 "declarative_user.m"
                    MR_Word mdb__declarative_user__Cmd__tmp_copy_8 = mdb__declarative_user__Command_54;

#line 427 "declarative_user.m"
                    mdb__declarative_user__Cmd_8 = mdb__declarative_user__Cmd__tmp_copy_8;
#line 427 "declarative_user.m"
                  }
#line 427 "declarative_user.m"
                  continue;
#line 410 "declarative_user.m"
                }
#line 262 "declarative_user.m"
                break;
#line 262 "declarative_user.m"
              case (MR_Integer) 12:
#line 429 "declarative_user.m"
                {
#line 429 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 1)));
#line 430 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 0)));
#line 430 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 2)));
#line 430 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 3)));
#line 430 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 4)));
#line 430 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 5)));

#line 430 "declarative_user.m"
                  {
#line 430 "declarative_user.m"
                    mercury__io__write_string_4_p_0(mdb__declarative_user__V_61_61, (MR_String) "Unknown command, \'h\' for help.\n");
                  }
#line 432 "declarative_user.m"
                  {
#line 432 "declarative_user.m"
                    mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_0_57, mdb__declarative_user__STATE_VARIABLE_User_58);
                  }
#line 429 "declarative_user.m"
                }
#line 262 "declarative_user.m"
                break;
#line 262 "declarative_user.m"
            }
#line 262 "declarative_user.m"
            break;
#line 262 "declarative_user.m"
          case (MR_Integer) 1:
#line 280 "declarative_user.m"
            {
#line 280 "declarative_user.m"
              MR_Word mdb__declarative_user__MaybeArgNum_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Cmd_8, (MR_Integer) 0)));
#line 280 "declarative_user.m"
              MR_Word mdb__declarative_user__InitAtom_16;
#line 280 "declarative_user.m"
              MR_Word mdb__declarative_user__FinalAtom_17;
#line 280 "declarative_user.m"
              MR_Word mdb__declarative_user__Question_174;

#line 281 "declarative_user.m"
              {
#line 281 "declarative_user.m"
                mdb__declarative_user__Question_174 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
              }
#line 282 "declarative_user.m"
              {
#line 282 "declarative_user.m"
                mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_116_114_97_99_101_95_97_116_111_109_115_95_95_91_49_93_95_48_3_p_0(mdb__declarative_user__Question_174, &mdb__declarative_user__InitAtom_16, &mdb__declarative_user__FinalAtom_17);
              }
#line 298 "declarative_user.m"
              if ((mdb__declarative_user__MaybeArgNum_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 299 "declarative_user.m"
                {
#line 299 "declarative_user.m"
                  MR_Word mdb__declarative_user__STATE_VARIABLE_User_118_118;
#line 299 "declarative_user.m"
                  MR_Word mdb__declarative_user__MaybeTrack_167;

#line 300 "declarative_user.m"
                  {
#line 300 "declarative_user.m"
                    mdb__declarative_user__browse_atom_7_p_0(mdb__declarative_user__InitAtom_16, mdb__declarative_user__FinalAtom_17, &mdb__declarative_user__MaybeTrack_167, mdb__declarative_user__STATE_VARIABLE_User_0_57, &mdb__declarative_user__STATE_VARIABLE_User_118_118);
                  }
#line 304 "declarative_user.m"
                  if ((mdb__declarative_user__MaybeTrack_167 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 302 "declarative_user.m"
                    {
#line 302 "declarative_user.m"
                      mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_118_118, mdb__declarative_user__STATE_VARIABLE_User_58);
                    }
#line 304 "declarative_user.m"
                  else
#line 304 "declarative_user.m"
                    {
#line 304 "declarative_user.m"
                      MR_Word mdb__declarative_user__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrack_167, (MR_Integer) 1)));
#line 304 "declarative_user.m"
                      MR_Word mdb__declarative_user__V_236_236 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrack_167, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 304 "declarative_user.m"
                      MR_Word mdb__declarative_user__V_237_237 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrack_167, (MR_Integer) 0)))) & (MR_Integer) 1);

#line 304 "declarative_user.m"
                      if ((mdb__declarative_user__V_235_235 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 314 "declarative_user.m"
                        {
#line 314 "declarative_user.m"
                          MR_Word mdb__declarative_user__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_118_118, (MR_Integer) 1)));
#line 315 "declarative_user.m"
                          MR_Word mdb__declarative_user__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_118_118, (MR_Integer) 0)));
#line 315 "declarative_user.m"
                          MR_Word mdb__declarative_user__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_118_118, (MR_Integer) 2)));
#line 315 "declarative_user.m"
                          MR_Word mdb__declarative_user__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_118_118, (MR_Integer) 3)));
#line 315 "declarative_user.m"
                          MR_Word mdb__declarative_user__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_118_118, (MR_Integer) 4)));
#line 315 "declarative_user.m"
                          MR_Word mdb__declarative_user__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_118_118, (MR_Integer) 5)));

#line 315 "declarative_user.m"
                          {
#line 315 "declarative_user.m"
                            mercury__io__write_string_4_p_0(mdb__declarative_user__V_121_121, (MR_String) "Cannot track the entire atom. Please select a subterm to track.\n");
                          }
#line 318 "declarative_user.m"
                          {
#line 318 "declarative_user.m"
                            mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_118_118, mdb__declarative_user__STATE_VARIABLE_User_58);
                          }
#line 314 "declarative_user.m"
                        }
#line 304 "declarative_user.m"
                      else
#line 306 "declarative_user.m"
                        {
#line 306 "declarative_user.m"
                          MR_Box mdb__declarative_user__Node_151;
#line 306 "declarative_user.m"
                          MR_Integer mdb__declarative_user__ArgNum_152 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_235_235, (MR_Integer) 0)));
#line 306 "declarative_user.m"
                          MR_Word mdb__declarative_user__TermPath_155 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__V_235_235, (MR_Integer) 1)));
#line 306 "declarative_user.m"
                          MR_Word mdb__declarative_user__ArgPos_156;
#line 306 "declarative_user.m"
                          MR_Word mdb__declarative_user__Answer_157;

#line 307 "declarative_user.m"
                          {
#line 307 "declarative_user.m"
                            mdb__declarative_user__ArgPos_156 = mdb__declarative_user__arg_num_to_arg_pos_1_f_0(mdb__declarative_user__ArgNum_152);
                          }
#line 308 "declarative_user.m"
                          {
#line 308 "declarative_user.m"
                            mdb__declarative_user__Node_151 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__Question_174);
                          }
#line 309 "declarative_user.m"
                          {
#line 309 "declarative_user.m"
                            mdb__declarative_user__Answer_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 309 "declarative_user.m"
                            MR_hl_field(MR_mktag(1), mdb__declarative_user__Answer_157, 0) = mdb__declarative_user__Node_151;
#line 309 "declarative_user.m"
                            MR_hl_field(MR_mktag(1), mdb__declarative_user__Answer_157, 1) = ((MR_Box) (mdb__declarative_user__ArgPos_156));
#line 309 "declarative_user.m"
                            MR_hl_field(MR_mktag(1), mdb__declarative_user__Answer_157, 2) = ((MR_Box) (mdb__declarative_user__TermPath_155));
#line 309 "declarative_user.m"
                            MR_hl_field(MR_mktag(1), mdb__declarative_user__Answer_157, 3) = ((MR_Box) ((mdb__declarative_user__V_237_237 | ((mdb__declarative_user__V_236_236 << (MR_Integer) 1)))));
#line 309 "declarative_user.m"
                          }
#line 311 "declarative_user.m"
                          {
#line 311 "declarative_user.m"
                            MR_Word base;
#line 311 "declarative_user.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "declarative_user.m"
                            *mdb__declarative_user__Response_10 = base;
#line 311 "declarative_user.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__Question_174));
#line 311 "declarative_user.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__Answer_157));
#line 311 "declarative_user.m"
                          }
#line 306 "declarative_user.m"
                          *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_118_118;
#line 306 "declarative_user.m"
                        }
#line 304 "declarative_user.m"
                    }
#line 299 "declarative_user.m"
                }
#line 298 "declarative_user.m"
              else
#line 284 "declarative_user.m"
                {
#line 284 "declarative_user.m"
                  MR_Integer mdb__declarative_user__ArgNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeArgNum_15, (MR_Integer) 0)));
#line 284 "declarative_user.m"
                  MR_Word mdb__declarative_user__MaybeTrack_19;
#line 284 "declarative_user.m"
                  MR_Word mdb__declarative_user__STATE_VARIABLE_User_131_131;

#line 285 "declarative_user.m"
                  {
#line 285 "declarative_user.m"
                    mdb__declarative_user__browse_atom_argument_8_p_0(mdb__declarative_user__InitAtom_16, mdb__declarative_user__FinalAtom_17, mdb__declarative_user__ArgNum_18, &mdb__declarative_user__MaybeTrack_19, mdb__declarative_user__STATE_VARIABLE_User_0_57, &mdb__declarative_user__STATE_VARIABLE_User_131_131);
                  }
#line 290 "declarative_user.m"
                  if ((mdb__declarative_user__MaybeTrack_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 288 "declarative_user.m"
                    {
#line 288 "declarative_user.m"
                      mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_131_131, mdb__declarative_user__STATE_VARIABLE_User_58);
                    }
#line 290 "declarative_user.m"
                  else
#line 291 "declarative_user.m"
                    {
#line 291 "declarative_user.m"
                      MR_Word mdb__declarative_user__HowTrack_20 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrack_19, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 291 "declarative_user.m"
                      MR_Word mdb__declarative_user__ShouldAssertInvalid_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrack_19, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 291 "declarative_user.m"
                      MR_Word mdb__declarative_user__TermPath_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeTrack_19, (MR_Integer) 1)));
#line 291 "declarative_user.m"
                      MR_Word mdb__declarative_user__ArgPos_23;
#line 291 "declarative_user.m"
                      MR_Word mdb__declarative_user__Answer_24;
#line 291 "declarative_user.m"
                      MR_Box mdb__declarative_user__Node_148;

#line 292 "declarative_user.m"
                      {
#line 292 "declarative_user.m"
                        mdb__declarative_user__ArgPos_23 = mdb__declarative_user__arg_num_to_arg_pos_1_f_0(mdb__declarative_user__ArgNum_18);
                      }
#line 293 "declarative_user.m"
                      {
#line 293 "declarative_user.m"
                        mdb__declarative_user__Node_148 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__Question_174);
                      }
#line 294 "declarative_user.m"
                      {
#line 294 "declarative_user.m"
                        mdb__declarative_user__Answer_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 294 "declarative_user.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_user__Answer_24, 0) = mdb__declarative_user__Node_148;
#line 294 "declarative_user.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_user__Answer_24, 1) = ((MR_Box) (mdb__declarative_user__ArgPos_23));
#line 294 "declarative_user.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_user__Answer_24, 2) = ((MR_Box) (mdb__declarative_user__TermPath_22));
#line 294 "declarative_user.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_user__Answer_24, 3) = ((MR_Box) ((mdb__declarative_user__HowTrack_20 | ((mdb__declarative_user__ShouldAssertInvalid_21 << (MR_Integer) 1)))));
#line 294 "declarative_user.m"
                      }
#line 296 "declarative_user.m"
                      {
#line 296 "declarative_user.m"
                        MR_Word base;
#line 296 "declarative_user.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "declarative_user.m"
                        *mdb__declarative_user__Response_10 = base;
#line 296 "declarative_user.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__Question_174));
#line 296 "declarative_user.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__Answer_24));
#line 296 "declarative_user.m"
                      }
#line 291 "declarative_user.m"
                      *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_131_131;
#line 291 "declarative_user.m"
                    }
#line 284 "declarative_user.m"
                }
#line 280 "declarative_user.m"
            }
#line 262 "declarative_user.m"
            break;
#line 262 "declarative_user.m"
          case (MR_Integer) 2:
#line 322 "declarative_user.m"
            {
#line 322 "declarative_user.m"
              MR_Word mdb__declarative_user__Question_178;
#line 322 "declarative_user.m"
              MR_Word mdb__declarative_user__MaybeArgNum_179 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__Cmd_8, (MR_Integer) 0)));
#line 322 "declarative_user.m"
              MR_Word mdb__declarative_user__FinalAtom_180;
#line 324 "declarative_user.m"
              MR_Word mdb__declarative_user__V_27_27;

#line 323 "declarative_user.m"
              {
#line 323 "declarative_user.m"
                mdb__declarative_user__Question_178 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
              }
#line 324 "declarative_user.m"
              {
#line 324 "declarative_user.m"
                mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_116_114_97_99_101_95_97_116_111_109_115_95_95_91_49_93_95_48_3_p_0(mdb__declarative_user__Question_178, &mdb__declarative_user__V_27_27, &mdb__declarative_user__FinalAtom_180);
              }
#line 328 "declarative_user.m"
              if ((mdb__declarative_user__MaybeArgNum_179 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 329 "declarative_user.m"
                {
#line 329 "declarative_user.m"
                  mdb__declarative_user__browse_xml_atom_4_p_0(mdb__declarative_user__FinalAtom_180, mdb__declarative_user__STATE_VARIABLE_User_0_57);
                }
#line 328 "declarative_user.m"
              else
#line 326 "declarative_user.m"
                {
#line 326 "declarative_user.m"
                  MR_Integer mdb__declarative_user__ArgNum_176 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeArgNum_179, (MR_Integer) 0)));

#line 327 "declarative_user.m"
                  {
#line 327 "declarative_user.m"
                    mdb__declarative_user__browse_xml_atom_argument_5_p_0(mdb__declarative_user__FinalAtom_180, mdb__declarative_user__ArgNum_176, mdb__declarative_user__STATE_VARIABLE_User_0_57);
                  }
#line 326 "declarative_user.m"
                }
#line 332 "declarative_user.m"
              {
#line 332 "declarative_user.m"
                mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_0_57, mdb__declarative_user__STATE_VARIABLE_User_58);
              }
#line 322 "declarative_user.m"
            }
#line 262 "declarative_user.m"
            break;
#line 262 "declarative_user.m"
          case (MR_Integer) 3:
#line 262 "declarative_user.m"
#line 262 "declarative_user.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Cmd_8, (MR_Integer) 0)))) {
#line 262 "declarative_user.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 262 "declarative_user.m"
              case (MR_Integer) 0:
#line 364 "declarative_user.m"
                {
#line 364 "declarative_user.m"
                  MR_Integer mdb__declarative_user__ActionNum_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Cmd_8, (MR_Integer) 1)));
#line 364 "declarative_user.m"
                  MR_Word mdb__declarative_user__MaybeIoActions_45;
#line 364 "declarative_user.m"
                  MR_Word mdb__declarative_user__STATE_VARIABLE_User_92_92;
#line 364 "declarative_user.m"
                  MR_Word mdb__declarative_user__Question_185;
#line 368 "declarative_user.m"
                  MR_Word mdb__declarative_user___MaybeTrack_46;

#line 365 "declarative_user.m"
                  {
#line 365 "declarative_user.m"
                    mdb__declarative_user__Question_185 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
                  }
#line 366 "declarative_user.m"
                  {
#line 366 "declarative_user.m"
                    mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_105_111_95_97_99_116_105_111_110_115_95_95_91_49_93_95_48_2_p_0(mdb__declarative_user__Question_185, &mdb__declarative_user__MaybeIoActions_45);
                  }
#line 368 "declarative_user.m"
                  {
#line 368 "declarative_user.m"
                    mdb__declarative_user__browse_chosen_io_action_7_p_0(mdb__declarative_user__MaybeIoActions_45, mdb__declarative_user__ActionNum_44, &mdb__declarative_user___MaybeTrack_46, mdb__declarative_user__STATE_VARIABLE_User_0_57, &mdb__declarative_user__STATE_VARIABLE_User_92_92);
                  }
#line 370 "declarative_user.m"
                  {
#line 370 "declarative_user.m"
                    mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_92_92, mdb__declarative_user__STATE_VARIABLE_User_58);
                  }
#line 364 "declarative_user.m"
                }
#line 262 "declarative_user.m"
                break;
#line 262 "declarative_user.m"
              case (MR_Integer) 1:
#line 334 "declarative_user.m"
                {
#line 334 "declarative_user.m"
                  MR_Integer mdb__declarative_user__From_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Cmd_8, (MR_Integer) 1)));
#line 334 "declarative_user.m"
                  MR_Integer mdb__declarative_user__To_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Cmd_8, (MR_Integer) 2)));
#line 334 "declarative_user.m"
                  MR_Word mdb__declarative_user__TraceAtom_31;
#line 334 "declarative_user.m"
                  MR_Word mdb__declarative_user__Question_182;
#line 336 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_30_30;

#line 335 "declarative_user.m"
                  {
#line 335 "declarative_user.m"
                    mdb__declarative_user__Question_182 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
                  }
#line 336 "declarative_user.m"
                  {
#line 336 "declarative_user.m"
                    mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_116_114_97_99_101_95_97_116_111_109_115_95_95_91_49_93_95_48_3_p_0(mdb__declarative_user__Question_182, &mdb__declarative_user__V_30_30, &mdb__declarative_user__TraceAtom_31);
                  }
#line 337 "declarative_user.m"
                  {
#line 337 "declarative_user.m"
                    mdb__declarative_user__print_atom_arguments_6_p_0(mdb__declarative_user__TraceAtom_31, mdb__declarative_user__From_28, mdb__declarative_user__To_29, mdb__declarative_user__STATE_VARIABLE_User_0_57);
                  }
#line 338 "declarative_user.m"
                  {
#line 338 "declarative_user.m"
                    mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_0_57, mdb__declarative_user__STATE_VARIABLE_User_58);
                  }
#line 334 "declarative_user.m"
                }
#line 262 "declarative_user.m"
                break;
#line 262 "declarative_user.m"
              case (MR_Integer) 2:
#line 372 "declarative_user.m"
                {
#line 372 "declarative_user.m"
                  MR_Word mdb__declarative_user__Question_186;
#line 372 "declarative_user.m"
                  MR_Integer mdb__declarative_user__From_187 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Cmd_8, (MR_Integer) 1)));
#line 372 "declarative_user.m"
                  MR_Integer mdb__declarative_user__To_188 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Cmd_8, (MR_Integer) 2)));
#line 372 "declarative_user.m"
                  MR_Word mdb__declarative_user__MaybeIoActions_189;

#line 373 "declarative_user.m"
                  {
#line 373 "declarative_user.m"
                    mdb__declarative_user__Question_186 = mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_1_f_0(mdb__declarative_user__UserQuestion_9);
                  }
#line 374 "declarative_user.m"
                  {
#line 374 "declarative_user.m"
                    mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_100_116_95_110_111_100_101_95_105_111_95_97_99_116_105_111_110_115_95_95_91_49_93_95_48_2_p_0(mdb__declarative_user__Question_186, &mdb__declarative_user__MaybeIoActions_189);
                  }
#line 375 "declarative_user.m"
                  {
#line 375 "declarative_user.m"
                    mdb__declarative_user__print_chosen_io_actions_6_p_0(mdb__declarative_user__MaybeIoActions_189, mdb__declarative_user__From_187, mdb__declarative_user__To_188, mdb__declarative_user__STATE_VARIABLE_User_0_57);
                  }
#line 376 "declarative_user.m"
                  {
#line 376 "declarative_user.m"
                    mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_0_57, mdb__declarative_user__STATE_VARIABLE_User_58);
                  }
#line 372 "declarative_user.m"
                }
#line 262 "declarative_user.m"
                break;
#line 262 "declarative_user.m"
              case (MR_Integer) 3:
#line 340 "declarative_user.m"
                {
#line 340 "declarative_user.m"
                  MR_Word mdb__declarative_user__ParamCommand_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Cmd_8, (MR_Integer) 1)));
#line 340 "declarative_user.m"
                  MR_Word mdb__declarative_user__Browser0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 2)));
#line 340 "declarative_user.m"
                  MR_Word mdb__declarative_user__Info0_35;
#line 340 "declarative_user.m"
                  MR_Word mdb__declarative_user__Info_36;
#line 340 "declarative_user.m"
                  MR_Word mdb__declarative_user__Browser_41;
#line 340 "declarative_user.m"
                  MR_Word mdb__declarative_user__STATE_VARIABLE_User_108_108;
#line 341 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 0)));
#line 341 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 1)));
#line 341 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 3)));
#line 341 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 4)));
#line 341 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 5)));
#line 346 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_37_37;
#line 346 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_38_38;
#line 346 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_39_39;
#line 346 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_40_40;
#line 346 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_42_42;
#line 346 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_43_43;
#line 347 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_202_202;
#line 347 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_203_203;
#line 347 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_205_205;
#line 347 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_206_206;
#line 347 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_207_207;
#line 347 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_204_204;

#line 343 "declarative_user.m"
                  {
#line 343 "declarative_user.m"
                    mdb__declarative_user__Info0_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 343 "declarative_user.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_user__Info0_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_2[0])));
#line 343 "declarative_user.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_user__Info0_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 343 "declarative_user.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_user__Info0_35, 2) = ((MR_Box) ((MR_Integer) 0));
#line 343 "declarative_user.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_user__Info0_35, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 343 "declarative_user.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_user__Info0_35, 4) = ((MR_Box) (mdb__declarative_user__Browser0_33));
#line 343 "declarative_user.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_user__Info0_35, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 343 "declarative_user.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_user__Info0_35, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 343 "declarative_user.m"
                  }
#line 344 "declarative_user.m"
                  {
#line 344 "declarative_user.m"
                    mdb__browser_info__run_param_command_7_p_0((MR_Integer) 0, mdb__declarative_user__ParamCommand_32, (MR_Integer) 0, mdb__declarative_user__Info0_35, &mdb__declarative_user__Info_36);
                  }
#line 346 "declarative_user.m"
                  mdb__declarative_user__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Info_36, (MR_Integer) 0)));
#line 346 "declarative_user.m"
                  mdb__declarative_user__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Info_36, (MR_Integer) 1)));
#line 346 "declarative_user.m"
                  mdb__declarative_user__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Info_36, (MR_Integer) 2)));
#line 346 "declarative_user.m"
                  mdb__declarative_user__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Info_36, (MR_Integer) 3)));
#line 346 "declarative_user.m"
                  mdb__declarative_user__Browser_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Info_36, (MR_Integer) 4)));
#line 346 "declarative_user.m"
                  mdb__declarative_user__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Info_36, (MR_Integer) 5)));
#line 346 "declarative_user.m"
                  mdb__declarative_user__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__Info_36, (MR_Integer) 6)));
#line 347 "declarative_user.m"
                  mdb__declarative_user__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 0)));
#line 347 "declarative_user.m"
                  mdb__declarative_user__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 1)));
#line 347 "declarative_user.m"
                  mdb__declarative_user__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 2)));
#line 347 "declarative_user.m"
                  mdb__declarative_user__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 3)));
#line 347 "declarative_user.m"
                  mdb__declarative_user__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 4)));
#line 347 "declarative_user.m"
                  mdb__declarative_user__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 5)));
#line 347 "declarative_user.m"
                  {
#line 347 "declarative_user.m"
                    mdb__declarative_user__STATE_VARIABLE_User_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 347 "declarative_user.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_108_108, 0) = ((MR_Box) (mdb__declarative_user__V_202_202));
#line 347 "declarative_user.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_108_108, 1) = ((MR_Box) (mdb__declarative_user__V_203_203));
#line 347 "declarative_user.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_108_108, 2) = ((MR_Box) (mdb__declarative_user__Browser_41));
#line 347 "declarative_user.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_108_108, 3) = ((MR_Box) (mdb__declarative_user__V_205_205));
#line 347 "declarative_user.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_108_108, 4) = ((MR_Box) (mdb__declarative_user__V_206_206));
#line 347 "declarative_user.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_108_108, 5) = ((MR_Box) (mdb__declarative_user__V_207_207));
#line 347 "declarative_user.m"
                  }
#line 348 "declarative_user.m"
                  {
#line 348 "declarative_user.m"
                    mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_108_108, mdb__declarative_user__STATE_VARIABLE_User_58);
                  }
#line 340 "declarative_user.m"
                }
#line 262 "declarative_user.m"
                break;
#line 262 "declarative_user.m"
              case (MR_Integer) 4:
#line 378 "declarative_user.m"
                {
#line 378 "declarative_user.m"
                  MR_Word mdb__declarative_user__Mode_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Cmd_8, (MR_Integer) 1)));

#line 379 "declarative_user.m"
                  {
#line 379 "declarative_user.m"
                    MR_Word base;
#line 379 "declarative_user.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 379 "declarative_user.m"
                    *mdb__declarative_user__Response_10 = base;
#line 379 "declarative_user.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 379 "declarative_user.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_user__Mode_47));
#line 379 "declarative_user.m"
                  }
#line 378 "declarative_user.m"
                  *mdb__declarative_user__STATE_VARIABLE_User_58 = mdb__declarative_user__STATE_VARIABLE_User_0_57;
#line 378 "declarative_user.m"
                }
#line 262 "declarative_user.m"
                break;
#line 262 "declarative_user.m"
              case (MR_Integer) 5:
#line 393 "declarative_user.m"
                {
#line 393 "declarative_user.m"
                  MR_Word mdb__declarative_user__MaybeCmd_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Cmd_8, (MR_Integer) 1)));
#line 393 "declarative_user.m"
                  MR_Word mdb__declarative_user__Path_50;
#line 393 "declarative_user.m"
                  MR_Word mdb__declarative_user__Res_51;
#line 393 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_75_75;
#line 393 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_220_220;
#line 401 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_219_219;
#line 401 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_221_221;
#line 401 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_222_222;
#line 401 "declarative_user.m"
                  MR_Word mdb__declarative_user__V_223_223;

#line 397 "declarative_user.m"
                  if ((mdb__declarative_user__MaybeCmd_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 398 "declarative_user.m"
                    mdb__declarative_user__Path_50 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[4]);
#line 397 "declarative_user.m"
                  else
#line 395 "declarative_user.m"
                    {
#line 395 "declarative_user.m"
                      MR_String mdb__declarative_user__CmdName_49 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__MaybeCmd_48, (MR_Integer) 0)));
#line 395 "declarative_user.m"
                      MR_Word mdb__declarative_user__V_73_73;

#line 396 "declarative_user.m"
                      {
#line 396 "declarative_user.m"
                        mdb__declarative_user__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "declarative_user.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_user__V_73_73, 0) = ((MR_Box) (mdb__declarative_user__CmdName_49));
#line 396 "declarative_user.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_user__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 396 "declarative_user.m"
                      }
#line 396 "declarative_user.m"
                      {
#line 396 "declarative_user.m"
                        mdb__declarative_user__Path_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "declarative_user.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_user__Path_50, 0) = ((MR_Box) ((MR_String) "decl"));
#line 396 "declarative_user.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_user__Path_50, 1) = ((MR_Box) (mdb__declarative_user__V_73_73));
#line 396 "declarative_user.m"
                      }
#line 395 "declarative_user.m"
                    }
#line 401 "declarative_user.m"
                  mdb__declarative_user__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 0)));
#line 401 "declarative_user.m"
                  mdb__declarative_user__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 1)));
#line 401 "declarative_user.m"
                  mdb__declarative_user__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 2)));
#line 401 "declarative_user.m"
                  mdb__declarative_user__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 3)));
#line 401 "declarative_user.m"
                  mdb__declarative_user__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 4)));
#line 401 "declarative_user.m"
                  mdb__declarative_user__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_57, (MR_Integer) 5)));
#line 401 "declarative_user.m"
                  {
#line 401 "declarative_user.m"
                    mdb__help__path_6_p_0(mdb__declarative_user__V_75_75, mdb__declarative_user__Path_50, mdb__declarative_user__V_220_220, &mdb__declarative_user__Res_51);
                  }
#line 404 "declarative_user.m"
                  if ((mdb__declarative_user__Res_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 403 "declarative_user.m"
                    {
#line 403 "declarative_user.m"
                    }
#line 404 "declarative_user.m"
                  else
#line 405 "declarative_user.m"
                    {
#line 405 "declarative_user.m"
                      MR_String mdb__declarative_user__Message_52 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Res_51, (MR_Integer) 0)));
#line 405 "declarative_user.m"
                      MR_Word mdb__declarative_user__V_78_78;

#line 406 "declarative_user.m"
                      {
#line 406 "declarative_user.m"
                        mdb__declarative_user__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "declarative_user.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_user__V_78_78, 0) = ((MR_Box) (mdb__declarative_user__Message_52));
#line 406 "declarative_user.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_user__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[13])));
#line 406 "declarative_user.m"
                      }
#line 406 "declarative_user.m"
                      {
#line 406 "declarative_user.m"
                        mercury__io__write_strings_3_p_0(mdb__declarative_user__V_78_78);
                      }
#line 405 "declarative_user.m"
                    }
#line 408 "declarative_user.m"
                  {
#line 408 "declarative_user.m"
                    mdb__declarative_user__query_user_6_p_0(mdb__declarative_user__TypeInfo_for_T_234, mdb__declarative_user__UserQuestion_9, mdb__declarative_user__Response_10, mdb__declarative_user__STATE_VARIABLE_User_0_57, mdb__declarative_user__STATE_VARIABLE_User_58);
                  }
#line 393 "declarative_user.m"
                }
#line 262 "declarative_user.m"
                break;
#line 262 "declarative_user.m"
            }
#line 262 "declarative_user.m"
            break;
#line 262 "declarative_user.m"
        }
#line 262 "declarative_user.m"
      }
#line 262 "declarative_user.m"
      break;
#line 262 "declarative_user.m"
    }
#line 251 "declarative_user.m"
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
#line 1354 "declarative_user.m"
  {
#line 1354 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 1354 "declarative_user.m"
    MR_Word mdb__declarative_user__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_5, (MR_Integer) 0)));
#line 1354 "declarative_user.m"
    MR_Word mdb__declarative_user__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_5, (MR_Integer) 1)));
#line 1354 "declarative_user.m"
    MR_Word mdb__declarative_user__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_5, (MR_Integer) 2)));
#line 1354 "declarative_user.m"
    MR_Word mdb__declarative_user__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_5, (MR_Integer) 3)));
#line 1354 "declarative_user.m"
    MR_Word mdb__declarative_user__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_5, (MR_Integer) 4)));
#line 1354 "declarative_user.m"
    MR_Word mdb__declarative_user__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_5, (MR_Integer) 5)));

#line 1354 "declarative_user.m"
    {
#line 1354 "declarative_user.m"
      MR_Word base;
#line 1354 "declarative_user.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1354 "declarative_user.m"
      *mdb__declarative_user__HeadVar__3_3 = base;
#line 1354 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_user__V_6_6));
#line 1354 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_user__V_7_7));
#line 1354 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_user__V_8_8));
#line 1354 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_user__V_9_9));
#line 1354 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_user__V_10_10));
#line 1354 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_user__Testing_4));
#line 1354 "declarative_user.m"
    }
#line 1354 "declarative_user.m"
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
#line 1352 "declarative_user.m"
  {
#line 1352 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 1352 "declarative_user.m"
    MR_Word mdb__declarative_user__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 0)));
#line 1352 "declarative_user.m"
    MR_Word mdb__declarative_user__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 1)));
#line 1352 "declarative_user.m"
    MR_Word mdb__declarative_user__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 2)));
#line 1352 "declarative_user.m"
    MR_Word mdb__declarative_user__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 3)));
#line 1352 "declarative_user.m"
    MR_Word mdb__declarative_user__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 4)));
#line 1352 "declarative_user.m"
    MR_Word mdb__declarative_user__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 5)));

#line 1352 "declarative_user.m"
    return mdb__declarative_user__HeadVar__2_2;
#line 1352 "declarative_user.m"
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
#line 1350 "declarative_user.m"
  {
#line 1350 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 1350 "declarative_user.m"
    MR_Word mdb__declarative_user__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 1)));
#line 1350 "declarative_user.m"
    MR_Word mdb__declarative_user__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 0)));
#line 1350 "declarative_user.m"
    MR_Word mdb__declarative_user__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 2)));
#line 1350 "declarative_user.m"
    MR_Word mdb__declarative_user__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 3)));
#line 1350 "declarative_user.m"
    MR_Word mdb__declarative_user__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 4)));
#line 1350 "declarative_user.m"
    MR_Word mdb__declarative_user__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 5)));

#line 1350 "declarative_user.m"
    return mdb__declarative_user__HeadVar__2_2;
#line 1350 "declarative_user.m"
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
#line 1348 "declarative_user.m"
  {
#line 1348 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 1348 "declarative_user.m"
    MR_Word mdb__declarative_user__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_6, (MR_Integer) 0)));
#line 1348 "declarative_user.m"
    MR_Word mdb__declarative_user__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_6, (MR_Integer) 1)));
#line 1348 "declarative_user.m"
    MR_Word mdb__declarative_user__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_6, (MR_Integer) 3)));
#line 1348 "declarative_user.m"
    MR_Word mdb__declarative_user__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_6, (MR_Integer) 4)));
#line 1348 "declarative_user.m"
    MR_Word mdb__declarative_user__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_6, (MR_Integer) 5)));
#line 1348 "declarative_user.m"
    MR_Word mdb__declarative_user__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_6, (MR_Integer) 2)));

#line 1348 "declarative_user.m"
    {
#line 1348 "declarative_user.m"
      MR_Word base;
#line 1348 "declarative_user.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1348 "declarative_user.m"
      *mdb__declarative_user__STATE_VARIABLE_User_7 = base;
#line 1348 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_user__V_9_9));
#line 1348 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_user__V_10_10));
#line 1348 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_user__Browser_4));
#line 1348 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_user__V_12_12));
#line 1348 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_user__V_13_13));
#line 1348 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_user__V_14_14));
#line 1348 "declarative_user.m"
    }
#line 1348 "declarative_user.m"
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
#line 1345 "declarative_user.m"
  {
#line 1345 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 1345 "declarative_user.m"
    MR_Word mdb__declarative_user__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 2)));
#line 1345 "declarative_user.m"
    MR_Word mdb__declarative_user__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 0)));
#line 1345 "declarative_user.m"
    MR_Word mdb__declarative_user__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 1)));
#line 1345 "declarative_user.m"
    MR_Word mdb__declarative_user__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 3)));
#line 1345 "declarative_user.m"
    MR_Word mdb__declarative_user__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 4)));
#line 1345 "declarative_user.m"
    MR_Word mdb__declarative_user__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__User_3, (MR_Integer) 5)));

#line 1345 "declarative_user.m"
    return mdb__declarative_user__HeadVar__2_2;
#line 1345 "declarative_user.m"
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
#line 1074 "declarative_user.m"
  while (MR_TRUE)
#line 1074 "declarative_user.m"
    {
#line 1074 "declarative_user.m"
      /* tailcall optimized into a loop */
#line 1074 "declarative_user.m"
      {
#line 1074 "declarative_user.m"
        MR_bool mdb__declarative_user__succeeded;
#line 1074 "declarative_user.m"
        MR_Word mdb__declarative_user__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_23, (MR_Integer) 5)));
#line 1074 "declarative_user.m"
        MR_Word mdb__declarative_user__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_23, (MR_Integer) 4)));
#line 1074 "declarative_user.m"
        MR_Word mdb__declarative_user__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_23, (MR_Integer) 3)));
#line 1074 "declarative_user.m"
        MR_Word mdb__declarative_user__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_23, (MR_Integer) 2)));
#line 1074 "declarative_user.m"
        MR_Word mdb__declarative_user__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_23, (MR_Integer) 1)));
#line 1074 "declarative_user.m"
        MR_Word mdb__declarative_user__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_23, (MR_Integer) 0)));

#line 1074 "declarative_user.m"
#line 1074 "declarative_user.m"
        switch (mdb__declarative_user__V_58_58) {
#line 1074 "declarative_user.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1074 "declarative_user.m"
          case (MR_Integer) 0:
#line 1077 "declarative_user.m"
            {
#line 1077 "declarative_user.m"
              MR_Word mdb__declarative_user__Command_11;
#line 1077 "declarative_user.m"
              MR_Word mdb__declarative_user__STATE_VARIABLE_User_30_30;

#line 1078 "declarative_user.m"
              {
#line 1078 "declarative_user.m"
                mdb__declarative_user__write_decl_bug_4_p_0(mdb__declarative_user__Bug_7, mdb__declarative_user__STATE_VARIABLE_User_0_23);
              }
#line 1079 "declarative_user.m"
              {
#line 1079 "declarative_user.m"
                mdb__declarative_user__get_command_6_p_0((MR_String) "Is this a bug\? ", &mdb__declarative_user__Command_11, mdb__declarative_user__STATE_VARIABLE_User_0_23, &mdb__declarative_user__STATE_VARIABLE_User_30_30);
              }
#line 1083 "declarative_user.m"
#line 1083 "declarative_user.m"
              switch (MR_tag((MR_Word) mdb__declarative_user__Command_11)) {
#line 1083 "declarative_user.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1083 "declarative_user.m"
                case (MR_Integer) 0:
#line 1083 "declarative_user.m"
#line 1083 "declarative_user.m"
                  switch (MR_unmkbody(mdb__declarative_user__Command_11)) {
#line 1083 "declarative_user.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1083 "declarative_user.m"
                    case (MR_Integer) 0:
#line 1081 "declarative_user.m"
                      {
#line 1082 "declarative_user.m"
                        *mdb__declarative_user__Response_8 = (MR_Integer) 0;
#line 1081 "declarative_user.m"
                        *mdb__declarative_user__STATE_VARIABLE_User_24 = mdb__declarative_user__STATE_VARIABLE_User_30_30;
#line 1081 "declarative_user.m"
                      }
#line 1083 "declarative_user.m"
                      break;
#line 1083 "declarative_user.m"
                    case (MR_Integer) 1:
#line 1084 "declarative_user.m"
                      {
#line 1085 "declarative_user.m"
                        *mdb__declarative_user__Response_8 = (MR_Integer) 1;
#line 1084 "declarative_user.m"
                        *mdb__declarative_user__STATE_VARIABLE_User_24 = mdb__declarative_user__STATE_VARIABLE_User_30_30;
#line 1084 "declarative_user.m"
                      }
#line 1083 "declarative_user.m"
                      break;
#line 1083 "declarative_user.m"
                    case (MR_Integer) 2:
#line 1083 "declarative_user.m"
                    case (MR_Integer) 3:
#line 1083 "declarative_user.m"
                    case (MR_Integer) 4:
#line 1083 "declarative_user.m"
                    case (MR_Integer) 5:
#line 1083 "declarative_user.m"
                    case (MR_Integer) 6:
#line 1083 "declarative_user.m"
                    case (MR_Integer) 7:
#line 1083 "declarative_user.m"
                    case (MR_Integer) 8:
#line 1083 "declarative_user.m"
                    case (MR_Integer) 9:
#line 1083 "declarative_user.m"
                    case (MR_Integer) 11:
#line 1083 "declarative_user.m"
                    case (MR_Integer) 12:
#line 1119 "declarative_user.m"
                      {
#line 1119 "declarative_user.m"
                        MR_Word mdb__declarative_user__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_30_30, (MR_Integer) 1)));
#line 848 "declarative_user.m"
                        MR_Word mdb__declarative_user__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_30_30, (MR_Integer) 0)));
#line 848 "declarative_user.m"
                        MR_Word mdb__declarative_user__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_30_30, (MR_Integer) 2)));
#line 848 "declarative_user.m"
                        MR_Word mdb__declarative_user__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_30_30, (MR_Integer) 3)));
#line 848 "declarative_user.m"
                        MR_Word mdb__declarative_user__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_30_30, (MR_Integer) 4)));
#line 848 "declarative_user.m"
                        MR_Word mdb__declarative_user__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_30_30, (MR_Integer) 5)));

#line 848 "declarative_user.m"
                        {
#line 848 "declarative_user.m"
                          mercury__io__write_strings_4_p_0(mdb__declarative_user__V_68_68, (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[11]));
                        }
#line 1121 "declarative_user.m"
                        /* direct tailcall eliminated */
#line 1121 "declarative_user.m"
                        {
#line 1121 "declarative_user.m"
                          MR_Word mdb__declarative_user__STATE_VARIABLE_User_0__tmp_copy_23 = mdb__declarative_user__STATE_VARIABLE_User_30_30;

#line 1121 "declarative_user.m"
                          mdb__declarative_user__STATE_VARIABLE_User_0_23 = mdb__declarative_user__STATE_VARIABLE_User_0__tmp_copy_23;
#line 1121 "declarative_user.m"
                        }
#line 1121 "declarative_user.m"
                        continue;
#line 1119 "declarative_user.m"
                      }
#line 1083 "declarative_user.m"
                      break;
#line 1083 "declarative_user.m"
                    case (MR_Integer) 10:
#line 1087 "declarative_user.m"
                      {
#line 1088 "declarative_user.m"
                        *mdb__declarative_user__Response_8 = (MR_Integer) 2;
#line 1087 "declarative_user.m"
                        *mdb__declarative_user__STATE_VARIABLE_User_24 = mdb__declarative_user__STATE_VARIABLE_User_30_30;
#line 1087 "declarative_user.m"
                      }
#line 1083 "declarative_user.m"
                      break;
#line 1083 "declarative_user.m"
                  }
#line 1083 "declarative_user.m"
                  break;
#line 1083 "declarative_user.m"
                case (MR_Integer) 1:
#line 1090 "declarative_user.m"
                  {
#line 1090 "declarative_user.m"
                    MR_Word mdb__declarative_user__MaybeArgNum_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__Command_11, (MR_Integer) 0)));
#line 1090 "declarative_user.m"
                    MR_Word mdb__declarative_user__STATE_VARIABLE_User_42_42;

#line 1091 "declarative_user.m"
                    {
#line 1091 "declarative_user.m"
                      mdb__declarative_user__browse_decl_bug_6_p_0(mdb__declarative_user__Bug_7, mdb__declarative_user__MaybeArgNum_12, mdb__declarative_user__STATE_VARIABLE_User_30_30, &mdb__declarative_user__STATE_VARIABLE_User_42_42);
                    }
#line 1092 "declarative_user.m"
                    /* direct tailcall eliminated */
#line 1092 "declarative_user.m"
                    {
#line 1092 "declarative_user.m"
                      MR_Word mdb__declarative_user__STATE_VARIABLE_User_0__tmp_copy_23 = mdb__declarative_user__STATE_VARIABLE_User_42_42;

#line 1092 "declarative_user.m"
                      mdb__declarative_user__STATE_VARIABLE_User_0_23 = mdb__declarative_user__STATE_VARIABLE_User_0__tmp_copy_23;
#line 1092 "declarative_user.m"
                    }
#line 1092 "declarative_user.m"
                    continue;
#line 1090 "declarative_user.m"
                  }
#line 1083 "declarative_user.m"
                  break;
#line 1083 "declarative_user.m"
                case (MR_Integer) 2:
#line 1094 "declarative_user.m"
                  {
#line 1094 "declarative_user.m"
                    MR_Word mdb__declarative_user__MaybeArgNum_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_user__Command_11, (MR_Integer) 0)));

#line 1095 "declarative_user.m"
                    {
#line 1095 "declarative_user.m"
                      mdb__declarative_user__browse_xml_decl_bug_5_p_0(mdb__declarative_user__Bug_7, mdb__declarative_user__MaybeArgNum_47, mdb__declarative_user__STATE_VARIABLE_User_30_30);
                    }
#line 1096 "declarative_user.m"
                    /* direct tailcall eliminated */
#line 1096 "declarative_user.m"
                    {
#line 1096 "declarative_user.m"
                      MR_Word mdb__declarative_user__STATE_VARIABLE_User_0__tmp_copy_23 = mdb__declarative_user__STATE_VARIABLE_User_30_30;

#line 1096 "declarative_user.m"
                      mdb__declarative_user__STATE_VARIABLE_User_0_23 = mdb__declarative_user__STATE_VARIABLE_User_0__tmp_copy_23;
#line 1096 "declarative_user.m"
                    }
#line 1096 "declarative_user.m"
                    continue;
#line 1094 "declarative_user.m"
                  }
#line 1083 "declarative_user.m"
                  break;
#line 1083 "declarative_user.m"
                case (MR_Integer) 3:
#line 1083 "declarative_user.m"
#line 1083 "declarative_user.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Command_11, (MR_Integer) 0)))) {
#line 1083 "declarative_user.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1083 "declarative_user.m"
                    case (MR_Integer) 0:
#line 1098 "declarative_user.m"
                      {
#line 1098 "declarative_user.m"
                        MR_Integer mdb__declarative_user__ActionNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_user__Command_11, (MR_Integer) 1)));
#line 1098 "declarative_user.m"
                        MR_Word mdb__declarative_user__MaybeIoActions_14;
#line 1098 "declarative_user.m"
                        MR_Word mdb__declarative_user__STATE_VARIABLE_User_35_35;
#line 1100 "declarative_user.m"
                        MR_Word mdb__declarative_user___MaybeTrack_15;

#line 1099 "declarative_user.m"
                        {
#line 1099 "declarative_user.m"
                          mdb__declarative_user__decl_bug_io_actions_2_p_0(mdb__declarative_user__Bug_7, &mdb__declarative_user__MaybeIoActions_14);
                        }
#line 1100 "declarative_user.m"
                        {
#line 1100 "declarative_user.m"
                          mdb__declarative_user__browse_chosen_io_action_7_p_0(mdb__declarative_user__MaybeIoActions_14, mdb__declarative_user__ActionNum_13, &mdb__declarative_user___MaybeTrack_15, mdb__declarative_user__STATE_VARIABLE_User_30_30, &mdb__declarative_user__STATE_VARIABLE_User_35_35);
                        }
#line 1102 "declarative_user.m"
                        /* direct tailcall eliminated */
#line 1102 "declarative_user.m"
                        {
#line 1102 "declarative_user.m"
                          MR_Word mdb__declarative_user__STATE_VARIABLE_User_0__tmp_copy_23 = mdb__declarative_user__STATE_VARIABLE_User_35_35;

#line 1102 "declarative_user.m"
                          mdb__declarative_user__STATE_VARIABLE_User_0_23 = mdb__declarative_user__STATE_VARIABLE_User_0__tmp_copy_23;
#line 1102 "declarative_user.m"
                        }
#line 1102 "declarative_user.m"
                        continue;
#line 1098 "declarative_user.m"
                      }
#line 1083 "declarative_user.m"
                      break;
#line 1083 "declarative_user.m"
                    case (MR_Integer) 1:
#line 1083 "declarative_user.m"
                    case (MR_Integer) 2:
#line 1083 "declarative_user.m"
                    case (MR_Integer) 3:
#line 1083 "declarative_user.m"
                    case (MR_Integer) 4:
#line 1083 "declarative_user.m"
                    case (MR_Integer) 5:
#line 1119 "declarative_user.m"
                      {
#line 1119 "declarative_user.m"
                        MR_Word mdb__declarative_user__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_30_30, (MR_Integer) 1)));
#line 848 "declarative_user.m"
                        MR_Word mdb__declarative_user__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_30_30, (MR_Integer) 0)));
#line 848 "declarative_user.m"
                        MR_Word mdb__declarative_user__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_30_30, (MR_Integer) 2)));
#line 848 "declarative_user.m"
                        MR_Word mdb__declarative_user__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_30_30, (MR_Integer) 3)));
#line 848 "declarative_user.m"
                        MR_Word mdb__declarative_user__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_30_30, (MR_Integer) 4)));
#line 848 "declarative_user.m"
                        MR_Word mdb__declarative_user__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_30_30, (MR_Integer) 5)));

#line 848 "declarative_user.m"
                        {
#line 848 "declarative_user.m"
                          mercury__io__write_strings_4_p_0(mdb__declarative_user__V_68_68, (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_user_scalar_common_1[11]));
                        }
#line 1121 "declarative_user.m"
                        /* direct tailcall eliminated */
#line 1121 "declarative_user.m"
                        {
#line 1121 "declarative_user.m"
                          MR_Word mdb__declarative_user__STATE_VARIABLE_User_0__tmp_copy_23 = mdb__declarative_user__STATE_VARIABLE_User_30_30;

#line 1121 "declarative_user.m"
                          mdb__declarative_user__STATE_VARIABLE_User_0_23 = mdb__declarative_user__STATE_VARIABLE_User_0__tmp_copy_23;
#line 1121 "declarative_user.m"
                        }
#line 1121 "declarative_user.m"
                        continue;
#line 1119 "declarative_user.m"
                      }
#line 1083 "declarative_user.m"
                      break;
#line 1083 "declarative_user.m"
                  }
#line 1083 "declarative_user.m"
                  break;
#line 1083 "declarative_user.m"
              }
#line 1077 "declarative_user.m"
            }
#line 1074 "declarative_user.m"
            break;
#line 1074 "declarative_user.m"
          case (MR_Integer) 1:
#line 1074 "declarative_user.m"
            {
#line 1075 "declarative_user.m"
              *mdb__declarative_user__Response_8 = (MR_Integer) 0;
#line 1074 "declarative_user.m"
              *mdb__declarative_user__STATE_VARIABLE_User_24 = mdb__declarative_user__STATE_VARIABLE_User_0_23;
#line 1074 "declarative_user.m"
            }
#line 1074 "declarative_user.m"
            break;
#line 1074 "declarative_user.m"
        }
#line 1074 "declarative_user.m"
      }
#line 1074 "declarative_user.m"
      break;
#line 1074 "declarative_user.m"
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
#line 224 "declarative_user.m"
  {
#line 224 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;
#line 224 "declarative_user.m"
    MR_Word mdb__declarative_user__Question_11;
#line 224 "declarative_user.m"
    MR_Word mdb__declarative_user__V_68_68;
#line 224 "declarative_user.m"
    MR_Word mdb__declarative_user__V_70_70;
#line 227 "declarative_user.m"
    MR_Word mdb__declarative_user__V_69_69;
#line 227 "declarative_user.m"
    MR_Word mdb__declarative_user__V_71_71;
#line 227 "declarative_user.m"
    MR_Word mdb__declarative_user__V_72_72;
#line 227 "declarative_user.m"
    MR_Word mdb__declarative_user__V_73_73;

#line 449 "declarative_user.m"
    if (((MR_tag((MR_Word) mdb__declarative_user__UserQuestion_7)) == (MR_mktag((MR_Integer) 0))))
#line 449 "declarative_user.m"
      mdb__declarative_user__Question_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__UserQuestion_7, (MR_Integer) 0)));
#line 449 "declarative_user.m"
    else
#line 450 "declarative_user.m"
      {
#line 450 "declarative_user.m"
        MR_Word mdb__declarative_user__V_82_82;

#line 450 "declarative_user.m"
        mdb__declarative_user__Question_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__UserQuestion_7, (MR_Integer) 0)));
#line 450 "declarative_user.m"
        mdb__declarative_user__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_user__UserQuestion_7, (MR_Integer) 1)));
#line 450 "declarative_user.m"
      }
#line 227 "declarative_user.m"
    mdb__declarative_user__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 0)));
#line 227 "declarative_user.m"
    mdb__declarative_user__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 1)));
#line 227 "declarative_user.m"
    mdb__declarative_user__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 2)));
#line 227 "declarative_user.m"
    mdb__declarative_user__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 3)));
#line 227 "declarative_user.m"
    mdb__declarative_user__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 4)));
#line 227 "declarative_user.m"
    mdb__declarative_user__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 5)));
#line 231 "declarative_user.m"
#line 231 "declarative_user.m"
    switch (mdb__declarative_user__V_68_68) {
#line 231 "declarative_user.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 231 "declarative_user.m"
      case (MR_Integer) 0:
#line 232 "declarative_user.m"
        {
#line 232 "declarative_user.m"
          MR_String mdb__declarative_user__Prompt_13;
#line 232 "declarative_user.m"
          MR_Word mdb__declarative_user__Command_14;
#line 232 "declarative_user.m"
          MR_Word mdb__declarative_user__STATE_VARIABLE_User_24_24;
#line 232 "declarative_user.m"
          MR_Word mdb__declarative_user__STATE_VARIABLE_User_26_26;
#line 232 "declarative_user.m"
          MR_Word mdb__declarative_user__STATE_VARIABLE_User_28_28;
#line 244 "declarative_user.m"
          MR_Word mdb__declarative_user__V_15_15;

#line 238 "declarative_user.m"
#line 238 "declarative_user.m"
          switch (mdb__declarative_user__V_70_70) {
#line 238 "declarative_user.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 238 "declarative_user.m"
            case (MR_Integer) 0:
#line 239 "declarative_user.m"
              {
#line 240 "declarative_user.m"
                mdb__declarative_user__Prompt_13 = (MR_String) "dd> ";
#line 239 "declarative_user.m"
                mdb__declarative_user__STATE_VARIABLE_User_24_24 = mdb__declarative_user__STATE_VARIABLE_User_0_16;
#line 239 "declarative_user.m"
              }
#line 238 "declarative_user.m"
              break;
#line 238 "declarative_user.m"
            case (MR_Integer) 1:
#line 234 "declarative_user.m"
              {
#line 237 "declarative_user.m"
                MR_Word mdb__declarative_user__V_50_50;
#line 237 "declarative_user.m"
                MR_Word mdb__declarative_user__V_51_51;
#line 237 "declarative_user.m"
                MR_Word mdb__declarative_user__V_52_52;
#line 237 "declarative_user.m"
                MR_Word mdb__declarative_user__V_54_54;
#line 237 "declarative_user.m"
                MR_Word mdb__declarative_user__V_55_55;
#line 237 "declarative_user.m"
                MR_Word mdb__declarative_user__V_53_53;

#line 235 "declarative_user.m"
                {
#line 235 "declarative_user.m"
                  mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_99_108_95_113_117_101_115_116_105_111_110_95_95_91_49_93_95_48_4_p_0(mdb__declarative_user__Question_11, mdb__declarative_user__STATE_VARIABLE_User_0_16);
                }
#line 236 "declarative_user.m"
                {
#line 236 "declarative_user.m"
                  mdb__declarative_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_113_117_101_115_116_105_111_110_95_112_114_111_109_112_116_95_95_91_49_93_95_48_2_p_0(mdb__declarative_user__UserQuestion_7, &mdb__declarative_user__Prompt_13);
                }
#line 237 "declarative_user.m"
                mdb__declarative_user__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 0)));
#line 237 "declarative_user.m"
                mdb__declarative_user__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 1)));
#line 237 "declarative_user.m"
                mdb__declarative_user__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 2)));
#line 237 "declarative_user.m"
                mdb__declarative_user__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 3)));
#line 237 "declarative_user.m"
                mdb__declarative_user__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 4)));
#line 237 "declarative_user.m"
                mdb__declarative_user__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_0_16, (MR_Integer) 5)));
#line 237 "declarative_user.m"
                {
#line 237 "declarative_user.m"
                  mdb__declarative_user__STATE_VARIABLE_User_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 237 "declarative_user.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_24_24, 0) = ((MR_Box) (mdb__declarative_user__V_50_50));
#line 237 "declarative_user.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_24_24, 1) = ((MR_Box) (mdb__declarative_user__V_51_51));
#line 237 "declarative_user.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_24_24, 2) = ((MR_Box) (mdb__declarative_user__V_52_52));
#line 237 "declarative_user.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_24_24, 3) = ((MR_Box) ((MR_Integer) 0));
#line 237 "declarative_user.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_24_24, 4) = ((MR_Box) (mdb__declarative_user__V_54_54));
#line 237 "declarative_user.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_24_24, 5) = ((MR_Box) (mdb__declarative_user__V_55_55));
#line 237 "declarative_user.m"
                }
#line 234 "declarative_user.m"
              }
#line 238 "declarative_user.m"
              break;
#line 238 "declarative_user.m"
          }
#line 242 "declarative_user.m"
          {
#line 242 "declarative_user.m"
            mdb__declarative_user__get_command_6_p_0(mdb__declarative_user__Prompt_13, &mdb__declarative_user__Command_14, mdb__declarative_user__STATE_VARIABLE_User_24_24, &mdb__declarative_user__STATE_VARIABLE_User_26_26);
          }
#line 243 "declarative_user.m"
          {
#line 243 "declarative_user.m"
            mdb__declarative_user__handle_command_7_p_0(mdb__declarative_user__TypeInfo_for_T_67, mdb__declarative_user__Command_14, mdb__declarative_user__UserQuestion_7, mdb__declarative_user__Response_8, mdb__declarative_user__STATE_VARIABLE_User_26_26, &mdb__declarative_user__STATE_VARIABLE_User_28_28);
          }
#line 244 "declarative_user.m"
          mdb__declarative_user__succeeded = ((((MR_tag((MR_Word) *mdb__declarative_user__Response_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), *mdb__declarative_user__Response_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 244 "declarative_user.m"
          if (mdb__declarative_user__succeeded)
#line 244 "declarative_user.m"
            mdb__declarative_user__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), *mdb__declarative_user__Response_8, (MR_Integer) 1)));
#line 244 "declarative_user.m"
          mdb__declarative_user__succeeded = !(mdb__declarative_user__succeeded);
#line 244 "declarative_user.m"
          if (mdb__declarative_user__succeeded)
#line 245 "declarative_user.m"
            {
#line 245 "declarative_user.m"
              MR_Word mdb__declarative_user__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_28_28, (MR_Integer) 0)));
#line 245 "declarative_user.m"
              MR_Word mdb__declarative_user__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_28_28, (MR_Integer) 1)));
#line 245 "declarative_user.m"
              MR_Word mdb__declarative_user__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_28_28, (MR_Integer) 2)));
#line 245 "declarative_user.m"
              MR_Word mdb__declarative_user__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_28_28, (MR_Integer) 4)));
#line 245 "declarative_user.m"
              MR_Word mdb__declarative_user__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_28_28, (MR_Integer) 5)));
#line 245 "declarative_user.m"
              MR_Word mdb__declarative_user__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_user__STATE_VARIABLE_User_28_28, (MR_Integer) 3)));

#line 245 "declarative_user.m"
              {
#line 245 "declarative_user.m"
                MR_Word base;
#line 245 "declarative_user.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 245 "declarative_user.m"
                *mdb__declarative_user__STATE_VARIABLE_User_17 = base;
#line 245 "declarative_user.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_user__V_61_61));
#line 245 "declarative_user.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_user__V_62_62));
#line 245 "declarative_user.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_user__V_63_63));
#line 245 "declarative_user.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 1));
#line 245 "declarative_user.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_user__V_65_65));
#line 245 "declarative_user.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_user__V_66_66));
#line 245 "declarative_user.m"
              }
#line 245 "declarative_user.m"
            }
#line 244 "declarative_user.m"
          else
#line 244 "declarative_user.m"
            *mdb__declarative_user__STATE_VARIABLE_User_17 = mdb__declarative_user__STATE_VARIABLE_User_28_28;
#line 232 "declarative_user.m"
        }
#line 231 "declarative_user.m"
        break;
#line 231 "declarative_user.m"
      case (MR_Integer) 1:
#line 227 "declarative_user.m"
        {
#line 227 "declarative_user.m"
          MR_Box mdb__declarative_user__Node_12;
#line 227 "declarative_user.m"
          MR_Word mdb__declarative_user__V_33_33;

#line 228 "declarative_user.m"
          {
#line 228 "declarative_user.m"
            mdb__declarative_user__Node_12 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_user__TypeInfo_for_T_67, mdb__declarative_user__Question_11);
          }
#line 230 "declarative_user.m"
          {
#line 230 "declarative_user.m"
            mdb__declarative_user__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 230 "declarative_user.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_user__V_33_33, 0) = mdb__declarative_user__Node_12;
#line 230 "declarative_user.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_user__V_33_33, 1) = ((MR_Box) ((MR_Integer) 1));
#line 230 "declarative_user.m"
          }
#line 229 "declarative_user.m"
          {
#line 229 "declarative_user.m"
            MR_Word base;
#line 229 "declarative_user.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "declarative_user.m"
            *mdb__declarative_user__Response_8 = base;
#line 229 "declarative_user.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_user__Question_11));
#line 229 "declarative_user.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_user__V_33_33));
#line 229 "declarative_user.m"
          }
#line 227 "declarative_user.m"
          *mdb__declarative_user__STATE_VARIABLE_User_17 = mdb__declarative_user__STATE_VARIABLE_User_0_16;
#line 227 "declarative_user.m"
        }
#line 231 "declarative_user.m"
        break;
#line 231 "declarative_user.m"
    }
#line 224 "declarative_user.m"
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
#line 219 "declarative_user.m"
  {
#line 219 "declarative_user.m"
    MR_bool mdb__declarative_user__succeeded;

#line 220 "declarative_user.m"
    {
#line 220 "declarative_user.m"
      MR_Word base;
#line 220 "declarative_user.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 220 "declarative_user.m"
      *mdb__declarative_user__HeadVar__5_5 = base;
#line 220 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_user__InStr_6));
#line 220 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_user__OutStr_7));
#line 220 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_user__Browser_8));
#line 220 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 1));
#line 220 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_user__HelpSystem_9));
#line 220 "declarative_user.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Integer) 0));
#line 220 "declarative_user.m"
    }
#line 219 "declarative_user.m"
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
