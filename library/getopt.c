/*
** Automatically generated from `getopt.m'
** by the Mercury compiler,
** version rotd-2013-03-26, configured for x86_64-apple-darwin12.2.1.
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



#line 348 "getopt.m"
struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0_env_0_s {
#line 348 "getopt.m"
  MR_Word * mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0_env_0__HeadVar__3_10;
#line 348 "getopt.m"
  MR_Cont mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0_env_0__cont;
#line 348 "getopt.m"
  void * mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0_env_0__cont_env_ptr;
#line 348 "getopt.m"
  MR_Box mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0_env_0__Option_6;
#line 348 "getopt.m"
  MR_Word mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0_env_0__OptionData_7;
#line 350 "getopt.m"
  MR_Box mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0_env_0__conv1_OptionData_7;
#line 348 "getopt.m"
};

#line 341 "getopt.m"
struct mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0_env_0_s {
#line 341 "getopt.m"
  MR_Word * mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0_env_0__HeadVar__3_10;
#line 341 "getopt.m"
  MR_Cont mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0_env_0__cont;
#line 341 "getopt.m"
  void * mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0_env_0__cont_env_ptr;
#line 341 "getopt.m"
  MR_Box mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0_env_0__Option_6;
#line 341 "getopt.m"
  MR_Word mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0_env_0__OptionData_7;
#line 343 "getopt.m"
  MR_Box mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0_env_0__conv1_OptionData_7;
#line 341 "getopt.m"
};

#line 348 "getopt.m"
struct mercury__getopt__init_option_table_multi_2_p_0_2_env_0_s {
#line 348 "getopt.m"
  MR_Box * mercury__getopt__init_option_table_multi_2_p_0_2_env_0__wrapper_arg_1;
#line 348 "getopt.m"
  MR_Cont mercury__getopt__init_option_table_multi_2_p_0_2_env_0__cont;
#line 348 "getopt.m"
  void * mercury__getopt__init_option_table_multi_2_p_0_2_env_0__cont_env_ptr;
#line 348 "getopt.m"
  MR_Word mercury__getopt__init_option_table_multi_2_p_0_2_env_0__conv0_HeadVar__3_10;
#line 348 "getopt.m"
};

#line 341 "getopt.m"
struct mercury__getopt__init_option_table_2_p_0_2_env_0_s {
#line 341 "getopt.m"
  MR_Box * mercury__getopt__init_option_table_2_p_0_2_env_0__wrapper_arg_1;
#line 341 "getopt.m"
  MR_Cont mercury__getopt__init_option_table_2_p_0_2_env_0__cont;
#line 341 "getopt.m"
  void * mercury__getopt__init_option_table_2_p_0_2_env_0__cont_env_ptr;
#line 341 "getopt.m"
  MR_Word mercury__getopt__init_option_table_2_p_0_2_env_0__conv0_HeadVar__3_10;
#line 341 "getopt.m"
};


#line 146 "getopt.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt____vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0;

#line 149 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__getopt__pair__pti_pair_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0;

#line 152 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__list__pti_list_1__pseudo_1;

#line 155 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__getopt__tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0;

#line 158 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_1_0[1];

#line 161 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_0;

#line 164 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_1_1[1];

#line 167 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_1;

#line 170 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_1_0[1];

#line 173 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_1_1[1];

#line 176 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_maybe_option_table_1[2];

#line 179 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_maybe_option_table_1[2];

#line 182 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_maybe_option_table_1[2];

#line 185 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_0[1];

#line 188 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_0;

#line 191 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_1[1];

#line 194 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_1;

#line 197 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_2[1];

#line 200 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_2;

#line 203 "getopt.c"
static const MR_FA_TypeInfo_Struct1 mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 206 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_3[1];

#line 209 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_3;

#line 212 "getopt.c"
static const MR_FA_TypeInfo_Struct1 mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

#line 215 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_4[1];

#line 218 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_4;

#line 221 "getopt.c"
static const MR_FA_TypeInfo_Struct1 mercury__getopt__list__ti_list_1builtin__type_ctor_info_string_0;

#line 224 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_5[1];

#line 227 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_5;

#line 230 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_6;

#line 233 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_7;

#line 236 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_8;

#line 239 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_9;

#line 242 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_10;

#line 245 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_0[5];

#line 248 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_1[1];

#line 251 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_2[1];

#line 254 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_3[4];

#line 257 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_data_0[4];

#line 260 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_data_0[11];

#line 263 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_data_0[11];

#line 266 "getopt.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1;

#line 269 "getopt.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1;

#line 272 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_0[3];

#line 275 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_1_0;

#line 278 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__getopt__pti_maybe_option_table_1__pseudo_1;

#line 281 "getopt.c"
static const MR_VA_PseudoTypeInfo_Struct4 mercury__getopt____vpti_pred_4__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1;

#line 284 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_1[4];

#line 287 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_1_1;

#line 290 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_2[3];

#line 293 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_1_2;

#line 296 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_3[4];

#line 299 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_1_3;

#line 302 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_0[1];

#line 305 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_1[1];

#line 308 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_2[1];

#line 311 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_3[1];

#line 314 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_1[4];

#line 317 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_1[4];

#line 320 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_1[4];

#line 323 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__getopt__pti_option_ops_special_1__pseudo_1;

#line 326 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_internal_1_0[3];

#line 329 "getopt.c"
static const MR_ConstString mercury__getopt__getopt__field_names_option_ops_internal_1_0[3];

#line 332 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_internal_1_0;

#line 335 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_internal_1_0[1];

#line 338 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_internal_1[1];

#line 341 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_internal_1[1];

#line 344 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_internal_1[1];

#line 347 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_special_1_0;

#line 350 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_special_1_1[1];

#line 353 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_special_1_1;

#line 356 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__set_ordlist__pti_set_ordlist_1__pseudo_1;

#line 359 "getopt.c"
static const MR_VA_PseudoTypeInfo_Struct5 mercury__getopt____vpti_pred_5__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1;

#line 362 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_special_1_2[1];

#line 365 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_special_1_2;

#line 368 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_1_0[1];

#line 371 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_1_1[1];

#line 374 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_1_2[1];

#line 377 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_special_1[3];

#line 380 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_special_1[3];

#line 383 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_special_1[3];

#line 386 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_track_1_0[3];

#line 389 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_track_1_0;

#line 392 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_track_1_0[1];

#line 395 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_track_1[1];

#line 398 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_track_1[1];

#line 401 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_track_1[1];

#line 404 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_0;

#line 407 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_1[1];

#line 410 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_1;

#line 413 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_2[1];

#line 416 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_2;

#line 419 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_3[1];

#line 422 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_3;

#line 425 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_4[1];

#line 428 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_4;

#line 431 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_0[1];

#line 434 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_1[1];

#line 437 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_2[1];

#line 440 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_3[2];

#line 443 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_special_data_0[4];

#line 446 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_special_data_0[5];

#line 449 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_special_data_0[5];

#line 452 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_table_1_0_10001(
#line 455 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 457 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 459 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3);

#line 462 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____maybe_option_table_1_0_10001(
#line 465 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 467 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 469 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 471 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4);

#line 474 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_data_0_0_10001(
#line 477 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 479 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2);

#line 482 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_data_0_0_10001(
#line 485 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_1,
#line 487 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 489 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3);

#line 492 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_1_0_10001(
#line 495 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 497 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 499 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3);

#line 502 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_ops_1_0_10001(
#line 505 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 507 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 509 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 511 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4);

#line 514 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_internal_1_0_10001(
#line 517 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 519 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 521 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3);

#line 524 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_ops_internal_1_0_10001(
#line 527 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 529 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 531 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 533 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4);

#line 536 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_special_1_0_10001(
#line 539 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 541 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 543 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3);

#line 546 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_ops_special_1_0_10001(
#line 549 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 551 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 553 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 555 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4);

#line 558 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_track_1_0_10001(
#line 561 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 563 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 565 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3);

#line 568 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_ops_track_1_0_10001(
#line 571 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 573 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 575 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 577 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4);

#line 580 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_table_1_0_10001(
#line 583 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 585 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 587 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3);

#line 590 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_table_1_0_10001(
#line 593 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 595 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 597 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 599 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4);

#line 602 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____special_data_0_0_10001(
#line 605 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 607 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2);

#line 610 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____special_data_0_0_10001(
#line 613 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_1,
#line 615 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 617 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 924 "getopt.m"
static void MR_CALL 
mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_p_0(
#line 924 "getopt.m"
  MR_String mercury__getopt__Option_4,
#line 924 "getopt.m"
  MR_String mercury__getopt__Arg_5,
#line 924 "getopt.m"
  MR_Word * mercury__getopt__Result_6);

#line 350 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0_2(
#line 350 "getopt.m"
  void * mercury__getopt__env_ptr_arg);

#line 348 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0_1(
#line 348 "getopt.m"
  void * mercury__getopt__env_ptr_arg);

#line 348 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0(
#line 348 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_12,
#line 348 "getopt.m"
  MR_Word mercury__getopt__OptionDefaultsPred_3,
#line 348 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__3_10,
#line 348 "getopt.m"
  MR_Cont mercury__getopt__cont,
#line 348 "getopt.m"
  void * mercury__getopt__cont_env_ptr);

#line 343 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0_2(
#line 343 "getopt.m"
  void * mercury__getopt__env_ptr_arg);

#line 341 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0_1(
#line 341 "getopt.m"
  void * mercury__getopt__env_ptr_arg);

#line 341 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0(
#line 341 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_12,
#line 341 "getopt.m"
  MR_Word mercury__getopt__OptionDefaultsPred_3,
#line 341 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__3_10,
#line 341 "getopt.m"
  MR_Cont mercury__getopt__cont,
#line 341 "getopt.m"
  void * mercury__getopt__cont_env_ptr);

#line 869 "getopt.m"
static void MR_CALL 
mercury__getopt__process_special_8_p_0(
#line 869 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_51,
#line 869 "getopt.m"
  MR_String mercury__getopt__Option_9,
#line 869 "getopt.m"
  MR_Box mercury__getopt__Flag_10,
#line 869 "getopt.m"
  MR_Word mercury__getopt__OptionData_11,
#line 869 "getopt.m"
  MR_Word mercury__getopt__OptionOps_12,
#line 869 "getopt.m"
  MR_Word mercury__getopt__OptionTable0_13,
#line 869 "getopt.m"
  MR_Word * mercury__getopt__Result_14,
#line 869 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_22,
#line 869 "getopt.m"
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_23);

#line 794 "getopt.m"
static void MR_CALL 
mercury__getopt__process_negated_option_7_p_0(
#line 794 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_99,
#line 794 "getopt.m"
  MR_String mercury__getopt__Option_8,
#line 794 "getopt.m"
  MR_Box mercury__getopt__Flag_9,
#line 794 "getopt.m"
  MR_Word mercury__getopt__OptionOps_10,
#line 794 "getopt.m"
  MR_Word mercury__getopt__OptionTable0_11,
#line 794 "getopt.m"
  MR_Word * mercury__getopt__Result_12,
#line 794 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_23,
#line 794 "getopt.m"
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_24);

#line 651 "getopt.m"
static void MR_CALL 
mercury__getopt__process_option_9_p_0(
#line 651 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_204,
#line 651 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 651 "getopt.m"
  MR_String mercury__getopt__HeadVar__2_2,
#line 651 "getopt.m"
  MR_Box mercury__getopt__Flag_3,
#line 651 "getopt.m"
  MR_Word mercury__getopt__MaybeArg_4,
#line 651 "getopt.m"
  MR_Word mercury__getopt__HeadVar__5_5,
#line 651 "getopt.m"
  MR_Word mercury__getopt__HeadVar__6_6,
#line 651 "getopt.m"
  MR_Word * mercury__getopt__Result_7,
#line 651 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_8,
#line 651 "getopt.m"
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_9);

#line 579 "getopt.m"
static void MR_CALL 
mercury__getopt__handle_short_options_10_p_0(
#line 579 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_61,
#line 579 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 579 "getopt.m"
  MR_Word mercury__getopt__OptionOps_2,
#line 579 "getopt.m"
  MR_Word mercury__getopt__HeadVar__3_3,
#line 579 "getopt.m"
  MR_Word * mercury__getopt__Args_4,
#line 579 "getopt.m"
  MR_Word mercury__getopt__HeadVar__5_5,
#line 579 "getopt.m"
  MR_Word * mercury__getopt__OptionArgs_6,
#line 579 "getopt.m"
  MR_Word mercury__getopt__HeadVar__7_7,
#line 579 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__8_8,
#line 579 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_9,
#line 579 "getopt.m"
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_10);

#line 514 "getopt.m"
static void MR_CALL 
mercury__getopt__handle_long_option_13_p_0(
#line 514 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_52,
#line 514 "getopt.m"
  MR_String mercury__getopt__Option_14,
#line 514 "getopt.m"
  MR_Box mercury__getopt__Flag_15,
#line 514 "getopt.m"
  MR_Word mercury__getopt__OptionData_16,
#line 514 "getopt.m"
  MR_Word mercury__getopt__MaybeOptionArg0_17,
#line 514 "getopt.m"
  MR_Word mercury__getopt__Args0_18,
#line 514 "getopt.m"
  MR_Word * mercury__getopt__Args_19,
#line 514 "getopt.m"
  MR_Word mercury__getopt__OptionOps_20,
#line 514 "getopt.m"
  MR_Word mercury__getopt__OptionArgs0_21,
#line 514 "getopt.m"
  MR_Word * mercury__getopt__OptionArgs_22,
#line 514 "getopt.m"
  MR_Word mercury__getopt__OptionTable0_23,
#line 514 "getopt.m"
  MR_Word * mercury__getopt__Result_24,
#line 514 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_37,
#line 514 "getopt.m"
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_38);

#line 69 "solutions.opt"
static void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0_3(
#line 69 "solutions.opt"
  MR_Box mercury__getopt__closure_arg,
#line 69 "solutions.opt"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 69 "solutions.opt"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 69 "solutions.opt"
  MR_Box * mercury__getopt__wrapper_arg_3);

#line 348 "getopt.m"
static void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0_1(
#line 348 "getopt.m"
  void * mercury__getopt__env_ptr_arg);

#line 348 "getopt.m"
static void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0_2(
#line 348 "getopt.m"
  MR_Box mercury__getopt__closure_arg,
#line 348 "getopt.m"
  MR_Box * mercury__getopt__wrapper_arg_1,
#line 348 "getopt.m"
  MR_Cont mercury__getopt__cont,
#line 348 "getopt.m"
  void * mercury__getopt__cont_env_ptr);

#line 69 "solutions.opt"
static void MR_CALL 
mercury__getopt__init_option_table_2_p_0_3(
#line 69 "solutions.opt"
  MR_Box mercury__getopt__closure_arg,
#line 69 "solutions.opt"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 69 "solutions.opt"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 69 "solutions.opt"
  MR_Box * mercury__getopt__wrapper_arg_3);

#line 341 "getopt.m"
static void MR_CALL 
mercury__getopt__init_option_table_2_p_0_1(
#line 341 "getopt.m"
  void * mercury__getopt__env_ptr_arg);

#line 341 "getopt.m"
static void MR_CALL 
mercury__getopt__init_option_table_2_p_0_2(
#line 341 "getopt.m"
  MR_Box mercury__getopt__closure_arg,
#line 341 "getopt.m"
  MR_Box * mercury__getopt__wrapper_arg_1,
#line 341 "getopt.m"
  MR_Cont mercury__getopt__cont,
#line 341 "getopt.m"
  void * mercury__getopt__cont_env_ptr);


static /* final */ const MR_Box mercury__getopt_scalar_common_1[12][2];

static /* final */ const MR_Box mercury__getopt_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__getopt_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__getopt_scalar_common_4[2][5];

static /* final */ const MR_Integer mercury__getopt_scalar_common_5[1][2];

static /* final */ const MR_Box mercury__getopt_scalar_common_6[1][6];

static /* final */ const MR_Box mercury__getopt_scalar_common_7[1][7];

static /* final */ const MR_Box mercury__getopt_scalar_common_8[2][1];




static /* final */ const MR_Box mercury__getopt_scalar_common_1[12][2] = {
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
    ((MR_Box) ((MR_String) "only boolean, maybe and accumulating options can be negated")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "\' --")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "\'")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "\' has no handler")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "\' failed")),
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
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
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
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
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



#line 1347 "getopt.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt____vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

#line 1357 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__getopt__pair__pti_pair_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

#line 1366 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1374 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__getopt__tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

#line 1383 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_1_0[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt__tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0
};

#line 1388 "getopt.c"
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

#line 1403 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1408 "getopt.c"
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

#line 1423 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_1_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_0
};

#line 1428 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_1_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_1
};

#line 1433 "getopt.c"
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

#line 1447 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_maybe_option_table_1[2] = {
  &mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_1,
  &mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_0
};

#line 1453 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_maybe_option_table_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1459 "getopt.c"
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

#line 1480 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1485 "getopt.c"
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

#line 1500 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1505 "getopt.c"
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

#line 1520 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1525 "getopt.c"
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

#line 1540 "getopt.c"
static const MR_FA_TypeInfo_Struct1 mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1548 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

#line 1553 "getopt.c"
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

#line 1568 "getopt.c"
static const MR_FA_TypeInfo_Struct1 mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1576 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

#line 1581 "getopt.c"
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

#line 1596 "getopt.c"
static const MR_FA_TypeInfo_Struct1 mercury__getopt__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1604 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 1609 "getopt.c"
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

#line 1624 "getopt.c"
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

#line 1639 "getopt.c"
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

#line 1654 "getopt.c"
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

#line 1669 "getopt.c"
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

#line 1684 "getopt.c"
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

#line 1699 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_0[5] = {
  &mercury__getopt__getopt__du_functor_desc_option_data_0_6,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_7,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_8,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_9,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_10
};

#line 1708 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_data_0_0
};

#line 1713 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_2[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_data_0_1
};

#line 1718 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_3[4] = {
  &mercury__getopt__getopt__du_functor_desc_option_data_0_2,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_3,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_4,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_5
};

#line 1726 "getopt.c"
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

#line 1750 "getopt.c"
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

#line 1765 "getopt.c"
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

#line 1780 "getopt.c"
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

#line 1801 "getopt.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1811 "getopt.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1821 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0
};

#line 1828 "getopt.c"
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

#line 1843 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__getopt__pti_maybe_option_table_1__pseudo_1 = {
  &mercury__getopt__getopt__type_ctor_info_maybe_option_table_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1851 "getopt.c"
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

#line 1863 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_1[4] = {
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_4__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1
};

#line 1871 "getopt.c"
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

#line 1886 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_2[3] = {
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0
};

#line 1893 "getopt.c"
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

#line 1908 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_3[4] = {
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_4__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1
};

#line 1916 "getopt.c"
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

#line 1931 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_1_0
};

#line 1936 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_1_1
};

#line 1941 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_2[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_1_2
};

#line 1946 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_3[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_1_3
};

#line 1951 "getopt.c"
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

#line 1975 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_1[4] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_1_0,
  &mercury__getopt__getopt__du_functor_desc_option_ops_1_1,
  &mercury__getopt__getopt__du_functor_desc_option_ops_1_2,
  &mercury__getopt__getopt__du_functor_desc_option_ops_1_3
};

#line 1983 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_1[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 1991 "getopt.c"
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

#line 2012 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__getopt__pti_option_ops_special_1__pseudo_1 = {
  &mercury__getopt__getopt__type_ctor_info_option_ops_special_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2020 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_internal_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt__getopt__pti_option_ops_special_1__pseudo_1
};

#line 2027 "getopt.c"
static const MR_ConstString mercury__getopt__getopt__field_names_option_ops_internal_1_0[3] = {
  (MR_String) "short_option",
  (MR_String) "long_option",
  (MR_String) "special_handler"
};

#line 2034 "getopt.c"
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

#line 2049 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_internal_1_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_internal_1_0
};

#line 2054 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_internal_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_internal_1_0
  }
};

#line 2063 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_internal_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_internal_1_0
};

#line 2068 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_internal_1[1] = {
  (MR_Integer) 0
};

#line 2073 "getopt.c"
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

#line 2094 "getopt.c"
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

#line 2109 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_special_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_4__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1
};

#line 2114 "getopt.c"
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

#line 2129 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2137 "getopt.c"
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

#line 2150 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_special_1_2[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_5__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
};

#line 2155 "getopt.c"
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

#line 2170 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_1_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_special_1_0
};

#line 2175 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_1_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_special_1_1
};

#line 2180 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_1_2[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_special_1_2
};

#line 2185 "getopt.c"
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

#line 2204 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_special_1[3] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_special_1_0,
  &mercury__getopt__getopt__du_functor_desc_option_ops_special_1_1,
  &mercury__getopt__getopt__du_functor_desc_option_ops_special_1_2
};

#line 2211 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_special_1[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 2218 "getopt.c"
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

#line 2239 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_track_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_5__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
};

#line 2246 "getopt.c"
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

#line 2261 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_track_1_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_track_1_0
};

#line 2266 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_track_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_track_1_0
  }
};

#line 2275 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_track_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_track_1_0
};

#line 2280 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_track_1[1] = {
  (MR_Integer) 0
};

#line 2285 "getopt.c"
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

#line 2306 "getopt.c"
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

#line 2327 "getopt.c"
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

#line 2342 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 2347 "getopt.c"
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

#line 2362 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2367 "getopt.c"
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

#line 2382 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2387 "getopt.c"
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

#line 2402 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

#line 2407 "getopt.c"
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

#line 2422 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_special_data_0_0
};

#line 2427 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_special_data_0_1
};

#line 2432 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_2[1] = {
  &mercury__getopt__getopt__du_functor_desc_special_data_0_2
};

#line 2437 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_3[2] = {
  &mercury__getopt__getopt__du_functor_desc_special_data_0_3,
  &mercury__getopt__getopt__du_functor_desc_special_data_0_4
};

#line 2443 "getopt.c"
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

#line 2467 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_special_data_0[5] = {
  &mercury__getopt__getopt__du_functor_desc_special_data_0_1,
  &mercury__getopt__getopt__du_functor_desc_special_data_0_2,
  &mercury__getopt__getopt__du_functor_desc_special_data_0_4,
  &mercury__getopt__getopt__du_functor_desc_special_data_0_0,
  &mercury__getopt__getopt__du_functor_desc_special_data_0_3
};

#line 2476 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_special_data_0[5] = {
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 2
};

#line 2485 "getopt.c"
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

#line 2506 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_table_1_0_10001(
#line 2509 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 2511 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 2513 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3)
#line 2515 "getopt.c"
{
#line 2517 "getopt.c"
  {
#line 2519 "getopt.c"
    MR_bool mercury__getopt__succeeded;

#line 2522 "getopt.c"
    {
#line 2524 "getopt.c"
      mercury__getopt__succeeded = mercury__getopt____Unify____maybe_option_table_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    }
#line 2527 "getopt.c"
    return mercury__getopt__succeeded;
#line 2529 "getopt.c"
  }
#line 2531 "getopt.c"
}

#line 2534 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____maybe_option_table_1_0_10001(
#line 2537 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 2539 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 2541 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 2543 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4)
#line 2545 "getopt.c"
{
#line 2547 "getopt.c"
  {
#line 2549 "getopt.c"
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

#line 2552 "getopt.c"
    {
#line 2554 "getopt.c"
      mercury__getopt____Compare____maybe_option_table_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), &mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_3), ((MR_Word) mercury__getopt__wrapper_arg_4));
    }
#line 2557 "getopt.c"
    *mercury__getopt__wrapper_arg_2 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
#line 2559 "getopt.c"
  }
#line 2561 "getopt.c"
}

#line 2564 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_data_0_0_10001(
#line 2567 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 2569 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2)
#line 2571 "getopt.c"
{
#line 2573 "getopt.c"
  {
#line 2575 "getopt.c"
    MR_bool mercury__getopt__succeeded;

#line 2578 "getopt.c"
    {
#line 2580 "getopt.c"
      mercury__getopt__succeeded = mercury__getopt____Unify____option_data_0_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2));
    }
#line 2583 "getopt.c"
    return mercury__getopt__succeeded;
#line 2585 "getopt.c"
  }
#line 2587 "getopt.c"
}

#line 2590 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_data_0_0_10001(
#line 2593 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_1,
#line 2595 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 2597 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3)
#line 2599 "getopt.c"
{
#line 2601 "getopt.c"
  {
#line 2603 "getopt.c"
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

#line 2606 "getopt.c"
    {
#line 2608 "getopt.c"
      mercury__getopt____Compare____option_data_0_0(&mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    }
#line 2611 "getopt.c"
    *mercury__getopt__wrapper_arg_1 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
#line 2613 "getopt.c"
  }
#line 2615 "getopt.c"
}

#line 2618 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_1_0_10001(
#line 2621 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 2623 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 2625 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3)
#line 2627 "getopt.c"
{
#line 2629 "getopt.c"
  {
#line 2631 "getopt.c"
    MR_bool mercury__getopt__succeeded;

#line 2634 "getopt.c"
    {
#line 2636 "getopt.c"
      mercury__getopt__succeeded = mercury__getopt____Unify____option_ops_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    }
#line 2639 "getopt.c"
    return mercury__getopt__succeeded;
#line 2641 "getopt.c"
  }
#line 2643 "getopt.c"
}

#line 2646 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_ops_1_0_10001(
#line 2649 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 2651 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 2653 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 2655 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4)
#line 2657 "getopt.c"
{
#line 2659 "getopt.c"
  {
#line 2661 "getopt.c"
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

#line 2664 "getopt.c"
    {
#line 2666 "getopt.c"
      mercury__getopt____Compare____option_ops_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), &mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_3), ((MR_Word) mercury__getopt__wrapper_arg_4));
    }
#line 2669 "getopt.c"
    *mercury__getopt__wrapper_arg_2 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
#line 2671 "getopt.c"
  }
#line 2673 "getopt.c"
}

#line 2676 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_internal_1_0_10001(
#line 2679 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 2681 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 2683 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3)
#line 2685 "getopt.c"
{
#line 2687 "getopt.c"
  {
#line 2689 "getopt.c"
    MR_bool mercury__getopt__succeeded;

#line 2692 "getopt.c"
    {
#line 2694 "getopt.c"
      mercury__getopt__succeeded = mercury__getopt____Unify____option_ops_internal_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    }
#line 2697 "getopt.c"
    return mercury__getopt__succeeded;
#line 2699 "getopt.c"
  }
#line 2701 "getopt.c"
}

#line 2704 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_ops_internal_1_0_10001(
#line 2707 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 2709 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 2711 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 2713 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4)
#line 2715 "getopt.c"
{
#line 2717 "getopt.c"
  {
#line 2719 "getopt.c"
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

#line 2722 "getopt.c"
    {
#line 2724 "getopt.c"
      mercury__getopt____Compare____option_ops_internal_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), &mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_3), ((MR_Word) mercury__getopt__wrapper_arg_4));
    }
#line 2727 "getopt.c"
    *mercury__getopt__wrapper_arg_2 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
#line 2729 "getopt.c"
  }
#line 2731 "getopt.c"
}

#line 2734 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_special_1_0_10001(
#line 2737 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 2739 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 2741 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3)
#line 2743 "getopt.c"
{
#line 2745 "getopt.c"
  {
#line 2747 "getopt.c"
    MR_bool mercury__getopt__succeeded;

#line 2750 "getopt.c"
    {
#line 2752 "getopt.c"
      mercury__getopt__succeeded = mercury__getopt____Unify____option_ops_special_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    }
#line 2755 "getopt.c"
    return mercury__getopt__succeeded;
#line 2757 "getopt.c"
  }
#line 2759 "getopt.c"
}

#line 2762 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_ops_special_1_0_10001(
#line 2765 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 2767 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 2769 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 2771 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4)
#line 2773 "getopt.c"
{
#line 2775 "getopt.c"
  {
#line 2777 "getopt.c"
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

#line 2780 "getopt.c"
    {
#line 2782 "getopt.c"
      mercury__getopt____Compare____option_ops_special_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), &mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_3), ((MR_Word) mercury__getopt__wrapper_arg_4));
    }
#line 2785 "getopt.c"
    *mercury__getopt__wrapper_arg_2 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
#line 2787 "getopt.c"
  }
#line 2789 "getopt.c"
}

#line 2792 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_track_1_0_10001(
#line 2795 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 2797 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 2799 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3)
#line 2801 "getopt.c"
{
#line 2803 "getopt.c"
  {
#line 2805 "getopt.c"
    MR_bool mercury__getopt__succeeded;

#line 2808 "getopt.c"
    {
#line 2810 "getopt.c"
      mercury__getopt__succeeded = mercury__getopt____Unify____option_ops_track_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    }
#line 2813 "getopt.c"
    return mercury__getopt__succeeded;
#line 2815 "getopt.c"
  }
#line 2817 "getopt.c"
}

#line 2820 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_ops_track_1_0_10001(
#line 2823 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 2825 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 2827 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 2829 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4)
#line 2831 "getopt.c"
{
#line 2833 "getopt.c"
  {
#line 2835 "getopt.c"
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

#line 2838 "getopt.c"
    {
#line 2840 "getopt.c"
      mercury__getopt____Compare____option_ops_track_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), &mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_3), ((MR_Word) mercury__getopt__wrapper_arg_4));
    }
#line 2843 "getopt.c"
    *mercury__getopt__wrapper_arg_2 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
#line 2845 "getopt.c"
  }
#line 2847 "getopt.c"
}

#line 2850 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_table_1_0_10001(
#line 2853 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 2855 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 2857 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3)
#line 2859 "getopt.c"
{
#line 2861 "getopt.c"
  {
#line 2863 "getopt.c"
    MR_bool mercury__getopt__succeeded;

#line 2866 "getopt.c"
    {
#line 2868 "getopt.c"
      mercury__getopt__succeeded = mercury__getopt____Unify____option_table_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    }
#line 2871 "getopt.c"
    return mercury__getopt__succeeded;
#line 2873 "getopt.c"
  }
#line 2875 "getopt.c"
}

#line 2878 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_table_1_0_10001(
#line 2881 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 2883 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 2885 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 2887 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4)
#line 2889 "getopt.c"
{
#line 2891 "getopt.c"
  {
#line 2893 "getopt.c"
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

#line 2896 "getopt.c"
    {
#line 2898 "getopt.c"
      mercury__getopt____Compare____option_table_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), &mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_3), ((MR_Word) mercury__getopt__wrapper_arg_4));
    }
#line 2901 "getopt.c"
    *mercury__getopt__wrapper_arg_2 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
#line 2903 "getopt.c"
  }
#line 2905 "getopt.c"
}

#line 2908 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____special_data_0_0_10001(
#line 2911 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 2913 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2)
#line 2915 "getopt.c"
{
#line 2917 "getopt.c"
  {
#line 2919 "getopt.c"
    MR_bool mercury__getopt__succeeded;

#line 2922 "getopt.c"
    {
#line 2924 "getopt.c"
      mercury__getopt__succeeded = mercury__getopt____Unify____special_data_0_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2));
    }
#line 2927 "getopt.c"
    return mercury__getopt__succeeded;
#line 2929 "getopt.c"
  }
#line 2931 "getopt.c"
}

#line 2934 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____special_data_0_0_10001(
#line 2937 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_1,
#line 2939 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 2941 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3)
#line 2943 "getopt.c"
{
#line 2945 "getopt.c"
  {
#line 2947 "getopt.c"
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

#line 2950 "getopt.c"
    {
#line 2952 "getopt.c"
      mercury__getopt____Compare____special_data_0_0(&mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    }
#line 2955 "getopt.c"
    *mercury__getopt__wrapper_arg_1 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
#line 2957 "getopt.c"
  }
#line 2959 "getopt.c"
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

#line 924 "getopt.m"
static void MR_CALL 
mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_p_0(
#line 924 "getopt.m"
  MR_String mercury__getopt__Option_4,
#line 924 "getopt.m"
  MR_String mercury__getopt__Arg_5,
#line 924 "getopt.m"
  MR_Word * mercury__getopt__Result_6)
#line 924 "getopt.m"
{
#line 927 "getopt.m"
  {
#line 927 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 927 "getopt.m"
    MR_String mercury__getopt__ErrorMsg_7;
#line 927 "getopt.m"
    MR_String mercury__getopt__V_9_9;
#line 927 "getopt.m"
    MR_String mercury__getopt__V_10_10;
#line 927 "getopt.m"
    MR_String mercury__getopt__V_12_12;
#line 927 "getopt.m"
    MR_String mercury__getopt__V_14_14;

#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2(mercury__getopt__Arg_5, (MR_String) "\' is not numeric", &mercury__getopt__V_14_14);
    }
#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2((MR_String) "requires a numeric argument; \140", mercury__getopt__V_14_14, &mercury__getopt__V_12_12);
    }
#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2((MR_String) "\'", mercury__getopt__V_12_12, &mercury__getopt__V_10_10);
    }
#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2(mercury__getopt__Option_4, mercury__getopt__V_10_10, &mercury__getopt__V_9_9);
    }
#line 247 "string.opt"
    {
#line 247 "string.opt"
      mercury__string__append_3_p_2((MR_String) "option \140", mercury__getopt__V_9_9, &mercury__getopt__ErrorMsg_7);
    }
#line 930 "getopt.m"
    {
#line 930 "getopt.m"
      MR_Word base;
#line 930 "getopt.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 930 "getopt.m"
      *mercury__getopt__Result_6 = base;
#line 930 "getopt.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__ErrorMsg_7));
#line 930 "getopt.m"
    }
#line 927 "getopt.m"
  }
#line 924 "getopt.m"
}

#line 350 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0_2(
#line 350 "getopt.m"
  void * mercury__getopt__env_ptr_arg)
