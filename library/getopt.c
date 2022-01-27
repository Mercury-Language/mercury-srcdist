/*
** Automatically generated from `getopt.m'
** by the Mercury compiler,
** version rotd-2014-10-24
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
#include "char.mih"
#include "construct.mih"
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
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"



#line 420 "getopt.m"
struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0_env_0_s {
#line 420 "getopt.m"
  MR_Word * mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0_env_0__HeadVar__3_10;
#line 420 "getopt.m"
  MR_Cont mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0_env_0__cont;
#line 420 "getopt.m"
  void * mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0_env_0__cont_env_ptr;
#line 420 "getopt.m"
  MR_Box mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0_env_0__Option_6;
#line 420 "getopt.m"
  MR_Word mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0_env_0__OptionData_7;
#line 422 "getopt.m"
  MR_Box mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0_env_0__conv1_OptionData_7;
#line 420 "getopt.m"
};

#line 413 "getopt.m"
struct mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0_env_0_s {
#line 413 "getopt.m"
  MR_Word * mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0_env_0__HeadVar__3_10;
#line 413 "getopt.m"
  MR_Cont mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0_env_0__cont;
#line 413 "getopt.m"
  void * mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0_env_0__cont_env_ptr;
#line 413 "getopt.m"
  MR_Box mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0_env_0__Option_6;
#line 413 "getopt.m"
  MR_Word mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0_env_0__OptionData_7;
#line 415 "getopt.m"
  MR_Box mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0_env_0__conv1_OptionData_7;
#line 413 "getopt.m"
};

#line 420 "getopt.m"
struct mercury__getopt__init_option_table_multi_2_p_0_2_env_0_s {
#line 420 "getopt.m"
  MR_Box * mercury__getopt__init_option_table_multi_2_p_0_2_env_0__wrapper_arg_1;
#line 420 "getopt.m"
  MR_Cont mercury__getopt__init_option_table_multi_2_p_0_2_env_0__cont;
#line 420 "getopt.m"
  void * mercury__getopt__init_option_table_multi_2_p_0_2_env_0__cont_env_ptr;
#line 420 "getopt.m"
  MR_Word mercury__getopt__init_option_table_multi_2_p_0_2_env_0__conv0_HeadVar__3_10;
#line 420 "getopt.m"
};

#line 413 "getopt.m"
struct mercury__getopt__init_option_table_2_p_0_2_env_0_s {
#line 413 "getopt.m"
  MR_Box * mercury__getopt__init_option_table_2_p_0_2_env_0__wrapper_arg_1;
#line 413 "getopt.m"
  MR_Cont mercury__getopt__init_option_table_2_p_0_2_env_0__cont;
#line 413 "getopt.m"
  void * mercury__getopt__init_option_table_2_p_0_2_env_0__cont_env_ptr;
#line 413 "getopt.m"
  MR_Word mercury__getopt__init_option_table_2_p_0_2_env_0__conv0_HeadVar__3_10;
#line 413 "getopt.m"
};


#line 147 "getopt.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt____vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0;

#line 150 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__getopt__pair__pti_pair_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0;

#line 153 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__list__pti_list_1__pseudo_1;

#line 156 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__getopt__tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0;

#line 159 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_1_0[1];

#line 162 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_0;

#line 165 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_1_1[1];

#line 168 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_1;

#line 171 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_1_0[1];

#line 174 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_1_1[1];

#line 177 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_maybe_option_table_1[2];

#line 180 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_maybe_option_table_1[2];

#line 183 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_maybe_option_table_1[2];

#line 186 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_se_1_0[1];

#line 189 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_table_se_1_0;

#line 192 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__getopt__pti_option_error_1__pseudo_1;

#line 195 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_se_1_1[1];

#line 198 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_table_se_1_1;

#line 201 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_se_1_0[1];

#line 204 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_se_1_1[1];

#line 207 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_maybe_option_table_se_1[2];

#line 210 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_maybe_option_table_se_1[2];

#line 213 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_maybe_option_table_se_1[2];

#line 216 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_0[1];

#line 219 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_0;

#line 222 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_1[1];

#line 225 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_1;

#line 228 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_2[1];

#line 231 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_2;

#line 234 "getopt.c"
static const MR_FA_TypeInfo_Struct1 mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 237 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_3[1];

#line 240 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_3;

#line 243 "getopt.c"
static const MR_FA_TypeInfo_Struct1 mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

#line 246 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_4[1];

#line 249 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_4;

#line 252 "getopt.c"
static const MR_FA_TypeInfo_Struct1 mercury__getopt__list__ti_list_1builtin__type_ctor_info_string_0;

#line 255 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_5[1];

#line 258 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_5;

#line 261 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_6;

#line 264 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_7;

#line 267 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_8;

#line 270 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_9;

#line 273 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_10;

#line 276 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_0[5];

#line 279 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_1[1];

#line 282 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_2[1];

#line 285 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_3[4];

#line 288 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_data_0[4];

#line 291 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_data_0[11];

#line 294 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_data_0[11];

#line 297 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_1_0[1];

#line 300 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_1_0;

#line 303 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_1_1[3];

#line 306 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_1_1;

#line 309 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_1_0[1];

#line 312 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_1_1[1];

#line 315 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_error_1[2];

#line 318 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_error_1[2];

#line 321 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_error_1[2];

#line 324 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_0;

#line 327 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_1;

#line 330 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_2[1];

#line 333 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_2;

#line 336 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_3;

#line 339 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_4;

#line 342 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_5;

#line 345 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_6[1];

#line 348 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_6;

#line 351 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_7[1];

#line 354 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_7;

#line 357 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_0[5];

#line 360 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_1[1];

#line 363 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_2[1];

#line 366 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_3[1];

#line 369 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_error_reason_0[4];

#line 372 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_error_reason_0[8];

#line 375 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_error_reason_0[8];

#line 378 "getopt.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1;

#line 381 "getopt.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1;

#line 384 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_0[3];

#line 387 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_1_0;

#line 390 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__getopt__pti_maybe_option_table_1__pseudo_1;

#line 393 "getopt.c"
static const MR_VA_PseudoTypeInfo_Struct4 mercury__getopt____vpti_pred_4__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1;

#line 396 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_1[4];

#line 399 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_1_1;

#line 402 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_2[3];

#line 405 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_1_2;

#line 408 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_3[4];

#line 411 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_1_3;

#line 414 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_0[1];

#line 417 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_1[1];

#line 420 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_2[1];

#line 423 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_3[1];

#line 426 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_1[4];

#line 429 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_1[4];

#line 432 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_1[4];

#line 435 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__getopt__pti_option_ops_special_1__pseudo_1;

#line 438 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_internal_1_0[3];

#line 441 "getopt.c"
static const MR_ConstString mercury__getopt__getopt__field_names_option_ops_internal_1_0[3];

#line 444 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_internal_1_0;

#line 447 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_internal_1_0[1];

#line 450 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_internal_1[1];

#line 453 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_internal_1[1];

#line 456 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_internal_1[1];

#line 459 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_special_1_0;

#line 462 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_special_1_1[1];

#line 465 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_special_1_1;

#line 468 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__set_ordlist__pti_set_ordlist_1__pseudo_1;

#line 471 "getopt.c"
static const MR_VA_PseudoTypeInfo_Struct5 mercury__getopt____vpti_pred_5__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1;

#line 474 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_special_1_2[1];

#line 477 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_special_1_2;

#line 480 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_1_0[1];

#line 483 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_1_1[1];

#line 486 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_1_2[1];

#line 489 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_special_1[3];

#line 492 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_special_1[3];

#line 495 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_special_1[3];

#line 498 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_track_1_0[3];

#line 501 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_track_1_0;

#line 504 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_track_1_0[1];

#line 507 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_track_1[1];

#line 510 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_track_1[1];

#line 513 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_track_1[1];

#line 516 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_0;

#line 519 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_1[1];

#line 522 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_1;

#line 525 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_2[1];

#line 528 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_2;

#line 531 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_3[1];

#line 534 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_3;

#line 537 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_4[1];

#line 540 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_4;

#line 543 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_0[1];

#line 546 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_1[1];

#line 549 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_2[1];

#line 552 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_3[2];

#line 555 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_special_data_0[4];

#line 558 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_special_data_0[5];

#line 561 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_special_data_0[5];

#line 564 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_table_1_0_10001(
#line 567 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 569 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 571 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3);

#line 574 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____maybe_option_table_1_0_10001(
#line 577 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 579 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 581 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 583 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4);

#line 586 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_table_se_1_0_10001(
#line 589 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 591 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 593 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3);

#line 596 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____maybe_option_table_se_1_0_10001(
#line 599 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 601 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 603 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 605 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4);

#line 608 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_data_0_0_10001(
#line 611 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 613 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2);

#line 616 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_data_0_0_10001(
#line 619 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_1,
#line 621 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 623 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3);

#line 626 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_error_1_0_10001(
#line 629 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 631 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 633 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3);

#line 636 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_error_1_0_10001(
#line 639 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 641 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 643 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 645 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4);

#line 648 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_error_reason_0_0_10001(
#line 651 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 653 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2);

#line 656 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_error_reason_0_0_10001(
#line 659 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_1,
#line 661 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 663 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3);

#line 666 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_1_0_10001(
#line 669 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 671 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 673 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3);

#line 676 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_ops_1_0_10001(
#line 679 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 681 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 683 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 685 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4);

#line 688 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_internal_1_0_10001(
#line 691 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 693 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 695 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3);

#line 698 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_ops_internal_1_0_10001(
#line 701 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 703 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 705 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 707 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4);

#line 710 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_special_1_0_10001(
#line 713 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 715 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 717 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3);

#line 720 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_ops_special_1_0_10001(
#line 723 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 725 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 727 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 729 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4);

#line 732 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_track_1_0_10001(
#line 735 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 737 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 739 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3);

#line 742 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_ops_track_1_0_10001(
#line 745 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 747 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 749 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 751 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4);

#line 754 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_table_1_0_10001(
#line 757 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 759 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 761 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3);

#line 764 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_table_1_0_10001(
#line 767 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 769 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 771 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 773 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4);

#line 776 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____special_data_0_0_10001(
#line 779 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 781 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2);

#line 784 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____special_data_0_0_10001(
#line 787 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_1,
#line 789 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 791 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 1022 "getopt.m"
static void MR_CALL 
mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(
#line 1022 "getopt.m"
  MR_Box mercury__getopt__Flag_5,
#line 1022 "getopt.m"
  MR_String mercury__getopt__Option_6,
#line 1022 "getopt.m"
  MR_String mercury__getopt__Arg_7,
#line 1022 "getopt.m"
  MR_Word * mercury__getopt__Result_8);

#line 422 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0_2(
#line 422 "getopt.m"
  void * mercury__getopt__env_ptr_arg);

#line 420 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0_1(
#line 420 "getopt.m"
  void * mercury__getopt__env_ptr_arg);

#line 420 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0(
#line 420 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_12,
#line 420 "getopt.m"
  MR_Word mercury__getopt__OptionDefaultsPred_3,
#line 420 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__3_10,
#line 420 "getopt.m"
  MR_Cont mercury__getopt__cont,
#line 420 "getopt.m"
  void * mercury__getopt__cont_env_ptr);

#line 415 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0_2(
#line 415 "getopt.m"
  void * mercury__getopt__env_ptr_arg);

#line 413 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0_1(
#line 413 "getopt.m"
  void * mercury__getopt__env_ptr_arg);

#line 413 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0(
#line 413 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_12,
#line 413 "getopt.m"
  MR_Word mercury__getopt__OptionDefaultsPred_3,
#line 413 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__3_10,
#line 413 "getopt.m"
  MR_Cont mercury__getopt__cont,
#line 413 "getopt.m"
  void * mercury__getopt__cont_env_ptr);

#line 954 "getopt.m"
static void MR_CALL 
mercury__getopt__process_special_8_p_0(
#line 954 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_54,
#line 954 "getopt.m"
  MR_String mercury__getopt__Option_9,
#line 954 "getopt.m"
  MR_Box mercury__getopt__Flag_10,
#line 954 "getopt.m"
  MR_Word mercury__getopt__OptionData_11,
#line 954 "getopt.m"
  MR_Word mercury__getopt__OptionOps_12,
#line 954 "getopt.m"
  MR_Word mercury__getopt__OptionTable0_13,
#line 954 "getopt.m"
  MR_Word * mercury__getopt__Result_14,
#line 954 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_26,
#line 954 "getopt.m"
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_27);

#line 901 "getopt.m"
static void MR_CALL 
mercury__getopt__process_negated_option_7_p_0(
#line 901 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_51,
#line 901 "getopt.m"
  MR_String mercury__getopt__Option_8,
#line 901 "getopt.m"
  MR_Box mercury__getopt__Flag_9,
#line 901 "getopt.m"
  MR_Word mercury__getopt__OptionOps_10,
#line 901 "getopt.m"
  MR_Word mercury__getopt__OptionTable0_11,
#line 901 "getopt.m"
  MR_Word * mercury__getopt__Result_12,
#line 901 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_23,
#line 901 "getopt.m"
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_24);

#line 758 "getopt.m"
static void MR_CALL 
mercury__getopt__process_option_9_p_0(
#line 758 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_204,
#line 758 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 758 "getopt.m"
  MR_String mercury__getopt__HeadVar__2_2,
#line 758 "getopt.m"
  MR_Box mercury__getopt__Flag_3,
#line 758 "getopt.m"
  MR_Word mercury__getopt__MaybeArg_4,
#line 758 "getopt.m"
  MR_Word mercury__getopt__HeadVar__5_5,
#line 758 "getopt.m"
  MR_Word mercury__getopt__HeadVar__6_6,
#line 758 "getopt.m"
  MR_Word * mercury__getopt__Result_7,
#line 758 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_8,
#line 758 "getopt.m"
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_9);

#line 686 "getopt.m"
static void MR_CALL 
mercury__getopt__handle_short_options_10_p_0(
#line 686 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_60,
#line 686 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 686 "getopt.m"
  MR_Word mercury__getopt__OptionOps_2,
#line 686 "getopt.m"
  MR_Word mercury__getopt__HeadVar__3_3,
#line 686 "getopt.m"
  MR_Word * mercury__getopt__Args_4,
#line 686 "getopt.m"
  MR_Word mercury__getopt__HeadVar__5_5,
#line 686 "getopt.m"
  MR_Word * mercury__getopt__OptionArgs_6,
#line 686 "getopt.m"
  MR_Word mercury__getopt__HeadVar__7_7,
#line 686 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__8_8,
#line 686 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_9,
#line 686 "getopt.m"
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_10);

#line 621 "getopt.m"
static void MR_CALL 
mercury__getopt__handle_long_option_13_p_0(
#line 621 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_48,
#line 621 "getopt.m"
  MR_String mercury__getopt__Option_14,
#line 621 "getopt.m"
  MR_Box mercury__getopt__Flag_15,
#line 621 "getopt.m"
  MR_Word mercury__getopt__OptionData_16,
#line 621 "getopt.m"
  MR_Word mercury__getopt__MaybeOptionArg0_17,
#line 621 "getopt.m"
  MR_Word mercury__getopt__Args0_18,
#line 621 "getopt.m"
  MR_Word * mercury__getopt__Args_19,
#line 621 "getopt.m"
  MR_Word mercury__getopt__OptionOps_20,
#line 621 "getopt.m"
  MR_Word mercury__getopt__OptionArgs0_21,
#line 621 "getopt.m"
  MR_Word * mercury__getopt__OptionArgs_22,
#line 621 "getopt.m"
  MR_Word mercury__getopt__OptionTable0_23,
#line 621 "getopt.m"
  MR_Word * mercury__getopt__Result_24,
#line 621 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_37,
#line 621 "getopt.m"
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_38);

#line 78 "solutions.opt"
static void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0_3(
#line 78 "solutions.opt"
  MR_Box mercury__getopt__closure_arg,
#line 78 "solutions.opt"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 78 "solutions.opt"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 78 "solutions.opt"
  MR_Box * mercury__getopt__wrapper_arg_3);

#line 420 "getopt.m"
static void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0_1(
#line 420 "getopt.m"
  void * mercury__getopt__env_ptr_arg);

#line 420 "getopt.m"
static void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0_2(
#line 420 "getopt.m"
  MR_Box mercury__getopt__closure_arg,
#line 420 "getopt.m"
  MR_Box * mercury__getopt__wrapper_arg_1,
#line 420 "getopt.m"
  MR_Cont mercury__getopt__cont,
#line 420 "getopt.m"
  void * mercury__getopt__cont_env_ptr);

#line 78 "solutions.opt"
static void MR_CALL 
mercury__getopt__init_option_table_2_p_0_3(
#line 78 "solutions.opt"
  MR_Box mercury__getopt__closure_arg,
#line 78 "solutions.opt"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 78 "solutions.opt"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 78 "solutions.opt"
  MR_Box * mercury__getopt__wrapper_arg_3);

#line 413 "getopt.m"
static void MR_CALL 
mercury__getopt__init_option_table_2_p_0_1(
#line 413 "getopt.m"
  void * mercury__getopt__env_ptr_arg);

#line 413 "getopt.m"
static void MR_CALL 
mercury__getopt__init_option_table_2_p_0_2(
#line 413 "getopt.m"
  MR_Box mercury__getopt__closure_arg,
#line 413 "getopt.m"
  MR_Box * mercury__getopt__wrapper_arg_1,
#line 413 "getopt.m"
  MR_Cont mercury__getopt__cont,
#line 413 "getopt.m"
  void * mercury__getopt__cont_env_ptr);


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
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
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



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "int.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "construct.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "benchmarking.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
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
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "float.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
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
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
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
#include "rtti_implementation.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "exception.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "store.mh"
#include "store.mh"
#include "store.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "math.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "char.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "version_array.mh"



#line 1500 "getopt.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt____vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

#line 1510 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__getopt__pair__pti_pair_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

#line 1519 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1527 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__getopt__tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

#line 1536 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_1_0[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt__tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0
};

#line 1541 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__getopt__getopt__field_types_maybe_option_table_1_0,
  NULL,
  NULL,
  NULL
};

#line 1556 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1561 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_1 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__getopt__getopt__field_types_maybe_option_table_1_1,
  NULL,
  NULL,
  NULL
};

#line 1576 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_1_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_0
};

#line 1581 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_1_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_1
};

#line 1586 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_maybe_option_table_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_maybe_option_table_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_maybe_option_table_1_1
  }
};

#line 1600 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_maybe_option_table_1[2] = {
  &mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_1,
  &mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_0
};

#line 1606 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_maybe_option_table_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1612 "getopt.c"
const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_maybe_option_table_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____maybe_option_table_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____maybe_option_table_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "maybe_option_table",
  {
    mercury__getopt__getopt__du_name_ordered_maybe_option_table_1
  },
  {
    mercury__getopt__getopt__du_ptag_ordered_maybe_option_table_1
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__getopt__getopt__functor_number_map_maybe_option_table_1
};

#line 1633 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_se_1_0[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt__tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0
};

#line 1638 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_table_se_1_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__getopt__getopt__field_types_maybe_option_table_se_1_0,
  NULL,
  NULL,
  NULL
};

#line 1653 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__getopt__pti_option_error_1__pseudo_1 = {
  &mercury__getopt__getopt__type_ctor_info_option_error_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1661 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_se_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt__getopt__pti_option_error_1__pseudo_1
};

#line 1666 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_table_se_1_1 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__getopt__getopt__field_types_maybe_option_table_se_1_1,
  NULL,
  NULL,
  NULL
};

#line 1681 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_se_1_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_maybe_option_table_se_1_0
};

#line 1686 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_se_1_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_maybe_option_table_se_1_1
};

#line 1691 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_maybe_option_table_se_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_maybe_option_table_se_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_maybe_option_table_se_1_1
  }
};

#line 1705 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_maybe_option_table_se_1[2] = {
  &mercury__getopt__getopt__du_functor_desc_maybe_option_table_se_1_1,
  &mercury__getopt__getopt__du_functor_desc_maybe_option_table_se_1_0
};

#line 1711 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_maybe_option_table_se_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1717 "getopt.c"
const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_maybe_option_table_se_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____maybe_option_table_se_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____maybe_option_table_se_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "maybe_option_table_se",
  {
    mercury__getopt__getopt__du_name_ordered_maybe_option_table_se_1
  },
  {
    mercury__getopt__getopt__du_ptag_ordered_maybe_option_table_se_1
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__getopt__getopt__functor_number_map_maybe_option_table_se_1
};

#line 1738 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1743 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_0 = {
  (MR_String) "bool",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__getopt__getopt__field_types_option_data_0_0,
  NULL,
  NULL,
  NULL
};

#line 1758 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1763 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_1 = {
  (MR_String) "int",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__getopt__getopt__field_types_option_data_0_1,
  NULL,
  NULL,
  NULL
};

#line 1778 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1783 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_2 = {
  (MR_String) "string",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  mercury__getopt__getopt__field_types_option_data_0_2,
  NULL,
  NULL,
  NULL
};

#line 1798 "getopt.c"
static const MR_FA_TypeInfo_Struct1 mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1806 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

#line 1811 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_3 = {
  (MR_String) "maybe_int",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 3,
  mercury__getopt__getopt__field_types_option_data_0_3,
  NULL,
  NULL,
  NULL
};

#line 1826 "getopt.c"
static const MR_FA_TypeInfo_Struct1 mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1834 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

#line 1839 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_4 = {
  (MR_String) "maybe_string",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__getopt__getopt__field_types_option_data_0_4,
  NULL,
  NULL,
  NULL
};

#line 1854 "getopt.c"
static const MR_FA_TypeInfo_Struct1 mercury__getopt__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1862 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 1867 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_5 = {
  (MR_String) "accumulating",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 5,
  mercury__getopt__getopt__field_types_option_data_0_5,
  NULL,
  NULL,
  NULL
};

#line 1882 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_6 = {
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
  NULL
};

#line 1897 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_7 = {
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
  NULL
};

#line 1912 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_8 = {
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
  NULL
};

#line 1927 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_9 = {
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
  NULL
};

#line 1942 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_10 = {
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
  NULL
};

#line 1957 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_0[5] = {
  &mercury__getopt__getopt__du_functor_desc_option_data_0_6,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_7,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_8,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_9,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_10
};

#line 1966 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_data_0_0
};

#line 1971 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_2[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_data_0_1
};

#line 1976 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_3[4] = {
  &mercury__getopt__getopt__du_functor_desc_option_data_0_2,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_3,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_4,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_5
};

#line 1984 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_data_0[4] = {
  {
    (MR_Integer) 5,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__getopt__getopt__du_stag_ordered_option_data_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_data_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_data_0_2
  },
  {
    (MR_Integer) 4,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mercury__getopt__getopt__du_stag_ordered_option_data_0_3
  }
};

#line 2008 "getopt.c"
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

#line 2023 "getopt.c"
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

#line 2038 "getopt.c"
const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_option_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____option_data_0_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_data_0_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_data",
  {
    mercury__getopt__getopt__du_name_ordered_option_data_0
  },
  {
    mercury__getopt__getopt__du_ptag_ordered_option_data_0
  },
  (MR_Integer) 11,
  (MR_Integer) 4,
  mercury__getopt__getopt__functor_number_map_option_data_0
};

#line 2059 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_1_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2064 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_1_0 = {
  (MR_String) "unrecognized_option",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__getopt__getopt__field_types_option_error_1_0,
  NULL,
  NULL,
  NULL
};

#line 2079 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_1_1[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__getopt__getopt__type_ctor_info_option_error_reason_0
};

#line 2086 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_1_1 = {
  (MR_String) "option_error",
  (MR_Integer) 3,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__getopt__getopt__field_types_option_error_1_1,
  NULL,
  NULL,
  NULL
};

#line 2101 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_1_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_error_1_0
};

#line 2106 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_1_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_error_1_1
};

#line 2111 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_error_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_error_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_error_1_1
  }
};

#line 2125 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_error_1[2] = {
  &mercury__getopt__getopt__du_functor_desc_option_error_1_1,
  &mercury__getopt__getopt__du_functor_desc_option_error_1_0
};

#line 2131 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_error_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2137 "getopt.c"
const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_option_error_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____option_error_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_error_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_error",
  {
    mercury__getopt__getopt__du_name_ordered_option_error_1
  },
  {
    mercury__getopt__getopt__du_ptag_ordered_option_error_1
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__getopt__getopt__functor_number_map_option_error_1
};

#line 2158 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_0 = {
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
  NULL
};

#line 2173 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_1 = {
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
  NULL
};

#line 2188 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2193 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_2 = {
  (MR_String) "does_not_allow_argument",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__getopt__getopt__field_types_option_error_reason_0_2,
  NULL,
  NULL,
  NULL
};

#line 2208 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_3 = {
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
  NULL
};

#line 2223 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_4 = {
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
  NULL
};

#line 2238 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_5 = {
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
  NULL
};

#line 2253 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2258 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_6 = {
  (MR_String) "special_handler_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 6,
  mercury__getopt__getopt__field_types_option_error_reason_0_6,
  NULL,
  NULL,
  NULL
};

#line 2273 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2278 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_7 = {
  (MR_String) "requires_numeric_argument",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 7,
  mercury__getopt__getopt__field_types_option_error_reason_0_7,
  NULL,
  NULL,
  NULL
};

#line 2293 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_0[5] = {
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_0,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_1,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_3,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_4,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_5
};

#line 2302 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_2
};

#line 2307 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_2[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_6
};

#line 2312 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_3[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_7
};

#line 2317 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_error_reason_0[4] = {
  {
    (MR_Integer) 5,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_3
  }
};

#line 2341 "getopt.c"
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

#line 2353 "getopt.c"
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

#line 2365 "getopt.c"
const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_option_error_reason_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____option_error_reason_0_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_error_reason_0_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_error_reason",
  {
    mercury__getopt__getopt__du_name_ordered_option_error_reason_0
  },
  {
    mercury__getopt__getopt__du_ptag_ordered_option_error_reason_0
  },
  (MR_Integer) 8,
  (MR_Integer) 4,
  mercury__getopt__getopt__functor_number_map_option_error_reason_0
};

#line 2386 "getopt.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2396 "getopt.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2406 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0
};

#line 2413 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_1_0 = {
  (MR_String) "option_ops",
  (MR_Integer) 3,
  (MR_Integer) 7,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__getopt__getopt__field_types_option_ops_1_0,
  NULL,
  NULL,
  NULL
};

#line 2428 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__getopt__pti_maybe_option_table_1__pseudo_1 = {
  &mercury__getopt__getopt__type_ctor_info_maybe_option_table_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2436 "getopt.c"
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

#line 2448 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_1[4] = {
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_4__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1
};

#line 2456 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_1_1 = {
  (MR_String) "option_ops",
  (MR_Integer) 4,
  (MR_Integer) 15,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__getopt__getopt__field_types_option_ops_1_1,
  NULL,
  NULL,
  NULL
};

#line 2471 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_2[3] = {
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0
};

#line 2478 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_1_2 = {
  (MR_String) "option_ops_multi",
  (MR_Integer) 3,
  (MR_Integer) 7,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__getopt__getopt__field_types_option_ops_1_2,
  NULL,
  NULL,
  NULL
};

#line 2493 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_3[4] = {
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_4__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1
};

#line 2501 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_1_3 = {
  (MR_String) "option_ops_multi",
  (MR_Integer) 4,
  (MR_Integer) 15,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  mercury__getopt__getopt__field_types_option_ops_1_3,
  NULL,
  NULL,
  NULL
};

#line 2516 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_1_0
};

#line 2521 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_1_1
};

#line 2526 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_2[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_1_2
};

#line 2531 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_3[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_1_3
};

#line 2536 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_1[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_1_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_1_3
  }
};

#line 2560 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_1[4] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_1_0,
  &mercury__getopt__getopt__du_functor_desc_option_ops_1_1,
  &mercury__getopt__getopt__du_functor_desc_option_ops_1_2,
  &mercury__getopt__getopt__du_functor_desc_option_ops_1_3
};

#line 2568 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_1[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 2576 "getopt.c"
const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_option_ops_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____option_ops_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_ops_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_ops",
  {
    mercury__getopt__getopt__du_name_ordered_option_ops_1
  },
  {
    mercury__getopt__getopt__du_ptag_ordered_option_ops_1
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__getopt__getopt__functor_number_map_option_ops_1
};

#line 2597 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__getopt__pti_option_ops_special_1__pseudo_1 = {
  &mercury__getopt__getopt__type_ctor_info_option_ops_special_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2605 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_internal_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt__getopt__pti_option_ops_special_1__pseudo_1
};

#line 2612 "getopt.c"
static const MR_ConstString mercury__getopt__getopt__field_names_option_ops_internal_1_0[3] = {
  (MR_String) "short_option",
  (MR_String) "long_option",
  (MR_String) "special_handler"
};

#line 2619 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_internal_1_0 = {
  (MR_String) "option_ops_internal",
  (MR_Integer) 3,
  (MR_Integer) 7,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__getopt__getopt__field_types_option_ops_internal_1_0,
  mercury__getopt__getopt__field_names_option_ops_internal_1_0,
  NULL,
  NULL
};

#line 2634 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_internal_1_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_internal_1_0
};

#line 2639 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_internal_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_internal_1_0
  }
};

#line 2648 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_internal_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_internal_1_0
};

#line 2653 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_internal_1[1] = {
  (MR_Integer) 0
};

#line 2658 "getopt.c"
const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_option_ops_internal_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____option_ops_internal_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_ops_internal_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_ops_internal",
  {
    mercury__getopt__getopt__du_name_ordered_option_ops_internal_1
  },
  {
    mercury__getopt__getopt__du_ptag_ordered_option_ops_internal_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__getopt__getopt__functor_number_map_option_ops_internal_1
};

#line 2679 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_special_1_0 = {
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
  NULL
};

#line 2694 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_special_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_4__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1
};

#line 2699 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_special_1_1 = {
  (MR_String) "notrack",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__getopt__getopt__field_types_option_ops_special_1_1,
  NULL,
  NULL,
  NULL
};

#line 2714 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2722 "getopt.c"
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

#line 2735 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_special_1_2[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_5__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
};

#line 2740 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_special_1_2 = {
  (MR_String) "track",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__getopt__getopt__field_types_option_ops_special_1_2,
  NULL,
  NULL,
  NULL
};

#line 2755 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_1_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_special_1_0
};

#line 2760 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_1_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_special_1_1
};

#line 2765 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_1_2[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_special_1_2
};

#line 2770 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_special_1[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__getopt__getopt__du_stag_ordered_option_ops_special_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_special_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_special_1_2
  }
};

#line 2789 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_special_1[3] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_special_1_0,
  &mercury__getopt__getopt__du_functor_desc_option_ops_special_1_1,
  &mercury__getopt__getopt__du_functor_desc_option_ops_special_1_2
};

#line 2796 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_special_1[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 2803 "getopt.c"
const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_option_ops_special_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____option_ops_special_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_ops_special_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_ops_special",
  {
    mercury__getopt__getopt__du_name_ordered_option_ops_special_1
  },
  {
    mercury__getopt__getopt__du_ptag_ordered_option_ops_special_1
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__getopt__getopt__functor_number_map_option_ops_special_1
};

#line 2824 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_track_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_5__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
};

#line 2831 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_track_1_0 = {
  (MR_String) "option_ops_track",
  (MR_Integer) 3,
  (MR_Integer) 7,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__getopt__getopt__field_types_option_ops_track_1_0,
  NULL,
  NULL,
  NULL
};

#line 2846 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_track_1_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_track_1_0
};

#line 2851 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_track_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_track_1_0
  }
};

#line 2860 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_track_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_track_1_0
};

#line 2865 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_track_1[1] = {
  (MR_Integer) 0
};

#line 2870 "getopt.c"
const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_option_ops_track_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____option_ops_track_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_ops_track_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_ops_track",
  {
    mercury__getopt__getopt__du_name_ordered_option_ops_track_1
  },
  {
    mercury__getopt__getopt__du_ptag_ordered_option_ops_track_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__getopt__getopt__functor_number_map_option_ops_track_1
};

#line 2891 "getopt.c"
const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_option_table_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__getopt____Unify____option_table_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_table_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_table",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__getopt__tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2912 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_0 = {
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
  NULL
};

#line 2927 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 2932 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_1 = {
  (MR_String) "bool",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__getopt__getopt__field_types_special_data_0_1,
  NULL,
  NULL,
  NULL
};

#line 2947 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2952 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_2 = {
  (MR_String) "int",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__getopt__getopt__field_types_special_data_0_2,
  NULL,
  NULL,
  NULL
};

#line 2967 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2972 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_3 = {
  (MR_String) "string",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  mercury__getopt__getopt__field_types_special_data_0_3,
  NULL,
  NULL,
  NULL
};

#line 2987 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

#line 2992 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_4 = {
  (MR_String) "maybe_string",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__getopt__getopt__field_types_special_data_0_4,
  NULL,
  NULL,
  NULL
};

#line 3007 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_special_data_0_0
};

#line 3012 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_special_data_0_1
};

#line 3017 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_2[1] = {
  &mercury__getopt__getopt__du_functor_desc_special_data_0_2
};

#line 3022 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_3[2] = {
  &mercury__getopt__getopt__du_functor_desc_special_data_0_3,
  &mercury__getopt__getopt__du_functor_desc_special_data_0_4
};

#line 3028 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_special_data_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__getopt__getopt__du_stag_ordered_special_data_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_special_data_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_special_data_0_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mercury__getopt__getopt__du_stag_ordered_special_data_0_3
  }
};

#line 3052 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_special_data_0[5] = {
  &mercury__getopt__getopt__du_functor_desc_special_data_0_1,
  &mercury__getopt__getopt__du_functor_desc_special_data_0_2,
  &mercury__getopt__getopt__du_functor_desc_special_data_0_4,
  &mercury__getopt__getopt__du_functor_desc_special_data_0_0,
  &mercury__getopt__getopt__du_functor_desc_special_data_0_3
};

#line 3061 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_special_data_0[5] = {
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 2
};

#line 3070 "getopt.c"
const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_special_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____special_data_0_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____special_data_0_0_10001)),
  (MR_String) "getopt",
  (MR_String) "special_data",
  {
    mercury__getopt__getopt__du_name_ordered_special_data_0
  },
  {
    mercury__getopt__getopt__du_ptag_ordered_special_data_0
  },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mercury__getopt__getopt__functor_number_map_special_data_0
};

#line 3091 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_table_1_0_10001(
#line 3094 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3096 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 3098 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3)
#line 3100 "getopt.c"
{
#line 3102 "getopt.c"
  {
#line 3104 "getopt.c"
    MR_bool mercury__getopt__succeeded;

#line 3107 "getopt.c"
    {
#line 3109 "getopt.c"
      mercury__getopt__succeeded = mercury__getopt____Unify____maybe_option_table_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    }
#line 3112 "getopt.c"
    return mercury__getopt__succeeded;
#line 3114 "getopt.c"
  }
#line 3116 "getopt.c"
}

#line 3119 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____maybe_option_table_1_0_10001(
#line 3122 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3124 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 3126 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 3128 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4)
#line 3130 "getopt.c"
{
#line 3132 "getopt.c"
  {
#line 3134 "getopt.c"
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

#line 3137 "getopt.c"
    {
#line 3139 "getopt.c"
      mercury__getopt____Compare____maybe_option_table_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), &mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_3), ((MR_Word) mercury__getopt__wrapper_arg_4));
    }
#line 3142 "getopt.c"
    *mercury__getopt__wrapper_arg_2 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
#line 3144 "getopt.c"
  }
#line 3146 "getopt.c"
}

#line 3149 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_table_se_1_0_10001(
#line 3152 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3154 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 3156 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3)
#line 3158 "getopt.c"
{
#line 3160 "getopt.c"
  {
#line 3162 "getopt.c"
    MR_bool mercury__getopt__succeeded;

#line 3165 "getopt.c"
    {
#line 3167 "getopt.c"
      mercury__getopt__succeeded = mercury__getopt____Unify____maybe_option_table_se_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    }
#line 3170 "getopt.c"
    return mercury__getopt__succeeded;
#line 3172 "getopt.c"
  }
#line 3174 "getopt.c"
}

#line 3177 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____maybe_option_table_se_1_0_10001(
#line 3180 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3182 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 3184 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 3186 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4)
#line 3188 "getopt.c"
{
#line 3190 "getopt.c"
  {
#line 3192 "getopt.c"
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

#line 3195 "getopt.c"
    {
#line 3197 "getopt.c"
      mercury__getopt____Compare____maybe_option_table_se_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), &mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_3), ((MR_Word) mercury__getopt__wrapper_arg_4));
    }
#line 3200 "getopt.c"
    *mercury__getopt__wrapper_arg_2 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
#line 3202 "getopt.c"
  }
#line 3204 "getopt.c"
}

#line 3207 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_data_0_0_10001(
#line 3210 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3212 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2)
#line 3214 "getopt.c"
{
#line 3216 "getopt.c"
  {
#line 3218 "getopt.c"
    MR_bool mercury__getopt__succeeded;

#line 3221 "getopt.c"
    {
#line 3223 "getopt.c"
      mercury__getopt__succeeded = mercury__getopt____Unify____option_data_0_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2));
    }
#line 3226 "getopt.c"
    return mercury__getopt__succeeded;
#line 3228 "getopt.c"
  }
#line 3230 "getopt.c"
}

#line 3233 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_data_0_0_10001(
#line 3236 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_1,
#line 3238 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 3240 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3)
#line 3242 "getopt.c"
{
#line 3244 "getopt.c"
  {
#line 3246 "getopt.c"
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

#line 3249 "getopt.c"
    {
#line 3251 "getopt.c"
      mercury__getopt____Compare____option_data_0_0(&mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    }
#line 3254 "getopt.c"
    *mercury__getopt__wrapper_arg_1 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
#line 3256 "getopt.c"
  }
#line 3258 "getopt.c"
}

#line 3261 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_error_1_0_10001(
#line 3264 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3266 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 3268 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3)
#line 3270 "getopt.c"
{
#line 3272 "getopt.c"
  {
#line 3274 "getopt.c"
    MR_bool mercury__getopt__succeeded;

#line 3277 "getopt.c"
    {
#line 3279 "getopt.c"
      mercury__getopt__succeeded = mercury__getopt____Unify____option_error_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    }
#line 3282 "getopt.c"
    return mercury__getopt__succeeded;
#line 3284 "getopt.c"
  }
#line 3286 "getopt.c"
}

#line 3289 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_error_1_0_10001(
#line 3292 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3294 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 3296 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 3298 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4)
#line 3300 "getopt.c"
{
#line 3302 "getopt.c"
  {
#line 3304 "getopt.c"
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

#line 3307 "getopt.c"
    {
#line 3309 "getopt.c"
      mercury__getopt____Compare____option_error_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), &mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_3), ((MR_Word) mercury__getopt__wrapper_arg_4));
    }
#line 3312 "getopt.c"
    *mercury__getopt__wrapper_arg_2 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
#line 3314 "getopt.c"
  }
#line 3316 "getopt.c"
}

#line 3319 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_error_reason_0_0_10001(
#line 3322 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3324 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2)
#line 3326 "getopt.c"
{
#line 3328 "getopt.c"
  {
#line 3330 "getopt.c"
    MR_bool mercury__getopt__succeeded;

#line 3333 "getopt.c"
    {
#line 3335 "getopt.c"
      mercury__getopt__succeeded = mercury__getopt____Unify____option_error_reason_0_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2));
    }
#line 3338 "getopt.c"
    return mercury__getopt__succeeded;
#line 3340 "getopt.c"
  }
#line 3342 "getopt.c"
}

#line 3345 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_error_reason_0_0_10001(
#line 3348 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_1,
#line 3350 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 3352 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3)
#line 3354 "getopt.c"
{
#line 3356 "getopt.c"
  {
#line 3358 "getopt.c"
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

#line 3361 "getopt.c"
    {
#line 3363 "getopt.c"
      mercury__getopt____Compare____option_error_reason_0_0(&mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    }
#line 3366 "getopt.c"
    *mercury__getopt__wrapper_arg_1 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
#line 3368 "getopt.c"
  }
#line 3370 "getopt.c"
}

#line 3373 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_1_0_10001(
#line 3376 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3378 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 3380 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3)
#line 3382 "getopt.c"
{
#line 3384 "getopt.c"
  {
#line 3386 "getopt.c"
    MR_bool mercury__getopt__succeeded;

#line 3389 "getopt.c"
    {
#line 3391 "getopt.c"
      mercury__getopt__succeeded = mercury__getopt____Unify____option_ops_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    }
#line 3394 "getopt.c"
    return mercury__getopt__succeeded;
#line 3396 "getopt.c"
  }
#line 3398 "getopt.c"
}

#line 3401 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_ops_1_0_10001(
#line 3404 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3406 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 3408 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 3410 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4)
#line 3412 "getopt.c"
{
#line 3414 "getopt.c"
  {
#line 3416 "getopt.c"
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

#line 3419 "getopt.c"
    {
#line 3421 "getopt.c"
      mercury__getopt____Compare____option_ops_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), &mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_3), ((MR_Word) mercury__getopt__wrapper_arg_4));
    }
#line 3424 "getopt.c"
    *mercury__getopt__wrapper_arg_2 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
#line 3426 "getopt.c"
  }
#line 3428 "getopt.c"
}

#line 3431 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_internal_1_0_10001(
#line 3434 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3436 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 3438 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3)
#line 3440 "getopt.c"
{
#line 3442 "getopt.c"
  {
#line 3444 "getopt.c"
    MR_bool mercury__getopt__succeeded;

#line 3447 "getopt.c"
    {
#line 3449 "getopt.c"
      mercury__getopt__succeeded = mercury__getopt____Unify____option_ops_internal_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    }
#line 3452 "getopt.c"
    return mercury__getopt__succeeded;
#line 3454 "getopt.c"
  }
#line 3456 "getopt.c"
}

#line 3459 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_ops_internal_1_0_10001(
#line 3462 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3464 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 3466 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 3468 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4)
#line 3470 "getopt.c"
{
#line 3472 "getopt.c"
  {
#line 3474 "getopt.c"
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

#line 3477 "getopt.c"
    {
#line 3479 "getopt.c"
      mercury__getopt____Compare____option_ops_internal_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), &mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_3), ((MR_Word) mercury__getopt__wrapper_arg_4));
    }
#line 3482 "getopt.c"
    *mercury__getopt__wrapper_arg_2 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
#line 3484 "getopt.c"
  }
#line 3486 "getopt.c"
}

#line 3489 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_special_1_0_10001(
#line 3492 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3494 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 3496 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3)
#line 3498 "getopt.c"
{
#line 3500 "getopt.c"
  {
#line 3502 "getopt.c"
    MR_bool mercury__getopt__succeeded;

#line 3505 "getopt.c"
    {
#line 3507 "getopt.c"
      mercury__getopt__succeeded = mercury__getopt____Unify____option_ops_special_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    }
#line 3510 "getopt.c"
    return mercury__getopt__succeeded;
#line 3512 "getopt.c"
  }
#line 3514 "getopt.c"
}

#line 3517 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_ops_special_1_0_10001(
#line 3520 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3522 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 3524 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 3526 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4)
#line 3528 "getopt.c"
{
#line 3530 "getopt.c"
  {
#line 3532 "getopt.c"
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

#line 3535 "getopt.c"
    {
#line 3537 "getopt.c"
      mercury__getopt____Compare____option_ops_special_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), &mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_3), ((MR_Word) mercury__getopt__wrapper_arg_4));
    }
#line 3540 "getopt.c"
    *mercury__getopt__wrapper_arg_2 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
#line 3542 "getopt.c"
  }
#line 3544 "getopt.c"
}

#line 3547 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_track_1_0_10001(
#line 3550 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3552 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 3554 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3)
#line 3556 "getopt.c"
{
#line 3558 "getopt.c"
  {
#line 3560 "getopt.c"
    MR_bool mercury__getopt__succeeded;

#line 3563 "getopt.c"
    {
#line 3565 "getopt.c"
      mercury__getopt__succeeded = mercury__getopt____Unify____option_ops_track_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    }
#line 3568 "getopt.c"
    return mercury__getopt__succeeded;
#line 3570 "getopt.c"
  }
#line 3572 "getopt.c"
}

#line 3575 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_ops_track_1_0_10001(
#line 3578 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3580 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 3582 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 3584 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4)
#line 3586 "getopt.c"
{
#line 3588 "getopt.c"
  {
#line 3590 "getopt.c"
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

#line 3593 "getopt.c"
    {
#line 3595 "getopt.c"
      mercury__getopt____Compare____option_ops_track_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), &mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_3), ((MR_Word) mercury__getopt__wrapper_arg_4));
    }
#line 3598 "getopt.c"
    *mercury__getopt__wrapper_arg_2 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
#line 3600 "getopt.c"
  }
#line 3602 "getopt.c"
}

#line 3605 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_table_1_0_10001(
#line 3608 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3610 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 3612 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3)
#line 3614 "getopt.c"
{
#line 3616 "getopt.c"
  {
#line 3618 "getopt.c"
    MR_bool mercury__getopt__succeeded;

#line 3621 "getopt.c"
    {
#line 3623 "getopt.c"
      mercury__getopt__succeeded = mercury__getopt____Unify____option_table_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    }
#line 3626 "getopt.c"
    return mercury__getopt__succeeded;
#line 3628 "getopt.c"
  }
#line 3630 "getopt.c"
}

#line 3633 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_table_1_0_10001(
#line 3636 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3638 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 3640 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 3642 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4)
#line 3644 "getopt.c"
{
#line 3646 "getopt.c"
  {
#line 3648 "getopt.c"
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

#line 3651 "getopt.c"
    {
#line 3653 "getopt.c"
      mercury__getopt____Compare____option_table_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), &mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_3), ((MR_Word) mercury__getopt__wrapper_arg_4));
    }
#line 3656 "getopt.c"
    *mercury__getopt__wrapper_arg_2 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
#line 3658 "getopt.c"
  }
#line 3660 "getopt.c"
}

#line 3663 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____special_data_0_0_10001(
#line 3666 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3668 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2)
#line 3670 "getopt.c"
{
#line 3672 "getopt.c"
  {
#line 3674 "getopt.c"
    MR_bool mercury__getopt__succeeded;

#line 3677 "getopt.c"
    {
#line 3679 "getopt.c"
      mercury__getopt__succeeded = mercury__getopt____Unify____special_data_0_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2));
    }
#line 3682 "getopt.c"
    return mercury__getopt__succeeded;
#line 3684 "getopt.c"
  }
#line 3686 "getopt.c"
}

#line 3689 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____special_data_0_0_10001(
#line 3692 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_1,
#line 3694 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 3696 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3)
#line 3698 "getopt.c"
{
#line 3700 "getopt.c"
  {
#line 3702 "getopt.c"
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

#line 3705 "getopt.c"
    {
#line 3707 "getopt.c"
      mercury__getopt____Compare____special_data_0_0(&mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    }
#line 3710 "getopt.c"
    *mercury__getopt__wrapper_arg_1 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
#line 3712 "getopt.c"
  }
#line 3714 "getopt.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__getopt__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 1022 "getopt.m"
static void MR_CALL 
mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(
#line 1022 "getopt.m"
  MR_Box mercury__getopt__Flag_5,
#line 1022 "getopt.m"
  MR_String mercury__getopt__Option_6,
#line 1022 "getopt.m"
  MR_String mercury__getopt__Arg_7,
#line 1022 "getopt.m"
  MR_Word * mercury__getopt__Result_8)
#line 1022 "getopt.m"
{
#line 1025 "getopt.m"
  {
#line 1025 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 1025 "getopt.m"
    MR_Word mercury__getopt__Reason_9;
#line 1025 "getopt.m"
    MR_Word mercury__getopt__Error_10;

#line 1026 "getopt.m"
    {
#line 1026 "getopt.m"
      mercury__getopt__Reason_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1026 "getopt.m"
      MR_hl_field(MR_mktag(3), mercury__getopt__Reason_9, 0) = ((MR_Box) (mercury__getopt__Arg_7));
#line 1026 "getopt.m"
    }
#line 1027 "getopt.m"
    {
#line 1027 "getopt.m"
      mercury__getopt__Error_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1027 "getopt.m"
      MR_hl_field(MR_mktag(1), mercury__getopt__Error_10, 0) = mercury__getopt__Flag_5;
#line 1027 "getopt.m"
      MR_hl_field(MR_mktag(1), mercury__getopt__Error_10, 1) = ((MR_Box) (mercury__getopt__Option_6));
#line 1027 "getopt.m"
      MR_hl_field(MR_mktag(1), mercury__getopt__Error_10, 2) = ((MR_Box) (mercury__getopt__Reason_9));
#line 1027 "getopt.m"
    }
#line 1028 "getopt.m"
    {
#line 1028 "getopt.m"
      MR_Word base;
#line 1028 "getopt.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "getopt.m"
      *mercury__getopt__Result_8 = base;
#line 1028 "getopt.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_10));
#line 1028 "getopt.m"
    }
#line 1025 "getopt.m"
  }
#line 1022 "getopt.m"
}

#line 422 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0_2(
#line 422 "getopt.m"
  void * mercury__getopt__env_ptr_arg)
#line 422 "getopt.m"
{
#line 422 "getopt.m"
  {
#line 422 "getopt.m"
    struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0_env_0_s * mercury__getopt__env_ptr = (struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0_env_0_s *) mercury__getopt__env_ptr_arg;

#line 422 "getopt.m"
    (mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0_env_0__OptionData_7 = ((MR_Word) (mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0_env_0__conv1_OptionData_7);
#line 422 "getopt.m"
    {
#line 422 "getopt.m"
      mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0_1(mercury__getopt__env_ptr);
#line 422 "getopt.m"
      return;
    }
#line 422 "getopt.m"
  }
#line 422 "getopt.m"
}

#line 420 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0_1(
#line 420 "getopt.m"
  void * mercury__getopt__env_ptr_arg)
#line 420 "getopt.m"
{
#line 420 "getopt.m"
  {
#line 420 "getopt.m"
    struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0_env_0_s * mercury__getopt__env_ptr = (struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0_env_0_s *) mercury__getopt__env_ptr_arg;

#line 421 "getopt.m"
    {
#line 421 "getopt.m"
      MR_Word base;
#line 421 "getopt.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "getopt.m"
      *((mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0_env_0__HeadVar__3_10) = base;
#line 421 "getopt.m"
      MR_hl_field(MR_mktag(0), base, 0) = (mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0_env_0__Option_6;
#line 421 "getopt.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0_env_0__OptionData_7));
#line 421 "getopt.m"
    }
#line 421 "getopt.m"
    {
#line 421 "getopt.m"
      ((mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0_env_0__cont)((mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0_env_0__cont_env_ptr);
#line 421 "getopt.m"
      return;
    }
#line 420 "getopt.m"
  }
#line 420 "getopt.m"
}

#line 420 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0(
#line 420 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_12,
#line 420 "getopt.m"
  MR_Word mercury__getopt__OptionDefaultsPred_3,
#line 420 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__3_10,
#line 420 "getopt.m"
  MR_Cont mercury__getopt__cont,
#line 420 "getopt.m"
  void * mercury__getopt__cont_env_ptr)
#line 420 "getopt.m"
{
#line 420 "getopt.m"
  {
#line 420 "getopt.m"
    struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0_env_0_s mercury__getopt__env;

#line 420 "getopt.m"
    (mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0_env_0__HeadVar__3_10 = mercury__getopt__HeadVar__3_10;
#line 420 "getopt.m"
    (mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0_env_0__cont = mercury__getopt__cont;
#line 420 "getopt.m"
    (mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0_env_0__cont_env_ptr = mercury__getopt__cont_env_ptr;
#line 420 "getopt.m"
    {
#line 420 "getopt.m"
      MR_bool mercury__getopt__succeeded;
#line 422 "getopt.m"
      void MR_CALL (* mercury__getopt__func_0)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionDefaultsPred_3, (MR_Integer) 1)));

#line 422 "getopt.m"
      {
#line 422 "getopt.m"
        mercury__getopt__func_0(((MR_Box) mercury__getopt__OptionDefaultsPred_3), &(mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0_env_0__Option_6, &(mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0_env_0__conv1_OptionData_7, mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0_2, &mercury__getopt__env);
      }
#line 420 "getopt.m"
    }
#line 420 "getopt.m"
  }
#line 420 "getopt.m"
}

#line 415 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0_2(
#line 415 "getopt.m"
  void * mercury__getopt__env_ptr_arg)
#line 415 "getopt.m"
{
#line 415 "getopt.m"
  {
#line 415 "getopt.m"
    struct mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0_env_0_s * mercury__getopt__env_ptr = (struct mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0_env_0_s *) mercury__getopt__env_ptr_arg;

#line 415 "getopt.m"
    (mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0_env_0__OptionData_7 = ((MR_Word) (mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0_env_0__conv1_OptionData_7);
#line 415 "getopt.m"
    {
#line 415 "getopt.m"
      mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0_1(mercury__getopt__env_ptr);
#line 415 "getopt.m"
      return;
    }
#line 415 "getopt.m"
  }
#line 415 "getopt.m"
}

#line 413 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0_1(
#line 413 "getopt.m"
  void * mercury__getopt__env_ptr_arg)
#line 413 "getopt.m"
{
#line 413 "getopt.m"
  {
#line 413 "getopt.m"
    struct mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0_env_0_s * mercury__getopt__env_ptr = (struct mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0_env_0_s *) mercury__getopt__env_ptr_arg;

#line 414 "getopt.m"
    {
#line 414 "getopt.m"
      MR_Word base;
#line 414 "getopt.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 414 "getopt.m"
      *((mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0_env_0__HeadVar__3_10) = base;
#line 414 "getopt.m"
      MR_hl_field(MR_mktag(0), base, 0) = (mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0_env_0__Option_6;
#line 414 "getopt.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0_env_0__OptionData_7));
#line 414 "getopt.m"
    }
#line 414 "getopt.m"
    {
#line 414 "getopt.m"
      ((mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0_env_0__cont)((mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0_env_0__cont_env_ptr);
#line 414 "getopt.m"
      return;
    }
#line 413 "getopt.m"
  }
#line 413 "getopt.m"
}

#line 413 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0(
#line 413 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_12,
#line 413 "getopt.m"
  MR_Word mercury__getopt__OptionDefaultsPred_3,
#line 413 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__3_10,
#line 413 "getopt.m"
  MR_Cont mercury__getopt__cont,
#line 413 "getopt.m"
  void * mercury__getopt__cont_env_ptr)
#line 413 "getopt.m"
{
#line 413 "getopt.m"
  {
#line 413 "getopt.m"
    struct mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0_env_0_s mercury__getopt__env;

#line 413 "getopt.m"
    (mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0_env_0__HeadVar__3_10 = mercury__getopt__HeadVar__3_10;
#line 413 "getopt.m"
    (mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0_env_0__cont = mercury__getopt__cont;
#line 413 "getopt.m"
    (mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0_env_0__cont_env_ptr = mercury__getopt__cont_env_ptr;
#line 413 "getopt.m"
    {
#line 413 "getopt.m"
      MR_bool mercury__getopt__succeeded;
#line 415 "getopt.m"
      void MR_CALL (* mercury__getopt__func_0)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionDefaultsPred_3, (MR_Integer) 1)));

#line 415 "getopt.m"
      {
#line 415 "getopt.m"
        mercury__getopt__func_0(((MR_Box) mercury__getopt__OptionDefaultsPred_3), &(mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0_env_0__Option_6, &(mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0_env_0__conv1_OptionData_7, mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0_2, &mercury__getopt__env);
      }
#line 413 "getopt.m"
    }
#line 413 "getopt.m"
  }
#line 413 "getopt.m"
}

#line 263 "getopt.m"
void MR_CALL 
mercury__getopt____Compare____special_data_0_0(
#line 263 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__1_1,
#line 263 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2,
#line 263 "getopt.m"
  MR_Word mercury__getopt__HeadVar__3_3)
#line 263 "getopt.m"
{
#line 263 "getopt.m"
  {
#line 263 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 263 "getopt.m"
    MR_Integer mercury__getopt__CastX_44 = (MR_Integer) mercury__getopt__HeadVar__2_2;
#line 263 "getopt.m"
    MR_Integer mercury__getopt__CastY_45 = (MR_Integer) mercury__getopt__HeadVar__3_3;

#line 263 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_44 == mercury__getopt__CastY_45);
#line 263 "getopt.m"
    if (mercury__getopt__succeeded)
#line 4035 "getopt.c"
      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 263 "getopt.m"
    else
#line 263 "getopt.m"
      if ((mercury__getopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 263 "getopt.m"
        if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 263 "getopt.m"
          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 263 "getopt.m"
        else
#line 263 "getopt.m"
          if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4049 "getopt.c"
            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "getopt.m"
          else
#line 263 "getopt.m"
            if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4055 "getopt.c"
              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "getopt.m"
            else
#line 263 "getopt.m"
              if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4061 "getopt.c"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "getopt.m"
              else
#line 4065 "getopt.c"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "getopt.m"
      else
#line 263 "getopt.m"
        if (((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 263 "getopt.m"
          {
#line 263 "getopt.m"
            MR_Word mercury__getopt__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

#line 263 "getopt.m"
            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4078 "getopt.c"
              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "getopt.m"
            else
#line 263 "getopt.m"
              if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 263 "getopt.m"
                {
#line 263 "getopt.m"
                  MR_Word mercury__getopt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
#line 263 "getopt.m"
                  MR_Integer mercury__getopt__V_54_54 = (MR_Integer) mercury__getopt__V_50_50;
#line 263 "getopt.m"
                  MR_Integer mercury__getopt__V_55_55 = (MR_Integer) mercury__getopt__V_10_10;

#line 66 "private_builtin.opt"
                  mercury__getopt__succeeded = (mercury__getopt__V_54_54 < mercury__getopt__V_55_55);
#line 69 "private_builtin.opt"
                  if (mercury__getopt__succeeded)
#line 68 "private_builtin.opt"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                  else
#line 74 "private_builtin.opt"
                    {
#line 71 "private_builtin.opt"
                      mercury__getopt__succeeded = (mercury__getopt__V_54_54 == mercury__getopt__V_55_55);
#line 74 "private_builtin.opt"
                      if (mercury__getopt__succeeded)
#line 73 "private_builtin.opt"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                      else
#line 75 "private_builtin.opt"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                    }
#line 263 "getopt.m"
                }
#line 263 "getopt.m"
              else
#line 263 "getopt.m"
                if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4121 "getopt.c"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "getopt.m"
                else
#line 263 "getopt.m"
                  if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4127 "getopt.c"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "getopt.m"
                  else
#line 4131 "getopt.c"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "getopt.m"
          }
#line 263 "getopt.m"
        else
#line 263 "getopt.m"
          if (((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 263 "getopt.m"
            {
#line 263 "getopt.m"
              MR_Integer mercury__getopt__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

#line 263 "getopt.m"
              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4146 "getopt.c"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "getopt.m"
              else
#line 263 "getopt.m"
                if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4152 "getopt.c"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "getopt.m"
                else
#line 263 "getopt.m"
                  if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 263 "getopt.m"
                    {
#line 263 "getopt.m"
                      MR_Integer mercury__getopt__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));

#line 66 "private_builtin.opt"
                      mercury__getopt__succeeded = (mercury__getopt__V_51_51 < mercury__getopt__V_21_21);
#line 69 "private_builtin.opt"
                      if (mercury__getopt__succeeded)
#line 68 "private_builtin.opt"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                      else
#line 74 "private_builtin.opt"
                        {
#line 71 "private_builtin.opt"
                          mercury__getopt__succeeded = (mercury__getopt__V_51_51 == mercury__getopt__V_21_21);
#line 74 "private_builtin.opt"
                          if (mercury__getopt__succeeded)
#line 73 "private_builtin.opt"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                          else
#line 75 "private_builtin.opt"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                        }
#line 263 "getopt.m"
                    }
#line 263 "getopt.m"
                  else
#line 263 "getopt.m"
                    if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4191 "getopt.c"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "getopt.m"
                    else
#line 4195 "getopt.c"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "getopt.m"
            }
#line 263 "getopt.m"
          else
#line 263 "getopt.m"
            if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 263 "getopt.m"
              {
#line 263 "getopt.m"
                MR_Word mercury__getopt__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));

#line 263 "getopt.m"
                if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4210 "getopt.c"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "getopt.m"
                else
#line 263 "getopt.m"
                  if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4216 "getopt.c"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "getopt.m"
                  else
#line 263 "getopt.m"
                    if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4222 "getopt.c"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "getopt.m"
                    else
#line 263 "getopt.m"
                      if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 263 "getopt.m"
                        {
#line 263 "getopt.m"
                          MR_Word mercury__getopt__TypeInfo_46_46 = (MR_Word) &mercury__getopt_scalar_common_1[1];
#line 263 "getopt.m"
                          MR_Word mercury__getopt__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));

#line 263 "getopt.m"
                          {
#line 263 "getopt.m"
                            mercury__builtin__compare_3_p_0(mercury__getopt__TypeInfo_46_46, mercury__getopt__HeadVar__1_1, ((MR_Box) (mercury__getopt__V_52_52)), ((MR_Box) (mercury__getopt__V_43_43)));
#line 263 "getopt.m"
                            return;
                          }
#line 263 "getopt.m"
                        }
#line 263 "getopt.m"
                      else
#line 4246 "getopt.c"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "getopt.m"
              }
#line 263 "getopt.m"
            else
#line 263 "getopt.m"
              {
#line 263 "getopt.m"
                MR_String mercury__getopt__V_53_53 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));

#line 263 "getopt.m"
                if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4259 "getopt.c"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "getopt.m"
                else
#line 263 "getopt.m"
                  if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4265 "getopt.c"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "getopt.m"
                  else
#line 263 "getopt.m"
                    if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4271 "getopt.c"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "getopt.m"
                    else
#line 263 "getopt.m"
                      if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4277 "getopt.c"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "getopt.m"
                      else
#line 263 "getopt.m"
                        {
#line 263 "getopt.m"
                          MR_String mercury__getopt__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
#line 263 "getopt.m"
                          MR_Integer mercury__getopt__Res_7_65;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__getopt____Compare____special_data_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt__V_53_53 ;
	S2 =  mercury__getopt__V_32_32 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 4303 "getopt.c"

		;}
#undef MR_PROC_LABEL
	 mercury__getopt__Res_7_65  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                          mercury__getopt__succeeded = (mercury__getopt__Res_7_65 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                          if (mercury__getopt__succeeded)
#line 104 "private_builtin.opt"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                          else
#line 110 "private_builtin.opt"
                            {
#line 107 "private_builtin.opt"
                              mercury__getopt__succeeded = (mercury__getopt__Res_7_65 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                              if (mercury__getopt__succeeded)
#line 109 "private_builtin.opt"
                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                              else
#line 111 "private_builtin.opt"
                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                            }
#line 263 "getopt.m"
                        }
#line 263 "getopt.m"
              }
#line 263 "getopt.m"
  }
#line 263 "getopt.m"
}

#line 263 "getopt.m"
MR_bool MR_CALL 
mercury__getopt____Unify____special_data_0_0(
#line 263 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 263 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2)
#line 263 "getopt.m"
{
#line 263 "getopt.m"
  {
#line 263 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 263 "getopt.m"
    MR_Integer mercury__getopt__CastX_13 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 263 "getopt.m"
    MR_Integer mercury__getopt__CastY_14 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 263 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_13 == mercury__getopt__CastY_14);
#line 263 "getopt.m"
    if (mercury__getopt__succeeded)
#line 263 "getopt.m"
      mercury__getopt__succeeded = MR_TRUE;
#line 263 "getopt.m"
    else
#line 263 "getopt.m"
      if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 263 "getopt.m"
        {
#line 263 "getopt.m"
          MR_Integer mercury__getopt__CastX_3 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 263 "getopt.m"
          MR_Integer mercury__getopt__CastY_4 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 263 "getopt.m"
          mercury__getopt__succeeded = (mercury__getopt__CastY_4 == mercury__getopt__CastX_3);
#line 263 "getopt.m"
        }
#line 263 "getopt.m"
      else
#line 263 "getopt.m"
        if (((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 263 "getopt.m"
          {
#line 263 "getopt.m"
            MR_Word mercury__getopt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 263 "getopt.m"
            MR_Word mercury__getopt__V_6_6;

#line 263 "getopt.m"
            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 263 "getopt.m"
            if (mercury__getopt__succeeded)
#line 263 "getopt.m"
              {
#line 263 "getopt.m"
                mercury__getopt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 4399 "getopt.c"
                mercury__getopt__succeeded = (mercury__getopt__V_5_5 == mercury__getopt__V_6_6);
#line 263 "getopt.m"
              }
#line 263 "getopt.m"
          }
#line 263 "getopt.m"
        else
#line 263 "getopt.m"
          if (((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 263 "getopt.m"
            {
#line 263 "getopt.m"
              MR_Integer mercury__getopt__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 263 "getopt.m"
              MR_Integer mercury__getopt__V_8_8;

#line 263 "getopt.m"
              mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 263 "getopt.m"
              if (mercury__getopt__succeeded)
#line 263 "getopt.m"
                {
#line 263 "getopt.m"
                  mercury__getopt__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 4424 "getopt.c"
                  mercury__getopt__succeeded = (mercury__getopt__V_7_7 == mercury__getopt__V_8_8);
#line 263 "getopt.m"
                }
#line 263 "getopt.m"
            }
#line 263 "getopt.m"
          else
#line 263 "getopt.m"
            if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 263 "getopt.m"
              {
#line 263 "getopt.m"
                MR_Word mercury__getopt__TypeInfo_15_15;
#line 263 "getopt.m"
                MR_Word mercury__getopt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
#line 263 "getopt.m"
                MR_Word mercury__getopt__V_12_12;

#line 263 "getopt.m"
                mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 263 "getopt.m"
                if (mercury__getopt__succeeded)
#line 263 "getopt.m"
                  {
#line 263 "getopt.m"
                    mercury__getopt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 4451 "getopt.c"
                    mercury__getopt__TypeInfo_15_15 = (MR_Word) &mercury__getopt_scalar_common_1[1];
#line 4453 "getopt.c"
                    {
#line 4455 "getopt.c"
                      return mercury__getopt__succeeded = mercury__builtin__unify_2_p_0(mercury__getopt__TypeInfo_15_15, ((MR_Box) (mercury__getopt__V_11_11)), ((MR_Box) (mercury__getopt__V_12_12)));
                    }
#line 263 "getopt.m"
                  }
#line 263 "getopt.m"
              }
#line 263 "getopt.m"
            else
#line 263 "getopt.m"
              {
#line 263 "getopt.m"
                MR_String mercury__getopt__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
#line 263 "getopt.m"
                MR_String mercury__getopt__V_10_10;

#line 263 "getopt.m"
                mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 263 "getopt.m"
                if (mercury__getopt__succeeded)
#line 263 "getopt.m"
                  {
#line 263 "getopt.m"
                    mercury__getopt__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 4479 "getopt.c"
                    mercury__getopt__succeeded = (strcmp(mercury__getopt__V_9_9, mercury__getopt__V_10_10) == 0);
#line 263 "getopt.m"
                  }
#line 263 "getopt.m"
              }
#line 263 "getopt.m"
    return mercury__getopt__succeeded;
#line 263 "getopt.m"
  }
#line 263 "getopt.m"
}

#line 270 "getopt.m"
void MR_CALL 
mercury__getopt____Compare____option_table_1_0(
#line 270 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_6,
#line 270 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__1_1,
#line 270 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2,
#line 270 "getopt.m"
  MR_Word mercury__getopt__HeadVar__3_3)
#line 270 "getopt.m"
{
#line 270 "getopt.m"
  {
#line 270 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 270 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_7_7 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 270 "getopt.m"
    MR_Word mercury__getopt__Cast_HeadVar1_4 = mercury__getopt__HeadVar__2_2;
#line 270 "getopt.m"
    MR_Word mercury__getopt__Cast_HeadVar2_5 = mercury__getopt__HeadVar__3_3;

#line 270 "getopt.m"
    {
#line 270 "getopt.m"
      mercury__tree234____Compare____tree234_2_0(mercury__getopt__TypeInfo_for_OptionType_6, mercury__getopt__TypeCtorInfo_7_7, mercury__getopt__HeadVar__1_1, mercury__getopt__Cast_HeadVar1_4, mercury__getopt__Cast_HeadVar2_5);
#line 270 "getopt.m"
      return;
    }
#line 270 "getopt.m"
  }
#line 270 "getopt.m"
}

#line 270 "getopt.m"
MR_bool MR_CALL 
mercury__getopt____Unify____option_table_1_0(
#line 270 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_5,
#line 270 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 270 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2)
#line 270 "getopt.m"
{
#line 270 "getopt.m"
  {
#line 270 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 270 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_6_6 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 270 "getopt.m"
    MR_Word mercury__getopt__Cast_HeadVar1_3 = mercury__getopt__HeadVar__1_1;
#line 270 "getopt.m"
    MR_Word mercury__getopt__Cast_HeadVar2_4 = mercury__getopt__HeadVar__2_2;

#line 270 "getopt.m"
    {
#line 270 "getopt.m"
      return mercury__getopt__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__getopt__TypeInfo_for_OptionType_5, mercury__getopt__TypeCtorInfo_6_6, mercury__getopt__Cast_HeadVar1_3, mercury__getopt__Cast_HeadVar2_4);
    }
#line 270 "getopt.m"
    return mercury__getopt__succeeded;
#line 270 "getopt.m"
  }
#line 270 "getopt.m"
}

#line 205 "getopt.m"
void MR_CALL 
mercury__getopt____Compare____option_ops_track_1_0(
#line 205 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_14,
#line 205 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__1_1,
#line 205 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2,
#line 205 "getopt.m"
  MR_Word mercury__getopt__HeadVar__3_3)
#line 205 "getopt.m"
{
#line 205 "getopt.m"
  {
#line 205 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 205 "getopt.m"
    MR_Integer mercury__getopt__CastX_12 = (MR_Integer) mercury__getopt__HeadVar__2_2;
#line 205 "getopt.m"
    MR_Integer mercury__getopt__CastY_13 = (MR_Integer) mercury__getopt__HeadVar__3_3;

#line 205 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_12 == mercury__getopt__CastY_13);
#line 205 "getopt.m"
    if (mercury__getopt__succeeded)
#line 4588 "getopt.c"
      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 205 "getopt.m"
    else
#line 205 "getopt.m"
      {
#line 205 "getopt.m"
        MR_Word mercury__getopt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 205 "getopt.m"
        MR_Word mercury__getopt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 205 "getopt.m"
        MR_Word mercury__getopt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
#line 205 "getopt.m"
        MR_Word mercury__getopt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
#line 205 "getopt.m"
        MR_Word mercury__getopt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
#line 205 "getopt.m"
        MR_Word mercury__getopt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 2)));
#line 205 "getopt.m"
        MR_Word mercury__getopt__V_10_10;

#line 205 "getopt.m"
        {
#line 205 "getopt.m"
          mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__V_10_10, (MR_Word) mercury__getopt__V_4_4, (MR_Word) mercury__getopt__V_7_7);
        }
#line 4614 "getopt.c"
        mercury__getopt__succeeded = (mercury__getopt__V_10_10 == (MR_Integer) 0);
#line 205 "getopt.m"
        mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 205 "getopt.m"
        if (mercury__getopt__succeeded)
#line 205 "getopt.m"
          *mercury__getopt__HeadVar__1_1 = mercury__getopt__V_10_10;
#line 205 "getopt.m"
        else
#line 205 "getopt.m"
          {
#line 205 "getopt.m"
            MR_Word mercury__getopt__V_11_11;

#line 205 "getopt.m"
            {
#line 205 "getopt.m"
              mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__V_11_11, (MR_Word) mercury__getopt__V_5_5, (MR_Word) mercury__getopt__V_8_8);
            }
#line 4634 "getopt.c"
            mercury__getopt__succeeded = (mercury__getopt__V_11_11 == (MR_Integer) 0);
#line 205 "getopt.m"
            mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 205 "getopt.m"
            if (mercury__getopt__succeeded)
#line 205 "getopt.m"
              *mercury__getopt__HeadVar__1_1 = mercury__getopt__V_11_11;
#line 205 "getopt.m"
            else
#line 205 "getopt.m"
              {
#line 205 "getopt.m"
                mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt__HeadVar__1_1, (MR_Word) mercury__getopt__V_6_6, (MR_Word) mercury__getopt__V_9_9);
#line 205 "getopt.m"
                return;
              }
#line 205 "getopt.m"
          }
#line 205 "getopt.m"
      }
#line 205 "getopt.m"
  }
#line 205 "getopt.m"
}

#line 205 "getopt.m"
MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_track_1_0(
#line 205 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_11,
#line 205 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 205 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2)
#line 205 "getopt.m"
{
#line 205 "getopt.m"
  {
#line 205 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 205 "getopt.m"
    MR_Integer mercury__getopt__CastX_9 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 205 "getopt.m"
    MR_Integer mercury__getopt__CastY_10 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 205 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_9 == mercury__getopt__CastY_10);
#line 205 "getopt.m"
    if (mercury__getopt__succeeded)
#line 205 "getopt.m"
      mercury__getopt__succeeded = MR_TRUE;
#line 205 "getopt.m"
    else
#line 205 "getopt.m"
      {
#line 205 "getopt.m"
        MR_Word mercury__getopt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 205 "getopt.m"
        MR_Word mercury__getopt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
#line 205 "getopt.m"
        MR_Word mercury__getopt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 2)));
#line 205 "getopt.m"
        MR_Word mercury__getopt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 205 "getopt.m"
        MR_Word mercury__getopt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 205 "getopt.m"
        MR_Word mercury__getopt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));

#line 4703 "getopt.c"
        {
#line 4705 "getopt.c"
          mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_3_3, (MR_Word) mercury__getopt__V_6_6);
        }
#line 205 "getopt.m"
        if (mercury__getopt__succeeded)
#line 205 "getopt.m"
          {
#line 4712 "getopt.c"
            {
#line 4714 "getopt.c"
              mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_4_4, (MR_Word) mercury__getopt__V_7_7);
            }
#line 205 "getopt.m"
            if (mercury__getopt__succeeded)
#line 4719 "getopt.c"
              {
#line 4721 "getopt.c"
                return mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_5_5, (MR_Word) mercury__getopt__V_8_8);
              }
#line 205 "getopt.m"
          }
#line 205 "getopt.m"
      }
#line 205 "getopt.m"
    return mercury__getopt__succeeded;
#line 205 "getopt.m"
  }
#line 205 "getopt.m"
}

#line 376 "getopt.m"
void MR_CALL 
mercury__getopt____Compare____option_ops_special_1_0(
#line 376 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_18,
#line 376 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__1_1,
#line 376 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2,
#line 376 "getopt.m"
  MR_Word mercury__getopt__HeadVar__3_3)
#line 376 "getopt.m"
{
#line 376 "getopt.m"
  {
#line 376 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 376 "getopt.m"
    MR_Integer mercury__getopt__CastX_16 = (MR_Integer) mercury__getopt__HeadVar__2_2;
#line 376 "getopt.m"
    MR_Integer mercury__getopt__CastY_17 = (MR_Integer) mercury__getopt__HeadVar__3_3;

#line 376 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_16 == mercury__getopt__CastY_17);
#line 376 "getopt.m"
    if (mercury__getopt__succeeded)
#line 4761 "getopt.c"
      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 376 "getopt.m"
    else
#line 376 "getopt.m"
      if ((mercury__getopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 376 "getopt.m"
        if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 376 "getopt.m"
          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 376 "getopt.m"
        else
#line 376 "getopt.m"
          if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4775 "getopt.c"
            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 376 "getopt.m"
          else
#line 4779 "getopt.c"
            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 376 "getopt.m"
      else
#line 376 "getopt.m"
        if (((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 376 "getopt.m"
          {
#line 376 "getopt.m"
            MR_Word mercury__getopt__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

#line 376 "getopt.m"
            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4792 "getopt.c"
              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 376 "getopt.m"
            else
#line 376 "getopt.m"
              if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 376 "getopt.m"
                {
#line 376 "getopt.m"
                  MR_Word mercury__getopt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));

#line 376 "getopt.m"
                  {
#line 376 "getopt.m"
                    mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt__HeadVar__1_1, (MR_Word) mercury__getopt__V_39_39, (MR_Word) mercury__getopt__V_8_8);
#line 376 "getopt.m"
                    return;
                  }
#line 376 "getopt.m"
                }
#line 376 "getopt.m"
              else
#line 4814 "getopt.c"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 376 "getopt.m"
          }
#line 376 "getopt.m"
        else
#line 376 "getopt.m"
          {
#line 376 "getopt.m"
            MR_Word mercury__getopt__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

#line 376 "getopt.m"
            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4827 "getopt.c"
              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 376 "getopt.m"
            else
#line 376 "getopt.m"
              if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4833 "getopt.c"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 376 "getopt.m"
              else
#line 376 "getopt.m"
                {
#line 376 "getopt.m"
                  MR_Word mercury__getopt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));

#line 376 "getopt.m"
                  {
#line 376 "getopt.m"
                    mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt__HeadVar__1_1, (MR_Word) mercury__getopt__V_40_40, (MR_Word) mercury__getopt__V_15_15);
#line 376 "getopt.m"
                    return;
                  }
#line 376 "getopt.m"
                }
#line 376 "getopt.m"
          }
#line 376 "getopt.m"
  }
#line 376 "getopt.m"
}

#line 376 "getopt.m"
MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_special_1_0(
#line 376 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_11,
#line 376 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 376 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2)
#line 376 "getopt.m"
{
#line 376 "getopt.m"
  {
#line 376 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 376 "getopt.m"
    MR_Integer mercury__getopt__CastX_9 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 376 "getopt.m"
    MR_Integer mercury__getopt__CastY_10 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 376 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_9 == mercury__getopt__CastY_10);
#line 376 "getopt.m"
    if (mercury__getopt__succeeded)
#line 376 "getopt.m"
      mercury__getopt__succeeded = MR_TRUE;
#line 376 "getopt.m"
    else
#line 376 "getopt.m"
      if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 376 "getopt.m"
        {
#line 376 "getopt.m"
          MR_Integer mercury__getopt__CastX_3 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 376 "getopt.m"
          MR_Integer mercury__getopt__CastY_4 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 376 "getopt.m"
          mercury__getopt__succeeded = (mercury__getopt__CastY_4 == mercury__getopt__CastX_3);
#line 376 "getopt.m"
        }
#line 376 "getopt.m"
      else
#line 376 "getopt.m"
        if (((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 376 "getopt.m"
          {
#line 376 "getopt.m"
            MR_Word mercury__getopt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 376 "getopt.m"
            MR_Word mercury__getopt__V_6_6;

#line 376 "getopt.m"
            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 376 "getopt.m"
            if (mercury__getopt__succeeded)
#line 376 "getopt.m"
              {
#line 376 "getopt.m"
                mercury__getopt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 4918 "getopt.c"
                {
#line 4920 "getopt.c"
                  return mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_5_5, (MR_Word) mercury__getopt__V_6_6);
                }
#line 376 "getopt.m"
              }
#line 376 "getopt.m"
          }
#line 376 "getopt.m"
        else
#line 376 "getopt.m"
          {
#line 376 "getopt.m"
            MR_Word mercury__getopt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 376 "getopt.m"
            MR_Word mercury__getopt__V_8_8;

#line 376 "getopt.m"
            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 376 "getopt.m"
            if (mercury__getopt__succeeded)
#line 376 "getopt.m"
              {
#line 376 "getopt.m"
                mercury__getopt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 4944 "getopt.c"
                {
#line 4946 "getopt.c"
                  return mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_7_7, (MR_Word) mercury__getopt__V_8_8);
                }
#line 376 "getopt.m"
              }
#line 376 "getopt.m"
          }
#line 376 "getopt.m"
    return mercury__getopt__succeeded;
#line 376 "getopt.m"
  }
#line 376 "getopt.m"
}

#line 390 "getopt.m"
void MR_CALL 
mercury__getopt____Compare____option_ops_internal_1_0(
#line 390 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_14,
#line 390 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__1_1,
#line 390 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2,
#line 390 "getopt.m"
  MR_Word mercury__getopt__HeadVar__3_3)
#line 390 "getopt.m"
{
#line 390 "getopt.m"
  {
#line 390 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 390 "getopt.m"
    MR_Integer mercury__getopt__CastX_12 = (MR_Integer) mercury__getopt__HeadVar__2_2;
#line 390 "getopt.m"
    MR_Integer mercury__getopt__CastY_13 = (MR_Integer) mercury__getopt__HeadVar__3_3;

#line 390 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_12 == mercury__getopt__CastY_13);
#line 390 "getopt.m"
    if (mercury__getopt__succeeded)
#line 4986 "getopt.c"
      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 390 "getopt.m"
    else
#line 390 "getopt.m"
      {
#line 390 "getopt.m"
        MR_Word mercury__getopt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 390 "getopt.m"
        MR_Word mercury__getopt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 390 "getopt.m"
        MR_Word mercury__getopt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
#line 390 "getopt.m"
        MR_Word mercury__getopt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
#line 390 "getopt.m"
        MR_Word mercury__getopt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
#line 390 "getopt.m"
        MR_Word mercury__getopt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 2)));
#line 390 "getopt.m"
        MR_Word mercury__getopt__V_10_10;

#line 390 "getopt.m"
        {
#line 390 "getopt.m"
          mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__V_10_10, (MR_Word) mercury__getopt__V_4_4, (MR_Word) mercury__getopt__V_7_7);
        }
#line 5012 "getopt.c"
        mercury__getopt__succeeded = (mercury__getopt__V_10_10 == (MR_Integer) 0);
#line 390 "getopt.m"
        mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 390 "getopt.m"
        if (mercury__getopt__succeeded)
#line 390 "getopt.m"
          *mercury__getopt__HeadVar__1_1 = mercury__getopt__V_10_10;
#line 390 "getopt.m"
        else
#line 390 "getopt.m"
          {
#line 390 "getopt.m"
            MR_Word mercury__getopt__V_11_11;

#line 390 "getopt.m"
            {
#line 390 "getopt.m"
              mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__V_11_11, (MR_Word) mercury__getopt__V_5_5, (MR_Word) mercury__getopt__V_8_8);
            }
#line 5032 "getopt.c"
            mercury__getopt__succeeded = (mercury__getopt__V_11_11 == (MR_Integer) 0);
#line 390 "getopt.m"
            mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 390 "getopt.m"
            if (mercury__getopt__succeeded)
#line 390 "getopt.m"
              *mercury__getopt__HeadVar__1_1 = mercury__getopt__V_11_11;
#line 390 "getopt.m"
            else
#line 390 "getopt.m"
              {
#line 390 "getopt.m"
                mercury__getopt____Compare____option_ops_special_1_0(mercury__getopt__TypeInfo_for_OptionType_14, mercury__getopt__HeadVar__1_1, mercury__getopt__V_6_6, mercury__getopt__V_9_9);
#line 390 "getopt.m"
                return;
              }
#line 390 "getopt.m"
          }
#line 390 "getopt.m"
      }
#line 390 "getopt.m"
  }
#line 390 "getopt.m"
}

#line 390 "getopt.m"
MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_internal_1_0(
#line 390 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_11,
#line 390 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 390 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2)
#line 390 "getopt.m"
{
#line 390 "getopt.m"
  {
#line 390 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 390 "getopt.m"
    MR_Integer mercury__getopt__CastX_9 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 390 "getopt.m"
    MR_Integer mercury__getopt__CastY_10 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 390 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_9 == mercury__getopt__CastY_10);
#line 390 "getopt.m"
    if (mercury__getopt__succeeded)
#line 390 "getopt.m"
      mercury__getopt__succeeded = MR_TRUE;
#line 390 "getopt.m"
    else
#line 390 "getopt.m"
      {
#line 390 "getopt.m"
        MR_Word mercury__getopt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 390 "getopt.m"
        MR_Word mercury__getopt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
#line 390 "getopt.m"
        MR_Word mercury__getopt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 2)));
#line 390 "getopt.m"
        MR_Word mercury__getopt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 390 "getopt.m"
        MR_Word mercury__getopt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 390 "getopt.m"
        MR_Word mercury__getopt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));

#line 5101 "getopt.c"
        {
#line 5103 "getopt.c"
          mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_3_3, (MR_Word) mercury__getopt__V_6_6);
        }
#line 390 "getopt.m"
        if (mercury__getopt__succeeded)
#line 390 "getopt.m"
          {
#line 5110 "getopt.c"
            {
#line 5112 "getopt.c"
              mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_4_4, (MR_Word) mercury__getopt__V_7_7);
            }
#line 390 "getopt.m"
            if (mercury__getopt__succeeded)
#line 5117 "getopt.c"
              {
#line 5119 "getopt.c"
                return mercury__getopt__succeeded = mercury__getopt____Unify____option_ops_special_1_0(mercury__getopt__TypeInfo_for_OptionType_11, mercury__getopt__V_5_5, mercury__getopt__V_8_8);
              }
#line 390 "getopt.m"
          }
#line 390 "getopt.m"
      }
#line 390 "getopt.m"
    return mercury__getopt__succeeded;
#line 390 "getopt.m"
  }
#line 390 "getopt.m"
}

#line 177 "getopt.m"
void MR_CALL 
mercury__getopt____Compare____option_ops_1_0(
#line 177 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_128,
#line 177 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__1_1,
#line 177 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2,
#line 177 "getopt.m"
  MR_Word mercury__getopt__HeadVar__3_3)
#line 177 "getopt.m"
{
#line 177 "getopt.m"
  {
#line 177 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 177 "getopt.m"
    MR_Integer mercury__getopt__CastX_126 = (MR_Integer) mercury__getopt__HeadVar__2_2;
#line 177 "getopt.m"
    MR_Integer mercury__getopt__CastY_127 = (MR_Integer) mercury__getopt__HeadVar__3_3;

#line 177 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_126 == mercury__getopt__CastY_127);
#line 177 "getopt.m"
    if (mercury__getopt__succeeded)
#line 5159 "getopt.c"
      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 177 "getopt.m"
    else
#line 177 "getopt.m"
      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 177 "getopt.m"
        {
#line 177 "getopt.m"
          MR_Word mercury__getopt__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
#line 177 "getopt.m"
          MR_Word mercury__getopt__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 177 "getopt.m"
          MR_Word mercury__getopt__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

#line 177 "getopt.m"
          if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 177 "getopt.m"
            {
#line 177 "getopt.m"
              MR_Word mercury__getopt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
#line 177 "getopt.m"
              MR_Word mercury__getopt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
#line 177 "getopt.m"
              MR_Word mercury__getopt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 2)));
#line 177 "getopt.m"
              MR_Word mercury__getopt__V_10_10;

#line 177 "getopt.m"
              {
#line 177 "getopt.m"
                mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__V_10_10, (MR_Word) mercury__getopt__V_197_197, (MR_Word) mercury__getopt__V_7_7);
              }
#line 5192 "getopt.c"
              mercury__getopt__succeeded = (mercury__getopt__V_10_10 == (MR_Integer) 0);
#line 177 "getopt.m"
              mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 177 "getopt.m"
              if (mercury__getopt__succeeded)
#line 177 "getopt.m"
                *mercury__getopt__HeadVar__1_1 = mercury__getopt__V_10_10;
#line 177 "getopt.m"
              else
#line 177 "getopt.m"
                {
#line 177 "getopt.m"
                  MR_Word mercury__getopt__V_11_11;

#line 177 "getopt.m"
                  {
#line 177 "getopt.m"
                    mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__V_11_11, (MR_Word) mercury__getopt__V_196_196, (MR_Word) mercury__getopt__V_8_8);
                  }
#line 5212 "getopt.c"
                  mercury__getopt__succeeded = (mercury__getopt__V_11_11 == (MR_Integer) 0);
#line 177 "getopt.m"
                  mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 177 "getopt.m"
                  if (mercury__getopt__succeeded)
#line 177 "getopt.m"
                    *mercury__getopt__HeadVar__1_1 = mercury__getopt__V_11_11;
#line 177 "getopt.m"
                  else
#line 177 "getopt.m"
                    {
#line 177 "getopt.m"
                      mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt__HeadVar__1_1, (MR_Word) mercury__getopt__V_195_195, (MR_Word) mercury__getopt__V_9_9);
#line 177 "getopt.m"
                      return;
                    }
#line 177 "getopt.m"
                }
#line 177 "getopt.m"
            }
#line 177 "getopt.m"
          else
#line 177 "getopt.m"
            if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5237 "getopt.c"
              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "getopt.m"
            else
#line 177 "getopt.m"
              if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5243 "getopt.c"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "getopt.m"
              else
#line 5247 "getopt.c"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "getopt.m"
        }
#line 177 "getopt.m"
      else
#line 177 "getopt.m"
        if (((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 177 "getopt.m"
          {
#line 177 "getopt.m"
            MR_Word mercury__getopt__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 3)));
#line 177 "getopt.m"
            MR_Word mercury__getopt__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
#line 177 "getopt.m"
            MR_Word mercury__getopt__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 177 "getopt.m"
            MR_Word mercury__getopt__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

#line 177 "getopt.m"
            if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5268 "getopt.c"
              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "getopt.m"
            else
#line 177 "getopt.m"
              if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 177 "getopt.m"
                {
#line 177 "getopt.m"
                  MR_Word mercury__getopt__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
#line 177 "getopt.m"
                  MR_Word mercury__getopt__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
#line 177 "getopt.m"
                  MR_Word mercury__getopt__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 2)));
#line 177 "getopt.m"
                  MR_Word mercury__getopt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 3)));
#line 177 "getopt.m"
                  MR_Word mercury__getopt__V_47_47;

#line 177 "getopt.m"
                  {
#line 177 "getopt.m"
                    mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__V_47_47, (MR_Word) mercury__getopt__V_201_201, (MR_Word) mercury__getopt__V_43_43);
                  }
#line 5292 "getopt.c"
                  mercury__getopt__succeeded = (mercury__getopt__V_47_47 == (MR_Integer) 0);
#line 177 "getopt.m"
                  mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 177 "getopt.m"
                  if (mercury__getopt__succeeded)
#line 177 "getopt.m"
                    *mercury__getopt__HeadVar__1_1 = mercury__getopt__V_47_47;
#line 177 "getopt.m"
                  else
#line 177 "getopt.m"
                    {
#line 177 "getopt.m"
                      MR_Word mercury__getopt__V_48_48;

#line 177 "getopt.m"
                      {
#line 177 "getopt.m"
                        mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__V_48_48, (MR_Word) mercury__getopt__V_200_200, (MR_Word) mercury__getopt__V_44_44);
                      }
#line 5312 "getopt.c"
                      mercury__getopt__succeeded = (mercury__getopt__V_48_48 == (MR_Integer) 0);
#line 177 "getopt.m"
                      mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 177 "getopt.m"
                      if (mercury__getopt__succeeded)
#line 177 "getopt.m"
                        *mercury__getopt__HeadVar__1_1 = mercury__getopt__V_48_48;
#line 177 "getopt.m"
                      else
#line 177 "getopt.m"
                        {
#line 177 "getopt.m"
                          MR_Word mercury__getopt__V_49_49;

#line 177 "getopt.m"
                          {
#line 177 "getopt.m"
                            mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__V_49_49, (MR_Word) mercury__getopt__V_199_199, (MR_Word) mercury__getopt__V_45_45);
                          }
#line 5332 "getopt.c"
                          mercury__getopt__succeeded = (mercury__getopt__V_49_49 == (MR_Integer) 0);
#line 177 "getopt.m"
                          mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 177 "getopt.m"
                          if (mercury__getopt__succeeded)
#line 177 "getopt.m"
                            *mercury__getopt__HeadVar__1_1 = mercury__getopt__V_49_49;
#line 177 "getopt.m"
                          else
#line 177 "getopt.m"
                            {
#line 177 "getopt.m"
                              mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt__HeadVar__1_1, (MR_Word) mercury__getopt__V_198_198, (MR_Word) mercury__getopt__V_46_46);
#line 177 "getopt.m"
                              return;
                            }
#line 177 "getopt.m"
                        }
#line 177 "getopt.m"
                    }
#line 177 "getopt.m"
                }
#line 177 "getopt.m"
              else
#line 177 "getopt.m"
                if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5359 "getopt.c"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "getopt.m"
                else
#line 5363 "getopt.c"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "getopt.m"
          }
#line 177 "getopt.m"
        else
#line 177 "getopt.m"
          if (((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 177 "getopt.m"
            {
#line 177 "getopt.m"
              MR_Word mercury__getopt__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
#line 177 "getopt.m"
              MR_Word mercury__getopt__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 177 "getopt.m"
              MR_Word mercury__getopt__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

#line 177 "getopt.m"
              if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5382 "getopt.c"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "getopt.m"
              else
#line 177 "getopt.m"
                if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5388 "getopt.c"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "getopt.m"
                else
#line 177 "getopt.m"
                  if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 177 "getopt.m"
                    {
#line 177 "getopt.m"
                      MR_Word mercury__getopt__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
#line 177 "getopt.m"
                      MR_Word mercury__getopt__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
#line 177 "getopt.m"
                      MR_Word mercury__getopt__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__3_3, (MR_Integer) 2)));
#line 177 "getopt.m"
                      MR_Word mercury__getopt__V_84_84;

#line 177 "getopt.m"
                      {
#line 177 "getopt.m"
                        mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__V_84_84, (MR_Word) mercury__getopt__V_204_204, (MR_Word) mercury__getopt__V_81_81);
                      }
#line 5410 "getopt.c"
                      mercury__getopt__succeeded = (mercury__getopt__V_84_84 == (MR_Integer) 0);
#line 177 "getopt.m"
                      mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 177 "getopt.m"
                      if (mercury__getopt__succeeded)
#line 177 "getopt.m"
                        *mercury__getopt__HeadVar__1_1 = mercury__getopt__V_84_84;
#line 177 "getopt.m"
                      else
#line 177 "getopt.m"
                        {
#line 177 "getopt.m"
                          MR_Word mercury__getopt__V_85_85;

#line 177 "getopt.m"
                          {
#line 177 "getopt.m"
                            mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__V_85_85, (MR_Word) mercury__getopt__V_203_203, (MR_Word) mercury__getopt__V_82_82);
                          }
#line 5430 "getopt.c"
                          mercury__getopt__succeeded = (mercury__getopt__V_85_85 == (MR_Integer) 0);
#line 177 "getopt.m"
                          mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 177 "getopt.m"
                          if (mercury__getopt__succeeded)
#line 177 "getopt.m"
                            *mercury__getopt__HeadVar__1_1 = mercury__getopt__V_85_85;
#line 177 "getopt.m"
                          else
#line 177 "getopt.m"
                            {
#line 177 "getopt.m"
                              mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt__HeadVar__1_1, (MR_Word) mercury__getopt__V_202_202, (MR_Word) mercury__getopt__V_83_83);
#line 177 "getopt.m"
                              return;
                            }
#line 177 "getopt.m"
                        }
#line 177 "getopt.m"
                    }
#line 177 "getopt.m"
                  else
#line 5453 "getopt.c"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "getopt.m"
            }
#line 177 "getopt.m"
          else
#line 177 "getopt.m"
            {
#line 177 "getopt.m"
              MR_Word mercury__getopt__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 3)));
#line 177 "getopt.m"
              MR_Word mercury__getopt__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
#line 177 "getopt.m"
              MR_Word mercury__getopt__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 177 "getopt.m"
              MR_Word mercury__getopt__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

#line 177 "getopt.m"
              if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5472 "getopt.c"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "getopt.m"
              else
#line 177 "getopt.m"
                if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5478 "getopt.c"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "getopt.m"
                else
#line 177 "getopt.m"
                  if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5484 "getopt.c"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "getopt.m"
                  else
#line 177 "getopt.m"
                    {
#line 177 "getopt.m"
                      MR_Word mercury__getopt__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
#line 177 "getopt.m"
                      MR_Word mercury__getopt__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
#line 177 "getopt.m"
                      MR_Word mercury__getopt__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 2)));
#line 177 "getopt.m"
                      MR_Word mercury__getopt__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 3)));
#line 177 "getopt.m"
                      MR_Word mercury__getopt__V_123_123;

#line 177 "getopt.m"
                      {
#line 177 "getopt.m"
                        mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__V_123_123, (MR_Word) mercury__getopt__V_208_208, (MR_Word) mercury__getopt__V_119_119);
                      }
#line 5506 "getopt.c"
                      mercury__getopt__succeeded = (mercury__getopt__V_123_123 == (MR_Integer) 0);
#line 177 "getopt.m"
                      mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 177 "getopt.m"
                      if (mercury__getopt__succeeded)
#line 177 "getopt.m"
                        *mercury__getopt__HeadVar__1_1 = mercury__getopt__V_123_123;
#line 177 "getopt.m"
                      else
#line 177 "getopt.m"
                        {
#line 177 "getopt.m"
                          MR_Word mercury__getopt__V_124_124;

#line 177 "getopt.m"
                          {
#line 177 "getopt.m"
                            mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__V_124_124, (MR_Word) mercury__getopt__V_207_207, (MR_Word) mercury__getopt__V_120_120);
                          }
#line 5526 "getopt.c"
                          mercury__getopt__succeeded = (mercury__getopt__V_124_124 == (MR_Integer) 0);
#line 177 "getopt.m"
                          mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 177 "getopt.m"
                          if (mercury__getopt__succeeded)
#line 177 "getopt.m"
                            *mercury__getopt__HeadVar__1_1 = mercury__getopt__V_124_124;
#line 177 "getopt.m"
                          else
#line 177 "getopt.m"
                            {
#line 177 "getopt.m"
                              MR_Word mercury__getopt__V_125_125;

#line 177 "getopt.m"
                              {
#line 177 "getopt.m"
                                mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__V_125_125, (MR_Word) mercury__getopt__V_206_206, (MR_Word) mercury__getopt__V_121_121);
                              }
#line 5546 "getopt.c"
                              mercury__getopt__succeeded = (mercury__getopt__V_125_125 == (MR_Integer) 0);
#line 177 "getopt.m"
                              mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 177 "getopt.m"
                              if (mercury__getopt__succeeded)
#line 177 "getopt.m"
                                *mercury__getopt__HeadVar__1_1 = mercury__getopt__V_125_125;
#line 177 "getopt.m"
                              else
#line 177 "getopt.m"
                                {
#line 177 "getopt.m"
                                  mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt__HeadVar__1_1, (MR_Word) mercury__getopt__V_205_205, (MR_Word) mercury__getopt__V_122_122);
#line 177 "getopt.m"
                                  return;
                                }
#line 177 "getopt.m"
                            }
#line 177 "getopt.m"
                        }
#line 177 "getopt.m"
                    }
#line 177 "getopt.m"
            }
#line 177 "getopt.m"
  }
#line 177 "getopt.m"
}

#line 177 "getopt.m"
MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_1_0(
#line 177 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_33,
#line 177 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 177 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2)
#line 177 "getopt.m"
{
#line 177 "getopt.m"
  {
#line 177 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 177 "getopt.m"
    MR_Integer mercury__getopt__CastX_31 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 177 "getopt.m"
    MR_Integer mercury__getopt__CastY_32 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 177 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_31 == mercury__getopt__CastY_32);
#line 177 "getopt.m"
    if (mercury__getopt__succeeded)
#line 177 "getopt.m"
      mercury__getopt__succeeded = MR_TRUE;
#line 177 "getopt.m"
    else
#line 177 "getopt.m"
      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 177 "getopt.m"
        {
#line 177 "getopt.m"
          MR_Word mercury__getopt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 177 "getopt.m"
          MR_Word mercury__getopt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
#line 177 "getopt.m"
          MR_Word mercury__getopt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 2)));
#line 177 "getopt.m"
          MR_Word mercury__getopt__V_6_6;
#line 177 "getopt.m"
          MR_Word mercury__getopt__V_7_7;
#line 177 "getopt.m"
          MR_Word mercury__getopt__V_8_8;

#line 177 "getopt.m"
          mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 177 "getopt.m"
          if (mercury__getopt__succeeded)
#line 177 "getopt.m"
            {
#line 177 "getopt.m"
              mercury__getopt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 177 "getopt.m"
              mercury__getopt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 177 "getopt.m"
              mercury__getopt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
#line 5633 "getopt.c"
              {
#line 5635 "getopt.c"
                mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_3_3, (MR_Word) mercury__getopt__V_6_6);
              }
#line 177 "getopt.m"
              if (mercury__getopt__succeeded)
#line 177 "getopt.m"
                {
#line 5642 "getopt.c"
                  {
#line 5644 "getopt.c"
                    mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_4_4, (MR_Word) mercury__getopt__V_7_7);
                  }
#line 177 "getopt.m"
                  if (mercury__getopt__succeeded)
#line 5649 "getopt.c"
                    {
#line 5651 "getopt.c"
                      return mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_5_5, (MR_Word) mercury__getopt__V_8_8);
                    }
#line 177 "getopt.m"
                }
#line 177 "getopt.m"
            }
#line 177 "getopt.m"
        }
#line 177 "getopt.m"
      else
#line 177 "getopt.m"
        if (((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 177 "getopt.m"
          {
#line 177 "getopt.m"
            MR_Word mercury__getopt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 177 "getopt.m"
            MR_Word mercury__getopt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
#line 177 "getopt.m"
            MR_Word mercury__getopt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 2)));
#line 177 "getopt.m"
            MR_Word mercury__getopt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 3)));
#line 177 "getopt.m"
            MR_Word mercury__getopt__V_13_13;
#line 177 "getopt.m"
            MR_Word mercury__getopt__V_14_14;
#line 177 "getopt.m"
            MR_Word mercury__getopt__V_15_15;
#line 177 "getopt.m"
            MR_Word mercury__getopt__V_16_16;

#line 177 "getopt.m"
            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 177 "getopt.m"
            if (mercury__getopt__succeeded)
#line 177 "getopt.m"
              {
#line 177 "getopt.m"
                mercury__getopt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 177 "getopt.m"
                mercury__getopt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 177 "getopt.m"
                mercury__getopt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
#line 177 "getopt.m"
                mercury__getopt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 3)));
#line 5697 "getopt.c"
                {
#line 5699 "getopt.c"
                  mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_9_9, (MR_Word) mercury__getopt__V_13_13);
                }
#line 177 "getopt.m"
                if (mercury__getopt__succeeded)
#line 177 "getopt.m"
                  {
#line 5706 "getopt.c"
                    {
#line 5708 "getopt.c"
                      mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_10_10, (MR_Word) mercury__getopt__V_14_14);
                    }
#line 177 "getopt.m"
                    if (mercury__getopt__succeeded)
#line 177 "getopt.m"
                      {
#line 5715 "getopt.c"
                        {
#line 5717 "getopt.c"
                          mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_11_11, (MR_Word) mercury__getopt__V_15_15);
                        }
#line 177 "getopt.m"
                        if (mercury__getopt__succeeded)
#line 5722 "getopt.c"
                          {
#line 5724 "getopt.c"
                            return mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_12_12, (MR_Word) mercury__getopt__V_16_16);
                          }
#line 177 "getopt.m"
                      }
#line 177 "getopt.m"
                  }
#line 177 "getopt.m"
              }
#line 177 "getopt.m"
          }
#line 177 "getopt.m"
        else
#line 177 "getopt.m"
          if (((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 177 "getopt.m"
            {
#line 177 "getopt.m"
              MR_Word mercury__getopt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 177 "getopt.m"
              MR_Word mercury__getopt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
#line 177 "getopt.m"
              MR_Word mercury__getopt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__1_1, (MR_Integer) 2)));
#line 177 "getopt.m"
              MR_Word mercury__getopt__V_20_20;
#line 177 "getopt.m"
              MR_Word mercury__getopt__V_21_21;
#line 177 "getopt.m"
              MR_Word mercury__getopt__V_22_22;

#line 177 "getopt.m"
              mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 177 "getopt.m"
              if (mercury__getopt__succeeded)
#line 177 "getopt.m"
                {
#line 177 "getopt.m"
                  mercury__getopt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 177 "getopt.m"
                  mercury__getopt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 177 "getopt.m"
                  mercury__getopt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
#line 5766 "getopt.c"
                  {
#line 5768 "getopt.c"
                    mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_17_17, (MR_Word) mercury__getopt__V_20_20);
                  }
#line 177 "getopt.m"
                  if (mercury__getopt__succeeded)
#line 177 "getopt.m"
                    {
#line 5775 "getopt.c"
                      {
#line 5777 "getopt.c"
                        mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_18_18, (MR_Word) mercury__getopt__V_21_21);
                      }
#line 177 "getopt.m"
                      if (mercury__getopt__succeeded)
#line 5782 "getopt.c"
                        {
#line 5784 "getopt.c"
                          return mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_19_19, (MR_Word) mercury__getopt__V_22_22);
                        }
#line 177 "getopt.m"
                    }
#line 177 "getopt.m"
                }
#line 177 "getopt.m"
            }
#line 177 "getopt.m"
          else
#line 177 "getopt.m"
            {
#line 177 "getopt.m"
              MR_Word mercury__getopt__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 177 "getopt.m"
              MR_Word mercury__getopt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
#line 177 "getopt.m"
              MR_Word mercury__getopt__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 2)));
#line 177 "getopt.m"
              MR_Word mercury__getopt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 3)));
#line 177 "getopt.m"
              MR_Word mercury__getopt__V_27_27;
#line 177 "getopt.m"
              MR_Word mercury__getopt__V_28_28;
#line 177 "getopt.m"
              MR_Word mercury__getopt__V_29_29;
#line 177 "getopt.m"
              MR_Word mercury__getopt__V_30_30;

#line 177 "getopt.m"
              mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 177 "getopt.m"
              if (mercury__getopt__succeeded)
#line 177 "getopt.m"
                {
#line 177 "getopt.m"
                  mercury__getopt__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 177 "getopt.m"
                  mercury__getopt__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 177 "getopt.m"
                  mercury__getopt__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
#line 177 "getopt.m"
                  mercury__getopt__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 3)));
#line 5828 "getopt.c"
                  {
#line 5830 "getopt.c"
                    mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_23_23, (MR_Word) mercury__getopt__V_27_27);
                  }
#line 177 "getopt.m"
                  if (mercury__getopt__succeeded)
#line 177 "getopt.m"
                    {
#line 5837 "getopt.c"
                      {
#line 5839 "getopt.c"
                        mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_24_24, (MR_Word) mercury__getopt__V_28_28);
                      }
#line 177 "getopt.m"
                      if (mercury__getopt__succeeded)
#line 177 "getopt.m"
                        {
#line 5846 "getopt.c"
                          {
#line 5848 "getopt.c"
                            mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_25_25, (MR_Word) mercury__getopt__V_29_29);
                          }
#line 177 "getopt.m"
                          if (mercury__getopt__succeeded)
#line 5853 "getopt.c"
                            {
#line 5855 "getopt.c"
                              return mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_26_26, (MR_Word) mercury__getopt__V_30_30);
                            }
#line 177 "getopt.m"
                        }
#line 177 "getopt.m"
                    }
#line 177 "getopt.m"
                }
#line 177 "getopt.m"
            }
#line 177 "getopt.m"
    return mercury__getopt__succeeded;
#line 177 "getopt.m"
  }
#line 177 "getopt.m"
}

#line 292 "getopt.m"
void MR_CALL 
mercury__getopt____Compare____option_error_reason_0_0(
#line 292 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__1_1,
#line 292 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2,
#line 292 "getopt.m"
  MR_Word mercury__getopt__HeadVar__3_3)
#line 292 "getopt.m"
{
#line 292 "getopt.m"
  {
#line 292 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 292 "getopt.m"
    MR_Integer mercury__getopt__CastX_52 = (MR_Integer) mercury__getopt__HeadVar__2_2;
#line 292 "getopt.m"
    MR_Integer mercury__getopt__CastY_53 = (MR_Integer) mercury__getopt__HeadVar__3_3;

#line 292 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_52 == mercury__getopt__CastY_53);
#line 292 "getopt.m"
    if (mercury__getopt__succeeded)
#line 5897 "getopt.c"
      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 292 "getopt.m"
    else
#line 292 "getopt.m"
      if ((mercury__getopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 292 "getopt.m"
        if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 292 "getopt.m"
          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 292 "getopt.m"
        else
#line 292 "getopt.m"
          if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 292 "getopt.m"
            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
          else
#line 292 "getopt.m"
            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 292 "getopt.m"
              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
            else
#line 292 "getopt.m"
              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 292 "getopt.m"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
              else
#line 292 "getopt.m"
                if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 292 "getopt.m"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                else
#line 292 "getopt.m"
                  if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5935 "getopt.c"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                  else
#line 292 "getopt.m"
                    if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5941 "getopt.c"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
                    else
#line 5945 "getopt.c"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
      else
#line 292 "getopt.m"
        if ((mercury__getopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 292 "getopt.m"
          if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 292 "getopt.m"
            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
          else
#line 292 "getopt.m"
            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 292 "getopt.m"
              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 292 "getopt.m"
            else
#line 292 "getopt.m"
              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 292 "getopt.m"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
              else
#line 292 "getopt.m"
                if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 292 "getopt.m"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
                else
#line 292 "getopt.m"
                  if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 292 "getopt.m"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                  else
#line 292 "getopt.m"
                    if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5983 "getopt.c"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
                    else
#line 292 "getopt.m"
                      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5989 "getopt.c"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
                      else
#line 5993 "getopt.c"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
        else
#line 292 "getopt.m"
          if ((mercury__getopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 292 "getopt.m"
            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 292 "getopt.m"
              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
            else
#line 292 "getopt.m"
              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 292 "getopt.m"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
              else
#line 292 "getopt.m"
                if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 292 "getopt.m"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 292 "getopt.m"
                else
#line 292 "getopt.m"
                  if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 292 "getopt.m"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
                  else
#line 292 "getopt.m"
                    if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 292 "getopt.m"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                    else
#line 292 "getopt.m"
                      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6031 "getopt.c"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                      else
#line 292 "getopt.m"
                        if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 6037 "getopt.c"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
                        else
#line 6041 "getopt.c"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
          else
#line 292 "getopt.m"
            if ((mercury__getopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 292 "getopt.m"
              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 292 "getopt.m"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
              else
#line 292 "getopt.m"
                if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 292 "getopt.m"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                else
#line 292 "getopt.m"
                  if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 292 "getopt.m"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                  else
#line 292 "getopt.m"
                    if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 292 "getopt.m"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 292 "getopt.m"
                    else
#line 292 "getopt.m"
                      if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 292 "getopt.m"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                      else
#line 292 "getopt.m"
                        if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6079 "getopt.c"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                        else
#line 292 "getopt.m"
                          if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 6085 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
                          else
#line 6089 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
            else
#line 292 "getopt.m"
              if ((mercury__getopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 292 "getopt.m"
                if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 292 "getopt.m"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
                else
#line 292 "getopt.m"
                  if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 292 "getopt.m"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
                  else
#line 292 "getopt.m"
                    if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 292 "getopt.m"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
                    else
#line 292 "getopt.m"
                      if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 292 "getopt.m"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
                      else
#line 292 "getopt.m"
                        if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 292 "getopt.m"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 292 "getopt.m"
                        else
#line 292 "getopt.m"
                          if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6127 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
                          else
#line 292 "getopt.m"
                            if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 6133 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
                            else
#line 6137 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
              else
#line 292 "getopt.m"
                if (((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 292 "getopt.m"
                  {
#line 292 "getopt.m"
                    MR_String mercury__getopt__V_57_57 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

#line 292 "getopt.m"
                    if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 6150 "getopt.c"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
                    else
#line 292 "getopt.m"
                      if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 6156 "getopt.c"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                      else
#line 292 "getopt.m"
                        if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 6162 "getopt.c"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
                        else
#line 292 "getopt.m"
                          if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 6168 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
                          else
#line 292 "getopt.m"
                            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6174 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                            else
#line 292 "getopt.m"
                              if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 292 "getopt.m"
                                {
#line 292 "getopt.m"
                                  MR_String mercury__getopt__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
#line 292 "getopt.m"
                                  MR_Integer mercury__getopt__Res_7_63;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt__V_57_57 ;
	S2 =  mercury__getopt__V_13_13 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6202 "getopt.c"

		;}
#undef MR_PROC_LABEL
	 mercury__getopt__Res_7_63  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                                  mercury__getopt__succeeded = (mercury__getopt__Res_7_63 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                                  if (mercury__getopt__succeeded)
#line 104 "private_builtin.opt"
                                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                                  else
#line 110 "private_builtin.opt"
                                    {
#line 107 "private_builtin.opt"
                                      mercury__getopt__succeeded = (mercury__getopt__Res_7_63 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                                      if (mercury__getopt__succeeded)
#line 109 "private_builtin.opt"
                                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                                      else
#line 111 "private_builtin.opt"
                                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                                    }
#line 292 "getopt.m"
                                }
#line 292 "getopt.m"
                              else
#line 292 "getopt.m"
                                if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 6237 "getopt.c"
                                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
                                else
#line 6241 "getopt.c"
                                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
                  }
#line 292 "getopt.m"
                else
#line 292 "getopt.m"
                  if (((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 292 "getopt.m"
                    {
#line 292 "getopt.m"
                      MR_String mercury__getopt__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

#line 292 "getopt.m"
                      if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 6256 "getopt.c"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                      else
#line 292 "getopt.m"
                        if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 6262 "getopt.c"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                        else
#line 292 "getopt.m"
                          if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 6268 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                          else
#line 292 "getopt.m"
                            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 6274 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                            else
#line 292 "getopt.m"
                              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6280 "getopt.c"
                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                              else
#line 292 "getopt.m"
                                if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6286 "getopt.c"
                                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                                else
#line 292 "getopt.m"
                                  if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 292 "getopt.m"
                                    {
#line 292 "getopt.m"
                                      MR_String mercury__getopt__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
#line 292 "getopt.m"
                                      MR_Integer mercury__getopt__Res_7_68;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt__V_58_58 ;
	S2 =  mercury__getopt__V_51_51 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6314 "getopt.c"

		;}
#undef MR_PROC_LABEL
	 mercury__getopt__Res_7_68  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                                      mercury__getopt__succeeded = (mercury__getopt__Res_7_68 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                                      if (mercury__getopt__succeeded)
#line 104 "private_builtin.opt"
                                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                                      else
#line 110 "private_builtin.opt"
                                        {
#line 107 "private_builtin.opt"
                                          mercury__getopt__succeeded = (mercury__getopt__Res_7_68 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                                          if (mercury__getopt__succeeded)
#line 109 "private_builtin.opt"
                                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                                          else
#line 111 "private_builtin.opt"
                                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                                        }
#line 292 "getopt.m"
                                    }
#line 292 "getopt.m"
                                  else
#line 6347 "getopt.c"
                                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                    }
#line 292 "getopt.m"
                  else
#line 292 "getopt.m"
                    {
#line 292 "getopt.m"
                      MR_String mercury__getopt__V_59_59 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

#line 292 "getopt.m"
                      if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 6360 "getopt.c"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                      else
#line 292 "getopt.m"
                        if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 6366 "getopt.c"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                        else
#line 292 "getopt.m"
                          if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 6372 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                          else
#line 292 "getopt.m"
                            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 6378 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                            else
#line 292 "getopt.m"
                              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6384 "getopt.c"
                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                              else
#line 292 "getopt.m"
                                if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6390 "getopt.c"
                                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                                else
#line 292 "getopt.m"
                                  if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 6396 "getopt.c"
                                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
                                  else
#line 292 "getopt.m"
                                    {
#line 292 "getopt.m"
                                      MR_String mercury__getopt__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
#line 292 "getopt.m"
                                      MR_Integer mercury__getopt__Res_7_73;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt__V_59_59 ;
	S2 =  mercury__getopt__V_38_38 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6422 "getopt.c"

		;}
#undef MR_PROC_LABEL
	 mercury__getopt__Res_7_73  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                                      mercury__getopt__succeeded = (mercury__getopt__Res_7_73 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                                      if (mercury__getopt__succeeded)
#line 104 "private_builtin.opt"
                                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                                      else
#line 110 "private_builtin.opt"
                                        {
#line 107 "private_builtin.opt"
                                          mercury__getopt__succeeded = (mercury__getopt__Res_7_73 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                                          if (mercury__getopt__succeeded)
#line 109 "private_builtin.opt"
                                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                                          else
#line 111 "private_builtin.opt"
                                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                                        }
#line 292 "getopt.m"
                                    }
#line 292 "getopt.m"
                    }
#line 292 "getopt.m"
  }
#line 292 "getopt.m"
}

#line 292 "getopt.m"
MR_bool MR_CALL 
mercury__getopt____Unify____option_error_reason_0_0(
#line 292 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 292 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2)
#line 292 "getopt.m"
{
#line 292 "getopt.m"
  {
#line 292 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 292 "getopt.m"
    MR_Integer mercury__getopt__CastX_19 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 292 "getopt.m"
    MR_Integer mercury__getopt__CastY_20 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 292 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_19 == mercury__getopt__CastY_20);
#line 292 "getopt.m"
    if (mercury__getopt__succeeded)
#line 292 "getopt.m"
      mercury__getopt__succeeded = MR_TRUE;
#line 292 "getopt.m"
    else
#line 292 "getopt.m"
      if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 292 "getopt.m"
        {
#line 292 "getopt.m"
          MR_Integer mercury__getopt__CastX_9 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 292 "getopt.m"
          MR_Integer mercury__getopt__CastY_10 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 292 "getopt.m"
          mercury__getopt__succeeded = (mercury__getopt__CastY_10 == mercury__getopt__CastX_9);
#line 292 "getopt.m"
        }
#line 292 "getopt.m"
      else
#line 292 "getopt.m"
        if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 292 "getopt.m"
          {
#line 292 "getopt.m"
            MR_Integer mercury__getopt__CastX_5 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 292 "getopt.m"
            MR_Integer mercury__getopt__CastY_6 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 292 "getopt.m"
            mercury__getopt__succeeded = (mercury__getopt__CastY_6 == mercury__getopt__CastX_5);
#line 292 "getopt.m"
          }
#line 292 "getopt.m"
        else
#line 292 "getopt.m"
          if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 292 "getopt.m"
            {
#line 292 "getopt.m"
              MR_Integer mercury__getopt__CastX_11 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 292 "getopt.m"
              MR_Integer mercury__getopt__CastY_12 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 292 "getopt.m"
              mercury__getopt__succeeded = (mercury__getopt__CastY_12 == mercury__getopt__CastX_11);
#line 292 "getopt.m"
            }
#line 292 "getopt.m"
          else
#line 292 "getopt.m"
            if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 292 "getopt.m"
              {
#line 292 "getopt.m"
                MR_Integer mercury__getopt__CastX_13 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 292 "getopt.m"
                MR_Integer mercury__getopt__CastY_14 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 292 "getopt.m"
                mercury__getopt__succeeded = (mercury__getopt__CastY_14 == mercury__getopt__CastX_13);
#line 292 "getopt.m"
              }
#line 292 "getopt.m"
            else
#line 292 "getopt.m"
              if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 292 "getopt.m"
                {
#line 292 "getopt.m"
                  MR_Integer mercury__getopt__CastX_3 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 292 "getopt.m"
                  MR_Integer mercury__getopt__CastY_4 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 292 "getopt.m"
                  mercury__getopt__succeeded = (mercury__getopt__CastY_4 == mercury__getopt__CastX_3);
#line 292 "getopt.m"
                }
#line 292 "getopt.m"
              else
#line 292 "getopt.m"
                if (((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 292 "getopt.m"
                  {
#line 292 "getopt.m"
                    MR_String mercury__getopt__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 292 "getopt.m"
                    MR_String mercury__getopt__V_8_8;

#line 292 "getopt.m"
                    mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 292 "getopt.m"
                    if (mercury__getopt__succeeded)
#line 292 "getopt.m"
                      {
#line 292 "getopt.m"
                        mercury__getopt__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 6578 "getopt.c"
                        mercury__getopt__succeeded = (strcmp(mercury__getopt__V_7_7, mercury__getopt__V_8_8) == 0);
#line 292 "getopt.m"
                      }
#line 292 "getopt.m"
                  }
#line 292 "getopt.m"
                else
#line 292 "getopt.m"
                  if (((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 292 "getopt.m"
                    {
#line 292 "getopt.m"
                      MR_String mercury__getopt__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 292 "getopt.m"
                      MR_String mercury__getopt__V_18_18;

#line 292 "getopt.m"
                      mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 292 "getopt.m"
                      if (mercury__getopt__succeeded)
#line 292 "getopt.m"
                        {
#line 292 "getopt.m"
                          mercury__getopt__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 6603 "getopt.c"
                          mercury__getopt__succeeded = (strcmp(mercury__getopt__V_17_17, mercury__getopt__V_18_18) == 0);
#line 292 "getopt.m"
                        }
#line 292 "getopt.m"
                    }
#line 292 "getopt.m"
                  else
#line 292 "getopt.m"
                    {
#line 292 "getopt.m"
                      MR_String mercury__getopt__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 292 "getopt.m"
                      MR_String mercury__getopt__V_16_16;

#line 292 "getopt.m"
                      mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 292 "getopt.m"
                      if (mercury__getopt__succeeded)
#line 292 "getopt.m"
                        {
#line 292 "getopt.m"
                          mercury__getopt__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 6626 "getopt.c"
                          mercury__getopt__succeeded = (strcmp(mercury__getopt__V_15_15, mercury__getopt__V_16_16) == 0);
#line 292 "getopt.m"
                        }
#line 292 "getopt.m"
                    }
#line 292 "getopt.m"
    return mercury__getopt__succeeded;
#line 292 "getopt.m"
  }
#line 292 "getopt.m"
}

#line 280 "getopt.m"
void MR_CALL 
mercury__getopt____Compare____option_error_1_0(
#line 280 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_24,
#line 280 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__1_1,
#line 280 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2,
#line 280 "getopt.m"
  MR_Word mercury__getopt__HeadVar__3_3)
#line 280 "getopt.m"
{
#line 280 "getopt.m"
  {
#line 280 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 280 "getopt.m"
    MR_Integer mercury__getopt__CastX_22 = (MR_Integer) mercury__getopt__HeadVar__2_2;
#line 280 "getopt.m"
    MR_Integer mercury__getopt__CastY_23 = (MR_Integer) mercury__getopt__HeadVar__3_3;

#line 280 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_22 == mercury__getopt__CastY_23);
#line 280 "getopt.m"
    if (mercury__getopt__succeeded)
#line 6665 "getopt.c"
      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 280 "getopt.m"
    else
#line 280 "getopt.m"
      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 280 "getopt.m"
        {
#line 280 "getopt.m"
          MR_Word mercury__getopt__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
#line 280 "getopt.m"
          MR_String mercury__getopt__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 280 "getopt.m"
          MR_Box mercury__getopt__V_30_30 = (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0));

#line 280 "getopt.m"
          if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 280 "getopt.m"
            {
#line 280 "getopt.m"
              MR_Box mercury__getopt__V_17_17 = (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 0));
#line 280 "getopt.m"
              MR_String mercury__getopt__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
#line 280 "getopt.m"
              MR_Word mercury__getopt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 2)));
#line 280 "getopt.m"
              MR_Word mercury__getopt__V_20_20;

#line 280 "getopt.m"
              {
#line 280 "getopt.m"
                mercury__builtin__compare_3_p_0(mercury__getopt__TypeInfo_for_OptionType_24, &mercury__getopt__V_20_20, mercury__getopt__V_30_30, mercury__getopt__V_17_17);
              }
#line 6698 "getopt.c"
              mercury__getopt__succeeded = (mercury__getopt__V_20_20 == (MR_Integer) 0);
#line 280 "getopt.m"
              mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 280 "getopt.m"
              if (mercury__getopt__succeeded)
#line 280 "getopt.m"
                *mercury__getopt__HeadVar__1_1 = mercury__getopt__V_20_20;
#line 280 "getopt.m"
              else
#line 280 "getopt.m"
                {
#line 280 "getopt.m"
                  MR_Word mercury__getopt__V_21_21;
#line 280 "getopt.m"
                  MR_Integer mercury__getopt__Res_7_35;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt__V_29_29 ;
	S2 =  mercury__getopt__V_18_18 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6730 "getopt.c"

		;}
#undef MR_PROC_LABEL
	 mercury__getopt__Res_7_35  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                  mercury__getopt__succeeded = (mercury__getopt__Res_7_35 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                  if (mercury__getopt__succeeded)
#line 104 "private_builtin.opt"
                    mercury__getopt__V_21_21 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                  else
#line 110 "private_builtin.opt"
                    {
#line 107 "private_builtin.opt"
                      mercury__getopt__succeeded = (mercury__getopt__Res_7_35 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                      if (mercury__getopt__succeeded)
#line 109 "private_builtin.opt"
                        mercury__getopt__V_21_21 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                      else
#line 111 "private_builtin.opt"
                        mercury__getopt__V_21_21 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                    }
#line 6759 "getopt.c"
                  mercury__getopt__succeeded = (mercury__getopt__V_21_21 == (MR_Integer) 0);
#line 280 "getopt.m"
                  mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 280 "getopt.m"
                  if (mercury__getopt__succeeded)
#line 280 "getopt.m"
                    *mercury__getopt__HeadVar__1_1 = mercury__getopt__V_21_21;
#line 280 "getopt.m"
                  else
#line 280 "getopt.m"
                    {
#line 280 "getopt.m"
                      mercury__getopt____Compare____option_error_reason_0_0(mercury__getopt__HeadVar__1_1, mercury__getopt__V_28_28, mercury__getopt__V_19_19);
#line 280 "getopt.m"
                      return;
                    }
#line 280 "getopt.m"
                }
#line 280 "getopt.m"
            }
#line 280 "getopt.m"
          else
#line 6782 "getopt.c"
            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "getopt.m"
        }
#line 280 "getopt.m"
      else
#line 280 "getopt.m"
        {
#line 280 "getopt.m"
          MR_String mercury__getopt__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

#line 280 "getopt.m"
          if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6795 "getopt.c"
            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "getopt.m"
          else
#line 280 "getopt.m"
            {
#line 280 "getopt.m"
              MR_String mercury__getopt__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
#line 280 "getopt.m"
              MR_Integer mercury__getopt__Res_7_40;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt__V_31_31 ;
	S2 =  mercury__getopt__V_5_5 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6821 "getopt.c"

		;}
#undef MR_PROC_LABEL
	 mercury__getopt__Res_7_40  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
              mercury__getopt__succeeded = (mercury__getopt__Res_7_40 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
              if (mercury__getopt__succeeded)
#line 104 "private_builtin.opt"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
              else
#line 110 "private_builtin.opt"
                {
#line 107 "private_builtin.opt"
                  mercury__getopt__succeeded = (mercury__getopt__Res_7_40 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                  if (mercury__getopt__succeeded)
#line 109 "private_builtin.opt"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                  else
#line 111 "private_builtin.opt"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                }
#line 280 "getopt.m"
            }
#line 280 "getopt.m"
        }
#line 280 "getopt.m"
  }
#line 280 "getopt.m"
}

#line 280 "getopt.m"
MR_bool MR_CALL 
mercury__getopt____Unify____option_error_1_0(
#line 280 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_13,
#line 280 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 280 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2)
#line 280 "getopt.m"
{
#line 280 "getopt.m"
  {
#line 280 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 280 "getopt.m"
    MR_Integer mercury__getopt__CastX_11 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 280 "getopt.m"
    MR_Integer mercury__getopt__CastY_12 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 280 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_11 == mercury__getopt__CastY_12);
#line 280 "getopt.m"
    if (mercury__getopt__succeeded)
#line 280 "getopt.m"
      mercury__getopt__succeeded = MR_TRUE;
#line 280 "getopt.m"
    else
#line 280 "getopt.m"
      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 280 "getopt.m"
        {
#line 280 "getopt.m"
          MR_Box mercury__getopt__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 0));
#line 280 "getopt.m"
          MR_String mercury__getopt__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
#line 280 "getopt.m"
          MR_Word mercury__getopt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 2)));
#line 280 "getopt.m"
          MR_Box mercury__getopt__V_8_8;
#line 280 "getopt.m"
          MR_String mercury__getopt__V_9_9;
#line 280 "getopt.m"
          MR_Word mercury__getopt__V_10_10;

#line 280 "getopt.m"
          mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 280 "getopt.m"
          if (mercury__getopt__succeeded)
#line 280 "getopt.m"
            {
#line 280 "getopt.m"
              mercury__getopt__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0));
#line 280 "getopt.m"
              mercury__getopt__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 280 "getopt.m"
              mercury__getopt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
#line 6916 "getopt.c"
              {
#line 6918 "getopt.c"
                mercury__getopt__succeeded = mercury__builtin__unify_2_p_0(mercury__getopt__TypeInfo_for_OptionType_13, mercury__getopt__V_5_5, mercury__getopt__V_8_8);
              }
#line 280 "getopt.m"
              if (mercury__getopt__succeeded)
#line 280 "getopt.m"
                {
#line 6925 "getopt.c"
                  mercury__getopt__succeeded = (strcmp(mercury__getopt__V_6_6, mercury__getopt__V_9_9) == 0);
#line 280 "getopt.m"
                  if (mercury__getopt__succeeded)
#line 6929 "getopt.c"
                    {
#line 6931 "getopt.c"
                      return mercury__getopt__succeeded = mercury__getopt____Unify____option_error_reason_0_0(mercury__getopt__V_7_7, mercury__getopt__V_10_10);
                    }
#line 280 "getopt.m"
                }
#line 280 "getopt.m"
            }
#line 280 "getopt.m"
        }
#line 280 "getopt.m"
      else
#line 280 "getopt.m"
        {
#line 280 "getopt.m"
          MR_String mercury__getopt__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 280 "getopt.m"
          MR_String mercury__getopt__V_4_4;

#line 280 "getopt.m"
          mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 280 "getopt.m"
          if (mercury__getopt__succeeded)
#line 280 "getopt.m"
            {
#line 280 "getopt.m"
              mercury__getopt__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 6957 "getopt.c"
              mercury__getopt__succeeded = (strcmp(mercury__getopt__V_3_3, mercury__getopt__V_4_4) == 0);
#line 280 "getopt.m"
            }
#line 280 "getopt.m"
        }
#line 280 "getopt.m"
    return mercury__getopt__succeeded;
#line 280 "getopt.m"
  }
#line 280 "getopt.m"
}

#line 250 "getopt.m"
void MR_CALL 
mercury__getopt____Compare____option_data_0_0(
#line 250 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__1_1,
#line 250 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2,
#line 250 "getopt.m"
  MR_Word mercury__getopt__HeadVar__3_3)
#line 250 "getopt.m"
{
#line 250 "getopt.m"
  {
#line 250 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 250 "getopt.m"
    MR_Integer mercury__getopt__CastX_136 = (MR_Integer) mercury__getopt__HeadVar__2_2;
#line 250 "getopt.m"
    MR_Integer mercury__getopt__CastY_137 = (MR_Integer) mercury__getopt__HeadVar__3_3;

#line 250 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_136 == mercury__getopt__CastY_137);
#line 250 "getopt.m"
    if (mercury__getopt__succeeded)
#line 6994 "getopt.c"
      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 250 "getopt.m"
    else
#line 250 "getopt.m"
      if ((mercury__getopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 250 "getopt.m"
        if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 250 "getopt.m"
          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 250 "getopt.m"
        else
#line 250 "getopt.m"
          if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 250 "getopt.m"
            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
          else
#line 250 "getopt.m"
            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 250 "getopt.m"
              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
            else
#line 250 "getopt.m"
              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 250 "getopt.m"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
              else
#line 250 "getopt.m"
                if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 250 "getopt.m"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                else
#line 250 "getopt.m"
                  if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7032 "getopt.c"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                  else
#line 250 "getopt.m"
                    if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7038 "getopt.c"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                    else
#line 250 "getopt.m"
                      if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7044 "getopt.c"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                      else
#line 250 "getopt.m"
                        if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7050 "getopt.c"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                        else
#line 250 "getopt.m"
                          if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7056 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                          else
#line 7060 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
      else
#line 250 "getopt.m"
        if ((mercury__getopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 250 "getopt.m"
          if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 250 "getopt.m"
            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
          else
#line 250 "getopt.m"
            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 250 "getopt.m"
              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 250 "getopt.m"
            else
#line 250 "getopt.m"
              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 250 "getopt.m"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
              else
#line 250 "getopt.m"
                if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 250 "getopt.m"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                else
#line 250 "getopt.m"
                  if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 250 "getopt.m"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                  else
#line 250 "getopt.m"
                    if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7098 "getopt.c"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                    else
#line 250 "getopt.m"
                      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7104 "getopt.c"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                      else
#line 250 "getopt.m"
                        if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7110 "getopt.c"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                        else
#line 250 "getopt.m"
                          if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7116 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                          else
#line 250 "getopt.m"
                            if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7122 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                            else
#line 7126 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
        else
#line 250 "getopt.m"
          if ((mercury__getopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 250 "getopt.m"
            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 250 "getopt.m"
              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
            else
#line 250 "getopt.m"
              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 250 "getopt.m"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
              else
#line 250 "getopt.m"
                if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 250 "getopt.m"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 250 "getopt.m"
                else
#line 250 "getopt.m"
                  if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 250 "getopt.m"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                  else
#line 250 "getopt.m"
                    if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 250 "getopt.m"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                    else
#line 250 "getopt.m"
                      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7164 "getopt.c"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                      else
#line 250 "getopt.m"
                        if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7170 "getopt.c"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                        else
#line 250 "getopt.m"
                          if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7176 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                          else
#line 250 "getopt.m"
                            if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7182 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                            else
#line 250 "getopt.m"
                              if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7188 "getopt.c"
                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                              else
#line 7192 "getopt.c"
                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
          else
#line 250 "getopt.m"
            if ((mercury__getopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 250 "getopt.m"
              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 250 "getopt.m"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
              else
#line 250 "getopt.m"
                if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 250 "getopt.m"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                else
#line 250 "getopt.m"
                  if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 250 "getopt.m"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                  else
#line 250 "getopt.m"
                    if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 250 "getopt.m"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 250 "getopt.m"
                    else
#line 250 "getopt.m"
                      if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 250 "getopt.m"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                      else
#line 250 "getopt.m"
                        if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7230 "getopt.c"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                        else
#line 250 "getopt.m"
                          if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7236 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                          else
#line 250 "getopt.m"
                            if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7242 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                            else
#line 250 "getopt.m"
                              if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7248 "getopt.c"
                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                              else
#line 250 "getopt.m"
                                if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7254 "getopt.c"
                                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                                else
#line 7258 "getopt.c"
                                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
            else
#line 250 "getopt.m"
              if ((mercury__getopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 250 "getopt.m"
                if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 250 "getopt.m"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                else
#line 250 "getopt.m"
                  if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 250 "getopt.m"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                  else
#line 250 "getopt.m"
                    if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 250 "getopt.m"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                    else
#line 250 "getopt.m"
                      if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 250 "getopt.m"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                      else
#line 250 "getopt.m"
                        if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 250 "getopt.m"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 250 "getopt.m"
                        else
#line 250 "getopt.m"
                          if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7296 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                          else
#line 250 "getopt.m"
                            if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7302 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                            else
#line 250 "getopt.m"
                              if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7308 "getopt.c"
                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                              else
#line 250 "getopt.m"
                                if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7314 "getopt.c"
                                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                                else
#line 250 "getopt.m"
                                  if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7320 "getopt.c"
                                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                                  else
#line 7324 "getopt.c"
                                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
              else
#line 250 "getopt.m"
                if (((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 250 "getopt.m"
                  {
#line 250 "getopt.m"
                    MR_Word mercury__getopt__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

#line 250 "getopt.m"
                    if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 7337 "getopt.c"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                    else
#line 250 "getopt.m"
                      if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 7343 "getopt.c"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                      else
#line 250 "getopt.m"
                        if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 7349 "getopt.c"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                        else
#line 250 "getopt.m"
                          if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7355 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                          else
#line 250 "getopt.m"
                            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 7361 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                            else
#line 250 "getopt.m"
                              if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 250 "getopt.m"
                                {
#line 250 "getopt.m"
                                  MR_Word mercury__getopt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
#line 250 "getopt.m"
                                  MR_Integer mercury__getopt__V_150_150 = (MR_Integer) mercury__getopt__V_145_145;
#line 250 "getopt.m"
                                  MR_Integer mercury__getopt__V_151_151 = (MR_Integer) mercury__getopt__V_5_5;

#line 66 "private_builtin.opt"
                                  mercury__getopt__succeeded = (mercury__getopt__V_150_150 < mercury__getopt__V_151_151);
#line 69 "private_builtin.opt"
                                  if (mercury__getopt__succeeded)
#line 68 "private_builtin.opt"
                                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                  else
#line 74 "private_builtin.opt"
                                    {
#line 71 "private_builtin.opt"
                                      mercury__getopt__succeeded = (mercury__getopt__V_150_150 == mercury__getopt__V_151_151);
#line 74 "private_builtin.opt"
                                      if (mercury__getopt__succeeded)
#line 73 "private_builtin.opt"
                                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                      else
#line 75 "private_builtin.opt"
                                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                    }
#line 250 "getopt.m"
                                }
#line 250 "getopt.m"
                              else
#line 250 "getopt.m"
                                if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7404 "getopt.c"
                                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                else
#line 250 "getopt.m"
                                  if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7410 "getopt.c"
                                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                  else
#line 250 "getopt.m"
                                    if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7416 "getopt.c"
                                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                    else
#line 250 "getopt.m"
                                      if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7422 "getopt.c"
                                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                      else
#line 7426 "getopt.c"
                                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                  }
#line 250 "getopt.m"
                else
#line 250 "getopt.m"
                  if (((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 250 "getopt.m"
                    {
#line 250 "getopt.m"
                      MR_Integer mercury__getopt__V_146_146 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

#line 250 "getopt.m"
                      if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 7441 "getopt.c"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                      else
#line 250 "getopt.m"
                        if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 7447 "getopt.c"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                        else
#line 250 "getopt.m"
                          if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 7453 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                          else
#line 250 "getopt.m"
                            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7459 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                            else
#line 250 "getopt.m"
                              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 7465 "getopt.c"
                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                              else
#line 250 "getopt.m"
                                if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7471 "getopt.c"
                                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                                else
#line 250 "getopt.m"
                                  if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 250 "getopt.m"
                                    {
#line 250 "getopt.m"
                                      MR_Integer mercury__getopt__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));

#line 66 "private_builtin.opt"
                                      mercury__getopt__succeeded = (mercury__getopt__V_146_146 < mercury__getopt__V_24_24);
#line 69 "private_builtin.opt"
                                      if (mercury__getopt__succeeded)
#line 68 "private_builtin.opt"
                                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                      else
#line 74 "private_builtin.opt"
                                        {
#line 71 "private_builtin.opt"
                                          mercury__getopt__succeeded = (mercury__getopt__V_146_146 == mercury__getopt__V_24_24);
#line 74 "private_builtin.opt"
                                          if (mercury__getopt__succeeded)
#line 73 "private_builtin.opt"
                                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                          else
#line 75 "private_builtin.opt"
                                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                        }
#line 250 "getopt.m"
                                    }
#line 250 "getopt.m"
                                  else
#line 250 "getopt.m"
                                    if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7510 "getopt.c"
                                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                    else
#line 250 "getopt.m"
                                      if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7516 "getopt.c"
                                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                      else
#line 250 "getopt.m"
                                        if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7522 "getopt.c"
                                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                        else
#line 7526 "getopt.c"
                                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                    }
#line 250 "getopt.m"
                  else
#line 250 "getopt.m"
                    if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 250 "getopt.m"
                      {
#line 250 "getopt.m"
                        MR_Word mercury__getopt__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));

#line 250 "getopt.m"
                        if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 7541 "getopt.c"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                        else
#line 250 "getopt.m"
                          if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 7547 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                          else
#line 250 "getopt.m"
                            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 7553 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                            else
#line 250 "getopt.m"
                              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7559 "getopt.c"
                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                              else
#line 250 "getopt.m"
                                if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 7565 "getopt.c"
                                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                else
#line 250 "getopt.m"
                                  if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7571 "getopt.c"
                                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                                  else
#line 250 "getopt.m"
                                    if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7577 "getopt.c"
                                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                                    else
#line 250 "getopt.m"
                                      if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 250 "getopt.m"
                                        {
#line 250 "getopt.m"
                                          MR_Word mercury__getopt__TypeInfo_138_138 = (MR_Word) &mercury__getopt_scalar_common_1[0];
#line 250 "getopt.m"
                                          MR_Word mercury__getopt__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));

#line 250 "getopt.m"
                                          {
#line 250 "getopt.m"
                                            mercury__builtin__compare_3_p_0(mercury__getopt__TypeInfo_138_138, mercury__getopt__HeadVar__1_1, ((MR_Box) (mercury__getopt__V_144_144)), ((MR_Box) (mercury__getopt__V_100_100)));
#line 250 "getopt.m"
                                            return;
                                          }
#line 250 "getopt.m"
                                        }
#line 250 "getopt.m"
                                      else
#line 250 "getopt.m"
                                        if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7603 "getopt.c"
                                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                                        else
#line 250 "getopt.m"
                                          if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7609 "getopt.c"
                                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                                          else
#line 7613 "getopt.c"
                                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                      }
#line 250 "getopt.m"
                    else
#line 250 "getopt.m"
                      if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 250 "getopt.m"
                        {
#line 250 "getopt.m"
                          MR_Word mercury__getopt__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));

#line 250 "getopt.m"
                          if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 7628 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                          else
#line 250 "getopt.m"
                            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 7634 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                            else
#line 250 "getopt.m"
                              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 7640 "getopt.c"
                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                              else
#line 250 "getopt.m"
                                if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7646 "getopt.c"
                                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                else
#line 250 "getopt.m"
                                  if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 7652 "getopt.c"
                                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                  else
#line 250 "getopt.m"
                                    if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7658 "getopt.c"
                                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                                    else
#line 250 "getopt.m"
                                      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7664 "getopt.c"
                                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                                      else
#line 250 "getopt.m"
                                        if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7670 "getopt.c"
                                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                        else
#line 250 "getopt.m"
                                          if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 250 "getopt.m"
                                            {
#line 250 "getopt.m"
                                              MR_Word mercury__getopt__TypeInfo_140_140 = (MR_Word) &mercury__getopt_scalar_common_1[2];
#line 250 "getopt.m"
                                              MR_Word mercury__getopt__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));

#line 250 "getopt.m"
                                              {
#line 250 "getopt.m"
                                                mercury__builtin__compare_3_p_0(mercury__getopt__TypeInfo_140_140, mercury__getopt__HeadVar__1_1, ((MR_Box) (mercury__getopt__V_147_147)), ((MR_Box) (mercury__getopt__V_62_62)));
#line 250 "getopt.m"
                                                return;
                                              }
#line 250 "getopt.m"
                                            }
#line 250 "getopt.m"
                                          else
#line 250 "getopt.m"
                                            if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7696 "getopt.c"
                                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                            else
#line 7700 "getopt.c"
                                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                        }
#line 250 "getopt.m"
                      else
#line 250 "getopt.m"
                        if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 250 "getopt.m"
                          {
#line 250 "getopt.m"
                            MR_Word mercury__getopt__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));

#line 250 "getopt.m"
                            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 7715 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                            else
#line 250 "getopt.m"
                              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 7721 "getopt.c"
                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                              else
#line 250 "getopt.m"
                                if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 7727 "getopt.c"
                                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                else
#line 250 "getopt.m"
                                  if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7733 "getopt.c"
                                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                  else
#line 250 "getopt.m"
                                    if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 7739 "getopt.c"
                                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                    else
#line 250 "getopt.m"
                                      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7745 "getopt.c"
                                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                                      else
#line 250 "getopt.m"
                                        if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7751 "getopt.c"
                                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                                        else
#line 250 "getopt.m"
                                          if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7757 "getopt.c"
                                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                          else
#line 250 "getopt.m"
                                            if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7763 "getopt.c"
                                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                                            else
#line 250 "getopt.m"
                                              if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 250 "getopt.m"
                                                {
#line 250 "getopt.m"
                                                  MR_Word mercury__getopt__TypeInfo_139_139 = (MR_Word) &mercury__getopt_scalar_common_1[1];
#line 250 "getopt.m"
                                                  MR_Word mercury__getopt__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));

#line 250 "getopt.m"
                                                  {
#line 250 "getopt.m"
                                                    mercury__builtin__compare_3_p_0(mercury__getopt__TypeInfo_139_139, mercury__getopt__HeadVar__1_1, ((MR_Box) (mercury__getopt__V_148_148)), ((MR_Box) (mercury__getopt__V_81_81)));
#line 250 "getopt.m"
                                                    return;
                                                  }
#line 250 "getopt.m"
                                                }
#line 250 "getopt.m"
                                              else
#line 7787 "getopt.c"
                                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                          }
#line 250 "getopt.m"
                        else
#line 250 "getopt.m"
                          {
#line 250 "getopt.m"
                            MR_String mercury__getopt__V_149_149 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));

#line 250 "getopt.m"
                            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 7800 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                            else
#line 250 "getopt.m"
                              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 7806 "getopt.c"
                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                              else
#line 250 "getopt.m"
                                if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 7812 "getopt.c"
                                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                else
#line 250 "getopt.m"
                                  if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7818 "getopt.c"
                                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                  else
#line 250 "getopt.m"
                                    if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 7824 "getopt.c"
                                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                    else
#line 250 "getopt.m"
                                      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7830 "getopt.c"
                                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                                      else
#line 250 "getopt.m"
                                        if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7836 "getopt.c"
                                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                                        else
#line 250 "getopt.m"
                                          if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7842 "getopt.c"
                                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                          else
#line 250 "getopt.m"
                                            if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7848 "getopt.c"
                                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                            else
#line 250 "getopt.m"
                                              if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7854 "getopt.c"
                                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                              else
#line 250 "getopt.m"
                                                {
#line 250 "getopt.m"
                                                  MR_String mercury__getopt__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
#line 250 "getopt.m"
                                                  MR_Integer mercury__getopt__Res_7_161;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__getopt____Compare____option_data_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt__V_149_149 ;
	S2 =  mercury__getopt__V_43_43 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 7880 "getopt.c"

		;}
#undef MR_PROC_LABEL
	 mercury__getopt__Res_7_161  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                                                  mercury__getopt__succeeded = (mercury__getopt__Res_7_161 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                                                  if (mercury__getopt__succeeded)
#line 104 "private_builtin.opt"
                                                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                                                  else
#line 110 "private_builtin.opt"
                                                    {
#line 107 "private_builtin.opt"
                                                      mercury__getopt__succeeded = (mercury__getopt__Res_7_161 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                                                      if (mercury__getopt__succeeded)
#line 109 "private_builtin.opt"
                                                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                                                      else
#line 111 "private_builtin.opt"
                                                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                                                    }
#line 250 "getopt.m"
                                                }
#line 250 "getopt.m"
                          }
#line 250 "getopt.m"
  }
#line 250 "getopt.m"
}

#line 250 "getopt.m"
MR_bool MR_CALL 
mercury__getopt____Unify____option_data_0_0(
#line 250 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 250 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2)
#line 250 "getopt.m"
{
#line 250 "getopt.m"
  {
#line 250 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 250 "getopt.m"
    MR_Integer mercury__getopt__CastX_25 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 250 "getopt.m"
    MR_Integer mercury__getopt__CastY_26 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 250 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_25 == mercury__getopt__CastY_26);
#line 250 "getopt.m"
    if (mercury__getopt__succeeded)
#line 250 "getopt.m"
      mercury__getopt__succeeded = MR_TRUE;
#line 250 "getopt.m"
    else
#line 250 "getopt.m"
      if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 250 "getopt.m"
        {
#line 250 "getopt.m"
          MR_Integer mercury__getopt__CastX_17 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 250 "getopt.m"
          MR_Integer mercury__getopt__CastY_18 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 250 "getopt.m"
          mercury__getopt__succeeded = (mercury__getopt__CastY_18 == mercury__getopt__CastX_17);
#line 250 "getopt.m"
        }
#line 250 "getopt.m"
      else
#line 250 "getopt.m"
        if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 250 "getopt.m"
          {
#line 250 "getopt.m"
            MR_Integer mercury__getopt__CastX_19 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 250 "getopt.m"
            MR_Integer mercury__getopt__CastY_20 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 250 "getopt.m"
            mercury__getopt__succeeded = (mercury__getopt__CastY_20 == mercury__getopt__CastX_19);
#line 250 "getopt.m"
          }
#line 250 "getopt.m"
        else
#line 250 "getopt.m"
          if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 250 "getopt.m"
            {
#line 250 "getopt.m"
              MR_Integer mercury__getopt__CastX_23 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 250 "getopt.m"
              MR_Integer mercury__getopt__CastY_24 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 250 "getopt.m"
              mercury__getopt__succeeded = (mercury__getopt__CastY_24 == mercury__getopt__CastX_23);
#line 250 "getopt.m"
            }
#line 250 "getopt.m"
          else
#line 250 "getopt.m"
            if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 250 "getopt.m"
              {
#line 250 "getopt.m"
                MR_Integer mercury__getopt__CastX_15 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 250 "getopt.m"
                MR_Integer mercury__getopt__CastY_16 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 250 "getopt.m"
                mercury__getopt__succeeded = (mercury__getopt__CastY_16 == mercury__getopt__CastX_15);
#line 250 "getopt.m"
              }
#line 250 "getopt.m"
            else
#line 250 "getopt.m"
              if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 250 "getopt.m"
                {
#line 250 "getopt.m"
                  MR_Integer mercury__getopt__CastX_21 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 250 "getopt.m"
                  MR_Integer mercury__getopt__CastY_22 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 250 "getopt.m"
                  mercury__getopt__succeeded = (mercury__getopt__CastY_22 == mercury__getopt__CastX_21);
#line 250 "getopt.m"
                }
#line 250 "getopt.m"
              else
#line 250 "getopt.m"
                if (((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 250 "getopt.m"
                  {
#line 250 "getopt.m"
                    MR_Word mercury__getopt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 250 "getopt.m"
                    MR_Word mercury__getopt__V_4_4;

#line 250 "getopt.m"
                    mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 250 "getopt.m"
                    if (mercury__getopt__succeeded)
#line 250 "getopt.m"
                      {
#line 250 "getopt.m"
                        mercury__getopt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 8036 "getopt.c"
                        mercury__getopt__succeeded = (mercury__getopt__V_3_3 == mercury__getopt__V_4_4);
#line 250 "getopt.m"
                      }
#line 250 "getopt.m"
                  }
#line 250 "getopt.m"
                else
#line 250 "getopt.m"
                  if (((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 250 "getopt.m"
                    {
#line 250 "getopt.m"
                      MR_Integer mercury__getopt__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 250 "getopt.m"
                      MR_Integer mercury__getopt__V_6_6;

#line 250 "getopt.m"
                      mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 250 "getopt.m"
                      if (mercury__getopt__succeeded)
#line 250 "getopt.m"
                        {
#line 250 "getopt.m"
                          mercury__getopt__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 8061 "getopt.c"
                          mercury__getopt__succeeded = (mercury__getopt__V_5_5 == mercury__getopt__V_6_6);
#line 250 "getopt.m"
                        }
#line 250 "getopt.m"
                    }
#line 250 "getopt.m"
                  else
#line 250 "getopt.m"
                    if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 250 "getopt.m"
                      {
#line 250 "getopt.m"
                        MR_Word mercury__getopt__TypeInfo_27_27;
#line 250 "getopt.m"
                        MR_Word mercury__getopt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
#line 250 "getopt.m"
                        MR_Word mercury__getopt__V_14_14;

#line 250 "getopt.m"
                        mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 250 "getopt.m"
                        if (mercury__getopt__succeeded)
#line 250 "getopt.m"
                          {
#line 250 "getopt.m"
                            mercury__getopt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 8088 "getopt.c"
                            mercury__getopt__TypeInfo_27_27 = (MR_Word) &mercury__getopt_scalar_common_1[0];
#line 8090 "getopt.c"
                            {
#line 8092 "getopt.c"
                              return mercury__getopt__succeeded = mercury__builtin__unify_2_p_0(mercury__getopt__TypeInfo_27_27, ((MR_Box) (mercury__getopt__V_13_13)), ((MR_Box) (mercury__getopt__V_14_14)));
                            }
#line 250 "getopt.m"
                          }
#line 250 "getopt.m"
                      }
#line 250 "getopt.m"
                    else
#line 250 "getopt.m"
                      if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 250 "getopt.m"
                        {
#line 250 "getopt.m"
                          MR_Word mercury__getopt__TypeInfo_28_28;
#line 250 "getopt.m"
                          MR_Word mercury__getopt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
#line 250 "getopt.m"
                          MR_Word mercury__getopt__V_10_10;

#line 250 "getopt.m"
                          mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 250 "getopt.m"
                          if (mercury__getopt__succeeded)
#line 250 "getopt.m"
                            {
#line 250 "getopt.m"
                              mercury__getopt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 8120 "getopt.c"
                              mercury__getopt__TypeInfo_28_28 = (MR_Word) &mercury__getopt_scalar_common_1[2];
#line 8122 "getopt.c"
                              {
#line 8124 "getopt.c"
                                return mercury__getopt__succeeded = mercury__builtin__unify_2_p_0(mercury__getopt__TypeInfo_28_28, ((MR_Box) (mercury__getopt__V_9_9)), ((MR_Box) (mercury__getopt__V_10_10)));
                              }
#line 250 "getopt.m"
                            }
#line 250 "getopt.m"
                        }
#line 250 "getopt.m"
                      else
#line 250 "getopt.m"
                        if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 250 "getopt.m"
                          {
#line 250 "getopt.m"
                            MR_Word mercury__getopt__TypeInfo_29_29;
#line 250 "getopt.m"
                            MR_Word mercury__getopt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
#line 250 "getopt.m"
                            MR_Word mercury__getopt__V_12_12;

#line 250 "getopt.m"
                            mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 250 "getopt.m"
                            if (mercury__getopt__succeeded)
#line 250 "getopt.m"
                              {
#line 250 "getopt.m"
                                mercury__getopt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 8152 "getopt.c"
                                mercury__getopt__TypeInfo_29_29 = (MR_Word) &mercury__getopt_scalar_common_1[1];
#line 8154 "getopt.c"
                                {
#line 8156 "getopt.c"
                                  return mercury__getopt__succeeded = mercury__builtin__unify_2_p_0(mercury__getopt__TypeInfo_29_29, ((MR_Box) (mercury__getopt__V_11_11)), ((MR_Box) (mercury__getopt__V_12_12)));
                                }
#line 250 "getopt.m"
                              }
#line 250 "getopt.m"
                          }
#line 250 "getopt.m"
                        else
#line 250 "getopt.m"
                          {
#line 250 "getopt.m"
                            MR_String mercury__getopt__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
#line 250 "getopt.m"
                            MR_String mercury__getopt__V_8_8;

#line 250 "getopt.m"
                            mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 250 "getopt.m"
                            if (mercury__getopt__succeeded)
#line 250 "getopt.m"
                              {
#line 250 "getopt.m"
                                mercury__getopt__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 8180 "getopt.c"
                                mercury__getopt__succeeded = (strcmp(mercury__getopt__V_7_7, mercury__getopt__V_8_8) == 0);
#line 250 "getopt.m"
                              }
#line 250 "getopt.m"
                          }
#line 250 "getopt.m"
    return mercury__getopt__succeeded;
#line 250 "getopt.m"
  }
#line 250 "getopt.m"
}

#line 276 "getopt.m"
void MR_CALL 
mercury__getopt____Compare____maybe_option_table_se_1_0(
#line 276 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_14,
#line 276 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__1_1,
#line 276 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2,
#line 276 "getopt.m"
  MR_Word mercury__getopt__HeadVar__3_3)
#line 276 "getopt.m"
{
#line 276 "getopt.m"
  {
#line 276 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 276 "getopt.m"
    MR_Integer mercury__getopt__CastX_12 = (MR_Integer) mercury__getopt__HeadVar__2_2;
#line 276 "getopt.m"
    MR_Integer mercury__getopt__CastY_13 = (MR_Integer) mercury__getopt__HeadVar__3_3;

#line 276 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_12 == mercury__getopt__CastY_13);
#line 276 "getopt.m"
    if (mercury__getopt__succeeded)
#line 8219 "getopt.c"
      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 276 "getopt.m"
    else
#line 276 "getopt.m"
      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 276 "getopt.m"
        {
#line 276 "getopt.m"
          MR_Word mercury__getopt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

#line 276 "getopt.m"
          if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 276 "getopt.m"
            {
#line 276 "getopt.m"
              MR_Word mercury__getopt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));

#line 276 "getopt.m"
              {
#line 276 "getopt.m"
                mercury__getopt____Compare____option_error_1_0(mercury__getopt__TypeInfo_for_OptionType_14, mercury__getopt__HeadVar__1_1, mercury__getopt__V_20_20, mercury__getopt__V_11_11);
#line 276 "getopt.m"
                return;
              }
#line 276 "getopt.m"
            }
#line 276 "getopt.m"
          else
#line 8248 "getopt.c"
            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 276 "getopt.m"
        }
#line 276 "getopt.m"
      else
#line 276 "getopt.m"
        {
#line 276 "getopt.m"
          MR_Word mercury__getopt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

#line 276 "getopt.m"
          if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 8261 "getopt.c"
            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 276 "getopt.m"
          else
#line 276 "getopt.m"
            {
#line 276 "getopt.m"
              MR_Word mercury__getopt__TypeCtorInfo_17_17 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 276 "getopt.m"
              MR_Word mercury__getopt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));

#line 276 "getopt.m"
              {
#line 276 "getopt.m"
                mercury__tree234____Compare____tree234_2_0(mercury__getopt__TypeInfo_for_OptionType_14, mercury__getopt__TypeCtorInfo_17_17, mercury__getopt__HeadVar__1_1, mercury__getopt__V_21_21, mercury__getopt__V_5_5);
#line 276 "getopt.m"
                return;
              }
#line 276 "getopt.m"
            }
#line 276 "getopt.m"
        }
#line 276 "getopt.m"
  }
#line 276 "getopt.m"
}

#line 276 "getopt.m"
MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_table_se_1_0(
#line 276 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_9,
#line 276 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 276 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2)
#line 276 "getopt.m"
{
#line 276 "getopt.m"
  {
#line 276 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 276 "getopt.m"
    MR_Integer mercury__getopt__CastX_7 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 276 "getopt.m"
    MR_Integer mercury__getopt__CastY_8 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 276 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_7 == mercury__getopt__CastY_8);
#line 276 "getopt.m"
    if (mercury__getopt__succeeded)
#line 276 "getopt.m"
      mercury__getopt__succeeded = MR_TRUE;
#line 276 "getopt.m"
    else
#line 276 "getopt.m"
      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 276 "getopt.m"
        {
#line 276 "getopt.m"
          MR_Word mercury__getopt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 276 "getopt.m"
          MR_Word mercury__getopt__V_6_6;

#line 276 "getopt.m"
          mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 276 "getopt.m"
          if (mercury__getopt__succeeded)
#line 276 "getopt.m"
            {
#line 276 "getopt.m"
              mercury__getopt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 8333 "getopt.c"
              {
#line 8335 "getopt.c"
                return mercury__getopt__succeeded = mercury__getopt____Unify____option_error_1_0(mercury__getopt__TypeInfo_for_OptionType_9, mercury__getopt__V_5_5, mercury__getopt__V_6_6);
              }
#line 276 "getopt.m"
            }
#line 276 "getopt.m"
        }
#line 276 "getopt.m"
      else
#line 276 "getopt.m"
        {
#line 276 "getopt.m"
          MR_Word mercury__getopt__TypeCtorInfo_10_10;
#line 276 "getopt.m"
          MR_Word mercury__getopt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 276 "getopt.m"
          MR_Word mercury__getopt__V_4_4;

#line 276 "getopt.m"
          mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 276 "getopt.m"
          if (mercury__getopt__succeeded)
#line 276 "getopt.m"
            {
#line 276 "getopt.m"
              mercury__getopt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 8361 "getopt.c"
              mercury__getopt__TypeCtorInfo_10_10 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 8363 "getopt.c"
              {
#line 8365 "getopt.c"
                return mercury__getopt__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__getopt__TypeInfo_for_OptionType_9, mercury__getopt__TypeCtorInfo_10_10, mercury__getopt__V_3_3, mercury__getopt__V_4_4);
              }
#line 276 "getopt.m"
            }
#line 276 "getopt.m"
        }
#line 276 "getopt.m"
    return mercury__getopt__succeeded;
#line 276 "getopt.m"
  }
#line 276 "getopt.m"
}

#line 272 "getopt.m"
void MR_CALL 
mercury__getopt____Compare____maybe_option_table_1_0(
#line 272 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_14,
#line 272 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__1_1,
#line 272 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2,
#line 272 "getopt.m"
  MR_Word mercury__getopt__HeadVar__3_3)
#line 272 "getopt.m"
{
#line 272 "getopt.m"
  {
#line 272 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 272 "getopt.m"
    MR_Integer mercury__getopt__CastX_12 = (MR_Integer) mercury__getopt__HeadVar__2_2;
#line 272 "getopt.m"
    MR_Integer mercury__getopt__CastY_13 = (MR_Integer) mercury__getopt__HeadVar__3_3;

#line 272 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_12 == mercury__getopt__CastY_13);
#line 272 "getopt.m"
    if (mercury__getopt__succeeded)
#line 8405 "getopt.c"
      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 272 "getopt.m"
    else
#line 272 "getopt.m"
      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 272 "getopt.m"
        {
#line 272 "getopt.m"
          MR_String mercury__getopt__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

#line 272 "getopt.m"
          if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 272 "getopt.m"
            {
#line 272 "getopt.m"
              MR_String mercury__getopt__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
#line 272 "getopt.m"
              MR_Integer mercury__getopt__Res_7_24;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__getopt____Compare____maybe_option_table_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt__V_19_19 ;
	S2 =  mercury__getopt__V_11_11 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 8440 "getopt.c"

		;}
#undef MR_PROC_LABEL
	 mercury__getopt__Res_7_24  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
              mercury__getopt__succeeded = (mercury__getopt__Res_7_24 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
              if (mercury__getopt__succeeded)
#line 104 "private_builtin.opt"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
              else
#line 110 "private_builtin.opt"
                {
#line 107 "private_builtin.opt"
                  mercury__getopt__succeeded = (mercury__getopt__Res_7_24 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                  if (mercury__getopt__succeeded)
#line 109 "private_builtin.opt"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                  else
#line 111 "private_builtin.opt"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                }
#line 272 "getopt.m"
            }
#line 272 "getopt.m"
          else
#line 8473 "getopt.c"
            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 272 "getopt.m"
        }
#line 272 "getopt.m"
      else
#line 272 "getopt.m"
        {
#line 272 "getopt.m"
          MR_Word mercury__getopt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

#line 272 "getopt.m"
          if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 8486 "getopt.c"
            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 272 "getopt.m"
          else
#line 272 "getopt.m"
            {
#line 272 "getopt.m"
              MR_Word mercury__getopt__TypeCtorInfo_16_16 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 272 "getopt.m"
              MR_Word mercury__getopt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));

#line 272 "getopt.m"
              {
#line 272 "getopt.m"
                mercury__tree234____Compare____tree234_2_0(mercury__getopt__TypeInfo_for_OptionType_14, mercury__getopt__TypeCtorInfo_16_16, mercury__getopt__HeadVar__1_1, mercury__getopt__V_20_20, mercury__getopt__V_5_5);
#line 272 "getopt.m"
                return;
              }
#line 272 "getopt.m"
            }
#line 272 "getopt.m"
        }
#line 272 "getopt.m"
  }
#line 272 "getopt.m"
}

#line 272 "getopt.m"
MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_table_1_0(
#line 272 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_9,
#line 272 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 272 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2)
#line 272 "getopt.m"
{
#line 272 "getopt.m"
  {
#line 272 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 272 "getopt.m"
    MR_Integer mercury__getopt__CastX_7 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 272 "getopt.m"
    MR_Integer mercury__getopt__CastY_8 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 272 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_7 == mercury__getopt__CastY_8);
#line 272 "getopt.m"
    if (mercury__getopt__succeeded)
#line 272 "getopt.m"
      mercury__getopt__succeeded = MR_TRUE;
#line 272 "getopt.m"
    else
#line 272 "getopt.m"
      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 272 "getopt.m"
        {
#line 272 "getopt.m"
          MR_String mercury__getopt__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 272 "getopt.m"
          MR_String mercury__getopt__V_6_6;

#line 272 "getopt.m"
          mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 272 "getopt.m"
          if (mercury__getopt__succeeded)
#line 272 "getopt.m"
            {
#line 272 "getopt.m"
              mercury__getopt__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 8558 "getopt.c"
              mercury__getopt__succeeded = (strcmp(mercury__getopt__V_5_5, mercury__getopt__V_6_6) == 0);
#line 272 "getopt.m"
            }
#line 272 "getopt.m"
        }
#line 272 "getopt.m"
      else
#line 272 "getopt.m"
        {
#line 272 "getopt.m"
          MR_Word mercury__getopt__TypeCtorInfo_10_10;
#line 272 "getopt.m"
          MR_Word mercury__getopt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 272 "getopt.m"
          MR_Word mercury__getopt__V_4_4;

#line 272 "getopt.m"
          mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 272 "getopt.m"
          if (mercury__getopt__succeeded)
#line 272 "getopt.m"
            {
#line 272 "getopt.m"
              mercury__getopt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 8583 "getopt.c"
              mercury__getopt__TypeCtorInfo_10_10 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 8585 "getopt.c"
              {
#line 8587 "getopt.c"
                return mercury__getopt__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__getopt__TypeInfo_for_OptionType_9, mercury__getopt__TypeCtorInfo_10_10, mercury__getopt__V_3_3, mercury__getopt__V_4_4);
              }
#line 272 "getopt.m"
            }
#line 272 "getopt.m"
        }
#line 272 "getopt.m"
    return mercury__getopt__succeeded;
#line 272 "getopt.m"
  }
#line 272 "getopt.m"
}

#line 954 "getopt.m"
static void MR_CALL 
mercury__getopt__process_special_8_p_0(
#line 954 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_54,
#line 954 "getopt.m"
  MR_String mercury__getopt__Option_9,
#line 954 "getopt.m"
  MR_Box mercury__getopt__Flag_10,
#line 954 "getopt.m"
  MR_Word mercury__getopt__OptionData_11,
#line 954 "getopt.m"
  MR_Word mercury__getopt__OptionOps_12,
#line 954 "getopt.m"
  MR_Word mercury__getopt__OptionTable0_13,
#line 954 "getopt.m"
  MR_Word * mercury__getopt__Result_14,
#line 954 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_26,
#line 954 "getopt.m"
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_27)
#line 954 "getopt.m"
{
#line 960 "getopt.m"
  {
#line 960 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 960 "getopt.m"
    MR_Word mercury__getopt__MaybeHandler_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_12, (MR_Integer) 2)));
#line 961 "getopt.m"
    MR_Word mercury__getopt__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_12, (MR_Integer) 0)));
#line 961 "getopt.m"
    MR_Word mercury__getopt__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_12, (MR_Integer) 1)));

#line 980 "getopt.m"
    if ((mercury__getopt__MaybeHandler_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1001 "getopt.m"
      {
#line 1001 "getopt.m"
        MR_Word mercury__getopt__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
#line 1001 "getopt.m"
        MR_Word mercury__getopt__Error_51;

#line 1002 "getopt.m"
        {
#line 1002 "getopt.m"
          mercury__getopt__Error_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1002 "getopt.m"
          MR_hl_field(MR_mktag(1), mercury__getopt__Error_51, 0) = mercury__getopt__Flag_10;
#line 1002 "getopt.m"
          MR_hl_field(MR_mktag(1), mercury__getopt__Error_51, 1) = ((MR_Box) (mercury__getopt__Option_9));
#line 1002 "getopt.m"
          MR_hl_field(MR_mktag(1), mercury__getopt__Error_51, 2) = ((MR_Box) (mercury__getopt__V_28_28));
#line 1002 "getopt.m"
        }
#line 1003 "getopt.m"
        {
#line 1003 "getopt.m"
          MR_Word base;
#line 1003 "getopt.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "getopt.m"
          *mercury__getopt__Result_14 = base;
#line 1003 "getopt.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_51));
#line 1003 "getopt.m"
        }
#line 1003 "getopt.m"
        *mercury__getopt__STATE_VARIABLE_OptionsSet_27 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_26;
#line 1001 "getopt.m"
      }
#line 980 "getopt.m"
    else
#line 980 "getopt.m"
      if (((MR_tag((MR_Word) mercury__getopt__MaybeHandler_16)) == (MR_mktag((MR_Integer) 1))))
#line 963 "getopt.m"
        {
#line 963 "getopt.m"
          MR_Word mercury__getopt__Handler_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__MaybeHandler_16, (MR_Integer) 0)));
#line 976 "getopt.m"
          MR_Word mercury__getopt__Result0_18;
#line 965 "getopt.m"
          MR_bool MR_CALL (* mercury__getopt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt__Handler_17, (MR_Integer) 1)));
#line 965 "getopt.m"
          MR_Box mercury__getopt__conv1_Result0_18;

#line 965 "getopt.m"
          {
#line 965 "getopt.m"
            mercury__getopt__succeeded = mercury__getopt__func_0(((MR_Box) mercury__getopt__Handler_17), mercury__getopt__Flag_10, ((MR_Box) (mercury__getopt__OptionData_11)), ((MR_Box) (mercury__getopt__OptionTable0_13)), &mercury__getopt__conv1_Result0_18);
          }
#line 965 "getopt.m"
          if (mercury__getopt__succeeded)
#line 965 "getopt.m"
            {
#line 965 "getopt.m"
              mercury__getopt__Result0_18 = ((MR_Word) mercury__getopt__conv1_Result0_18);
#line 965 "getopt.m"
              mercury__getopt__succeeded = MR_TRUE;
#line 965 "getopt.m"
            }
#line 976 "getopt.m"
          if (mercury__getopt__succeeded)
#line 970 "getopt.m"
            if (((MR_tag((MR_Word) mercury__getopt__Result0_18)) == (MR_mktag((MR_Integer) 1))))
#line 971 "getopt.m"
              {
#line 971 "getopt.m"
                MR_String mercury__getopt__HandlerMsg_20 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__Result0_18, (MR_Integer) 0)));
#line 971 "getopt.m"
                MR_Word mercury__getopt__Reason_21;
#line 971 "getopt.m"
                MR_Word mercury__getopt__Error_22;

#line 972 "getopt.m"
                {
#line 972 "getopt.m"
                  mercury__getopt__Reason_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 972 "getopt.m"
                  MR_hl_field(MR_mktag(2), mercury__getopt__Reason_21, 0) = ((MR_Box) (mercury__getopt__HandlerMsg_20));
#line 972 "getopt.m"
                }
#line 973 "getopt.m"
                {
#line 973 "getopt.m"
                  mercury__getopt__Error_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 973 "getopt.m"
                  MR_hl_field(MR_mktag(1), mercury__getopt__Error_22, 0) = mercury__getopt__Flag_10;
#line 973 "getopt.m"
                  MR_hl_field(MR_mktag(1), mercury__getopt__Error_22, 1) = ((MR_Box) (mercury__getopt__Option_9));
#line 973 "getopt.m"
                  MR_hl_field(MR_mktag(1), mercury__getopt__Error_22, 2) = ((MR_Box) (mercury__getopt__Reason_21));
#line 973 "getopt.m"
                }
#line 974 "getopt.m"
                {
#line 974 "getopt.m"
                  MR_Word base;
#line 974 "getopt.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 974 "getopt.m"
                  *mercury__getopt__Result_14 = base;
#line 974 "getopt.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_22));
#line 974 "getopt.m"
                }
#line 971 "getopt.m"
              }
#line 970 "getopt.m"
            else
#line 968 "getopt.m"
              {
#line 968 "getopt.m"
                MR_Word mercury__getopt__OptionTable_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result0_18, (MR_Integer) 0)));

#line 969 "getopt.m"
                {
#line 969 "getopt.m"
                  MR_Word base;
#line 969 "getopt.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 969 "getopt.m"
                  *mercury__getopt__Result_14 = base;
#line 969 "getopt.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_19));
#line 969 "getopt.m"
                }
#line 968 "getopt.m"
              }
#line 976 "getopt.m"
          else
#line 977 "getopt.m"
            {
#line 977 "getopt.m"
              MR_Word mercury__getopt__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 977 "getopt.m"
              MR_Word mercury__getopt__Error_32;

#line 977 "getopt.m"
              {
#line 977 "getopt.m"
                mercury__getopt__Error_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 977 "getopt.m"
                MR_hl_field(MR_mktag(1), mercury__getopt__Error_32, 0) = mercury__getopt__Flag_10;
#line 977 "getopt.m"
                MR_hl_field(MR_mktag(1), mercury__getopt__Error_32, 1) = ((MR_Box) (mercury__getopt__Option_9));
#line 977 "getopt.m"
                MR_hl_field(MR_mktag(1), mercury__getopt__Error_32, 2) = ((MR_Box) (mercury__getopt__V_31_31));
#line 977 "getopt.m"
              }
#line 978 "getopt.m"
              {
#line 978 "getopt.m"
                MR_Word base;
#line 978 "getopt.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 978 "getopt.m"
                *mercury__getopt__Result_14 = base;
#line 978 "getopt.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_32));
#line 978 "getopt.m"
              }
#line 977 "getopt.m"
            }
#line 978 "getopt.m"
          *mercury__getopt__STATE_VARIABLE_OptionsSet_27 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_26;
#line 963 "getopt.m"
        }
#line 980 "getopt.m"
      else
#line 981 "getopt.m"
        {
#line 981 "getopt.m"
          MR_Word mercury__getopt__TrackHandler_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__MaybeHandler_16, (MR_Integer) 0)));
#line 996 "getopt.m"
          MR_Word mercury__getopt__NewOptionsSet_24;
#line 996 "getopt.m"
          MR_Word mercury__getopt__Result0_43;
#line 983 "getopt.m"
          MR_bool MR_CALL (* mercury__getopt__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt__TrackHandler_23, (MR_Integer) 1)));
#line 983 "getopt.m"
          MR_Box mercury__getopt__conv4_Result0_43;
#line 983 "getopt.m"
          MR_Box mercury__getopt__conv3_NewOptionsSet_24;

#line 983 "getopt.m"
          {
#line 983 "getopt.m"
            mercury__getopt__succeeded = mercury__getopt__func_2(((MR_Box) mercury__getopt__TrackHandler_23), mercury__getopt__Flag_10, ((MR_Box) (mercury__getopt__OptionData_11)), ((MR_Box) (mercury__getopt__OptionTable0_13)), &mercury__getopt__conv4_Result0_43, &mercury__getopt__conv3_NewOptionsSet_24);
          }
#line 983 "getopt.m"
          if (mercury__getopt__succeeded)
#line 983 "getopt.m"
            {
#line 983 "getopt.m"
              mercury__getopt__Result0_43 = ((MR_Word) mercury__getopt__conv4_Result0_43);
#line 983 "getopt.m"
              mercury__getopt__NewOptionsSet_24 = ((MR_Word) mercury__getopt__conv3_NewOptionsSet_24);
#line 983 "getopt.m"
              mercury__getopt__succeeded = MR_TRUE;
#line 983 "getopt.m"
            }
#line 996 "getopt.m"
          if (mercury__getopt__succeeded)
#line 986 "getopt.m"
            {
#line 986 "getopt.m"
              MR_Word mercury__getopt__Set0_4_58 = (MR_Word) mercury__getopt__NewOptionsSet_24;
#line 986 "getopt.m"
              MR_Word mercury__getopt__Set1_5_59 = (MR_Word) mercury__getopt__STATE_VARIABLE_OptionsSet_0_26;
#line 986 "getopt.m"
              MR_Word mercury__getopt__Set_6_60;

#line 101 "set_ordlist.opt"
              {
#line 101 "set_ordlist.opt"
                mercury__list__merge_and_remove_dups_3_p_0(mercury__getopt__TypeInfo_for_OptionType_54, mercury__getopt__Set0_4_58, mercury__getopt__Set1_5_59, &mercury__getopt__Set_6_60);
              }
#line 100 "set_ordlist.opt"
              *mercury__getopt__STATE_VARIABLE_OptionsSet_27 = (MR_Word) mercury__getopt__Set_6_60;
#line 990 "getopt.m"
              if (((MR_tag((MR_Word) mercury__getopt__Result0_43)) == (MR_mktag((MR_Integer) 1))))
#line 991 "getopt.m"
                {
#line 991 "getopt.m"
                  MR_String mercury__getopt__TrackHandlerMsg_25 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__Result0_43, (MR_Integer) 0)));
#line 991 "getopt.m"
                  MR_Word mercury__getopt__Reason_34;
#line 991 "getopt.m"
                  MR_Word mercury__getopt__Error_35;

#line 992 "getopt.m"
                  {
#line 992 "getopt.m"
                    mercury__getopt__Reason_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 992 "getopt.m"
                    MR_hl_field(MR_mktag(2), mercury__getopt__Reason_34, 0) = ((MR_Box) (mercury__getopt__TrackHandlerMsg_25));
#line 992 "getopt.m"
                  }
#line 993 "getopt.m"
                  {
#line 993 "getopt.m"
                    mercury__getopt__Error_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 993 "getopt.m"
                    MR_hl_field(MR_mktag(1), mercury__getopt__Error_35, 0) = mercury__getopt__Flag_10;
#line 993 "getopt.m"
                    MR_hl_field(MR_mktag(1), mercury__getopt__Error_35, 1) = ((MR_Box) (mercury__getopt__Option_9));
#line 993 "getopt.m"
                    MR_hl_field(MR_mktag(1), mercury__getopt__Error_35, 2) = ((MR_Box) (mercury__getopt__Reason_34));
#line 993 "getopt.m"
                  }
#line 994 "getopt.m"
                  {
#line 994 "getopt.m"
                    MR_Word base;
#line 994 "getopt.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 994 "getopt.m"
                    *mercury__getopt__Result_14 = base;
#line 994 "getopt.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_35));
#line 994 "getopt.m"
                  }
#line 991 "getopt.m"
                }
#line 990 "getopt.m"
              else
#line 988 "getopt.m"
                {
#line 988 "getopt.m"
                  MR_Word mercury__getopt__OptionTable_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result0_43, (MR_Integer) 0)));

#line 989 "getopt.m"
                  {
#line 989 "getopt.m"
                    MR_Word base;
#line 989 "getopt.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 989 "getopt.m"
                    *mercury__getopt__Result_14 = base;
#line 989 "getopt.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_33));
#line 989 "getopt.m"
                  }
#line 988 "getopt.m"
                }
#line 986 "getopt.m"
            }
#line 996 "getopt.m"
          else
#line 997 "getopt.m"
            {
#line 997 "getopt.m"
              MR_Word mercury__getopt__V_30_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 997 "getopt.m"
              MR_Word mercury__getopt__Error_42;

#line 997 "getopt.m"
              {
#line 997 "getopt.m"
                mercury__getopt__Error_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 997 "getopt.m"
                MR_hl_field(MR_mktag(1), mercury__getopt__Error_42, 0) = mercury__getopt__Flag_10;
#line 997 "getopt.m"
                MR_hl_field(MR_mktag(1), mercury__getopt__Error_42, 1) = ((MR_Box) (mercury__getopt__Option_9));
#line 997 "getopt.m"
                MR_hl_field(MR_mktag(1), mercury__getopt__Error_42, 2) = ((MR_Box) (mercury__getopt__V_30_30));
#line 997 "getopt.m"
              }
#line 998 "getopt.m"
              {
#line 998 "getopt.m"
                MR_Word base;
#line 998 "getopt.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 998 "getopt.m"
                *mercury__getopt__Result_14 = base;
#line 998 "getopt.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_42));
#line 998 "getopt.m"
              }
#line 998 "getopt.m"
              *mercury__getopt__STATE_VARIABLE_OptionsSet_27 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_26;
#line 997 "getopt.m"
            }
#line 981 "getopt.m"
        }
#line 960 "getopt.m"
  }
#line 954 "getopt.m"
}

#line 901 "getopt.m"
static void MR_CALL 
mercury__getopt__process_negated_option_7_p_0(
#line 901 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_51,
#line 901 "getopt.m"
  MR_String mercury__getopt__Option_8,
#line 901 "getopt.m"
  MR_Box mercury__getopt__Flag_9,
#line 901 "getopt.m"
  MR_Word mercury__getopt__OptionOps_10,
#line 901 "getopt.m"
  MR_Word mercury__getopt__OptionTable0_11,
#line 901 "getopt.m"
  MR_Word * mercury__getopt__Result_12,
#line 901 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_23,
#line 901 "getopt.m"
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_24)
#line 901 "getopt.m"
{
#line 949 "getopt.m"
  {
#line 949 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 949 "getopt.m"
    MR_Word mercury__getopt__OptionData_14;
#line 908 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_52_52 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 39 "map.opt"
    MR_Box mercury__getopt__conv0_OptionData_14;

#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__getopt__succeeded = mercury__tree234__search_3_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__TypeCtorInfo_52_52, mercury__getopt__OptionTable0_11, mercury__getopt__Flag_9, &mercury__getopt__conv0_OptionData_14);
    }
#line 39 "map.opt"
    if (mercury__getopt__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__getopt__OptionData_14 = ((MR_Word) mercury__getopt__conv0_OptionData_14);
#line 39 "map.opt"
        mercury__getopt__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 949 "getopt.m"
    if (mercury__getopt__succeeded)
#line 914 "getopt.m"
      if ((mercury__getopt__OptionData_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 930 "getopt.m"
        {
#line 930 "getopt.m"
          MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_30_30;
#line 930 "getopt.m"
          MR_Word mercury__getopt__V_31_31;
#line 930 "getopt.m"
          MR_Word mercury__getopt__List0_5_84 = (MR_Word) mercury__getopt__STATE_VARIABLE_OptionsSet_0_23;
#line 930 "getopt.m"
          MR_Word mercury__getopt__List_6_85;

#line 68 "set_ordlist.opt"
          {
#line 68 "set_ordlist.opt"
            mercury__set_ordlist__insert_2_3_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__List0_5_84, mercury__getopt__Flag_9, &mercury__getopt__List_6_85);
          }
#line 67 "set_ordlist.opt"
          mercury__getopt__STATE_VARIABLE_OptionsSet_30_30 = (MR_Word) mercury__getopt__List_6_85;
#line 932 "getopt.m"
          mercury__getopt__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[1]);
#line 932 "getopt.m"
          {
#line 932 "getopt.m"
            mercury__getopt__process_special_8_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__Option_8, mercury__getopt__Flag_9, mercury__getopt__V_31_31, mercury__getopt__OptionOps_10, mercury__getopt__OptionTable0_11, mercury__getopt__Result_12, mercury__getopt__STATE_VARIABLE_OptionsSet_30_30, mercury__getopt__STATE_VARIABLE_OptionsSet_24);
#line 932 "getopt.m"
            return;
          }
#line 930 "getopt.m"
        }
#line 914 "getopt.m"
      else
#line 914 "getopt.m"
        if ((mercury__getopt__OptionData_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 935 "getopt.m"
          {
#line 935 "getopt.m"
            MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_26_26;
#line 935 "getopt.m"
            MR_Word mercury__getopt__V_27_27;
#line 935 "getopt.m"
            MR_Word mercury__getopt__V_29_29;

#line 936 "getopt.m"
            {
#line 936 "getopt.m"
              mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__Flag_9, mercury__getopt__STATE_VARIABLE_OptionsSet_0_23, &mercury__getopt__STATE_VARIABLE_OptionsSet_26_26);
            }
#line 937 "getopt.m"
            mercury__getopt__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 937 "getopt.m"
            mercury__getopt__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__getopt_scalar_common_1[3]);
#line 937 "getopt.m"
            {
#line 937 "getopt.m"
              mercury__getopt__process_special_8_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__Option_8, mercury__getopt__Flag_9, mercury__getopt__V_27_27, mercury__getopt__OptionOps_10, mercury__getopt__OptionTable0_11, mercury__getopt__Result_12, mercury__getopt__STATE_VARIABLE_OptionsSet_26_26, mercury__getopt__STATE_VARIABLE_OptionsSet_24);
#line 937 "getopt.m"
              return;
            }
#line 935 "getopt.m"
          }
#line 914 "getopt.m"
        else
#line 914 "getopt.m"
          if (((MR_tag((MR_Word) mercury__getopt__OptionData_14)) == (MR_mktag((MR_Integer) 1))))
#line 910 "getopt.m"
            {
#line 910 "getopt.m"
              MR_Word mercury__getopt__TypeCtorInfo_53_53;
#line 910 "getopt.m"
              MR_Word mercury__getopt__OptionTable_16;
#line 910 "getopt.m"
              MR_Word mercury__getopt__V_44_44;
#line 910 "getopt.m"
              MR_Word mercury__getopt__List0_5_74 = (MR_Word) mercury__getopt__STATE_VARIABLE_OptionsSet_0_23;
#line 910 "getopt.m"
              MR_Word mercury__getopt__List_6_75;

#line 68 "set_ordlist.opt"
              {
#line 68 "set_ordlist.opt"
                mercury__set_ordlist__insert_2_3_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__List0_5_74, mercury__getopt__Flag_9, &mercury__getopt__List_6_75);
              }
#line 67 "set_ordlist.opt"
              *mercury__getopt__STATE_VARIABLE_OptionsSet_24 = (MR_Word) mercury__getopt__List_6_75;
#line 912 "getopt.m"
              mercury__getopt__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[1]);
#line 9110 "getopt.c"
              mercury__getopt__TypeCtorInfo_53_53 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 117 "map.opt"
              {
#line 117 "map.opt"
                mercury__tree234__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__TypeCtorInfo_53_53, mercury__getopt__Flag_9, ((MR_Box) (mercury__getopt__V_44_44)), mercury__getopt__OptionTable0_11, &mercury__getopt__OptionTable_16);
              }
#line 913 "getopt.m"
              {
#line 913 "getopt.m"
                MR_Word base;
#line 913 "getopt.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 913 "getopt.m"
                *mercury__getopt__Result_12 = base;
#line 913 "getopt.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_16));
#line 913 "getopt.m"
              }
#line 910 "getopt.m"
            }
#line 914 "getopt.m"
          else
#line 914 "getopt.m"
            if (((((MR_tag((MR_Word) mercury__getopt__OptionData_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_14, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 925 "getopt.m"
              {
#line 925 "getopt.m"
                MR_Word mercury__getopt__TypeCtorInfo_56_56;
#line 925 "getopt.m"
                MR_Word mercury__getopt__V_35_35;
#line 925 "getopt.m"
                MR_Word mercury__getopt__V_36_36;
#line 925 "getopt.m"
                MR_Word mercury__getopt__OptionTable_49;
#line 925 "getopt.m"
                MR_Word mercury__getopt__List0_5_64 = (MR_Word) mercury__getopt__STATE_VARIABLE_OptionsSet_0_23;
#line 925 "getopt.m"
                MR_Word mercury__getopt__List_6_65;

#line 68 "set_ordlist.opt"
                {
#line 68 "set_ordlist.opt"
                  mercury__set_ordlist__insert_2_3_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__List0_5_64, mercury__getopt__Flag_9, &mercury__getopt__List_6_65);
                }
#line 67 "set_ordlist.opt"
                *mercury__getopt__STATE_VARIABLE_OptionsSet_24 = (MR_Word) mercury__getopt__List_6_65;
#line 927 "getopt.m"
                mercury__getopt__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 927 "getopt.m"
                mercury__getopt__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__getopt_scalar_common_1[4]);
#line 9161 "getopt.c"
                mercury__getopt__TypeCtorInfo_56_56 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 117 "map.opt"
                {
#line 117 "map.opt"
                  mercury__tree234__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__TypeCtorInfo_56_56, mercury__getopt__Flag_9, ((MR_Box) (mercury__getopt__V_35_35)), mercury__getopt__OptionTable0_11, &mercury__getopt__OptionTable_49);
                }
#line 928 "getopt.m"
                {
#line 928 "getopt.m"
                  MR_Word base;
#line 928 "getopt.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 928 "getopt.m"
                  *mercury__getopt__Result_12 = base;
#line 928 "getopt.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_49));
#line 928 "getopt.m"
                }
#line 925 "getopt.m"
              }
#line 914 "getopt.m"
            else
#line 914 "getopt.m"
              if (((((MR_tag((MR_Word) mercury__getopt__OptionData_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_14, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 915 "getopt.m"
                {
#line 915 "getopt.m"
                  MR_Word mercury__getopt__TypeCtorInfo_54_54;
#line 915 "getopt.m"
                  MR_Word mercury__getopt__V_41_41;
#line 915 "getopt.m"
                  MR_Word mercury__getopt__V_42_42;
#line 915 "getopt.m"
                  MR_Word mercury__getopt__OptionTable_47;
#line 915 "getopt.m"
                  MR_Word mercury__getopt__List0_5_90 = (MR_Word) mercury__getopt__STATE_VARIABLE_OptionsSet_0_23;
#line 915 "getopt.m"
                  MR_Word mercury__getopt__List_6_91;

#line 68 "set_ordlist.opt"
                  {
#line 68 "set_ordlist.opt"
                    mercury__set_ordlist__insert_2_3_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__List0_5_90, mercury__getopt__Flag_9, &mercury__getopt__List_6_91);
                  }
#line 67 "set_ordlist.opt"
                  *mercury__getopt__STATE_VARIABLE_OptionsSet_24 = (MR_Word) mercury__getopt__List_6_91;
#line 917 "getopt.m"
                  mercury__getopt__V_42_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 917 "getopt.m"
                  mercury__getopt__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__getopt_scalar_common_1[5]);
#line 9212 "getopt.c"
                  mercury__getopt__TypeCtorInfo_54_54 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 917 "getopt.m"
                  {
#line 917 "getopt.m"
                    mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__TypeCtorInfo_54_54, mercury__getopt__Flag_9, ((MR_Box) (mercury__getopt__V_41_41)), mercury__getopt__OptionTable0_11, &mercury__getopt__OptionTable_47);
                  }
#line 918 "getopt.m"
                  {
#line 918 "getopt.m"
                    MR_Word base;
#line 918 "getopt.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 918 "getopt.m"
                    *mercury__getopt__Result_12 = base;
#line 918 "getopt.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_47));
#line 918 "getopt.m"
                  }
#line 915 "getopt.m"
                }
#line 914 "getopt.m"
              else
#line 914 "getopt.m"
                if (((((MR_tag((MR_Word) mercury__getopt__OptionData_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_14, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 920 "getopt.m"
                  {
#line 920 "getopt.m"
                    MR_Word mercury__getopt__TypeCtorInfo_55_55;
#line 920 "getopt.m"
                    MR_Word mercury__getopt__V_38_38;
#line 920 "getopt.m"
                    MR_Word mercury__getopt__V_39_39;
#line 920 "getopt.m"
                    MR_Word mercury__getopt__OptionTable_48;

#line 921 "getopt.m"
                    {
#line 921 "getopt.m"
                      mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__Flag_9, mercury__getopt__STATE_VARIABLE_OptionsSet_0_23, mercury__getopt__STATE_VARIABLE_OptionsSet_24);
                    }
#line 922 "getopt.m"
                    mercury__getopt__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 922 "getopt.m"
                    mercury__getopt__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__getopt_scalar_common_1[6]);
#line 9257 "getopt.c"
                    mercury__getopt__TypeCtorInfo_55_55 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 922 "getopt.m"
                    {
#line 922 "getopt.m"
                      mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__TypeCtorInfo_55_55, mercury__getopt__Flag_9, ((MR_Box) (mercury__getopt__V_38_38)), mercury__getopt__OptionTable0_11, &mercury__getopt__OptionTable_48);
                    }
#line 923 "getopt.m"
                    {
#line 923 "getopt.m"
                      MR_Word base;
#line 923 "getopt.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 923 "getopt.m"
                      *mercury__getopt__Result_12 = base;
#line 923 "getopt.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_48));
#line 923 "getopt.m"
                    }
#line 920 "getopt.m"
                  }
#line 914 "getopt.m"
                else
#line 945 "getopt.m"
                  {
#line 945 "getopt.m"
                    MR_Word mercury__getopt__Error_22;
#line 945 "getopt.m"
                    MR_Word mercury__getopt__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));

#line 946 "getopt.m"
                    {
#line 946 "getopt.m"
                      mercury__getopt__Error_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 946 "getopt.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt__Error_22, 0) = mercury__getopt__Flag_9;
#line 946 "getopt.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt__Error_22, 1) = ((MR_Box) (mercury__getopt__Option_8));
#line 946 "getopt.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt__Error_22, 2) = ((MR_Box) (mercury__getopt__V_25_25));
#line 946 "getopt.m"
                    }
#line 947 "getopt.m"
                    {
#line 947 "getopt.m"
                      MR_Word base;
#line 947 "getopt.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 947 "getopt.m"
                      *mercury__getopt__Result_12 = base;
#line 947 "getopt.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_22));
#line 947 "getopt.m"
                    }
#line 947 "getopt.m"
                    *mercury__getopt__STATE_VARIABLE_OptionsSet_24 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_23;
#line 945 "getopt.m"
                  }
#line 949 "getopt.m"
    else
#line 950 "getopt.m"
      {
#line 950 "getopt.m"
        MR_Word mercury__getopt__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 950 "getopt.m"
        MR_Word mercury__getopt__Error_50;

#line 950 "getopt.m"
        {
#line 950 "getopt.m"
          mercury__getopt__Error_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 950 "getopt.m"
          MR_hl_field(MR_mktag(1), mercury__getopt__Error_50, 0) = mercury__getopt__Flag_9;
#line 950 "getopt.m"
          MR_hl_field(MR_mktag(1), mercury__getopt__Error_50, 1) = ((MR_Box) (mercury__getopt__Option_8));
#line 950 "getopt.m"
          MR_hl_field(MR_mktag(1), mercury__getopt__Error_50, 2) = ((MR_Box) (mercury__getopt__V_46_46));
#line 950 "getopt.m"
        }
#line 951 "getopt.m"
        {
#line 951 "getopt.m"
          MR_Word base;
#line 951 "getopt.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 951 "getopt.m"
          *mercury__getopt__Result_12 = base;
#line 951 "getopt.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_50));
#line 951 "getopt.m"
        }
#line 951 "getopt.m"
        *mercury__getopt__STATE_VARIABLE_OptionsSet_24 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_23;
#line 950 "getopt.m"
      }
#line 949 "getopt.m"
  }
#line 901 "getopt.m"
}

#line 758 "getopt.m"
static void MR_CALL 
mercury__getopt__process_option_9_p_0(
#line 758 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_204,
#line 758 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 758 "getopt.m"
  MR_String mercury__getopt__HeadVar__2_2,
#line 758 "getopt.m"
  MR_Box mercury__getopt__Flag_3,
#line 758 "getopt.m"
  MR_Word mercury__getopt__MaybeArg_4,
#line 758 "getopt.m"
  MR_Word mercury__getopt__HeadVar__5_5,
#line 758 "getopt.m"
  MR_Word mercury__getopt__HeadVar__6_6,
#line 758 "getopt.m"
  MR_Word * mercury__getopt__Result_7,
#line 758 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_8,
#line 758 "getopt.m"
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_9)
#line 758 "getopt.m"
{
#line 765 "getopt.m"
  {
#line 765 "getopt.m"
    MR_bool mercury__getopt__succeeded;

#line 765 "getopt.m"
    if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 852 "getopt.m"
      {
#line 852 "getopt.m"
        MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_153_153;

#line 853 "getopt.m"
        {
#line 853 "getopt.m"
          mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt__STATE_VARIABLE_OptionsSet_153_153);
        }
#line 858 "getopt.m"
        if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 859 "getopt.m"
          {
#line 859 "getopt.m"
            MR_Word mercury__getopt__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[0]);

#line 860 "getopt.m"
            {
#line 860 "getopt.m"
              mercury__getopt__process_special_8_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__HeadVar__2_2, mercury__getopt__Flag_3, mercury__getopt__V_154_154, mercury__getopt__HeadVar__5_5, mercury__getopt__HeadVar__6_6, mercury__getopt__Result_7, mercury__getopt__STATE_VARIABLE_OptionsSet_153_153, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
#line 860 "getopt.m"
              return;
            }
#line 859 "getopt.m"
          }
#line 858 "getopt.m"
        else
#line 855 "getopt.m"
          {
#line 855 "getopt.m"
            MR_Word mercury__getopt__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[1]);

#line 856 "getopt.m"
            {
#line 856 "getopt.m"
              mercury__getopt__process_special_8_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__HeadVar__2_2, mercury__getopt__Flag_3, mercury__getopt__V_157_157, mercury__getopt__HeadVar__5_5, mercury__getopt__HeadVar__6_6, mercury__getopt__Result_7, mercury__getopt__STATE_VARIABLE_OptionsSet_153_153, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
#line 856 "getopt.m"
              return;
            }
#line 855 "getopt.m"
          }
#line 852 "getopt.m"
      }
#line 765 "getopt.m"
    else
#line 765 "getopt.m"
      if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 864 "getopt.m"
        {
#line 864 "getopt.m"
          MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_171_171;

#line 865 "getopt.m"
          {
#line 865 "getopt.m"
            mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt__STATE_VARIABLE_OptionsSet_171_171);
          }
#line 874 "getopt.m"
          if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 875 "getopt.m"
            {
#line 876 "getopt.m"
              {
#line 876 "getopt.m"
                mercury__require__error_1_p_0((MR_String) "int_special argument expected in getopt.process_option");
#line 876 "getopt.m"
                return;
              }
#line 875 "getopt.m"
            }
#line 874 "getopt.m"
          else
#line 867 "getopt.m"
            {
#line 867 "getopt.m"
              MR_String mercury__getopt__Arg_167 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__MaybeArg_4, (MR_Integer) 0)));
#line 871 "getopt.m"
              MR_Integer mercury__getopt__IntArg_168;

#line 868 "getopt.m"
              {
#line 868 "getopt.m"
                mercury__getopt__succeeded = mercury__string__to_int_2_p_0(mercury__getopt__Arg_167, &mercury__getopt__IntArg_168);
              }
#line 871 "getopt.m"
              if (mercury__getopt__succeeded)
#line 869 "getopt.m"
                {
#line 869 "getopt.m"
                  MR_Word mercury__getopt__V_173_173;

#line 869 "getopt.m"
                  {
#line 869 "getopt.m"
                    mercury__getopt__V_173_173 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 869 "getopt.m"
                    MR_hl_field(MR_mktag(2), mercury__getopt__V_173_173, 0) = ((MR_Box) (mercury__getopt__IntArg_168));
#line 869 "getopt.m"
                  }
#line 869 "getopt.m"
                  {
#line 869 "getopt.m"
                    mercury__getopt__process_special_8_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__HeadVar__2_2, mercury__getopt__Flag_3, mercury__getopt__V_173_173, mercury__getopt__HeadVar__5_5, mercury__getopt__HeadVar__6_6, mercury__getopt__Result_7, mercury__getopt__STATE_VARIABLE_OptionsSet_171_171, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
#line 869 "getopt.m"
                    return;
                  }
#line 869 "getopt.m"
                }
#line 871 "getopt.m"
              else
#line 872 "getopt.m"
                {
#line 872 "getopt.m"
                  {
#line 872 "getopt.m"
                    mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(mercury__getopt__Flag_3, mercury__getopt__HeadVar__2_2, mercury__getopt__Arg_167, mercury__getopt__Result_7);
                  }
#line 872 "getopt.m"
                  *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_171_171;
#line 872 "getopt.m"
                }
#line 867 "getopt.m"
            }
#line 864 "getopt.m"
        }
#line 765 "getopt.m"
      else
#line 765 "getopt.m"
        if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 895 "getopt.m"
          if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 896 "getopt.m"
            {
#line 897 "getopt.m"
              {
#line 897 "getopt.m"
                mercury__require__error_1_p_0((MR_String) "maybe_string_special argument expected in getopt.process_option");
#line 897 "getopt.m"
                return;
              }
#line 896 "getopt.m"
            }
#line 895 "getopt.m"
          else
#line 892 "getopt.m"
            {
#line 892 "getopt.m"
              MR_Word mercury__getopt__V_202_202;

#line 893 "getopt.m"
              {
#line 893 "getopt.m"
                mercury__getopt__V_202_202 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 893 "getopt.m"
                MR_hl_field(MR_mktag(3), mercury__getopt__V_202_202, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 893 "getopt.m"
                MR_hl_field(MR_mktag(3), mercury__getopt__V_202_202, 1) = ((MR_Box) (mercury__getopt__MaybeArg_4));
#line 893 "getopt.m"
              }
#line 893 "getopt.m"
              {
#line 893 "getopt.m"
                mercury__getopt__process_special_8_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__HeadVar__2_2, mercury__getopt__Flag_3, mercury__getopt__V_202_202, mercury__getopt__HeadVar__5_5, mercury__getopt__HeadVar__6_6, mercury__getopt__Result_7, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
#line 893 "getopt.m"
                return;
              }
#line 892 "getopt.m"
            }
#line 765 "getopt.m"
        else
#line 765 "getopt.m"
          if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 841 "getopt.m"
            {
#line 841 "getopt.m"
              MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_139_139;

#line 842 "getopt.m"
              {
#line 842 "getopt.m"
                mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt__STATE_VARIABLE_OptionsSet_139_139);
              }
#line 846 "getopt.m"
              if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 847 "getopt.m"
                {
#line 847 "getopt.m"
                  MR_Word mercury__getopt__V_140_140 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 848 "getopt.m"
                  {
#line 848 "getopt.m"
                    mercury__getopt__process_special_8_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__HeadVar__2_2, mercury__getopt__Flag_3, mercury__getopt__V_140_140, mercury__getopt__HeadVar__5_5, mercury__getopt__HeadVar__6_6, mercury__getopt__Result_7, mercury__getopt__STATE_VARIABLE_OptionsSet_139_139, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
#line 848 "getopt.m"
                    return;
                  }
#line 847 "getopt.m"
                }
#line 846 "getopt.m"
              else
#line 844 "getopt.m"
                {
#line 845 "getopt.m"
                  {
#line 845 "getopt.m"
                    mercury__require__error_1_p_0((MR_String) "no special argument expected in getopt.process_option");
#line 845 "getopt.m"
                    return;
                  }
#line 844 "getopt.m"
                }
#line 841 "getopt.m"
            }
#line 765 "getopt.m"
          else
#line 765 "getopt.m"
            if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 879 "getopt.m"
              {
#line 879 "getopt.m"
                MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_185_185;

#line 880 "getopt.m"
                {
#line 880 "getopt.m"
                  mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt__STATE_VARIABLE_OptionsSet_185_185);
                }
#line 885 "getopt.m"
                if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 886 "getopt.m"
                  {
#line 887 "getopt.m"
                    {
#line 887 "getopt.m"
                      mercury__require__error_1_p_0((MR_String) "string_special argument expected in getopt.process_option");
#line 887 "getopt.m"
                      return;
                    }
#line 886 "getopt.m"
                  }
#line 885 "getopt.m"
                else
#line 882 "getopt.m"
                  {
#line 882 "getopt.m"
                    MR_String mercury__getopt__Arg_182 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__MaybeArg_4, (MR_Integer) 0)));
#line 882 "getopt.m"
                    MR_Word mercury__getopt__V_187_187;

#line 883 "getopt.m"
                    {
#line 883 "getopt.m"
                      mercury__getopt__V_187_187 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 883 "getopt.m"
                      MR_hl_field(MR_mktag(3), mercury__getopt__V_187_187, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 883 "getopt.m"
                      MR_hl_field(MR_mktag(3), mercury__getopt__V_187_187, 1) = ((MR_Box) (mercury__getopt__Arg_182));
#line 883 "getopt.m"
                    }
#line 883 "getopt.m"
                    {
#line 883 "getopt.m"
                      mercury__getopt__process_special_8_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__HeadVar__2_2, mercury__getopt__Flag_3, mercury__getopt__V_187_187, mercury__getopt__HeadVar__5_5, mercury__getopt__HeadVar__6_6, mercury__getopt__Result_7, mercury__getopt__STATE_VARIABLE_OptionsSet_185_185, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
#line 883 "getopt.m"
                      return;
                    }
#line 882 "getopt.m"
                  }
#line 879 "getopt.m"
              }
#line 765 "getopt.m"
            else
#line 765 "getopt.m"
              if (((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 765 "getopt.m"
                {
#line 766 "getopt.m"
                  {
#line 766 "getopt.m"
                    mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
                  }
#line 771 "getopt.m"
                  if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 772 "getopt.m"
                    {
#line 772 "getopt.m"
                      MR_Word mercury__getopt__TypeCtorInfo_206_206 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 772 "getopt.m"
                      MR_Word mercury__getopt__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[0]);
#line 772 "getopt.m"
                      MR_Word mercury__getopt__OptionTable_27;

#line 773 "getopt.m"
                      {
#line 773 "getopt.m"
                        mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__TypeCtorInfo_206_206, mercury__getopt__Flag_3, ((MR_Box) (mercury__getopt__V_23_23)), mercury__getopt__HeadVar__6_6, &mercury__getopt__OptionTable_27);
                      }
#line 774 "getopt.m"
                      {
#line 774 "getopt.m"
                        MR_Word base;
#line 774 "getopt.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 774 "getopt.m"
                        *mercury__getopt__Result_7 = base;
#line 774 "getopt.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_27));
#line 774 "getopt.m"
                      }
#line 772 "getopt.m"
                    }
#line 771 "getopt.m"
                  else
#line 768 "getopt.m"
                    {
#line 768 "getopt.m"
                      MR_Word mercury__getopt__TypeCtorInfo_205_205 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 768 "getopt.m"
                      MR_Word mercury__getopt__OptionTable_19;
#line 768 "getopt.m"
                      MR_Word mercury__getopt__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[1]);

#line 769 "getopt.m"
                      {
#line 769 "getopt.m"
                        mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__TypeCtorInfo_205_205, mercury__getopt__Flag_3, ((MR_Box) (mercury__getopt__V_25_25)), mercury__getopt__HeadVar__6_6, &mercury__getopt__OptionTable_19);
                      }
#line 770 "getopt.m"
                      {
#line 770 "getopt.m"
                        MR_Word base;
#line 770 "getopt.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 770 "getopt.m"
                        *mercury__getopt__Result_7 = base;
#line 770 "getopt.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_19));
#line 770 "getopt.m"
                      }
#line 768 "getopt.m"
                    }
#line 765 "getopt.m"
                }
#line 765 "getopt.m"
              else
#line 765 "getopt.m"
                if (((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 777 "getopt.m"
                  {
#line 778 "getopt.m"
                    {
#line 778 "getopt.m"
                      mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
                    }
#line 787 "getopt.m"
                    if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 788 "getopt.m"
                      {
#line 789 "getopt.m"
                        {
#line 789 "getopt.m"
                          mercury__require__error_1_p_0((MR_String) "integer argument expected in getopt.process_option");
#line 789 "getopt.m"
                          return;
                        }
#line 788 "getopt.m"
                      }
#line 787 "getopt.m"
                    else
#line 780 "getopt.m"
                      {
#line 780 "getopt.m"
                        MR_String mercury__getopt__Arg_36 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__MaybeArg_4, (MR_Integer) 0)));
#line 784 "getopt.m"
                        MR_Integer mercury__getopt__IntArg_37;

#line 781 "getopt.m"
                        {
#line 781 "getopt.m"
                          mercury__getopt__succeeded = mercury__string__to_int_2_p_0(mercury__getopt__Arg_36, &mercury__getopt__IntArg_37);
                        }
#line 784 "getopt.m"
                        if (mercury__getopt__succeeded)
#line 782 "getopt.m"
                          {
#line 782 "getopt.m"
                            MR_Word mercury__getopt__TypeCtorInfo_207_207;
#line 782 "getopt.m"
                            MR_Word mercury__getopt__V_43_43;
#line 782 "getopt.m"
                            MR_Word mercury__getopt__STATE_VARIABLE_OptionTable_44_44;

#line 782 "getopt.m"
                            {
#line 782 "getopt.m"
                              mercury__getopt__V_43_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 782 "getopt.m"
                              MR_hl_field(MR_mktag(2), mercury__getopt__V_43_43, 0) = ((MR_Box) (mercury__getopt__IntArg_37));
#line 782 "getopt.m"
                            }
#line 9790 "getopt.c"
                            mercury__getopt__TypeCtorInfo_207_207 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 782 "getopt.m"
                            {
#line 782 "getopt.m"
                              mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__TypeCtorInfo_207_207, mercury__getopt__Flag_3, ((MR_Box) (mercury__getopt__V_43_43)), mercury__getopt__HeadVar__6_6, &mercury__getopt__STATE_VARIABLE_OptionTable_44_44);
                            }
#line 783 "getopt.m"
                            {
#line 783 "getopt.m"
                              MR_Word base;
#line 783 "getopt.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 783 "getopt.m"
                              *mercury__getopt__Result_7 = base;
#line 783 "getopt.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__STATE_VARIABLE_OptionTable_44_44));
#line 783 "getopt.m"
                            }
#line 782 "getopt.m"
                          }
#line 784 "getopt.m"
                        else
#line 785 "getopt.m"
                          {
#line 785 "getopt.m"
                            mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(mercury__getopt__Flag_3, mercury__getopt__HeadVar__2_2, mercury__getopt__Arg_36, mercury__getopt__Result_7);
#line 785 "getopt.m"
                            return;
                          }
#line 780 "getopt.m"
                      }
#line 777 "getopt.m"
                  }
#line 765 "getopt.m"
                else
#line 765 "getopt.m"
                  if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 829 "getopt.m"
                    {
#line 829 "getopt.m"
                      MR_Word mercury__getopt__List0_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));

#line 830 "getopt.m"
                      {
#line 830 "getopt.m"
                        mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
                      }
#line 836 "getopt.m"
                      if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 837 "getopt.m"
                        {
#line 838 "getopt.m"
                          {
#line 838 "getopt.m"
                            mercury__require__error_1_p_0((MR_String) "acumulating argument expected in getopt.process_option");
#line 838 "getopt.m"
                            return;
                          }
#line 837 "getopt.m"
                        }
#line 836 "getopt.m"
                      else
#line 832 "getopt.m"
                        {
#line 832 "getopt.m"
                          MR_Word mercury__getopt__TypeCtorInfo_211_211;
#line 832 "getopt.m"
                          MR_Word mercury__getopt__TypeCtorInfo_212_212;
#line 832 "getopt.m"
                          MR_String mercury__getopt__Arg_116 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__MaybeArg_4, (MR_Integer) 0)));
#line 832 "getopt.m"
                          MR_Word mercury__getopt__List_117;
#line 832 "getopt.m"
                          MR_Word mercury__getopt__V_123_123;
#line 832 "getopt.m"
                          MR_Word mercury__getopt__V_124_124 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 832 "getopt.m"
                          MR_Word mercury__getopt__V_125_125;
#line 832 "getopt.m"
                          MR_Word mercury__getopt__STATE_VARIABLE_OptionTable_126_126;

#line 833 "getopt.m"
                          {
#line 833 "getopt.m"
                            mercury__getopt__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 833 "getopt.m"
                            MR_hl_field(MR_mktag(1), mercury__getopt__V_123_123, 0) = ((MR_Box) (mercury__getopt__Arg_116));
#line 833 "getopt.m"
                            MR_hl_field(MR_mktag(1), mercury__getopt__V_123_123, 1) = ((MR_Box) (mercury__getopt__V_124_124));
#line 833 "getopt.m"
                          }
#line 9882 "getopt.c"
                          mercury__getopt__TypeCtorInfo_211_211 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 833 "getopt.m"
                          {
#line 833 "getopt.m"
                            mercury__list__append_3_p_1(mercury__getopt__TypeCtorInfo_211_211, mercury__getopt__List0_108, mercury__getopt__V_123_123, &mercury__getopt__List_117);
                          }
#line 834 "getopt.m"
                          {
#line 834 "getopt.m"
                            mercury__getopt__V_125_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 834 "getopt.m"
                            MR_hl_field(MR_mktag(3), mercury__getopt__V_125_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 834 "getopt.m"
                            MR_hl_field(MR_mktag(3), mercury__getopt__V_125_125, 1) = ((MR_Box) (mercury__getopt__List_117));
#line 834 "getopt.m"
                          }
#line 9899 "getopt.c"
                          mercury__getopt__TypeCtorInfo_212_212 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 834 "getopt.m"
                          {
#line 834 "getopt.m"
                            mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__TypeCtorInfo_212_212, mercury__getopt__Flag_3, ((MR_Box) (mercury__getopt__V_125_125)), mercury__getopt__HeadVar__6_6, &mercury__getopt__STATE_VARIABLE_OptionTable_126_126);
                          }
#line 835 "getopt.m"
                          {
#line 835 "getopt.m"
                            MR_Word base;
#line 835 "getopt.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 835 "getopt.m"
                            *mercury__getopt__Result_7 = base;
#line 835 "getopt.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__STATE_VARIABLE_OptionTable_126_126));
#line 835 "getopt.m"
                          }
#line 832 "getopt.m"
                        }
#line 829 "getopt.m"
                    }
#line 765 "getopt.m"
                  else
#line 765 "getopt.m"
                    if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 803 "getopt.m"
                      {
#line 804 "getopt.m"
                        {
#line 804 "getopt.m"
                          mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
                        }
#line 813 "getopt.m"
                        if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 814 "getopt.m"
                          {
#line 815 "getopt.m"
                            {
#line 815 "getopt.m"
                              mercury__require__error_1_p_0((MR_String) "integer argument expected in getopt.process_option");
#line 815 "getopt.m"
                              return;
                            }
#line 814 "getopt.m"
                          }
#line 813 "getopt.m"
                        else
#line 806 "getopt.m"
                          {
#line 806 "getopt.m"
                            MR_String mercury__getopt__Arg_75 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__MaybeArg_4, (MR_Integer) 0)));
#line 810 "getopt.m"
                            MR_Integer mercury__getopt__IntArg_76;

#line 807 "getopt.m"
                            {
#line 807 "getopt.m"
                              mercury__getopt__succeeded = mercury__string__to_int_2_p_0(mercury__getopt__Arg_75, &mercury__getopt__IntArg_76);
                            }
#line 810 "getopt.m"
                            if (mercury__getopt__succeeded)
#line 808 "getopt.m"
                              {
#line 808 "getopt.m"
                                MR_Word mercury__getopt__TypeCtorInfo_209_209;
#line 808 "getopt.m"
                                MR_Word mercury__getopt__V_82_82;
#line 808 "getopt.m"
                                MR_Word mercury__getopt__STATE_VARIABLE_OptionTable_83_83;
#line 808 "getopt.m"
                                MR_Word mercury__getopt__V_84_84;

#line 808 "getopt.m"
                                {
#line 808 "getopt.m"
                                  mercury__getopt__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 808 "getopt.m"
                                  MR_hl_field(MR_mktag(1), mercury__getopt__V_84_84, 0) = ((MR_Box) (mercury__getopt__IntArg_76));
#line 808 "getopt.m"
                                }
#line 808 "getopt.m"
                                {
#line 808 "getopt.m"
                                  mercury__getopt__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 808 "getopt.m"
                                  MR_hl_field(MR_mktag(3), mercury__getopt__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 808 "getopt.m"
                                  MR_hl_field(MR_mktag(3), mercury__getopt__V_82_82, 1) = ((MR_Box) (mercury__getopt__V_84_84));
#line 808 "getopt.m"
                                }
#line 9991 "getopt.c"
                                mercury__getopt__TypeCtorInfo_209_209 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 808 "getopt.m"
                                {
#line 808 "getopt.m"
                                  mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__TypeCtorInfo_209_209, mercury__getopt__Flag_3, ((MR_Box) (mercury__getopt__V_82_82)), mercury__getopt__HeadVar__6_6, &mercury__getopt__STATE_VARIABLE_OptionTable_83_83);
                                }
#line 809 "getopt.m"
                                {
#line 809 "getopt.m"
                                  MR_Word base;
#line 809 "getopt.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 809 "getopt.m"
                                  *mercury__getopt__Result_7 = base;
#line 809 "getopt.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__STATE_VARIABLE_OptionTable_83_83));
#line 809 "getopt.m"
                                }
#line 808 "getopt.m"
                              }
#line 810 "getopt.m"
                            else
#line 811 "getopt.m"
                              {
#line 811 "getopt.m"
                                mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(mercury__getopt__Flag_3, mercury__getopt__HeadVar__2_2, mercury__getopt__Arg_75, mercury__getopt__Result_7);
#line 811 "getopt.m"
                                return;
                              }
#line 806 "getopt.m"
                          }
#line 803 "getopt.m"
                      }
#line 765 "getopt.m"
                    else
#line 765 "getopt.m"
                      if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 818 "getopt.m"
                        {
#line 819 "getopt.m"
                          {
#line 819 "getopt.m"
                            mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
                          }
#line 824 "getopt.m"
                          if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 825 "getopt.m"
                            {
#line 826 "getopt.m"
                              {
#line 826 "getopt.m"
                                mercury__require__error_1_p_0((MR_String) "string argument expected in getopt.process_option");
#line 826 "getopt.m"
                                return;
                              }
#line 825 "getopt.m"
                            }
#line 824 "getopt.m"
                          else
#line 821 "getopt.m"
                            {
#line 821 "getopt.m"
                              MR_Word mercury__getopt__TypeCtorInfo_210_210;
#line 821 "getopt.m"
                              MR_Word mercury__getopt__V_103_103;
#line 821 "getopt.m"
                              MR_Word mercury__getopt__STATE_VARIABLE_OptionTable_104_104;

#line 822 "getopt.m"
                              {
#line 822 "getopt.m"
                                mercury__getopt__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 822 "getopt.m"
                                MR_hl_field(MR_mktag(3), mercury__getopt__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 822 "getopt.m"
                                MR_hl_field(MR_mktag(3), mercury__getopt__V_103_103, 1) = ((MR_Box) (mercury__getopt__MaybeArg_4));
#line 822 "getopt.m"
                              }
#line 10070 "getopt.c"
                              mercury__getopt__TypeCtorInfo_210_210 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 822 "getopt.m"
                              {
#line 822 "getopt.m"
                                mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__TypeCtorInfo_210_210, mercury__getopt__Flag_3, ((MR_Box) (mercury__getopt__V_103_103)), mercury__getopt__HeadVar__6_6, &mercury__getopt__STATE_VARIABLE_OptionTable_104_104);
                              }
#line 823 "getopt.m"
                              {
#line 823 "getopt.m"
                                MR_Word base;
#line 823 "getopt.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 823 "getopt.m"
                                *mercury__getopt__Result_7 = base;
#line 823 "getopt.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__STATE_VARIABLE_OptionTable_104_104));
#line 823 "getopt.m"
                              }
#line 821 "getopt.m"
                            }
#line 818 "getopt.m"
                        }
#line 765 "getopt.m"
                      else
#line 792 "getopt.m"
                        {
#line 793 "getopt.m"
                          {
#line 793 "getopt.m"
                            mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
                          }
#line 798 "getopt.m"
                          if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 799 "getopt.m"
                            {
#line 800 "getopt.m"
                              {
#line 800 "getopt.m"
                                mercury__require__error_1_p_0((MR_String) "string argument expected in getopt.process_option");
#line 800 "getopt.m"
                                return;
                              }
#line 799 "getopt.m"
                            }
#line 798 "getopt.m"
                          else
#line 795 "getopt.m"
                            {
#line 795 "getopt.m"
                              MR_Word mercury__getopt__TypeCtorInfo_208_208;
#line 795 "getopt.m"
                              MR_String mercury__getopt__Arg_57 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__MaybeArg_4, (MR_Integer) 0)));
#line 795 "getopt.m"
                              MR_Word mercury__getopt__V_63_63;
#line 795 "getopt.m"
                              MR_Word mercury__getopt__STATE_VARIABLE_OptionTable_64_64;

#line 796 "getopt.m"
                              {
#line 796 "getopt.m"
                                mercury__getopt__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 796 "getopt.m"
                                MR_hl_field(MR_mktag(3), mercury__getopt__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 796 "getopt.m"
                                MR_hl_field(MR_mktag(3), mercury__getopt__V_63_63, 1) = ((MR_Box) (mercury__getopt__Arg_57));
#line 796 "getopt.m"
                              }
#line 10138 "getopt.c"
                              mercury__getopt__TypeCtorInfo_208_208 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 796 "getopt.m"
                              {
#line 796 "getopt.m"
                                mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__TypeCtorInfo_208_208, mercury__getopt__Flag_3, ((MR_Box) (mercury__getopt__V_63_63)), mercury__getopt__HeadVar__6_6, &mercury__getopt__STATE_VARIABLE_OptionTable_64_64);
                              }
#line 797 "getopt.m"
                              {
#line 797 "getopt.m"
                                MR_Word base;
#line 797 "getopt.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 797 "getopt.m"
                                *mercury__getopt__Result_7 = base;
#line 797 "getopt.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__STATE_VARIABLE_OptionTable_64_64));
#line 797 "getopt.m"
                              }
#line 795 "getopt.m"
                            }
#line 792 "getopt.m"
                        }
#line 765 "getopt.m"
  }
#line 758 "getopt.m"
}

#line 686 "getopt.m"
static void MR_CALL 
mercury__getopt__handle_short_options_10_p_0(
#line 686 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_60,
#line 686 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 686 "getopt.m"
  MR_Word mercury__getopt__OptionOps_2,
#line 686 "getopt.m"
  MR_Word mercury__getopt__HeadVar__3_3,
#line 686 "getopt.m"
  MR_Word * mercury__getopt__Args_4,
#line 686 "getopt.m"
  MR_Word mercury__getopt__HeadVar__5_5,
#line 686 "getopt.m"
  MR_Word * mercury__getopt__OptionArgs_6,
#line 686 "getopt.m"
  MR_Word mercury__getopt__HeadVar__7_7,
#line 686 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__8_8,
#line 686 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_9,
#line 686 "getopt.m"
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_10)
#line 686 "getopt.m"
{
#line 693 "getopt.m"
  while (MR_TRUE)
#line 693 "getopt.m"
    {
#line 693 "getopt.m"
      /* tailcall optimized into a loop */
#line 693 "getopt.m"
      {
#line 693 "getopt.m"
        MR_bool mercury__getopt__succeeded;

#line 693 "getopt.m"
        if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 693 "getopt.m"
          {
#line 693 "getopt.m"
            *mercury__getopt__Args_4 = mercury__getopt__HeadVar__3_3;
#line 693 "getopt.m"
            *mercury__getopt__OptionArgs_6 = mercury__getopt__HeadVar__5_5;
#line 694 "getopt.m"
            {
#line 694 "getopt.m"
              MR_Word base;
#line 694 "getopt.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 694 "getopt.m"
              *mercury__getopt__HeadVar__8_8 = base;
#line 694 "getopt.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__HeadVar__7_7));
#line 694 "getopt.m"
            }
#line 694 "getopt.m"
            *mercury__getopt__STATE_VARIABLE_OptionsSet_10 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_9;
#line 693 "getopt.m"
          }
#line 693 "getopt.m"
        else
#line 696 "getopt.m"
          {
#line 696 "getopt.m"
            MR_Char mercury__getopt__Opt_18 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 696 "getopt.m"
            MR_Word mercury__getopt__Opts0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
#line 696 "getopt.m"
            MR_Word mercury__getopt__ShortOptionPred_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_2, (MR_Integer) 0)));
#line 697 "getopt.m"
            MR_Word mercury__getopt__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_2, (MR_Integer) 1)));
#line 697 "getopt.m"
            MR_Word mercury__getopt__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_2, (MR_Integer) 2)));
#line 731 "getopt.m"
            MR_Box mercury__getopt__Flag_29;
#line 698 "getopt.m"
            MR_bool MR_CALL (* mercury__getopt__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt__ShortOptionPred_28, (MR_Integer) 1)));

#line 698 "getopt.m"
            {
#line 698 "getopt.m"
              mercury__getopt__succeeded = mercury__getopt__func_0(((MR_Box) mercury__getopt__ShortOptionPred_28), ((MR_Box) (MR_Word) (mercury__getopt__Opt_18)), &mercury__getopt__Flag_29);
            }
#line 731 "getopt.m"
            if (mercury__getopt__succeeded)
#line 724 "getopt.m"
              {
#line 724 "getopt.m"
                MR_Word mercury__getopt__OptionData_30;
#line 699 "getopt.m"
                MR_Word mercury__getopt__TypeCtorInfo_61_61 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 39 "map.opt"
                MR_Box mercury__getopt__conv1_OptionData_30;

#line 39 "map.opt"
                {
#line 39 "map.opt"
                  mercury__getopt__succeeded = mercury__tree234__search_3_p_0(mercury__getopt__TypeInfo_for_OptionType_60, mercury__getopt__TypeCtorInfo_61_61, mercury__getopt__HeadVar__7_7, mercury__getopt__Flag_29, &mercury__getopt__conv1_OptionData_30);
                }
#line 39 "map.opt"
                if (mercury__getopt__succeeded)
#line 39 "map.opt"
                  {
#line 39 "map.opt"
                    mercury__getopt__OptionData_30 = ((MR_Word) mercury__getopt__conv1_OptionData_30);
#line 39 "map.opt"
                    mercury__getopt__succeeded = MR_TRUE;
#line 39 "map.opt"
                  }
#line 724 "getopt.m"
                if (mercury__getopt__succeeded)
#line 710 "getopt.m"
                  {
#line 710 "getopt.m"
                    MR_Word mercury__getopt__Args1_32;
#line 710 "getopt.m"
                    MR_Word mercury__getopt__OptionArgs1_33;
#line 710 "getopt.m"
                    MR_Word mercury__getopt__MaybeOptionArg_34;
#line 710 "getopt.m"
                    MR_Word mercury__getopt__Opts1_35;
#line 710 "getopt.m"
                    MR_String mercury__getopt__Option_36;
#line 710 "getopt.m"
                    MR_Word mercury__getopt__Result1_37;
#line 710 "getopt.m"
                    MR_Word mercury__getopt__V_45_45;
#line 710 "getopt.m"
                    MR_Word mercury__getopt__V_47_47;
#line 710 "getopt.m"
                    MR_Word mercury__getopt__V_48_48;
#line 710 "getopt.m"
                    MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_49_49;
#line 700 "getopt.m"
                    MR_Word mercury__getopt__V_62_62;

#line 1010 "getopt.m"
                    if ((mercury__getopt__OptionData_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1017 "getopt.m"
                      mercury__getopt__V_62_62 = (MR_Integer) 0;
#line 1010 "getopt.m"
                    else
#line 1010 "getopt.m"
                      if ((mercury__getopt__OptionData_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1018 "getopt.m"
                        mercury__getopt__V_62_62 = (MR_Integer) 1;
#line 1010 "getopt.m"
                      else
#line 1010 "getopt.m"
                        if ((mercury__getopt__OptionData_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1020 "getopt.m"
                          mercury__getopt__V_62_62 = (MR_Integer) 1;
#line 1010 "getopt.m"
                        else
#line 1010 "getopt.m"
                          if ((mercury__getopt__OptionData_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1016 "getopt.m"
                            mercury__getopt__V_62_62 = (MR_Integer) 0;
#line 1010 "getopt.m"
                          else
#line 1010 "getopt.m"
                            if ((mercury__getopt__OptionData_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1019 "getopt.m"
                              mercury__getopt__V_62_62 = (MR_Integer) 1;
#line 1010 "getopt.m"
                            else
#line 1010 "getopt.m"
                              if (((MR_tag((MR_Word) mercury__getopt__OptionData_30)) == (MR_mktag((MR_Integer) 1))))
#line 1010 "getopt.m"
                                mercury__getopt__V_62_62 = (MR_Integer) 0;
#line 1010 "getopt.m"
                              else
#line 1010 "getopt.m"
                                if (((MR_tag((MR_Word) mercury__getopt__OptionData_30)) == (MR_mktag((MR_Integer) 2))))
#line 1011 "getopt.m"
                                  mercury__getopt__V_62_62 = (MR_Integer) 1;
#line 1010 "getopt.m"
                                else
#line 1010 "getopt.m"
                                  if (((((MR_tag((MR_Word) mercury__getopt__OptionData_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_30, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1015 "getopt.m"
                                    mercury__getopt__V_62_62 = (MR_Integer) 1;
#line 1010 "getopt.m"
                                  else
#line 1010 "getopt.m"
                                    if (((((MR_tag((MR_Word) mercury__getopt__OptionData_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_30, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1013 "getopt.m"
                                      mercury__getopt__V_62_62 = (MR_Integer) 1;
#line 1010 "getopt.m"
                                    else
#line 1010 "getopt.m"
                                      if (((((MR_tag((MR_Word) mercury__getopt__OptionData_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_30, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1014 "getopt.m"
                                        mercury__getopt__V_62_62 = (MR_Integer) 1;
#line 1010 "getopt.m"
                                      else
#line 1012 "getopt.m"
                                        mercury__getopt__V_62_62 = (MR_Integer) 1;
#line 700 "getopt.m"
                    mercury__getopt__succeeded = ((MR_Integer) 1 == mercury__getopt__V_62_62);
#line 705 "getopt.m"
                    if (mercury__getopt__succeeded)
#line 702 "getopt.m"
                      {
#line 702 "getopt.m"
                        MR_String mercury__getopt__Arg_31;
#line 752 "getopt.m"
                        MR_String mercury__getopt__ArgPrime_78;
#line 752 "getopt.m"
                        MR_Word mercury__getopt__ArgsPrime_79;

#line 746 "getopt.m"
                        mercury__getopt__succeeded = (mercury__getopt__Opts0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 746 "getopt.m"
                        if (mercury__getopt__succeeded)
#line 746 "getopt.m"
                          {
#line 747 "getopt.m"
                            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 747 "getopt.m"
                            if (mercury__getopt__succeeded)
#line 747 "getopt.m"
                              {
#line 747 "getopt.m"
                                mercury__getopt__ArgPrime_78 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
#line 747 "getopt.m"
                                mercury__getopt__ArgsPrime_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
#line 747 "getopt.m"
                              }
#line 746 "getopt.m"
                          }
#line 752 "getopt.m"
                        if (mercury__getopt__succeeded)
#line 749 "getopt.m"
                          {
#line 749 "getopt.m"
                            {
#line 749 "getopt.m"
                              mercury__getopt__OptionArgs1_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "getopt.m"
                              MR_hl_field(MR_mktag(1), mercury__getopt__OptionArgs1_33, 0) = ((MR_Box) (mercury__getopt__ArgPrime_78));
#line 749 "getopt.m"
                              MR_hl_field(MR_mktag(1), mercury__getopt__OptionArgs1_33, 1) = ((MR_Box) (mercury__getopt__HeadVar__5_5));
#line 749 "getopt.m"
                            }
#line 750 "getopt.m"
                            mercury__getopt__Arg_31 = mercury__getopt__ArgPrime_78;
#line 751 "getopt.m"
                            mercury__getopt__Args1_32 = mercury__getopt__ArgsPrime_79;
#line 749 "getopt.m"
                          }
#line 752 "getopt.m"
                        else
#line 753 "getopt.m"
                          {
#line 753 "getopt.m"
                            {
#line 753 "getopt.m"
                              mercury__string__from_char_list_2_p_0(mercury__getopt__Opts0_19, &mercury__getopt__Arg_31);
                            }
#line 754 "getopt.m"
                            mercury__getopt__OptionArgs1_33 = mercury__getopt__HeadVar__5_5;
#line 755 "getopt.m"
                            mercury__getopt__Args1_32 = mercury__getopt__HeadVar__3_3;
#line 753 "getopt.m"
                          }
#line 703 "getopt.m"
                        {
#line 703 "getopt.m"
                          mercury__getopt__MaybeOptionArg_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 703 "getopt.m"
                          MR_hl_field(MR_mktag(1), mercury__getopt__MaybeOptionArg_34, 0) = ((MR_Box) (mercury__getopt__Arg_31));
#line 703 "getopt.m"
                        }
#line 704 "getopt.m"
                        mercury__getopt__Opts1_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 702 "getopt.m"
                      }
#line 705 "getopt.m"
                    else
#line 706 "getopt.m"
                      {
#line 706 "getopt.m"
                        mercury__getopt__MaybeOptionArg_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 707 "getopt.m"
                        mercury__getopt__Opts1_35 = mercury__getopt__Opts0_19;
#line 708 "getopt.m"
                        mercury__getopt__OptionArgs1_33 = mercury__getopt__HeadVar__5_5;
#line 709 "getopt.m"
                        mercury__getopt__Args1_32 = mercury__getopt__HeadVar__3_3;
#line 706 "getopt.m"
                      }
#line 711 "getopt.m"
                    mercury__getopt__V_48_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 711 "getopt.m"
                    {
#line 711 "getopt.m"
                      mercury__getopt__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 711 "getopt.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt__V_47_47, 0) = ((MR_Box) (MR_Word) (mercury__getopt__Opt_18));
#line 711 "getopt.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt__V_47_47, 1) = ((MR_Box) (mercury__getopt__V_48_48));
#line 711 "getopt.m"
                    }
#line 711 "getopt.m"
                    {
#line 711 "getopt.m"
                      mercury__getopt__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 711 "getopt.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
#line 711 "getopt.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt__V_45_45, 1) = ((MR_Box) (mercury__getopt__V_47_47));
#line 711 "getopt.m"
                    }
#line 711 "getopt.m"
                    {
#line 711 "getopt.m"
                      mercury__string__from_char_list_2_p_0(mercury__getopt__V_45_45, &mercury__getopt__Option_36);
                    }
#line 712 "getopt.m"
                    {
#line 712 "getopt.m"
                      mercury__getopt__process_option_9_p_0(mercury__getopt__TypeInfo_for_OptionType_60, mercury__getopt__OptionData_30, mercury__getopt__Option_36, mercury__getopt__Flag_29, mercury__getopt__MaybeOptionArg_34, mercury__getopt__OptionOps_2, mercury__getopt__HeadVar__7_7, &mercury__getopt__Result1_37, mercury__getopt__STATE_VARIABLE_OptionsSet_0_9, &mercury__getopt__STATE_VARIABLE_OptionsSet_49_49);
                    }
#line 718 "getopt.m"
                    if (((MR_tag((MR_Word) mercury__getopt__Result1_37)) == (MR_mktag((MR_Integer) 1))))
#line 719 "getopt.m"
                      {
#line 720 "getopt.m"
                        *mercury__getopt__HeadVar__8_8 = mercury__getopt__Result1_37;
#line 721 "getopt.m"
                        *mercury__getopt__OptionArgs_6 = mercury__getopt__OptionArgs1_33;
#line 722 "getopt.m"
                        *mercury__getopt__Args_4 = mercury__getopt__Args1_32;
#line 722 "getopt.m"
                        *mercury__getopt__STATE_VARIABLE_OptionsSet_10 = mercury__getopt__STATE_VARIABLE_OptionsSet_49_49;
#line 719 "getopt.m"
                      }
#line 718 "getopt.m"
                    else
#line 715 "getopt.m"
                      {
#line 715 "getopt.m"
                        MR_Word mercury__getopt__OptionTable1_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result1_37, (MR_Integer) 0)));

#line 716 "getopt.m"
                        /* direct tailcall eliminated */
#line 716 "getopt.m"
                        {
#line 716 "getopt.m"
                          MR_Word mercury__getopt__HeadVar__1__tmp_copy_1 = mercury__getopt__Opts1_35;
#line 716 "getopt.m"
                          MR_Word mercury__getopt__HeadVar__3__tmp_copy_3 = mercury__getopt__Args1_32;
#line 716 "getopt.m"
                          MR_Word mercury__getopt__HeadVar__5__tmp_copy_5 = mercury__getopt__OptionArgs1_33;
#line 716 "getopt.m"
                          MR_Word mercury__getopt__HeadVar__7__tmp_copy_7 = mercury__getopt__OptionTable1_38;
#line 716 "getopt.m"
                          MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0__tmp_copy_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_49_49;

#line 716 "getopt.m"
                          mercury__getopt__STATE_VARIABLE_OptionsSet_0_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_0__tmp_copy_9;
#line 716 "getopt.m"
                          mercury__getopt__HeadVar__7_7 = mercury__getopt__HeadVar__7__tmp_copy_7;
#line 716 "getopt.m"
                          mercury__getopt__HeadVar__5_5 = mercury__getopt__HeadVar__5__tmp_copy_5;
#line 716 "getopt.m"
                          mercury__getopt__HeadVar__3_3 = mercury__getopt__HeadVar__3__tmp_copy_3;
#line 716 "getopt.m"
                          mercury__getopt__HeadVar__1_1 = mercury__getopt__HeadVar__1__tmp_copy_1;
#line 716 "getopt.m"
                        }
#line 716 "getopt.m"
                        continue;
#line 715 "getopt.m"
                      }
#line 710 "getopt.m"
                  }
#line 724 "getopt.m"
                else
#line 725 "getopt.m"
                  {
#line 725 "getopt.m"
                    MR_String mercury__getopt__OptString_40;
#line 725 "getopt.m"
                    MR_Word mercury__getopt__Error_41;
#line 725 "getopt.m"
                    MR_String mercury__getopt__V_51_51;
#line 725 "getopt.m"
                    MR_Word mercury__getopt__V_53_53;
#line 725 "getopt.m"
                    MR_Word mercury__getopt__V_5_82;
#line 725 "getopt.m"
                    MR_Word mercury__getopt__V_6_83 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 288 "string.opt"
                    {
#line 288 "string.opt"
                      mercury__getopt__V_5_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "string.opt"
                      MR_hl_field(MR_mktag(1), mercury__getopt__V_5_82, 0) = ((MR_Box) (MR_Word) (mercury__getopt__Opt_18));
#line 288 "string.opt"
                      MR_hl_field(MR_mktag(1), mercury__getopt__V_5_82, 1) = ((MR_Box) (mercury__getopt__V_6_83));
#line 288 "string.opt"
                    }
#line 290 "string.opt"
                    {
#line 290 "string.opt"
                      mercury__string__to_char_list_2_p_1(&mercury__getopt__OptString_40, mercury__getopt__V_5_82);
                    }
#line 260 "string.opt"
                    {
#line 260 "string.opt"
                      mercury__string__append_3_p_2((MR_String) "-", mercury__getopt__OptString_40, &mercury__getopt__V_51_51);
                    }
#line 726 "getopt.m"
                    mercury__getopt__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 726 "getopt.m"
                    {
#line 726 "getopt.m"
                      mercury__getopt__Error_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 726 "getopt.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt__Error_41, 0) = mercury__getopt__Flag_29;
#line 726 "getopt.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt__Error_41, 1) = ((MR_Box) (mercury__getopt__V_51_51));
#line 726 "getopt.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt__Error_41, 2) = ((MR_Box) (mercury__getopt__V_53_53));
#line 726 "getopt.m"
                    }
#line 727 "getopt.m"
                    {
#line 727 "getopt.m"
                      MR_Word base;
#line 727 "getopt.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 727 "getopt.m"
                      *mercury__getopt__HeadVar__8_8 = base;
#line 727 "getopt.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_41));
#line 727 "getopt.m"
                    }
#line 728 "getopt.m"
                    *mercury__getopt__OptionArgs_6 = mercury__getopt__HeadVar__5_5;
#line 729 "getopt.m"
                    *mercury__getopt__Args_4 = mercury__getopt__HeadVar__3_3;
#line 729 "getopt.m"
                    *mercury__getopt__STATE_VARIABLE_OptionsSet_10 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_9;
#line 725 "getopt.m"
                  }
#line 724 "getopt.m"
              }
#line 731 "getopt.m"
            else
#line 732 "getopt.m"
              {
#line 732 "getopt.m"
                MR_String mercury__getopt__V_54_54;
#line 732 "getopt.m"
                MR_String mercury__getopt__OptString_56;
#line 732 "getopt.m"
                MR_Word mercury__getopt__Error_57;
#line 732 "getopt.m"
                MR_Word mercury__getopt__V_5_92;
#line 732 "getopt.m"
                MR_Word mercury__getopt__V_6_93 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 288 "string.opt"
                {
#line 288 "string.opt"
                  mercury__getopt__V_5_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "string.opt"
                  MR_hl_field(MR_mktag(1), mercury__getopt__V_5_92, 0) = ((MR_Box) (MR_Word) (mercury__getopt__Opt_18));
#line 288 "string.opt"
                  MR_hl_field(MR_mktag(1), mercury__getopt__V_5_92, 1) = ((MR_Box) (mercury__getopt__V_6_93));
#line 288 "string.opt"
                }
#line 290 "string.opt"
                {
#line 290 "string.opt"
                  mercury__string__to_char_list_2_p_1(&mercury__getopt__OptString_56, mercury__getopt__V_5_92);
                }
#line 733 "getopt.m"
                {
#line 733 "getopt.m"
                  mercury__getopt__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) "-", mercury__getopt__OptString_56);
                }
#line 733 "getopt.m"
                {
#line 733 "getopt.m"
                  mercury__getopt__Error_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 733 "getopt.m"
                  MR_hl_field(MR_mktag(0), mercury__getopt__Error_57, 0) = ((MR_Box) (mercury__getopt__V_54_54));
#line 733 "getopt.m"
                }
#line 734 "getopt.m"
                {
#line 734 "getopt.m"
                  MR_Word base;
#line 734 "getopt.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 734 "getopt.m"
                  *mercury__getopt__HeadVar__8_8 = base;
#line 734 "getopt.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_57));
#line 734 "getopt.m"
                }
#line 735 "getopt.m"
                *mercury__getopt__OptionArgs_6 = mercury__getopt__HeadVar__5_5;
#line 736 "getopt.m"
                *mercury__getopt__Args_4 = mercury__getopt__HeadVar__3_3;
#line 736 "getopt.m"
                *mercury__getopt__STATE_VARIABLE_OptionsSet_10 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_9;
#line 732 "getopt.m"
              }
#line 696 "getopt.m"
          }
#line 693 "getopt.m"
      }
#line 693 "getopt.m"
      break;
#line 693 "getopt.m"
    }
#line 686 "getopt.m"
}

#line 621 "getopt.m"
static void MR_CALL 
mercury__getopt__handle_long_option_13_p_0(
#line 621 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_48,
#line 621 "getopt.m"
  MR_String mercury__getopt__Option_14,
#line 621 "getopt.m"
  MR_Box mercury__getopt__Flag_15,
#line 621 "getopt.m"
  MR_Word mercury__getopt__OptionData_16,
#line 621 "getopt.m"
  MR_Word mercury__getopt__MaybeOptionArg0_17,
#line 621 "getopt.m"
  MR_Word mercury__getopt__Args0_18,
#line 621 "getopt.m"
  MR_Word * mercury__getopt__Args_19,
#line 621 "getopt.m"
  MR_Word mercury__getopt__OptionOps_20,
#line 621 "getopt.m"
  MR_Word mercury__getopt__OptionArgs0_21,
#line 621 "getopt.m"
  MR_Word * mercury__getopt__OptionArgs_22,
#line 621 "getopt.m"
  MR_Word mercury__getopt__OptionTable0_23,
#line 621 "getopt.m"
  MR_Word * mercury__getopt__Result_24,
#line 621 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_37,
#line 621 "getopt.m"
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_38)
#line 621 "getopt.m"
{
#line 630 "getopt.m"
  {
#line 630 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 630 "getopt.m"
    MR_Word mercury__getopt__MaybeOptionArg_28;
#line 630 "getopt.m"
    MR_Word mercury__getopt__Args1_29;
#line 630 "getopt.m"
    MR_Word mercury__getopt__MissingArg_30;
#line 630 "getopt.m"
    MR_Word mercury__getopt__OptionArgs1_31;
#line 632 "getopt.m"
    MR_Word mercury__getopt__V_49_49;

#line 1010 "getopt.m"
    if ((mercury__getopt__OptionData_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1017 "getopt.m"
      mercury__getopt__V_49_49 = (MR_Integer) 0;
#line 1010 "getopt.m"
    else
#line 1010 "getopt.m"
      if ((mercury__getopt__OptionData_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1018 "getopt.m"
        mercury__getopt__V_49_49 = (MR_Integer) 1;
#line 1010 "getopt.m"
      else
#line 1010 "getopt.m"
        if ((mercury__getopt__OptionData_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1020 "getopt.m"
          mercury__getopt__V_49_49 = (MR_Integer) 1;
#line 1010 "getopt.m"
        else
#line 1010 "getopt.m"
          if ((mercury__getopt__OptionData_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1016 "getopt.m"
            mercury__getopt__V_49_49 = (MR_Integer) 0;
#line 1010 "getopt.m"
          else
#line 1010 "getopt.m"
            if ((mercury__getopt__OptionData_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1019 "getopt.m"
              mercury__getopt__V_49_49 = (MR_Integer) 1;
#line 1010 "getopt.m"
            else
#line 1010 "getopt.m"
              if (((MR_tag((MR_Word) mercury__getopt__OptionData_16)) == (MR_mktag((MR_Integer) 1))))
#line 1010 "getopt.m"
                mercury__getopt__V_49_49 = (MR_Integer) 0;
#line 1010 "getopt.m"
              else
#line 1010 "getopt.m"
                if (((MR_tag((MR_Word) mercury__getopt__OptionData_16)) == (MR_mktag((MR_Integer) 2))))
#line 1011 "getopt.m"
                  mercury__getopt__V_49_49 = (MR_Integer) 1;
#line 1010 "getopt.m"
                else
#line 1010 "getopt.m"
                  if (((((MR_tag((MR_Word) mercury__getopt__OptionData_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_16, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1015 "getopt.m"
                    mercury__getopt__V_49_49 = (MR_Integer) 1;
#line 1010 "getopt.m"
                  else
#line 1010 "getopt.m"
                    if (((((MR_tag((MR_Word) mercury__getopt__OptionData_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_16, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1013 "getopt.m"
                      mercury__getopt__V_49_49 = (MR_Integer) 1;
#line 1010 "getopt.m"
                    else
#line 1010 "getopt.m"
                      if (((((MR_tag((MR_Word) mercury__getopt__OptionData_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_16, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1014 "getopt.m"
                        mercury__getopt__V_49_49 = (MR_Integer) 1;
#line 1010 "getopt.m"
                      else
#line 1012 "getopt.m"
                        mercury__getopt__V_49_49 = (MR_Integer) 1;
#line 632 "getopt.m"
    mercury__getopt__succeeded = ((MR_Integer) 1 == mercury__getopt__V_49_49);
#line 632 "getopt.m"
    if (mercury__getopt__succeeded)
#line 633 "getopt.m"
      mercury__getopt__succeeded = (mercury__getopt__MaybeOptionArg0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 648 "getopt.m"
    if (mercury__getopt__succeeded)
#line 641 "getopt.m"
      if ((mercury__getopt__Args0_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 642 "getopt.m"
        {
#line 643 "getopt.m"
          mercury__getopt__MaybeOptionArg_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 644 "getopt.m"
          mercury__getopt__Args1_29 = mercury__getopt__Args0_18;
#line 645 "getopt.m"
          mercury__getopt__OptionArgs1_31 = mercury__getopt__OptionArgs0_21;
#line 646 "getopt.m"
          mercury__getopt__MissingArg_30 = (MR_Integer) 1;
#line 642 "getopt.m"
        }
#line 641 "getopt.m"
      else
#line 636 "getopt.m"
        {
#line 636 "getopt.m"
          MR_String mercury__getopt__Arg_26 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__Args0_18, (MR_Integer) 0)));

#line 636 "getopt.m"
          mercury__getopt__Args1_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__Args0_18, (MR_Integer) 1)));
#line 637 "getopt.m"
          {
#line 637 "getopt.m"
            mercury__getopt__MaybeOptionArg_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 637 "getopt.m"
            MR_hl_field(MR_mktag(1), mercury__getopt__MaybeOptionArg_28, 0) = ((MR_Box) (mercury__getopt__Arg_26));
#line 637 "getopt.m"
          }
#line 639 "getopt.m"
          mercury__getopt__MissingArg_30 = (MR_Integer) 0;
#line 640 "getopt.m"
          {
#line 640 "getopt.m"
            mercury__getopt__OptionArgs1_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 640 "getopt.m"
            MR_hl_field(MR_mktag(1), mercury__getopt__OptionArgs1_31, 0) = ((MR_Box) (mercury__getopt__Arg_26));
#line 640 "getopt.m"
            MR_hl_field(MR_mktag(1), mercury__getopt__OptionArgs1_31, 1) = ((MR_Box) (mercury__getopt__OptionArgs0_21));
#line 640 "getopt.m"
          }
#line 636 "getopt.m"
        }
#line 648 "getopt.m"
    else
#line 649 "getopt.m"
      {
#line 649 "getopt.m"
        mercury__getopt__MaybeOptionArg_28 = mercury__getopt__MaybeOptionArg0_17;
#line 650 "getopt.m"
        mercury__getopt__Args1_29 = mercury__getopt__Args0_18;
#line 651 "getopt.m"
        mercury__getopt__OptionArgs1_31 = mercury__getopt__OptionArgs0_21;
#line 652 "getopt.m"
        mercury__getopt__MissingArg_30 = (MR_Integer) 0;
#line 649 "getopt.m"
      }
#line 660 "getopt.m"
    if ((mercury__getopt__MissingArg_30 == (MR_Integer) 0))
#line 670 "getopt.m"
      {
#line 670 "getopt.m"
        MR_String mercury__getopt__ArgVal_33;
#line 663 "getopt.m"
        MR_Word mercury__getopt__V_50_50;

#line 1010 "getopt.m"
        if ((mercury__getopt__OptionData_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1017 "getopt.m"
          mercury__getopt__V_50_50 = (MR_Integer) 0;
#line 1010 "getopt.m"
        else
#line 1010 "getopt.m"
          if ((mercury__getopt__OptionData_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1018 "getopt.m"
            mercury__getopt__V_50_50 = (MR_Integer) 1;
#line 1010 "getopt.m"
          else
#line 1010 "getopt.m"
            if ((mercury__getopt__OptionData_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1020 "getopt.m"
              mercury__getopt__V_50_50 = (MR_Integer) 1;
#line 1010 "getopt.m"
            else
#line 1010 "getopt.m"
              if ((mercury__getopt__OptionData_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1016 "getopt.m"
                mercury__getopt__V_50_50 = (MR_Integer) 0;
#line 1010 "getopt.m"
              else
#line 1010 "getopt.m"
                if ((mercury__getopt__OptionData_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1019 "getopt.m"
                  mercury__getopt__V_50_50 = (MR_Integer) 1;
#line 1010 "getopt.m"
                else
#line 1010 "getopt.m"
                  if (((MR_tag((MR_Word) mercury__getopt__OptionData_16)) == (MR_mktag((MR_Integer) 1))))
#line 1010 "getopt.m"
                    mercury__getopt__V_50_50 = (MR_Integer) 0;
#line 1010 "getopt.m"
                  else
#line 1010 "getopt.m"
                    if (((MR_tag((MR_Word) mercury__getopt__OptionData_16)) == (MR_mktag((MR_Integer) 2))))
#line 1011 "getopt.m"
                      mercury__getopt__V_50_50 = (MR_Integer) 1;
#line 1010 "getopt.m"
                    else
#line 1010 "getopt.m"
                      if (((((MR_tag((MR_Word) mercury__getopt__OptionData_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_16, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1015 "getopt.m"
                        mercury__getopt__V_50_50 = (MR_Integer) 1;
#line 1010 "getopt.m"
                      else
#line 1010 "getopt.m"
                        if (((((MR_tag((MR_Word) mercury__getopt__OptionData_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_16, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1013 "getopt.m"
                          mercury__getopt__V_50_50 = (MR_Integer) 1;
#line 1010 "getopt.m"
                        else
#line 1010 "getopt.m"
                          if (((((MR_tag((MR_Word) mercury__getopt__OptionData_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_16, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1014 "getopt.m"
                            mercury__getopt__V_50_50 = (MR_Integer) 1;
#line 1010 "getopt.m"
                          else
#line 1012 "getopt.m"
                            mercury__getopt__V_50_50 = (MR_Integer) 1;
#line 663 "getopt.m"
        mercury__getopt__succeeded = ((MR_Integer) 0 == mercury__getopt__V_50_50);
#line 663 "getopt.m"
        if (mercury__getopt__succeeded)
#line 663 "getopt.m"
          {
#line 664 "getopt.m"
            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__MaybeOptionArg_28)) == (MR_mktag((MR_Integer) 1)));
#line 664 "getopt.m"
            if (mercury__getopt__succeeded)
#line 664 "getopt.m"
              mercury__getopt__ArgVal_33 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__MaybeOptionArg_28, (MR_Integer) 0)));
#line 663 "getopt.m"
          }
#line 670 "getopt.m"
        if (mercury__getopt__succeeded)
#line 666 "getopt.m"
          {
#line 666 "getopt.m"
            MR_Word mercury__getopt__V_41_41;
#line 666 "getopt.m"
            MR_Word mercury__getopt__Error_45;

#line 666 "getopt.m"
            *mercury__getopt__Args_19 = mercury__getopt__Args0_18;
#line 667 "getopt.m"
            *mercury__getopt__OptionArgs_22 = mercury__getopt__OptionArgs1_31;
#line 668 "getopt.m"
            {
#line 668 "getopt.m"
              mercury__getopt__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 668 "getopt.m"
              MR_hl_field(MR_mktag(1), mercury__getopt__V_41_41, 0) = ((MR_Box) (mercury__getopt__ArgVal_33));
#line 668 "getopt.m"
            }
#line 668 "getopt.m"
            {
#line 668 "getopt.m"
              mercury__getopt__Error_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 668 "getopt.m"
              MR_hl_field(MR_mktag(1), mercury__getopt__Error_45, 0) = mercury__getopt__Flag_15;
#line 668 "getopt.m"
              MR_hl_field(MR_mktag(1), mercury__getopt__Error_45, 1) = ((MR_Box) (mercury__getopt__Option_14));
#line 668 "getopt.m"
              MR_hl_field(MR_mktag(1), mercury__getopt__Error_45, 2) = ((MR_Box) (mercury__getopt__V_41_41));
#line 668 "getopt.m"
            }
#line 669 "getopt.m"
            {
#line 669 "getopt.m"
              MR_Word base;
#line 669 "getopt.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 669 "getopt.m"
              *mercury__getopt__Result_24 = base;
#line 669 "getopt.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_45));
#line 669 "getopt.m"
            }
#line 669 "getopt.m"
            *mercury__getopt__STATE_VARIABLE_OptionsSet_38 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_37;
#line 666 "getopt.m"
          }
#line 670 "getopt.m"
        else
#line 672 "getopt.m"
          {
#line 672 "getopt.m"
            MR_Word mercury__getopt__Result1_34;
#line 672 "getopt.m"
            MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_42_42;

#line 671 "getopt.m"
            {
#line 671 "getopt.m"
              mercury__getopt__process_option_9_p_0(mercury__getopt__TypeInfo_for_OptionType_48, mercury__getopt__OptionData_16, mercury__getopt__Option_14, mercury__getopt__Flag_15, mercury__getopt__MaybeOptionArg_28, mercury__getopt__OptionOps_20, mercury__getopt__OptionTable0_23, &mercury__getopt__Result1_34, mercury__getopt__STATE_VARIABLE_OptionsSet_0_37, &mercury__getopt__STATE_VARIABLE_OptionsSet_42_42);
            }
#line 677 "getopt.m"
            if (((MR_tag((MR_Word) mercury__getopt__Result1_34)) == (MR_mktag((MR_Integer) 1))))
#line 678 "getopt.m"
              {
#line 679 "getopt.m"
                *mercury__getopt__Result_24 = mercury__getopt__Result1_34;
#line 680 "getopt.m"
                *mercury__getopt__OptionArgs_22 = mercury__getopt__OptionArgs1_31;
#line 681 "getopt.m"
                *mercury__getopt__Args_19 = mercury__getopt__Args1_29;
#line 681 "getopt.m"
                *mercury__getopt__STATE_VARIABLE_OptionsSet_38 = mercury__getopt__STATE_VARIABLE_OptionsSet_42_42;
#line 678 "getopt.m"
              }
#line 677 "getopt.m"
            else
#line 674 "getopt.m"
              {
#line 674 "getopt.m"
                MR_Word mercury__getopt__OptionTable1_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result1_34, (MR_Integer) 0)));

#line 675 "getopt.m"
                {
#line 675 "getopt.m"
                  mercury__getopt__process_arguments_9_p_0(mercury__getopt__TypeInfo_for_OptionType_48, mercury__getopt__Args1_29, mercury__getopt__Args_19, mercury__getopt__OptionOps_20, mercury__getopt__OptionArgs1_31, mercury__getopt__OptionArgs_22, mercury__getopt__OptionTable1_35, mercury__getopt__Result_24, mercury__getopt__STATE_VARIABLE_OptionsSet_42_42, mercury__getopt__STATE_VARIABLE_OptionsSet_38);
#line 675 "getopt.m"
                  return;
                }
#line 674 "getopt.m"
              }
#line 672 "getopt.m"
          }
#line 670 "getopt.m"
      }
#line 660 "getopt.m"
    else
#line 655 "getopt.m"
      {
#line 655 "getopt.m"
        MR_Word mercury__getopt__Error_32;
#line 655 "getopt.m"
        MR_Word mercury__getopt__V_44_44;

#line 656 "getopt.m"
        *mercury__getopt__Args_19 = mercury__getopt__Args0_18;
#line 657 "getopt.m"
        *mercury__getopt__OptionArgs_22 = mercury__getopt__OptionArgs1_31;
#line 658 "getopt.m"
        mercury__getopt__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 658 "getopt.m"
        {
#line 658 "getopt.m"
          mercury__getopt__Error_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 658 "getopt.m"
          MR_hl_field(MR_mktag(1), mercury__getopt__Error_32, 0) = mercury__getopt__Flag_15;
#line 658 "getopt.m"
          MR_hl_field(MR_mktag(1), mercury__getopt__Error_32, 1) = ((MR_Box) (mercury__getopt__Option_14));
#line 658 "getopt.m"
          MR_hl_field(MR_mktag(1), mercury__getopt__Error_32, 2) = ((MR_Box) (mercury__getopt__V_44_44));
#line 658 "getopt.m"
        }
#line 659 "getopt.m"
        {
#line 659 "getopt.m"
          MR_Word base;
#line 659 "getopt.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 659 "getopt.m"
          *mercury__getopt__Result_24 = base;
#line 659 "getopt.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_32));
#line 659 "getopt.m"
        }
#line 659 "getopt.m"
        *mercury__getopt__STATE_VARIABLE_OptionsSet_38 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_37;
#line 655 "getopt.m"
      }
#line 630 "getopt.m"
  }
#line 621 "getopt.m"
}

#line 496 "getopt.m"
void MR_CALL 
mercury__getopt__process_arguments_9_p_0(
#line 496 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_138,
#line 496 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 496 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__2_2,
#line 496 "getopt.m"
  MR_Word mercury__getopt__OptionOps_3,
#line 496 "getopt.m"
  MR_Word mercury__getopt__HeadVar__4_4,
#line 496 "getopt.m"
  MR_Word * mercury__getopt__OptionArgs_5,
#line 496 "getopt.m"
  MR_Word mercury__getopt__HeadVar__6_6,
#line 496 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__7_7,
#line 496 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_8,
#line 496 "getopt.m"
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_9)
#line 496 "getopt.m"
{
#line 502 "getopt.m"
  while (MR_TRUE)
#line 502 "getopt.m"
    {
#line 502 "getopt.m"
      /* tailcall optimized into a loop */
#line 502 "getopt.m"
      {
#line 502 "getopt.m"
        MR_bool mercury__getopt__succeeded;

#line 502 "getopt.m"
        if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 502 "getopt.m"
          {
#line 502 "getopt.m"
            *mercury__getopt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 502 "getopt.m"
            *mercury__getopt__OptionArgs_5 = mercury__getopt__HeadVar__4_4;
#line 503 "getopt.m"
            {
#line 503 "getopt.m"
              MR_Word base;
#line 503 "getopt.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 503 "getopt.m"
              *mercury__getopt__HeadVar__7_7 = base;
#line 503 "getopt.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__HeadVar__6_6));
#line 503 "getopt.m"
            }
#line 503 "getopt.m"
            *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_8;
#line 502 "getopt.m"
          }
#line 502 "getopt.m"
        else
#line 505 "getopt.m"
          {
#line 505 "getopt.m"
            MR_String mercury__getopt__Option_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 505 "getopt.m"
            MR_Word mercury__getopt__Args0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));

#line 506 "getopt.m"
            mercury__getopt__succeeded = (strcmp(mercury__getopt__Option_16, (MR_String) "--") == 0);
#line 510 "getopt.m"
            if (mercury__getopt__succeeded)
#line 507 "getopt.m"
              {
#line 507 "getopt.m"
                *mercury__getopt__OptionArgs_5 = mercury__getopt__HeadVar__4_4;
#line 508 "getopt.m"
                *mercury__getopt__HeadVar__2_2 = mercury__getopt__Args0_17;
#line 509 "getopt.m"
                {
#line 509 "getopt.m"
                  MR_Word base;
#line 509 "getopt.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 509 "getopt.m"
                  *mercury__getopt__HeadVar__7_7 = base;
#line 509 "getopt.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__HeadVar__6_6));
#line 509 "getopt.m"
                }
#line 509 "getopt.m"
                *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_8;
#line 507 "getopt.m"
              }
#line 510 "getopt.m"
            else
#line 533 "getopt.m"
              {
#line 533 "getopt.m"
                MR_String mercury__getopt__LongOption_25;

#line 510 "getopt.m"
                {
#line 510 "getopt.m"
                  mercury__getopt__succeeded = mercury__string__append_3_p_1((MR_String) "--no-", &mercury__getopt__LongOption_25, mercury__getopt__Option_16);
                }
#line 533 "getopt.m"
                if (mercury__getopt__succeeded)
#line 511 "getopt.m"
                  {
#line 511 "getopt.m"
                    MR_Word mercury__getopt__LongOptionPred_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 1)));
#line 511 "getopt.m"
                    MR_Word mercury__getopt__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 0)));
#line 511 "getopt.m"
                    MR_Word mercury__getopt__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 2)));
#line 527 "getopt.m"
                    MR_Box mercury__getopt__Flag_27;
#line 512 "getopt.m"
                    MR_bool MR_CALL (* mercury__getopt__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt__LongOptionPred_26, (MR_Integer) 1)));

#line 512 "getopt.m"
                    {
#line 512 "getopt.m"
                      mercury__getopt__succeeded = mercury__getopt__func_0(((MR_Box) mercury__getopt__LongOptionPred_26), ((MR_Box) (mercury__getopt__LongOption_25)), &mercury__getopt__Flag_27);
                    }
#line 527 "getopt.m"
                    if (mercury__getopt__succeeded)
#line 513 "getopt.m"
                      {
#line 513 "getopt.m"
                        MR_String mercury__getopt__OptName_28;
#line 513 "getopt.m"
                        MR_Word mercury__getopt__Result1_29;
#line 513 "getopt.m"
                        MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_52_52;

#line 513 "getopt.m"
                        {
#line 513 "getopt.m"
                          mercury__getopt__OptName_28 = mercury__string__f_43_43_2_f_0((MR_String) "--", mercury__getopt__LongOption_25);
                        }
#line 514 "getopt.m"
                        {
#line 514 "getopt.m"
                          mercury__getopt__process_negated_option_7_p_0(mercury__getopt__TypeInfo_for_OptionType_138, mercury__getopt__OptName_28, mercury__getopt__Flag_27, mercury__getopt__OptionOps_3, mercury__getopt__HeadVar__6_6, &mercury__getopt__Result1_29, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt__STATE_VARIABLE_OptionsSet_52_52);
                        }
#line 521 "getopt.m"
                        if (((MR_tag((MR_Word) mercury__getopt__Result1_29)) == (MR_mktag((MR_Integer) 1))))
#line 522 "getopt.m"
                          {
#line 523 "getopt.m"
                            *mercury__getopt__HeadVar__7_7 = mercury__getopt__Result1_29;
#line 524 "getopt.m"
                            *mercury__getopt__OptionArgs_5 = mercury__getopt__HeadVar__4_4;
#line 525 "getopt.m"
                            *mercury__getopt__HeadVar__2_2 = mercury__getopt__Args0_17;
#line 525 "getopt.m"
                            *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_52_52;
#line 522 "getopt.m"
                          }
#line 521 "getopt.m"
                        else
#line 517 "getopt.m"
                          {
#line 517 "getopt.m"
                            MR_Word mercury__getopt__OptionTable1_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result1_29, (MR_Integer) 0)));
#line 517 "getopt.m"
                            MR_Word mercury__getopt__V_53_53;

#line 519 "getopt.m"
                            {
#line 519 "getopt.m"
                              mercury__getopt__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "getopt.m"
                              MR_hl_field(MR_mktag(1), mercury__getopt__V_53_53, 0) = ((MR_Box) (mercury__getopt__Option_16));
#line 519 "getopt.m"
                              MR_hl_field(MR_mktag(1), mercury__getopt__V_53_53, 1) = ((MR_Box) (mercury__getopt__HeadVar__4_4));
#line 519 "getopt.m"
                            }
#line 518 "getopt.m"
                            /* direct tailcall eliminated */
#line 518 "getopt.m"
                            {
#line 518 "getopt.m"
                              MR_Word mercury__getopt__HeadVar__1__tmp_copy_1 = mercury__getopt__Args0_17;
#line 518 "getopt.m"
                              MR_Word mercury__getopt__HeadVar__4__tmp_copy_4 = mercury__getopt__V_53_53;
#line 518 "getopt.m"
                              MR_Word mercury__getopt__HeadVar__6__tmp_copy_6 = mercury__getopt__OptionTable1_30;
#line 518 "getopt.m"
                              MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0__tmp_copy_8 = mercury__getopt__STATE_VARIABLE_OptionsSet_52_52;

#line 518 "getopt.m"
                              mercury__getopt__STATE_VARIABLE_OptionsSet_0_8 = mercury__getopt__STATE_VARIABLE_OptionsSet_0__tmp_copy_8;
#line 518 "getopt.m"
                              mercury__getopt__HeadVar__6_6 = mercury__getopt__HeadVar__6__tmp_copy_6;
#line 518 "getopt.m"
                              mercury__getopt__HeadVar__4_4 = mercury__getopt__HeadVar__4__tmp_copy_4;
#line 518 "getopt.m"
                              mercury__getopt__HeadVar__1_1 = mercury__getopt__HeadVar__1__tmp_copy_1;
#line 518 "getopt.m"
                            }
#line 518 "getopt.m"
                            continue;
#line 517 "getopt.m"
                          }
#line 513 "getopt.m"
                      }
#line 527 "getopt.m"
                    else
#line 528 "getopt.m"
                      {
#line 528 "getopt.m"
                        MR_Word mercury__getopt__Error_32;

#line 528 "getopt.m"
                        {
#line 528 "getopt.m"
                          mercury__getopt__Error_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 528 "getopt.m"
                          MR_hl_field(MR_mktag(0), mercury__getopt__Error_32, 0) = ((MR_Box) (mercury__getopt__Option_16));
#line 528 "getopt.m"
                        }
#line 529 "getopt.m"
                        {
#line 529 "getopt.m"
                          MR_Word base;
#line 529 "getopt.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 529 "getopt.m"
                          *mercury__getopt__HeadVar__7_7 = base;
#line 529 "getopt.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_32));
#line 529 "getopt.m"
                        }
#line 530 "getopt.m"
                        *mercury__getopt__OptionArgs_5 = mercury__getopt__HeadVar__4_4;
#line 531 "getopt.m"
                        *mercury__getopt__HeadVar__2_2 = mercury__getopt__Args0_17;
#line 531 "getopt.m"
                        *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_8;
#line 528 "getopt.m"
                      }
#line 511 "getopt.m"
                  }
#line 533 "getopt.m"
                else
#line 566 "getopt.m"
                  {
#line 566 "getopt.m"
                    MR_String mercury__getopt__LongOptionStr_33;

#line 533 "getopt.m"
                    {
#line 533 "getopt.m"
                      mercury__getopt__succeeded = mercury__string__append_3_p_1((MR_String) "--", &mercury__getopt__LongOptionStr_33, mercury__getopt__Option_16);
                    }
#line 566 "getopt.m"
                    if (mercury__getopt__succeeded)
#line 534 "getopt.m"
                      {
#line 534 "getopt.m"
                        MR_Word mercury__getopt__MaybeArg_37;
#line 534 "getopt.m"
                        MR_String mercury__getopt__OptionName_38;
#line 534 "getopt.m"
                        MR_String mercury__getopt__LongOption_85;
#line 534 "getopt.m"
                        MR_Word mercury__getopt__LongOptionPred_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 1)));
#line 534 "getopt.m"
                        MR_Word mercury__getopt__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 0)));
#line 534 "getopt.m"
                        MR_Word mercury__getopt__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 2)));
#line 543 "getopt.m"
                        MR_Integer mercury__getopt__OptionLen_34;
#line 560 "getopt.m"
                        MR_Box mercury__getopt__Flag_83;
#line 548 "getopt.m"
                        MR_bool MR_CALL (* mercury__getopt__func_1)(MR_Box, MR_Box, MR_Box *);

#line 535 "getopt.m"
                        {
#line 535 "getopt.m"
                          mercury__getopt__succeeded = mercury__string__sub_string_search_3_p_0(mercury__getopt__LongOptionStr_33, (MR_String) "=", &mercury__getopt__OptionLen_34);
                        }
#line 543 "getopt.m"
                        if (mercury__getopt__succeeded)
#line 537 "getopt.m"
                          {
#line 537 "getopt.m"
                            MR_String mercury__getopt__EqualOptionArg_35;
#line 540 "getopt.m"
                            MR_String mercury__getopt__OptionArg_36;

#line 536 "getopt.m"
                            {
#line 536 "getopt.m"
                              mercury__string__split_4_p_0(mercury__getopt__LongOptionStr_33, mercury__getopt__OptionLen_34, &mercury__getopt__LongOption_85, &mercury__getopt__EqualOptionArg_35);
                            }
#line 538 "getopt.m"
                            {
#line 538 "getopt.m"
                              mercury__getopt__succeeded = mercury__string__first_char_3_p_2(mercury__getopt__EqualOptionArg_35, (MR_Char) 61, &mercury__getopt__OptionArg_36);
                            }
#line 540 "getopt.m"
                            if (mercury__getopt__succeeded)
#line 539 "getopt.m"
                              {
#line 539 "getopt.m"
                                mercury__getopt__MaybeArg_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 539 "getopt.m"
                                MR_hl_field(MR_mktag(1), mercury__getopt__MaybeArg_37, 0) = ((MR_Box) (mercury__getopt__OptionArg_36));
#line 539 "getopt.m"
                              }
#line 540 "getopt.m"
                            else
#line 541 "getopt.m"
                              {
#line 541 "getopt.m"
                                {
#line 541 "getopt.m"
                                  mercury__require__error_1_p_0((MR_String) "bad split of --longoption=arg");
#line 541 "getopt.m"
                                  return;
                                }
#line 541 "getopt.m"
                              }
#line 537 "getopt.m"
                          }
#line 543 "getopt.m"
                        else
#line 544 "getopt.m"
                          {
#line 544 "getopt.m"
                            mercury__getopt__LongOption_85 = mercury__getopt__LongOptionStr_33;
#line 545 "getopt.m"
                            mercury__getopt__MaybeArg_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 544 "getopt.m"
                          }
#line 547 "getopt.m"
                        {
#line 547 "getopt.m"
                          mercury__getopt__OptionName_38 = mercury__string__f_43_43_2_f_0((MR_String) "--", mercury__getopt__LongOption_85);
                        }
#line 548 "getopt.m"
                        mercury__getopt__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt__LongOptionPred_86, (MR_Integer) 1)));
#line 548 "getopt.m"
                        {
#line 548 "getopt.m"
                          mercury__getopt__succeeded = mercury__getopt__func_1(((MR_Box) mercury__getopt__LongOptionPred_86), ((MR_Box) (mercury__getopt__LongOption_85)), &mercury__getopt__Flag_83);
                        }
#line 560 "getopt.m"
                        if (mercury__getopt__succeeded)
#line 554 "getopt.m"
                          {
#line 554 "getopt.m"
                            MR_Word mercury__getopt__OptionData_39;
#line 549 "getopt.m"
                            MR_Word mercury__getopt__TypeCtorInfo_139_139 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 549 "getopt.m"
                            MR_Box mercury__getopt__conv2_OptionData_39;

#line 549 "getopt.m"
                            {
#line 549 "getopt.m"
                              mercury__getopt__succeeded = mercury__map__search_3_p_0(mercury__getopt__TypeInfo_for_OptionType_138, mercury__getopt__TypeCtorInfo_139_139, mercury__getopt__HeadVar__6_6, mercury__getopt__Flag_83, &mercury__getopt__conv2_OptionData_39);
                            }
#line 549 "getopt.m"
                            if (mercury__getopt__succeeded)
#line 549 "getopt.m"
                              {
#line 549 "getopt.m"
                                mercury__getopt__OptionData_39 = ((MR_Word) mercury__getopt__conv2_OptionData_39);
#line 549 "getopt.m"
                                mercury__getopt__succeeded = MR_TRUE;
#line 549 "getopt.m"
                              }
#line 554 "getopt.m"
                            if (mercury__getopt__succeeded)
#line 550 "getopt.m"
                              {
#line 550 "getopt.m"
                                MR_Word mercury__getopt__V_60_60;

#line 552 "getopt.m"
                                {
#line 552 "getopt.m"
                                  mercury__getopt__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 552 "getopt.m"
                                  MR_hl_field(MR_mktag(1), mercury__getopt__V_60_60, 0) = ((MR_Box) (mercury__getopt__Option_16));
#line 552 "getopt.m"
                                  MR_hl_field(MR_mktag(1), mercury__getopt__V_60_60, 1) = ((MR_Box) (mercury__getopt__HeadVar__4_4));
#line 552 "getopt.m"
                                }
#line 550 "getopt.m"
                                {
#line 550 "getopt.m"
                                  mercury__getopt__handle_long_option_13_p_0(mercury__getopt__TypeInfo_for_OptionType_138, mercury__getopt__OptionName_38, mercury__getopt__Flag_83, mercury__getopt__OptionData_39, mercury__getopt__MaybeArg_37, mercury__getopt__Args0_17, mercury__getopt__HeadVar__2_2, mercury__getopt__OptionOps_3, mercury__getopt__V_60_60, mercury__getopt__OptionArgs_5, mercury__getopt__HeadVar__6_6, mercury__getopt__HeadVar__7_7, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
#line 550 "getopt.m"
                                  return;
                                }
#line 550 "getopt.m"
                              }
#line 554 "getopt.m"
                            else
#line 555 "getopt.m"
                              {
#line 555 "getopt.m"
                                MR_Word mercury__getopt__V_62_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 555 "getopt.m"
                                MR_Word mercury__getopt__Error_80;

#line 555 "getopt.m"
                                {
#line 555 "getopt.m"
                                  mercury__getopt__Error_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 555 "getopt.m"
                                  MR_hl_field(MR_mktag(1), mercury__getopt__Error_80, 0) = mercury__getopt__Flag_83;
#line 555 "getopt.m"
                                  MR_hl_field(MR_mktag(1), mercury__getopt__Error_80, 1) = ((MR_Box) (mercury__getopt__Option_16));
#line 555 "getopt.m"
                                  MR_hl_field(MR_mktag(1), mercury__getopt__Error_80, 2) = ((MR_Box) (mercury__getopt__V_62_62));
#line 555 "getopt.m"
                                }
#line 556 "getopt.m"
                                {
#line 556 "getopt.m"
                                  MR_Word base;
#line 556 "getopt.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 556 "getopt.m"
                                  *mercury__getopt__HeadVar__7_7 = base;
#line 556 "getopt.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_80));
#line 556 "getopt.m"
                                }
#line 557 "getopt.m"
                                *mercury__getopt__OptionArgs_5 = mercury__getopt__HeadVar__4_4;
#line 558 "getopt.m"
                                *mercury__getopt__HeadVar__2_2 = mercury__getopt__Args0_17;
#line 558 "getopt.m"
                                *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_8;
#line 555 "getopt.m"
                              }
#line 554 "getopt.m"
                          }
#line 560 "getopt.m"
                        else
#line 561 "getopt.m"
                          {
#line 561 "getopt.m"
                            MR_Word mercury__getopt__Error_82;

#line 561 "getopt.m"
                            {
#line 561 "getopt.m"
                              mercury__getopt__Error_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 561 "getopt.m"
                              MR_hl_field(MR_mktag(0), mercury__getopt__Error_82, 0) = ((MR_Box) (mercury__getopt__OptionName_38));
#line 561 "getopt.m"
                            }
#line 562 "getopt.m"
                            {
#line 562 "getopt.m"
                              MR_Word base;
#line 562 "getopt.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 562 "getopt.m"
                              *mercury__getopt__HeadVar__7_7 = base;
#line 562 "getopt.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_82));
#line 562 "getopt.m"
                            }
#line 563 "getopt.m"
                            *mercury__getopt__OptionArgs_5 = mercury__getopt__HeadVar__4_4;
#line 564 "getopt.m"
                            *mercury__getopt__HeadVar__2_2 = mercury__getopt__Args0_17;
#line 564 "getopt.m"
                            *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_8;
#line 561 "getopt.m"
                          }
#line 534 "getopt.m"
                      }
#line 566 "getopt.m"
                    else
#line 612 "getopt.m"
                      {
#line 612 "getopt.m"
                        MR_String mercury__getopt__ShortOptions_40;

#line 566 "getopt.m"
                        {
#line 566 "getopt.m"
                          mercury__getopt__succeeded = mercury__string__first_char_3_p_2(mercury__getopt__Option_16, (MR_Char) 45, &mercury__getopt__ShortOptions_40);
                        }
#line 566 "getopt.m"
                        if (mercury__getopt__succeeded)
#line 566 "getopt.m"
                          {
#line 566 "getopt.m"
                            mercury__getopt__succeeded = (strcmp(mercury__getopt__ShortOptions_40, (MR_String) "") == 0);
#line 566 "getopt.m"
                            mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 566 "getopt.m"
                          }
#line 612 "getopt.m"
                        if (mercury__getopt__succeeded)
#line 567 "getopt.m"
                          {
#line 567 "getopt.m"
                            MR_Word mercury__getopt__ShortOptionsList_41;
#line 592 "getopt.m"
                            MR_Char mercury__getopt__SingleShortOpt_42;
#line 569 "getopt.m"
                            MR_Word mercury__getopt__V_64_64;
#line 569 "getopt.m"
                            MR_Char mercury__getopt__V_65_65;
#line 569 "getopt.m"
                            MR_Word mercury__getopt__V_66_66;

#line 567 "getopt.m"
                            {
#line 567 "getopt.m"
                              mercury__string__to_char_list_2_p_0(mercury__getopt__ShortOptions_40, &mercury__getopt__ShortOptionsList_41);
                            }
#line 569 "getopt.m"
                            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__ShortOptionsList_41)) == (MR_mktag((MR_Integer) 1)));
#line 569 "getopt.m"
                            if (mercury__getopt__succeeded)
#line 569 "getopt.m"
                              {
#line 569 "getopt.m"
                                mercury__getopt__SingleShortOpt_42 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__ShortOptionsList_41, (MR_Integer) 0)));
#line 569 "getopt.m"
                                mercury__getopt__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__ShortOptionsList_41, (MR_Integer) 1)));
#line 569 "getopt.m"
                                mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__V_64_64)) == (MR_mktag((MR_Integer) 1)));
#line 569 "getopt.m"
                                if (mercury__getopt__succeeded)
#line 569 "getopt.m"
                                  {
#line 569 "getopt.m"
                                    mercury__getopt__V_65_65 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__V_64_64, (MR_Integer) 0)));
#line 569 "getopt.m"
                                    mercury__getopt__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__V_64_64, (MR_Integer) 1)));
#line 569 "getopt.m"
                                    mercury__getopt__succeeded = (mercury__getopt__V_65_65 == (MR_Char) 45);
#line 569 "getopt.m"
                                    if (mercury__getopt__succeeded)
#line 569 "getopt.m"
                                      mercury__getopt__succeeded = (mercury__getopt__V_66_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 569 "getopt.m"
                                  }
#line 569 "getopt.m"
                              }
#line 592 "getopt.m"
                            if (mercury__getopt__succeeded)
#line 570 "getopt.m"
                              {
#line 570 "getopt.m"
                                MR_Word mercury__getopt__ShortOptionPred_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 0)));
#line 570 "getopt.m"
                                MR_Word mercury__getopt__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 1)));
#line 570 "getopt.m"
                                MR_Word mercury__getopt__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 2)));
#line 586 "getopt.m"
                                MR_Box mercury__getopt__Flag_95;
#line 571 "getopt.m"
                                MR_bool MR_CALL (* mercury__getopt__func_3)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt__ShortOptionPred_43, (MR_Integer) 1)));

#line 571 "getopt.m"
                                {
#line 571 "getopt.m"
                                  mercury__getopt__succeeded = mercury__getopt__func_3(((MR_Box) mercury__getopt__ShortOptionPred_43), ((MR_Box) (MR_Word) (mercury__getopt__SingleShortOpt_42)), &mercury__getopt__Flag_95);
                                }
#line 586 "getopt.m"
                                if (mercury__getopt__succeeded)
#line 572 "getopt.m"
                                  {
#line 572 "getopt.m"
                                    MR_Word mercury__getopt__V_67_67;
#line 572 "getopt.m"
                                    MR_Word mercury__getopt__V_69_69;
#line 572 "getopt.m"
                                    MR_Word mercury__getopt__V_70_70 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 572 "getopt.m"
                                    MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_71_71;
#line 572 "getopt.m"
                                    MR_String mercury__getopt__OptName_91;
#line 572 "getopt.m"
                                    MR_Word mercury__getopt__Result1_92;

#line 572 "getopt.m"
                                    {
#line 572 "getopt.m"
                                      mercury__getopt__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "getopt.m"
                                      MR_hl_field(MR_mktag(1), mercury__getopt__V_69_69, 0) = ((MR_Box) (MR_Word) (mercury__getopt__SingleShortOpt_42));
#line 572 "getopt.m"
                                      MR_hl_field(MR_mktag(1), mercury__getopt__V_69_69, 1) = ((MR_Box) (mercury__getopt__V_70_70));
#line 572 "getopt.m"
                                    }
#line 572 "getopt.m"
                                    {
#line 572 "getopt.m"
                                      mercury__getopt__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "getopt.m"
                                      MR_hl_field(MR_mktag(1), mercury__getopt__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
#line 572 "getopt.m"
                                      MR_hl_field(MR_mktag(1), mercury__getopt__V_67_67, 1) = ((MR_Box) (mercury__getopt__V_69_69));
#line 572 "getopt.m"
                                    }
#line 572 "getopt.m"
                                    {
#line 572 "getopt.m"
                                      mercury__string__from_char_list_2_p_0(mercury__getopt__V_67_67, &mercury__getopt__OptName_91);
                                    }
#line 573 "getopt.m"
                                    {
#line 573 "getopt.m"
                                      mercury__getopt__process_negated_option_7_p_0(mercury__getopt__TypeInfo_for_OptionType_138, mercury__getopt__OptName_91, mercury__getopt__Flag_95, mercury__getopt__OptionOps_3, mercury__getopt__HeadVar__6_6, &mercury__getopt__Result1_92, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt__STATE_VARIABLE_OptionsSet_71_71);
                                    }
#line 580 "getopt.m"
                                    if (((MR_tag((MR_Word) mercury__getopt__Result1_92)) == (MR_mktag((MR_Integer) 1))))
#line 581 "getopt.m"
                                      {
#line 582 "getopt.m"
                                        *mercury__getopt__HeadVar__7_7 = mercury__getopt__Result1_92;
#line 583 "getopt.m"
                                        *mercury__getopt__OptionArgs_5 = mercury__getopt__HeadVar__4_4;
#line 584 "getopt.m"
                                        *mercury__getopt__HeadVar__2_2 = mercury__getopt__Args0_17;
#line 584 "getopt.m"
                                        *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_71_71;
#line 581 "getopt.m"
                                      }
#line 580 "getopt.m"
                                    else
#line 576 "getopt.m"
                                      {
#line 576 "getopt.m"
                                        MR_Word mercury__getopt__V_72_72;
#line 576 "getopt.m"
                                        MR_Word mercury__getopt__OptionTable1_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result1_92, (MR_Integer) 0)));

#line 578 "getopt.m"
                                        {
#line 578 "getopt.m"
                                          mercury__getopt__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "getopt.m"
                                          MR_hl_field(MR_mktag(1), mercury__getopt__V_72_72, 0) = ((MR_Box) (mercury__getopt__Option_16));
#line 578 "getopt.m"
                                          MR_hl_field(MR_mktag(1), mercury__getopt__V_72_72, 1) = ((MR_Box) (mercury__getopt__HeadVar__4_4));
#line 578 "getopt.m"
                                        }
#line 577 "getopt.m"
                                        /* direct tailcall eliminated */
#line 577 "getopt.m"
                                        {
#line 577 "getopt.m"
                                          MR_Word mercury__getopt__HeadVar__1__tmp_copy_1 = mercury__getopt__Args0_17;
#line 577 "getopt.m"
                                          MR_Word mercury__getopt__HeadVar__4__tmp_copy_4 = mercury__getopt__V_72_72;
#line 577 "getopt.m"
                                          MR_Word mercury__getopt__HeadVar__6__tmp_copy_6 = mercury__getopt__OptionTable1_89;
#line 577 "getopt.m"
                                          MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0__tmp_copy_8 = mercury__getopt__STATE_VARIABLE_OptionsSet_71_71;

#line 577 "getopt.m"
                                          mercury__getopt__STATE_VARIABLE_OptionsSet_0_8 = mercury__getopt__STATE_VARIABLE_OptionsSet_0__tmp_copy_8;
#line 577 "getopt.m"
                                          mercury__getopt__HeadVar__6_6 = mercury__getopt__HeadVar__6__tmp_copy_6;
#line 577 "getopt.m"
                                          mercury__getopt__HeadVar__4_4 = mercury__getopt__HeadVar__4__tmp_copy_4;
#line 577 "getopt.m"
                                          mercury__getopt__HeadVar__1_1 = mercury__getopt__HeadVar__1__tmp_copy_1;
#line 577 "getopt.m"
                                        }
#line 577 "getopt.m"
                                        continue;
#line 576 "getopt.m"
                                      }
#line 572 "getopt.m"
                                  }
#line 586 "getopt.m"
                                else
#line 587 "getopt.m"
                                  {
#line 587 "getopt.m"
                                    MR_String mercury__getopt__V_74_74;
#line 587 "getopt.m"
                                    MR_Word mercury__getopt__Error_94;

#line 587 "getopt.m"
                                    {
#line 587 "getopt.m"
                                      mercury__getopt__V_74_74 = mercury__string__f_43_43_2_f_0((MR_String) "-", mercury__getopt__ShortOptions_40);
                                    }
#line 587 "getopt.m"
                                    {
#line 587 "getopt.m"
                                      mercury__getopt__Error_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 587 "getopt.m"
                                      MR_hl_field(MR_mktag(0), mercury__getopt__Error_94, 0) = ((MR_Box) (mercury__getopt__V_74_74));
#line 587 "getopt.m"
                                    }
#line 588 "getopt.m"
                                    {
#line 588 "getopt.m"
                                      MR_Word base;
#line 588 "getopt.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 588 "getopt.m"
                                      *mercury__getopt__HeadVar__7_7 = base;
#line 588 "getopt.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_94));
#line 588 "getopt.m"
                                    }
#line 589 "getopt.m"
                                    *mercury__getopt__OptionArgs_5 = mercury__getopt__HeadVar__4_4;
#line 590 "getopt.m"
                                    *mercury__getopt__HeadVar__2_2 = mercury__getopt__Args0_17;
#line 590 "getopt.m"
                                    *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_8;
#line 587 "getopt.m"
                                  }
#line 570 "getopt.m"
                              }
#line 592 "getopt.m"
                            else
#line 600 "getopt.m"
                              {
#line 600 "getopt.m"
                                MR_Word mercury__getopt__Args1_45;
#line 600 "getopt.m"
                                MR_Word mercury__getopt__OptionArgs1_46;
#line 600 "getopt.m"
                                MR_Word mercury__getopt__V_76_76;
#line 600 "getopt.m"
                                MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_77_77;
#line 600 "getopt.m"
                                MR_Word mercury__getopt__Result1_107;

#line 599 "getopt.m"
                                {
#line 599 "getopt.m"
                                  mercury__getopt__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 599 "getopt.m"
                                  MR_hl_field(MR_mktag(1), mercury__getopt__V_76_76, 0) = ((MR_Box) (mercury__getopt__Option_16));
#line 599 "getopt.m"
                                  MR_hl_field(MR_mktag(1), mercury__getopt__V_76_76, 1) = ((MR_Box) (mercury__getopt__HeadVar__4_4));
#line 599 "getopt.m"
                                }
#line 598 "getopt.m"
                                {
#line 598 "getopt.m"
                                  mercury__getopt__handle_short_options_10_p_0(mercury__getopt__TypeInfo_for_OptionType_138, mercury__getopt__ShortOptionsList_41, mercury__getopt__OptionOps_3, mercury__getopt__Args0_17, &mercury__getopt__Args1_45, mercury__getopt__V_76_76, &mercury__getopt__OptionArgs1_46, mercury__getopt__HeadVar__6_6, &mercury__getopt__Result1_107, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt__STATE_VARIABLE_OptionsSet_77_77);
                                }
#line 605 "getopt.m"
                                if (((MR_tag((MR_Word) mercury__getopt__Result1_107)) == (MR_mktag((MR_Integer) 1))))
#line 606 "getopt.m"
                                  {
#line 607 "getopt.m"
                                    *mercury__getopt__HeadVar__7_7 = mercury__getopt__Result1_107;
#line 608 "getopt.m"
                                    *mercury__getopt__OptionArgs_5 = mercury__getopt__OptionArgs1_46;
#line 609 "getopt.m"
                                    *mercury__getopt__HeadVar__2_2 = mercury__getopt__Args0_17;
#line 609 "getopt.m"
                                    *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_77_77;
#line 606 "getopt.m"
                                  }
#line 605 "getopt.m"
                                else
#line 602 "getopt.m"
                                  {
#line 602 "getopt.m"
                                    MR_Word mercury__getopt__OptionTable1_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result1_107, (MR_Integer) 0)));

#line 603 "getopt.m"
                                    /* direct tailcall eliminated */
#line 603 "getopt.m"
                                    {
#line 603 "getopt.m"
                                      MR_Word mercury__getopt__HeadVar__1__tmp_copy_1 = mercury__getopt__Args1_45;
#line 603 "getopt.m"
                                      MR_Word mercury__getopt__HeadVar__4__tmp_copy_4 = mercury__getopt__OptionArgs1_46;
#line 603 "getopt.m"
                                      MR_Word mercury__getopt__HeadVar__6__tmp_copy_6 = mercury__getopt__OptionTable1_105;
#line 603 "getopt.m"
                                      MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0__tmp_copy_8 = mercury__getopt__STATE_VARIABLE_OptionsSet_77_77;

#line 603 "getopt.m"
                                      mercury__getopt__STATE_VARIABLE_OptionsSet_0_8 = mercury__getopt__STATE_VARIABLE_OptionsSet_0__tmp_copy_8;
#line 603 "getopt.m"
                                      mercury__getopt__HeadVar__6_6 = mercury__getopt__HeadVar__6__tmp_copy_6;
#line 603 "getopt.m"
                                      mercury__getopt__HeadVar__4_4 = mercury__getopt__HeadVar__4__tmp_copy_4;
#line 603 "getopt.m"
                                      mercury__getopt__HeadVar__1_1 = mercury__getopt__HeadVar__1__tmp_copy_1;
#line 603 "getopt.m"
                                    }
#line 603 "getopt.m"
                                    continue;
#line 602 "getopt.m"
                                  }
#line 600 "getopt.m"
                              }
#line 567 "getopt.m"
                          }
#line 612 "getopt.m"
                        else
#line 617 "getopt.m"
                          {
#line 617 "getopt.m"
                            MR_Word mercury__getopt__Args1_119;

#line 616 "getopt.m"
                            {
#line 616 "getopt.m"
                              mercury__getopt__process_arguments_9_p_0(mercury__getopt__TypeInfo_for_OptionType_138, mercury__getopt__Args0_17, &mercury__getopt__Args1_119, mercury__getopt__OptionOps_3, mercury__getopt__HeadVar__4_4, mercury__getopt__OptionArgs_5, mercury__getopt__HeadVar__6_6, mercury__getopt__HeadVar__7_7, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
                            }
#line 618 "getopt.m"
                            {
#line 618 "getopt.m"
                              MR_Word base;
#line 618 "getopt.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 618 "getopt.m"
                              *mercury__getopt__HeadVar__2_2 = base;
#line 618 "getopt.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Option_16));
#line 618 "getopt.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__getopt__Args1_119));
#line 618 "getopt.m"
                            }
#line 617 "getopt.m"
                          }
#line 612 "getopt.m"
                      }
#line 566 "getopt.m"
                  }
#line 533 "getopt.m"
              }
#line 505 "getopt.m"
          }
#line 502 "getopt.m"
      }
#line 502 "getopt.m"
      break;
#line 502 "getopt.m"
    }
#line 496 "getopt.m"
}

#line 358 "getopt.m"
MR_Word MR_CALL 
mercury__getopt__lookup_accumulating_option_2_f_0(
#line 358 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_7,
#line 358 "getopt.m"
  MR_Word mercury__getopt__OT_4,
#line 358 "getopt.m"
  MR_Box mercury__getopt__Opt_5)
#line 358 "getopt.m"
{
#line 1131 "getopt.m"
  {
#line 1131 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 1131 "getopt.m"
    MR_Word mercury__getopt__Ss_6;
#line 1131 "getopt.m"
    MR_Word mercury__getopt__Val0_11;
#line 1129 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 1129 "getopt.m"
    MR_Word mercury__getopt__V_12_12;
#line 1129 "getopt.m"
    MR_Box mercury__getopt__conv0_V_12_12;

#line 1129 "getopt.m"
    {
#line 1129 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_7, mercury__getopt__TypeCtorInfo_11_14, mercury__getopt__OT_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_12_12);
    }
#line 1129 "getopt.m"
    mercury__getopt__V_12_12 = ((MR_Word) mercury__getopt__conv0_V_12_12);
#line 1129 "getopt.m"
    mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__V_12_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_12_12, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1129 "getopt.m"
    if (mercury__getopt__succeeded)
#line 1129 "getopt.m"
      {
#line 1129 "getopt.m"
        mercury__getopt__Val0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_12_12, (MR_Integer) 1)));
#line 1130 "getopt.m"
        mercury__getopt__Ss_6 = mercury__getopt__Val0_11;
#line 1129 "getopt.m"
      }
#line 1129 "getopt.m"
    else
#line 1132 "getopt.m"
      {
#line 1132 "getopt.m"
        {
#line 1132 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected accumulating option and didn\'t get one.");
        }
#line 1132 "getopt.m"
      }
#line 1131 "getopt.m"
    return mercury__getopt__Ss_6;
#line 1131 "getopt.m"
  }
#line 358 "getopt.m"
}

#line 356 "getopt.m"
void MR_CALL 
mercury__getopt__lookup_accumulating_option_3_p_0(
#line 356 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_10,
#line 356 "getopt.m"
  MR_Word mercury__getopt__OptionTable_4,
#line 356 "getopt.m"
  MR_Box mercury__getopt__Opt_5,
#line 356 "getopt.m"
  MR_Word * mercury__getopt__Val_6)
#line 356 "getopt.m"
{
#line 1131 "getopt.m"
  {
#line 1131 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 1131 "getopt.m"
    MR_Word mercury__getopt__Val0_7;
#line 1129 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 1129 "getopt.m"
    MR_Word mercury__getopt__V_8_8;
#line 1129 "getopt.m"
    MR_Box mercury__getopt__conv0_V_8_8;

#line 1129 "getopt.m"
    {
#line 1129 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_10, mercury__getopt__TypeCtorInfo_11_11, mercury__getopt__OptionTable_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_8_8);
    }
#line 1129 "getopt.m"
    mercury__getopt__V_8_8 = ((MR_Word) mercury__getopt__conv0_V_8_8);
#line 1129 "getopt.m"
    mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__V_8_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_8_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1129 "getopt.m"
    if (mercury__getopt__succeeded)
#line 1129 "getopt.m"
      {
#line 1129 "getopt.m"
        mercury__getopt__Val0_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_8_8, (MR_Integer) 1)));
#line 1130 "getopt.m"
        *mercury__getopt__Val_6 = mercury__getopt__Val0_7;
#line 1129 "getopt.m"
      }
#line 1129 "getopt.m"
    else
#line 1132 "getopt.m"
      {
#line 1132 "getopt.m"
        {
#line 1132 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected accumulating option and didn\'t get one.");
#line 1132 "getopt.m"
          return;
        }
#line 1132 "getopt.m"
      }
#line 1131 "getopt.m"
  }
#line 356 "getopt.m"
}

#line 353 "getopt.m"
MR_Word MR_CALL 
mercury__getopt__lookup_maybe_string_option_2_f_0(
#line 353 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_7,
#line 353 "getopt.m"
  MR_Word mercury__getopt__OT_4,
#line 353 "getopt.m"
  MR_Box mercury__getopt__Opt_5)
#line 353 "getopt.m"
{
#line 1121 "getopt.m"
  {
#line 1121 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 1121 "getopt.m"
    MR_Word mercury__getopt__MS_6;
#line 1121 "getopt.m"
    MR_Word mercury__getopt__Val0_11;
#line 1119 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 1119 "getopt.m"
    MR_Word mercury__getopt__V_12_12;
#line 1119 "getopt.m"
    MR_Box mercury__getopt__conv0_V_12_12;

#line 1119 "getopt.m"
    {
#line 1119 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_7, mercury__getopt__TypeCtorInfo_11_14, mercury__getopt__OT_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_12_12);
    }
#line 1119 "getopt.m"
    mercury__getopt__V_12_12 = ((MR_Word) mercury__getopt__conv0_V_12_12);
#line 1119 "getopt.m"
    mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__V_12_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_12_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1119 "getopt.m"
    if (mercury__getopt__succeeded)
#line 1119 "getopt.m"
      {
#line 1119 "getopt.m"
        mercury__getopt__Val0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_12_12, (MR_Integer) 1)));
#line 1120 "getopt.m"
        mercury__getopt__MS_6 = mercury__getopt__Val0_11;
#line 1119 "getopt.m"
      }
#line 1119 "getopt.m"
    else
#line 1122 "getopt.m"
      {
#line 1122 "getopt.m"
        {
#line 1122 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected maybe_string option and didn\'t get one.");
        }
#line 1122 "getopt.m"
      }
#line 1121 "getopt.m"
    return mercury__getopt__MS_6;
#line 1121 "getopt.m"
  }
#line 353 "getopt.m"
}

#line 351 "getopt.m"
void MR_CALL 
mercury__getopt__lookup_maybe_string_option_3_p_0(
#line 351 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_10,
#line 351 "getopt.m"
  MR_Word mercury__getopt__OptionTable_4,
#line 351 "getopt.m"
  MR_Box mercury__getopt__Opt_5,
#line 351 "getopt.m"
  MR_Word * mercury__getopt__Val_6)
#line 351 "getopt.m"
{
#line 1121 "getopt.m"
  {
#line 1121 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 1121 "getopt.m"
    MR_Word mercury__getopt__Val0_7;
#line 1119 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 1119 "getopt.m"
    MR_Word mercury__getopt__V_8_8;
#line 1119 "getopt.m"
    MR_Box mercury__getopt__conv0_V_8_8;

#line 1119 "getopt.m"
    {
#line 1119 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_10, mercury__getopt__TypeCtorInfo_11_11, mercury__getopt__OptionTable_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_8_8);
    }
#line 1119 "getopt.m"
    mercury__getopt__V_8_8 = ((MR_Word) mercury__getopt__conv0_V_8_8);
#line 1119 "getopt.m"
    mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__V_8_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_8_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1119 "getopt.m"
    if (mercury__getopt__succeeded)
#line 1119 "getopt.m"
      {
#line 1119 "getopt.m"
        mercury__getopt__Val0_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_8_8, (MR_Integer) 1)));
#line 1120 "getopt.m"
        *mercury__getopt__Val_6 = mercury__getopt__Val0_7;
#line 1119 "getopt.m"
      }
#line 1119 "getopt.m"
    else
#line 1122 "getopt.m"
      {
#line 1122 "getopt.m"
        {
#line 1122 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected maybe_string option and didn\'t get one.");
#line 1122 "getopt.m"
          return;
        }
#line 1122 "getopt.m"
      }
#line 1121 "getopt.m"
  }
#line 351 "getopt.m"
}

#line 348 "getopt.m"
MR_Word MR_CALL 
mercury__getopt__lookup_maybe_int_option_2_f_0(
#line 348 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_7,
#line 348 "getopt.m"
  MR_Word mercury__getopt__OT_4,
#line 348 "getopt.m"
  MR_Box mercury__getopt__Opt_5)
#line 348 "getopt.m"
{
#line 1111 "getopt.m"
  {
#line 1111 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 1111 "getopt.m"
    MR_Word mercury__getopt__MN_6;
#line 1111 "getopt.m"
    MR_Word mercury__getopt__Val0_11;
#line 1109 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 1109 "getopt.m"
    MR_Word mercury__getopt__V_12_12;
#line 1109 "getopt.m"
    MR_Box mercury__getopt__conv0_V_12_12;

#line 1109 "getopt.m"
    {
#line 1109 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_7, mercury__getopt__TypeCtorInfo_11_14, mercury__getopt__OT_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_12_12);
    }
#line 1109 "getopt.m"
    mercury__getopt__V_12_12 = ((MR_Word) mercury__getopt__conv0_V_12_12);
#line 1109 "getopt.m"
    mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__V_12_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_12_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1109 "getopt.m"
    if (mercury__getopt__succeeded)
#line 1109 "getopt.m"
      {
#line 1109 "getopt.m"
        mercury__getopt__Val0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_12_12, (MR_Integer) 1)));
#line 1110 "getopt.m"
        mercury__getopt__MN_6 = mercury__getopt__Val0_11;
#line 1109 "getopt.m"
      }
#line 1109 "getopt.m"
    else
#line 1112 "getopt.m"
      {
#line 1112 "getopt.m"
        {
#line 1112 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected maybe_int option and didn\'t get one.");
        }
#line 1112 "getopt.m"
      }
#line 1111 "getopt.m"
    return mercury__getopt__MN_6;
#line 1111 "getopt.m"
  }
#line 348 "getopt.m"
}

#line 346 "getopt.m"
void MR_CALL 
mercury__getopt__lookup_maybe_int_option_3_p_0(
#line 346 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_10,
#line 346 "getopt.m"
  MR_Word mercury__getopt__OptionTable_4,
#line 346 "getopt.m"
  MR_Box mercury__getopt__Opt_5,
#line 346 "getopt.m"
  MR_Word * mercury__getopt__Val_6)
#line 346 "getopt.m"
{
#line 1111 "getopt.m"
  {
#line 1111 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 1111 "getopt.m"
    MR_Word mercury__getopt__Val0_7;
#line 1109 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 1109 "getopt.m"
    MR_Word mercury__getopt__V_8_8;
#line 1109 "getopt.m"
    MR_Box mercury__getopt__conv0_V_8_8;

#line 1109 "getopt.m"
    {
#line 1109 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_10, mercury__getopt__TypeCtorInfo_11_11, mercury__getopt__OptionTable_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_8_8);
    }
#line 1109 "getopt.m"
    mercury__getopt__V_8_8 = ((MR_Word) mercury__getopt__conv0_V_8_8);
#line 1109 "getopt.m"
    mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__V_8_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_8_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1109 "getopt.m"
    if (mercury__getopt__succeeded)
#line 1109 "getopt.m"
      {
#line 1109 "getopt.m"
        mercury__getopt__Val0_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_8_8, (MR_Integer) 1)));
#line 1110 "getopt.m"
        *mercury__getopt__Val_6 = mercury__getopt__Val0_7;
#line 1109 "getopt.m"
      }
#line 1109 "getopt.m"
    else
#line 1112 "getopt.m"
      {
#line 1112 "getopt.m"
        {
#line 1112 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected maybe_int option and didn\'t get one.");
#line 1112 "getopt.m"
          return;
        }
#line 1112 "getopt.m"
      }
#line 1111 "getopt.m"
  }
#line 346 "getopt.m"
}

#line 344 "getopt.m"
MR_String MR_CALL 
mercury__getopt__lookup_string_option_2_f_0(
#line 344 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_7,
#line 344 "getopt.m"
  MR_Word mercury__getopt__OT_4,
#line 344 "getopt.m"
  MR_Box mercury__getopt__Opt_5)
#line 344 "getopt.m"
{
#line 1101 "getopt.m"
  {
#line 1101 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 1101 "getopt.m"
    MR_String mercury__getopt__S_6;
#line 1101 "getopt.m"
    MR_String mercury__getopt__Val0_11;
#line 1099 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 1099 "getopt.m"
    MR_Word mercury__getopt__V_12_12;
#line 1099 "getopt.m"
    MR_Box mercury__getopt__conv0_V_12_12;

#line 1099 "getopt.m"
    {
#line 1099 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_7, mercury__getopt__TypeCtorInfo_11_14, mercury__getopt__OT_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_12_12);
    }
#line 1099 "getopt.m"
    mercury__getopt__V_12_12 = ((MR_Word) mercury__getopt__conv0_V_12_12);
#line 1099 "getopt.m"
    mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__V_12_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_12_12, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1099 "getopt.m"
    if (mercury__getopt__succeeded)
#line 1099 "getopt.m"
      {
#line 1099 "getopt.m"
        mercury__getopt__Val0_11 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__V_12_12, (MR_Integer) 1)));
#line 1100 "getopt.m"
        mercury__getopt__S_6 = mercury__getopt__Val0_11;
#line 1099 "getopt.m"
      }
#line 1099 "getopt.m"
    else
#line 1102 "getopt.m"
      {
#line 1102 "getopt.m"
        {
#line 1102 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected string option and didn\'t get one.");
        }
#line 1102 "getopt.m"
      }
#line 1101 "getopt.m"
    return mercury__getopt__S_6;
#line 1101 "getopt.m"
  }
#line 344 "getopt.m"
}

#line 342 "getopt.m"
void MR_CALL 
mercury__getopt__lookup_string_option_3_p_0(
#line 342 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_10,
#line 342 "getopt.m"
  MR_Word mercury__getopt__OptionTable_4,
#line 342 "getopt.m"
  MR_Box mercury__getopt__Opt_5,
#line 342 "getopt.m"
  MR_String * mercury__getopt__Val_6)
#line 342 "getopt.m"
{
#line 1101 "getopt.m"
  {
#line 1101 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 1101 "getopt.m"
    MR_String mercury__getopt__Val0_7;
#line 1099 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 1099 "getopt.m"
    MR_Word mercury__getopt__V_8_8;
#line 1099 "getopt.m"
    MR_Box mercury__getopt__conv0_V_8_8;

#line 1099 "getopt.m"
    {
#line 1099 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_10, mercury__getopt__TypeCtorInfo_11_11, mercury__getopt__OptionTable_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_8_8);
    }
#line 1099 "getopt.m"
    mercury__getopt__V_8_8 = ((MR_Word) mercury__getopt__conv0_V_8_8);
#line 1099 "getopt.m"
    mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__V_8_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_8_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1099 "getopt.m"
    if (mercury__getopt__succeeded)
#line 1099 "getopt.m"
      {
#line 1099 "getopt.m"
        mercury__getopt__Val0_7 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__V_8_8, (MR_Integer) 1)));
#line 1100 "getopt.m"
        *mercury__getopt__Val_6 = mercury__getopt__Val0_7;
#line 1099 "getopt.m"
      }
#line 1099 "getopt.m"
    else
#line 1102 "getopt.m"
      {
#line 1102 "getopt.m"
        {
#line 1102 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected string option and didn\'t get one.");
#line 1102 "getopt.m"
          return;
        }
#line 1102 "getopt.m"
      }
#line 1101 "getopt.m"
  }
#line 342 "getopt.m"
}

#line 340 "getopt.m"
MR_Integer MR_CALL 
mercury__getopt__lookup_int_option_2_f_0(
#line 340 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_7,
#line 340 "getopt.m"
  MR_Word mercury__getopt__OT_4,
#line 340 "getopt.m"
  MR_Box mercury__getopt__Opt_5)
#line 340 "getopt.m"
{
#line 1091 "getopt.m"
  {
#line 1091 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 1091 "getopt.m"
    MR_Integer mercury__getopt__N_6;
#line 1091 "getopt.m"
    MR_Integer mercury__getopt__Val0_11;
#line 1089 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 1089 "getopt.m"
    MR_Word mercury__getopt__V_12_12;
#line 1089 "getopt.m"
    MR_Box mercury__getopt__conv0_V_12_12;

#line 1089 "getopt.m"
    {
#line 1089 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_7, mercury__getopt__TypeCtorInfo_11_14, mercury__getopt__OT_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_12_12);
    }
#line 1089 "getopt.m"
    mercury__getopt__V_12_12 = ((MR_Word) mercury__getopt__conv0_V_12_12);
#line 1089 "getopt.m"
    mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__V_12_12)) == (MR_mktag((MR_Integer) 2)));
#line 1089 "getopt.m"
    if (mercury__getopt__succeeded)
#line 1089 "getopt.m"
      {
#line 1089 "getopt.m"
        mercury__getopt__Val0_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt__V_12_12, (MR_Integer) 0)));
#line 1090 "getopt.m"
        mercury__getopt__N_6 = mercury__getopt__Val0_11;
#line 1089 "getopt.m"
      }
#line 1089 "getopt.m"
    else
#line 1092 "getopt.m"
      {
#line 1092 "getopt.m"
        {
#line 1092 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected int option and didn\'t get one.");
        }
#line 1092 "getopt.m"
      }
#line 1091 "getopt.m"
    return mercury__getopt__N_6;
#line 1091 "getopt.m"
  }
#line 340 "getopt.m"
}

#line 338 "getopt.m"
void MR_CALL 
mercury__getopt__lookup_int_option_3_p_0(
#line 338 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_10,
#line 338 "getopt.m"
  MR_Word mercury__getopt__OptionTable_4,
#line 338 "getopt.m"
  MR_Box mercury__getopt__Opt_5,
#line 338 "getopt.m"
  MR_Integer * mercury__getopt__Val_6)
#line 338 "getopt.m"
{
#line 1091 "getopt.m"
  {
#line 1091 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 1091 "getopt.m"
    MR_Integer mercury__getopt__Val0_7;
#line 1089 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 1089 "getopt.m"
    MR_Word mercury__getopt__V_8_8;
#line 1089 "getopt.m"
    MR_Box mercury__getopt__conv0_V_8_8;

#line 1089 "getopt.m"
    {
#line 1089 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_10, mercury__getopt__TypeCtorInfo_11_11, mercury__getopt__OptionTable_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_8_8);
    }
#line 1089 "getopt.m"
    mercury__getopt__V_8_8 = ((MR_Word) mercury__getopt__conv0_V_8_8);
#line 1089 "getopt.m"
    mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__V_8_8)) == (MR_mktag((MR_Integer) 2)));
#line 1089 "getopt.m"
    if (mercury__getopt__succeeded)
#line 1089 "getopt.m"
      {
#line 1089 "getopt.m"
        mercury__getopt__Val0_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt__V_8_8, (MR_Integer) 0)));
#line 1090 "getopt.m"
        *mercury__getopt__Val_6 = mercury__getopt__Val0_7;
#line 1089 "getopt.m"
      }
#line 1089 "getopt.m"
    else
#line 1092 "getopt.m"
      {
#line 1092 "getopt.m"
        {
#line 1092 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected int option and didn\'t get one.");
#line 1092 "getopt.m"
          return;
        }
#line 1092 "getopt.m"
      }
#line 1091 "getopt.m"
  }
#line 338 "getopt.m"
}

#line 336 "getopt.m"
MR_Word MR_CALL 
mercury__getopt__lookup_bool_option_2_f_0(
#line 336 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_7,
#line 336 "getopt.m"
  MR_Word mercury__getopt__OT_4,
#line 336 "getopt.m"
  MR_Box mercury__getopt__Opt_5)
#line 336 "getopt.m"
{
#line 1081 "getopt.m"
  {
#line 1081 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 1081 "getopt.m"
    MR_Word mercury__getopt__B_6;
#line 1081 "getopt.m"
    MR_Word mercury__getopt__Val0_11;
#line 1079 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 1079 "getopt.m"
    MR_Word mercury__getopt__V_12_12;
#line 1079 "getopt.m"
    MR_Box mercury__getopt__conv0_V_12_12;

#line 1079 "getopt.m"
    {
#line 1079 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_7, mercury__getopt__TypeCtorInfo_11_14, mercury__getopt__OT_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_12_12);
    }
#line 1079 "getopt.m"
    mercury__getopt__V_12_12 = ((MR_Word) mercury__getopt__conv0_V_12_12);
#line 1079 "getopt.m"
    mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 1079 "getopt.m"
    if (mercury__getopt__succeeded)
#line 1079 "getopt.m"
      {
#line 1079 "getopt.m"
        mercury__getopt__Val0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__V_12_12, (MR_Integer) 0)));
#line 1080 "getopt.m"
        mercury__getopt__B_6 = mercury__getopt__Val0_11;
#line 1079 "getopt.m"
      }
#line 1079 "getopt.m"
    else
#line 1082 "getopt.m"
      {
#line 1082 "getopt.m"
        {
#line 1082 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected bool option and didn\'t get one.");
        }
#line 1082 "getopt.m"
      }
#line 1081 "getopt.m"
    return mercury__getopt__B_6;
#line 1081 "getopt.m"
  }
#line 336 "getopt.m"
}

#line 334 "getopt.m"
void MR_CALL 
mercury__getopt__lookup_bool_option_3_p_0(
#line 334 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_10,
#line 334 "getopt.m"
  MR_Word mercury__getopt__OptionTable_4,
#line 334 "getopt.m"
  MR_Box mercury__getopt__Opt_5,
#line 334 "getopt.m"
  MR_Word * mercury__getopt__Val_6)
#line 334 "getopt.m"
{
#line 1081 "getopt.m"
  {
#line 1081 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 1081 "getopt.m"
    MR_Word mercury__getopt__Val0_7;
#line 1079 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 1079 "getopt.m"
    MR_Word mercury__getopt__V_8_8;
#line 1079 "getopt.m"
    MR_Box mercury__getopt__conv0_V_8_8;

#line 1079 "getopt.m"
    {
#line 1079 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_10, mercury__getopt__TypeCtorInfo_11_11, mercury__getopt__OptionTable_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_8_8);
    }
#line 1079 "getopt.m"
    mercury__getopt__V_8_8 = ((MR_Word) mercury__getopt__conv0_V_8_8);
#line 1079 "getopt.m"
    mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__V_8_8)) == (MR_mktag((MR_Integer) 1)));
#line 1079 "getopt.m"
    if (mercury__getopt__succeeded)
#line 1079 "getopt.m"
      {
#line 1079 "getopt.m"
        mercury__getopt__Val0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__V_8_8, (MR_Integer) 0)));
#line 1080 "getopt.m"
        *mercury__getopt__Val_6 = mercury__getopt__Val0_7;
#line 1079 "getopt.m"
      }
#line 1079 "getopt.m"
    else
#line 1082 "getopt.m"
      {
#line 1082 "getopt.m"
        {
#line 1082 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected bool option and didn\'t get one.");
#line 1082 "getopt.m"
          return;
        }
#line 1082 "getopt.m"
      }
#line 1081 "getopt.m"
  }
#line 334 "getopt.m"
}

#line 328 "getopt.m"
MR_String MR_CALL 
mercury__getopt__option_error_to_string_1_f_0(
#line 328 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_47,
#line 328 "getopt.m"
  MR_Word mercury__getopt__Error_3)
#line 328 "getopt.m"
{
#line 1036 "getopt.m"
  {
#line 1036 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 1036 "getopt.m"
    MR_String mercury__getopt__String_4;

#line 1036 "getopt.m"
    if (((MR_tag((MR_Word) mercury__getopt__Error_3)) == (MR_mktag((MR_Integer) 1))))
#line 1037 "getopt.m"
      {
#line 1037 "getopt.m"
        MR_Word mercury__getopt__Reason_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__Error_3, (MR_Integer) 2)));
#line 1037 "getopt.m"
        MR_String mercury__getopt__OptionName_46 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__Error_3, (MR_Integer) 1)));
#line 1037 "getopt.m"
        MR_Box mercury__getopt__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__getopt__Error_3, (MR_Integer) 0));

#line 1042 "getopt.m"
        if ((mercury__getopt__Reason_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1051 "getopt.m"
          {
#line 1051 "getopt.m"
            MR_String mercury__getopt__V_97_97;

#line 12748 "getopt.c"
            {
#line 12750 "getopt.c"
              mercury__getopt__V_97_97 = mercury__string__f_43_43_2_f_0(mercury__getopt__OptionName_46, (MR_String) "\' -- only boolean, maybe and accumulating options can be negated");
            }
#line 12753 "getopt.c"
            {
#line 12755 "getopt.c"
              return mercury__getopt__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "cannot negate option \140", mercury__getopt__V_97_97);
            }
#line 1051 "getopt.m"
          }
#line 1042 "getopt.m"
        else
#line 1042 "getopt.m"
          if ((mercury__getopt__Reason_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1043 "getopt.m"
            {
#line 1043 "getopt.m"
              MR_String mercury__getopt__V_52_52;

#line 260 "string.opt"
              {
#line 260 "string.opt"
                mercury__string__append_3_p_2(mercury__getopt__OptionName_46, (MR_String) "\' needs an argument", &mercury__getopt__V_52_52);
              }
#line 260 "string.opt"
              {
#line 260 "string.opt"
                mercury__string__append_3_p_2((MR_String) "option \140", mercury__getopt__V_52_52, &mercury__getopt__String_4);
              }
#line 1043 "getopt.m"
            }
#line 1042 "getopt.m"
          else
#line 1042 "getopt.m"
            if ((mercury__getopt__Reason_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1056 "getopt.m"
              {
#line 1056 "getopt.m"
                MR_String mercury__getopt__V_61_61;

#line 12790 "getopt.c"
                {
#line 12792 "getopt.c"
                  mercury__getopt__V_61_61 = mercury__string__f_43_43_2_f_0(mercury__getopt__OptionName_46, (MR_String) "\' failed");
                }
#line 12795 "getopt.c"
                {
#line 12797 "getopt.c"
                  return mercury__getopt__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "the handler of option \140", mercury__getopt__V_61_61);
                }
#line 1056 "getopt.m"
              }
#line 1042 "getopt.m"
            else
#line 1042 "getopt.m"
              if ((mercury__getopt__Reason_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1060 "getopt.m"
                {
#line 1060 "getopt.m"
                  MR_String mercury__getopt__V_64_64;

#line 12811 "getopt.c"
                  {
#line 12813 "getopt.c"
                    mercury__getopt__V_64_64 = mercury__string__f_43_43_2_f_0(mercury__getopt__OptionName_46, (MR_String) "\' has no handler");
                  }
#line 12816 "getopt.c"
                  {
#line 12818 "getopt.c"
                    return mercury__getopt__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", mercury__getopt__V_64_64);
                  }
#line 1060 "getopt.m"
                }
#line 1042 "getopt.m"
              else
#line 1042 "getopt.m"
                if ((mercury__getopt__Reason_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1039 "getopt.m"
                  {
#line 1039 "getopt.m"
                    MR_String mercury__getopt__V_67_67;

#line 12832 "getopt.c"
                    {
#line 12834 "getopt.c"
                      mercury__getopt__V_67_67 = mercury__string__f_43_43_2_f_0(mercury__getopt__OptionName_46, (MR_String) "\'");
                    }
#line 12837 "getopt.c"
                    {
#line 12839 "getopt.c"
                      return mercury__getopt__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "unknown type for option \140", mercury__getopt__V_67_67);
                    }
#line 1039 "getopt.m"
                  }
#line 1042 "getopt.m"
                else
#line 1042 "getopt.m"
                  if (((MR_tag((MR_Word) mercury__getopt__Reason_7)) == (MR_mktag((MR_Integer) 1))))
#line 1047 "getopt.m"
                    {
#line 1047 "getopt.m"
                      MR_String mercury__getopt__V_49_49;

#line 260 "string.opt"
                      {
#line 260 "string.opt"
                        mercury__string__append_3_p_2(mercury__getopt__OptionName_46, (MR_String) "\' does not allow an argument", &mercury__getopt__V_49_49);
                      }
#line 260 "string.opt"
                      {
#line 260 "string.opt"
                        mercury__string__append_3_p_2((MR_String) "option \140", mercury__getopt__V_49_49, &mercury__getopt__String_4);
                      }
#line 1047 "getopt.m"
                    }
#line 1042 "getopt.m"
                  else
#line 1042 "getopt.m"
                    if (((MR_tag((MR_Word) mercury__getopt__Reason_7)) == (MR_mktag((MR_Integer) 3))))
#line 1066 "getopt.m"
                      {
#line 1066 "getopt.m"
                        MR_String mercury__getopt__Arg_9 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__Reason_7, (MR_Integer) 0)));
#line 1066 "getopt.m"
                        MR_String mercury__getopt__V_55_55;
#line 1066 "getopt.m"
                        MR_String mercury__getopt__V_57_57;
#line 1066 "getopt.m"
                        MR_String mercury__getopt__V_58_58;

#line 12880 "getopt.c"
                        {
#line 12882 "getopt.c"
                          mercury__getopt__V_55_55 = mercury__string__f_43_43_2_f_0(mercury__getopt__Arg_9, (MR_String) "\' is not numeric");
                        }
#line 12885 "getopt.c"
                        {
#line 12887 "getopt.c"
                          mercury__getopt__V_57_57 = mercury__string__f_43_43_2_f_0((MR_String) "\' requires a numeric argument; \140", mercury__getopt__V_55_55);
                        }
#line 12890 "getopt.c"
                        {
#line 12892 "getopt.c"
                          mercury__getopt__V_58_58 = mercury__string__f_43_43_2_f_0(mercury__getopt__OptionName_46, mercury__getopt__V_57_57);
                        }
#line 12895 "getopt.c"
                        {
#line 12897 "getopt.c"
                          return mercury__getopt__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", mercury__getopt__V_58_58);
                        }
#line 1066 "getopt.m"
                      }
#line 1042 "getopt.m"
                    else
#line 1064 "getopt.m"
                      mercury__getopt__String_4 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__getopt__Reason_7, (MR_Integer) 0)));
#line 1037 "getopt.m"
      }
#line 1036 "getopt.m"
    else
#line 1034 "getopt.m"
      {
#line 1034 "getopt.m"
        MR_String mercury__getopt__OptionName_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__getopt__Error_3, (MR_Integer) 0)));
#line 1034 "getopt.m"
        MR_String mercury__getopt__V_70_70;

#line 12917 "getopt.c"
        {
#line 12919 "getopt.c"
          mercury__getopt__V_70_70 = mercury__string__f_43_43_2_f_0(mercury__getopt__OptionName_5, (MR_String) "\'");
        }
#line 12922 "getopt.c"
        {
#line 12924 "getopt.c"
          return mercury__getopt__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "unrecognized option \140", mercury__getopt__V_70_70);
        }
#line 1034 "getopt.m"
      }
#line 1036 "getopt.m"
    return mercury__getopt__String_4;
#line 1036 "getopt.m"
  }
#line 328 "getopt.m"
}

#line 78 "solutions.opt"
static void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0_3(
#line 78 "solutions.opt"
  MR_Box mercury__getopt__closure_arg,
#line 78 "solutions.opt"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 78 "solutions.opt"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 78 "solutions.opt"
  MR_Box * mercury__getopt__wrapper_arg_3)
#line 78 "solutions.opt"
{
#line 78 "solutions.opt"
  {
#line 78 "solutions.opt"
    MR_Box mercury__getopt__closure = mercury__getopt__closure_arg;
#line 78 "solutions.opt"
    MR_Word mercury__getopt__conv1_HeadVar__3_3;

#line 78 "solutions.opt"
    {
#line 78 "solutions.opt"
      mercury__list__cons_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__closure, (MR_Integer) 3))), mercury__getopt__wrapper_arg_1, ((MR_Word) mercury__getopt__wrapper_arg_2), &mercury__getopt__conv1_HeadVar__3_3);
    }
#line 78 "solutions.opt"
    *mercury__getopt__wrapper_arg_3 = ((MR_Box) (mercury__getopt__conv1_HeadVar__3_3));
#line 78 "solutions.opt"
  }
#line 78 "solutions.opt"
}

#line 420 "getopt.m"
static void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0_1(
#line 420 "getopt.m"
  void * mercury__getopt__env_ptr_arg)
#line 420 "getopt.m"
{
#line 420 "getopt.m"
  {
#line 420 "getopt.m"
    struct mercury__getopt__init_option_table_multi_2_p_0_2_env_0_s * mercury__getopt__env_ptr = (struct mercury__getopt__init_option_table_multi_2_p_0_2_env_0_s *) mercury__getopt__env_ptr_arg;

#line 420 "getopt.m"
    *((mercury__getopt__env_ptr)->mercury__getopt__init_option_table_multi_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((mercury__getopt__env_ptr)->mercury__getopt__init_option_table_multi_2_p_0_2_env_0__conv0_HeadVar__3_10));
#line 420 "getopt.m"
    {
#line 420 "getopt.m"
      ((mercury__getopt__env_ptr)->mercury__getopt__init_option_table_multi_2_p_0_2_env_0__cont)((mercury__getopt__env_ptr)->mercury__getopt__init_option_table_multi_2_p_0_2_env_0__cont_env_ptr);
#line 420 "getopt.m"
      return;
    }
#line 420 "getopt.m"
  }
#line 420 "getopt.m"
}

#line 420 "getopt.m"
static void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0_2(
#line 420 "getopt.m"
  MR_Box mercury__getopt__closure_arg,
#line 420 "getopt.m"
  MR_Box * mercury__getopt__wrapper_arg_1,
#line 420 "getopt.m"
  MR_Cont mercury__getopt__cont,
#line 420 "getopt.m"
  void * mercury__getopt__cont_env_ptr)
#line 420 "getopt.m"
{
#line 420 "getopt.m"
  {
#line 420 "getopt.m"
    struct mercury__getopt__init_option_table_multi_2_p_0_2_env_0_s mercury__getopt__env;

#line 420 "getopt.m"
    (mercury__getopt__env).mercury__getopt__init_option_table_multi_2_p_0_2_env_0__wrapper_arg_1 = mercury__getopt__wrapper_arg_1;
#line 420 "getopt.m"
    (mercury__getopt__env).mercury__getopt__init_option_table_multi_2_p_0_2_env_0__cont = mercury__getopt__cont;
#line 420 "getopt.m"
    (mercury__getopt__env).mercury__getopt__init_option_table_multi_2_p_0_2_env_0__cont_env_ptr = mercury__getopt__cont_env_ptr;
#line 420 "getopt.m"
    {
#line 420 "getopt.m"
      MR_Box mercury__getopt__closure = mercury__getopt__closure_arg;

#line 420 "getopt.m"
      {
#line 420 "getopt.m"
        mercury__getopt__IntroducedFrom__pred__init_option_table_multi__420__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__closure, (MR_Integer) 4))), &(mercury__getopt__env).mercury__getopt__init_option_table_multi_2_p_0_2_env_0__conv0_HeadVar__3_10, mercury__getopt__init_option_table_multi_2_p_0_1, &mercury__getopt__env);
      }
#line 420 "getopt.m"
    }
#line 420 "getopt.m"
  }
#line 420 "getopt.m"
}

#line 173 "getopt.m"
void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0(
#line 173 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_12,
#line 173 "getopt.m"
  MR_Word mercury__getopt__OptionDefaultsPred_3,
#line 173 "getopt.m"
  MR_Word * mercury__getopt__OptionTable_4)
#line 173 "getopt.m"
{
#line 419 "getopt.m"
  {
#line 419 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 419 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_13_13;
#line 419 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_14_14;
#line 419 "getopt.m"
    MR_Word mercury__getopt__TypeInfo_15_15;
#line 419 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_13_31;
#line 419 "getopt.m"
    MR_Word mercury__getopt__TypeInfo_14_32;
#line 419 "getopt.m"
    MR_Word mercury__getopt__OptionDefaultsList_8;
#line 419 "getopt.m"
    MR_Word mercury__getopt__V_9_9;
#line 419 "getopt.m"
    MR_Word mercury__getopt__UnsortedList_5_18;
#line 419 "getopt.m"
    MR_Word mercury__getopt__List0_6_19;
#line 419 "getopt.m"
    MR_Word mercury__getopt__V_6_24;
#line 419 "getopt.m"
    MR_Word mercury__getopt__V_7_26;
#line 419 "getopt.m"
    MR_Word mercury__getopt__UnsortedList0_5_27;
#line 419 "getopt.m"
    MR_Integer mercury__getopt__V_5_50;
#line 419 "getopt.m"
    MR_Word mercury__getopt__V_5_73;
#line 80 "solutions.opt"
    MR_Box mercury__getopt__conv2_UnsortedList0_5_27;
#line 110 "list.opt"
    MR_Word mercury__getopt__conv3_List0_6_19;

#line 420 "getopt.m"
    {
#line 420 "getopt.m"
      mercury__getopt__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 420 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_9_9, 0) = ((MR_Box) (&mercury__getopt_scalar_common_6[0]));
#line 420 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_9_9, 1) = ((MR_Box) (mercury__getopt__init_option_table_multi_2_p_0_2));
#line 420 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 420 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_9_9, 3) = ((MR_Box) (mercury__getopt__TypeInfo_for_OptionType_12));
#line 420 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_9_9, 4) = ((MR_Box) (mercury__getopt__OptionDefaultsPred_3));
#line 420 "getopt.m"
    }
#line 13099 "getopt.c"
    mercury__getopt__TypeCtorInfo_14_14 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 13101 "getopt.c"
    mercury__getopt__TypeCtorInfo_13_13 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 13103 "getopt.c"
    {
#line 13105 "getopt.c"
      mercury__getopt__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13107 "getopt.c"
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_15_15, 0) = ((MR_Box) (mercury__getopt__TypeCtorInfo_14_14));
#line 13109 "getopt.c"
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_15_15, 1) = ((MR_Box) (mercury__getopt__TypeInfo_for_OptionType_12));
#line 13111 "getopt.c"
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_15_15, 2) = ((MR_Box) (mercury__getopt__TypeCtorInfo_13_13));
#line 13113 "getopt.c"
    }
#line 78 "solutions.opt"
    {
#line 78 "solutions.opt"
      mercury__getopt__V_6_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 78 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_6_24, 0) = ((MR_Box) (&mercury__getopt_scalar_common_7[0]));
#line 78 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_6_24, 1) = ((MR_Box) (mercury__getopt__init_option_table_multi_2_p_0_3));
#line 78 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_6_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 78 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_6_24, 3) = ((MR_Box) (mercury__getopt__TypeInfo_15_15));
#line 78 "solutions.opt"
    }
#line 79 "solutions.opt"
    mercury__getopt__V_7_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 13131 "getopt.c"
    mercury__getopt__TypeCtorInfo_13_31 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 13133 "getopt.c"
    {
#line 13135 "getopt.c"
      mercury__getopt__TypeInfo_14_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13137 "getopt.c"
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_14_32, 0) = ((MR_Box) (mercury__getopt__TypeCtorInfo_13_31));
#line 13139 "getopt.c"
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_14_32, 1) = ((MR_Box) (mercury__getopt__TypeInfo_15_15));
#line 13141 "getopt.c"
    }
#line 80 "solutions.opt"
    {
#line 80 "solutions.opt"
      mercury__solutions__builtin_aggregate_4_p_0(mercury__getopt__TypeInfo_15_15, mercury__getopt__TypeInfo_14_32, (MR_Word) mercury__getopt__V_9_9, (MR_Word) mercury__getopt__V_6_24, ((MR_Box) (mercury__getopt__V_7_26)), &mercury__getopt__conv2_UnsortedList0_5_27);
    }
#line 80 "solutions.opt"
    mercury__getopt__UnsortedList0_5_27 = ((MR_Word) mercury__getopt__conv2_UnsortedList0_5_27);
#line 90 "solutions.opt"
    if ((mercury__getopt__UnsortedList0_5_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 85 "solutions.opt"
      {
#line 89 "solutions.opt"
        {
#line 89 "solutions.opt"
          mercury__require__unexpected_3_p_0((MR_String) "solutions", (MR_String) "predicate \140solutions.assert_num_solutions\'/3", (MR_String) "no solutions");
#line 89 "solutions.opt"
          return;
        }
#line 85 "solutions.opt"
      }
#line 90 "solutions.opt"
    else
#line 92 "solutions.opt"
      mercury__getopt__UnsortedList_5_18 = mercury__getopt__UnsortedList0_5_27;
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__getopt__TypeInfo_15_15, (MR_Word) mercury__getopt__UnsortedList_5_18, (MR_Integer) 0, &mercury__getopt__V_5_50);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__getopt__TypeInfo_15_15, mercury__getopt__V_5_50, (MR_Word) mercury__getopt__UnsortedList_5_18, &mercury__getopt__conv3_List0_6_19);
    }
#line 110 "list.opt"
    mercury__getopt__List0_6_19 = (MR_Word) mercury__getopt__conv3_List0_6_19;
#line 90 "solutions.opt"
    if ((mercury__getopt__List0_6_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 85 "solutions.opt"
      {
#line 89 "solutions.opt"
        {
#line 89 "solutions.opt"
          mercury__require__unexpected_3_p_0((MR_String) "solutions", (MR_String) "predicate \140solutions.assert_num_solutions\'/3", (MR_String) "no solutions");
#line 89 "solutions.opt"
          return;
        }
#line 85 "solutions.opt"
      }
#line 90 "solutions.opt"
    else
#line 92 "solutions.opt"
      mercury__getopt__OptionDefaultsList_8 = mercury__getopt__List0_6_19;
#line 90 "tree234.opt"
    mercury__getopt__V_5_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 91 "tree234.opt"
    {
#line 91 "tree234.opt"
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__getopt__TypeInfo_for_OptionType_12, mercury__getopt__TypeCtorInfo_13_13, mercury__getopt__OptionDefaultsList_8, mercury__getopt__V_5_73, mercury__getopt__OptionTable_4);
#line 91 "tree234.opt"
      return;
    }
#line 419 "getopt.m"
  }
#line 173 "getopt.m"
}

#line 78 "solutions.opt"
static void MR_CALL 
mercury__getopt__init_option_table_2_p_0_3(
#line 78 "solutions.opt"
  MR_Box mercury__getopt__closure_arg,
#line 78 "solutions.opt"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 78 "solutions.opt"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 78 "solutions.opt"
  MR_Box * mercury__getopt__wrapper_arg_3)
#line 78 "solutions.opt"
{
#line 78 "solutions.opt"
  {
#line 78 "solutions.opt"
    MR_Box mercury__getopt__closure = mercury__getopt__closure_arg;
#line 78 "solutions.opt"
    MR_Word mercury__getopt__conv1_HeadVar__3_3;

#line 78 "solutions.opt"
    {
#line 78 "solutions.opt"
      mercury__list__cons_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__closure, (MR_Integer) 3))), mercury__getopt__wrapper_arg_1, ((MR_Word) mercury__getopt__wrapper_arg_2), &mercury__getopt__conv1_HeadVar__3_3);
    }
#line 78 "solutions.opt"
    *mercury__getopt__wrapper_arg_3 = ((MR_Box) (mercury__getopt__conv1_HeadVar__3_3));
#line 78 "solutions.opt"
  }
#line 78 "solutions.opt"
}

#line 413 "getopt.m"
static void MR_CALL 
mercury__getopt__init_option_table_2_p_0_1(
#line 413 "getopt.m"
  void * mercury__getopt__env_ptr_arg)
#line 413 "getopt.m"
{
#line 413 "getopt.m"
  {
#line 413 "getopt.m"
    struct mercury__getopt__init_option_table_2_p_0_2_env_0_s * mercury__getopt__env_ptr = (struct mercury__getopt__init_option_table_2_p_0_2_env_0_s *) mercury__getopt__env_ptr_arg;

#line 413 "getopt.m"
    *((mercury__getopt__env_ptr)->mercury__getopt__init_option_table_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((mercury__getopt__env_ptr)->mercury__getopt__init_option_table_2_p_0_2_env_0__conv0_HeadVar__3_10));
#line 413 "getopt.m"
    {
#line 413 "getopt.m"
      ((mercury__getopt__env_ptr)->mercury__getopt__init_option_table_2_p_0_2_env_0__cont)((mercury__getopt__env_ptr)->mercury__getopt__init_option_table_2_p_0_2_env_0__cont_env_ptr);
#line 413 "getopt.m"
      return;
    }
#line 413 "getopt.m"
  }
#line 413 "getopt.m"
}

#line 413 "getopt.m"
static void MR_CALL 
mercury__getopt__init_option_table_2_p_0_2(
#line 413 "getopt.m"
  MR_Box mercury__getopt__closure_arg,
#line 413 "getopt.m"
  MR_Box * mercury__getopt__wrapper_arg_1,
#line 413 "getopt.m"
  MR_Cont mercury__getopt__cont,
#line 413 "getopt.m"
  void * mercury__getopt__cont_env_ptr)
#line 413 "getopt.m"
{
#line 413 "getopt.m"
  {
#line 413 "getopt.m"
    struct mercury__getopt__init_option_table_2_p_0_2_env_0_s mercury__getopt__env;

#line 413 "getopt.m"
    (mercury__getopt__env).mercury__getopt__init_option_table_2_p_0_2_env_0__wrapper_arg_1 = mercury__getopt__wrapper_arg_1;
#line 413 "getopt.m"
    (mercury__getopt__env).mercury__getopt__init_option_table_2_p_0_2_env_0__cont = mercury__getopt__cont;
#line 413 "getopt.m"
    (mercury__getopt__env).mercury__getopt__init_option_table_2_p_0_2_env_0__cont_env_ptr = mercury__getopt__cont_env_ptr;
#line 413 "getopt.m"
    {
#line 413 "getopt.m"
      MR_Box mercury__getopt__closure = mercury__getopt__closure_arg;

#line 413 "getopt.m"
      {
#line 413 "getopt.m"
        mercury__getopt__IntroducedFrom__pred__init_option_table__413__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__closure, (MR_Integer) 4))), &(mercury__getopt__env).mercury__getopt__init_option_table_2_p_0_2_env_0__conv0_HeadVar__3_10, mercury__getopt__init_option_table_2_p_0_1, &mercury__getopt__env);
      }
#line 413 "getopt.m"
    }
#line 413 "getopt.m"
  }
#line 413 "getopt.m"
}

#line 169 "getopt.m"
void MR_CALL 
mercury__getopt__init_option_table_2_p_0(
#line 169 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_12,
#line 169 "getopt.m"
  MR_Word mercury__getopt__OptionDefaultsPred_3,
#line 169 "getopt.m"
  MR_Word * mercury__getopt__OptionTable_4)
#line 169 "getopt.m"
{
#line 412 "getopt.m"
  {
#line 412 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 412 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_13_13;
#line 412 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_14_14;
#line 412 "getopt.m"
    MR_Word mercury__getopt__TypeInfo_15_15;
#line 412 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_13_31;
#line 412 "getopt.m"
    MR_Word mercury__getopt__TypeInfo_14_32;
#line 412 "getopt.m"
    MR_Word mercury__getopt__OptionDefaultsList_8;
#line 412 "getopt.m"
    MR_Word mercury__getopt__V_9_9;
#line 412 "getopt.m"
    MR_Word mercury__getopt__UnsortedList_5_18;
#line 412 "getopt.m"
    MR_Word mercury__getopt__V_6_24;
#line 412 "getopt.m"
    MR_Word mercury__getopt__V_7_26;
#line 412 "getopt.m"
    MR_Integer mercury__getopt__V_5_50;
#line 412 "getopt.m"
    MR_Word mercury__getopt__V_5_73;
#line 80 "solutions.opt"
    MR_Box mercury__getopt__conv2_UnsortedList_5_18;
#line 110 "list.opt"
    MR_Word mercury__getopt__conv3_OptionDefaultsList_8;

#line 413 "getopt.m"
    {
#line 413 "getopt.m"
      mercury__getopt__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 413 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_9_9, 0) = ((MR_Box) (&mercury__getopt_scalar_common_6[0]));
#line 413 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_9_9, 1) = ((MR_Box) (mercury__getopt__init_option_table_2_p_0_2));
#line 413 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 413 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_9_9, 3) = ((MR_Box) (mercury__getopt__TypeInfo_for_OptionType_12));
#line 413 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_9_9, 4) = ((MR_Box) (mercury__getopt__OptionDefaultsPred_3));
#line 413 "getopt.m"
    }
#line 13369 "getopt.c"
    mercury__getopt__TypeCtorInfo_14_14 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 13371 "getopt.c"
    mercury__getopt__TypeCtorInfo_13_13 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 13373 "getopt.c"
    {
#line 13375 "getopt.c"
      mercury__getopt__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13377 "getopt.c"
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_15_15, 0) = ((MR_Box) (mercury__getopt__TypeCtorInfo_14_14));
#line 13379 "getopt.c"
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_15_15, 1) = ((MR_Box) (mercury__getopt__TypeInfo_for_OptionType_12));
#line 13381 "getopt.c"
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_15_15, 2) = ((MR_Box) (mercury__getopt__TypeCtorInfo_13_13));
#line 13383 "getopt.c"
    }
#line 78 "solutions.opt"
    {
#line 78 "solutions.opt"
      mercury__getopt__V_6_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 78 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_6_24, 0) = ((MR_Box) (&mercury__getopt_scalar_common_7[0]));
#line 78 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_6_24, 1) = ((MR_Box) (mercury__getopt__init_option_table_2_p_0_3));
#line 78 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_6_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 78 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_6_24, 3) = ((MR_Box) (mercury__getopt__TypeInfo_15_15));
#line 78 "solutions.opt"
    }
#line 79 "solutions.opt"
    mercury__getopt__V_7_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 13401 "getopt.c"
    mercury__getopt__TypeCtorInfo_13_31 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 13403 "getopt.c"
    {
#line 13405 "getopt.c"
      mercury__getopt__TypeInfo_14_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13407 "getopt.c"
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_14_32, 0) = ((MR_Box) (mercury__getopt__TypeCtorInfo_13_31));
#line 13409 "getopt.c"
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_14_32, 1) = ((MR_Box) (mercury__getopt__TypeInfo_15_15));
#line 13411 "getopt.c"
    }
#line 80 "solutions.opt"
    {
#line 80 "solutions.opt"
      mercury__solutions__builtin_aggregate_4_p_7(mercury__getopt__TypeInfo_15_15, mercury__getopt__TypeInfo_14_32, (MR_Word) mercury__getopt__V_9_9, (MR_Word) mercury__getopt__V_6_24, ((MR_Box) (mercury__getopt__V_7_26)), &mercury__getopt__conv2_UnsortedList_5_18);
    }
#line 80 "solutions.opt"
    mercury__getopt__UnsortedList_5_18 = ((MR_Word) mercury__getopt__conv2_UnsortedList_5_18);
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__getopt__TypeInfo_15_15, (MR_Word) mercury__getopt__UnsortedList_5_18, (MR_Integer) 0, &mercury__getopt__V_5_50);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__getopt__TypeInfo_15_15, mercury__getopt__V_5_50, (MR_Word) mercury__getopt__UnsortedList_5_18, &mercury__getopt__conv3_OptionDefaultsList_8);
    }
#line 110 "list.opt"
    mercury__getopt__OptionDefaultsList_8 = (MR_Word) mercury__getopt__conv3_OptionDefaultsList_8;
#line 90 "tree234.opt"
    mercury__getopt__V_5_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 91 "tree234.opt"
    {
#line 91 "tree234.opt"
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__getopt__TypeInfo_for_OptionType_12, mercury__getopt__TypeCtorInfo_13_13, mercury__getopt__OptionDefaultsList_8, mercury__getopt__V_5_73, mercury__getopt__OptionTable_4);
#line 91 "tree234.opt"
      return;
    }
#line 412 "getopt.m"
  }
#line 169 "getopt.m"
}

#line 163 "getopt.m"
void MR_CALL 
mercury__getopt__process_options_track_se_7_p_0(
#line 163 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_23,
#line 163 "getopt.m"
  MR_Word mercury__getopt__OptionOps_8,
#line 163 "getopt.m"
  MR_Word mercury__getopt__Args0_9,
#line 163 "getopt.m"
  MR_Word * mercury__getopt__OptionArgs_10,
#line 163 "getopt.m"
  MR_Word * mercury__getopt__NonOptionArgs_11,
#line 163 "getopt.m"
  MR_Word mercury__getopt__OptionTable0_12,
#line 163 "getopt.m"
  MR_Word * mercury__getopt__Result_13,
#line 163 "getopt.m"
  MR_Word * mercury__getopt__OptionsSet_14)
#line 163 "getopt.m"
{
#line 489 "getopt.m"
  {
#line 489 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 489 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_24_24;
#line 489 "getopt.m"
    MR_Word mercury__getopt__Short_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_8, (MR_Integer) 0)));
#line 489 "getopt.m"
    MR_Word mercury__getopt__Long_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_8, (MR_Integer) 1)));
#line 489 "getopt.m"
    MR_Word mercury__getopt__Special_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_8, (MR_Integer) 2)));
#line 489 "getopt.m"
    MR_Word mercury__getopt__Internal_18;
#line 489 "getopt.m"
    MR_Word mercury__getopt__RevOptionArgs_19;
#line 489 "getopt.m"
    MR_Word mercury__getopt__V_20_20;
#line 489 "getopt.m"
    MR_Word mercury__getopt__V_21_21;
#line 489 "getopt.m"
    MR_Word mercury__getopt__V_22_22;
#line 489 "getopt.m"
    MR_Word mercury__getopt__V_2_27;

#line 491 "getopt.m"
    {
#line 491 "getopt.m"
      mercury__getopt__V_20_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 491 "getopt.m"
      MR_hl_field(MR_mktag(2), mercury__getopt__V_20_20, 0) = ((MR_Box) (mercury__getopt__Special_17));
#line 491 "getopt.m"
    }
#line 491 "getopt.m"
    {
#line 491 "getopt.m"
      mercury__getopt__Internal_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 491 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__Internal_18, 0) = ((MR_Box) (mercury__getopt__Short_15));
#line 491 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__Internal_18, 1) = ((MR_Box) (mercury__getopt__Long_16));
#line 491 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__Internal_18, 2) = ((MR_Box) (mercury__getopt__V_20_20));
#line 491 "getopt.m"
    }
#line 493 "getopt.m"
    mercury__getopt__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 23 "set_ordlist.opt"
    mercury__getopt__V_2_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 22 "set_ordlist.opt"
    mercury__getopt__V_22_22 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 492 "getopt.m"
    {
#line 492 "getopt.m"
      mercury__getopt__process_arguments_9_p_0(mercury__getopt__TypeInfo_for_OptionType_23, mercury__getopt__Args0_9, mercury__getopt__NonOptionArgs_11, mercury__getopt__Internal_18, mercury__getopt__V_21_21, &mercury__getopt__RevOptionArgs_19, mercury__getopt__OptionTable0_12, mercury__getopt__Result_13, mercury__getopt__V_22_22, mercury__getopt__OptionsSet_14);
    }
#line 13523 "getopt.c"
    mercury__getopt__TypeCtorInfo_24_24 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__getopt__TypeCtorInfo_24_24, mercury__getopt__RevOptionArgs_19, mercury__getopt__OptionArgs_10);
#line 118 "list.opt"
      return;
    }
#line 489 "getopt.m"
  }
#line 163 "getopt.m"
}

#line 159 "getopt.m"
void MR_CALL 
mercury__getopt__process_options_se_5_p_0(
#line 159 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_26,
#line 159 "getopt.m"
  MR_Word mercury__getopt__OptionOps_6,
#line 159 "getopt.m"
  MR_Word mercury__getopt__Args0_7,
#line 159 "getopt.m"
  MR_Word * mercury__getopt__OptionArgs_8,
#line 159 "getopt.m"
  MR_Word * mercury__getopt__NonOptionArgs_9,
#line 159 "getopt.m"
  MR_Word * mercury__getopt__Result_10)
#line 159 "getopt.m"
{
#line 465 "getopt.m"
  {
#line 465 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 465 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_27_27;
#line 465 "getopt.m"
    MR_Word mercury__getopt__Short_11;
#line 465 "getopt.m"
    MR_Word mercury__getopt__Long_12;
#line 465 "getopt.m"
    MR_Word mercury__getopt__MaybeSpecial_14;
#line 465 "getopt.m"
    MR_Word mercury__getopt__OptionTable0_15;
#line 465 "getopt.m"
    MR_Word mercury__getopt__Internal_17;
#line 465 "getopt.m"
    MR_Word mercury__getopt__RevOptionArgs_18;
#line 465 "getopt.m"
    MR_Word mercury__getopt__V_20_20;
#line 465 "getopt.m"
    MR_Word mercury__getopt__V_21_21;
#line 465 "getopt.m"
    MR_Word mercury__getopt__V_2_30;
#line 484 "getopt.m"
    MR_Word mercury__getopt___OptionsSet_19;

#line 470 "getopt.m"
    if (((MR_tag((MR_Word) mercury__getopt__OptionOps_6)) == (MR_mktag((MR_Integer) 0))))
#line 467 "getopt.m"
      {
#line 467 "getopt.m"
        MR_Word mercury__getopt__Defaults_13;

#line 467 "getopt.m"
        mercury__getopt__Short_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_6, (MR_Integer) 0)));
#line 467 "getopt.m"
        mercury__getopt__Long_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_6, (MR_Integer) 1)));
#line 467 "getopt.m"
        mercury__getopt__Defaults_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_6, (MR_Integer) 2)));
#line 468 "getopt.m"
        mercury__getopt__MaybeSpecial_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 469 "getopt.m"
        {
#line 469 "getopt.m"
          mercury__getopt__init_option_table_2_p_0(mercury__getopt__TypeInfo_for_OptionType_26, mercury__getopt__Defaults_13, &mercury__getopt__OptionTable0_15);
        }
#line 467 "getopt.m"
      }
#line 470 "getopt.m"
    else
#line 470 "getopt.m"
      if (((MR_tag((MR_Word) mercury__getopt__OptionOps_6)) == (MR_mktag((MR_Integer) 1))))
#line 471 "getopt.m"
        {
#line 471 "getopt.m"
          MR_Word mercury__getopt__Special_16;
#line 471 "getopt.m"
          MR_Word mercury__getopt__Defaults_22;

#line 471 "getopt.m"
          mercury__getopt__Short_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__OptionOps_6, (MR_Integer) 0)));
#line 471 "getopt.m"
          mercury__getopt__Long_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__OptionOps_6, (MR_Integer) 1)));
#line 471 "getopt.m"
          mercury__getopt__Defaults_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__OptionOps_6, (MR_Integer) 2)));
#line 471 "getopt.m"
          mercury__getopt__Special_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__OptionOps_6, (MR_Integer) 3)));
#line 472 "getopt.m"
          {
#line 472 "getopt.m"
            mercury__getopt__MaybeSpecial_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 472 "getopt.m"
            MR_hl_field(MR_mktag(1), mercury__getopt__MaybeSpecial_14, 0) = ((MR_Box) (mercury__getopt__Special_16));
#line 472 "getopt.m"
          }
#line 473 "getopt.m"
          {
#line 473 "getopt.m"
            mercury__getopt__init_option_table_2_p_0(mercury__getopt__TypeInfo_for_OptionType_26, mercury__getopt__Defaults_22, &mercury__getopt__OptionTable0_15);
          }
#line 471 "getopt.m"
        }
#line 470 "getopt.m"
      else
#line 470 "getopt.m"
        if (((MR_tag((MR_Word) mercury__getopt__OptionOps_6)) == (MR_mktag((MR_Integer) 2))))
#line 475 "getopt.m"
          {
#line 475 "getopt.m"
            MR_Word mercury__getopt__Defaults_23;

#line 475 "getopt.m"
            mercury__getopt__Short_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__OptionOps_6, (MR_Integer) 0)));
#line 475 "getopt.m"
            mercury__getopt__Long_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__OptionOps_6, (MR_Integer) 1)));
#line 475 "getopt.m"
            mercury__getopt__Defaults_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__OptionOps_6, (MR_Integer) 2)));
#line 476 "getopt.m"
            mercury__getopt__MaybeSpecial_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 477 "getopt.m"
            {
#line 477 "getopt.m"
              mercury__getopt__init_option_table_multi_2_p_0(mercury__getopt__TypeInfo_for_OptionType_26, mercury__getopt__Defaults_23, &mercury__getopt__OptionTable0_15);
            }
#line 475 "getopt.m"
          }
#line 470 "getopt.m"
        else
#line 479 "getopt.m"
          {
#line 479 "getopt.m"
            MR_Word mercury__getopt__Defaults_24;
#line 479 "getopt.m"
            MR_Word mercury__getopt__Special_25;

#line 479 "getopt.m"
            mercury__getopt__Short_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionOps_6, (MR_Integer) 0)));
#line 479 "getopt.m"
            mercury__getopt__Long_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionOps_6, (MR_Integer) 1)));
#line 479 "getopt.m"
            mercury__getopt__Defaults_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionOps_6, (MR_Integer) 2)));
#line 479 "getopt.m"
            mercury__getopt__Special_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionOps_6, (MR_Integer) 3)));
#line 480 "getopt.m"
            {
#line 480 "getopt.m"
              mercury__getopt__MaybeSpecial_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 480 "getopt.m"
              MR_hl_field(MR_mktag(1), mercury__getopt__MaybeSpecial_14, 0) = ((MR_Box) (mercury__getopt__Special_25));
#line 480 "getopt.m"
            }
#line 481 "getopt.m"
            {
#line 481 "getopt.m"
              mercury__getopt__init_option_table_multi_2_p_0(mercury__getopt__TypeInfo_for_OptionType_26, mercury__getopt__Defaults_24, &mercury__getopt__OptionTable0_15);
            }
#line 479 "getopt.m"
          }
#line 483 "getopt.m"
    {
#line 483 "getopt.m"
      mercury__getopt__Internal_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 483 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__Internal_17, 0) = ((MR_Box) (mercury__getopt__Short_11));
#line 483 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__Internal_17, 1) = ((MR_Box) (mercury__getopt__Long_12));
#line 483 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__Internal_17, 2) = ((MR_Box) (mercury__getopt__MaybeSpecial_14));
#line 483 "getopt.m"
    }
#line 485 "getopt.m"
    mercury__getopt__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 23 "set_ordlist.opt"
    mercury__getopt__V_2_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 22 "set_ordlist.opt"
    mercury__getopt__V_21_21 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 484 "getopt.m"
    {
#line 484 "getopt.m"
      mercury__getopt__process_arguments_9_p_0(mercury__getopt__TypeInfo_for_OptionType_26, mercury__getopt__Args0_7, mercury__getopt__NonOptionArgs_9, mercury__getopt__Internal_17, mercury__getopt__V_20_20, &mercury__getopt__RevOptionArgs_18, mercury__getopt__OptionTable0_15, mercury__getopt__Result_10, mercury__getopt__V_21_21, &mercury__getopt___OptionsSet_19);
    }
#line 13716 "getopt.c"
    mercury__getopt__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__getopt__TypeCtorInfo_27_27, mercury__getopt__RevOptionArgs_18, mercury__getopt__OptionArgs_8);
#line 118 "list.opt"
      return;
    }
#line 465 "getopt.m"
  }
#line 159 "getopt.m"
}

#line 155 "getopt.m"
void MR_CALL 
mercury__getopt__process_options_se_4_p_0(
#line 155 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_10,
#line 155 "getopt.m"
  MR_Word mercury__getopt__OptionOps_5,
#line 155 "getopt.m"
  MR_Word mercury__getopt__Args0_6,
#line 155 "getopt.m"
  MR_Word * mercury__getopt__NonOptionArgs_7,
#line 155 "getopt.m"
  MR_Word * mercury__getopt__Result_8)
#line 155 "getopt.m"
{
#line 462 "getopt.m"
  {
#line 462 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 462 "getopt.m"
    MR_Word mercury__getopt___OptionArgs_9;

#line 462 "getopt.m"
    {
#line 462 "getopt.m"
      mercury__getopt__process_options_se_5_p_0(mercury__getopt__TypeInfo_for_OptionType_10, mercury__getopt__OptionOps_5, mercury__getopt__Args0_6, &mercury__getopt___OptionArgs_9, mercury__getopt__NonOptionArgs_7, mercury__getopt__Result_8);
    }
#line 462 "getopt.m"
  }
#line 155 "getopt.m"
}

#line 145 "getopt.m"
void MR_CALL 
mercury__getopt__process_options_track_7_p_0(
#line 145 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_19,
#line 145 "getopt.m"
  MR_Word mercury__getopt__OptionOps_8,
#line 145 "getopt.m"
  MR_Word mercury__getopt__Args0_9,
#line 145 "getopt.m"
  MR_Word * mercury__getopt__OptionArgs_10,
#line 145 "getopt.m"
  MR_Word * mercury__getopt__NonOptionArgs_11,
#line 145 "getopt.m"
  MR_Word mercury__getopt__OptionTable0_12,
#line 145 "getopt.m"
  MR_Word * mercury__getopt__Result_13,
#line 145 "getopt.m"
  MR_Word * mercury__getopt__OptionsSet_14)
#line 145 "getopt.m"
{
#line 449 "getopt.m"
  {
#line 449 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 449 "getopt.m"
    MR_Word mercury__getopt__Result0_15;

#line 450 "getopt.m"
    {
#line 450 "getopt.m"
      mercury__getopt__process_options_track_se_7_p_0(mercury__getopt__TypeInfo_for_OptionType_19, mercury__getopt__OptionOps_8, mercury__getopt__Args0_9, mercury__getopt__OptionArgs_10, mercury__getopt__NonOptionArgs_11, mercury__getopt__OptionTable0_12, &mercury__getopt__Result0_15, mercury__getopt__OptionsSet_14);
    }
#line 455 "getopt.m"
    if (((MR_tag((MR_Word) mercury__getopt__Result0_15)) == (MR_mktag((MR_Integer) 1))))
#line 456 "getopt.m"
      {
#line 456 "getopt.m"
        MR_Word mercury__getopt__Error_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__Result0_15, (MR_Integer) 0)));
#line 456 "getopt.m"
        MR_String mercury__getopt__Msg_18;

#line 457 "getopt.m"
        {
#line 457 "getopt.m"
          mercury__getopt__Msg_18 = mercury__getopt__option_error_to_string_1_f_0(mercury__getopt__TypeInfo_for_OptionType_19, mercury__getopt__Error_17);
        }
#line 458 "getopt.m"
        {
#line 458 "getopt.m"
          MR_Word base;
#line 458 "getopt.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 458 "getopt.m"
          *mercury__getopt__Result_13 = base;
#line 458 "getopt.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Msg_18));
#line 458 "getopt.m"
        }
#line 456 "getopt.m"
      }
#line 455 "getopt.m"
    else
#line 453 "getopt.m"
      {
#line 453 "getopt.m"
        MR_Word mercury__getopt__OptionTable_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result0_15, (MR_Integer) 0)));

#line 454 "getopt.m"
        {
#line 454 "getopt.m"
          MR_Word base;
#line 454 "getopt.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 454 "getopt.m"
          *mercury__getopt__Result_13 = base;
#line 454 "getopt.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_16));
#line 454 "getopt.m"
        }
#line 453 "getopt.m"
      }
#line 449 "getopt.m"
  }
#line 145 "getopt.m"
}

#line 138 "getopt.m"
void MR_CALL 
mercury__getopt__process_options_5_p_0(
#line 138 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_15,
#line 138 "getopt.m"
  MR_Word mercury__getopt__OptionOps_6,
#line 138 "getopt.m"
  MR_Word mercury__getopt__Args0_7,
#line 138 "getopt.m"
  MR_Word * mercury__getopt__OptionArgs_8,
#line 138 "getopt.m"
  MR_Word * mercury__getopt__NonOptionArgs_9,
#line 138 "getopt.m"
  MR_Word * mercury__getopt__Result_10)
#line 138 "getopt.m"
{
#line 437 "getopt.m"
  {
#line 437 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 437 "getopt.m"
    MR_Word mercury__getopt__Result0_11;

#line 438 "getopt.m"
    {
#line 438 "getopt.m"
      mercury__getopt__process_options_se_5_p_0(mercury__getopt__TypeInfo_for_OptionType_15, mercury__getopt__OptionOps_6, mercury__getopt__Args0_7, mercury__getopt__OptionArgs_8, mercury__getopt__NonOptionArgs_9, &mercury__getopt__Result0_11);
    }
#line 442 "getopt.m"
    if (((MR_tag((MR_Word) mercury__getopt__Result0_11)) == (MR_mktag((MR_Integer) 1))))
#line 443 "getopt.m"
      {
#line 443 "getopt.m"
        MR_Word mercury__getopt__Error_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__Result0_11, (MR_Integer) 0)));
#line 443 "getopt.m"
        MR_String mercury__getopt__Msg_14;

#line 444 "getopt.m"
        {
#line 444 "getopt.m"
          mercury__getopt__Msg_14 = mercury__getopt__option_error_to_string_1_f_0(mercury__getopt__TypeInfo_for_OptionType_15, mercury__getopt__Error_13);
        }
#line 445 "getopt.m"
        {
#line 445 "getopt.m"
          MR_Word base;
#line 445 "getopt.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 445 "getopt.m"
          *mercury__getopt__Result_10 = base;
#line 445 "getopt.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Msg_14));
#line 445 "getopt.m"
        }
#line 443 "getopt.m"
      }
#line 442 "getopt.m"
    else
#line 440 "getopt.m"
      {
#line 440 "getopt.m"
        MR_Word mercury__getopt__OptionTable_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result0_11, (MR_Integer) 0)));

#line 441 "getopt.m"
        {
#line 441 "getopt.m"
          MR_Word base;
#line 441 "getopt.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 441 "getopt.m"
          *mercury__getopt__Result_10 = base;
#line 441 "getopt.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_12));
#line 441 "getopt.m"
        }
#line 440 "getopt.m"
      }
#line 437 "getopt.m"
  }
#line 138 "getopt.m"
}

#line 134 "getopt.m"
void MR_CALL 
mercury__getopt__process_options_4_p_0(
#line 134 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_13,
#line 134 "getopt.m"
  MR_Word mercury__getopt__OptionOps_5,
#line 134 "getopt.m"
  MR_Word mercury__getopt__Args0_6,
#line 134 "getopt.m"
  MR_Word * mercury__getopt__NonOptionArgs_7,
#line 134 "getopt.m"
  MR_Word * mercury__getopt__Result_8)
#line 134 "getopt.m"
{
#line 426 "getopt.m"
  {
#line 426 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 426 "getopt.m"
    MR_Word mercury__getopt__Result0_9;
#line 462 "getopt.m"
    MR_Word mercury__getopt___OptionArgs_18;

#line 462 "getopt.m"
    {
#line 462 "getopt.m"
      mercury__getopt__process_options_se_5_p_0(mercury__getopt__TypeInfo_for_OptionType_13, mercury__getopt__OptionOps_5, mercury__getopt__Args0_6, &mercury__getopt___OptionArgs_18, mercury__getopt__NonOptionArgs_7, &mercury__getopt__Result0_9);
    }
#line 431 "getopt.m"
    if (((MR_tag((MR_Word) mercury__getopt__Result0_9)) == (MR_mktag((MR_Integer) 1))))
#line 432 "getopt.m"
      {
#line 432 "getopt.m"
        MR_Word mercury__getopt__Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__Result0_9, (MR_Integer) 0)));
#line 432 "getopt.m"
        MR_String mercury__getopt__Msg_12;

#line 433 "getopt.m"
        {
#line 433 "getopt.m"
          mercury__getopt__Msg_12 = mercury__getopt__option_error_to_string_1_f_0(mercury__getopt__TypeInfo_for_OptionType_13, mercury__getopt__Error_11);
        }
#line 434 "getopt.m"
        {
#line 434 "getopt.m"
          MR_Word base;
#line 434 "getopt.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 434 "getopt.m"
          *mercury__getopt__Result_8 = base;
#line 434 "getopt.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Msg_12));
#line 434 "getopt.m"
        }
#line 432 "getopt.m"
      }
#line 431 "getopt.m"
    else
#line 429 "getopt.m"
      {
#line 429 "getopt.m"
        MR_Word mercury__getopt__OptionTable_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result0_9, (MR_Integer) 0)));

#line 430 "getopt.m"
        {
#line 430 "getopt.m"
          MR_Word base;
#line 430 "getopt.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 430 "getopt.m"
          *mercury__getopt__Result_8 = base;
#line 430 "getopt.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_10));
#line 430 "getopt.m"
        }
#line 429 "getopt.m"
      }
#line 426 "getopt.m"
  }
#line 134 "getopt.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module getopt. */