#line 350 "getopt.m"
{
#line 350 "getopt.m"
  {
#line 350 "getopt.m"
    struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0_env_0_s * mercury__getopt__env_ptr = (struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0_env_0_s *) mercury__getopt__env_ptr_arg;

#line 350 "getopt.m"
    (mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0_env_0__OptionData_7 = ((MR_Word) (mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0_env_0__conv1_OptionData_7);
#line 350 "getopt.m"
    {
#line 350 "getopt.m"
      mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0_1(mercury__getopt__env_ptr);
#line 350 "getopt.m"
      return;
    }
#line 350 "getopt.m"
  }
#line 350 "getopt.m"
}

#line 348 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0_1(
#line 348 "getopt.m"
  void * mercury__getopt__env_ptr_arg)
#line 348 "getopt.m"
{
#line 348 "getopt.m"
  {
#line 348 "getopt.m"
    struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0_env_0_s * mercury__getopt__env_ptr = (struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0_env_0_s *) mercury__getopt__env_ptr_arg;

#line 349 "getopt.m"
    {
#line 349 "getopt.m"
      MR_Word base;
#line 349 "getopt.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 349 "getopt.m"
      *((mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0_env_0__HeadVar__3_10) = base;
#line 349 "getopt.m"
      MR_hl_field(MR_mktag(0), base, 0) = (mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0_env_0__Option_6;
#line 349 "getopt.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0_env_0__OptionData_7));
#line 349 "getopt.m"
    }
#line 349 "getopt.m"
    {
#line 349 "getopt.m"
      ((mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0_env_0__cont)((mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0_env_0__cont_env_ptr);
#line 349 "getopt.m"
      return;
    }
#line 348 "getopt.m"
  }
#line 348 "getopt.m"
}

#line 348 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0(
#line 348 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_12,
#line 348 "getopt.m"
  MR_Word mercury__getopt__OptionDefaultsPred_3,
#line 348 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__3_10,
#line 348 "getopt.m"
  MR_Cont mercury__getopt__cont,
#line 348 "getopt.m"
  void * mercury__getopt__cont_env_ptr)
#line 348 "getopt.m"
{
#line 348 "getopt.m"
  {
#line 348 "getopt.m"
    struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0_env_0_s mercury__getopt__env;

#line 348 "getopt.m"
    (mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0_env_0__HeadVar__3_10 = mercury__getopt__HeadVar__3_10;
#line 348 "getopt.m"
    (mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0_env_0__cont = mercury__getopt__cont;
#line 348 "getopt.m"
    (mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0_env_0__cont_env_ptr = mercury__getopt__cont_env_ptr;
#line 348 "getopt.m"
    {
#line 348 "getopt.m"
      MR_bool mercury__getopt__succeeded;
#line 350 "getopt.m"
      void MR_CALL (* mercury__getopt__func_0)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionDefaultsPred_3, (MR_Integer) 1)));

#line 350 "getopt.m"
      {
#line 350 "getopt.m"
        mercury__getopt__func_0(((MR_Box) mercury__getopt__OptionDefaultsPred_3), &(mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0_env_0__Option_6, &(mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0_env_0__conv1_OptionData_7, mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0_2, &mercury__getopt__env);
      }
#line 348 "getopt.m"
    }
#line 348 "getopt.m"
  }
#line 348 "getopt.m"
}

#line 343 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0_2(
#line 343 "getopt.m"
  void * mercury__getopt__env_ptr_arg)
#line 343 "getopt.m"
{
#line 343 "getopt.m"
  {
#line 343 "getopt.m"
    struct mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0_env_0_s * mercury__getopt__env_ptr = (struct mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0_env_0_s *) mercury__getopt__env_ptr_arg;

#line 343 "getopt.m"
    (mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0_env_0__OptionData_7 = ((MR_Word) (mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0_env_0__conv1_OptionData_7);
#line 343 "getopt.m"
    {
#line 343 "getopt.m"
      mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0_1(mercury__getopt__env_ptr);
#line 343 "getopt.m"
      return;
    }
#line 343 "getopt.m"
  }
#line 343 "getopt.m"
}

#line 341 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0_1(
#line 341 "getopt.m"
  void * mercury__getopt__env_ptr_arg)
#line 341 "getopt.m"
{
#line 341 "getopt.m"
  {
#line 341 "getopt.m"
    struct mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0_env_0_s * mercury__getopt__env_ptr = (struct mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0_env_0_s *) mercury__getopt__env_ptr_arg;

#line 342 "getopt.m"
    {
#line 342 "getopt.m"
      MR_Word base;
#line 342 "getopt.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 342 "getopt.m"
      *((mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0_env_0__HeadVar__3_10) = base;
#line 342 "getopt.m"
      MR_hl_field(MR_mktag(0), base, 0) = (mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0_env_0__Option_6;
#line 342 "getopt.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0_env_0__OptionData_7));
#line 342 "getopt.m"
    }
#line 342 "getopt.m"
    {
#line 342 "getopt.m"
      ((mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0_env_0__cont)((mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0_env_0__cont_env_ptr);
#line 342 "getopt.m"
      return;
    }
#line 341 "getopt.m"
  }
#line 341 "getopt.m"
}

#line 341 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0(
#line 341 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_12,
#line 341 "getopt.m"
  MR_Word mercury__getopt__OptionDefaultsPred_3,
#line 341 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__3_10,
#line 341 "getopt.m"
  MR_Cont mercury__getopt__cont,
#line 341 "getopt.m"
  void * mercury__getopt__cont_env_ptr)
#line 341 "getopt.m"
{
#line 341 "getopt.m"
  {
#line 341 "getopt.m"
    struct mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0_env_0_s mercury__getopt__env;

#line 341 "getopt.m"
    (mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0_env_0__HeadVar__3_10 = mercury__getopt__HeadVar__3_10;
#line 341 "getopt.m"
    (mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0_env_0__cont = mercury__getopt__cont;
#line 341 "getopt.m"
    (mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0_env_0__cont_env_ptr = mercury__getopt__cont_env_ptr;
#line 341 "getopt.m"
    {
#line 341 "getopt.m"
      MR_bool mercury__getopt__succeeded;
#line 343 "getopt.m"
      void MR_CALL (* mercury__getopt__func_0)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionDefaultsPred_3, (MR_Integer) 1)));

#line 343 "getopt.m"
      {
#line 343 "getopt.m"
        mercury__getopt__func_0(((MR_Box) mercury__getopt__OptionDefaultsPred_3), &(mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0_env_0__Option_6, &(mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0_env_0__conv1_OptionData_7, mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0_2, &mercury__getopt__env);
      }
#line 341 "getopt.m"
    }
#line 341 "getopt.m"
  }
#line 341 "getopt.m"
}

#line 245 "getopt.m"
void MR_CALL 
mercury__getopt____Compare____special_data_0_0(
#line 245 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__1_1,
#line 245 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2,
#line 245 "getopt.m"
  MR_Word mercury__getopt__HeadVar__3_3)
#line 245 "getopt.m"
{
#line 245 "getopt.m"
  {
#line 245 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 245 "getopt.m"
    MR_Integer mercury__getopt__CastX_44 = (MR_Integer) mercury__getopt__HeadVar__2_2;
#line 245 "getopt.m"
    MR_Integer mercury__getopt__CastY_45 = (MR_Integer) mercury__getopt__HeadVar__3_3;

#line 245 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_44 == mercury__getopt__CastY_45);
#line 245 "getopt.m"
    if (mercury__getopt__succeeded)
#line 3289 "getopt.c"
      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 245 "getopt.m"
    else
#line 245 "getopt.m"
      if ((mercury__getopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 245 "getopt.m"
        if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 245 "getopt.m"
          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 245 "getopt.m"
        else
#line 245 "getopt.m"
          if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3303 "getopt.c"
            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "getopt.m"
          else
#line 245 "getopt.m"
            if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3309 "getopt.c"
              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "getopt.m"
            else
#line 245 "getopt.m"
              if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3315 "getopt.c"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "getopt.m"
              else
#line 3319 "getopt.c"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "getopt.m"
      else
#line 245 "getopt.m"
        if (((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 245 "getopt.m"
          {
#line 245 "getopt.m"
            MR_Word mercury__getopt__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

#line 245 "getopt.m"
            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3332 "getopt.c"
              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "getopt.m"
            else
#line 245 "getopt.m"
              if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 245 "getopt.m"
                {
#line 245 "getopt.m"
                  MR_Word mercury__getopt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
#line 245 "getopt.m"
                  MR_Integer mercury__getopt__V_54_54 = (MR_Integer) mercury__getopt__V_50_50;
#line 245 "getopt.m"
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
#line 245 "getopt.m"
                }
#line 245 "getopt.m"
              else
#line 245 "getopt.m"
                if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3375 "getopt.c"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "getopt.m"
                else
#line 245 "getopt.m"
                  if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3381 "getopt.c"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "getopt.m"
                  else
#line 3385 "getopt.c"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "getopt.m"
          }
#line 245 "getopt.m"
        else
#line 245 "getopt.m"
          if (((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 245 "getopt.m"
            {
#line 245 "getopt.m"
              MR_Integer mercury__getopt__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

#line 245 "getopt.m"
              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3400 "getopt.c"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "getopt.m"
              else
#line 245 "getopt.m"
                if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3406 "getopt.c"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "getopt.m"
                else
#line 245 "getopt.m"
                  if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 245 "getopt.m"
                    {
#line 245 "getopt.m"
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
#line 245 "getopt.m"
                    }
#line 245 "getopt.m"
                  else
#line 245 "getopt.m"
                    if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3445 "getopt.c"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "getopt.m"
                    else
#line 3449 "getopt.c"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "getopt.m"
            }
#line 245 "getopt.m"
          else
#line 245 "getopt.m"
            if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 245 "getopt.m"
              {
#line 245 "getopt.m"
                MR_Word mercury__getopt__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));

#line 245 "getopt.m"
                if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3464 "getopt.c"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "getopt.m"
                else
#line 245 "getopt.m"
                  if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3470 "getopt.c"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "getopt.m"
                  else
#line 245 "getopt.m"
                    if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3476 "getopt.c"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "getopt.m"
                    else
#line 245 "getopt.m"
                      if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 245 "getopt.m"
                        {
#line 245 "getopt.m"
                          MR_Word mercury__getopt__TypeInfo_46_46 = (MR_Word) &mercury__getopt_scalar_common_1[1];
#line 245 "getopt.m"
                          MR_Word mercury__getopt__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));

#line 245 "getopt.m"
                          {
#line 245 "getopt.m"
                            mercury__builtin__compare_3_p_0(mercury__getopt__TypeInfo_46_46, mercury__getopt__HeadVar__1_1, ((MR_Box) (mercury__getopt__V_52_52)), ((MR_Box) (mercury__getopt__V_43_43)));
#line 245 "getopt.m"
                            return;
                          }
#line 245 "getopt.m"
                        }
#line 245 "getopt.m"
                      else
#line 3500 "getopt.c"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "getopt.m"
              }
#line 245 "getopt.m"
            else
#line 245 "getopt.m"
              {
#line 245 "getopt.m"
                MR_String mercury__getopt__V_53_53 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));

#line 245 "getopt.m"
                if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3513 "getopt.c"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "getopt.m"
                else
#line 245 "getopt.m"
                  if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3519 "getopt.c"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "getopt.m"
                  else
#line 245 "getopt.m"
                    if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3525 "getopt.c"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "getopt.m"
                    else
#line 245 "getopt.m"
                      if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3531 "getopt.c"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "getopt.m"
                      else
#line 245 "getopt.m"
                        {
#line 245 "getopt.m"
                          MR_String mercury__getopt__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
#line 245 "getopt.m"
                          MR_Integer mercury__getopt__Res_7_65;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__getopt____Compare____special_data_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt__V_53_53 ;
	S2 =  mercury__getopt__V_32_32 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 3557 "getopt.c"

		;}
#undef MR_PROC_LABEL
	 mercury__getopt__Res_7_65  = Res;
#line 130 "private_builtin.opt"
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
#line 245 "getopt.m"
                        }
#line 245 "getopt.m"
              }
#line 245 "getopt.m"
  }
#line 245 "getopt.m"
}

#line 245 "getopt.m"
MR_bool MR_CALL 
mercury__getopt____Unify____special_data_0_0(
#line 245 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 245 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2)
#line 245 "getopt.m"
{
#line 245 "getopt.m"
  {
#line 245 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 245 "getopt.m"
    MR_Integer mercury__getopt__CastX_13 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 245 "getopt.m"
    MR_Integer mercury__getopt__CastY_14 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 245 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_13 == mercury__getopt__CastY_14);
#line 245 "getopt.m"
    if (mercury__getopt__succeeded)
#line 245 "getopt.m"
      mercury__getopt__succeeded = MR_TRUE;
#line 245 "getopt.m"
    else
#line 245 "getopt.m"
      if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 245 "getopt.m"
        {
#line 245 "getopt.m"
          MR_Integer mercury__getopt__CastX_3 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 245 "getopt.m"
          MR_Integer mercury__getopt__CastY_4 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 245 "getopt.m"
          mercury__getopt__succeeded = (mercury__getopt__CastY_4 == mercury__getopt__CastX_3);
#line 245 "getopt.m"
        }
#line 245 "getopt.m"
      else
#line 245 "getopt.m"
        if (((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 245 "getopt.m"
          {
#line 245 "getopt.m"
            MR_Word mercury__getopt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 245 "getopt.m"
            MR_Word mercury__getopt__V_6_6;

#line 245 "getopt.m"
            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 245 "getopt.m"
            if (mercury__getopt__succeeded)
#line 245 "getopt.m"
              {
#line 245 "getopt.m"
                mercury__getopt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 3653 "getopt.c"
                mercury__getopt__succeeded = (mercury__getopt__V_5_5 == mercury__getopt__V_6_6);
#line 245 "getopt.m"
              }
#line 245 "getopt.m"
          }
#line 245 "getopt.m"
        else
#line 245 "getopt.m"
          if (((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 245 "getopt.m"
            {
#line 245 "getopt.m"
              MR_Integer mercury__getopt__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 245 "getopt.m"
              MR_Integer mercury__getopt__V_8_8;

#line 245 "getopt.m"
              mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 245 "getopt.m"
              if (mercury__getopt__succeeded)
#line 245 "getopt.m"
                {
#line 245 "getopt.m"
                  mercury__getopt__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 3678 "getopt.c"
                  mercury__getopt__succeeded = (mercury__getopt__V_7_7 == mercury__getopt__V_8_8);
#line 245 "getopt.m"
                }
#line 245 "getopt.m"
            }
#line 245 "getopt.m"
          else
#line 245 "getopt.m"
            if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 245 "getopt.m"
              {
#line 245 "getopt.m"
                MR_Word mercury__getopt__TypeInfo_15_15;
#line 245 "getopt.m"
                MR_Word mercury__getopt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
#line 245 "getopt.m"
                MR_Word mercury__getopt__V_12_12;

#line 245 "getopt.m"
                mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 245 "getopt.m"
                if (mercury__getopt__succeeded)
#line 245 "getopt.m"
                  {
#line 245 "getopt.m"
                    mercury__getopt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 3705 "getopt.c"
                    mercury__getopt__TypeInfo_15_15 = (MR_Word) &mercury__getopt_scalar_common_1[1];
#line 3707 "getopt.c"
                    {
#line 3709 "getopt.c"
                      return mercury__getopt__succeeded = mercury__builtin__unify_2_p_0(mercury__getopt__TypeInfo_15_15, ((MR_Box) (mercury__getopt__V_11_11)), ((MR_Box) (mercury__getopt__V_12_12)));
                    }
#line 245 "getopt.m"
                  }
#line 245 "getopt.m"
              }
#line 245 "getopt.m"
            else
#line 245 "getopt.m"
              {
#line 245 "getopt.m"
                MR_String mercury__getopt__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
#line 245 "getopt.m"
                MR_String mercury__getopt__V_10_10;

#line 245 "getopt.m"
                mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 245 "getopt.m"
                if (mercury__getopt__succeeded)
#line 245 "getopt.m"
                  {
#line 245 "getopt.m"
                    mercury__getopt__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 3733 "getopt.c"
                    mercury__getopt__succeeded = (strcmp(mercury__getopt__V_9_9, mercury__getopt__V_10_10) == 0);
#line 245 "getopt.m"
                  }
#line 245 "getopt.m"
              }
#line 245 "getopt.m"
    return mercury__getopt__succeeded;
#line 245 "getopt.m"
  }
#line 245 "getopt.m"
}

#line 252 "getopt.m"
void MR_CALL 
mercury__getopt____Compare____option_table_1_0(
#line 252 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_6,
#line 252 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__1_1,
#line 252 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2,
#line 252 "getopt.m"
  MR_Word mercury__getopt__HeadVar__3_3)
#line 252 "getopt.m"
{
#line 252 "getopt.m"
  {
#line 252 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 252 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_7_7 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 252 "getopt.m"
    MR_Word mercury__getopt__Cast_HeadVar1_4 = mercury__getopt__HeadVar__2_2;
#line 252 "getopt.m"
    MR_Word mercury__getopt__Cast_HeadVar2_5 = mercury__getopt__HeadVar__3_3;

#line 252 "getopt.m"
    {
#line 252 "getopt.m"
      mercury__tree234____Compare____tree234_2_0(mercury__getopt__TypeInfo_for_OptionType_6, mercury__getopt__TypeCtorInfo_7_7, mercury__getopt__HeadVar__1_1, mercury__getopt__Cast_HeadVar1_4, mercury__getopt__Cast_HeadVar2_5);
#line 252 "getopt.m"
      return;
    }
#line 252 "getopt.m"
  }
#line 252 "getopt.m"
}

#line 252 "getopt.m"
MR_bool MR_CALL 
mercury__getopt____Unify____option_table_1_0(
#line 252 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_5,
#line 252 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 252 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2)
#line 252 "getopt.m"
{
#line 252 "getopt.m"
  {
#line 252 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 252 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_6_6 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 252 "getopt.m"
    MR_Word mercury__getopt__Cast_HeadVar1_3 = mercury__getopt__HeadVar__1_1;
#line 252 "getopt.m"
    MR_Word mercury__getopt__Cast_HeadVar2_4 = mercury__getopt__HeadVar__2_2;

#line 252 "getopt.m"
    {
#line 252 "getopt.m"
      return mercury__getopt__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__getopt__TypeInfo_for_OptionType_5, mercury__getopt__TypeCtorInfo_6_6, mercury__getopt__Cast_HeadVar1_3, mercury__getopt__Cast_HeadVar2_4);
    }
#line 252 "getopt.m"
    return mercury__getopt__succeeded;
#line 252 "getopt.m"
  }
#line 252 "getopt.m"
}

#line 187 "getopt.m"
void MR_CALL 
mercury__getopt____Compare____option_ops_track_1_0(
#line 187 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_14,
#line 187 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__1_1,
#line 187 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2,
#line 187 "getopt.m"
  MR_Word mercury__getopt__HeadVar__3_3)
#line 187 "getopt.m"
{
#line 187 "getopt.m"
  {
#line 187 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 187 "getopt.m"
    MR_Integer mercury__getopt__CastX_12 = (MR_Integer) mercury__getopt__HeadVar__2_2;
#line 187 "getopt.m"
    MR_Integer mercury__getopt__CastY_13 = (MR_Integer) mercury__getopt__HeadVar__3_3;

#line 187 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_12 == mercury__getopt__CastY_13);
#line 187 "getopt.m"
    if (mercury__getopt__succeeded)
#line 3842 "getopt.c"
      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 187 "getopt.m"
    else
#line 187 "getopt.m"
      {
#line 187 "getopt.m"
        MR_Word mercury__getopt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 187 "getopt.m"
        MR_Word mercury__getopt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 187 "getopt.m"
        MR_Word mercury__getopt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
#line 187 "getopt.m"
        MR_Word mercury__getopt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
#line 187 "getopt.m"
        MR_Word mercury__getopt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
#line 187 "getopt.m"
        MR_Word mercury__getopt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 2)));
#line 187 "getopt.m"
        MR_Word mercury__getopt__V_10_10;

#line 187 "getopt.m"
        {
#line 187 "getopt.m"
          mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__V_10_10, (MR_Word) mercury__getopt__V_4_4, (MR_Word) mercury__getopt__V_7_7);
        }
#line 3868 "getopt.c"
        mercury__getopt__succeeded = (mercury__getopt__V_10_10 == (MR_Integer) 0);
#line 187 "getopt.m"
        mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 187 "getopt.m"
        if (mercury__getopt__succeeded)
#line 187 "getopt.m"
          *mercury__getopt__HeadVar__1_1 = mercury__getopt__V_10_10;
#line 187 "getopt.m"
        else
#line 187 "getopt.m"
          {
#line 187 "getopt.m"
            MR_Word mercury__getopt__V_11_11;

#line 187 "getopt.m"
            {
#line 187 "getopt.m"
              mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__V_11_11, (MR_Word) mercury__getopt__V_5_5, (MR_Word) mercury__getopt__V_8_8);
            }
#line 3888 "getopt.c"
            mercury__getopt__succeeded = (mercury__getopt__V_11_11 == (MR_Integer) 0);
#line 187 "getopt.m"
            mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 187 "getopt.m"
            if (mercury__getopt__succeeded)
#line 187 "getopt.m"
              *mercury__getopt__HeadVar__1_1 = mercury__getopt__V_11_11;
#line 187 "getopt.m"
            else
#line 187 "getopt.m"
              {
#line 187 "getopt.m"
                mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt__HeadVar__1_1, (MR_Word) mercury__getopt__V_6_6, (MR_Word) mercury__getopt__V_9_9);
#line 187 "getopt.m"
                return;
              }
#line 187 "getopt.m"
          }
#line 187 "getopt.m"
      }
#line 187 "getopt.m"
  }
#line 187 "getopt.m"
}

#line 187 "getopt.m"
MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_track_1_0(
#line 187 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_11,
#line 187 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 187 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2)
#line 187 "getopt.m"
{
#line 187 "getopt.m"
  {
#line 187 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 187 "getopt.m"
    MR_Integer mercury__getopt__CastX_9 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 187 "getopt.m"
    MR_Integer mercury__getopt__CastY_10 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 187 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_9 == mercury__getopt__CastY_10);
#line 187 "getopt.m"
    if (mercury__getopt__succeeded)
#line 187 "getopt.m"
      mercury__getopt__succeeded = MR_TRUE;
#line 187 "getopt.m"
    else
#line 187 "getopt.m"
      {
#line 187 "getopt.m"
        MR_Word mercury__getopt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 187 "getopt.m"
        MR_Word mercury__getopt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
#line 187 "getopt.m"
        MR_Word mercury__getopt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 2)));
#line 187 "getopt.m"
        MR_Word mercury__getopt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 187 "getopt.m"
        MR_Word mercury__getopt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 187 "getopt.m"
        MR_Word mercury__getopt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));

#line 3957 "getopt.c"
        {
#line 3959 "getopt.c"
          mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_3_3, (MR_Word) mercury__getopt__V_6_6);
        }
#line 187 "getopt.m"
        if (mercury__getopt__succeeded)
#line 187 "getopt.m"
          {
#line 3966 "getopt.c"
            {
#line 3968 "getopt.c"
              mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_4_4, (MR_Word) mercury__getopt__V_7_7);
            }
#line 187 "getopt.m"
            if (mercury__getopt__succeeded)
#line 3973 "getopt.c"
              {
#line 3975 "getopt.c"
                return mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_5_5, (MR_Word) mercury__getopt__V_8_8);
              }
#line 187 "getopt.m"
          }
#line 187 "getopt.m"
      }
#line 187 "getopt.m"
    return mercury__getopt__succeeded;
#line 187 "getopt.m"
  }
#line 187 "getopt.m"
}

#line 304 "getopt.m"
void MR_CALL 
mercury__getopt____Compare____option_ops_special_1_0(
#line 304 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_18,
#line 304 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__1_1,
#line 304 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2,
#line 304 "getopt.m"
  MR_Word mercury__getopt__HeadVar__3_3)
#line 304 "getopt.m"
{
#line 304 "getopt.m"
  {
#line 304 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 304 "getopt.m"
    MR_Integer mercury__getopt__CastX_16 = (MR_Integer) mercury__getopt__HeadVar__2_2;
#line 304 "getopt.m"
    MR_Integer mercury__getopt__CastY_17 = (MR_Integer) mercury__getopt__HeadVar__3_3;

#line 304 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_16 == mercury__getopt__CastY_17);
#line 304 "getopt.m"
    if (mercury__getopt__succeeded)
#line 4015 "getopt.c"
      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 304 "getopt.m"
    else
#line 304 "getopt.m"
      if ((mercury__getopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 304 "getopt.m"
        if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 304 "getopt.m"
          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 304 "getopt.m"
        else
#line 304 "getopt.m"
          if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4029 "getopt.c"
            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 304 "getopt.m"
          else
#line 4033 "getopt.c"
            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 304 "getopt.m"
      else
#line 304 "getopt.m"
        if (((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 304 "getopt.m"
          {
#line 304 "getopt.m"
            MR_Word mercury__getopt__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

#line 304 "getopt.m"
            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4046 "getopt.c"
              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 304 "getopt.m"
            else
#line 304 "getopt.m"
              if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 304 "getopt.m"
                {
#line 304 "getopt.m"
                  MR_Word mercury__getopt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));

#line 304 "getopt.m"
                  {
#line 304 "getopt.m"
                    mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt__HeadVar__1_1, (MR_Word) mercury__getopt__V_39_39, (MR_Word) mercury__getopt__V_8_8);
#line 304 "getopt.m"
                    return;
                  }
#line 304 "getopt.m"
                }
#line 304 "getopt.m"
              else
#line 4068 "getopt.c"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 304 "getopt.m"
          }
#line 304 "getopt.m"
        else
#line 304 "getopt.m"
          {
#line 304 "getopt.m"
            MR_Word mercury__getopt__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

#line 304 "getopt.m"
            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4081 "getopt.c"
              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 304 "getopt.m"
            else
#line 304 "getopt.m"
              if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4087 "getopt.c"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 304 "getopt.m"
              else
#line 304 "getopt.m"
                {
#line 304 "getopt.m"
                  MR_Word mercury__getopt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));

#line 304 "getopt.m"
                  {
#line 304 "getopt.m"
                    mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt__HeadVar__1_1, (MR_Word) mercury__getopt__V_40_40, (MR_Word) mercury__getopt__V_15_15);
#line 304 "getopt.m"
                    return;
                  }
#line 304 "getopt.m"
                }
#line 304 "getopt.m"
          }
#line 304 "getopt.m"
  }
#line 304 "getopt.m"
}

#line 304 "getopt.m"
MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_special_1_0(
#line 304 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_11,
#line 304 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 304 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2)
#line 304 "getopt.m"
{
#line 304 "getopt.m"
  {
#line 304 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 304 "getopt.m"
    MR_Integer mercury__getopt__CastX_9 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 304 "getopt.m"
    MR_Integer mercury__getopt__CastY_10 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 304 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_9 == mercury__getopt__CastY_10);
#line 304 "getopt.m"
    if (mercury__getopt__succeeded)
#line 304 "getopt.m"
      mercury__getopt__succeeded = MR_TRUE;
#line 304 "getopt.m"
    else
#line 304 "getopt.m"
      if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 304 "getopt.m"
        {
#line 304 "getopt.m"
          MR_Integer mercury__getopt__CastX_3 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 304 "getopt.m"
          MR_Integer mercury__getopt__CastY_4 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 304 "getopt.m"
          mercury__getopt__succeeded = (mercury__getopt__CastY_4 == mercury__getopt__CastX_3);
#line 304 "getopt.m"
        }
#line 304 "getopt.m"
      else
#line 304 "getopt.m"
        if (((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 304 "getopt.m"
          {
#line 304 "getopt.m"
            MR_Word mercury__getopt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 304 "getopt.m"
            MR_Word mercury__getopt__V_6_6;

#line 304 "getopt.m"
            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 304 "getopt.m"
            if (mercury__getopt__succeeded)
#line 304 "getopt.m"
              {
#line 304 "getopt.m"
                mercury__getopt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 4172 "getopt.c"
                {
#line 4174 "getopt.c"
                  return mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_5_5, (MR_Word) mercury__getopt__V_6_6);
                }
#line 304 "getopt.m"
              }
#line 304 "getopt.m"
          }
#line 304 "getopt.m"
        else
#line 304 "getopt.m"
          {
#line 304 "getopt.m"
            MR_Word mercury__getopt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 304 "getopt.m"
            MR_Word mercury__getopt__V_8_8;

#line 304 "getopt.m"
            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 304 "getopt.m"
            if (mercury__getopt__succeeded)
#line 304 "getopt.m"
              {
#line 304 "getopt.m"
                mercury__getopt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 4198 "getopt.c"
                {
#line 4200 "getopt.c"
                  return mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_7_7, (MR_Word) mercury__getopt__V_8_8);
                }
#line 304 "getopt.m"
              }
#line 304 "getopt.m"
          }
#line 304 "getopt.m"
    return mercury__getopt__succeeded;
#line 304 "getopt.m"
  }
#line 304 "getopt.m"
}

#line 318 "getopt.m"
void MR_CALL 
mercury__getopt____Compare____option_ops_internal_1_0(
#line 318 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_14,
#line 318 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__1_1,
#line 318 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2,
#line 318 "getopt.m"
  MR_Word mercury__getopt__HeadVar__3_3)
#line 318 "getopt.m"
{
#line 318 "getopt.m"
  {
#line 318 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 318 "getopt.m"
    MR_Integer mercury__getopt__CastX_12 = (MR_Integer) mercury__getopt__HeadVar__2_2;
#line 318 "getopt.m"
    MR_Integer mercury__getopt__CastY_13 = (MR_Integer) mercury__getopt__HeadVar__3_3;

#line 318 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_12 == mercury__getopt__CastY_13);
#line 318 "getopt.m"
    if (mercury__getopt__succeeded)
#line 4240 "getopt.c"
      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 318 "getopt.m"
    else
#line 318 "getopt.m"
      {
#line 318 "getopt.m"
        MR_Word mercury__getopt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 318 "getopt.m"
        MR_Word mercury__getopt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 318 "getopt.m"
        MR_Word mercury__getopt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
#line 318 "getopt.m"
        MR_Word mercury__getopt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
#line 318 "getopt.m"
        MR_Word mercury__getopt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
#line 318 "getopt.m"
        MR_Word mercury__getopt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 2)));
#line 318 "getopt.m"
        MR_Word mercury__getopt__V_10_10;

#line 318 "getopt.m"
        {
#line 318 "getopt.m"
          mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__V_10_10, (MR_Word) mercury__getopt__V_4_4, (MR_Word) mercury__getopt__V_7_7);
        }
#line 4266 "getopt.c"
        mercury__getopt__succeeded = (mercury__getopt__V_10_10 == (MR_Integer) 0);
#line 318 "getopt.m"
        mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 318 "getopt.m"
        if (mercury__getopt__succeeded)
#line 318 "getopt.m"
          *mercury__getopt__HeadVar__1_1 = mercury__getopt__V_10_10;
#line 318 "getopt.m"
        else
#line 318 "getopt.m"
          {
#line 318 "getopt.m"
            MR_Word mercury__getopt__V_11_11;

#line 318 "getopt.m"
            {
#line 318 "getopt.m"
              mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__V_11_11, (MR_Word) mercury__getopt__V_5_5, (MR_Word) mercury__getopt__V_8_8);
            }
#line 4286 "getopt.c"
            mercury__getopt__succeeded = (mercury__getopt__V_11_11 == (MR_Integer) 0);
#line 318 "getopt.m"
            mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 318 "getopt.m"
            if (mercury__getopt__succeeded)
#line 318 "getopt.m"
              *mercury__getopt__HeadVar__1_1 = mercury__getopt__V_11_11;
#line 318 "getopt.m"
            else
#line 318 "getopt.m"
              {
#line 318 "getopt.m"
                mercury__getopt____Compare____option_ops_special_1_0(mercury__getopt__TypeInfo_for_OptionType_14, mercury__getopt__HeadVar__1_1, mercury__getopt__V_6_6, mercury__getopt__V_9_9);
#line 318 "getopt.m"
                return;
              }
#line 318 "getopt.m"
          }
#line 318 "getopt.m"
      }
#line 318 "getopt.m"
  }
#line 318 "getopt.m"
}

#line 318 "getopt.m"
MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_internal_1_0(
#line 318 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_11,
#line 318 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 318 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2)
#line 318 "getopt.m"
{
#line 318 "getopt.m"
  {
#line 318 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 318 "getopt.m"
    MR_Integer mercury__getopt__CastX_9 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 318 "getopt.m"
    MR_Integer mercury__getopt__CastY_10 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 318 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_9 == mercury__getopt__CastY_10);
#line 318 "getopt.m"
    if (mercury__getopt__succeeded)
#line 318 "getopt.m"
      mercury__getopt__succeeded = MR_TRUE;
#line 318 "getopt.m"
    else
#line 318 "getopt.m"
      {
#line 318 "getopt.m"
        MR_Word mercury__getopt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 318 "getopt.m"
        MR_Word mercury__getopt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
#line 318 "getopt.m"
        MR_Word mercury__getopt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 2)));
#line 318 "getopt.m"
        MR_Word mercury__getopt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 318 "getopt.m"
        MR_Word mercury__getopt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 318 "getopt.m"
        MR_Word mercury__getopt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));

#line 4355 "getopt.c"
        {
#line 4357 "getopt.c"
          mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_3_3, (MR_Word) mercury__getopt__V_6_6);
        }
#line 318 "getopt.m"
        if (mercury__getopt__succeeded)
#line 318 "getopt.m"
          {
#line 4364 "getopt.c"
            {
#line 4366 "getopt.c"
              mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_4_4, (MR_Word) mercury__getopt__V_7_7);
            }
#line 318 "getopt.m"
            if (mercury__getopt__succeeded)
#line 4371 "getopt.c"
              {
#line 4373 "getopt.c"
                return mercury__getopt__succeeded = mercury__getopt____Unify____option_ops_special_1_0(mercury__getopt__TypeInfo_for_OptionType_11, mercury__getopt__V_5_5, mercury__getopt__V_8_8);
              }
#line 318 "getopt.m"
          }
#line 318 "getopt.m"
      }
#line 318 "getopt.m"
    return mercury__getopt__succeeded;
#line 318 "getopt.m"
  }
#line 318 "getopt.m"
}

#line 159 "getopt.m"
void MR_CALL 
mercury__getopt____Compare____option_ops_1_0(
#line 159 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_128,
#line 159 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__1_1,
#line 159 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2,
#line 159 "getopt.m"
  MR_Word mercury__getopt__HeadVar__3_3)
#line 159 "getopt.m"
{
#line 159 "getopt.m"
  {
#line 159 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 159 "getopt.m"
    MR_Integer mercury__getopt__CastX_126 = (MR_Integer) mercury__getopt__HeadVar__2_2;
#line 159 "getopt.m"
    MR_Integer mercury__getopt__CastY_127 = (MR_Integer) mercury__getopt__HeadVar__3_3;

#line 159 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_126 == mercury__getopt__CastY_127);
#line 159 "getopt.m"
    if (mercury__getopt__succeeded)
#line 4413 "getopt.c"
      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 159 "getopt.m"
    else
#line 159 "getopt.m"
      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 159 "getopt.m"
        {
#line 159 "getopt.m"
          MR_Word mercury__getopt__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
#line 159 "getopt.m"
          MR_Word mercury__getopt__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 159 "getopt.m"
          MR_Word mercury__getopt__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

#line 159 "getopt.m"
          if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 159 "getopt.m"
            {
#line 159 "getopt.m"
              MR_Word mercury__getopt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
#line 159 "getopt.m"
              MR_Word mercury__getopt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
#line 159 "getopt.m"
              MR_Word mercury__getopt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 2)));
#line 159 "getopt.m"
              MR_Word mercury__getopt__V_10_10;

#line 159 "getopt.m"
              {
#line 159 "getopt.m"
                mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__V_10_10, (MR_Word) mercury__getopt__V_197_197, (MR_Word) mercury__getopt__V_7_7);
              }
#line 4446 "getopt.c"
              mercury__getopt__succeeded = (mercury__getopt__V_10_10 == (MR_Integer) 0);
#line 159 "getopt.m"
              mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 159 "getopt.m"
              if (mercury__getopt__succeeded)
#line 159 "getopt.m"
                *mercury__getopt__HeadVar__1_1 = mercury__getopt__V_10_10;
#line 159 "getopt.m"
              else
#line 159 "getopt.m"
                {
#line 159 "getopt.m"
                  MR_Word mercury__getopt__V_11_11;

#line 159 "getopt.m"
                  {
#line 159 "getopt.m"
                    mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__V_11_11, (MR_Word) mercury__getopt__V_196_196, (MR_Word) mercury__getopt__V_8_8);
                  }
#line 4466 "getopt.c"
                  mercury__getopt__succeeded = (mercury__getopt__V_11_11 == (MR_Integer) 0);
#line 159 "getopt.m"
                  mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 159 "getopt.m"
                  if (mercury__getopt__succeeded)
#line 159 "getopt.m"
                    *mercury__getopt__HeadVar__1_1 = mercury__getopt__V_11_11;
#line 159 "getopt.m"
                  else
#line 159 "getopt.m"
                    {
#line 159 "getopt.m"
                      mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt__HeadVar__1_1, (MR_Word) mercury__getopt__V_195_195, (MR_Word) mercury__getopt__V_9_9);
#line 159 "getopt.m"
                      return;
                    }
#line 159 "getopt.m"
                }
#line 159 "getopt.m"
            }
#line 159 "getopt.m"
          else
#line 159 "getopt.m"
            if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4491 "getopt.c"
              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 159 "getopt.m"
            else
#line 159 "getopt.m"
              if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4497 "getopt.c"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 159 "getopt.m"
              else
#line 4501 "getopt.c"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 159 "getopt.m"
        }
#line 159 "getopt.m"
      else
#line 159 "getopt.m"
        if (((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 159 "getopt.m"
          {
#line 159 "getopt.m"
            MR_Word mercury__getopt__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 3)));
#line 159 "getopt.m"
            MR_Word mercury__getopt__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
#line 159 "getopt.m"
            MR_Word mercury__getopt__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 159 "getopt.m"
            MR_Word mercury__getopt__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

#line 159 "getopt.m"
            if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4522 "getopt.c"
              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 159 "getopt.m"
            else
#line 159 "getopt.m"
              if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 159 "getopt.m"
                {
#line 159 "getopt.m"
                  MR_Word mercury__getopt__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
#line 159 "getopt.m"
                  MR_Word mercury__getopt__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
#line 159 "getopt.m"
                  MR_Word mercury__getopt__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 2)));
#line 159 "getopt.m"
                  MR_Word mercury__getopt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 3)));
#line 159 "getopt.m"
                  MR_Word mercury__getopt__V_47_47;

#line 159 "getopt.m"
                  {
#line 159 "getopt.m"
                    mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__V_47_47, (MR_Word) mercury__getopt__V_201_201, (MR_Word) mercury__getopt__V_43_43);
                  }
#line 4546 "getopt.c"
                  mercury__getopt__succeeded = (mercury__getopt__V_47_47 == (MR_Integer) 0);
#line 159 "getopt.m"
                  mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 159 "getopt.m"
                  if (mercury__getopt__succeeded)
#line 159 "getopt.m"
                    *mercury__getopt__HeadVar__1_1 = mercury__getopt__V_47_47;
#line 159 "getopt.m"
                  else
#line 159 "getopt.m"
                    {
#line 159 "getopt.m"
                      MR_Word mercury__getopt__V_48_48;

#line 159 "getopt.m"
                      {
#line 159 "getopt.m"
                        mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__V_48_48, (MR_Word) mercury__getopt__V_200_200, (MR_Word) mercury__getopt__V_44_44);
                      }
#line 4566 "getopt.c"
                      mercury__getopt__succeeded = (mercury__getopt__V_48_48 == (MR_Integer) 0);
#line 159 "getopt.m"
                      mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 159 "getopt.m"
                      if (mercury__getopt__succeeded)
#line 159 "getopt.m"
                        *mercury__getopt__HeadVar__1_1 = mercury__getopt__V_48_48;
#line 159 "getopt.m"
                      else
#line 159 "getopt.m"
                        {
#line 159 "getopt.m"
                          MR_Word mercury__getopt__V_49_49;

#line 159 "getopt.m"
                          {
#line 159 "getopt.m"
                            mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__V_49_49, (MR_Word) mercury__getopt__V_199_199, (MR_Word) mercury__getopt__V_45_45);
                          }
#line 4586 "getopt.c"
                          mercury__getopt__succeeded = (mercury__getopt__V_49_49 == (MR_Integer) 0);
#line 159 "getopt.m"
                          mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 159 "getopt.m"
                          if (mercury__getopt__succeeded)
#line 159 "getopt.m"
                            *mercury__getopt__HeadVar__1_1 = mercury__getopt__V_49_49;
#line 159 "getopt.m"
                          else
#line 159 "getopt.m"
                            {
#line 159 "getopt.m"
                              mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt__HeadVar__1_1, (MR_Word) mercury__getopt__V_198_198, (MR_Word) mercury__getopt__V_46_46);
#line 159 "getopt.m"
                              return;
                            }
#line 159 "getopt.m"
                        }
#line 159 "getopt.m"
                    }
#line 159 "getopt.m"
                }
#line 159 "getopt.m"
              else
#line 159 "getopt.m"
                if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4613 "getopt.c"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 159 "getopt.m"
                else
#line 4617 "getopt.c"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 159 "getopt.m"
          }
#line 159 "getopt.m"
        else
#line 159 "getopt.m"
          if (((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 159 "getopt.m"
            {
#line 159 "getopt.m"
              MR_Word mercury__getopt__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
#line 159 "getopt.m"
              MR_Word mercury__getopt__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 159 "getopt.m"
              MR_Word mercury__getopt__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

#line 159 "getopt.m"
              if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4636 "getopt.c"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 159 "getopt.m"
              else
#line 159 "getopt.m"
                if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4642 "getopt.c"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 159 "getopt.m"
                else
#line 159 "getopt.m"
                  if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 159 "getopt.m"
                    {
#line 159 "getopt.m"
                      MR_Word mercury__getopt__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
#line 159 "getopt.m"
                      MR_Word mercury__getopt__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
#line 159 "getopt.m"
                      MR_Word mercury__getopt__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__3_3, (MR_Integer) 2)));
#line 159 "getopt.m"
                      MR_Word mercury__getopt__V_84_84;

#line 159 "getopt.m"
                      {
#line 159 "getopt.m"
                        mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__V_84_84, (MR_Word) mercury__getopt__V_204_204, (MR_Word) mercury__getopt__V_81_81);
                      }
#line 4664 "getopt.c"
                      mercury__getopt__succeeded = (mercury__getopt__V_84_84 == (MR_Integer) 0);
#line 159 "getopt.m"
                      mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 159 "getopt.m"
                      if (mercury__getopt__succeeded)
#line 159 "getopt.m"
                        *mercury__getopt__HeadVar__1_1 = mercury__getopt__V_84_84;
#line 159 "getopt.m"
                      else
#line 159 "getopt.m"
                        {
#line 159 "getopt.m"
                          MR_Word mercury__getopt__V_85_85;

#line 159 "getopt.m"
                          {
#line 159 "getopt.m"
                            mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__V_85_85, (MR_Word) mercury__getopt__V_203_203, (MR_Word) mercury__getopt__V_82_82);
                          }
#line 4684 "getopt.c"
                          mercury__getopt__succeeded = (mercury__getopt__V_85_85 == (MR_Integer) 0);
#line 159 "getopt.m"
                          mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 159 "getopt.m"
                          if (mercury__getopt__succeeded)
#line 159 "getopt.m"
                            *mercury__getopt__HeadVar__1_1 = mercury__getopt__V_85_85;
#line 159 "getopt.m"
                          else
#line 159 "getopt.m"
                            {
#line 159 "getopt.m"
                              mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt__HeadVar__1_1, (MR_Word) mercury__getopt__V_202_202, (MR_Word) mercury__getopt__V_83_83);
#line 159 "getopt.m"
                              return;
                            }
#line 159 "getopt.m"
                        }
#line 159 "getopt.m"
                    }
#line 159 "getopt.m"
                  else
#line 4707 "getopt.c"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 159 "getopt.m"
            }
#line 159 "getopt.m"
          else
#line 159 "getopt.m"
            {
#line 159 "getopt.m"
              MR_Word mercury__getopt__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 3)));
#line 159 "getopt.m"
              MR_Word mercury__getopt__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
#line 159 "getopt.m"
              MR_Word mercury__getopt__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 159 "getopt.m"
              MR_Word mercury__getopt__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

#line 159 "getopt.m"
              if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4726 "getopt.c"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 159 "getopt.m"
              else
#line 159 "getopt.m"
                if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4732 "getopt.c"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 159 "getopt.m"
                else
#line 159 "getopt.m"
                  if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4738 "getopt.c"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 159 "getopt.m"
                  else
#line 159 "getopt.m"
                    {
#line 159 "getopt.m"
                      MR_Word mercury__getopt__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
#line 159 "getopt.m"
                      MR_Word mercury__getopt__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
#line 159 "getopt.m"
                      MR_Word mercury__getopt__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 2)));
#line 159 "getopt.m"
                      MR_Word mercury__getopt__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 3)));
#line 159 "getopt.m"
                      MR_Word mercury__getopt__V_123_123;

#line 159 "getopt.m"
                      {
#line 159 "getopt.m"
                        mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__V_123_123, (MR_Word) mercury__getopt__V_208_208, (MR_Word) mercury__getopt__V_119_119);
                      }
#line 4760 "getopt.c"
                      mercury__getopt__succeeded = (mercury__getopt__V_123_123 == (MR_Integer) 0);
#line 159 "getopt.m"
                      mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 159 "getopt.m"
                      if (mercury__getopt__succeeded)
#line 159 "getopt.m"
                        *mercury__getopt__HeadVar__1_1 = mercury__getopt__V_123_123;
#line 159 "getopt.m"
                      else
#line 159 "getopt.m"
                        {
#line 159 "getopt.m"
                          MR_Word mercury__getopt__V_124_124;

#line 159 "getopt.m"
                          {
#line 159 "getopt.m"
                            mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__V_124_124, (MR_Word) mercury__getopt__V_207_207, (MR_Word) mercury__getopt__V_120_120);
                          }
#line 4780 "getopt.c"
                          mercury__getopt__succeeded = (mercury__getopt__V_124_124 == (MR_Integer) 0);
#line 159 "getopt.m"
                          mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 159 "getopt.m"
                          if (mercury__getopt__succeeded)
#line 159 "getopt.m"
                            *mercury__getopt__HeadVar__1_1 = mercury__getopt__V_124_124;
#line 159 "getopt.m"
                          else
#line 159 "getopt.m"
                            {
#line 159 "getopt.m"
                              MR_Word mercury__getopt__V_125_125;

#line 159 "getopt.m"
                              {
#line 159 "getopt.m"
                                mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__V_125_125, (MR_Word) mercury__getopt__V_206_206, (MR_Word) mercury__getopt__V_121_121);
                              }
#line 4800 "getopt.c"
                              mercury__getopt__succeeded = (mercury__getopt__V_125_125 == (MR_Integer) 0);
#line 159 "getopt.m"
                              mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 159 "getopt.m"
                              if (mercury__getopt__succeeded)
#line 159 "getopt.m"
                                *mercury__getopt__HeadVar__1_1 = mercury__getopt__V_125_125;
#line 159 "getopt.m"
                              else
#line 159 "getopt.m"
                                {
#line 159 "getopt.m"
                                  mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt__HeadVar__1_1, (MR_Word) mercury__getopt__V_205_205, (MR_Word) mercury__getopt__V_122_122);
#line 159 "getopt.m"
                                  return;
                                }
#line 159 "getopt.m"
                            }
#line 159 "getopt.m"
                        }
#line 159 "getopt.m"
                    }
#line 159 "getopt.m"
            }
#line 159 "getopt.m"
  }
#line 159 "getopt.m"
}

#line 159 "getopt.m"
MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_1_0(
#line 159 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_33,
#line 159 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 159 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2)
#line 159 "getopt.m"
{
#line 159 "getopt.m"
  {
#line 159 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 159 "getopt.m"
    MR_Integer mercury__getopt__CastX_31 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 159 "getopt.m"
    MR_Integer mercury__getopt__CastY_32 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 159 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_31 == mercury__getopt__CastY_32);
#line 159 "getopt.m"
    if (mercury__getopt__succeeded)
#line 159 "getopt.m"
      mercury__getopt__succeeded = MR_TRUE;
#line 159 "getopt.m"
    else
#line 159 "getopt.m"
      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 159 "getopt.m"
        {
#line 159 "getopt.m"
          MR_Word mercury__getopt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 159 "getopt.m"
          MR_Word mercury__getopt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
#line 159 "getopt.m"
          MR_Word mercury__getopt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 2)));
#line 159 "getopt.m"
          MR_Word mercury__getopt__V_6_6;
#line 159 "getopt.m"
          MR_Word mercury__getopt__V_7_7;
#line 159 "getopt.m"
          MR_Word mercury__getopt__V_8_8;

#line 159 "getopt.m"
          mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 159 "getopt.m"
          if (mercury__getopt__succeeded)
#line 159 "getopt.m"
            {
#line 159 "getopt.m"
              mercury__getopt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 159 "getopt.m"
              mercury__getopt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 159 "getopt.m"
              mercury__getopt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
#line 4887 "getopt.c"
              {
#line 4889 "getopt.c"
                mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_3_3, (MR_Word) mercury__getopt__V_6_6);
              }
#line 159 "getopt.m"
              if (mercury__getopt__succeeded)
#line 159 "getopt.m"
                {
#line 4896 "getopt.c"
                  {
#line 4898 "getopt.c"
                    mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_4_4, (MR_Word) mercury__getopt__V_7_7);
                  }
#line 159 "getopt.m"
                  if (mercury__getopt__succeeded)
#line 4903 "getopt.c"
                    {
#line 4905 "getopt.c"
                      return mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_5_5, (MR_Word) mercury__getopt__V_8_8);
                    }
#line 159 "getopt.m"
                }
#line 159 "getopt.m"
            }
#line 159 "getopt.m"
        }
#line 159 "getopt.m"
      else
#line 159 "getopt.m"
        if (((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 159 "getopt.m"
          {
#line 159 "getopt.m"
            MR_Word mercury__getopt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 159 "getopt.m"
            MR_Word mercury__getopt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
#line 159 "getopt.m"
            MR_Word mercury__getopt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 2)));
#line 159 "getopt.m"
            MR_Word mercury__getopt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 3)));
#line 159 "getopt.m"
            MR_Word mercury__getopt__V_13_13;
#line 159 "getopt.m"
            MR_Word mercury__getopt__V_14_14;
#line 159 "getopt.m"
            MR_Word mercury__getopt__V_15_15;
#line 159 "getopt.m"
            MR_Word mercury__getopt__V_16_16;

#line 159 "getopt.m"
            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 159 "getopt.m"
            if (mercury__getopt__succeeded)
#line 159 "getopt.m"
              {
#line 159 "getopt.m"
                mercury__getopt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 159 "getopt.m"
                mercury__getopt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 159 "getopt.m"
                mercury__getopt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
#line 159 "getopt.m"
                mercury__getopt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 3)));
#line 4951 "getopt.c"
                {
#line 4953 "getopt.c"
                  mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_9_9, (MR_Word) mercury__getopt__V_13_13);
                }
#line 159 "getopt.m"
                if (mercury__getopt__succeeded)
#line 159 "getopt.m"
                  {
#line 4960 "getopt.c"
                    {
#line 4962 "getopt.c"
                      mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_10_10, (MR_Word) mercury__getopt__V_14_14);
                    }
#line 159 "getopt.m"
                    if (mercury__getopt__succeeded)
#line 159 "getopt.m"
                      {
#line 4969 "getopt.c"
                        {
#line 4971 "getopt.c"
                          mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_11_11, (MR_Word) mercury__getopt__V_15_15);
                        }
#line 159 "getopt.m"
                        if (mercury__getopt__succeeded)
#line 4976 "getopt.c"
                          {
#line 4978 "getopt.c"
                            return mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_12_12, (MR_Word) mercury__getopt__V_16_16);
                          }
#line 159 "getopt.m"
                      }
#line 159 "getopt.m"
                  }
#line 159 "getopt.m"
              }
#line 159 "getopt.m"
          }
#line 159 "getopt.m"
        else
#line 159 "getopt.m"
          if (((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 159 "getopt.m"
            {
#line 159 "getopt.m"
              MR_Word mercury__getopt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 159 "getopt.m"
              MR_Word mercury__getopt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
#line 159 "getopt.m"
              MR_Word mercury__getopt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__1_1, (MR_Integer) 2)));
#line 159 "getopt.m"
              MR_Word mercury__getopt__V_20_20;
#line 159 "getopt.m"
              MR_Word mercury__getopt__V_21_21;
#line 159 "getopt.m"
              MR_Word mercury__getopt__V_22_22;

#line 159 "getopt.m"
              mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 159 "getopt.m"
              if (mercury__getopt__succeeded)
#line 159 "getopt.m"
                {
#line 159 "getopt.m"
                  mercury__getopt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 159 "getopt.m"
                  mercury__getopt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 159 "getopt.m"
                  mercury__getopt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
#line 5020 "getopt.c"
                  {
#line 5022 "getopt.c"
                    mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_17_17, (MR_Word) mercury__getopt__V_20_20);
                  }
#line 159 "getopt.m"
                  if (mercury__getopt__succeeded)
#line 159 "getopt.m"
                    {
#line 5029 "getopt.c"
                      {
#line 5031 "getopt.c"
                        mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_18_18, (MR_Word) mercury__getopt__V_21_21);
                      }
#line 159 "getopt.m"
                      if (mercury__getopt__succeeded)
#line 5036 "getopt.c"
                        {
#line 5038 "getopt.c"
                          return mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_19_19, (MR_Word) mercury__getopt__V_22_22);
                        }
#line 159 "getopt.m"
                    }
#line 159 "getopt.m"
                }
#line 159 "getopt.m"
            }
#line 159 "getopt.m"
          else
#line 159 "getopt.m"
            {
#line 159 "getopt.m"
              MR_Word mercury__getopt__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 159 "getopt.m"
              MR_Word mercury__getopt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
#line 159 "getopt.m"
              MR_Word mercury__getopt__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 2)));
#line 159 "getopt.m"
              MR_Word mercury__getopt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 3)));
#line 159 "getopt.m"
              MR_Word mercury__getopt__V_27_27;
#line 159 "getopt.m"
              MR_Word mercury__getopt__V_28_28;
#line 159 "getopt.m"
              MR_Word mercury__getopt__V_29_29;
#line 159 "getopt.m"
              MR_Word mercury__getopt__V_30_30;

#line 159 "getopt.m"
              mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 159 "getopt.m"
              if (mercury__getopt__succeeded)
#line 159 "getopt.m"
                {
#line 159 "getopt.m"
                  mercury__getopt__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 159 "getopt.m"
                  mercury__getopt__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 159 "getopt.m"
                  mercury__getopt__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
#line 159 "getopt.m"
                  mercury__getopt__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 3)));
#line 5082 "getopt.c"
                  {
#line 5084 "getopt.c"
                    mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_23_23, (MR_Word) mercury__getopt__V_27_27);
                  }
#line 159 "getopt.m"
                  if (mercury__getopt__succeeded)
#line 159 "getopt.m"
                    {
#line 5091 "getopt.c"
                      {
#line 5093 "getopt.c"
                        mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_24_24, (MR_Word) mercury__getopt__V_28_28);
                      }
#line 159 "getopt.m"
                      if (mercury__getopt__succeeded)
#line 159 "getopt.m"
                        {
#line 5100 "getopt.c"
                          {
#line 5102 "getopt.c"
                            mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_25_25, (MR_Word) mercury__getopt__V_29_29);
                          }
#line 159 "getopt.m"
                          if (mercury__getopt__succeeded)
#line 5107 "getopt.c"
                            {
#line 5109 "getopt.c"
                              return mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_26_26, (MR_Word) mercury__getopt__V_30_30);
                            }
#line 159 "getopt.m"
                        }
#line 159 "getopt.m"
                    }
#line 159 "getopt.m"
                }
#line 159 "getopt.m"
            }
#line 159 "getopt.m"
    return mercury__getopt__succeeded;
#line 159 "getopt.m"
  }
#line 159 "getopt.m"
}

#line 232 "getopt.m"
void MR_CALL 
mercury__getopt____Compare____option_data_0_0(
#line 232 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__1_1,
#line 232 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2,
#line 232 "getopt.m"
  MR_Word mercury__getopt__HeadVar__3_3)
#line 232 "getopt.m"
{
#line 232 "getopt.m"
  {
#line 232 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 232 "getopt.m"
    MR_Integer mercury__getopt__CastX_136 = (MR_Integer) mercury__getopt__HeadVar__2_2;
#line 232 "getopt.m"
    MR_Integer mercury__getopt__CastY_137 = (MR_Integer) mercury__getopt__HeadVar__3_3;

#line 232 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_136 == mercury__getopt__CastY_137);
#line 232 "getopt.m"
    if (mercury__getopt__succeeded)
#line 5151 "getopt.c"
      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 232 "getopt.m"
    else
#line 232 "getopt.m"
      if ((mercury__getopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 232 "getopt.m"
        if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 232 "getopt.m"
          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 232 "getopt.m"
        else
#line 232 "getopt.m"
          if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 232 "getopt.m"
            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
          else
#line 232 "getopt.m"
            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 232 "getopt.m"
              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
            else
#line 232 "getopt.m"
              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 232 "getopt.m"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
              else
#line 232 "getopt.m"
                if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 232 "getopt.m"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                else
#line 232 "getopt.m"
                  if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5189 "getopt.c"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                  else
#line 232 "getopt.m"
                    if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5195 "getopt.c"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                    else
#line 232 "getopt.m"
                      if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 5201 "getopt.c"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                      else
#line 232 "getopt.m"
                        if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5207 "getopt.c"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                        else
#line 232 "getopt.m"
                          if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 5213 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                          else
#line 5217 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
      else
#line 232 "getopt.m"
        if ((mercury__getopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 232 "getopt.m"
          if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 232 "getopt.m"
            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
          else
#line 232 "getopt.m"
            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 232 "getopt.m"
              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 232 "getopt.m"
            else
#line 232 "getopt.m"
              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 232 "getopt.m"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
              else
#line 232 "getopt.m"
                if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 232 "getopt.m"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                else
#line 232 "getopt.m"
                  if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 232 "getopt.m"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                  else
#line 232 "getopt.m"
                    if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5255 "getopt.c"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                    else
#line 232 "getopt.m"
                      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5261 "getopt.c"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                      else
#line 232 "getopt.m"
                        if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 5267 "getopt.c"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                        else
#line 232 "getopt.m"
                          if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5273 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                          else
#line 232 "getopt.m"
                            if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 5279 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                            else
#line 5283 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
        else
#line 232 "getopt.m"
          if ((mercury__getopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 232 "getopt.m"
            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 232 "getopt.m"
              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
            else
#line 232 "getopt.m"
              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 232 "getopt.m"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
              else
#line 232 "getopt.m"
                if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 232 "getopt.m"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 232 "getopt.m"
                else
#line 232 "getopt.m"
                  if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 232 "getopt.m"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                  else
#line 232 "getopt.m"
                    if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 232 "getopt.m"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                    else
#line 232 "getopt.m"
                      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5321 "getopt.c"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                      else
#line 232 "getopt.m"
                        if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5327 "getopt.c"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                        else
#line 232 "getopt.m"
                          if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 5333 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                          else
#line 232 "getopt.m"
                            if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5339 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                            else
#line 232 "getopt.m"
                              if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 5345 "getopt.c"
                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                              else
#line 5349 "getopt.c"
                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
          else
#line 232 "getopt.m"
            if ((mercury__getopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 232 "getopt.m"
              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 232 "getopt.m"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
              else
#line 232 "getopt.m"
                if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 232 "getopt.m"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                else
#line 232 "getopt.m"
                  if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 232 "getopt.m"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                  else
#line 232 "getopt.m"
                    if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 232 "getopt.m"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 232 "getopt.m"
                    else
#line 232 "getopt.m"
                      if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 232 "getopt.m"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                      else
#line 232 "getopt.m"
                        if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5387 "getopt.c"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                        else
#line 232 "getopt.m"
                          if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5393 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                          else
#line 232 "getopt.m"
                            if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 5399 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                            else
#line 232 "getopt.m"
                              if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5405 "getopt.c"
                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                              else
#line 232 "getopt.m"
                                if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 5411 "getopt.c"
                                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                                else
#line 5415 "getopt.c"
                                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
            else
#line 232 "getopt.m"
              if ((mercury__getopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 232 "getopt.m"
                if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 232 "getopt.m"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                else
#line 232 "getopt.m"
                  if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 232 "getopt.m"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                  else
#line 232 "getopt.m"
                    if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 232 "getopt.m"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                    else
#line 232 "getopt.m"
                      if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 232 "getopt.m"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                      else
#line 232 "getopt.m"
                        if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 232 "getopt.m"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 232 "getopt.m"
                        else
#line 232 "getopt.m"
                          if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5453 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                          else
#line 232 "getopt.m"
                            if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5459 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                            else
#line 232 "getopt.m"
                              if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 5465 "getopt.c"
                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                              else
#line 232 "getopt.m"
                                if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5471 "getopt.c"
                                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                                else
#line 232 "getopt.m"
                                  if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 5477 "getopt.c"
                                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                                  else
#line 5481 "getopt.c"
                                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
              else
#line 232 "getopt.m"
                if (((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 232 "getopt.m"
                  {
#line 232 "getopt.m"
                    MR_Word mercury__getopt__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

#line 232 "getopt.m"
                    if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 5494 "getopt.c"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                    else
#line 232 "getopt.m"
                      if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 5500 "getopt.c"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                      else
#line 232 "getopt.m"
                        if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 5506 "getopt.c"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                        else
#line 232 "getopt.m"
                          if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5512 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                          else
#line 232 "getopt.m"
                            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 5518 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                            else
#line 232 "getopt.m"
                              if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 232 "getopt.m"
                                {
#line 232 "getopt.m"
                                  MR_Word mercury__getopt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
#line 232 "getopt.m"
                                  MR_Integer mercury__getopt__V_150_150 = (MR_Integer) mercury__getopt__V_145_145;
#line 232 "getopt.m"
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
#line 232 "getopt.m"
                                }
#line 232 "getopt.m"
                              else
#line 232 "getopt.m"
                                if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5561 "getopt.c"
                                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                                else
#line 232 "getopt.m"
                                  if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 5567 "getopt.c"
                                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                                  else
#line 232 "getopt.m"
                                    if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5573 "getopt.c"
                                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                                    else
#line 232 "getopt.m"
                                      if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 5579 "getopt.c"
                                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                                      else
#line 5583 "getopt.c"
                                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                  }
#line 232 "getopt.m"
                else
#line 232 "getopt.m"
                  if (((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 232 "getopt.m"
                    {
#line 232 "getopt.m"
                      MR_Integer mercury__getopt__V_146_146 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

#line 232 "getopt.m"
                      if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 5598 "getopt.c"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                      else
#line 232 "getopt.m"
                        if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 5604 "getopt.c"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                        else
#line 232 "getopt.m"
                          if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 5610 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                          else
#line 232 "getopt.m"
                            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5616 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                            else
#line 232 "getopt.m"
                              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 5622 "getopt.c"
                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                              else
#line 232 "getopt.m"
                                if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5628 "getopt.c"
                                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                                else
#line 232 "getopt.m"
                                  if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 232 "getopt.m"
                                    {
#line 232 "getopt.m"
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
#line 232 "getopt.m"
                                    }
#line 232 "getopt.m"
                                  else
#line 232 "getopt.m"
                                    if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 5667 "getopt.c"
                                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                                    else
#line 232 "getopt.m"
                                      if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5673 "getopt.c"
                                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                                      else
#line 232 "getopt.m"
                                        if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 5679 "getopt.c"
                                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                                        else
#line 5683 "getopt.c"
                                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                    }
#line 232 "getopt.m"
                  else
#line 232 "getopt.m"
                    if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 232 "getopt.m"
                      {
#line 232 "getopt.m"
                        MR_Word mercury__getopt__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));

#line 232 "getopt.m"
                        if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 5698 "getopt.c"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                        else
#line 232 "getopt.m"
                          if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 5704 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                          else
#line 232 "getopt.m"
                            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 5710 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                            else
#line 232 "getopt.m"
                              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5716 "getopt.c"
                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                              else
#line 232 "getopt.m"
                                if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 5722 "getopt.c"
                                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                                else
#line 232 "getopt.m"
                                  if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5728 "getopt.c"
                                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                                  else
#line 232 "getopt.m"
                                    if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5734 "getopt.c"
                                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                                    else
#line 232 "getopt.m"
                                      if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 232 "getopt.m"
                                        {
#line 232 "getopt.m"
                                          MR_Word mercury__getopt__TypeInfo_138_138 = (MR_Word) &mercury__getopt_scalar_common_1[0];
#line 232 "getopt.m"
                                          MR_Word mercury__getopt__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));

#line 232 "getopt.m"
                                          {
#line 232 "getopt.m"
                                            mercury__builtin__compare_3_p_0(mercury__getopt__TypeInfo_138_138, mercury__getopt__HeadVar__1_1, ((MR_Box) (mercury__getopt__V_144_144)), ((MR_Box) (mercury__getopt__V_100_100)));
#line 232 "getopt.m"
                                            return;
                                          }
#line 232 "getopt.m"
                                        }
#line 232 "getopt.m"
                                      else
#line 232 "getopt.m"
                                        if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5760 "getopt.c"
                                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                                        else
#line 232 "getopt.m"
                                          if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 5766 "getopt.c"
                                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                                          else
#line 5770 "getopt.c"
                                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                      }
#line 232 "getopt.m"
                    else
#line 232 "getopt.m"
                      if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 232 "getopt.m"
                        {
#line 232 "getopt.m"
                          MR_Word mercury__getopt__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));

#line 232 "getopt.m"
                          if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 5785 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                          else
#line 232 "getopt.m"
                            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 5791 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                            else
#line 232 "getopt.m"
                              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 5797 "getopt.c"
                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                              else
#line 232 "getopt.m"
                                if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5803 "getopt.c"
                                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                                else
#line 232 "getopt.m"
                                  if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 5809 "getopt.c"
                                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                                  else
#line 232 "getopt.m"
                                    if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5815 "getopt.c"
                                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                                    else
#line 232 "getopt.m"
                                      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5821 "getopt.c"
                                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                                      else
#line 232 "getopt.m"
                                        if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 5827 "getopt.c"
                                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                                        else
#line 232 "getopt.m"
                                          if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 232 "getopt.m"
                                            {
#line 232 "getopt.m"
                                              MR_Word mercury__getopt__TypeInfo_140_140 = (MR_Word) &mercury__getopt_scalar_common_1[2];
#line 232 "getopt.m"
                                              MR_Word mercury__getopt__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));

#line 232 "getopt.m"
                                              {
#line 232 "getopt.m"
                                                mercury__builtin__compare_3_p_0(mercury__getopt__TypeInfo_140_140, mercury__getopt__HeadVar__1_1, ((MR_Box) (mercury__getopt__V_147_147)), ((MR_Box) (mercury__getopt__V_62_62)));
#line 232 "getopt.m"
                                                return;
                                              }
#line 232 "getopt.m"
                                            }
#line 232 "getopt.m"
                                          else
#line 232 "getopt.m"
                                            if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 5853 "getopt.c"
                                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                                            else
#line 5857 "getopt.c"
                                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                        }
#line 232 "getopt.m"
                      else
#line 232 "getopt.m"
                        if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 232 "getopt.m"
                          {
#line 232 "getopt.m"
                            MR_Word mercury__getopt__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));

#line 232 "getopt.m"
                            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 5872 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                            else
#line 232 "getopt.m"
                              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 5878 "getopt.c"
                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                              else
#line 232 "getopt.m"
                                if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 5884 "getopt.c"
                                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                                else
#line 232 "getopt.m"
                                  if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5890 "getopt.c"
                                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                                  else
#line 232 "getopt.m"
                                    if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 5896 "getopt.c"
                                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                                    else
#line 232 "getopt.m"
                                      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5902 "getopt.c"
                                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                                      else
#line 232 "getopt.m"
                                        if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5908 "getopt.c"
                                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                                        else
#line 232 "getopt.m"
                                          if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 5914 "getopt.c"
                                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                                          else
#line 232 "getopt.m"
                                            if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5920 "getopt.c"
                                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                                            else
#line 232 "getopt.m"
                                              if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 232 "getopt.m"
                                                {
#line 232 "getopt.m"
                                                  MR_Word mercury__getopt__TypeInfo_139_139 = (MR_Word) &mercury__getopt_scalar_common_1[1];
#line 232 "getopt.m"
                                                  MR_Word mercury__getopt__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));

#line 232 "getopt.m"
                                                  {
#line 232 "getopt.m"
                                                    mercury__builtin__compare_3_p_0(mercury__getopt__TypeInfo_139_139, mercury__getopt__HeadVar__1_1, ((MR_Box) (mercury__getopt__V_148_148)), ((MR_Box) (mercury__getopt__V_81_81)));
#line 232 "getopt.m"
                                                    return;
                                                  }
#line 232 "getopt.m"
                                                }
#line 232 "getopt.m"
                                              else
#line 5944 "getopt.c"
                                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                          }
#line 232 "getopt.m"
                        else
#line 232 "getopt.m"
                          {
#line 232 "getopt.m"
                            MR_String mercury__getopt__V_149_149 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));

#line 232 "getopt.m"
                            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 5957 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                            else
#line 232 "getopt.m"
                              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 5963 "getopt.c"
                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                              else
#line 232 "getopt.m"
                                if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 5969 "getopt.c"
                                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                                else
#line 232 "getopt.m"
                                  if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5975 "getopt.c"
                                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                                  else
#line 232 "getopt.m"
                                    if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 5981 "getopt.c"
                                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                                    else
#line 232 "getopt.m"
                                      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5987 "getopt.c"
                                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                                      else
#line 232 "getopt.m"
                                        if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5993 "getopt.c"
                                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 232 "getopt.m"
                                        else
#line 232 "getopt.m"
                                          if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 5999 "getopt.c"
                                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                                          else
#line 232 "getopt.m"
                                            if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6005 "getopt.c"
                                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                                            else
#line 232 "getopt.m"
                                              if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6011 "getopt.c"
                                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 232 "getopt.m"
                                              else
#line 232 "getopt.m"
                                                {
#line 232 "getopt.m"
                                                  MR_String mercury__getopt__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
#line 232 "getopt.m"
                                                  MR_Integer mercury__getopt__Res_7_161;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__getopt____Compare____option_data_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt__V_149_149 ;
	S2 =  mercury__getopt__V_43_43 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6037 "getopt.c"

		;}
#undef MR_PROC_LABEL
	 mercury__getopt__Res_7_161  = Res;
#line 130 "private_builtin.opt"
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
#line 232 "getopt.m"
                                                }
#line 232 "getopt.m"
                          }
#line 232 "getopt.m"
  }
#line 232 "getopt.m"
}

#line 232 "getopt.m"
MR_bool MR_CALL 
mercury__getopt____Unify____option_data_0_0(
#line 232 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 232 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2)
#line 232 "getopt.m"
{
#line 232 "getopt.m"
  {
#line 232 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 232 "getopt.m"
    MR_Integer mercury__getopt__CastX_25 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 232 "getopt.m"
    MR_Integer mercury__getopt__CastY_26 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 232 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_25 == mercury__getopt__CastY_26);
#line 232 "getopt.m"
    if (mercury__getopt__succeeded)
#line 232 "getopt.m"
      mercury__getopt__succeeded = MR_TRUE;
#line 232 "getopt.m"
    else
#line 232 "getopt.m"
      if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 232 "getopt.m"
        {
#line 232 "getopt.m"
          MR_Integer mercury__getopt__CastX_17 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 232 "getopt.m"
          MR_Integer mercury__getopt__CastY_18 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 232 "getopt.m"
          mercury__getopt__succeeded = (mercury__getopt__CastY_18 == mercury__getopt__CastX_17);
#line 232 "getopt.m"
        }
#line 232 "getopt.m"
      else
#line 232 "getopt.m"
        if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 232 "getopt.m"
          {
#line 232 "getopt.m"
            MR_Integer mercury__getopt__CastX_19 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 232 "getopt.m"
            MR_Integer mercury__getopt__CastY_20 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 232 "getopt.m"
            mercury__getopt__succeeded = (mercury__getopt__CastY_20 == mercury__getopt__CastX_19);
#line 232 "getopt.m"
          }
#line 232 "getopt.m"
        else
#line 232 "getopt.m"
          if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 232 "getopt.m"
            {
#line 232 "getopt.m"
              MR_Integer mercury__getopt__CastX_23 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 232 "getopt.m"
              MR_Integer mercury__getopt__CastY_24 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 232 "getopt.m"
              mercury__getopt__succeeded = (mercury__getopt__CastY_24 == mercury__getopt__CastX_23);
#line 232 "getopt.m"
            }
#line 232 "getopt.m"
          else
#line 232 "getopt.m"
            if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 232 "getopt.m"
              {
#line 232 "getopt.m"
                MR_Integer mercury__getopt__CastX_15 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 232 "getopt.m"
                MR_Integer mercury__getopt__CastY_16 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 232 "getopt.m"
                mercury__getopt__succeeded = (mercury__getopt__CastY_16 == mercury__getopt__CastX_15);
#line 232 "getopt.m"
              }
#line 232 "getopt.m"
            else
#line 232 "getopt.m"
              if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 232 "getopt.m"
                {
#line 232 "getopt.m"
                  MR_Integer mercury__getopt__CastX_21 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 232 "getopt.m"
                  MR_Integer mercury__getopt__CastY_22 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 232 "getopt.m"
                  mercury__getopt__succeeded = (mercury__getopt__CastY_22 == mercury__getopt__CastX_21);
#line 232 "getopt.m"
                }
#line 232 "getopt.m"
              else
#line 232 "getopt.m"
                if (((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 232 "getopt.m"
                  {
#line 232 "getopt.m"
                    MR_Word mercury__getopt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 232 "getopt.m"
                    MR_Word mercury__getopt__V_4_4;

#line 232 "getopt.m"
                    mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 232 "getopt.m"
                    if (mercury__getopt__succeeded)
#line 232 "getopt.m"
                      {
#line 232 "getopt.m"
                        mercury__getopt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 6193 "getopt.c"
                        mercury__getopt__succeeded = (mercury__getopt__V_3_3 == mercury__getopt__V_4_4);
#line 232 "getopt.m"
                      }
#line 232 "getopt.m"
                  }
#line 232 "getopt.m"
                else
#line 232 "getopt.m"
                  if (((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 232 "getopt.m"
                    {
#line 232 "getopt.m"
                      MR_Integer mercury__getopt__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 232 "getopt.m"
                      MR_Integer mercury__getopt__V_6_6;

#line 232 "getopt.m"
                      mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 232 "getopt.m"
                      if (mercury__getopt__succeeded)
#line 232 "getopt.m"
                        {
#line 232 "getopt.m"
                          mercury__getopt__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 6218 "getopt.c"
                          mercury__getopt__succeeded = (mercury__getopt__V_5_5 == mercury__getopt__V_6_6);
#line 232 "getopt.m"
                        }
#line 232 "getopt.m"
                    }
#line 232 "getopt.m"
                  else
#line 232 "getopt.m"
                    if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 232 "getopt.m"
                      {
#line 232 "getopt.m"
                        MR_Word mercury__getopt__TypeInfo_27_27;
#line 232 "getopt.m"
                        MR_Word mercury__getopt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
#line 232 "getopt.m"
                        MR_Word mercury__getopt__V_14_14;

#line 232 "getopt.m"
                        mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 232 "getopt.m"
                        if (mercury__getopt__succeeded)
#line 232 "getopt.m"
                          {
#line 232 "getopt.m"
                            mercury__getopt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 6245 "getopt.c"
                            mercury__getopt__TypeInfo_27_27 = (MR_Word) &mercury__getopt_scalar_common_1[0];
#line 6247 "getopt.c"
                            {
#line 6249 "getopt.c"
                              return mercury__getopt__succeeded = mercury__builtin__unify_2_p_0(mercury__getopt__TypeInfo_27_27, ((MR_Box) (mercury__getopt__V_13_13)), ((MR_Box) (mercury__getopt__V_14_14)));
                            }
#line 232 "getopt.m"
                          }
#line 232 "getopt.m"
                      }
#line 232 "getopt.m"
                    else
#line 232 "getopt.m"
                      if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 232 "getopt.m"
                        {
#line 232 "getopt.m"
                          MR_Word mercury__getopt__TypeInfo_28_28;
#line 232 "getopt.m"
                          MR_Word mercury__getopt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
#line 232 "getopt.m"
                          MR_Word mercury__getopt__V_10_10;

#line 232 "getopt.m"
                          mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 232 "getopt.m"
                          if (mercury__getopt__succeeded)
#line 232 "getopt.m"
                            {
#line 232 "getopt.m"
                              mercury__getopt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 6277 "getopt.c"
                              mercury__getopt__TypeInfo_28_28 = (MR_Word) &mercury__getopt_scalar_common_1[2];
#line 6279 "getopt.c"
                              {
#line 6281 "getopt.c"
                                return mercury__getopt__succeeded = mercury__builtin__unify_2_p_0(mercury__getopt__TypeInfo_28_28, ((MR_Box) (mercury__getopt__V_9_9)), ((MR_Box) (mercury__getopt__V_10_10)));
                              }
#line 232 "getopt.m"
                            }
#line 232 "getopt.m"
                        }
#line 232 "getopt.m"
                      else
#line 232 "getopt.m"
                        if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 232 "getopt.m"
                          {
#line 232 "getopt.m"
                            MR_Word mercury__getopt__TypeInfo_29_29;
#line 232 "getopt.m"
                            MR_Word mercury__getopt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
#line 232 "getopt.m"
                            MR_Word mercury__getopt__V_12_12;

#line 232 "getopt.m"
                            mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 232 "getopt.m"
                            if (mercury__getopt__succeeded)
#line 232 "getopt.m"
                              {
#line 232 "getopt.m"
                                mercury__getopt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 6309 "getopt.c"
                                mercury__getopt__TypeInfo_29_29 = (MR_Word) &mercury__getopt_scalar_common_1[1];
#line 6311 "getopt.c"
                                {
#line 6313 "getopt.c"
                                  return mercury__getopt__succeeded = mercury__builtin__unify_2_p_0(mercury__getopt__TypeInfo_29_29, ((MR_Box) (mercury__getopt__V_11_11)), ((MR_Box) (mercury__getopt__V_12_12)));
                                }
#line 232 "getopt.m"
                              }
#line 232 "getopt.m"
                          }
#line 232 "getopt.m"
                        else
#line 232 "getopt.m"
                          {
#line 232 "getopt.m"
                            MR_String mercury__getopt__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
#line 232 "getopt.m"
                            MR_String mercury__getopt__V_8_8;

#line 232 "getopt.m"
                            mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 232 "getopt.m"
                            if (mercury__getopt__succeeded)
#line 232 "getopt.m"
                              {
#line 232 "getopt.m"
                                mercury__getopt__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 6337 "getopt.c"
                                mercury__getopt__succeeded = (strcmp(mercury__getopt__V_7_7, mercury__getopt__V_8_8) == 0);
#line 232 "getopt.m"
                              }
#line 232 "getopt.m"
                          }
#line 232 "getopt.m"
    return mercury__getopt__succeeded;
#line 232 "getopt.m"
  }
#line 232 "getopt.m"
}

#line 254 "getopt.m"
void MR_CALL 
mercury__getopt____Compare____maybe_option_table_1_0(
#line 254 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_14,
#line 254 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__1_1,
#line 254 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2,
#line 254 "getopt.m"
  MR_Word mercury__getopt__HeadVar__3_3)
#line 254 "getopt.m"
{
#line 254 "getopt.m"
  {
#line 254 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 254 "getopt.m"
    MR_Integer mercury__getopt__CastX_12 = (MR_Integer) mercury__getopt__HeadVar__2_2;
#line 254 "getopt.m"
    MR_Integer mercury__getopt__CastY_13 = (MR_Integer) mercury__getopt__HeadVar__3_3;

#line 254 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_12 == mercury__getopt__CastY_13);
#line 254 "getopt.m"
    if (mercury__getopt__succeeded)
#line 6376 "getopt.c"
      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 254 "getopt.m"
    else
#line 254 "getopt.m"
      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 254 "getopt.m"
        {
#line 254 "getopt.m"
          MR_String mercury__getopt__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

#line 254 "getopt.m"
          if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 254 "getopt.m"
            {
#line 254 "getopt.m"
              MR_String mercury__getopt__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
#line 254 "getopt.m"
              MR_Integer mercury__getopt__Res_7_24;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__getopt____Compare____maybe_option_table_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt__V_19_19 ;
	S2 =  mercury__getopt__V_11_11 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6411 "getopt.c"

		;}
#undef MR_PROC_LABEL
	 mercury__getopt__Res_7_24  = Res;
#line 130 "private_builtin.opt"
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
#line 254 "getopt.m"
            }
#line 254 "getopt.m"
          else
#line 6444 "getopt.c"
            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 254 "getopt.m"
        }
#line 254 "getopt.m"
      else
#line 254 "getopt.m"
        {
#line 254 "getopt.m"
          MR_Word mercury__getopt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

#line 254 "getopt.m"
          if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6457 "getopt.c"
            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 254 "getopt.m"
          else
#line 254 "getopt.m"
            {
#line 254 "getopt.m"
              MR_Word mercury__getopt__TypeCtorInfo_16_16 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 254 "getopt.m"
              MR_Word mercury__getopt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));

#line 254 "getopt.m"
              {
#line 254 "getopt.m"
                mercury__tree234____Compare____tree234_2_0(mercury__getopt__TypeInfo_for_OptionType_14, mercury__getopt__TypeCtorInfo_16_16, mercury__getopt__HeadVar__1_1, mercury__getopt__V_20_20, mercury__getopt__V_5_5);
#line 254 "getopt.m"
                return;
              }
#line 254 "getopt.m"
            }
#line 254 "getopt.m"
        }
#line 254 "getopt.m"
  }
#line 254 "getopt.m"
}

#line 254 "getopt.m"
MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_table_1_0(
#line 254 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_9,
#line 254 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 254 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2)
#line 254 "getopt.m"
{
#line 254 "getopt.m"
  {
#line 254 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 254 "getopt.m"
    MR_Integer mercury__getopt__CastX_7 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 254 "getopt.m"
    MR_Integer mercury__getopt__CastY_8 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 254 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_7 == mercury__getopt__CastY_8);
#line 254 "getopt.m"
    if (mercury__getopt__succeeded)
#line 254 "getopt.m"
      mercury__getopt__succeeded = MR_TRUE;
#line 254 "getopt.m"
    else
#line 254 "getopt.m"
      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 254 "getopt.m"
        {
#line 254 "getopt.m"
          MR_String mercury__getopt__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 254 "getopt.m"
          MR_String mercury__getopt__V_6_6;

#line 254 "getopt.m"
          mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 254 "getopt.m"
          if (mercury__getopt__succeeded)
#line 254 "getopt.m"
            {
#line 254 "getopt.m"
              mercury__getopt__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 6529 "getopt.c"
              mercury__getopt__succeeded = (strcmp(mercury__getopt__V_5_5, mercury__getopt__V_6_6) == 0);
#line 254 "getopt.m"
            }
#line 254 "getopt.m"
        }
#line 254 "getopt.m"
      else
#line 254 "getopt.m"
        {
#line 254 "getopt.m"
          MR_Word mercury__getopt__TypeCtorInfo_10_10;
#line 254 "getopt.m"
          MR_Word mercury__getopt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 254 "getopt.m"
          MR_Word mercury__getopt__V_4_4;

#line 254 "getopt.m"
          mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 254 "getopt.m"
          if (mercury__getopt__succeeded)
#line 254 "getopt.m"
            {
#line 254 "getopt.m"
              mercury__getopt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 6554 "getopt.c"
              mercury__getopt__TypeCtorInfo_10_10 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 6556 "getopt.c"
              {
#line 6558 "getopt.c"
                return mercury__getopt__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__getopt__TypeInfo_for_OptionType_9, mercury__getopt__TypeCtorInfo_10_10, mercury__getopt__V_3_3, mercury__getopt__V_4_4);
              }
#line 254 "getopt.m"
            }
#line 254 "getopt.m"
        }
#line 254 "getopt.m"
    return mercury__getopt__succeeded;
#line 254 "getopt.m"
  }
#line 254 "getopt.m"
}

#line 869 "getopt.m"
static void MR_CALL 
mercury__getopt__process_special_8_p_0(
#line 869 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_51,
#line 869 "getopt.m"
  MR_String mercury__getopt__Option_9,
#line 869 "getopt.m"
  MR_Box mercury__getopt__Flag_10,
#line 869 "getopt.m"
  MR_Word mercury__getopt__OptionData_11,
#line 869 "getopt.m"
  MR_Word mercury__getopt__OptionOps_12,
#line 869 "getopt.m"
  MR_Word mercury__getopt__OptionTable0_13,
#line 869 "getopt.m"
  MR_Word * mercury__getopt__Result_14,
#line 869 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_22,
#line 869 "getopt.m"
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_23)
#line 869 "getopt.m"
{
#line 875 "getopt.m"
  {
#line 875 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 875 "getopt.m"
    MR_Word mercury__getopt__MaybeHandler_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_12, (MR_Integer) 2)));
#line 876 "getopt.m"
    MR_Word mercury__getopt__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_12, (MR_Integer) 0)));
#line 876 "getopt.m"
    MR_Word mercury__getopt__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_12, (MR_Integer) 1)));

#line 888 "getopt.m"
    if ((mercury__getopt__MaybeHandler_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 902 "getopt.m"
      {
#line 902 "getopt.m"
        MR_Word mercury__getopt__V_24_24;
#line 902 "getopt.m"
        MR_Word mercury__getopt__V_26_26;
#line 902 "getopt.m"
        MR_Word mercury__getopt__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_1[10]);
#line 902 "getopt.m"
        MR_Word mercury__getopt__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 902 "getopt.m"
        MR_String mercury__getopt__ErrorMsg_48;

#line 903 "getopt.m"
        {
#line 903 "getopt.m"
          mercury__getopt__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 903 "getopt.m"
          MR_hl_field(MR_mktag(1), mercury__getopt__V_26_26, 0) = ((MR_Box) (mercury__getopt__Option_9));
#line 903 "getopt.m"
          MR_hl_field(MR_mktag(1), mercury__getopt__V_26_26, 1) = ((MR_Box) (mercury__getopt__V_27_27));
#line 903 "getopt.m"
        }
#line 903 "getopt.m"
        {
#line 903 "getopt.m"
          mercury__getopt__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 903 "getopt.m"
          MR_hl_field(MR_mktag(1), mercury__getopt__V_24_24, 0) = ((MR_Box) ((MR_String) "option \140"));
#line 903 "getopt.m"
          MR_hl_field(MR_mktag(1), mercury__getopt__V_24_24, 1) = ((MR_Box) (mercury__getopt__V_26_26));
#line 903 "getopt.m"
        }
#line 806 "string.opt"
        {
#line 806 "string.opt"
          mercury__getopt__ErrorMsg_48 = mercury__string__append_list_1_f_0(mercury__getopt__V_24_24);
        }
#line 905 "getopt.m"
        {
#line 905 "getopt.m"
          MR_Word base;
#line 905 "getopt.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 905 "getopt.m"
          *mercury__getopt__Result_14 = base;
#line 905 "getopt.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__ErrorMsg_48));
#line 905 "getopt.m"
        }
#line 905 "getopt.m"
        *mercury__getopt__STATE_VARIABLE_OptionsSet_23 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_22;
#line 902 "getopt.m"
      }
#line 888 "getopt.m"
    else
#line 888 "getopt.m"
      if (((MR_tag((MR_Word) mercury__getopt__MaybeHandler_16)) == (MR_mktag((MR_Integer) 1))))
#line 878 "getopt.m"
        {
#line 878 "getopt.m"
          MR_Word mercury__getopt__Handler_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__MaybeHandler_16, (MR_Integer) 0)));
#line 883 "getopt.m"
          MR_Word mercury__getopt__Result0_18;
#line 880 "getopt.m"
          MR_bool MR_CALL (* mercury__getopt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt__Handler_17, (MR_Integer) 1)));
#line 880 "getopt.m"
          MR_Box mercury__getopt__conv1_Result0_18;

#line 880 "getopt.m"
          {
#line 880 "getopt.m"
            mercury__getopt__succeeded = mercury__getopt__func_0(((MR_Box) mercury__getopt__Handler_17), mercury__getopt__Flag_10, ((MR_Box) (mercury__getopt__OptionData_11)), ((MR_Box) (mercury__getopt__OptionTable0_13)), &mercury__getopt__conv1_Result0_18);
          }
#line 880 "getopt.m"
          if (mercury__getopt__succeeded)
#line 880 "getopt.m"
            {
#line 880 "getopt.m"
              mercury__getopt__Result0_18 = ((MR_Word) mercury__getopt__conv1_Result0_18);
#line 880 "getopt.m"
              mercury__getopt__succeeded = MR_TRUE;
#line 880 "getopt.m"
            }
#line 883 "getopt.m"
          if (mercury__getopt__succeeded)
#line 882 "getopt.m"
            *mercury__getopt__Result_14 = mercury__getopt__Result0_18;
#line 883 "getopt.m"
          else
#line 885 "getopt.m"
            {
#line 885 "getopt.m"
              MR_String mercury__getopt__ErrorMsg_19;
#line 885 "getopt.m"
              MR_Word mercury__getopt__V_37_37;
#line 885 "getopt.m"
              MR_Word mercury__getopt__V_39_39;
#line 885 "getopt.m"
              MR_Word mercury__getopt__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_1[11]);
#line 885 "getopt.m"
              MR_Word mercury__getopt__V_42_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 884 "getopt.m"
              {
#line 884 "getopt.m"
                mercury__getopt__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 884 "getopt.m"
                MR_hl_field(MR_mktag(1), mercury__getopt__V_39_39, 0) = ((MR_Box) (mercury__getopt__Option_9));
#line 884 "getopt.m"
                MR_hl_field(MR_mktag(1), mercury__getopt__V_39_39, 1) = ((MR_Box) (mercury__getopt__V_40_40));
#line 884 "getopt.m"
              }
#line 884 "getopt.m"
              {
#line 884 "getopt.m"
                mercury__getopt__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 884 "getopt.m"
                MR_hl_field(MR_mktag(1), mercury__getopt__V_37_37, 0) = ((MR_Box) ((MR_String) "the handler of option \140"));
#line 884 "getopt.m"
                MR_hl_field(MR_mktag(1), mercury__getopt__V_37_37, 1) = ((MR_Box) (mercury__getopt__V_39_39));
#line 884 "getopt.m"
              }
#line 806 "string.opt"
              {
#line 806 "string.opt"
                mercury__getopt__ErrorMsg_19 = mercury__string__append_list_1_f_0(mercury__getopt__V_37_37);
              }
#line 886 "getopt.m"
              {
#line 886 "getopt.m"
                MR_Word base;
#line 886 "getopt.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 886 "getopt.m"
                *mercury__getopt__Result_14 = base;
#line 886 "getopt.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__ErrorMsg_19));
#line 886 "getopt.m"
              }
#line 885 "getopt.m"
            }
#line 886 "getopt.m"
          *mercury__getopt__STATE_VARIABLE_OptionsSet_23 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_22;
#line 878 "getopt.m"
        }
#line 888 "getopt.m"
      else
#line 889 "getopt.m"
        {
#line 889 "getopt.m"
          MR_Word mercury__getopt__TrackHandler_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__MaybeHandler_16, (MR_Integer) 0)));
#line 896 "getopt.m"
          MR_Word mercury__getopt__NewOptionsSet_21;
#line 896 "getopt.m"
          MR_Word mercury__getopt__Result0_44;
#line 891 "getopt.m"
          MR_bool MR_CALL (* mercury__getopt__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt__TrackHandler_20, (MR_Integer) 1)));
#line 891 "getopt.m"
          MR_Box mercury__getopt__conv4_Result0_44;
#line 891 "getopt.m"
          MR_Box mercury__getopt__conv3_NewOptionsSet_21;

#line 891 "getopt.m"
          {
#line 891 "getopt.m"
            mercury__getopt__succeeded = mercury__getopt__func_2(((MR_Box) mercury__getopt__TrackHandler_20), mercury__getopt__Flag_10, ((MR_Box) (mercury__getopt__OptionData_11)), ((MR_Box) (mercury__getopt__OptionTable0_13)), &mercury__getopt__conv4_Result0_44, &mercury__getopt__conv3_NewOptionsSet_21);
          }
#line 891 "getopt.m"
          if (mercury__getopt__succeeded)
#line 891 "getopt.m"
            {
#line 891 "getopt.m"
              mercury__getopt__Result0_44 = ((MR_Word) mercury__getopt__conv4_Result0_44);
#line 891 "getopt.m"
              mercury__getopt__NewOptionsSet_21 = ((MR_Word) mercury__getopt__conv3_NewOptionsSet_21);
#line 891 "getopt.m"
              mercury__getopt__succeeded = MR_TRUE;
#line 891 "getopt.m"
            }
#line 896 "getopt.m"
          if (mercury__getopt__succeeded)
#line 894 "getopt.m"
            {
#line 894 "getopt.m"
              MR_Word mercury__getopt__Set0_4_59 = (MR_Word) mercury__getopt__NewOptionsSet_21;
#line 894 "getopt.m"
              MR_Word mercury__getopt__Set1_5_60 = (MR_Word) mercury__getopt__STATE_VARIABLE_OptionsSet_0_22;
#line 894 "getopt.m"
              MR_Word mercury__getopt__Set_6_61;

#line 101 "set_ordlist.opt"
              {
#line 101 "set_ordlist.opt"
                mercury__list__merge_and_remove_dups_3_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__Set0_4_59, mercury__getopt__Set1_5_60, &mercury__getopt__Set_6_61);
              }
#line 100 "set_ordlist.opt"
              *mercury__getopt__STATE_VARIABLE_OptionsSet_23 = (MR_Word) mercury__getopt__Set_6_61;
#line 895 "getopt.m"
              *mercury__getopt__Result_14 = mercury__getopt__Result0_44;
#line 894 "getopt.m"
            }
#line 896 "getopt.m"
          else
#line 898 "getopt.m"
            {
#line 898 "getopt.m"
              MR_Word mercury__getopt__V_31_31;
#line 898 "getopt.m"
              MR_Word mercury__getopt__V_33_33;
#line 898 "getopt.m"
              MR_Word mercury__getopt__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_1[11]);
#line 898 "getopt.m"
              MR_Word mercury__getopt__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 898 "getopt.m"
              MR_String mercury__getopt__ErrorMsg_43;

#line 897 "getopt.m"
              {
#line 897 "getopt.m"
                mercury__getopt__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 897 "getopt.m"
                MR_hl_field(MR_mktag(1), mercury__getopt__V_33_33, 0) = ((MR_Box) (mercury__getopt__Option_9));
#line 897 "getopt.m"
                MR_hl_field(MR_mktag(1), mercury__getopt__V_33_33, 1) = ((MR_Box) (mercury__getopt__V_34_34));
#line 897 "getopt.m"
              }
#line 897 "getopt.m"
              {
#line 897 "getopt.m"
                mercury__getopt__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 897 "getopt.m"
                MR_hl_field(MR_mktag(1), mercury__getopt__V_31_31, 0) = ((MR_Box) ((MR_String) "the handler of option \140"));
#line 897 "getopt.m"
                MR_hl_field(MR_mktag(1), mercury__getopt__V_31_31, 1) = ((MR_Box) (mercury__getopt__V_33_33));
#line 897 "getopt.m"
              }
#line 806 "string.opt"
              {
#line 806 "string.opt"
                mercury__getopt__ErrorMsg_43 = mercury__string__append_list_1_f_0(mercury__getopt__V_31_31);
              }
#line 899 "getopt.m"
              {
#line 899 "getopt.m"
                MR_Word base;
#line 899 "getopt.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 899 "getopt.m"
                *mercury__getopt__Result_14 = base;
#line 899 "getopt.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__ErrorMsg_43));
#line 899 "getopt.m"
              }
#line 899 "getopt.m"
              *mercury__getopt__STATE_VARIABLE_OptionsSet_23 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_22;
#line 898 "getopt.m"
            }
#line 889 "getopt.m"
        }
#line 875 "getopt.m"
  }
#line 869 "getopt.m"
}

#line 794 "getopt.m"
static void MR_CALL 
mercury__getopt__process_negated_option_7_p_0(
#line 794 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_99,
#line 794 "getopt.m"
  MR_String mercury__getopt__Option_8,
#line 794 "getopt.m"
  MR_Box mercury__getopt__Flag_9,
#line 794 "getopt.m"
  MR_Word mercury__getopt__OptionOps_10,
#line 794 "getopt.m"
  MR_Word mercury__getopt__OptionTable0_11,
#line 794 "getopt.m"
  MR_Word * mercury__getopt__Result_12,
#line 794 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_23,
#line 794 "getopt.m"
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_24)
#line 794 "getopt.m"
{
#line 863 "getopt.m"
  {
#line 863 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 863 "getopt.m"
    MR_Word mercury__getopt__OptionData_14;
#line 801 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_100_100 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 801 "getopt.m"
    MR_Box mercury__getopt__conv0_OptionData_14;

#line 801 "getopt.m"
    {
#line 801 "getopt.m"
      mercury__getopt__succeeded = mercury__map__search_3_p_0(mercury__getopt__TypeInfo_for_OptionType_99, mercury__getopt__TypeCtorInfo_100_100, mercury__getopt__OptionTable0_11, mercury__getopt__Flag_9, &mercury__getopt__conv0_OptionData_14);
    }
#line 801 "getopt.m"
    if (mercury__getopt__succeeded)
#line 801 "getopt.m"
      {
#line 801 "getopt.m"
        mercury__getopt__OptionData_14 = ((MR_Word) mercury__getopt__conv0_OptionData_14);
#line 801 "getopt.m"
        mercury__getopt__succeeded = MR_TRUE;
#line 801 "getopt.m"
      }
#line 863 "getopt.m"
    if (mercury__getopt__succeeded)
#line 807 "getopt.m"
      if ((mercury__getopt__OptionData_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 823 "getopt.m"
        {
#line 823 "getopt.m"
          MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_69_69;
#line 823 "getopt.m"
          MR_Word mercury__getopt__V_70_70;

#line 824 "getopt.m"
          {
#line 824 "getopt.m"
            mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_99, mercury__getopt__Flag_9, mercury__getopt__STATE_VARIABLE_OptionsSet_0_23, &mercury__getopt__STATE_VARIABLE_OptionsSet_69_69);
          }
#line 825 "getopt.m"
          mercury__getopt__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[1]);
#line 825 "getopt.m"
          {
#line 825 "getopt.m"
            mercury__getopt__process_special_8_p_0(mercury__getopt__TypeInfo_for_OptionType_99, mercury__getopt__Option_8, mercury__getopt__Flag_9, mercury__getopt__V_70_70, mercury__getopt__OptionOps_10, mercury__getopt__OptionTable0_11, mercury__getopt__Result_12, mercury__getopt__STATE_VARIABLE_OptionsSet_69_69, mercury__getopt__STATE_VARIABLE_OptionsSet_24);
#line 825 "getopt.m"
            return;
          }
#line 823 "getopt.m"
        }
#line 807 "getopt.m"
      else
#line 807 "getopt.m"
        if ((mercury__getopt__OptionData_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 833 "getopt.m"
          {
#line 833 "getopt.m"
            MR_String mercury__getopt__ErrorMsg_20;
#line 833 "getopt.m"
            MR_Word mercury__getopt__V_57_57;
#line 833 "getopt.m"
            MR_Word mercury__getopt__V_59_59;
#line 833 "getopt.m"
            MR_Word mercury__getopt__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_1[4]);

#line 834 "getopt.m"
            {
#line 834 "getopt.m"
              mercury__getopt__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 834 "getopt.m"
              MR_hl_field(MR_mktag(1), mercury__getopt__V_59_59, 0) = ((MR_Box) (mercury__getopt__Option_8));
#line 834 "getopt.m"
              MR_hl_field(MR_mktag(1), mercury__getopt__V_59_59, 1) = ((MR_Box) (mercury__getopt__V_60_60));
#line 834 "getopt.m"
            }
#line 834 "getopt.m"
            {
#line 834 "getopt.m"
              mercury__getopt__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 834 "getopt.m"
              MR_hl_field(MR_mktag(1), mercury__getopt__V_57_57, 0) = ((MR_Box) ((MR_String) "cannot negate option \140"));
#line 834 "getopt.m"
              MR_hl_field(MR_mktag(1), mercury__getopt__V_57_57, 1) = ((MR_Box) (mercury__getopt__V_59_59));
#line 834 "getopt.m"
            }
#line 834 "getopt.m"
            {
#line 834 "getopt.m"
              mercury__string__append_list_2_p_0(mercury__getopt__V_57_57, &mercury__getopt__ErrorMsg_20);
            }
#line 837 "getopt.m"
            {
#line 837 "getopt.m"
              MR_Word base;
#line 837 "getopt.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 837 "getopt.m"
              *mercury__getopt__Result_12 = base;
#line 837 "getopt.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__ErrorMsg_20));
#line 837 "getopt.m"
            }
#line 837 "getopt.m"
            *mercury__getopt__STATE_VARIABLE_OptionsSet_24 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_23;
#line 833 "getopt.m"
          }
#line 807 "getopt.m"
        else
#line 807 "getopt.m"
          if ((mercury__getopt__OptionData_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 828 "getopt.m"
            {
#line 828 "getopt.m"
              MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_65_65;
#line 828 "getopt.m"
              MR_Word mercury__getopt__V_66_66;
#line 828 "getopt.m"
              MR_Word mercury__getopt__V_68_68;

#line 829 "getopt.m"
              {
#line 829 "getopt.m"
                mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_99, mercury__getopt__Flag_9, mercury__getopt__STATE_VARIABLE_OptionsSet_0_23, &mercury__getopt__STATE_VARIABLE_OptionsSet_65_65);
              }
#line 830 "getopt.m"
              mercury__getopt__V_68_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 830 "getopt.m"
              mercury__getopt__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__getopt_scalar_common_1[5]);
#line 830 "getopt.m"
              {
#line 830 "getopt.m"
                mercury__getopt__process_special_8_p_0(mercury__getopt__TypeInfo_for_OptionType_99, mercury__getopt__Option_8, mercury__getopt__Flag_9, mercury__getopt__V_66_66, mercury__getopt__OptionOps_10, mercury__getopt__OptionTable0_11, mercury__getopt__Result_12, mercury__getopt__STATE_VARIABLE_OptionsSet_65_65, mercury__getopt__STATE_VARIABLE_OptionsSet_24);
#line 830 "getopt.m"
                return;
              }
#line 828 "getopt.m"
            }
#line 807 "getopt.m"
          else
#line 807 "getopt.m"
            if ((mercury__getopt__OptionData_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 857 "getopt.m"
              {
#line 857 "getopt.m"
                MR_Word mercury__getopt__V_25_25;
#line 857 "getopt.m"
                MR_Word mercury__getopt__V_27_27;
#line 857 "getopt.m"
                MR_Word mercury__getopt__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_1[4]);
#line 857 "getopt.m"
                MR_String mercury__getopt__ErrorMsg_97;

#line 858 "getopt.m"
                {
#line 858 "getopt.m"
                  mercury__getopt__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 858 "getopt.m"
                  MR_hl_field(MR_mktag(1), mercury__getopt__V_27_27, 0) = ((MR_Box) (mercury__getopt__Option_8));
#line 858 "getopt.m"
                  MR_hl_field(MR_mktag(1), mercury__getopt__V_27_27, 1) = ((MR_Box) (mercury__getopt__V_28_28));
#line 858 "getopt.m"
                }
#line 858 "getopt.m"
                {
#line 858 "getopt.m"
                  mercury__getopt__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 858 "getopt.m"
                  MR_hl_field(MR_mktag(1), mercury__getopt__V_25_25, 0) = ((MR_Box) ((MR_String) "cannot negate option \140"));
#line 858 "getopt.m"
                  MR_hl_field(MR_mktag(1), mercury__getopt__V_25_25, 1) = ((MR_Box) (mercury__getopt__V_27_27));
#line 858 "getopt.m"
                }
#line 858 "getopt.m"
                {
#line 858 "getopt.m"
                  mercury__string__append_list_2_p_0(mercury__getopt__V_25_25, &mercury__getopt__ErrorMsg_97);
                }
#line 861 "getopt.m"
                {
#line 861 "getopt.m"
                  MR_Word base;
#line 861 "getopt.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 861 "getopt.m"
                  *mercury__getopt__Result_12 = base;
#line 861 "getopt.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__ErrorMsg_97));
#line 861 "getopt.m"
                }
#line 861 "getopt.m"
                *mercury__getopt__STATE_VARIABLE_OptionsSet_24 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_23;
#line 857 "getopt.m"
              }
#line 807 "getopt.m"
            else
#line 807 "getopt.m"
              if ((mercury__getopt__OptionData_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 839 "getopt.m"
                {
#line 839 "getopt.m"
                  MR_Word mercury__getopt__V_49_49;
#line 839 "getopt.m"
                  MR_Word mercury__getopt__V_51_51;
#line 839 "getopt.m"
                  MR_Word mercury__getopt__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_1[4]);
#line 839 "getopt.m"
                  MR_String mercury__getopt__ErrorMsg_94;

#line 840 "getopt.m"
                  {
#line 840 "getopt.m"
                    mercury__getopt__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "getopt.m"
                    MR_hl_field(MR_mktag(1), mercury__getopt__V_51_51, 0) = ((MR_Box) (mercury__getopt__Option_8));
#line 840 "getopt.m"
                    MR_hl_field(MR_mktag(1), mercury__getopt__V_51_51, 1) = ((MR_Box) (mercury__getopt__V_52_52));
#line 840 "getopt.m"
                  }
#line 840 "getopt.m"
                  {
#line 840 "getopt.m"
                    mercury__getopt__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "getopt.m"
                    MR_hl_field(MR_mktag(1), mercury__getopt__V_49_49, 0) = ((MR_Box) ((MR_String) "cannot negate option \140"));
#line 840 "getopt.m"
                    MR_hl_field(MR_mktag(1), mercury__getopt__V_49_49, 1) = ((MR_Box) (mercury__getopt__V_51_51));
#line 840 "getopt.m"
                  }
#line 840 "getopt.m"
                  {
#line 840 "getopt.m"
                    mercury__string__append_list_2_p_0(mercury__getopt__V_49_49, &mercury__getopt__ErrorMsg_94);
                  }
#line 843 "getopt.m"
                  {
#line 843 "getopt.m"
                    MR_Word base;
#line 843 "getopt.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 843 "getopt.m"
                    *mercury__getopt__Result_12 = base;
#line 843 "getopt.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__ErrorMsg_94));
#line 843 "getopt.m"
                  }
#line 843 "getopt.m"
                  *mercury__getopt__STATE_VARIABLE_OptionsSet_24 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_23;
#line 839 "getopt.m"
                }
#line 807 "getopt.m"
              else
#line 807 "getopt.m"
                if (((MR_tag((MR_Word) mercury__getopt__OptionData_14)) == (MR_mktag((MR_Integer) 1))))
#line 803 "getopt.m"
                  {
#line 803 "getopt.m"
                    MR_Word mercury__getopt__TypeCtorInfo_101_101;
#line 803 "getopt.m"
                    MR_Word mercury__getopt__OptionTable_16;
#line 803 "getopt.m"
                    MR_Word mercury__getopt__V_83_83;

#line 804 "getopt.m"
                    {
#line 804 "getopt.m"
                      mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_99, mercury__getopt__Flag_9, mercury__getopt__STATE_VARIABLE_OptionsSet_0_23, mercury__getopt__STATE_VARIABLE_OptionsSet_24);
                    }
#line 805 "getopt.m"
                    mercury__getopt__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[1]);
#line 7166 "getopt.c"
                    mercury__getopt__TypeCtorInfo_101_101 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 805 "getopt.m"
                    {
#line 805 "getopt.m"
                      mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_99, mercury__getopt__TypeCtorInfo_101_101, mercury__getopt__Flag_9, ((MR_Box) (mercury__getopt__V_83_83)), mercury__getopt__OptionTable0_11, &mercury__getopt__OptionTable_16);
                    }
#line 806 "getopt.m"
                    {
#line 806 "getopt.m"
                      MR_Word base;
#line 806 "getopt.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 806 "getopt.m"
                      *mercury__getopt__Result_12 = base;
#line 806 "getopt.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_16));
#line 806 "getopt.m"
                    }
#line 803 "getopt.m"
                  }
#line 807 "getopt.m"
                else
#line 807 "getopt.m"
                  if (((MR_tag((MR_Word) mercury__getopt__OptionData_14)) == (MR_mktag((MR_Integer) 2))))
#line 845 "getopt.m"
                    {
#line 845 "getopt.m"
                      MR_Word mercury__getopt__V_41_41;
#line 845 "getopt.m"
                      MR_Word mercury__getopt__V_43_43;
#line 845 "getopt.m"
                      MR_Word mercury__getopt__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_1[4]);
#line 845 "getopt.m"
                      MR_String mercury__getopt__ErrorMsg_95;

#line 846 "getopt.m"
                      {
#line 846 "getopt.m"
                        mercury__getopt__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 846 "getopt.m"
                        MR_hl_field(MR_mktag(1), mercury__getopt__V_43_43, 0) = ((MR_Box) (mercury__getopt__Option_8));
#line 846 "getopt.m"
                        MR_hl_field(MR_mktag(1), mercury__getopt__V_43_43, 1) = ((MR_Box) (mercury__getopt__V_44_44));
#line 846 "getopt.m"
                      }
#line 846 "getopt.m"
                      {
#line 846 "getopt.m"
                        mercury__getopt__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 846 "getopt.m"
                        MR_hl_field(MR_mktag(1), mercury__getopt__V_41_41, 0) = ((MR_Box) ((MR_String) "cannot negate option \140"));
#line 846 "getopt.m"
                        MR_hl_field(MR_mktag(1), mercury__getopt__V_41_41, 1) = ((MR_Box) (mercury__getopt__V_43_43));
#line 846 "getopt.m"
                      }
#line 846 "getopt.m"
                      {
#line 846 "getopt.m"
                        mercury__string__append_list_2_p_0(mercury__getopt__V_41_41, &mercury__getopt__ErrorMsg_95);
                      }
#line 849 "getopt.m"
                      {
#line 849 "getopt.m"
                        MR_Word base;
#line 849 "getopt.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 849 "getopt.m"
                        *mercury__getopt__Result_12 = base;
#line 849 "getopt.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__ErrorMsg_95));
#line 849 "getopt.m"
                      }
#line 849 "getopt.m"
                      *mercury__getopt__STATE_VARIABLE_OptionsSet_24 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_23;
#line 845 "getopt.m"
                    }
#line 807 "getopt.m"
                  else
#line 807 "getopt.m"
                    if (((((MR_tag((MR_Word) mercury__getopt__OptionData_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_14, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 818 "getopt.m"
                      {
#line 818 "getopt.m"
                        MR_Word mercury__getopt__TypeCtorInfo_104_104;
#line 818 "getopt.m"
                        MR_Word mercury__getopt__V_74_74;
#line 818 "getopt.m"
                        MR_Word mercury__getopt__V_75_75;
#line 818 "getopt.m"
                        MR_Word mercury__getopt__OptionTable_93;

#line 819 "getopt.m"
                        {
#line 819 "getopt.m"
                          mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_99, mercury__getopt__Flag_9, mercury__getopt__STATE_VARIABLE_OptionsSet_0_23, mercury__getopt__STATE_VARIABLE_OptionsSet_24);
                        }
#line 820 "getopt.m"
                        mercury__getopt__V_75_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 820 "getopt.m"
                        mercury__getopt__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__getopt_scalar_common_1[6]);
#line 7267 "getopt.c"
                        mercury__getopt__TypeCtorInfo_104_104 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 820 "getopt.m"
                        {
#line 820 "getopt.m"
                          mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_99, mercury__getopt__TypeCtorInfo_104_104, mercury__getopt__Flag_9, ((MR_Box) (mercury__getopt__V_74_74)), mercury__getopt__OptionTable0_11, &mercury__getopt__OptionTable_93);
                        }
#line 821 "getopt.m"
                        {
#line 821 "getopt.m"
                          MR_Word base;
#line 821 "getopt.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 821 "getopt.m"
                          *mercury__getopt__Result_12 = base;
#line 821 "getopt.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_93));
#line 821 "getopt.m"
                        }
#line 818 "getopt.m"
                      }
#line 807 "getopt.m"
                    else
#line 807 "getopt.m"
                      if (((((MR_tag((MR_Word) mercury__getopt__OptionData_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_14, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 808 "getopt.m"
                        {
#line 808 "getopt.m"
                          MR_Word mercury__getopt__TypeCtorInfo_102_102;
#line 808 "getopt.m"
                          MR_Word mercury__getopt__V_80_80;
#line 808 "getopt.m"
                          MR_Word mercury__getopt__V_81_81;
#line 808 "getopt.m"
                          MR_Word mercury__getopt__OptionTable_91;

#line 809 "getopt.m"
                          {
#line 809 "getopt.m"
                            mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_99, mercury__getopt__Flag_9, mercury__getopt__STATE_VARIABLE_OptionsSet_0_23, mercury__getopt__STATE_VARIABLE_OptionsSet_24);
                          }
#line 810 "getopt.m"
                          mercury__getopt__V_81_81 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 810 "getopt.m"
                          mercury__getopt__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__getopt_scalar_common_1[7]);
#line 7312 "getopt.c"
                          mercury__getopt__TypeCtorInfo_102_102 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 810 "getopt.m"
                          {
#line 810 "getopt.m"
                            mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_99, mercury__getopt__TypeCtorInfo_102_102, mercury__getopt__Flag_9, ((MR_Box) (mercury__getopt__V_80_80)), mercury__getopt__OptionTable0_11, &mercury__getopt__OptionTable_91);
                          }
#line 811 "getopt.m"
                          {
#line 811 "getopt.m"
                            MR_Word base;
#line 811 "getopt.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 811 "getopt.m"
                            *mercury__getopt__Result_12 = base;
#line 811 "getopt.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_91));
#line 811 "getopt.m"
                          }
#line 808 "getopt.m"
                        }
#line 807 "getopt.m"
                      else
#line 807 "getopt.m"
                        if (((((MR_tag((MR_Word) mercury__getopt__OptionData_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_14, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 813 "getopt.m"
                          {
#line 813 "getopt.m"
                            MR_Word mercury__getopt__TypeCtorInfo_103_103;
#line 813 "getopt.m"
                            MR_Word mercury__getopt__V_77_77;
#line 813 "getopt.m"
                            MR_Word mercury__getopt__V_78_78;
#line 813 "getopt.m"
                            MR_Word mercury__getopt__OptionTable_92;

#line 814 "getopt.m"
                            {
#line 814 "getopt.m"
                              mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_99, mercury__getopt__Flag_9, mercury__getopt__STATE_VARIABLE_OptionsSet_0_23, mercury__getopt__STATE_VARIABLE_OptionsSet_24);
                            }
#line 815 "getopt.m"
                            mercury__getopt__V_78_78 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 815 "getopt.m"
                            mercury__getopt__V_77_77 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__getopt_scalar_common_1[8]);
#line 7357 "getopt.c"
                            mercury__getopt__TypeCtorInfo_103_103 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 815 "getopt.m"
                            {
#line 815 "getopt.m"
                              mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_99, mercury__getopt__TypeCtorInfo_103_103, mercury__getopt__Flag_9, ((MR_Box) (mercury__getopt__V_77_77)), mercury__getopt__OptionTable0_11, &mercury__getopt__OptionTable_92);
                            }
#line 816 "getopt.m"
                            {
#line 816 "getopt.m"
                              MR_Word base;
#line 816 "getopt.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 816 "getopt.m"
                              *mercury__getopt__Result_12 = base;
#line 816 "getopt.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_92));
#line 816 "getopt.m"
                            }
#line 813 "getopt.m"
                          }
#line 807 "getopt.m"
                        else
#line 851 "getopt.m"
                          {
#line 851 "getopt.m"
                            MR_Word mercury__getopt__V_33_33;
#line 851 "getopt.m"
                            MR_Word mercury__getopt__V_35_35;
#line 851 "getopt.m"
                            MR_Word mercury__getopt__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_1[4]);
#line 851 "getopt.m"
                            MR_String mercury__getopt__ErrorMsg_96;

#line 852 "getopt.m"
                            {
#line 852 "getopt.m"
                              mercury__getopt__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 852 "getopt.m"
                              MR_hl_field(MR_mktag(1), mercury__getopt__V_35_35, 0) = ((MR_Box) (mercury__getopt__Option_8));
#line 852 "getopt.m"
                              MR_hl_field(MR_mktag(1), mercury__getopt__V_35_35, 1) = ((MR_Box) (mercury__getopt__V_36_36));
#line 852 "getopt.m"
                            }
#line 852 "getopt.m"
                            {
#line 852 "getopt.m"
                              mercury__getopt__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 852 "getopt.m"
                              MR_hl_field(MR_mktag(1), mercury__getopt__V_33_33, 0) = ((MR_Box) ((MR_String) "cannot negate option \140"));
#line 852 "getopt.m"
                              MR_hl_field(MR_mktag(1), mercury__getopt__V_33_33, 1) = ((MR_Box) (mercury__getopt__V_35_35));
#line 852 "getopt.m"
                            }
#line 852 "getopt.m"
                            {
#line 852 "getopt.m"
                              mercury__string__append_list_2_p_0(mercury__getopt__V_33_33, &mercury__getopt__ErrorMsg_96);
                            }
#line 855 "getopt.m"
                            {
#line 855 "getopt.m"
                              MR_Word base;
#line 855 "getopt.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 855 "getopt.m"
                              *mercury__getopt__Result_12 = base;
#line 855 "getopt.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__ErrorMsg_96));
#line 855 "getopt.m"
                            }
#line 855 "getopt.m"
                            *mercury__getopt__STATE_VARIABLE_OptionsSet_24 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_23;
#line 851 "getopt.m"
                          }
#line 863 "getopt.m"
    else
#line 865 "getopt.m"
      {
#line 865 "getopt.m"
        MR_Word mercury__getopt__V_85_85;
#line 865 "getopt.m"
        MR_Word mercury__getopt__V_87_87;
#line 865 "getopt.m"
        MR_Word mercury__getopt__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_1[9]);
#line 865 "getopt.m"
        MR_Word mercury__getopt__V_90_90 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 865 "getopt.m"
        MR_String mercury__getopt__ErrorMsg_98;

#line 864 "getopt.m"
        {
#line 864 "getopt.m"
          mercury__getopt__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 864 "getopt.m"
          MR_hl_field(MR_mktag(1), mercury__getopt__V_87_87, 0) = ((MR_Box) (mercury__getopt__Option_8));
#line 864 "getopt.m"
          MR_hl_field(MR_mktag(1), mercury__getopt__V_87_87, 1) = ((MR_Box) (mercury__getopt__V_88_88));
#line 864 "getopt.m"
        }
#line 864 "getopt.m"
        {
#line 864 "getopt.m"
          mercury__getopt__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 864 "getopt.m"
          MR_hl_field(MR_mktag(1), mercury__getopt__V_85_85, 0) = ((MR_Box) ((MR_String) "unknown type for option \140"));
#line 864 "getopt.m"
          MR_hl_field(MR_mktag(1), mercury__getopt__V_85_85, 1) = ((MR_Box) (mercury__getopt__V_87_87));
#line 864 "getopt.m"
        }
#line 864 "getopt.m"
        {
#line 864 "getopt.m"
          mercury__string__append_list_2_p_0(mercury__getopt__V_85_85, &mercury__getopt__ErrorMsg_98);
        }
#line 866 "getopt.m"
        {
#line 866 "getopt.m"
          MR_Word base;
#line 866 "getopt.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 866 "getopt.m"
          *mercury__getopt__Result_12 = base;
#line 866 "getopt.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__ErrorMsg_98));
#line 866 "getopt.m"
        }
#line 866 "getopt.m"
        *mercury__getopt__STATE_VARIABLE_OptionsSet_24 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_23;
#line 865 "getopt.m"
      }
#line 863 "getopt.m"
  }
#line 794 "getopt.m"
}

#line 651 "getopt.m"
static void MR_CALL 
mercury__getopt__process_option_9_p_0(
#line 651 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_204,
#line 651 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 651 "getopt.m"
  MR_String mercury__getopt__HeadVar__2_2,
#line 651 "getopt.m"
  MR_Box mercury__getopt__Flag_3,
#line 651 "getopt.m"
  MR_Word mercury__getopt__MaybeArg_4,
#line 651 "getopt.m"
  MR_Word mercury__getopt__HeadVar__5_5,
#line 651 "getopt.m"
  MR_Word mercury__getopt__HeadVar__6_6,
#line 651 "getopt.m"
  MR_Word * mercury__getopt__Result_7,
#line 651 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_8,
#line 651 "getopt.m"
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_9)
#line 651 "getopt.m"
{
#line 658 "getopt.m"
  {
#line 658 "getopt.m"
    MR_bool mercury__getopt__succeeded;

#line 658 "getopt.m"
    if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 745 "getopt.m"
      {
#line 745 "getopt.m"
        MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_153_153;

#line 746 "getopt.m"
        {
#line 746 "getopt.m"
          mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt__STATE_VARIABLE_OptionsSet_153_153);
        }
#line 751 "getopt.m"
        if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 752 "getopt.m"
          {
#line 752 "getopt.m"
            MR_Word mercury__getopt__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[0]);

#line 753 "getopt.m"
            {
#line 753 "getopt.m"
              mercury__getopt__process_special_8_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__HeadVar__2_2, mercury__getopt__Flag_3, mercury__getopt__V_154_154, mercury__getopt__HeadVar__5_5, mercury__getopt__HeadVar__6_6, mercury__getopt__Result_7, mercury__getopt__STATE_VARIABLE_OptionsSet_153_153, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
#line 753 "getopt.m"
              return;
            }
#line 752 "getopt.m"
          }
#line 751 "getopt.m"
        else
#line 748 "getopt.m"
          {
#line 748 "getopt.m"
            MR_Word mercury__getopt__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[1]);

#line 749 "getopt.m"
            {
#line 749 "getopt.m"
              mercury__getopt__process_special_8_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__HeadVar__2_2, mercury__getopt__Flag_3, mercury__getopt__V_157_157, mercury__getopt__HeadVar__5_5, mercury__getopt__HeadVar__6_6, mercury__getopt__Result_7, mercury__getopt__STATE_VARIABLE_OptionsSet_153_153, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
#line 749 "getopt.m"
              return;
            }
#line 748 "getopt.m"
          }
#line 745 "getopt.m"
      }
#line 658 "getopt.m"
    else
#line 658 "getopt.m"
      if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 757 "getopt.m"
        {
#line 757 "getopt.m"
          MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_171_171;

#line 758 "getopt.m"
          {
#line 758 "getopt.m"
            mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt__STATE_VARIABLE_OptionsSet_171_171);
          }
#line 767 "getopt.m"
          if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 768 "getopt.m"
            {
#line 769 "getopt.m"
              {
#line 769 "getopt.m"
                mercury__require__error_1_p_0((MR_String) "int_special argument expected in getopt.process_option");
#line 769 "getopt.m"
                return;
              }
#line 768 "getopt.m"
            }
#line 767 "getopt.m"
          else
#line 760 "getopt.m"
            {
#line 760 "getopt.m"
              MR_String mercury__getopt__Arg_167 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__MaybeArg_4, (MR_Integer) 0)));
#line 764 "getopt.m"
              MR_Integer mercury__getopt__IntArg_168;

#line 761 "getopt.m"
              {
#line 761 "getopt.m"
                mercury__getopt__succeeded = mercury__string__to_int_2_p_0(mercury__getopt__Arg_167, &mercury__getopt__IntArg_168);
              }
#line 764 "getopt.m"
              if (mercury__getopt__succeeded)
#line 762 "getopt.m"
                {
#line 762 "getopt.m"
                  MR_Word mercury__getopt__V_173_173;

#line 762 "getopt.m"
                  {
#line 762 "getopt.m"
                    mercury__getopt__V_173_173 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 762 "getopt.m"
                    MR_hl_field(MR_mktag(2), mercury__getopt__V_173_173, 0) = ((MR_Box) (mercury__getopt__IntArg_168));
#line 762 "getopt.m"
                  }
#line 762 "getopt.m"
                  {
#line 762 "getopt.m"
                    mercury__getopt__process_special_8_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__HeadVar__2_2, mercury__getopt__Flag_3, mercury__getopt__V_173_173, mercury__getopt__HeadVar__5_5, mercury__getopt__HeadVar__6_6, mercury__getopt__Result_7, mercury__getopt__STATE_VARIABLE_OptionsSet_171_171, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
#line 762 "getopt.m"
                    return;
                  }
#line 762 "getopt.m"
                }
#line 764 "getopt.m"
              else
#line 765 "getopt.m"
                {
#line 765 "getopt.m"
                  {
#line 765 "getopt.m"
                    mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_p_0(mercury__getopt__HeadVar__2_2, mercury__getopt__Arg_167, mercury__getopt__Result_7);
                  }
#line 765 "getopt.m"
                  *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_171_171;
#line 765 "getopt.m"
                }
#line 760 "getopt.m"
            }
#line 757 "getopt.m"
        }
#line 658 "getopt.m"
      else
#line 658 "getopt.m"
        if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 788 "getopt.m"
          if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 789 "getopt.m"
            {
#line 790 "getopt.m"
              {
#line 790 "getopt.m"
                mercury__require__error_1_p_0((MR_String) "maybe_string_special argument expected in getopt.process_option");
#line 790 "getopt.m"
                return;
              }
#line 789 "getopt.m"
            }
#line 788 "getopt.m"
          else
#line 785 "getopt.m"
            {
#line 785 "getopt.m"
              MR_Word mercury__getopt__V_202_202;

#line 786 "getopt.m"
              {
#line 786 "getopt.m"
                mercury__getopt__V_202_202 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "getopt.m"
                MR_hl_field(MR_mktag(3), mercury__getopt__V_202_202, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 786 "getopt.m"
                MR_hl_field(MR_mktag(3), mercury__getopt__V_202_202, 1) = ((MR_Box) (mercury__getopt__MaybeArg_4));
#line 786 "getopt.m"
              }
#line 786 "getopt.m"
              {
#line 786 "getopt.m"
                mercury__getopt__process_special_8_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__HeadVar__2_2, mercury__getopt__Flag_3, mercury__getopt__V_202_202, mercury__getopt__HeadVar__5_5, mercury__getopt__HeadVar__6_6, mercury__getopt__Result_7, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
#line 786 "getopt.m"
                return;
              }
#line 785 "getopt.m"
            }
#line 658 "getopt.m"
        else
#line 658 "getopt.m"
          if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 734 "getopt.m"
            {
#line 734 "getopt.m"
              MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_139_139;

#line 735 "getopt.m"
              {
#line 735 "getopt.m"
                mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt__STATE_VARIABLE_OptionsSet_139_139);
              }
#line 739 "getopt.m"
              if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 740 "getopt.m"
                {
#line 740 "getopt.m"
                  MR_Word mercury__getopt__V_140_140 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 741 "getopt.m"
                  {
#line 741 "getopt.m"
                    mercury__getopt__process_special_8_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__HeadVar__2_2, mercury__getopt__Flag_3, mercury__getopt__V_140_140, mercury__getopt__HeadVar__5_5, mercury__getopt__HeadVar__6_6, mercury__getopt__Result_7, mercury__getopt__STATE_VARIABLE_OptionsSet_139_139, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
#line 741 "getopt.m"
                    return;
                  }
#line 740 "getopt.m"
                }
#line 739 "getopt.m"
              else
#line 737 "getopt.m"
                {
#line 738 "getopt.m"
                  {
#line 738 "getopt.m"
                    mercury__require__error_1_p_0((MR_String) "no special argument expected in getopt.process_option");
#line 738 "getopt.m"
                    return;
                  }
#line 737 "getopt.m"
                }
#line 734 "getopt.m"
            }
#line 658 "getopt.m"
          else
#line 658 "getopt.m"
            if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 772 "getopt.m"
              {
#line 772 "getopt.m"
                MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_185_185;

#line 773 "getopt.m"
                {
#line 773 "getopt.m"
                  mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt__STATE_VARIABLE_OptionsSet_185_185);
                }
#line 778 "getopt.m"
                if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 779 "getopt.m"
                  {
#line 780 "getopt.m"
                    {
#line 780 "getopt.m"
                      mercury__require__error_1_p_0((MR_String) "string_special argument expected in getopt.process_option");
#line 780 "getopt.m"
                      return;
                    }
#line 779 "getopt.m"
                  }
#line 778 "getopt.m"
                else
#line 775 "getopt.m"
                  {
#line 775 "getopt.m"
                    MR_String mercury__getopt__Arg_182 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__MaybeArg_4, (MR_Integer) 0)));
#line 775 "getopt.m"
                    MR_Word mercury__getopt__V_187_187;

#line 776 "getopt.m"
                    {
#line 776 "getopt.m"
                      mercury__getopt__V_187_187 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 776 "getopt.m"
                      MR_hl_field(MR_mktag(3), mercury__getopt__V_187_187, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 776 "getopt.m"
                      MR_hl_field(MR_mktag(3), mercury__getopt__V_187_187, 1) = ((MR_Box) (mercury__getopt__Arg_182));
#line 776 "getopt.m"
                    }
#line 776 "getopt.m"
                    {
#line 776 "getopt.m"
                      mercury__getopt__process_special_8_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__HeadVar__2_2, mercury__getopt__Flag_3, mercury__getopt__V_187_187, mercury__getopt__HeadVar__5_5, mercury__getopt__HeadVar__6_6, mercury__getopt__Result_7, mercury__getopt__STATE_VARIABLE_OptionsSet_185_185, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
#line 776 "getopt.m"
                      return;
                    }
#line 775 "getopt.m"
                  }
#line 772 "getopt.m"
              }
#line 658 "getopt.m"
            else
#line 658 "getopt.m"
              if (((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 658 "getopt.m"
                {
#line 659 "getopt.m"
                  {
#line 659 "getopt.m"
                    mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
                  }
#line 664 "getopt.m"
                  if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 665 "getopt.m"
                    {
#line 665 "getopt.m"
                      MR_Word mercury__getopt__TypeCtorInfo_206_206 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 665 "getopt.m"
                      MR_Word mercury__getopt__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[0]);
#line 665 "getopt.m"
                      MR_Word mercury__getopt__OptionTable_27;

#line 666 "getopt.m"
                      {
#line 666 "getopt.m"
                        mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__TypeCtorInfo_206_206, mercury__getopt__Flag_3, ((MR_Box) (mercury__getopt__V_23_23)), mercury__getopt__HeadVar__6_6, &mercury__getopt__OptionTable_27);
                      }
#line 667 "getopt.m"
                      {
#line 667 "getopt.m"
                        MR_Word base;
#line 667 "getopt.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 667 "getopt.m"
                        *mercury__getopt__Result_7 = base;
#line 667 "getopt.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_27));
#line 667 "getopt.m"
                      }
#line 665 "getopt.m"
                    }
#line 664 "getopt.m"
                  else
#line 661 "getopt.m"
                    {
#line 661 "getopt.m"
                      MR_Word mercury__getopt__TypeCtorInfo_205_205 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 661 "getopt.m"
                      MR_Word mercury__getopt__OptionTable_19;
#line 661 "getopt.m"
                      MR_Word mercury__getopt__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[1]);

#line 662 "getopt.m"
                      {
#line 662 "getopt.m"
                        mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__TypeCtorInfo_205_205, mercury__getopt__Flag_3, ((MR_Box) (mercury__getopt__V_25_25)), mercury__getopt__HeadVar__6_6, &mercury__getopt__OptionTable_19);
                      }
#line 663 "getopt.m"
                      {
#line 663 "getopt.m"
                        MR_Word base;
#line 663 "getopt.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 663 "getopt.m"
                        *mercury__getopt__Result_7 = base;
#line 663 "getopt.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_19));
#line 663 "getopt.m"
                      }
#line 661 "getopt.m"
                    }
#line 658 "getopt.m"
                }
#line 658 "getopt.m"
              else
#line 658 "getopt.m"
                if (((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 670 "getopt.m"
                  {
#line 671 "getopt.m"
                    {
#line 671 "getopt.m"
                      mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
                    }
#line 680 "getopt.m"
                    if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 681 "getopt.m"
                      {
#line 682 "getopt.m"
                        {
#line 682 "getopt.m"
                          mercury__require__error_1_p_0((MR_String) "integer argument expected in getopt.process_option");
#line 682 "getopt.m"
                          return;
                        }
#line 681 "getopt.m"
                      }
#line 680 "getopt.m"
                    else
#line 673 "getopt.m"
                      {
#line 673 "getopt.m"
                        MR_String mercury__getopt__Arg_36 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__MaybeArg_4, (MR_Integer) 0)));
#line 677 "getopt.m"
                        MR_Integer mercury__getopt__IntArg_37;

#line 674 "getopt.m"
                        {
#line 674 "getopt.m"
                          mercury__getopt__succeeded = mercury__string__to_int_2_p_0(mercury__getopt__Arg_36, &mercury__getopt__IntArg_37);
                        }
#line 677 "getopt.m"
                        if (mercury__getopt__succeeded)
#line 675 "getopt.m"
                          {
#line 675 "getopt.m"
                            MR_Word mercury__getopt__TypeCtorInfo_207_207;
#line 675 "getopt.m"
                            MR_Word mercury__getopt__V_43_43;
#line 675 "getopt.m"
                            MR_Word mercury__getopt__STATE_VARIABLE_OptionTable_44_44;

#line 675 "getopt.m"
                            {
#line 675 "getopt.m"
                              mercury__getopt__V_43_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 675 "getopt.m"
                              MR_hl_field(MR_mktag(2), mercury__getopt__V_43_43, 0) = ((MR_Box) (mercury__getopt__IntArg_37));
#line 675 "getopt.m"
                            }
#line 7926 "getopt.c"
                            mercury__getopt__TypeCtorInfo_207_207 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 675 "getopt.m"
                            {
#line 675 "getopt.m"
                              mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__TypeCtorInfo_207_207, mercury__getopt__Flag_3, ((MR_Box) (mercury__getopt__V_43_43)), mercury__getopt__HeadVar__6_6, &mercury__getopt__STATE_VARIABLE_OptionTable_44_44);
                            }
#line 676 "getopt.m"
                            {
#line 676 "getopt.m"
                              MR_Word base;
#line 676 "getopt.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 676 "getopt.m"
                              *mercury__getopt__Result_7 = base;
#line 676 "getopt.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__STATE_VARIABLE_OptionTable_44_44));
#line 676 "getopt.m"
                            }
#line 675 "getopt.m"
                          }
#line 677 "getopt.m"
                        else
#line 678 "getopt.m"
                          {
#line 678 "getopt.m"
                            mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_p_0(mercury__getopt__HeadVar__2_2, mercury__getopt__Arg_36, mercury__getopt__Result_7);
#line 678 "getopt.m"
                            return;
                          }
#line 673 "getopt.m"
                      }
#line 670 "getopt.m"
                  }
#line 658 "getopt.m"
                else
#line 658 "getopt.m"
                  if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 722 "getopt.m"
                    {
#line 722 "getopt.m"
                      MR_Word mercury__getopt__List0_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));

#line 723 "getopt.m"
                      {
#line 723 "getopt.m"
                        mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
                      }
#line 729 "getopt.m"
                      if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 730 "getopt.m"
                        {
#line 731 "getopt.m"
                          {
#line 731 "getopt.m"
                            mercury__require__error_1_p_0((MR_String) "acumulating argument expected in getopt.process_option");
#line 731 "getopt.m"
                            return;
                          }
#line 730 "getopt.m"
                        }
#line 729 "getopt.m"
                      else
#line 725 "getopt.m"
                        {
#line 725 "getopt.m"
                          MR_Word mercury__getopt__TypeCtorInfo_211_211;
#line 725 "getopt.m"
                          MR_Word mercury__getopt__TypeCtorInfo_212_212;
#line 725 "getopt.m"
                          MR_String mercury__getopt__Arg_116 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__MaybeArg_4, (MR_Integer) 0)));
#line 725 "getopt.m"
                          MR_Word mercury__getopt__List_117;
#line 725 "getopt.m"
                          MR_Word mercury__getopt__V_123_123;
#line 725 "getopt.m"
                          MR_Word mercury__getopt__V_124_124 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 725 "getopt.m"
                          MR_Word mercury__getopt__V_125_125;
#line 725 "getopt.m"
                          MR_Word mercury__getopt__STATE_VARIABLE_OptionTable_126_126;

#line 726 "getopt.m"
                          {
#line 726 "getopt.m"
                            mercury__getopt__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "getopt.m"
                            MR_hl_field(MR_mktag(1), mercury__getopt__V_123_123, 0) = ((MR_Box) (mercury__getopt__Arg_116));
#line 726 "getopt.m"
                            MR_hl_field(MR_mktag(1), mercury__getopt__V_123_123, 1) = ((MR_Box) (mercury__getopt__V_124_124));
#line 726 "getopt.m"
                          }
#line 8018 "getopt.c"
                          mercury__getopt__TypeCtorInfo_211_211 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 726 "getopt.m"
                          {
#line 726 "getopt.m"
                            mercury__list__append_3_p_1(mercury__getopt__TypeCtorInfo_211_211, mercury__getopt__List0_108, mercury__getopt__V_123_123, &mercury__getopt__List_117);
                          }
#line 727 "getopt.m"
                          {
#line 727 "getopt.m"
                            mercury__getopt__V_125_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "getopt.m"
                            MR_hl_field(MR_mktag(3), mercury__getopt__V_125_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 727 "getopt.m"
                            MR_hl_field(MR_mktag(3), mercury__getopt__V_125_125, 1) = ((MR_Box) (mercury__getopt__List_117));
#line 727 "getopt.m"
                          }
#line 8035 "getopt.c"
                          mercury__getopt__TypeCtorInfo_212_212 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 727 "getopt.m"
                          {
#line 727 "getopt.m"
                            mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__TypeCtorInfo_212_212, mercury__getopt__Flag_3, ((MR_Box) (mercury__getopt__V_125_125)), mercury__getopt__HeadVar__6_6, &mercury__getopt__STATE_VARIABLE_OptionTable_126_126);
                          }
#line 728 "getopt.m"
                          {
#line 728 "getopt.m"
                            MR_Word base;
#line 728 "getopt.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 728 "getopt.m"
                            *mercury__getopt__Result_7 = base;
#line 728 "getopt.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__STATE_VARIABLE_OptionTable_126_126));
#line 728 "getopt.m"
                          }
#line 725 "getopt.m"
                        }
#line 722 "getopt.m"
                    }
#line 658 "getopt.m"
                  else
#line 658 "getopt.m"
                    if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 696 "getopt.m"
                      {
#line 697 "getopt.m"
                        {
#line 697 "getopt.m"
                          mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
                        }
#line 706 "getopt.m"
                        if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 707 "getopt.m"
                          {
#line 708 "getopt.m"
                            {
#line 708 "getopt.m"
                              mercury__require__error_1_p_0((MR_String) "integer argument expected in getopt.process_option");
#line 708 "getopt.m"
                              return;
                            }
#line 707 "getopt.m"
                          }
#line 706 "getopt.m"
                        else
#line 699 "getopt.m"
                          {
#line 699 "getopt.m"
                            MR_String mercury__getopt__Arg_75 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__MaybeArg_4, (MR_Integer) 0)));
#line 703 "getopt.m"
                            MR_Integer mercury__getopt__IntArg_76;

#line 700 "getopt.m"
                            {
#line 700 "getopt.m"
                              mercury__getopt__succeeded = mercury__string__to_int_2_p_0(mercury__getopt__Arg_75, &mercury__getopt__IntArg_76);
                            }
#line 703 "getopt.m"
                            if (mercury__getopt__succeeded)
#line 701 "getopt.m"
                              {
#line 701 "getopt.m"
                                MR_Word mercury__getopt__TypeCtorInfo_209_209;
#line 701 "getopt.m"
                                MR_Word mercury__getopt__V_82_82;
#line 701 "getopt.m"
                                MR_Word mercury__getopt__STATE_VARIABLE_OptionTable_83_83;
#line 701 "getopt.m"
                                MR_Word mercury__getopt__V_84_84;

#line 701 "getopt.m"
                                {
#line 701 "getopt.m"
                                  mercury__getopt__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 701 "getopt.m"
                                  MR_hl_field(MR_mktag(1), mercury__getopt__V_84_84, 0) = ((MR_Box) (mercury__getopt__IntArg_76));
#line 701 "getopt.m"
                                }
#line 701 "getopt.m"
                                {
#line 701 "getopt.m"
                                  mercury__getopt__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 701 "getopt.m"
                                  MR_hl_field(MR_mktag(3), mercury__getopt__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 701 "getopt.m"
                                  MR_hl_field(MR_mktag(3), mercury__getopt__V_82_82, 1) = ((MR_Box) (mercury__getopt__V_84_84));
#line 701 "getopt.m"
                                }
#line 8127 "getopt.c"
                                mercury__getopt__TypeCtorInfo_209_209 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 701 "getopt.m"
                                {
#line 701 "getopt.m"
                                  mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__TypeCtorInfo_209_209, mercury__getopt__Flag_3, ((MR_Box) (mercury__getopt__V_82_82)), mercury__getopt__HeadVar__6_6, &mercury__getopt__STATE_VARIABLE_OptionTable_83_83);
                                }
#line 702 "getopt.m"
                                {
#line 702 "getopt.m"
                                  MR_Word base;
#line 702 "getopt.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 702 "getopt.m"
                                  *mercury__getopt__Result_7 = base;
#line 702 "getopt.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__STATE_VARIABLE_OptionTable_83_83));
#line 702 "getopt.m"
                                }
#line 701 "getopt.m"
                              }
#line 703 "getopt.m"
                            else
#line 704 "getopt.m"
                              {
#line 704 "getopt.m"
                                mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_3_p_0(mercury__getopt__HeadVar__2_2, mercury__getopt__Arg_75, mercury__getopt__Result_7);
#line 704 "getopt.m"
                                return;
                              }
#line 699 "getopt.m"
                          }
#line 696 "getopt.m"
                      }
#line 658 "getopt.m"
                    else
#line 658 "getopt.m"
                      if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 711 "getopt.m"
                        {
#line 712 "getopt.m"
                          {
#line 712 "getopt.m"
                            mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
                          }
#line 717 "getopt.m"
                          if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 718 "getopt.m"
                            {
#line 719 "getopt.m"
                              {
#line 719 "getopt.m"
                                mercury__require__error_1_p_0((MR_String) "string argument expected in getopt.process_option");
#line 719 "getopt.m"
                                return;
                              }
#line 718 "getopt.m"
                            }
#line 717 "getopt.m"
                          else
#line 714 "getopt.m"
                            {
#line 714 "getopt.m"
                              MR_Word mercury__getopt__TypeCtorInfo_210_210;
#line 714 "getopt.m"
                              MR_Word mercury__getopt__V_103_103;
#line 714 "getopt.m"
                              MR_Word mercury__getopt__STATE_VARIABLE_OptionTable_104_104;

#line 715 "getopt.m"
                              {
#line 715 "getopt.m"
                                mercury__getopt__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 715 "getopt.m"
                                MR_hl_field(MR_mktag(3), mercury__getopt__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 715 "getopt.m"
                                MR_hl_field(MR_mktag(3), mercury__getopt__V_103_103, 1) = ((MR_Box) (mercury__getopt__MaybeArg_4));
#line 715 "getopt.m"
                              }
#line 8206 "getopt.c"
                              mercury__getopt__TypeCtorInfo_210_210 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 715 "getopt.m"
                              {
#line 715 "getopt.m"
                                mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__TypeCtorInfo_210_210, mercury__getopt__Flag_3, ((MR_Box) (mercury__getopt__V_103_103)), mercury__getopt__HeadVar__6_6, &mercury__getopt__STATE_VARIABLE_OptionTable_104_104);
                              }
#line 716 "getopt.m"
                              {
#line 716 "getopt.m"
                                MR_Word base;
#line 716 "getopt.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 716 "getopt.m"
                                *mercury__getopt__Result_7 = base;
#line 716 "getopt.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__STATE_VARIABLE_OptionTable_104_104));
#line 716 "getopt.m"
                              }
#line 714 "getopt.m"
                            }
#line 711 "getopt.m"
                        }
#line 658 "getopt.m"
                      else
#line 685 "getopt.m"
                        {
#line 686 "getopt.m"
                          {
#line 686 "getopt.m"
                            mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
                          }
#line 691 "getopt.m"
                          if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 692 "getopt.m"
                            {
#line 693 "getopt.m"
                              {
#line 693 "getopt.m"
                                mercury__require__error_1_p_0((MR_String) "string argument expected in getopt.process_option");
#line 693 "getopt.m"
                                return;
                              }
#line 692 "getopt.m"
                            }
#line 691 "getopt.m"
                          else
#line 688 "getopt.m"
                            {
#line 688 "getopt.m"
                              MR_Word mercury__getopt__TypeCtorInfo_208_208;
#line 688 "getopt.m"
                              MR_String mercury__getopt__Arg_57 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__MaybeArg_4, (MR_Integer) 0)));
#line 688 "getopt.m"
                              MR_Word mercury__getopt__V_63_63;
#line 688 "getopt.m"
                              MR_Word mercury__getopt__STATE_VARIABLE_OptionTable_64_64;

#line 689 "getopt.m"
                              {
#line 689 "getopt.m"
                                mercury__getopt__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "getopt.m"
                                MR_hl_field(MR_mktag(3), mercury__getopt__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 689 "getopt.m"
                                MR_hl_field(MR_mktag(3), mercury__getopt__V_63_63, 1) = ((MR_Box) (mercury__getopt__Arg_57));
#line 689 "getopt.m"
                              }
#line 8274 "getopt.c"
                              mercury__getopt__TypeCtorInfo_208_208 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 689 "getopt.m"
                              {
#line 689 "getopt.m"
                                mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__TypeCtorInfo_208_208, mercury__getopt__Flag_3, ((MR_Box) (mercury__getopt__V_63_63)), mercury__getopt__HeadVar__6_6, &mercury__getopt__STATE_VARIABLE_OptionTable_64_64);
                              }
#line 690 "getopt.m"
                              {
#line 690 "getopt.m"
                                MR_Word base;
#line 690 "getopt.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 690 "getopt.m"
                                *mercury__getopt__Result_7 = base;
#line 690 "getopt.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__STATE_VARIABLE_OptionTable_64_64));
#line 690 "getopt.m"
                              }
#line 688 "getopt.m"
                            }
#line 685 "getopt.m"
                        }
#line 658 "getopt.m"
  }
#line 651 "getopt.m"
}

#line 579 "getopt.m"
static void MR_CALL 
mercury__getopt__handle_short_options_10_p_0(
#line 579 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_61,
#line 579 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 579 "getopt.m"
  MR_Word mercury__getopt__OptionOps_2,
#line 579 "getopt.m"
  MR_Word mercury__getopt__HeadVar__3_3,
#line 579 "getopt.m"
  MR_Word * mercury__getopt__Args_4,
#line 579 "getopt.m"
  MR_Word mercury__getopt__HeadVar__5_5,
#line 579 "getopt.m"
  MR_Word * mercury__getopt__OptionArgs_6,
#line 579 "getopt.m"
  MR_Word mercury__getopt__HeadVar__7_7,
#line 579 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__8_8,
#line 579 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_9,
#line 579 "getopt.m"
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_10)
#line 579 "getopt.m"
{
#line 586 "getopt.m"
  while (MR_TRUE)
#line 586 "getopt.m"
    {
#line 586 "getopt.m"
      /* tailcall optimized into a loop */
#line 586 "getopt.m"
      {
#line 586 "getopt.m"
        MR_bool mercury__getopt__succeeded;

#line 586 "getopt.m"
        if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 586 "getopt.m"
          {
#line 586 "getopt.m"
            *mercury__getopt__Args_4 = mercury__getopt__HeadVar__3_3;
#line 586 "getopt.m"
            *mercury__getopt__OptionArgs_6 = mercury__getopt__HeadVar__5_5;
#line 586 "getopt.m"
            {
#line 586 "getopt.m"
              MR_Word base;
#line 586 "getopt.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 586 "getopt.m"
              *mercury__getopt__HeadVar__8_8 = base;
#line 586 "getopt.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__HeadVar__7_7));
#line 586 "getopt.m"
            }
#line 586 "getopt.m"
            *mercury__getopt__STATE_VARIABLE_OptionsSet_10 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_9;
#line 586 "getopt.m"
          }
#line 586 "getopt.m"
        else
#line 589 "getopt.m"
          {
#line 589 "getopt.m"
            MR_Char mercury__getopt__Opt_18 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 589 "getopt.m"
            MR_Word mercury__getopt__Opts0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
#line 589 "getopt.m"
            MR_Word mercury__getopt__ShortOptionPred_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_2, (MR_Integer) 0)));
#line 590 "getopt.m"
            MR_Word mercury__getopt__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_2, (MR_Integer) 1)));
#line 590 "getopt.m"
            MR_Word mercury__getopt__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_2, (MR_Integer) 2)));
#line 624 "getopt.m"
            MR_Box mercury__getopt__Flag_29;
#line 591 "getopt.m"
            MR_bool MR_CALL (* mercury__getopt__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt__ShortOptionPred_28, (MR_Integer) 1)));

#line 591 "getopt.m"
            {
#line 591 "getopt.m"
              mercury__getopt__succeeded = mercury__getopt__func_0(((MR_Box) mercury__getopt__ShortOptionPred_28), ((MR_Box) (MR_Word) (mercury__getopt__Opt_18)), &mercury__getopt__Flag_29);
            }
#line 624 "getopt.m"
            if (mercury__getopt__succeeded)
#line 617 "getopt.m"
              {
#line 617 "getopt.m"
                MR_Word mercury__getopt__OptionData_30;
#line 592 "getopt.m"
                MR_Word mercury__getopt__TypeCtorInfo_62_62 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 37 "map.opt"
                MR_Box mercury__getopt__conv1_OptionData_30;

#line 37 "map.opt"
                {
#line 37 "map.opt"
                  mercury__getopt__succeeded = mercury__tree234__search_3_p_0(mercury__getopt__TypeInfo_for_OptionType_61, mercury__getopt__TypeCtorInfo_62_62, mercury__getopt__HeadVar__7_7, mercury__getopt__Flag_29, &mercury__getopt__conv1_OptionData_30);
                }
#line 37 "map.opt"
                if (mercury__getopt__succeeded)
#line 37 "map.opt"
                  {
#line 37 "map.opt"
                    mercury__getopt__OptionData_30 = ((MR_Word) mercury__getopt__conv1_OptionData_30);
#line 37 "map.opt"
                    mercury__getopt__succeeded = MR_TRUE;
#line 37 "map.opt"
                  }
#line 617 "getopt.m"
                if (mercury__getopt__succeeded)
#line 603 "getopt.m"
                  {
#line 603 "getopt.m"
                    MR_Word mercury__getopt__Args1_32;
#line 603 "getopt.m"
                    MR_Word mercury__getopt__OptionArgs1_33;
#line 603 "getopt.m"
                    MR_Word mercury__getopt__MaybeOptionArg_34;
#line 603 "getopt.m"
                    MR_Word mercury__getopt__Opts1_35;
#line 603 "getopt.m"
                    MR_String mercury__getopt__Option_36;
#line 603 "getopt.m"
                    MR_Word mercury__getopt__Result1_37;
#line 603 "getopt.m"
                    MR_Word mercury__getopt__V_45_45;
#line 603 "getopt.m"
                    MR_Word mercury__getopt__V_47_47;
#line 603 "getopt.m"
                    MR_Word mercury__getopt__V_48_48;
#line 603 "getopt.m"
                    MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_49_49;
#line 593 "getopt.m"
                    MR_Word mercury__getopt__V_63_63;

#line 912 "getopt.m"
                    if ((mercury__getopt__OptionData_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 919 "getopt.m"
                      mercury__getopt__V_63_63 = (MR_Integer) 0;
#line 912 "getopt.m"
                    else
#line 912 "getopt.m"
                      if ((mercury__getopt__OptionData_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 920 "getopt.m"
                        mercury__getopt__V_63_63 = (MR_Integer) 1;
#line 912 "getopt.m"
                      else
#line 912 "getopt.m"
                        if ((mercury__getopt__OptionData_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 922 "getopt.m"
                          mercury__getopt__V_63_63 = (MR_Integer) 1;
#line 912 "getopt.m"
                        else
#line 912 "getopt.m"
                          if ((mercury__getopt__OptionData_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 918 "getopt.m"
                            mercury__getopt__V_63_63 = (MR_Integer) 0;
#line 912 "getopt.m"
                          else
#line 912 "getopt.m"
                            if ((mercury__getopt__OptionData_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 921 "getopt.m"
                              mercury__getopt__V_63_63 = (MR_Integer) 1;
#line 912 "getopt.m"
                            else
#line 912 "getopt.m"
                              if (((MR_tag((MR_Word) mercury__getopt__OptionData_30)) == (MR_mktag((MR_Integer) 1))))
#line 912 "getopt.m"
                                mercury__getopt__V_63_63 = (MR_Integer) 0;
#line 912 "getopt.m"
                              else
#line 912 "getopt.m"
                                if (((MR_tag((MR_Word) mercury__getopt__OptionData_30)) == (MR_mktag((MR_Integer) 2))))
#line 913 "getopt.m"
                                  mercury__getopt__V_63_63 = (MR_Integer) 1;
#line 912 "getopt.m"
                                else
#line 912 "getopt.m"
                                  if (((((MR_tag((MR_Word) mercury__getopt__OptionData_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_30, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 917 "getopt.m"
                                    mercury__getopt__V_63_63 = (MR_Integer) 1;
#line 912 "getopt.m"
                                  else
#line 912 "getopt.m"
                                    if (((((MR_tag((MR_Word) mercury__getopt__OptionData_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_30, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 915 "getopt.m"
                                      mercury__getopt__V_63_63 = (MR_Integer) 1;
#line 912 "getopt.m"
                                    else
#line 912 "getopt.m"
                                      if (((((MR_tag((MR_Word) mercury__getopt__OptionData_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_30, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 916 "getopt.m"
                                        mercury__getopt__V_63_63 = (MR_Integer) 1;
#line 912 "getopt.m"
                                      else
#line 914 "getopt.m"
                                        mercury__getopt__V_63_63 = (MR_Integer) 1;
#line 593 "getopt.m"
                    mercury__getopt__succeeded = ((MR_Integer) 1 == mercury__getopt__V_63_63);
#line 598 "getopt.m"
                    if (mercury__getopt__succeeded)
#line 595 "getopt.m"
                      {
#line 595 "getopt.m"
                        MR_String mercury__getopt__Arg_31;
#line 645 "getopt.m"
                        MR_String mercury__getopt__ArgPrime_79;
#line 645 "getopt.m"
                        MR_Word mercury__getopt__ArgsPrime_80;

#line 639 "getopt.m"
                        mercury__getopt__succeeded = (mercury__getopt__Opts0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 639 "getopt.m"
                        if (mercury__getopt__succeeded)
#line 639 "getopt.m"
                          {
#line 640 "getopt.m"
                            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 640 "getopt.m"
                            if (mercury__getopt__succeeded)
#line 640 "getopt.m"
                              {
#line 640 "getopt.m"
                                mercury__getopt__ArgPrime_79 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
#line 640 "getopt.m"
                                mercury__getopt__ArgsPrime_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
#line 640 "getopt.m"
                              }
#line 639 "getopt.m"
                          }
#line 645 "getopt.m"
                        if (mercury__getopt__succeeded)
#line 642 "getopt.m"
                          {
#line 642 "getopt.m"
                            {
#line 642 "getopt.m"
                              mercury__getopt__OptionArgs1_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 642 "getopt.m"
                              MR_hl_field(MR_mktag(1), mercury__getopt__OptionArgs1_33, 0) = ((MR_Box) (mercury__getopt__ArgPrime_79));
#line 642 "getopt.m"
                              MR_hl_field(MR_mktag(1), mercury__getopt__OptionArgs1_33, 1) = ((MR_Box) (mercury__getopt__HeadVar__5_5));
#line 642 "getopt.m"
                            }
#line 643 "getopt.m"
                            mercury__getopt__Arg_31 = mercury__getopt__ArgPrime_79;
#line 644 "getopt.m"
                            mercury__getopt__Args1_32 = mercury__getopt__ArgsPrime_80;
#line 642 "getopt.m"
                          }
#line 645 "getopt.m"
                        else
#line 646 "getopt.m"
                          {
#line 646 "getopt.m"
                            {
#line 646 "getopt.m"
                              mercury__string__from_char_list_2_p_0(mercury__getopt__Opts0_19, &mercury__getopt__Arg_31);
                            }
#line 647 "getopt.m"
                            mercury__getopt__OptionArgs1_33 = mercury__getopt__HeadVar__5_5;
#line 648 "getopt.m"
                            mercury__getopt__Args1_32 = mercury__getopt__HeadVar__3_3;
#line 646 "getopt.m"
                          }
#line 596 "getopt.m"
                        {
#line 596 "getopt.m"
                          mercury__getopt__MaybeOptionArg_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 596 "getopt.m"
                          MR_hl_field(MR_mktag(1), mercury__getopt__MaybeOptionArg_34, 0) = ((MR_Box) (mercury__getopt__Arg_31));
#line 596 "getopt.m"
                        }
#line 597 "getopt.m"
                        mercury__getopt__Opts1_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 595 "getopt.m"
                      }
#line 598 "getopt.m"
                    else
#line 599 "getopt.m"
                      {
#line 599 "getopt.m"
                        mercury__getopt__MaybeOptionArg_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 600 "getopt.m"
                        mercury__getopt__Opts1_35 = mercury__getopt__Opts0_19;
#line 601 "getopt.m"
                        mercury__getopt__OptionArgs1_33 = mercury__getopt__HeadVar__5_5;
#line 602 "getopt.m"
                        mercury__getopt__Args1_32 = mercury__getopt__HeadVar__3_3;
#line 599 "getopt.m"
                      }
#line 604 "getopt.m"
                    mercury__getopt__V_48_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 604 "getopt.m"
                    {
#line 604 "getopt.m"
                      mercury__getopt__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "getopt.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt__V_47_47, 0) = ((MR_Box) (MR_Word) (mercury__getopt__Opt_18));
#line 604 "getopt.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt__V_47_47, 1) = ((MR_Box) (mercury__getopt__V_48_48));
#line 604 "getopt.m"
                    }
#line 604 "getopt.m"
                    {
#line 604 "getopt.m"
                      mercury__getopt__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "getopt.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
#line 604 "getopt.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt__V_45_45, 1) = ((MR_Box) (mercury__getopt__V_47_47));
#line 604 "getopt.m"
                    }
#line 604 "getopt.m"
                    {
#line 604 "getopt.m"
                      mercury__string__from_char_list_2_p_0(mercury__getopt__V_45_45, &mercury__getopt__Option_36);
                    }
#line 605 "getopt.m"
                    {
#line 605 "getopt.m"
                      mercury__getopt__process_option_9_p_0(mercury__getopt__TypeInfo_for_OptionType_61, mercury__getopt__OptionData_30, mercury__getopt__Option_36, mercury__getopt__Flag_29, mercury__getopt__MaybeOptionArg_34, mercury__getopt__OptionOps_2, mercury__getopt__HeadVar__7_7, &mercury__getopt__Result1_37, mercury__getopt__STATE_VARIABLE_OptionsSet_0_9, &mercury__getopt__STATE_VARIABLE_OptionsSet_49_49);
                    }
#line 611 "getopt.m"
                    if (((MR_tag((MR_Word) mercury__getopt__Result1_37)) == (MR_mktag((MR_Integer) 1))))
#line 612 "getopt.m"
                      {
#line 613 "getopt.m"
                        *mercury__getopt__HeadVar__8_8 = mercury__getopt__Result1_37;
#line 614 "getopt.m"
                        *mercury__getopt__OptionArgs_6 = mercury__getopt__OptionArgs1_33;
#line 615 "getopt.m"
                        *mercury__getopt__Args_4 = mercury__getopt__Args1_32;
#line 615 "getopt.m"
                        *mercury__getopt__STATE_VARIABLE_OptionsSet_10 = mercury__getopt__STATE_VARIABLE_OptionsSet_49_49;
#line 612 "getopt.m"
                      }
#line 611 "getopt.m"
                    else
#line 608 "getopt.m"
                      {
#line 608 "getopt.m"
                        MR_Word mercury__getopt__OptionTable1_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result1_37, (MR_Integer) 0)));

#line 609 "getopt.m"
                        /* direct tailcall eliminated */
#line 609 "getopt.m"
                        {
#line 609 "getopt.m"
                          MR_Word mercury__getopt__HeadVar__1__tmp_copy_1 = mercury__getopt__Opts1_35;
#line 609 "getopt.m"
                          MR_Word mercury__getopt__HeadVar__3__tmp_copy_3 = mercury__getopt__Args1_32;
#line 609 "getopt.m"
                          MR_Word mercury__getopt__HeadVar__5__tmp_copy_5 = mercury__getopt__OptionArgs1_33;
#line 609 "getopt.m"
                          MR_Word mercury__getopt__HeadVar__7__tmp_copy_7 = mercury__getopt__OptionTable1_38;
#line 609 "getopt.m"
                          MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0__tmp_copy_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_49_49;

#line 609 "getopt.m"
                          mercury__getopt__STATE_VARIABLE_OptionsSet_0_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_0__tmp_copy_9;
#line 609 "getopt.m"
                          mercury__getopt__HeadVar__7_7 = mercury__getopt__HeadVar__7__tmp_copy_7;
#line 609 "getopt.m"
                          mercury__getopt__HeadVar__5_5 = mercury__getopt__HeadVar__5__tmp_copy_5;
#line 609 "getopt.m"
                          mercury__getopt__HeadVar__3_3 = mercury__getopt__HeadVar__3__tmp_copy_3;
#line 609 "getopt.m"
                          mercury__getopt__HeadVar__1_1 = mercury__getopt__HeadVar__1__tmp_copy_1;
#line 609 "getopt.m"
                        }
#line 609 "getopt.m"
                        continue;
#line 608 "getopt.m"
                      }
#line 603 "getopt.m"
                  }
#line 617 "getopt.m"
                else
#line 618 "getopt.m"
                  {
#line 618 "getopt.m"
                    MR_String mercury__getopt__OptString_40;
#line 618 "getopt.m"
                    MR_String mercury__getopt__ErrorMsg_41;
#line 618 "getopt.m"
                    MR_String mercury__getopt__V_52_52;
#line 618 "getopt.m"
                    MR_Word mercury__getopt__V_5_83;
#line 618 "getopt.m"
                    MR_Word mercury__getopt__V_6_84 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 275 "string.opt"
                    {
#line 275 "string.opt"
                      mercury__getopt__V_5_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 275 "string.opt"
                      MR_hl_field(MR_mktag(1), mercury__getopt__V_5_83, 0) = ((MR_Box) (MR_Word) (mercury__getopt__Opt_18));
#line 275 "string.opt"
                      MR_hl_field(MR_mktag(1), mercury__getopt__V_5_83, 1) = ((MR_Box) (mercury__getopt__V_6_84));
#line 275 "string.opt"
                    }
#line 277 "string.opt"
                    {
#line 277 "string.opt"
                      mercury__string__to_char_list_2_p_1(&mercury__getopt__OptString_40, mercury__getopt__V_5_83);
                    }
#line 247 "string.opt"
                    {
#line 247 "string.opt"
                      mercury__string__append_3_p_2(mercury__getopt__OptString_40, (MR_String) "\'", &mercury__getopt__V_52_52);
                    }
#line 247 "string.opt"
                    {
#line 247 "string.opt"
                      mercury__string__append_3_p_2((MR_String) "unknown type for option \140-", mercury__getopt__V_52_52, &mercury__getopt__ErrorMsg_41);
                    }
#line 620 "getopt.m"
                    {
#line 620 "getopt.m"
                      MR_Word base;
#line 620 "getopt.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 620 "getopt.m"
                      *mercury__getopt__HeadVar__8_8 = base;
#line 620 "getopt.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__ErrorMsg_41));
#line 620 "getopt.m"
                    }
#line 621 "getopt.m"
                    *mercury__getopt__OptionArgs_6 = mercury__getopt__HeadVar__5_5;
#line 622 "getopt.m"
                    *mercury__getopt__Args_4 = mercury__getopt__HeadVar__3_3;
#line 622 "getopt.m"
                    *mercury__getopt__STATE_VARIABLE_OptionsSet_10 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_9;
#line 618 "getopt.m"
                  }
#line 617 "getopt.m"
              }
#line 624 "getopt.m"
            else
#line 625 "getopt.m"
              {
#line 625 "getopt.m"
                MR_String mercury__getopt__V_55_55;
#line 625 "getopt.m"
                MR_String mercury__getopt__OptString_57;
#line 625 "getopt.m"
                MR_String mercury__getopt__ErrorMsg_58;

#line 625 "getopt.m"
                {
#line 625 "getopt.m"
                  mercury__string__char_to_string_2_p_0(mercury__getopt__Opt_18, &mercury__getopt__OptString_57);
                }
#line 626 "getopt.m"
                {
#line 626 "getopt.m"
                  mercury__getopt__V_55_55 = mercury__string__f_43_43_2_f_0(mercury__getopt__OptString_57, (MR_String) "\'");
                }
#line 626 "getopt.m"
                {
#line 626 "getopt.m"
                  mercury__getopt__ErrorMsg_58 = mercury__string__f_43_43_2_f_0((MR_String) "unrecognized option \140-", mercury__getopt__V_55_55);
                }
#line 627 "getopt.m"
                {
#line 627 "getopt.m"
                  MR_Word base;
#line 627 "getopt.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 627 "getopt.m"
                  *mercury__getopt__HeadVar__8_8 = base;
#line 627 "getopt.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__ErrorMsg_58));
#line 627 "getopt.m"
                }
#line 628 "getopt.m"
                *mercury__getopt__OptionArgs_6 = mercury__getopt__HeadVar__5_5;
#line 629 "getopt.m"
                *mercury__getopt__Args_4 = mercury__getopt__HeadVar__3_3;
#line 629 "getopt.m"
                *mercury__getopt__STATE_VARIABLE_OptionsSet_10 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_9;
#line 625 "getopt.m"
              }
#line 589 "getopt.m"
          }
#line 586 "getopt.m"
      }
#line 586 "getopt.m"
      break;
#line 586 "getopt.m"
    }
#line 579 "getopt.m"
}

#line 514 "getopt.m"
static void MR_CALL 
mercury__getopt__handle_long_option_13_p_0(
#line 514 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_52,
#line 514 "getopt.m"
  MR_String mercury__getopt__Option_14,
#line 514 "getopt.m"
  MR_Box mercury__getopt__Flag_15,
#line 514 "getopt.m"
  MR_Word mercury__getopt__OptionData_16,
#line 514 "getopt.m"
  MR_Word mercury__getopt__MaybeOptionArg0_17,
#line 514 "getopt.m"
  MR_Word mercury__getopt__Args0_18,
#line 514 "getopt.m"
  MR_Word * mercury__getopt__Args_19,
#line 514 "getopt.m"
  MR_Word mercury__getopt__OptionOps_20,
#line 514 "getopt.m"
  MR_Word mercury__getopt__OptionArgs0_21,
#line 514 "getopt.m"
  MR_Word * mercury__getopt__OptionArgs_22,
#line 514 "getopt.m"
  MR_Word mercury__getopt__OptionTable0_23,
#line 514 "getopt.m"
  MR_Word * mercury__getopt__Result_24,
#line 514 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_37,
#line 514 "getopt.m"
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_38)
#line 514 "getopt.m"
{
#line 523 "getopt.m"
  {
#line 523 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 523 "getopt.m"
    MR_Word mercury__getopt__MaybeOptionArg_28;
#line 523 "getopt.m"
    MR_Word mercury__getopt__Args1_29;
#line 523 "getopt.m"
    MR_Word mercury__getopt__MissingArg_30;
#line 523 "getopt.m"
    MR_Word mercury__getopt__OptionArgs1_31;
#line 525 "getopt.m"
    MR_Word mercury__getopt__V_53_53;

#line 912 "getopt.m"
    if ((mercury__getopt__OptionData_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 919 "getopt.m"
      mercury__getopt__V_53_53 = (MR_Integer) 0;
#line 912 "getopt.m"
    else
#line 912 "getopt.m"
      if ((mercury__getopt__OptionData_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 920 "getopt.m"
        mercury__getopt__V_53_53 = (MR_Integer) 1;
#line 912 "getopt.m"
      else
#line 912 "getopt.m"
        if ((mercury__getopt__OptionData_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 922 "getopt.m"
          mercury__getopt__V_53_53 = (MR_Integer) 1;
#line 912 "getopt.m"
        else
#line 912 "getopt.m"
          if ((mercury__getopt__OptionData_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 918 "getopt.m"
            mercury__getopt__V_53_53 = (MR_Integer) 0;
#line 912 "getopt.m"
          else
#line 912 "getopt.m"
            if ((mercury__getopt__OptionData_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 921 "getopt.m"
              mercury__getopt__V_53_53 = (MR_Integer) 1;
#line 912 "getopt.m"
            else
#line 912 "getopt.m"
              if (((MR_tag((MR_Word) mercury__getopt__OptionData_16)) == (MR_mktag((MR_Integer) 1))))
#line 912 "getopt.m"
                mercury__getopt__V_53_53 = (MR_Integer) 0;
#line 912 "getopt.m"
              else
#line 912 "getopt.m"
                if (((MR_tag((MR_Word) mercury__getopt__OptionData_16)) == (MR_mktag((MR_Integer) 2))))
#line 913 "getopt.m"
                  mercury__getopt__V_53_53 = (MR_Integer) 1;
#line 912 "getopt.m"
                else
#line 912 "getopt.m"
                  if (((((MR_tag((MR_Word) mercury__getopt__OptionData_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_16, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 917 "getopt.m"
                    mercury__getopt__V_53_53 = (MR_Integer) 1;
#line 912 "getopt.m"
                  else
#line 912 "getopt.m"
                    if (((((MR_tag((MR_Word) mercury__getopt__OptionData_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_16, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 915 "getopt.m"
                      mercury__getopt__V_53_53 = (MR_Integer) 1;
#line 912 "getopt.m"
                    else
#line 912 "getopt.m"
                      if (((((MR_tag((MR_Word) mercury__getopt__OptionData_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_16, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 916 "getopt.m"
                        mercury__getopt__V_53_53 = (MR_Integer) 1;
#line 912 "getopt.m"
                      else
#line 914 "getopt.m"
                        mercury__getopt__V_53_53 = (MR_Integer) 1;
#line 525 "getopt.m"
    mercury__getopt__succeeded = ((MR_Integer) 1 == mercury__getopt__V_53_53);
#line 525 "getopt.m"
    if (mercury__getopt__succeeded)
#line 526 "getopt.m"
      mercury__getopt__succeeded = (mercury__getopt__MaybeOptionArg0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 541 "getopt.m"
    if (mercury__getopt__succeeded)
#line 534 "getopt.m"
      if ((mercury__getopt__Args0_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 535 "getopt.m"
        {
#line 536 "getopt.m"
          mercury__getopt__MaybeOptionArg_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 537 "getopt.m"
          mercury__getopt__Args1_29 = mercury__getopt__Args0_18;
#line 538 "getopt.m"
          mercury__getopt__OptionArgs1_31 = mercury__getopt__OptionArgs0_21;
#line 539 "getopt.m"
          mercury__getopt__MissingArg_30 = (MR_Integer) 1;
#line 535 "getopt.m"
        }
#line 534 "getopt.m"
      else
#line 529 "getopt.m"
        {
#line 529 "getopt.m"
          MR_String mercury__getopt__Arg_26 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__Args0_18, (MR_Integer) 0)));

#line 529 "getopt.m"
          mercury__getopt__Args1_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__Args0_18, (MR_Integer) 1)));
#line 530 "getopt.m"
          {
#line 530 "getopt.m"
            mercury__getopt__MaybeOptionArg_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 530 "getopt.m"
            MR_hl_field(MR_mktag(1), mercury__getopt__MaybeOptionArg_28, 0) = ((MR_Box) (mercury__getopt__Arg_26));
#line 530 "getopt.m"
          }
#line 532 "getopt.m"
          mercury__getopt__MissingArg_30 = (MR_Integer) 0;
#line 533 "getopt.m"
          {
#line 533 "getopt.m"
            mercury__getopt__OptionArgs1_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 533 "getopt.m"
            MR_hl_field(MR_mktag(1), mercury__getopt__OptionArgs1_31, 0) = ((MR_Box) (mercury__getopt__Arg_26));
#line 533 "getopt.m"
            MR_hl_field(MR_mktag(1), mercury__getopt__OptionArgs1_31, 1) = ((MR_Box) (mercury__getopt__OptionArgs0_21));
#line 533 "getopt.m"
          }
#line 529 "getopt.m"
        }
#line 541 "getopt.m"
    else
#line 542 "getopt.m"
      {
#line 542 "getopt.m"
        mercury__getopt__MaybeOptionArg_28 = mercury__getopt__MaybeOptionArg0_17;
#line 543 "getopt.m"
        mercury__getopt__Args1_29 = mercury__getopt__Args0_18;
#line 544 "getopt.m"
        mercury__getopt__OptionArgs1_31 = mercury__getopt__OptionArgs0_21;
#line 545 "getopt.m"
        mercury__getopt__MissingArg_30 = (MR_Integer) 0;
#line 542 "getopt.m"
      }
#line 553 "getopt.m"
    if ((mercury__getopt__MissingArg_30 == (MR_Integer) 0))
#line 563 "getopt.m"
      {
#line 556 "getopt.m"
        MR_Word mercury__getopt__V_54_54;
#line 557 "getopt.m"
        MR_String mercury__getopt__V_33_33;

#line 912 "getopt.m"
        if ((mercury__getopt__OptionData_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 919 "getopt.m"
          mercury__getopt__V_54_54 = (MR_Integer) 0;
#line 912 "getopt.m"
        else
#line 912 "getopt.m"
          if ((mercury__getopt__OptionData_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 920 "getopt.m"
            mercury__getopt__V_54_54 = (MR_Integer) 1;
#line 912 "getopt.m"
          else
#line 912 "getopt.m"
            if ((mercury__getopt__OptionData_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 922 "getopt.m"
              mercury__getopt__V_54_54 = (MR_Integer) 1;
#line 912 "getopt.m"
            else
#line 912 "getopt.m"
              if ((mercury__getopt__OptionData_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 918 "getopt.m"
                mercury__getopt__V_54_54 = (MR_Integer) 0;
#line 912 "getopt.m"
              else
#line 912 "getopt.m"
                if ((mercury__getopt__OptionData_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 921 "getopt.m"
                  mercury__getopt__V_54_54 = (MR_Integer) 1;
#line 912 "getopt.m"
                else
#line 912 "getopt.m"
                  if (((MR_tag((MR_Word) mercury__getopt__OptionData_16)) == (MR_mktag((MR_Integer) 1))))
#line 912 "getopt.m"
                    mercury__getopt__V_54_54 = (MR_Integer) 0;
#line 912 "getopt.m"
                  else
#line 912 "getopt.m"
                    if (((MR_tag((MR_Word) mercury__getopt__OptionData_16)) == (MR_mktag((MR_Integer) 2))))
#line 913 "getopt.m"
                      mercury__getopt__V_54_54 = (MR_Integer) 1;
#line 912 "getopt.m"
                    else
#line 912 "getopt.m"
                      if (((((MR_tag((MR_Word) mercury__getopt__OptionData_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_16, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 917 "getopt.m"
                        mercury__getopt__V_54_54 = (MR_Integer) 1;
#line 912 "getopt.m"
                      else
#line 912 "getopt.m"
                        if (((((MR_tag((MR_Word) mercury__getopt__OptionData_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_16, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 915 "getopt.m"
                          mercury__getopt__V_54_54 = (MR_Integer) 1;
#line 912 "getopt.m"
                        else
#line 912 "getopt.m"
                          if (((((MR_tag((MR_Word) mercury__getopt__OptionData_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_16, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 916 "getopt.m"
                            mercury__getopt__V_54_54 = (MR_Integer) 1;
#line 912 "getopt.m"
                          else
#line 914 "getopt.m"
                            mercury__getopt__V_54_54 = (MR_Integer) 1;
#line 556 "getopt.m"
        mercury__getopt__succeeded = ((MR_Integer) 0 == mercury__getopt__V_54_54);
#line 556 "getopt.m"
        if (mercury__getopt__succeeded)
#line 556 "getopt.m"
          {
#line 557 "getopt.m"
            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__MaybeOptionArg_28)) == (MR_mktag((MR_Integer) 1)));
#line 557 "getopt.m"
            if (mercury__getopt__succeeded)
#line 557 "getopt.m"
              mercury__getopt__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__MaybeOptionArg_28, (MR_Integer) 0)));
#line 556 "getopt.m"
          }
#line 563 "getopt.m"
        if (mercury__getopt__succeeded)
#line 559 "getopt.m"
          {
#line 559 "getopt.m"
            MR_String mercury__getopt__V_42_42;
#line 559 "getopt.m"
            MR_String mercury__getopt__ErrorMsg_49;

#line 559 "getopt.m"
            *mercury__getopt__Args_19 = mercury__getopt__Args0_18;
#line 560 "getopt.m"
            *mercury__getopt__OptionArgs_22 = mercury__getopt__OptionArgs1_31;
#line 247 "string.opt"
            {
#line 247 "string.opt"
              mercury__string__append_3_p_2(mercury__getopt__Option_14, (MR_String) "\' does not allow an argument", &mercury__getopt__V_42_42);
            }
#line 247 "string.opt"
            {
#line 247 "string.opt"
              mercury__string__append_3_p_2((MR_String) "option \140", mercury__getopt__V_42_42, &mercury__getopt__ErrorMsg_49);
            }
#line 562 "getopt.m"
            {
#line 562 "getopt.m"
              MR_Word base;
#line 562 "getopt.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 562 "getopt.m"
              *mercury__getopt__Result_24 = base;
#line 562 "getopt.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__ErrorMsg_49));
#line 562 "getopt.m"
            }
#line 562 "getopt.m"
            *mercury__getopt__STATE_VARIABLE_OptionsSet_38 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_37;
#line 559 "getopt.m"
          }
#line 563 "getopt.m"
        else
#line 565 "getopt.m"
          {
#line 565 "getopt.m"
            MR_Word mercury__getopt__Result1_34;
#line 565 "getopt.m"
            MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_44_44;

#line 564 "getopt.m"
            {
#line 564 "getopt.m"
              mercury__getopt__process_option_9_p_0(mercury__getopt__TypeInfo_for_OptionType_52, mercury__getopt__OptionData_16, mercury__getopt__Option_14, mercury__getopt__Flag_15, mercury__getopt__MaybeOptionArg_28, mercury__getopt__OptionOps_20, mercury__getopt__OptionTable0_23, &mercury__getopt__Result1_34, mercury__getopt__STATE_VARIABLE_OptionsSet_0_37, &mercury__getopt__STATE_VARIABLE_OptionsSet_44_44);
            }
#line 570 "getopt.m"
            if (((MR_tag((MR_Word) mercury__getopt__Result1_34)) == (MR_mktag((MR_Integer) 1))))
#line 571 "getopt.m"
              {
#line 572 "getopt.m"
                *mercury__getopt__Result_24 = mercury__getopt__Result1_34;
#line 573 "getopt.m"
                *mercury__getopt__OptionArgs_22 = mercury__getopt__OptionArgs1_31;
#line 574 "getopt.m"
                *mercury__getopt__Args_19 = mercury__getopt__Args1_29;
#line 574 "getopt.m"
                *mercury__getopt__STATE_VARIABLE_OptionsSet_38 = mercury__getopt__STATE_VARIABLE_OptionsSet_44_44;
#line 571 "getopt.m"
              }
#line 570 "getopt.m"
            else
#line 567 "getopt.m"
              {
#line 567 "getopt.m"
                MR_Word mercury__getopt__OptionTable1_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result1_34, (MR_Integer) 0)));

#line 568 "getopt.m"
                {
#line 568 "getopt.m"
                  mercury__getopt__process_arguments_9_p_0(mercury__getopt__TypeInfo_for_OptionType_52, mercury__getopt__Args1_29, mercury__getopt__Args_19, mercury__getopt__OptionOps_20, mercury__getopt__OptionArgs1_31, mercury__getopt__OptionArgs_22, mercury__getopt__OptionTable1_35, mercury__getopt__Result_24, mercury__getopt__STATE_VARIABLE_OptionsSet_44_44, mercury__getopt__STATE_VARIABLE_OptionsSet_38);
#line 568 "getopt.m"
                  return;
                }
#line 567 "getopt.m"
              }
#line 565 "getopt.m"
          }
#line 563 "getopt.m"
      }
#line 553 "getopt.m"
    else
#line 548 "getopt.m"
      {
#line 548 "getopt.m"
        MR_String mercury__getopt__ErrorMsg_32;
#line 548 "getopt.m"
        MR_String mercury__getopt__V_47_47;

#line 549 "getopt.m"
        *mercury__getopt__Args_19 = mercury__getopt__Args0_18;
#line 550 "getopt.m"
        *mercury__getopt__OptionArgs_22 = mercury__getopt__OptionArgs1_31;
#line 247 "string.opt"
        {
#line 247 "string.opt"
          mercury__string__append_3_p_2(mercury__getopt__Option_14, (MR_String) "\' needs an argument", &mercury__getopt__V_47_47);
        }
#line 247 "string.opt"
        {
#line 247 "string.opt"
          mercury__string__append_3_p_2((MR_String) "option \140", mercury__getopt__V_47_47, &mercury__getopt__ErrorMsg_32);
        }
#line 552 "getopt.m"
        {
#line 552 "getopt.m"
          MR_Word base;
#line 552 "getopt.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 552 "getopt.m"
          *mercury__getopt__Result_24 = base;
#line 552 "getopt.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__ErrorMsg_32));
#line 552 "getopt.m"
        }
#line 552 "getopt.m"
        *mercury__getopt__STATE_VARIABLE_OptionsSet_38 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_37;
#line 548 "getopt.m"
      }
#line 523 "getopt.m"
  }
#line 514 "getopt.m"
}

#line 389 "getopt.m"
void MR_CALL 
mercury__getopt__process_arguments_9_p_0(
#line 389 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_147,
#line 389 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 389 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__2_2,
#line 389 "getopt.m"
  MR_Word mercury__getopt__OptionOps_3,
#line 389 "getopt.m"
  MR_Word mercury__getopt__HeadVar__4_4,
#line 389 "getopt.m"
  MR_Word * mercury__getopt__OptionArgs_5,
#line 389 "getopt.m"
  MR_Word mercury__getopt__HeadVar__6_6,
#line 389 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__7_7,
#line 389 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_8,
#line 389 "getopt.m"
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_9)
#line 389 "getopt.m"
{
#line 395 "getopt.m"
  while (MR_TRUE)
#line 395 "getopt.m"
    {
#line 395 "getopt.m"
      /* tailcall optimized into a loop */
#line 395 "getopt.m"
      {
#line 395 "getopt.m"
        MR_bool mercury__getopt__succeeded;

#line 395 "getopt.m"
        if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 395 "getopt.m"
          {
#line 395 "getopt.m"
            *mercury__getopt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 395 "getopt.m"
            *mercury__getopt__OptionArgs_5 = mercury__getopt__HeadVar__4_4;
#line 395 "getopt.m"
            {
#line 395 "getopt.m"
              MR_Word base;
#line 395 "getopt.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 395 "getopt.m"
              *mercury__getopt__HeadVar__7_7 = base;
#line 395 "getopt.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__HeadVar__6_6));
#line 395 "getopt.m"
            }
#line 395 "getopt.m"
            *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_8;
#line 395 "getopt.m"
          }
#line 395 "getopt.m"
        else
#line 398 "getopt.m"
          {
#line 398 "getopt.m"
            MR_String mercury__getopt__Option_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 398 "getopt.m"
            MR_Word mercury__getopt__Args0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));

#line 399 "getopt.m"
            mercury__getopt__succeeded = (strcmp(mercury__getopt__Option_16, (MR_String) "--") == 0);
#line 403 "getopt.m"
            if (mercury__getopt__succeeded)
#line 400 "getopt.m"
              {
#line 400 "getopt.m"
                *mercury__getopt__OptionArgs_5 = mercury__getopt__HeadVar__4_4;
#line 401 "getopt.m"
                *mercury__getopt__HeadVar__2_2 = mercury__getopt__Args0_17;
#line 402 "getopt.m"
                {
#line 402 "getopt.m"
                  MR_Word base;
#line 402 "getopt.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 402 "getopt.m"
                  *mercury__getopt__HeadVar__7_7 = base;
#line 402 "getopt.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__HeadVar__6_6));
#line 402 "getopt.m"
                }
#line 402 "getopt.m"
                *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_8;
#line 400 "getopt.m"
              }
#line 403 "getopt.m"
            else
#line 426 "getopt.m"
              {
#line 426 "getopt.m"
                MR_String mercury__getopt__LongOption_25;

#line 403 "getopt.m"
                {
#line 403 "getopt.m"
                  mercury__getopt__succeeded = mercury__string__append_3_p_1((MR_String) "--no-", &mercury__getopt__LongOption_25, mercury__getopt__Option_16);
                }
#line 426 "getopt.m"
                if (mercury__getopt__succeeded)
#line 404 "getopt.m"
                  {
#line 404 "getopt.m"
                    MR_Word mercury__getopt__LongOptionPred_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 1)));
#line 404 "getopt.m"
                    MR_Word mercury__getopt__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 0)));
#line 404 "getopt.m"
                    MR_Word mercury__getopt__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 2)));
#line 420 "getopt.m"
                    MR_Box mercury__getopt__Flag_27;
#line 405 "getopt.m"
                    MR_bool MR_CALL (* mercury__getopt__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt__LongOptionPred_26, (MR_Integer) 1)));

#line 405 "getopt.m"
                    {
#line 405 "getopt.m"
                      mercury__getopt__succeeded = mercury__getopt__func_0(((MR_Box) mercury__getopt__LongOptionPred_26), ((MR_Box) (mercury__getopt__LongOption_25)), &mercury__getopt__Flag_27);
                    }
#line 420 "getopt.m"
                    if (mercury__getopt__succeeded)
#line 406 "getopt.m"
                      {
#line 406 "getopt.m"
                        MR_String mercury__getopt__OptName_28;
#line 406 "getopt.m"
                        MR_Word mercury__getopt__Result1_29;
#line 406 "getopt.m"
                        MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_52_52;

#line 406 "getopt.m"
                        {
#line 406 "getopt.m"
                          mercury__getopt__OptName_28 = mercury__string__f_43_43_2_f_0((MR_String) "--", mercury__getopt__LongOption_25);
                        }
#line 407 "getopt.m"
                        {
#line 407 "getopt.m"
                          mercury__getopt__process_negated_option_7_p_0(mercury__getopt__TypeInfo_for_OptionType_147, mercury__getopt__OptName_28, mercury__getopt__Flag_27, mercury__getopt__OptionOps_3, mercury__getopt__HeadVar__6_6, &mercury__getopt__Result1_29, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt__STATE_VARIABLE_OptionsSet_52_52);
                        }
#line 414 "getopt.m"
                        if (((MR_tag((MR_Word) mercury__getopt__Result1_29)) == (MR_mktag((MR_Integer) 1))))
#line 415 "getopt.m"
                          {
#line 416 "getopt.m"
                            *mercury__getopt__HeadVar__7_7 = mercury__getopt__Result1_29;
#line 417 "getopt.m"
                            *mercury__getopt__OptionArgs_5 = mercury__getopt__HeadVar__4_4;
#line 418 "getopt.m"
                            *mercury__getopt__HeadVar__2_2 = mercury__getopt__Args0_17;
#line 418 "getopt.m"
                            *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_52_52;
#line 415 "getopt.m"
                          }
#line 414 "getopt.m"
                        else
#line 410 "getopt.m"
                          {
#line 410 "getopt.m"
                            MR_Word mercury__getopt__OptionTable1_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result1_29, (MR_Integer) 0)));
#line 410 "getopt.m"
                            MR_Word mercury__getopt__V_53_53;

#line 411 "getopt.m"
                            {
#line 411 "getopt.m"
                              mercury__getopt__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "getopt.m"
                              MR_hl_field(MR_mktag(1), mercury__getopt__V_53_53, 0) = ((MR_Box) (mercury__getopt__Option_16));
#line 411 "getopt.m"
                              MR_hl_field(MR_mktag(1), mercury__getopt__V_53_53, 1) = ((MR_Box) (mercury__getopt__HeadVar__4_4));
#line 411 "getopt.m"
                            }
#line 411 "getopt.m"
                            /* direct tailcall eliminated */
#line 411 "getopt.m"
                            {
#line 411 "getopt.m"
                              MR_Word mercury__getopt__HeadVar__1__tmp_copy_1 = mercury__getopt__Args0_17;
#line 411 "getopt.m"
                              MR_Word mercury__getopt__HeadVar__4__tmp_copy_4 = mercury__getopt__V_53_53;
#line 411 "getopt.m"
                              MR_Word mercury__getopt__HeadVar__6__tmp_copy_6 = mercury__getopt__OptionTable1_30;
#line 411 "getopt.m"
                              MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0__tmp_copy_8 = mercury__getopt__STATE_VARIABLE_OptionsSet_52_52;

#line 411 "getopt.m"
                              mercury__getopt__STATE_VARIABLE_OptionsSet_0_8 = mercury__getopt__STATE_VARIABLE_OptionsSet_0__tmp_copy_8;
#line 411 "getopt.m"
                              mercury__getopt__HeadVar__6_6 = mercury__getopt__HeadVar__6__tmp_copy_6;
#line 411 "getopt.m"
                              mercury__getopt__HeadVar__4_4 = mercury__getopt__HeadVar__4__tmp_copy_4;
#line 411 "getopt.m"
                              mercury__getopt__HeadVar__1_1 = mercury__getopt__HeadVar__1__tmp_copy_1;
#line 411 "getopt.m"
                            }
#line 411 "getopt.m"
                            continue;
#line 410 "getopt.m"
                          }
#line 406 "getopt.m"
                      }
#line 420 "getopt.m"
                    else
#line 421 "getopt.m"
                      {
#line 421 "getopt.m"
                        MR_String mercury__getopt__ErrorMsg_32;
#line 421 "getopt.m"
                        MR_String mercury__getopt__V_56_56;

#line 421 "getopt.m"
                        {
#line 421 "getopt.m"
                          mercury__getopt__V_56_56 = mercury__string__f_43_43_2_f_0(mercury__getopt__Option_16, (MR_String) "\'");
                        }
#line 421 "getopt.m"
                        {
#line 421 "getopt.m"
                          mercury__getopt__ErrorMsg_32 = mercury__string__f_43_43_2_f_0((MR_String) "unrecognized option \140", mercury__getopt__V_56_56);
                        }
#line 422 "getopt.m"
                        {
#line 422 "getopt.m"
                          MR_Word base;
#line 422 "getopt.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 422 "getopt.m"
                          *mercury__getopt__HeadVar__7_7 = base;
#line 422 "getopt.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__ErrorMsg_32));
#line 422 "getopt.m"
                        }
#line 423 "getopt.m"
                        *mercury__getopt__OptionArgs_5 = mercury__getopt__HeadVar__4_4;
#line 424 "getopt.m"
                        *mercury__getopt__HeadVar__2_2 = mercury__getopt__Args0_17;
#line 424 "getopt.m"
                        *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_8;
#line 421 "getopt.m"
                      }
#line 404 "getopt.m"
                  }
#line 426 "getopt.m"
                else
#line 459 "getopt.m"
                  {
#line 459 "getopt.m"
                    MR_String mercury__getopt__LongOptionStr_33;

#line 426 "getopt.m"
                    {
#line 426 "getopt.m"
                      mercury__getopt__succeeded = mercury__string__append_3_p_1((MR_String) "--", &mercury__getopt__LongOptionStr_33, mercury__getopt__Option_16);
                    }
#line 459 "getopt.m"
                    if (mercury__getopt__succeeded)
#line 427 "getopt.m"
                      {
#line 427 "getopt.m"
                        MR_Word mercury__getopt__MaybeArg_37;
#line 427 "getopt.m"
                        MR_String mercury__getopt__OptionName_38;
#line 427 "getopt.m"
                        MR_String mercury__getopt__LongOption_94;
#line 427 "getopt.m"
                        MR_Word mercury__getopt__LongOptionPred_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 1)));
#line 427 "getopt.m"
                        MR_Word mercury__getopt__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 0)));
#line 427 "getopt.m"
                        MR_Word mercury__getopt__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 2)));
#line 436 "getopt.m"
                        MR_Integer mercury__getopt__OptionLen_34;
#line 453 "getopt.m"
                        MR_Box mercury__getopt__Flag_92;
#line 441 "getopt.m"
                        MR_bool MR_CALL (* mercury__getopt__func_1)(MR_Box, MR_Box, MR_Box *);

#line 428 "getopt.m"
                        {
#line 428 "getopt.m"
                          mercury__getopt__succeeded = mercury__string__sub_string_search_3_p_0(mercury__getopt__LongOptionStr_33, (MR_String) "=", &mercury__getopt__OptionLen_34);
                        }
#line 436 "getopt.m"
                        if (mercury__getopt__succeeded)
#line 430 "getopt.m"
                          {
#line 430 "getopt.m"
                            MR_String mercury__getopt__EqualOptionArg_35;
#line 433 "getopt.m"
                            MR_String mercury__getopt__OptionArg_36;

#line 429 "getopt.m"
                            {
#line 429 "getopt.m"
                              mercury__string__split_4_p_0(mercury__getopt__LongOptionStr_33, mercury__getopt__OptionLen_34, &mercury__getopt__LongOption_94, &mercury__getopt__EqualOptionArg_35);
                            }
#line 431 "getopt.m"
                            {
#line 431 "getopt.m"
                              mercury__getopt__succeeded = mercury__string__first_char_3_p_2(mercury__getopt__EqualOptionArg_35, (MR_Char) 61, &mercury__getopt__OptionArg_36);
                            }
#line 433 "getopt.m"
                            if (mercury__getopt__succeeded)
#line 432 "getopt.m"
                              {
#line 432 "getopt.m"
                                mercury__getopt__MaybeArg_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 432 "getopt.m"
                                MR_hl_field(MR_mktag(1), mercury__getopt__MaybeArg_37, 0) = ((MR_Box) (mercury__getopt__OptionArg_36));
#line 432 "getopt.m"
                              }
#line 433 "getopt.m"
                            else
#line 434 "getopt.m"
                              {
#line 434 "getopt.m"
                                {
#line 434 "getopt.m"
                                  mercury__require__error_1_p_0((MR_String) "bad split of --longoption=arg");
#line 434 "getopt.m"
                                  return;
                                }
#line 434 "getopt.m"
                              }
#line 430 "getopt.m"
                          }
#line 436 "getopt.m"
                        else
#line 437 "getopt.m"
                          {
#line 437 "getopt.m"
                            mercury__getopt__LongOption_94 = mercury__getopt__LongOptionStr_33;
#line 438 "getopt.m"
                            mercury__getopt__MaybeArg_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 437 "getopt.m"
                          }
#line 440 "getopt.m"
                        {
#line 440 "getopt.m"
                          mercury__getopt__OptionName_38 = mercury__string__f_43_43_2_f_0((MR_String) "--", mercury__getopt__LongOption_94);
                        }
#line 441 "getopt.m"
                        mercury__getopt__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt__LongOptionPred_95, (MR_Integer) 1)));
#line 441 "getopt.m"
                        {
#line 441 "getopt.m"
                          mercury__getopt__succeeded = mercury__getopt__func_1(((MR_Box) mercury__getopt__LongOptionPred_95), ((MR_Box) (mercury__getopt__LongOption_94)), &mercury__getopt__Flag_92);
                        }
#line 453 "getopt.m"
                        if (mercury__getopt__succeeded)
#line 447 "getopt.m"
                          {
#line 447 "getopt.m"
                            MR_Word mercury__getopt__OptionData_39;
#line 442 "getopt.m"
                            MR_Word mercury__getopt__TypeCtorInfo_148_148 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 442 "getopt.m"
                            MR_Box mercury__getopt__conv2_OptionData_39;

#line 442 "getopt.m"
                            {
#line 442 "getopt.m"
                              mercury__getopt__succeeded = mercury__map__search_3_p_0(mercury__getopt__TypeInfo_for_OptionType_147, mercury__getopt__TypeCtorInfo_148_148, mercury__getopt__HeadVar__6_6, mercury__getopt__Flag_92, &mercury__getopt__conv2_OptionData_39);
                            }
#line 442 "getopt.m"
                            if (mercury__getopt__succeeded)
#line 442 "getopt.m"
                              {
#line 442 "getopt.m"
                                mercury__getopt__OptionData_39 = ((MR_Word) mercury__getopt__conv2_OptionData_39);
#line 442 "getopt.m"
                                mercury__getopt__succeeded = MR_TRUE;
#line 442 "getopt.m"
                              }
#line 447 "getopt.m"
                            if (mercury__getopt__succeeded)
#line 443 "getopt.m"
                              {
#line 443 "getopt.m"
                                MR_Word mercury__getopt__V_63_63;

#line 443 "getopt.m"
                                {
#line 443 "getopt.m"
                                  mercury__getopt__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "getopt.m"
                                  MR_hl_field(MR_mktag(1), mercury__getopt__V_63_63, 0) = ((MR_Box) (mercury__getopt__Option_16));
#line 443 "getopt.m"
                                  MR_hl_field(MR_mktag(1), mercury__getopt__V_63_63, 1) = ((MR_Box) (mercury__getopt__HeadVar__4_4));
#line 443 "getopt.m"
                                }
#line 443 "getopt.m"
                                {
#line 443 "getopt.m"
                                  mercury__getopt__handle_long_option_13_p_0(mercury__getopt__TypeInfo_for_OptionType_147, mercury__getopt__OptionName_38, mercury__getopt__Flag_92, mercury__getopt__OptionData_39, mercury__getopt__MaybeArg_37, mercury__getopt__Args0_17, mercury__getopt__HeadVar__2_2, mercury__getopt__OptionOps_3, mercury__getopt__V_63_63, mercury__getopt__OptionArgs_5, mercury__getopt__HeadVar__6_6, mercury__getopt__HeadVar__7_7, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
#line 443 "getopt.m"
                                  return;
                                }
#line 443 "getopt.m"
                              }
#line 447 "getopt.m"
                            else
#line 448 "getopt.m"
                              {
#line 448 "getopt.m"
                                MR_String mercury__getopt__V_66_66;
#line 448 "getopt.m"
                                MR_String mercury__getopt__ErrorMsg_89;

#line 448 "getopt.m"
                                {
#line 448 "getopt.m"
                                  mercury__getopt__V_66_66 = mercury__string__f_43_43_2_f_0(mercury__getopt__Option_16, (MR_String) "\'");
                                }
#line 448 "getopt.m"
                                {
#line 448 "getopt.m"
                                  mercury__getopt__ErrorMsg_89 = mercury__string__f_43_43_2_f_0((MR_String) "unknown type for option \140", mercury__getopt__V_66_66);
                                }
#line 449 "getopt.m"
                                {
#line 449 "getopt.m"
                                  MR_Word base;
#line 449 "getopt.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 449 "getopt.m"
                                  *mercury__getopt__HeadVar__7_7 = base;
#line 449 "getopt.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__ErrorMsg_89));
#line 449 "getopt.m"
                                }
#line 450 "getopt.m"
                                *mercury__getopt__OptionArgs_5 = mercury__getopt__HeadVar__4_4;
#line 451 "getopt.m"
                                *mercury__getopt__HeadVar__2_2 = mercury__getopt__Args0_17;
#line 451 "getopt.m"
                                *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_8;
#line 448 "getopt.m"
                              }
#line 447 "getopt.m"
                          }
#line 453 "getopt.m"
                        else
#line 454 "getopt.m"
                          {
#line 454 "getopt.m"
                            MR_String mercury__getopt__V_69_69;
#line 454 "getopt.m"
                            MR_String mercury__getopt__ErrorMsg_91;

#line 454 "getopt.m"
                            {
#line 454 "getopt.m"
                              mercury__getopt__V_69_69 = mercury__string__f_43_43_2_f_0(mercury__getopt__OptionName_38, (MR_String) "\'");
                            }
#line 454 "getopt.m"
                            {
#line 454 "getopt.m"
                              mercury__getopt__ErrorMsg_91 = mercury__string__f_43_43_2_f_0((MR_String) "unrecognized option \140", mercury__getopt__V_69_69);
                            }
#line 455 "getopt.m"
                            {
#line 455 "getopt.m"
                              MR_Word base;
#line 455 "getopt.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 455 "getopt.m"
                              *mercury__getopt__HeadVar__7_7 = base;
#line 455 "getopt.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__ErrorMsg_91));
#line 455 "getopt.m"
                            }
#line 456 "getopt.m"
                            *mercury__getopt__OptionArgs_5 = mercury__getopt__HeadVar__4_4;
#line 457 "getopt.m"
                            *mercury__getopt__HeadVar__2_2 = mercury__getopt__Args0_17;
#line 457 "getopt.m"
                            *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_8;
#line 454 "getopt.m"
                          }
#line 427 "getopt.m"
                      }
#line 459 "getopt.m"
                    else
#line 505 "getopt.m"
                      {
#line 505 "getopt.m"
                        MR_String mercury__getopt__ShortOptions_40;

#line 459 "getopt.m"
                        {
#line 459 "getopt.m"
                          mercury__getopt__succeeded = mercury__string__first_char_3_p_2(mercury__getopt__Option_16, (MR_Char) 45, &mercury__getopt__ShortOptions_40);
                        }
#line 459 "getopt.m"
                        if (mercury__getopt__succeeded)
#line 459 "getopt.m"
                          {
#line 459 "getopt.m"
                            mercury__getopt__succeeded = (strcmp(mercury__getopt__ShortOptions_40, (MR_String) "") == 0);
#line 459 "getopt.m"
                            mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 459 "getopt.m"
                          }
#line 505 "getopt.m"
                        if (mercury__getopt__succeeded)
#line 460 "getopt.m"
                          {
#line 460 "getopt.m"
                            MR_Word mercury__getopt__ShortOptionsList_41;
#line 485 "getopt.m"
                            MR_Char mercury__getopt__SingleShortOpt_42;
#line 462 "getopt.m"
                            MR_Word mercury__getopt__V_72_72;
#line 462 "getopt.m"
                            MR_Char mercury__getopt__V_73_73;
#line 462 "getopt.m"
                            MR_Word mercury__getopt__V_74_74;

#line 460 "getopt.m"
                            {
#line 460 "getopt.m"
                              mercury__string__to_char_list_2_p_0(mercury__getopt__ShortOptions_40, &mercury__getopt__ShortOptionsList_41);
                            }
#line 462 "getopt.m"
                            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__ShortOptionsList_41)) == (MR_mktag((MR_Integer) 1)));
#line 462 "getopt.m"
                            if (mercury__getopt__succeeded)
#line 462 "getopt.m"
                              {
#line 462 "getopt.m"
                                mercury__getopt__SingleShortOpt_42 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__ShortOptionsList_41, (MR_Integer) 0)));
#line 462 "getopt.m"
                                mercury__getopt__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__ShortOptionsList_41, (MR_Integer) 1)));
#line 462 "getopt.m"
                                mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__V_72_72)) == (MR_mktag((MR_Integer) 1)));
#line 462 "getopt.m"
                                if (mercury__getopt__succeeded)
#line 462 "getopt.m"
                                  {
#line 462 "getopt.m"
                                    mercury__getopt__V_73_73 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__V_72_72, (MR_Integer) 0)));
#line 462 "getopt.m"
                                    mercury__getopt__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__V_72_72, (MR_Integer) 1)));
#line 462 "getopt.m"
                                    mercury__getopt__succeeded = (mercury__getopt__V_73_73 == (MR_Char) 45);
#line 462 "getopt.m"
                                    if (mercury__getopt__succeeded)
#line 462 "getopt.m"
                                      mercury__getopt__succeeded = (mercury__getopt__V_74_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 462 "getopt.m"
                                  }
#line 462 "getopt.m"
                              }
#line 485 "getopt.m"
                            if (mercury__getopt__succeeded)
#line 463 "getopt.m"
                              {
#line 463 "getopt.m"
                                MR_Word mercury__getopt__ShortOptionPred_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 0)));
#line 463 "getopt.m"
                                MR_Word mercury__getopt__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 1)));
#line 463 "getopt.m"
                                MR_Word mercury__getopt__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 2)));
#line 479 "getopt.m"
                                MR_Box mercury__getopt__Flag_104;
#line 464 "getopt.m"
                                MR_bool MR_CALL (* mercury__getopt__func_3)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt__ShortOptionPred_43, (MR_Integer) 1)));

#line 464 "getopt.m"
                                {
#line 464 "getopt.m"
                                  mercury__getopt__succeeded = mercury__getopt__func_3(((MR_Box) mercury__getopt__ShortOptionPred_43), ((MR_Box) (MR_Word) (mercury__getopt__SingleShortOpt_42)), &mercury__getopt__Flag_104);
                                }
#line 479 "getopt.m"
                                if (mercury__getopt__succeeded)
#line 465 "getopt.m"
                                  {
#line 465 "getopt.m"
                                    MR_Word mercury__getopt__V_75_75;
#line 465 "getopt.m"
                                    MR_Word mercury__getopt__V_77_77;
#line 465 "getopt.m"
                                    MR_Word mercury__getopt__V_78_78 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 465 "getopt.m"
                                    MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_79_79;
#line 465 "getopt.m"
                                    MR_String mercury__getopt__OptName_100;
#line 465 "getopt.m"
                                    MR_Word mercury__getopt__Result1_101;

#line 465 "getopt.m"
                                    {
#line 465 "getopt.m"
                                      mercury__getopt__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 465 "getopt.m"
                                      MR_hl_field(MR_mktag(1), mercury__getopt__V_77_77, 0) = ((MR_Box) (MR_Word) (mercury__getopt__SingleShortOpt_42));
#line 465 "getopt.m"
                                      MR_hl_field(MR_mktag(1), mercury__getopt__V_77_77, 1) = ((MR_Box) (mercury__getopt__V_78_78));
#line 465 "getopt.m"
                                    }
#line 465 "getopt.m"
                                    {
#line 465 "getopt.m"
                                      mercury__getopt__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 465 "getopt.m"
                                      MR_hl_field(MR_mktag(1), mercury__getopt__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
#line 465 "getopt.m"
                                      MR_hl_field(MR_mktag(1), mercury__getopt__V_75_75, 1) = ((MR_Box) (mercury__getopt__V_77_77));
#line 465 "getopt.m"
                                    }
#line 465 "getopt.m"
                                    {
#line 465 "getopt.m"
                                      mercury__string__from_char_list_2_p_0(mercury__getopt__V_75_75, &mercury__getopt__OptName_100);
                                    }
#line 466 "getopt.m"
                                    {
#line 466 "getopt.m"
                                      mercury__getopt__process_negated_option_7_p_0(mercury__getopt__TypeInfo_for_OptionType_147, mercury__getopt__OptName_100, mercury__getopt__Flag_104, mercury__getopt__OptionOps_3, mercury__getopt__HeadVar__6_6, &mercury__getopt__Result1_101, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt__STATE_VARIABLE_OptionsSet_79_79);
                                    }
#line 473 "getopt.m"
                                    if (((MR_tag((MR_Word) mercury__getopt__Result1_101)) == (MR_mktag((MR_Integer) 1))))
#line 474 "getopt.m"
                                      {
#line 475 "getopt.m"
                                        *mercury__getopt__HeadVar__7_7 = mercury__getopt__Result1_101;
#line 476 "getopt.m"
                                        *mercury__getopt__OptionArgs_5 = mercury__getopt__HeadVar__4_4;
#line 477 "getopt.m"
                                        *mercury__getopt__HeadVar__2_2 = mercury__getopt__Args0_17;
#line 477 "getopt.m"
                                        *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_79_79;
#line 474 "getopt.m"
                                      }
#line 473 "getopt.m"
                                    else
#line 469 "getopt.m"
                                      {
#line 469 "getopt.m"
                                        MR_Word mercury__getopt__V_80_80;
#line 469 "getopt.m"
                                        MR_Word mercury__getopt__OptionTable1_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result1_101, (MR_Integer) 0)));

#line 470 "getopt.m"
                                        {
#line 470 "getopt.m"
                                          mercury__getopt__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "getopt.m"
                                          MR_hl_field(MR_mktag(1), mercury__getopt__V_80_80, 0) = ((MR_Box) (mercury__getopt__Option_16));
#line 470 "getopt.m"
                                          MR_hl_field(MR_mktag(1), mercury__getopt__V_80_80, 1) = ((MR_Box) (mercury__getopt__HeadVar__4_4));
#line 470 "getopt.m"
                                        }
#line 470 "getopt.m"
                                        /* direct tailcall eliminated */
#line 470 "getopt.m"
                                        {
#line 470 "getopt.m"
                                          MR_Word mercury__getopt__HeadVar__1__tmp_copy_1 = mercury__getopt__Args0_17;
#line 470 "getopt.m"
                                          MR_Word mercury__getopt__HeadVar__4__tmp_copy_4 = mercury__getopt__V_80_80;
#line 470 "getopt.m"
                                          MR_Word mercury__getopt__HeadVar__6__tmp_copy_6 = mercury__getopt__OptionTable1_98;
#line 470 "getopt.m"
                                          MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0__tmp_copy_8 = mercury__getopt__STATE_VARIABLE_OptionsSet_79_79;

#line 470 "getopt.m"
                                          mercury__getopt__STATE_VARIABLE_OptionsSet_0_8 = mercury__getopt__STATE_VARIABLE_OptionsSet_0__tmp_copy_8;
#line 470 "getopt.m"
                                          mercury__getopt__HeadVar__6_6 = mercury__getopt__HeadVar__6__tmp_copy_6;
#line 470 "getopt.m"
                                          mercury__getopt__HeadVar__4_4 = mercury__getopt__HeadVar__4__tmp_copy_4;
#line 470 "getopt.m"
                                          mercury__getopt__HeadVar__1_1 = mercury__getopt__HeadVar__1__tmp_copy_1;
#line 470 "getopt.m"
                                        }
#line 470 "getopt.m"
                                        continue;
#line 469 "getopt.m"
                                      }
#line 465 "getopt.m"
                                  }
#line 479 "getopt.m"
                                else
#line 480 "getopt.m"
                                  {
#line 480 "getopt.m"
                                    MR_String mercury__getopt__V_83_83;
#line 480 "getopt.m"
                                    MR_String mercury__getopt__ErrorMsg_103;

#line 480 "getopt.m"
                                    {
#line 480 "getopt.m"
                                      mercury__getopt__V_83_83 = mercury__string__f_43_43_2_f_0(mercury__getopt__ShortOptions_40, (MR_String) "\'");
                                    }
#line 480 "getopt.m"
                                    {
#line 480 "getopt.m"
                                      mercury__getopt__ErrorMsg_103 = mercury__string__f_43_43_2_f_0((MR_String) "unrecognized option \140-", mercury__getopt__V_83_83);
                                    }
#line 481 "getopt.m"
                                    {
#line 481 "getopt.m"
                                      MR_Word base;
#line 481 "getopt.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 481 "getopt.m"
                                      *mercury__getopt__HeadVar__7_7 = base;
#line 481 "getopt.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__ErrorMsg_103));
#line 481 "getopt.m"
                                    }
#line 482 "getopt.m"
                                    *mercury__getopt__OptionArgs_5 = mercury__getopt__HeadVar__4_4;
#line 483 "getopt.m"
                                    *mercury__getopt__HeadVar__2_2 = mercury__getopt__Args0_17;
#line 483 "getopt.m"
                                    *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_8;
#line 480 "getopt.m"
                                  }
#line 463 "getopt.m"
                              }
#line 485 "getopt.m"
                            else
#line 493 "getopt.m"
                              {
#line 493 "getopt.m"
                                MR_Word mercury__getopt__Args1_45;
#line 493 "getopt.m"
                                MR_Word mercury__getopt__OptionArgs1_46;
#line 493 "getopt.m"
                                MR_Word mercury__getopt__V_85_85;
#line 493 "getopt.m"
                                MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_86_86;
#line 493 "getopt.m"
                                MR_Word mercury__getopt__Result1_116;

#line 491 "getopt.m"
                                {
#line 491 "getopt.m"
                                  mercury__getopt__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 491 "getopt.m"
                                  MR_hl_field(MR_mktag(1), mercury__getopt__V_85_85, 0) = ((MR_Box) (mercury__getopt__Option_16));
#line 491 "getopt.m"
                                  MR_hl_field(MR_mktag(1), mercury__getopt__V_85_85, 1) = ((MR_Box) (mercury__getopt__HeadVar__4_4));
#line 491 "getopt.m"
                                }
#line 491 "getopt.m"
                                {
#line 491 "getopt.m"
                                  mercury__getopt__handle_short_options_10_p_0(mercury__getopt__TypeInfo_for_OptionType_147, mercury__getopt__ShortOptionsList_41, mercury__getopt__OptionOps_3, mercury__getopt__Args0_17, &mercury__getopt__Args1_45, mercury__getopt__V_85_85, &mercury__getopt__OptionArgs1_46, mercury__getopt__HeadVar__6_6, &mercury__getopt__Result1_116, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt__STATE_VARIABLE_OptionsSet_86_86);
                                }
#line 498 "getopt.m"
                                if (((MR_tag((MR_Word) mercury__getopt__Result1_116)) == (MR_mktag((MR_Integer) 1))))
#line 499 "getopt.m"
                                  {
#line 500 "getopt.m"
                                    *mercury__getopt__HeadVar__7_7 = mercury__getopt__Result1_116;
#line 501 "getopt.m"
                                    *mercury__getopt__OptionArgs_5 = mercury__getopt__OptionArgs1_46;
#line 502 "getopt.m"
                                    *mercury__getopt__HeadVar__2_2 = mercury__getopt__Args0_17;
#line 502 "getopt.m"
                                    *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_86_86;
#line 499 "getopt.m"
                                  }
#line 498 "getopt.m"
                                else
#line 495 "getopt.m"
                                  {
#line 495 "getopt.m"
                                    MR_Word mercury__getopt__OptionTable1_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result1_116, (MR_Integer) 0)));

#line 496 "getopt.m"
                                    /* direct tailcall eliminated */
#line 496 "getopt.m"
                                    {
#line 496 "getopt.m"
                                      MR_Word mercury__getopt__HeadVar__1__tmp_copy_1 = mercury__getopt__Args1_45;
#line 496 "getopt.m"
                                      MR_Word mercury__getopt__HeadVar__4__tmp_copy_4 = mercury__getopt__OptionArgs1_46;
#line 496 "getopt.m"
                                      MR_Word mercury__getopt__HeadVar__6__tmp_copy_6 = mercury__getopt__OptionTable1_114;
#line 496 "getopt.m"
                                      MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0__tmp_copy_8 = mercury__getopt__STATE_VARIABLE_OptionsSet_86_86;

#line 496 "getopt.m"
                                      mercury__getopt__STATE_VARIABLE_OptionsSet_0_8 = mercury__getopt__STATE_VARIABLE_OptionsSet_0__tmp_copy_8;
#line 496 "getopt.m"
                                      mercury__getopt__HeadVar__6_6 = mercury__getopt__HeadVar__6__tmp_copy_6;
#line 496 "getopt.m"
                                      mercury__getopt__HeadVar__4_4 = mercury__getopt__HeadVar__4__tmp_copy_4;
#line 496 "getopt.m"
                                      mercury__getopt__HeadVar__1_1 = mercury__getopt__HeadVar__1__tmp_copy_1;
#line 496 "getopt.m"
                                    }
#line 496 "getopt.m"
                                    continue;
#line 495 "getopt.m"
                                  }
#line 493 "getopt.m"
                              }
#line 460 "getopt.m"
                          }
#line 505 "getopt.m"
                        else
#line 510 "getopt.m"
                          {
#line 510 "getopt.m"
                            MR_Word mercury__getopt__Args1_128;

#line 509 "getopt.m"
                            {
#line 509 "getopt.m"
                              mercury__getopt__process_arguments_9_p_0(mercury__getopt__TypeInfo_for_OptionType_147, mercury__getopt__Args0_17, &mercury__getopt__Args1_128, mercury__getopt__OptionOps_3, mercury__getopt__HeadVar__4_4, mercury__getopt__OptionArgs_5, mercury__getopt__HeadVar__6_6, mercury__getopt__HeadVar__7_7, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
                            }
#line 511 "getopt.m"
                            {
#line 511 "getopt.m"
                              MR_Word base;
#line 511 "getopt.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "getopt.m"
                              *mercury__getopt__HeadVar__2_2 = base;
#line 511 "getopt.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Option_16));
#line 511 "getopt.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__getopt__Args1_128));
#line 511 "getopt.m"
                            }
#line 510 "getopt.m"
                          }
#line 505 "getopt.m"
                      }
#line 459 "getopt.m"
                  }
#line 426 "getopt.m"
              }
#line 398 "getopt.m"
          }
#line 395 "getopt.m"
      }
#line 395 "getopt.m"
      break;
#line 395 "getopt.m"
    }
#line 389 "getopt.m"
}

#line 286 "getopt.m"
MR_Word MR_CALL 
mercury__getopt__lookup_accumulating_option_2_f_0(
#line 286 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_7,
#line 286 "getopt.m"
  MR_Word mercury__getopt__OT_4,
#line 286 "getopt.m"
  MR_Box mercury__getopt__Opt_5)
#line 286 "getopt.m"
{
#line 972 "getopt.m"
  {
#line 972 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 972 "getopt.m"
    MR_Word mercury__getopt__Ss_6;
#line 972 "getopt.m"
    MR_Word mercury__getopt__Val0_11;
#line 970 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 970 "getopt.m"
    MR_Word mercury__getopt__V_12_12;
#line 970 "getopt.m"
    MR_Box mercury__getopt__conv0_V_12_12;

#line 970 "getopt.m"
    {
#line 970 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_7, mercury__getopt__TypeCtorInfo_11_14, mercury__getopt__OT_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_12_12);
    }
#line 970 "getopt.m"
    mercury__getopt__V_12_12 = ((MR_Word) mercury__getopt__conv0_V_12_12);
#line 970 "getopt.m"
    mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__V_12_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_12_12, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 970 "getopt.m"
    if (mercury__getopt__succeeded)
#line 970 "getopt.m"
      {
#line 970 "getopt.m"
        mercury__getopt__Val0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_12_12, (MR_Integer) 1)));
#line 971 "getopt.m"
        mercury__getopt__Ss_6 = mercury__getopt__Val0_11;
#line 970 "getopt.m"
      }
#line 970 "getopt.m"
    else
#line 973 "getopt.m"
      {
#line 973 "getopt.m"
        {
#line 973 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected accumulating option and didn\'t get one.");
        }
#line 973 "getopt.m"
      }
#line 972 "getopt.m"
    return mercury__getopt__Ss_6;
#line 972 "getopt.m"
  }
#line 286 "getopt.m"
}

#line 284 "getopt.m"
void MR_CALL 
mercury__getopt__lookup_accumulating_option_3_p_0(
#line 284 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_10,
#line 284 "getopt.m"
  MR_Word mercury__getopt__OptionTable_4,
#line 284 "getopt.m"
  MR_Box mercury__getopt__Opt_5,
#line 284 "getopt.m"
  MR_Word * mercury__getopt__Val_6)
#line 284 "getopt.m"
{
#line 972 "getopt.m"
  {
#line 972 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 972 "getopt.m"
    MR_Word mercury__getopt__Val0_7;
#line 970 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 970 "getopt.m"
    MR_Word mercury__getopt__V_8_8;
#line 970 "getopt.m"
    MR_Box mercury__getopt__conv0_V_8_8;

#line 970 "getopt.m"
    {
#line 970 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_10, mercury__getopt__TypeCtorInfo_11_11, mercury__getopt__OptionTable_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_8_8);
    }
#line 970 "getopt.m"
    mercury__getopt__V_8_8 = ((MR_Word) mercury__getopt__conv0_V_8_8);
#line 970 "getopt.m"
    mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__V_8_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_8_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 970 "getopt.m"
    if (mercury__getopt__succeeded)
#line 970 "getopt.m"
      {
#line 970 "getopt.m"
        mercury__getopt__Val0_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_8_8, (MR_Integer) 1)));
#line 971 "getopt.m"
        *mercury__getopt__Val_6 = mercury__getopt__Val0_7;
#line 970 "getopt.m"
      }
#line 970 "getopt.m"
    else
#line 973 "getopt.m"
      {
#line 973 "getopt.m"
        {
#line 973 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected accumulating option and didn\'t get one.");
#line 973 "getopt.m"
          return;
        }
#line 973 "getopt.m"
      }
#line 972 "getopt.m"
  }
#line 284 "getopt.m"
}

#line 281 "getopt.m"
MR_Word MR_CALL 
mercury__getopt__lookup_maybe_string_option_2_f_0(
#line 281 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_7,
#line 281 "getopt.m"
  MR_Word mercury__getopt__OT_4,
#line 281 "getopt.m"
  MR_Box mercury__getopt__Opt_5)
#line 281 "getopt.m"
{
#line 965 "getopt.m"
  {
#line 965 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 965 "getopt.m"
    MR_Word mercury__getopt__MS_6;
#line 965 "getopt.m"
    MR_Word mercury__getopt__Val0_11;
#line 963 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 963 "getopt.m"
    MR_Word mercury__getopt__V_12_12;
#line 963 "getopt.m"
    MR_Box mercury__getopt__conv0_V_12_12;

#line 963 "getopt.m"
    {
#line 963 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_7, mercury__getopt__TypeCtorInfo_11_14, mercury__getopt__OT_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_12_12);
    }
#line 963 "getopt.m"
    mercury__getopt__V_12_12 = ((MR_Word) mercury__getopt__conv0_V_12_12);
#line 963 "getopt.m"
    mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__V_12_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_12_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 963 "getopt.m"
    if (mercury__getopt__succeeded)
#line 963 "getopt.m"
      {
#line 963 "getopt.m"
        mercury__getopt__Val0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_12_12, (MR_Integer) 1)));
#line 964 "getopt.m"
        mercury__getopt__MS_6 = mercury__getopt__Val0_11;
#line 963 "getopt.m"
      }
#line 963 "getopt.m"
    else
#line 966 "getopt.m"
      {
#line 966 "getopt.m"
        {
#line 966 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected maybe_string option and didn\'t get one.");
        }
#line 966 "getopt.m"
      }
#line 965 "getopt.m"
    return mercury__getopt__MS_6;
#line 965 "getopt.m"
  }
#line 281 "getopt.m"
}

#line 279 "getopt.m"
void MR_CALL 
mercury__getopt__lookup_maybe_string_option_3_p_0(
#line 279 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_10,
#line 279 "getopt.m"
  MR_Word mercury__getopt__OptionTable_4,
#line 279 "getopt.m"
  MR_Box mercury__getopt__Opt_5,
#line 279 "getopt.m"
  MR_Word * mercury__getopt__Val_6)
#line 279 "getopt.m"
{
#line 965 "getopt.m"
  {
#line 965 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 965 "getopt.m"
    MR_Word mercury__getopt__Val0_7;
#line 963 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 963 "getopt.m"
    MR_Word mercury__getopt__V_8_8;
#line 963 "getopt.m"
    MR_Box mercury__getopt__conv0_V_8_8;

#line 963 "getopt.m"
    {
#line 963 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_10, mercury__getopt__TypeCtorInfo_11_11, mercury__getopt__OptionTable_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_8_8);
    }
#line 963 "getopt.m"
    mercury__getopt__V_8_8 = ((MR_Word) mercury__getopt__conv0_V_8_8);
#line 963 "getopt.m"
    mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__V_8_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_8_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 963 "getopt.m"
    if (mercury__getopt__succeeded)
#line 963 "getopt.m"
      {
#line 963 "getopt.m"
        mercury__getopt__Val0_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_8_8, (MR_Integer) 1)));
#line 964 "getopt.m"
        *mercury__getopt__Val_6 = mercury__getopt__Val0_7;
#line 963 "getopt.m"
      }
#line 963 "getopt.m"
    else
#line 966 "getopt.m"
      {
#line 966 "getopt.m"
        {
#line 966 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected maybe_string option and didn\'t get one.");
#line 966 "getopt.m"
          return;
        }
#line 966 "getopt.m"
      }
#line 965 "getopt.m"
  }
#line 279 "getopt.m"
}

#line 276 "getopt.m"
MR_Word MR_CALL 
mercury__getopt__lookup_maybe_int_option_2_f_0(
#line 276 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_7,
#line 276 "getopt.m"
  MR_Word mercury__getopt__OT_4,
#line 276 "getopt.m"
  MR_Box mercury__getopt__Opt_5)
#line 276 "getopt.m"
{
#line 958 "getopt.m"
  {
#line 958 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 958 "getopt.m"
    MR_Word mercury__getopt__MN_6;
#line 958 "getopt.m"
    MR_Word mercury__getopt__Val0_11;
#line 956 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 956 "getopt.m"
    MR_Word mercury__getopt__V_12_12;
#line 956 "getopt.m"
    MR_Box mercury__getopt__conv0_V_12_12;

#line 956 "getopt.m"
    {
#line 956 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_7, mercury__getopt__TypeCtorInfo_11_14, mercury__getopt__OT_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_12_12);
    }
#line 956 "getopt.m"
    mercury__getopt__V_12_12 = ((MR_Word) mercury__getopt__conv0_V_12_12);
#line 956 "getopt.m"
    mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__V_12_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_12_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 956 "getopt.m"
    if (mercury__getopt__succeeded)
#line 956 "getopt.m"
      {
#line 956 "getopt.m"
        mercury__getopt__Val0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_12_12, (MR_Integer) 1)));
#line 957 "getopt.m"
        mercury__getopt__MN_6 = mercury__getopt__Val0_11;
#line 956 "getopt.m"
      }
#line 956 "getopt.m"
    else
#line 959 "getopt.m"
      {
#line 959 "getopt.m"
        {
#line 959 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected maybe_int option and didn\'t get one.");
        }
#line 959 "getopt.m"
      }
#line 958 "getopt.m"
    return mercury__getopt__MN_6;
#line 958 "getopt.m"
  }
#line 276 "getopt.m"
}

#line 274 "getopt.m"
void MR_CALL 
mercury__getopt__lookup_maybe_int_option_3_p_0(
#line 274 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_10,
#line 274 "getopt.m"
  MR_Word mercury__getopt__OptionTable_4,
#line 274 "getopt.m"
  MR_Box mercury__getopt__Opt_5,
#line 274 "getopt.m"
  MR_Word * mercury__getopt__Val_6)
#line 274 "getopt.m"
{
#line 958 "getopt.m"
  {
#line 958 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 958 "getopt.m"
    MR_Word mercury__getopt__Val0_7;
#line 956 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 956 "getopt.m"
    MR_Word mercury__getopt__V_8_8;
#line 956 "getopt.m"
    MR_Box mercury__getopt__conv0_V_8_8;

#line 956 "getopt.m"
    {
#line 956 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_10, mercury__getopt__TypeCtorInfo_11_11, mercury__getopt__OptionTable_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_8_8);
    }
#line 956 "getopt.m"
    mercury__getopt__V_8_8 = ((MR_Word) mercury__getopt__conv0_V_8_8);
#line 956 "getopt.m"
    mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__V_8_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_8_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 956 "getopt.m"
    if (mercury__getopt__succeeded)
#line 956 "getopt.m"
      {
#line 956 "getopt.m"
        mercury__getopt__Val0_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_8_8, (MR_Integer) 1)));
#line 957 "getopt.m"
        *mercury__getopt__Val_6 = mercury__getopt__Val0_7;
#line 956 "getopt.m"
      }
#line 956 "getopt.m"
    else
#line 959 "getopt.m"
      {
#line 959 "getopt.m"
        {
#line 959 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected maybe_int option and didn\'t get one.");
#line 959 "getopt.m"
          return;
        }
#line 959 "getopt.m"
      }
#line 958 "getopt.m"
  }
#line 274 "getopt.m"
}

#line 272 "getopt.m"
MR_String MR_CALL 
mercury__getopt__lookup_string_option_2_f_0(
#line 272 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_7,
#line 272 "getopt.m"
  MR_Word mercury__getopt__OT_4,
#line 272 "getopt.m"
  MR_Box mercury__getopt__Opt_5)
#line 272 "getopt.m"
{
#line 951 "getopt.m"
  {
#line 951 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 951 "getopt.m"
    MR_String mercury__getopt__S_6;
#line 951 "getopt.m"
    MR_String mercury__getopt__Val0_11;
#line 949 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 949 "getopt.m"
    MR_Word mercury__getopt__V_12_12;
#line 949 "getopt.m"
    MR_Box mercury__getopt__conv0_V_12_12;

#line 949 "getopt.m"
    {
#line 949 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_7, mercury__getopt__TypeCtorInfo_11_14, mercury__getopt__OT_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_12_12);
    }
#line 949 "getopt.m"
    mercury__getopt__V_12_12 = ((MR_Word) mercury__getopt__conv0_V_12_12);
#line 949 "getopt.m"
    mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__V_12_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_12_12, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 949 "getopt.m"
    if (mercury__getopt__succeeded)
#line 949 "getopt.m"
      {
#line 949 "getopt.m"
        mercury__getopt__Val0_11 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__V_12_12, (MR_Integer) 1)));
#line 950 "getopt.m"
        mercury__getopt__S_6 = mercury__getopt__Val0_11;
#line 949 "getopt.m"
      }
#line 949 "getopt.m"
    else
#line 952 "getopt.m"
      {
#line 952 "getopt.m"
        {
#line 952 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected string option and didn\'t get one.");
        }
#line 952 "getopt.m"
      }
#line 951 "getopt.m"
    return mercury__getopt__S_6;
#line 951 "getopt.m"
  }
#line 272 "getopt.m"
}

#line 270 "getopt.m"
void MR_CALL 
mercury__getopt__lookup_string_option_3_p_0(
#line 270 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_10,
#line 270 "getopt.m"
  MR_Word mercury__getopt__OptionTable_4,
#line 270 "getopt.m"
  MR_Box mercury__getopt__Opt_5,
#line 270 "getopt.m"
  MR_String * mercury__getopt__Val_6)
#line 270 "getopt.m"
{
#line 951 "getopt.m"
  {
#line 951 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 951 "getopt.m"
    MR_String mercury__getopt__Val0_7;
#line 949 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 949 "getopt.m"
    MR_Word mercury__getopt__V_8_8;
#line 949 "getopt.m"
    MR_Box mercury__getopt__conv0_V_8_8;

#line 949 "getopt.m"
    {
#line 949 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_10, mercury__getopt__TypeCtorInfo_11_11, mercury__getopt__OptionTable_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_8_8);
    }
#line 949 "getopt.m"
    mercury__getopt__V_8_8 = ((MR_Word) mercury__getopt__conv0_V_8_8);
#line 949 "getopt.m"
    mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__V_8_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_8_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 949 "getopt.m"
    if (mercury__getopt__succeeded)
#line 949 "getopt.m"
      {
#line 949 "getopt.m"
        mercury__getopt__Val0_7 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__V_8_8, (MR_Integer) 1)));
#line 950 "getopt.m"
        *mercury__getopt__Val_6 = mercury__getopt__Val0_7;
#line 949 "getopt.m"
      }
#line 949 "getopt.m"
    else
#line 952 "getopt.m"
      {
#line 952 "getopt.m"
        {
#line 952 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected string option and didn\'t get one.");
#line 952 "getopt.m"
          return;
        }
#line 952 "getopt.m"
      }
#line 951 "getopt.m"
  }
#line 270 "getopt.m"
}

#line 268 "getopt.m"
MR_Integer MR_CALL 
mercury__getopt__lookup_int_option_2_f_0(
#line 268 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_7,
#line 268 "getopt.m"
  MR_Word mercury__getopt__OT_4,
#line 268 "getopt.m"
  MR_Box mercury__getopt__Opt_5)
#line 268 "getopt.m"
{
#line 944 "getopt.m"
  {
#line 944 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 944 "getopt.m"
    MR_Integer mercury__getopt__N_6;
#line 944 "getopt.m"
    MR_Integer mercury__getopt__Val0_11;
#line 942 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 942 "getopt.m"
    MR_Word mercury__getopt__V_12_12;
#line 942 "getopt.m"
    MR_Box mercury__getopt__conv0_V_12_12;

#line 942 "getopt.m"
    {
#line 942 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_7, mercury__getopt__TypeCtorInfo_11_14, mercury__getopt__OT_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_12_12);
    }
#line 942 "getopt.m"
    mercury__getopt__V_12_12 = ((MR_Word) mercury__getopt__conv0_V_12_12);
#line 942 "getopt.m"
    mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__V_12_12)) == (MR_mktag((MR_Integer) 2)));
#line 942 "getopt.m"
    if (mercury__getopt__succeeded)
#line 942 "getopt.m"
      {
#line 942 "getopt.m"
        mercury__getopt__Val0_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt__V_12_12, (MR_Integer) 0)));
#line 943 "getopt.m"
        mercury__getopt__N_6 = mercury__getopt__Val0_11;
#line 942 "getopt.m"
      }
#line 942 "getopt.m"
    else
#line 945 "getopt.m"
      {
#line 945 "getopt.m"
        {
#line 945 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected int option and didn\'t get one.");
        }
#line 945 "getopt.m"
      }
#line 944 "getopt.m"
    return mercury__getopt__N_6;
#line 944 "getopt.m"
  }
#line 268 "getopt.m"
}

#line 266 "getopt.m"
void MR_CALL 
mercury__getopt__lookup_int_option_3_p_0(
#line 266 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_10,
#line 266 "getopt.m"
  MR_Word mercury__getopt__OptionTable_4,
#line 266 "getopt.m"
  MR_Box mercury__getopt__Opt_5,
#line 266 "getopt.m"
  MR_Integer * mercury__getopt__Val_6)
#line 266 "getopt.m"
{
#line 944 "getopt.m"
  {
#line 944 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 944 "getopt.m"
    MR_Integer mercury__getopt__Val0_7;
#line 942 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 942 "getopt.m"
    MR_Word mercury__getopt__V_8_8;
#line 942 "getopt.m"
    MR_Box mercury__getopt__conv0_V_8_8;

#line 942 "getopt.m"
    {
#line 942 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_10, mercury__getopt__TypeCtorInfo_11_11, mercury__getopt__OptionTable_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_8_8);
    }
#line 942 "getopt.m"
    mercury__getopt__V_8_8 = ((MR_Word) mercury__getopt__conv0_V_8_8);
#line 942 "getopt.m"
    mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__V_8_8)) == (MR_mktag((MR_Integer) 2)));
#line 942 "getopt.m"
    if (mercury__getopt__succeeded)
#line 942 "getopt.m"
      {
#line 942 "getopt.m"
        mercury__getopt__Val0_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt__V_8_8, (MR_Integer) 0)));
#line 943 "getopt.m"
        *mercury__getopt__Val_6 = mercury__getopt__Val0_7;
#line 942 "getopt.m"
      }
#line 942 "getopt.m"
    else
#line 945 "getopt.m"
      {
#line 945 "getopt.m"
        {
#line 945 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected int option and didn\'t get one.");
#line 945 "getopt.m"
          return;
        }
#line 945 "getopt.m"
      }
#line 944 "getopt.m"
  }
#line 266 "getopt.m"
}

#line 264 "getopt.m"
MR_Word MR_CALL 
mercury__getopt__lookup_bool_option_2_f_0(
#line 264 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_7,
#line 264 "getopt.m"
  MR_Word mercury__getopt__OT_4,
#line 264 "getopt.m"
  MR_Box mercury__getopt__Opt_5)
#line 264 "getopt.m"
{
#line 937 "getopt.m"
  {
#line 937 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 937 "getopt.m"
    MR_Word mercury__getopt__B_6;
#line 937 "getopt.m"
    MR_Word mercury__getopt__Val0_11;
#line 935 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 935 "getopt.m"
    MR_Word mercury__getopt__V_12_12;
#line 935 "getopt.m"
    MR_Box mercury__getopt__conv0_V_12_12;

#line 935 "getopt.m"
    {
#line 935 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_7, mercury__getopt__TypeCtorInfo_11_14, mercury__getopt__OT_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_12_12);
    }
#line 935 "getopt.m"
    mercury__getopt__V_12_12 = ((MR_Word) mercury__getopt__conv0_V_12_12);
#line 935 "getopt.m"
    mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 935 "getopt.m"
    if (mercury__getopt__succeeded)
#line 935 "getopt.m"
      {
#line 935 "getopt.m"
        mercury__getopt__Val0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__V_12_12, (MR_Integer) 0)));
#line 936 "getopt.m"
        mercury__getopt__B_6 = mercury__getopt__Val0_11;
#line 935 "getopt.m"
      }
#line 935 "getopt.m"
    else
#line 938 "getopt.m"
      {
#line 938 "getopt.m"
        {
#line 938 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected bool option and didn\'t get one.");
        }
#line 938 "getopt.m"
      }
#line 937 "getopt.m"
    return mercury__getopt__B_6;
#line 937 "getopt.m"
  }
#line 264 "getopt.m"
}

#line 262 "getopt.m"
void MR_CALL 
mercury__getopt__lookup_bool_option_3_p_0(
#line 262 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_10,
#line 262 "getopt.m"
  MR_Word mercury__getopt__OptionTable_4,
#line 262 "getopt.m"
  MR_Box mercury__getopt__Opt_5,
#line 262 "getopt.m"
  MR_Word * mercury__getopt__Val_6)
#line 262 "getopt.m"
{
#line 937 "getopt.m"
  {
#line 937 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 937 "getopt.m"
    MR_Word mercury__getopt__Val0_7;
#line 935 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 935 "getopt.m"
    MR_Word mercury__getopt__V_8_8;
#line 935 "getopt.m"
    MR_Box mercury__getopt__conv0_V_8_8;

#line 935 "getopt.m"
    {
#line 935 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_10, mercury__getopt__TypeCtorInfo_11_11, mercury__getopt__OptionTable_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_8_8);
    }
#line 935 "getopt.m"
    mercury__getopt__V_8_8 = ((MR_Word) mercury__getopt__conv0_V_8_8);
#line 935 "getopt.m"
    mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__V_8_8)) == (MR_mktag((MR_Integer) 1)));
#line 935 "getopt.m"
    if (mercury__getopt__succeeded)
#line 935 "getopt.m"
      {
#line 935 "getopt.m"
        mercury__getopt__Val0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__V_8_8, (MR_Integer) 0)));
#line 936 "getopt.m"
        *mercury__getopt__Val_6 = mercury__getopt__Val0_7;
#line 935 "getopt.m"
      }
#line 935 "getopt.m"
    else
#line 938 "getopt.m"
      {
#line 938 "getopt.m"
        {
#line 938 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected bool option and didn\'t get one.");
#line 938 "getopt.m"
          return;
        }
#line 938 "getopt.m"
      }
#line 937 "getopt.m"
  }
#line 262 "getopt.m"
}

#line 69 "solutions.opt"
static void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0_3(
#line 69 "solutions.opt"
  MR_Box mercury__getopt__closure_arg,
#line 69 "solutions.opt"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 69 "solutions.opt"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 69 "solutions.opt"
  MR_Box * mercury__getopt__wrapper_arg_3)
#line 69 "solutions.opt"
{
#line 69 "solutions.opt"
  {
#line 69 "solutions.opt"
    MR_Box mercury__getopt__closure = mercury__getopt__closure_arg;
#line 69 "solutions.opt"
    MR_Word mercury__getopt__conv1_HeadVar__3_3;

#line 69 "solutions.opt"
    {
#line 69 "solutions.opt"
      mercury__list__cons_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__closure, (MR_Integer) 3))), mercury__getopt__wrapper_arg_1, ((MR_Word) mercury__getopt__wrapper_arg_2), &mercury__getopt__conv1_HeadVar__3_3);
    }
#line 69 "solutions.opt"
    *mercury__getopt__wrapper_arg_3 = ((MR_Box) (mercury__getopt__conv1_HeadVar__3_3));
#line 69 "solutions.opt"
  }
#line 69 "solutions.opt"
}

#line 348 "getopt.m"
static void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0_1(
#line 348 "getopt.m"
  void * mercury__getopt__env_ptr_arg)
#line 348 "getopt.m"
{
#line 348 "getopt.m"
  {
#line 348 "getopt.m"
    struct mercury__getopt__init_option_table_multi_2_p_0_2_env_0_s * mercury__getopt__env_ptr = (struct mercury__getopt__init_option_table_multi_2_p_0_2_env_0_s *) mercury__getopt__env_ptr_arg;

#line 348 "getopt.m"
    *((mercury__getopt__env_ptr)->mercury__getopt__init_option_table_multi_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((mercury__getopt__env_ptr)->mercury__getopt__init_option_table_multi_2_p_0_2_env_0__conv0_HeadVar__3_10));
#line 348 "getopt.m"
    {
#line 348 "getopt.m"
      ((mercury__getopt__env_ptr)->mercury__getopt__init_option_table_multi_2_p_0_2_env_0__cont)((mercury__getopt__env_ptr)->mercury__getopt__init_option_table_multi_2_p_0_2_env_0__cont_env_ptr);
#line 348 "getopt.m"
      return;
    }
#line 348 "getopt.m"
  }
#line 348 "getopt.m"
}

#line 348 "getopt.m"
static void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0_2(
#line 348 "getopt.m"
  MR_Box mercury__getopt__closure_arg,
#line 348 "getopt.m"
  MR_Box * mercury__getopt__wrapper_arg_1,
#line 348 "getopt.m"
  MR_Cont mercury__getopt__cont,
#line 348 "getopt.m"
  void * mercury__getopt__cont_env_ptr)
#line 348 "getopt.m"
{
#line 348 "getopt.m"
  {
#line 348 "getopt.m"
    struct mercury__getopt__init_option_table_multi_2_p_0_2_env_0_s mercury__getopt__env;

#line 348 "getopt.m"
    (mercury__getopt__env).mercury__getopt__init_option_table_multi_2_p_0_2_env_0__wrapper_arg_1 = mercury__getopt__wrapper_arg_1;
#line 348 "getopt.m"
    (mercury__getopt__env).mercury__getopt__init_option_table_multi_2_p_0_2_env_0__cont = mercury__getopt__cont;
#line 348 "getopt.m"
    (mercury__getopt__env).mercury__getopt__init_option_table_multi_2_p_0_2_env_0__cont_env_ptr = mercury__getopt__cont_env_ptr;
#line 348 "getopt.m"
    {
#line 348 "getopt.m"
      MR_Box mercury__getopt__closure = mercury__getopt__closure_arg;

#line 348 "getopt.m"
      {
#line 348 "getopt.m"
        mercury__getopt__IntroducedFrom__pred__init_option_table_multi__348__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__closure, (MR_Integer) 4))), &(mercury__getopt__env).mercury__getopt__init_option_table_multi_2_p_0_2_env_0__conv0_HeadVar__3_10, mercury__getopt__init_option_table_multi_2_p_0_1, &mercury__getopt__env);
      }
#line 348 "getopt.m"
    }
#line 348 "getopt.m"
  }
#line 348 "getopt.m"
}

#line 155 "getopt.m"
void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0(
#line 155 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_12,
#line 155 "getopt.m"
  MR_Word mercury__getopt__OptionDefaultsPred_3,
#line 155 "getopt.m"
  MR_Word * mercury__getopt__OptionTable_4)
#line 155 "getopt.m"
{
#line 347 "getopt.m"
  {
#line 347 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 347 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_13_13;
#line 347 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_14_14;
#line 347 "getopt.m"
    MR_Word mercury__getopt__TypeInfo_15_15;
#line 347 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_12_29;
#line 347 "getopt.m"
    MR_Word mercury__getopt__TypeInfo_13_30;
#line 347 "getopt.m"
    MR_Word mercury__getopt__OptionDefaultsList_8;
#line 347 "getopt.m"
    MR_Word mercury__getopt__V_9_9;
#line 347 "getopt.m"
    MR_Word mercury__getopt__UnsortedList_5_18;
#line 347 "getopt.m"
    MR_Word mercury__getopt__V_5_23;
#line 347 "getopt.m"
    MR_Word mercury__getopt__V_6_25;
#line 347 "getopt.m"
    MR_Integer mercury__getopt__V_5_35;
#line 347 "getopt.m"
    MR_Word mercury__getopt__V_5_45;
#line 71 "solutions.opt"
    MR_Box mercury__getopt__conv2_UnsortedList_5_18;
#line 110 "list.opt"
    MR_Word mercury__getopt__conv3_OptionDefaultsList_8;

#line 348 "getopt.m"
    {
#line 348 "getopt.m"
      mercury__getopt__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 348 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_9_9, 0) = ((MR_Box) (&mercury__getopt_scalar_common_6[0]));
#line 348 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_9_9, 1) = ((MR_Box) (mercury__getopt__init_option_table_multi_2_p_0_2));
#line 348 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 348 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_9_9, 3) = ((MR_Box) (mercury__getopt__TypeInfo_for_OptionType_12));
#line 348 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_9_9, 4) = ((MR_Box) (mercury__getopt__OptionDefaultsPred_3));
#line 348 "getopt.m"
    }
#line 10970 "getopt.c"
    mercury__getopt__TypeCtorInfo_14_14 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 10972 "getopt.c"
    mercury__getopt__TypeCtorInfo_13_13 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 10974 "getopt.c"
    {
#line 10976 "getopt.c"
      mercury__getopt__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10978 "getopt.c"
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_15_15, 0) = ((MR_Box) (mercury__getopt__TypeCtorInfo_14_14));
#line 10980 "getopt.c"
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_15_15, 1) = ((MR_Box) (mercury__getopt__TypeInfo_for_OptionType_12));
#line 10982 "getopt.c"
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_15_15, 2) = ((MR_Box) (mercury__getopt__TypeCtorInfo_13_13));
#line 10984 "getopt.c"
    }
#line 69 "solutions.opt"
    {
#line 69 "solutions.opt"
      mercury__getopt__V_5_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 69 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_5_23, 0) = ((MR_Box) (&mercury__getopt_scalar_common_7[0]));
#line 69 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_5_23, 1) = ((MR_Box) (mercury__getopt__init_option_table_multi_2_p_0_3));
#line 69 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_5_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 69 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_5_23, 3) = ((MR_Box) (mercury__getopt__TypeInfo_15_15));
#line 69 "solutions.opt"
    }
#line 70 "solutions.opt"
    mercury__getopt__V_6_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 11002 "getopt.c"
    mercury__getopt__TypeCtorInfo_12_29 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 11004 "getopt.c"
    {
#line 11006 "getopt.c"
      mercury__getopt__TypeInfo_13_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11008 "getopt.c"
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_13_30, 0) = ((MR_Box) (mercury__getopt__TypeCtorInfo_12_29));
#line 11010 "getopt.c"
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_13_30, 1) = ((MR_Box) (mercury__getopt__TypeInfo_15_15));
#line 11012 "getopt.c"
    }
#line 71 "solutions.opt"
    {
#line 71 "solutions.opt"
      mercury__solutions__builtin_aggregate_4_p_0(mercury__getopt__TypeInfo_15_15, mercury__getopt__TypeInfo_13_30, (MR_Word) mercury__getopt__V_9_9, (MR_Word) mercury__getopt__V_5_23, ((MR_Box) (mercury__getopt__V_6_25)), &mercury__getopt__conv2_UnsortedList_5_18);
    }
#line 71 "solutions.opt"
    mercury__getopt__UnsortedList_5_18 = ((MR_Word) mercury__getopt__conv2_UnsortedList_5_18);
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__getopt__TypeInfo_15_15, (MR_Word) mercury__getopt__UnsortedList_5_18, (MR_Integer) 0, &mercury__getopt__V_5_35);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__getopt__TypeInfo_15_15, mercury__getopt__V_5_35, (MR_Word) mercury__getopt__UnsortedList_5_18, &mercury__getopt__conv3_OptionDefaultsList_8);
    }
#line 110 "list.opt"
    mercury__getopt__OptionDefaultsList_8 = (MR_Word) mercury__getopt__conv3_OptionDefaultsList_8;
#line 89 "tree234.opt"
    mercury__getopt__V_5_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 90 "tree234.opt"
    {
#line 90 "tree234.opt"
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__getopt__TypeInfo_for_OptionType_12, mercury__getopt__TypeCtorInfo_13_13, mercury__getopt__OptionDefaultsList_8, mercury__getopt__V_5_45, mercury__getopt__OptionTable_4);
#line 90 "tree234.opt"
      return;
    }
#line 347 "getopt.m"
  }
#line 155 "getopt.m"
}

#line 69 "solutions.opt"
static void MR_CALL 
mercury__getopt__init_option_table_2_p_0_3(
#line 69 "solutions.opt"
  MR_Box mercury__getopt__closure_arg,
#line 69 "solutions.opt"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 69 "solutions.opt"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 69 "solutions.opt"
  MR_Box * mercury__getopt__wrapper_arg_3)
#line 69 "solutions.opt"
{
#line 69 "solutions.opt"
  {
#line 69 "solutions.opt"
    MR_Box mercury__getopt__closure = mercury__getopt__closure_arg;
#line 69 "solutions.opt"
    MR_Word mercury__getopt__conv1_HeadVar__3_3;

#line 69 "solutions.opt"
    {
#line 69 "solutions.opt"
      mercury__list__cons_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__closure, (MR_Integer) 3))), mercury__getopt__wrapper_arg_1, ((MR_Word) mercury__getopt__wrapper_arg_2), &mercury__getopt__conv1_HeadVar__3_3);
    }
#line 69 "solutions.opt"
    *mercury__getopt__wrapper_arg_3 = ((MR_Box) (mercury__getopt__conv1_HeadVar__3_3));
#line 69 "solutions.opt"
  }
#line 69 "solutions.opt"
}

#line 341 "getopt.m"
static void MR_CALL 
mercury__getopt__init_option_table_2_p_0_1(
#line 341 "getopt.m"
  void * mercury__getopt__env_ptr_arg)
#line 341 "getopt.m"
{
#line 341 "getopt.m"
  {
#line 341 "getopt.m"
    struct mercury__getopt__init_option_table_2_p_0_2_env_0_s * mercury__getopt__env_ptr = (struct mercury__getopt__init_option_table_2_p_0_2_env_0_s *) mercury__getopt__env_ptr_arg;

#line 341 "getopt.m"
    *((mercury__getopt__env_ptr)->mercury__getopt__init_option_table_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((mercury__getopt__env_ptr)->mercury__getopt__init_option_table_2_p_0_2_env_0__conv0_HeadVar__3_10));
#line 341 "getopt.m"
    {
#line 341 "getopt.m"
      ((mercury__getopt__env_ptr)->mercury__getopt__init_option_table_2_p_0_2_env_0__cont)((mercury__getopt__env_ptr)->mercury__getopt__init_option_table_2_p_0_2_env_0__cont_env_ptr);
#line 341 "getopt.m"
      return;
    }
#line 341 "getopt.m"
  }
#line 341 "getopt.m"
}

#line 341 "getopt.m"
static void MR_CALL 
mercury__getopt__init_option_table_2_p_0_2(
#line 341 "getopt.m"
  MR_Box mercury__getopt__closure_arg,
#line 341 "getopt.m"
  MR_Box * mercury__getopt__wrapper_arg_1,
#line 341 "getopt.m"
  MR_Cont mercury__getopt__cont,
#line 341 "getopt.m"
  void * mercury__getopt__cont_env_ptr)
#line 341 "getopt.m"
{
#line 341 "getopt.m"
  {
#line 341 "getopt.m"
    struct mercury__getopt__init_option_table_2_p_0_2_env_0_s mercury__getopt__env;

#line 341 "getopt.m"
    (mercury__getopt__env).mercury__getopt__init_option_table_2_p_0_2_env_0__wrapper_arg_1 = mercury__getopt__wrapper_arg_1;
#line 341 "getopt.m"
    (mercury__getopt__env).mercury__getopt__init_option_table_2_p_0_2_env_0__cont = mercury__getopt__cont;
#line 341 "getopt.m"
    (mercury__getopt__env).mercury__getopt__init_option_table_2_p_0_2_env_0__cont_env_ptr = mercury__getopt__cont_env_ptr;
#line 341 "getopt.m"
    {
#line 341 "getopt.m"
      MR_Box mercury__getopt__closure = mercury__getopt__closure_arg;

#line 341 "getopt.m"
      {
#line 341 "getopt.m"
        mercury__getopt__IntroducedFrom__pred__init_option_table__341__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__closure, (MR_Integer) 4))), &(mercury__getopt__env).mercury__getopt__init_option_table_2_p_0_2_env_0__conv0_HeadVar__3_10, mercury__getopt__init_option_table_2_p_0_1, &mercury__getopt__env);
      }
#line 341 "getopt.m"
    }
#line 341 "getopt.m"
  }
#line 341 "getopt.m"
}

#line 151 "getopt.m"
void MR_CALL 
mercury__getopt__init_option_table_2_p_0(
#line 151 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_12,
#line 151 "getopt.m"
  MR_Word mercury__getopt__OptionDefaultsPred_3,
#line 151 "getopt.m"
  MR_Word * mercury__getopt__OptionTable_4)
#line 151 "getopt.m"
{
#line 340 "getopt.m"
  {
#line 340 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 340 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_13_13;
#line 340 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_14_14;
#line 340 "getopt.m"
    MR_Word mercury__getopt__TypeInfo_15_15;
#line 340 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_12_29;
#line 340 "getopt.m"
    MR_Word mercury__getopt__TypeInfo_13_30;
#line 340 "getopt.m"
    MR_Word mercury__getopt__OptionDefaultsList_8;
#line 340 "getopt.m"
    MR_Word mercury__getopt__V_9_9;
#line 340 "getopt.m"
    MR_Word mercury__getopt__UnsortedList_5_18;
#line 340 "getopt.m"
    MR_Word mercury__getopt__V_5_23;
#line 340 "getopt.m"
    MR_Word mercury__getopt__V_6_25;
#line 340 "getopt.m"
    MR_Integer mercury__getopt__V_5_35;
#line 340 "getopt.m"
    MR_Word mercury__getopt__V_5_45;
#line 71 "solutions.opt"
    MR_Box mercury__getopt__conv2_UnsortedList_5_18;
#line 110 "list.opt"
    MR_Word mercury__getopt__conv3_OptionDefaultsList_8;

#line 341 "getopt.m"
    {
#line 341 "getopt.m"
      mercury__getopt__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 341 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_9_9, 0) = ((MR_Box) (&mercury__getopt_scalar_common_6[0]));
#line 341 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_9_9, 1) = ((MR_Box) (mercury__getopt__init_option_table_2_p_0_2));
#line 341 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 341 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_9_9, 3) = ((MR_Box) (mercury__getopt__TypeInfo_for_OptionType_12));
#line 341 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_9_9, 4) = ((MR_Box) (mercury__getopt__OptionDefaultsPred_3));
#line 341 "getopt.m"
    }
#line 11206 "getopt.c"
    mercury__getopt__TypeCtorInfo_14_14 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 11208 "getopt.c"
    mercury__getopt__TypeCtorInfo_13_13 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 11210 "getopt.c"
    {
#line 11212 "getopt.c"
      mercury__getopt__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11214 "getopt.c"
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_15_15, 0) = ((MR_Box) (mercury__getopt__TypeCtorInfo_14_14));
#line 11216 "getopt.c"
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_15_15, 1) = ((MR_Box) (mercury__getopt__TypeInfo_for_OptionType_12));
#line 11218 "getopt.c"
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_15_15, 2) = ((MR_Box) (mercury__getopt__TypeCtorInfo_13_13));
#line 11220 "getopt.c"
    }
#line 69 "solutions.opt"
    {
#line 69 "solutions.opt"
      mercury__getopt__V_5_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 69 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_5_23, 0) = ((MR_Box) (&mercury__getopt_scalar_common_7[0]));
#line 69 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_5_23, 1) = ((MR_Box) (mercury__getopt__init_option_table_2_p_0_3));
#line 69 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_5_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 69 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_5_23, 3) = ((MR_Box) (mercury__getopt__TypeInfo_15_15));
#line 69 "solutions.opt"
    }
#line 70 "solutions.opt"
    mercury__getopt__V_6_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 11238 "getopt.c"
    mercury__getopt__TypeCtorInfo_12_29 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 11240 "getopt.c"
    {
#line 11242 "getopt.c"
      mercury__getopt__TypeInfo_13_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11244 "getopt.c"
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_13_30, 0) = ((MR_Box) (mercury__getopt__TypeCtorInfo_12_29));
#line 11246 "getopt.c"
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_13_30, 1) = ((MR_Box) (mercury__getopt__TypeInfo_15_15));
#line 11248 "getopt.c"
    }
#line 71 "solutions.opt"
    {
#line 71 "solutions.opt"
      mercury__solutions__builtin_aggregate_4_p_7(mercury__getopt__TypeInfo_15_15, mercury__getopt__TypeInfo_13_30, (MR_Word) mercury__getopt__V_9_9, (MR_Word) mercury__getopt__V_5_23, ((MR_Box) (mercury__getopt__V_6_25)), &mercury__getopt__conv2_UnsortedList_5_18);
    }
#line 71 "solutions.opt"
    mercury__getopt__UnsortedList_5_18 = ((MR_Word) mercury__getopt__conv2_UnsortedList_5_18);
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__getopt__TypeInfo_15_15, (MR_Word) mercury__getopt__UnsortedList_5_18, (MR_Integer) 0, &mercury__getopt__V_5_35);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__getopt__TypeInfo_15_15, mercury__getopt__V_5_35, (MR_Word) mercury__getopt__UnsortedList_5_18, &mercury__getopt__conv3_OptionDefaultsList_8);
    }
#line 110 "list.opt"
    mercury__getopt__OptionDefaultsList_8 = (MR_Word) mercury__getopt__conv3_OptionDefaultsList_8;
#line 89 "tree234.opt"
    mercury__getopt__V_5_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 90 "tree234.opt"
    {
#line 90 "tree234.opt"
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__getopt__TypeInfo_for_OptionType_12, mercury__getopt__TypeCtorInfo_13_13, mercury__getopt__OptionDefaultsList_8, mercury__getopt__V_5_45, mercury__getopt__OptionTable_4);
#line 90 "tree234.opt"
      return;
    }
#line 340 "getopt.m"
  }
#line 151 "getopt.m"
}

#line 145 "getopt.m"
void MR_CALL 
mercury__getopt__process_options_track_7_p_0(
#line 145 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_23,
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
#line 382 "getopt.m"
  {
#line 382 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 382 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_24_24;
#line 382 "getopt.m"
    MR_Word mercury__getopt__Short_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_8, (MR_Integer) 0)));
#line 382 "getopt.m"
    MR_Word mercury__getopt__Long_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_8, (MR_Integer) 1)));
#line 382 "getopt.m"
    MR_Word mercury__getopt__Special_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_8, (MR_Integer) 2)));
#line 382 "getopt.m"
    MR_Word mercury__getopt__Internal_18;
#line 382 "getopt.m"
    MR_Word mercury__getopt__RevOptionArgs_19;
#line 382 "getopt.m"
    MR_Word mercury__getopt__V_20_20;
#line 382 "getopt.m"
    MR_Word mercury__getopt__V_21_21;
#line 382 "getopt.m"
    MR_Word mercury__getopt__V_22_22;
#line 382 "getopt.m"
    MR_Word mercury__getopt__V_2_27;

#line 384 "getopt.m"
    {
#line 384 "getopt.m"
      mercury__getopt__V_20_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 384 "getopt.m"
      MR_hl_field(MR_mktag(2), mercury__getopt__V_20_20, 0) = ((MR_Box) (mercury__getopt__Special_17));
#line 384 "getopt.m"
    }
#line 384 "getopt.m"
    {
#line 384 "getopt.m"
      mercury__getopt__Internal_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 384 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__Internal_18, 0) = ((MR_Box) (mercury__getopt__Short_15));
#line 384 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__Internal_18, 1) = ((MR_Box) (mercury__getopt__Long_16));
#line 384 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__Internal_18, 2) = ((MR_Box) (mercury__getopt__V_20_20));
#line 384 "getopt.m"
    }
#line 385 "getopt.m"
    mercury__getopt__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 23 "set_ordlist.opt"
    mercury__getopt__V_2_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 22 "set_ordlist.opt"
    mercury__getopt__V_22_22 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 385 "getopt.m"
    {
#line 385 "getopt.m"
      mercury__getopt__process_arguments_9_p_0(mercury__getopt__TypeInfo_for_OptionType_23, mercury__getopt__Args0_9, mercury__getopt__NonOptionArgs_11, mercury__getopt__Internal_18, mercury__getopt__V_21_21, &mercury__getopt__RevOptionArgs_19, mercury__getopt__OptionTable0_12, mercury__getopt__Result_13, mercury__getopt__V_22_22, mercury__getopt__OptionsSet_14);
    }
#line 11360 "getopt.c"
    mercury__getopt__TypeCtorInfo_24_24 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__getopt__TypeCtorInfo_24_24, mercury__getopt__RevOptionArgs_19, mercury__getopt__OptionArgs_10);
#line 118 "list.opt"
      return;
    }
#line 382 "getopt.m"
  }
#line 145 "getopt.m"
}

#line 138 "getopt.m"
void MR_CALL 
mercury__getopt__process_options_5_p_0(
#line 138 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_26,
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
#line 358 "getopt.m"
  {
#line 358 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 358 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_27_27;
#line 358 "getopt.m"
    MR_Word mercury__getopt__Short_11;
#line 358 "getopt.m"
    MR_Word mercury__getopt__Long_12;
#line 358 "getopt.m"
    MR_Word mercury__getopt__MaybeSpecial_14;
#line 358 "getopt.m"
    MR_Word mercury__getopt__OptionTable0_15;
#line 358 "getopt.m"
    MR_Word mercury__getopt__Internal_17;
#line 358 "getopt.m"
    MR_Word mercury__getopt__RevOptionArgs_18;
#line 358 "getopt.m"
    MR_Word mercury__getopt__V_20_20;
#line 358 "getopt.m"
    MR_Word mercury__getopt__V_21_21;
#line 358 "getopt.m"
    MR_Word mercury__getopt__V_2_30;
#line 377 "getopt.m"
    MR_Word mercury__getopt___OptionsSet_19;

#line 363 "getopt.m"
    if (((MR_tag((MR_Word) mercury__getopt__OptionOps_6)) == (MR_mktag((MR_Integer) 0))))
#line 360 "getopt.m"
      {
#line 360 "getopt.m"
        MR_Word mercury__getopt__Defaults_13;

#line 360 "getopt.m"
        mercury__getopt__Short_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_6, (MR_Integer) 0)));
#line 360 "getopt.m"
        mercury__getopt__Long_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_6, (MR_Integer) 1)));
#line 360 "getopt.m"
        mercury__getopt__Defaults_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_6, (MR_Integer) 2)));
#line 361 "getopt.m"
        mercury__getopt__MaybeSpecial_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 362 "getopt.m"
        {
#line 362 "getopt.m"
          mercury__getopt__init_option_table_2_p_0(mercury__getopt__TypeInfo_for_OptionType_26, mercury__getopt__Defaults_13, &mercury__getopt__OptionTable0_15);
        }
#line 360 "getopt.m"
      }
#line 363 "getopt.m"
    else
#line 363 "getopt.m"
      if (((MR_tag((MR_Word) mercury__getopt__OptionOps_6)) == (MR_mktag((MR_Integer) 1))))
#line 364 "getopt.m"
        {
#line 364 "getopt.m"
          MR_Word mercury__getopt__Special_16;
#line 364 "getopt.m"
          MR_Word mercury__getopt__Defaults_22;

#line 364 "getopt.m"
          mercury__getopt__Short_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__OptionOps_6, (MR_Integer) 0)));
#line 364 "getopt.m"
          mercury__getopt__Long_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__OptionOps_6, (MR_Integer) 1)));
#line 364 "getopt.m"
          mercury__getopt__Defaults_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__OptionOps_6, (MR_Integer) 2)));
#line 364 "getopt.m"
          mercury__getopt__Special_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__OptionOps_6, (MR_Integer) 3)));
#line 365 "getopt.m"
          {
#line 365 "getopt.m"
            mercury__getopt__MaybeSpecial_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 365 "getopt.m"
            MR_hl_field(MR_mktag(1), mercury__getopt__MaybeSpecial_14, 0) = ((MR_Box) (mercury__getopt__Special_16));
#line 365 "getopt.m"
          }
#line 366 "getopt.m"
          {
#line 366 "getopt.m"
            mercury__getopt__init_option_table_2_p_0(mercury__getopt__TypeInfo_for_OptionType_26, mercury__getopt__Defaults_22, &mercury__getopt__OptionTable0_15);
          }
#line 364 "getopt.m"
        }
#line 363 "getopt.m"
      else
#line 363 "getopt.m"
        if (((MR_tag((MR_Word) mercury__getopt__OptionOps_6)) == (MR_mktag((MR_Integer) 2))))
#line 368 "getopt.m"
          {
#line 368 "getopt.m"
            MR_Word mercury__getopt__Defaults_23;

#line 368 "getopt.m"
            mercury__getopt__Short_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__OptionOps_6, (MR_Integer) 0)));
#line 368 "getopt.m"
            mercury__getopt__Long_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__OptionOps_6, (MR_Integer) 1)));
#line 368 "getopt.m"
            mercury__getopt__Defaults_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__OptionOps_6, (MR_Integer) 2)));
#line 369 "getopt.m"
            mercury__getopt__MaybeSpecial_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 370 "getopt.m"
            {
#line 370 "getopt.m"
              mercury__getopt__init_option_table_multi_2_p_0(mercury__getopt__TypeInfo_for_OptionType_26, mercury__getopt__Defaults_23, &mercury__getopt__OptionTable0_15);
            }
#line 368 "getopt.m"
          }
#line 363 "getopt.m"
        else
#line 372 "getopt.m"
          {
#line 372 "getopt.m"
            MR_Word mercury__getopt__Defaults_24;
#line 372 "getopt.m"
            MR_Word mercury__getopt__Special_25;

#line 372 "getopt.m"
            mercury__getopt__Short_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionOps_6, (MR_Integer) 0)));
#line 372 "getopt.m"
            mercury__getopt__Long_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionOps_6, (MR_Integer) 1)));
#line 372 "getopt.m"
            mercury__getopt__Defaults_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionOps_6, (MR_Integer) 2)));
#line 372 "getopt.m"
            mercury__getopt__Special_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionOps_6, (MR_Integer) 3)));
#line 373 "getopt.m"
            {
#line 373 "getopt.m"
              mercury__getopt__MaybeSpecial_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 373 "getopt.m"
              MR_hl_field(MR_mktag(1), mercury__getopt__MaybeSpecial_14, 0) = ((MR_Box) (mercury__getopt__Special_25));
#line 373 "getopt.m"
            }
#line 374 "getopt.m"
            {
#line 374 "getopt.m"
              mercury__getopt__init_option_table_multi_2_p_0(mercury__getopt__TypeInfo_for_OptionType_26, mercury__getopt__Defaults_24, &mercury__getopt__OptionTable0_15);
            }
#line 372 "getopt.m"
          }
#line 376 "getopt.m"
    {
#line 376 "getopt.m"
      mercury__getopt__Internal_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 376 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__Internal_17, 0) = ((MR_Box) (mercury__getopt__Short_11));
#line 376 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__Internal_17, 1) = ((MR_Box) (mercury__getopt__Long_12));
#line 376 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__Internal_17, 2) = ((MR_Box) (mercury__getopt__MaybeSpecial_14));
#line 376 "getopt.m"
    }
#line 377 "getopt.m"
    mercury__getopt__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 23 "set_ordlist.opt"
    mercury__getopt__V_2_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 22 "set_ordlist.opt"
    mercury__getopt__V_21_21 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 377 "getopt.m"
    {
#line 377 "getopt.m"
      mercury__getopt__process_arguments_9_p_0(mercury__getopt__TypeInfo_for_OptionType_26, mercury__getopt__Args0_7, mercury__getopt__NonOptionArgs_9, mercury__getopt__Internal_17, mercury__getopt__V_20_20, &mercury__getopt__RevOptionArgs_18, mercury__getopt__OptionTable0_15, mercury__getopt__Result_10, mercury__getopt__V_21_21, &mercury__getopt___OptionsSet_19);
    }
#line 11553 "getopt.c"
    mercury__getopt__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__getopt__TypeCtorInfo_27_27, mercury__getopt__RevOptionArgs_18, mercury__getopt__OptionArgs_8);
#line 118 "list.opt"
      return;
    }
#line 358 "getopt.m"
  }
#line 138 "getopt.m"
}

#line 134 "getopt.m"
void MR_CALL 
mercury__getopt__process_options_4_p_0(
#line 134 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_10,
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
#line 355 "getopt.m"
  {
#line 355 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 355 "getopt.m"
    MR_Word mercury__getopt___OptionArgs_9;

#line 355 "getopt.m"
    {
#line 355 "getopt.m"
      mercury__getopt__process_options_5_p_0(mercury__getopt__TypeInfo_for_OptionType_10, mercury__getopt__OptionOps_5, mercury__getopt__Args0_6, &mercury__getopt___OptionArgs_9, mercury__getopt__NonOptionArgs_7, mercury__getopt__Result_8);
    }
#line 355 "getopt.m"
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
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_option_data_0);
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
