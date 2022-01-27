/*
** Automatically generated from `getopt_io.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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



#line 443 "getopt_io.m"
struct mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0_s {
#line 443 "getopt_io.m"
  MR_Word * mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__HeadVar__3_10;
#line 443 "getopt_io.m"
  MR_Cont mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__cont;
#line 443 "getopt_io.m"
  void * mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__cont_env_ptr;
#line 443 "getopt_io.m"
  MR_Box mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__Option_6;
#line 443 "getopt_io.m"
  MR_Word mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__OptionData_7;
#line 445 "getopt_io.m"
  MR_Box mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__conv1_OptionData_7;
#line 443 "getopt_io.m"
};

#line 436 "getopt_io.m"
struct mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0_s {
#line 436 "getopt_io.m"
  MR_Word * mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__HeadVar__3_10;
#line 436 "getopt_io.m"
  MR_Cont mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__cont;
#line 436 "getopt_io.m"
  void * mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__cont_env_ptr;
#line 436 "getopt_io.m"
  MR_Box mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__Option_6;
#line 436 "getopt_io.m"
  MR_Word mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__OptionData_7;
#line 438 "getopt_io.m"
  MR_Box mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__conv1_OptionData_7;
#line 436 "getopt_io.m"
};

#line 443 "getopt_io.m"
struct mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0_s {
#line 443 "getopt_io.m"
  MR_Box * mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0__wrapper_arg_1;
#line 443 "getopt_io.m"
  MR_Cont mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0__cont;
#line 443 "getopt_io.m"
  void * mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0__cont_env_ptr;
#line 443 "getopt_io.m"
  MR_Word mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0__conv0_HeadVar__3_10;
#line 443 "getopt_io.m"
};

#line 436 "getopt_io.m"
struct mercury__getopt_io__init_option_table_2_p_0_2_env_0_s {
#line 436 "getopt_io.m"
  MR_Box * mercury__getopt_io__init_option_table_2_p_0_2_env_0__wrapper_arg_1;
#line 436 "getopt_io.m"
  MR_Cont mercury__getopt_io__init_option_table_2_p_0_2_env_0__cont;
#line 436 "getopt_io.m"
  void * mercury__getopt_io__init_option_table_2_p_0_2_env_0__cont_env_ptr;
#line 436 "getopt_io.m"
  MR_Word mercury__getopt_io__init_option_table_2_p_0_2_env_0__conv0_HeadVar__3_10;
#line 436 "getopt_io.m"
};


#line 147 "getopt_io.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt_io____vpti_pred_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0;

#line 150 "getopt_io.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__getopt_io__pair__pti_pair_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0;

#line 153 "getopt_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt_io__list__pti_list_1__pseudo_1;

#line 156 "getopt_io.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__getopt_io__tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0;

#line 159 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_maybe_option_table_1_0[1];

#line 162 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_maybe_option_table_1_0;

#line 165 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_maybe_option_table_1_1[1];

#line 168 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_maybe_option_table_1_1;

#line 171 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_maybe_option_table_1_0[1];

#line 174 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_maybe_option_table_1_1[1];

#line 177 "getopt_io.c"
static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_maybe_option_table_1[2];

#line 180 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_maybe_option_table_1[2];

#line 183 "getopt_io.c"
static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_maybe_option_table_1[2];

#line 186 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_maybe_option_table_se_1_0[1];

#line 189 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_maybe_option_table_se_1_0;

#line 192 "getopt_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt_io__getopt_io__pti_option_error_1__pseudo_1;

#line 195 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_maybe_option_table_se_1_1[1];

#line 198 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_maybe_option_table_se_1_1;

#line 201 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_maybe_option_table_se_1_0[1];

#line 204 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_maybe_option_table_se_1_1[1];

#line 207 "getopt_io.c"
static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_maybe_option_table_se_1[2];

#line 210 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_maybe_option_table_se_1[2];

#line 213 "getopt_io.c"
static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_maybe_option_table_se_1[2];

#line 216 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_data_0_0[1];

#line 219 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_0;

#line 222 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_data_0_1[1];

#line 225 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_1;

#line 228 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_data_0_2[1];

#line 231 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_2;

#line 234 "getopt_io.c"
static const MR_FA_TypeInfo_Struct1 mercury__getopt_io__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 237 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_data_0_3[1];

#line 240 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_3;

#line 243 "getopt_io.c"
static const MR_FA_TypeInfo_Struct1 mercury__getopt_io__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

#line 246 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_data_0_4[1];

#line 249 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_4;

#line 252 "getopt_io.c"
static const MR_FA_TypeInfo_Struct1 mercury__getopt_io__list__ti_list_1builtin__type_ctor_info_string_0;

#line 255 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_data_0_5[1];

#line 258 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_5;

#line 261 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_6;

#line 264 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_7;

#line 267 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_8;

#line 270 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_9;

#line 273 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_10;

#line 276 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_11;

#line 279 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_data_0_0[6];

#line 282 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_data_0_1[1];

#line 285 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_data_0_2[1];

#line 288 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_data_0_3[4];

#line 291 "getopt_io.c"
static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_option_data_0[4];

#line 294 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_option_data_0[12];

#line 297 "getopt_io.c"
static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_option_data_0[12];

#line 300 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_1_0[1];

#line 303 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_1_0;

#line 306 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_1_1[3];

#line 309 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_1_1;

#line 312 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_error_1_0[1];

#line 315 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_error_1_1[1];

#line 318 "getopt_io.c"
static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_option_error_1[2];

#line 321 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_option_error_1[2];

#line 324 "getopt_io.c"
static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_option_error_1[2];

#line 327 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_0;

#line 330 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_1;

#line 333 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_reason_0_2[1];

#line 336 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_2;

#line 339 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_3;

#line 342 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_4;

#line 345 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_5;

#line 348 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_reason_0_6[1];

#line 351 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_6;

#line 354 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_reason_0_7[1];

#line 357 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_7;

#line 360 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_reason_0_8[2];

#line 363 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_8;

#line 366 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_reason_0_9[2];

#line 369 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_9;

#line 372 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_reason_0_10[1];

#line 375 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_10;

#line 378 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_error_reason_0_0[5];

#line 381 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_error_reason_0_1[1];

#line 384 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_error_reason_0_2[1];

#line 387 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_error_reason_0_3[4];

#line 390 "getopt_io.c"
static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_option_error_reason_0[4];

#line 393 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_option_error_reason_0[11];

#line 396 "getopt_io.c"
static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_option_error_reason_0[11];

#line 399 "getopt_io.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt_io____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1;

#line 402 "getopt_io.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt_io____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1;

#line 405 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_1_0[3];

#line 408 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_ops_1_0;

#line 411 "getopt_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt_io__getopt_io__pti_maybe_option_table_1__pseudo_1;

#line 414 "getopt_io.c"
static const MR_VA_PseudoTypeInfo_Struct4 mercury__getopt_io____vpti_pred_4__pseudo_1__plain_getopt_io__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0__pseudo_getopt_io__pti_maybe_option_table_1__pseudo_1;

#line 417 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_1_1[4];

#line 420 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_ops_1_1;

#line 423 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_1_2[3];

#line 426 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_ops_1_2;

#line 429 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_1_3[4];

#line 432 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_ops_1_3;

#line 435 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_1_0[1];

#line 438 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_1_1[1];

#line 441 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_1_2[1];

#line 444 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_1_3[1];

#line 447 "getopt_io.c"
static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_option_ops_1[4];

#line 450 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_option_ops_1[4];

#line 453 "getopt_io.c"
static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_option_ops_1[4];

#line 456 "getopt_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt_io__getopt_io__pti_option_ops_special_1__pseudo_1;

#line 459 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_internal_1_0[3];

#line 462 "getopt_io.c"
static const MR_ConstString mercury__getopt_io__getopt_io__field_names_option_ops_internal_1_0[3];

#line 465 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_ops_internal_1_0;

#line 468 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_internal_1_0[1];

#line 471 "getopt_io.c"
static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_option_ops_internal_1[1];

#line 474 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_option_ops_internal_1[1];

#line 477 "getopt_io.c"
static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_option_ops_internal_1[1];

#line 480 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_ops_special_1_0;

#line 483 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_special_1_1[1];

#line 486 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_ops_special_1_1;

#line 489 "getopt_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt_io__set_ordlist__pti_set_ordlist_1__pseudo_1;

#line 492 "getopt_io.c"
static const MR_VA_PseudoTypeInfo_Struct5 mercury__getopt_io____vpti_pred_5__pseudo_1__plain_getopt_io__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0__pseudo_getopt_io__pti_maybe_option_table_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1;

#line 495 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_special_1_2[1];

#line 498 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_ops_special_1_2;

#line 501 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_special_1_0[1];

#line 504 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_special_1_1[1];

#line 507 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_special_1_2[1];

#line 510 "getopt_io.c"
static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_option_ops_special_1[3];

#line 513 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_option_ops_special_1[3];

#line 516 "getopt_io.c"
static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_option_ops_special_1[3];

#line 519 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_track_1_0[3];

#line 522 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_ops_track_1_0;

#line 525 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_track_1_0[1];

#line 528 "getopt_io.c"
static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_option_ops_track_1[1];

#line 531 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_option_ops_track_1[1];

#line 534 "getopt_io.c"
static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_option_ops_track_1[1];

#line 537 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_0;

#line 540 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_special_data_0_1[1];

#line 543 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_1;

#line 546 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_special_data_0_2[1];

#line 549 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_2;

#line 552 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_special_data_0_3[1];

#line 555 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_3;

#line 558 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_special_data_0_4[1];

#line 561 "getopt_io.c"
static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_4;

#line 564 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_special_data_0_0[1];

#line 567 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_special_data_0_1[1];

#line 570 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_special_data_0_2[1];

#line 573 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_special_data_0_3[2];

#line 576 "getopt_io.c"
static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_special_data_0[4];

#line 579 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_special_data_0[5];

#line 582 "getopt_io.c"
static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_special_data_0[5];

#line 585 "getopt_io.c"
static MR_bool MR_CALL 
mercury__getopt_io____Unify____maybe_option_table_1_0_10001(
#line 588 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 590 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_2,
#line 592 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3);

#line 595 "getopt_io.c"
static void MR_CALL 
mercury__getopt_io____Compare____maybe_option_table_1_0_10001(
#line 598 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 600 "getopt_io.c"
  MR_Box * mercury__getopt_io__wrapper_arg_2,
#line 602 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3,
#line 604 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_4);

#line 607 "getopt_io.c"
static MR_bool MR_CALL 
mercury__getopt_io____Unify____maybe_option_table_se_1_0_10001(
#line 610 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 612 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_2,
#line 614 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3);

#line 617 "getopt_io.c"
static void MR_CALL 
mercury__getopt_io____Compare____maybe_option_table_se_1_0_10001(
#line 620 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 622 "getopt_io.c"
  MR_Box * mercury__getopt_io__wrapper_arg_2,
#line 624 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3,
#line 626 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_4);

#line 629 "getopt_io.c"
static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_data_0_0_10001(
#line 632 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 634 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_2);

#line 637 "getopt_io.c"
static void MR_CALL 
mercury__getopt_io____Compare____option_data_0_0_10001(
#line 640 "getopt_io.c"
  MR_Box * mercury__getopt_io__wrapper_arg_1,
#line 642 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_2,
#line 644 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3);

#line 647 "getopt_io.c"
static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_error_1_0_10001(
#line 650 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 652 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_2,
#line 654 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3);

#line 657 "getopt_io.c"
static void MR_CALL 
mercury__getopt_io____Compare____option_error_1_0_10001(
#line 660 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 662 "getopt_io.c"
  MR_Box * mercury__getopt_io__wrapper_arg_2,
#line 664 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3,
#line 666 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_4);

#line 669 "getopt_io.c"
static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_error_reason_0_0_10001(
#line 672 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 674 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_2);

#line 677 "getopt_io.c"
static void MR_CALL 
mercury__getopt_io____Compare____option_error_reason_0_0_10001(
#line 680 "getopt_io.c"
  MR_Box * mercury__getopt_io__wrapper_arg_1,
#line 682 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_2,
#line 684 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3);

#line 687 "getopt_io.c"
static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_1_0_10001(
#line 690 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 692 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_2,
#line 694 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3);

#line 697 "getopt_io.c"
static void MR_CALL 
mercury__getopt_io____Compare____option_ops_1_0_10001(
#line 700 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 702 "getopt_io.c"
  MR_Box * mercury__getopt_io__wrapper_arg_2,
#line 704 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3,
#line 706 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_4);

#line 709 "getopt_io.c"
static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_internal_1_0_10001(
#line 712 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 714 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_2,
#line 716 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3);

#line 719 "getopt_io.c"
static void MR_CALL 
mercury__getopt_io____Compare____option_ops_internal_1_0_10001(
#line 722 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 724 "getopt_io.c"
  MR_Box * mercury__getopt_io__wrapper_arg_2,
#line 726 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3,
#line 728 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_4);

#line 731 "getopt_io.c"
static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_special_1_0_10001(
#line 734 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 736 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_2,
#line 738 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3);

#line 741 "getopt_io.c"
static void MR_CALL 
mercury__getopt_io____Compare____option_ops_special_1_0_10001(
#line 744 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 746 "getopt_io.c"
  MR_Box * mercury__getopt_io__wrapper_arg_2,
#line 748 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3,
#line 750 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_4);

#line 753 "getopt_io.c"
static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_track_1_0_10001(
#line 756 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 758 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_2,
#line 760 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3);

#line 763 "getopt_io.c"
static void MR_CALL 
mercury__getopt_io____Compare____option_ops_track_1_0_10001(
#line 766 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 768 "getopt_io.c"
  MR_Box * mercury__getopt_io__wrapper_arg_2,
#line 770 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3,
#line 772 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_4);

#line 775 "getopt_io.c"
static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_table_1_0_10001(
#line 778 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 780 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_2,
#line 782 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3);

#line 785 "getopt_io.c"
static void MR_CALL 
mercury__getopt_io____Compare____option_table_1_0_10001(
#line 788 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 790 "getopt_io.c"
  MR_Box * mercury__getopt_io__wrapper_arg_2,
#line 792 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3,
#line 794 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_4);

#line 797 "getopt_io.c"
static MR_bool MR_CALL 
mercury__getopt_io____Unify____special_data_0_0_10001(
#line 800 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 802 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_2);

#line 805 "getopt_io.c"
static void MR_CALL 
mercury__getopt_io____Compare____special_data_0_0_10001(
#line 808 "getopt_io.c"
  MR_Box * mercury__getopt_io__wrapper_arg_1,
#line 810 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_2,
#line 812 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__getopt_io__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 1092 "getopt_io.m"
static void MR_CALL 
mercury__getopt_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(
#line 1092 "getopt_io.m"
  MR_Box mercury__getopt_io__Flag_5,
#line 1092 "getopt_io.m"
  MR_String mercury__getopt_io__Option_6,
#line 1092 "getopt_io.m"
  MR_String mercury__getopt_io__Arg_7,
#line 1092 "getopt_io.m"
  MR_Word * mercury__getopt_io__Result_8);

#line 190 "string.opt"
static void MR_CALL 
mercury__getopt_io__next_boundary__ho5__ho21_4_p_in__string_0(
#line 190 "string.opt"
  MR_String mercury__getopt_io__String_6_6,
#line 190 "string.opt"
  MR_Integer mercury__getopt_io__I0_7_7,
#line 190 "string.opt"
  MR_Integer * mercury__getopt_io__I_8_8);

#line 188 "string.opt"
static void MR_CALL 
mercury__getopt_io__words_2__ho20_4_p_in__string_0(
#line 188 "string.opt"
  MR_String mercury__getopt_io__String_6_6,
#line 188 "string.opt"
  MR_Integer mercury__getopt_io__WordStart_7_7,
#line 188 "string.opt"
  MR_Word * mercury__getopt_io__Words_8_8);

#line 190 "string.opt"
static void MR_CALL 
mercury__getopt_io__next_boundary__ho19_4_p_in__string_0(
#line 190 "string.opt"
  MR_String mercury__getopt_io__String_6_6,
#line 190 "string.opt"
  MR_Integer mercury__getopt_io__I0_7_7,
#line 190 "string.opt"
  MR_Integer * mercury__getopt_io__I_8_8);

#line 445 "getopt_io.m"
static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_2(
#line 445 "getopt_io.m"
  void * mercury__getopt_io__env_ptr_arg);

#line 443 "getopt_io.m"
static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_1(
#line 443 "getopt_io.m"
  void * mercury__getopt_io__env_ptr_arg);

#line 443 "getopt_io.m"
static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0(
#line 443 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_12,
#line 443 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionDefaultsPred_3,
#line 443 "getopt_io.m"
  MR_Word * mercury__getopt_io__HeadVar__3_10,
#line 443 "getopt_io.m"
  MR_Cont mercury__getopt_io__cont,
#line 443 "getopt_io.m"
  void * mercury__getopt_io__cont_env_ptr);

#line 438 "getopt_io.m"
static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_2(
#line 438 "getopt_io.m"
  void * mercury__getopt_io__env_ptr_arg);

#line 436 "getopt_io.m"
static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_1(
#line 436 "getopt_io.m"
  void * mercury__getopt_io__env_ptr_arg);

#line 436 "getopt_io.m"
static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0(
#line 436 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_12,
#line 436 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionDefaultsPred_3,
#line 436 "getopt_io.m"
  MR_Word * mercury__getopt_io__HeadVar__3_10,
#line 436 "getopt_io.m"
  MR_Cont mercury__getopt_io__cont,
#line 436 "getopt_io.m"
  void * mercury__getopt_io__cont_env_ptr);

#line 1023 "getopt_io.m"
static void MR_CALL 
mercury__getopt_io__process_special_8_p_0(
#line 1023 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_54,
#line 1023 "getopt_io.m"
  MR_String mercury__getopt_io__Option_9,
#line 1023 "getopt_io.m"
  MR_Box mercury__getopt_io__Flag_10,
#line 1023 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionData_11,
#line 1023 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionOps_12,
#line 1023 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionTable0_13,
#line 1023 "getopt_io.m"
  MR_Word * mercury__getopt_io__Result_14,
#line 1023 "getopt_io.m"
  MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_26,
#line 1023 "getopt_io.m"
  MR_Word * mercury__getopt_io__STATE_VARIABLE_OptionsSet_27);

#line 969 "getopt_io.m"
static void MR_CALL 
mercury__getopt_io__process_negated_option_7_p_0(
#line 969 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_51,
#line 969 "getopt_io.m"
  MR_String mercury__getopt_io__Option_8,
#line 969 "getopt_io.m"
  MR_Box mercury__getopt_io__Flag_9,
#line 969 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionOps_10,
#line 969 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionTable0_11,
#line 969 "getopt_io.m"
  MR_Word * mercury__getopt_io__Result_12,
#line 969 "getopt_io.m"
  MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_23,
#line 969 "getopt_io.m"
  MR_Word * mercury__getopt_io__STATE_VARIABLE_OptionsSet_24);

#line 787 "getopt_io.m"
static void MR_CALL 
mercury__getopt_io__process_option_11_p_0(
#line 787 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_279,
#line 787 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__1_1,
#line 787 "getopt_io.m"
  MR_String mercury__getopt_io__HeadVar__2_2,
#line 787 "getopt_io.m"
  MR_Box mercury__getopt_io__Flag_3,
#line 787 "getopt_io.m"
  MR_Word mercury__getopt_io__MaybeArg_4,
#line 787 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__5_5,
#line 787 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__6_6,
#line 787 "getopt_io.m"
  MR_Word * mercury__getopt_io__Result_7,
#line 787 "getopt_io.m"
  MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8,
#line 787 "getopt_io.m"
  MR_Word * mercury__getopt_io__STATE_VARIABLE_OptionsSet_9);

#line 714 "getopt_io.m"
static void MR_CALL 
mercury__getopt_io__handle_short_options_12_p_0(
#line 714 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_70,
#line 714 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__1_1,
#line 714 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionOps_2,
#line 714 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__3_3,
#line 714 "getopt_io.m"
  MR_Word * mercury__getopt_io__Args_4,
#line 714 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__5_5,
#line 714 "getopt_io.m"
  MR_Word * mercury__getopt_io__OptionArgs_6,
#line 714 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__7_7,
#line 714 "getopt_io.m"
  MR_Word * mercury__getopt_io__HeadVar__8_8,
#line 714 "getopt_io.m"
  MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_9,
#line 714 "getopt_io.m"
  MR_Word * mercury__getopt_io__STATE_VARIABLE_OptionsSet_10);

#line 647 "getopt_io.m"
static void MR_CALL 
mercury__getopt_io__handle_long_option_15_p_0(
#line 647 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_55,
#line 647 "getopt_io.m"
  MR_String mercury__getopt_io__Option_16,
#line 647 "getopt_io.m"
  MR_Box mercury__getopt_io__Flag_17,
#line 647 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionData_18,
#line 647 "getopt_io.m"
  MR_Word mercury__getopt_io__MaybeOptionArg0_19,
#line 647 "getopt_io.m"
  MR_Word mercury__getopt_io__Args0_20,
#line 647 "getopt_io.m"
  MR_Word * mercury__getopt_io__Args_21,
#line 647 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionOps_22,
#line 647 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionArgs0_23,
#line 647 "getopt_io.m"
  MR_Word * mercury__getopt_io__OptionArgs_24,
#line 647 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionTable0_25,
#line 647 "getopt_io.m"
  MR_Word * mercury__getopt_io__Result_26,
#line 647 "getopt_io.m"
  MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_40,
#line 647 "getopt_io.m"
  MR_Word * mercury__getopt_io__STATE_VARIABLE_OptionsSet_41);

#line 69 "solutions.opt"
static void MR_CALL 
mercury__getopt_io__init_option_table_multi_2_p_0_3(
#line 69 "solutions.opt"
  MR_Box mercury__getopt_io__closure_arg,
#line 69 "solutions.opt"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 69 "solutions.opt"
  MR_Box mercury__getopt_io__wrapper_arg_2,
#line 69 "solutions.opt"
  MR_Box * mercury__getopt_io__wrapper_arg_3);

#line 443 "getopt_io.m"
static void MR_CALL 
mercury__getopt_io__init_option_table_multi_2_p_0_1(
#line 443 "getopt_io.m"
  void * mercury__getopt_io__env_ptr_arg);

#line 443 "getopt_io.m"
static void MR_CALL 
mercury__getopt_io__init_option_table_multi_2_p_0_2(
#line 443 "getopt_io.m"
  MR_Box mercury__getopt_io__closure_arg,
#line 443 "getopt_io.m"
  MR_Box * mercury__getopt_io__wrapper_arg_1,
#line 443 "getopt_io.m"
  MR_Cont mercury__getopt_io__cont,
#line 443 "getopt_io.m"
  void * mercury__getopt_io__cont_env_ptr);

#line 69 "solutions.opt"
static void MR_CALL 
mercury__getopt_io__init_option_table_2_p_0_3(
#line 69 "solutions.opt"
  MR_Box mercury__getopt_io__closure_arg,
#line 69 "solutions.opt"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 69 "solutions.opt"
  MR_Box mercury__getopt_io__wrapper_arg_2,
#line 69 "solutions.opt"
  MR_Box * mercury__getopt_io__wrapper_arg_3);

#line 436 "getopt_io.m"
static void MR_CALL 
mercury__getopt_io__init_option_table_2_p_0_1(
#line 436 "getopt_io.m"
  void * mercury__getopt_io__env_ptr_arg);

#line 436 "getopt_io.m"
static void MR_CALL 
mercury__getopt_io__init_option_table_2_p_0_2(
#line 436 "getopt_io.m"
  MR_Box mercury__getopt_io__closure_arg,
#line 436 "getopt_io.m"
  MR_Box * mercury__getopt_io__wrapper_arg_1,
#line 436 "getopt_io.m"
  MR_Cont mercury__getopt_io__cont,
#line 436 "getopt_io.m"
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



#line 1547 "getopt_io.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt_io____vpti_pred_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 1557 "getopt_io.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__getopt_io__pair__pti_pair_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 1566 "getopt_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt_io__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1574 "getopt_io.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__getopt_io__tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 1583 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_maybe_option_table_1_0[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt_io__tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0
};

#line 1588 "getopt_io.c"
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
  NULL
};

#line 1603 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_maybe_option_table_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1608 "getopt_io.c"
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
  NULL
};

#line 1623 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_maybe_option_table_1_0[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_maybe_option_table_1_0
};

#line 1628 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_maybe_option_table_1_1[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_maybe_option_table_1_1
};

#line 1633 "getopt_io.c"
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

#line 1647 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_maybe_option_table_1[2] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_maybe_option_table_1_1,
  &mercury__getopt_io__getopt_io__du_functor_desc_maybe_option_table_1_0
};

#line 1653 "getopt_io.c"
static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_maybe_option_table_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1659 "getopt_io.c"
const MR_TypeCtorInfo_Struct mercury__getopt_io__getopt_io__type_ctor_info_maybe_option_table_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt_io____Unify____maybe_option_table_1_0_10001)),
  ((MR_Box) (mercury__getopt_io____Compare____maybe_option_table_1_0_10001)),
  (MR_String) "getopt_io",
  (MR_String) "maybe_option_table",
  {
    mercury__getopt_io__getopt_io__du_name_ordered_maybe_option_table_1
  },
  {
    mercury__getopt_io__getopt_io__du_ptag_ordered_maybe_option_table_1
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__getopt_io__getopt_io__functor_number_map_maybe_option_table_1
};

#line 1680 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_maybe_option_table_se_1_0[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt_io__tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0
};

#line 1685 "getopt_io.c"
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
  NULL
};

#line 1700 "getopt_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt_io__getopt_io__pti_option_error_1__pseudo_1 = {
  &mercury__getopt_io__getopt_io__type_ctor_info_option_error_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1708 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_maybe_option_table_se_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__pti_option_error_1__pseudo_1
};

#line 1713 "getopt_io.c"
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
  NULL
};

#line 1728 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_maybe_option_table_se_1_0[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_maybe_option_table_se_1_0
};

#line 1733 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_maybe_option_table_se_1_1[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_maybe_option_table_se_1_1
};

#line 1738 "getopt_io.c"
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

#line 1752 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_maybe_option_table_se_1[2] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_maybe_option_table_se_1_1,
  &mercury__getopt_io__getopt_io__du_functor_desc_maybe_option_table_se_1_0
};

#line 1758 "getopt_io.c"
static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_maybe_option_table_se_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1764 "getopt_io.c"
const MR_TypeCtorInfo_Struct mercury__getopt_io__getopt_io__type_ctor_info_maybe_option_table_se_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt_io____Unify____maybe_option_table_se_1_0_10001)),
  ((MR_Box) (mercury__getopt_io____Compare____maybe_option_table_se_1_0_10001)),
  (MR_String) "getopt_io",
  (MR_String) "maybe_option_table_se",
  {
    mercury__getopt_io__getopt_io__du_name_ordered_maybe_option_table_se_1
  },
  {
    mercury__getopt_io__getopt_io__du_ptag_ordered_maybe_option_table_se_1
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__getopt_io__getopt_io__functor_number_map_maybe_option_table_se_1
};

#line 1785 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_data_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1790 "getopt_io.c"
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
  NULL
};

#line 1805 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_data_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1810 "getopt_io.c"
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
  NULL
};

#line 1825 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_data_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1830 "getopt_io.c"
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
  NULL
};

#line 1845 "getopt_io.c"
static const MR_FA_TypeInfo_Struct1 mercury__getopt_io__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1853 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_data_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt_io__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

#line 1858 "getopt_io.c"
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
  NULL
};

#line 1873 "getopt_io.c"
static const MR_FA_TypeInfo_Struct1 mercury__getopt_io__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1881 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_data_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt_io__maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

#line 1886 "getopt_io.c"
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
  NULL
};

#line 1901 "getopt_io.c"
static const MR_FA_TypeInfo_Struct1 mercury__getopt_io__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1909 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_data_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt_io__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 1914 "getopt_io.c"
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
  NULL
};

#line 1929 "getopt_io.c"
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
  NULL
};

#line 1944 "getopt_io.c"
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
  NULL
};

#line 1959 "getopt_io.c"
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
  NULL
};

#line 1974 "getopt_io.c"
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
  NULL
};

#line 1989 "getopt_io.c"
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
  NULL
};

#line 2004 "getopt_io.c"
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
  NULL
};

#line 2019 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_data_0_0[6] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_6,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_7,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_8,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_9,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_10,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_11
};

#line 2029 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_data_0_1[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_0
};

#line 2034 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_data_0_2[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_1
};

#line 2039 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_data_0_3[4] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_2,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_3,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_4,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_5
};

#line 2047 "getopt_io.c"
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

#line 2071 "getopt_io.c"
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

#line 2087 "getopt_io.c"
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

#line 2103 "getopt_io.c"
const MR_TypeCtorInfo_Struct mercury__getopt_io__getopt_io__type_ctor_info_option_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt_io____Unify____option_data_0_0_10001)),
  ((MR_Box) (mercury__getopt_io____Compare____option_data_0_0_10001)),
  (MR_String) "getopt_io",
  (MR_String) "option_data",
  {
    mercury__getopt_io__getopt_io__du_name_ordered_option_data_0
  },
  {
    mercury__getopt_io__getopt_io__du_ptag_ordered_option_data_0
  },
  (MR_Integer) 12,
  (MR_Integer) 4,
  mercury__getopt_io__getopt_io__functor_number_map_option_data_0
};

#line 2124 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_1_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2129 "getopt_io.c"
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
  NULL
};

#line 2144 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_1_1[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_error_reason_0
};

#line 2151 "getopt_io.c"
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
  NULL
};

#line 2166 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_error_1_0[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_1_0
};

#line 2171 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_error_1_1[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_1_1
};

#line 2176 "getopt_io.c"
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

#line 2190 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_option_error_1[2] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_1_1,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_1_0
};

#line 2196 "getopt_io.c"
static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_option_error_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2202 "getopt_io.c"
const MR_TypeCtorInfo_Struct mercury__getopt_io__getopt_io__type_ctor_info_option_error_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt_io____Unify____option_error_1_0_10001)),
  ((MR_Box) (mercury__getopt_io____Compare____option_error_1_0_10001)),
  (MR_String) "getopt_io",
  (MR_String) "option_error",
  {
    mercury__getopt_io__getopt_io__du_name_ordered_option_error_1
  },
  {
    mercury__getopt_io__getopt_io__du_ptag_ordered_option_error_1
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__getopt_io__getopt_io__functor_number_map_option_error_1
};

#line 2223 "getopt_io.c"
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
  NULL
};

#line 2238 "getopt_io.c"
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
  NULL
};

#line 2253 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_reason_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2258 "getopt_io.c"
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
  NULL
};

#line 2273 "getopt_io.c"
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
  NULL
};

#line 2288 "getopt_io.c"
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
  NULL
};

#line 2303 "getopt_io.c"
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
  NULL
};

#line 2318 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_reason_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2323 "getopt_io.c"
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
  NULL
};

#line 2338 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_reason_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2343 "getopt_io.c"
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
  NULL
};

#line 2358 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_reason_0_8[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

#line 2364 "getopt_io.c"
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
  NULL
};

#line 2379 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_reason_0_9[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

#line 2385 "getopt_io.c"
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
  NULL
};

#line 2400 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_reason_0_10[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2405 "getopt_io.c"
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
  NULL
};

#line 2420 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_error_reason_0_0[5] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_0,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_1,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_3,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_4,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_5
};

#line 2429 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_error_reason_0_1[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_2
};

#line 2434 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_error_reason_0_2[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_6
};

#line 2439 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_error_reason_0_3[4] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_7,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_8,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_9,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_10
};

#line 2447 "getopt_io.c"
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

#line 2471 "getopt_io.c"
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

#line 2486 "getopt_io.c"
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

#line 2501 "getopt_io.c"
const MR_TypeCtorInfo_Struct mercury__getopt_io__getopt_io__type_ctor_info_option_error_reason_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt_io____Unify____option_error_reason_0_0_10001)),
  ((MR_Box) (mercury__getopt_io____Compare____option_error_reason_0_0_10001)),
  (MR_String) "getopt_io",
  (MR_String) "option_error_reason",
  {
    mercury__getopt_io__getopt_io__du_name_ordered_option_error_reason_0
  },
  {
    mercury__getopt_io__getopt_io__du_ptag_ordered_option_error_reason_0
  },
  (MR_Integer) 11,
  (MR_Integer) 4,
  mercury__getopt_io__getopt_io__functor_number_map_option_error_reason_0
};

#line 2522 "getopt_io.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt_io____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2532 "getopt_io.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt_io____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2542 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0
};

#line 2549 "getopt_io.c"
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
  NULL
};

#line 2564 "getopt_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt_io__getopt_io__pti_maybe_option_table_1__pseudo_1 = {
  &mercury__getopt_io__getopt_io__type_ctor_info_maybe_option_table_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2572 "getopt_io.c"
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

#line 2584 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_1_1[4] = {
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0,
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_4__pseudo_1__plain_getopt_io__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0__pseudo_getopt_io__pti_maybe_option_table_1__pseudo_1
};

#line 2592 "getopt_io.c"
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
  NULL
};

#line 2607 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_1_2[3] = {
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0
};

#line 2614 "getopt_io.c"
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
  NULL
};

#line 2629 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_1_3[4] = {
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0,
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_4__pseudo_1__plain_getopt_io__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0__pseudo_getopt_io__pti_maybe_option_table_1__pseudo_1
};

#line 2637 "getopt_io.c"
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
  NULL
};

#line 2652 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_1_0[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_1_0
};

#line 2657 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_1_1[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_1_1
};

#line 2662 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_1_2[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_1_2
};

#line 2667 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_1_3[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_1_3
};

#line 2672 "getopt_io.c"
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

#line 2696 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_option_ops_1[4] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_1_0,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_1_1,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_1_2,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_1_3
};

#line 2704 "getopt_io.c"
static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_option_ops_1[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 2712 "getopt_io.c"
const MR_TypeCtorInfo_Struct mercury__getopt_io__getopt_io__type_ctor_info_option_ops_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt_io____Unify____option_ops_1_0_10001)),
  ((MR_Box) (mercury__getopt_io____Compare____option_ops_1_0_10001)),
  (MR_String) "getopt_io",
  (MR_String) "option_ops",
  {
    mercury__getopt_io__getopt_io__du_name_ordered_option_ops_1
  },
  {
    mercury__getopt_io__getopt_io__du_ptag_ordered_option_ops_1
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__getopt_io__getopt_io__functor_number_map_option_ops_1
};

#line 2733 "getopt_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt_io__getopt_io__pti_option_ops_special_1__pseudo_1 = {
  &mercury__getopt_io__getopt_io__type_ctor_info_option_ops_special_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2741 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_internal_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__pti_option_ops_special_1__pseudo_1
};

#line 2748 "getopt_io.c"
static const MR_ConstString mercury__getopt_io__getopt_io__field_names_option_ops_internal_1_0[3] = {
  (MR_String) "short_option",
  (MR_String) "long_option",
  (MR_String) "special_handler"
};

#line 2755 "getopt_io.c"
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
  NULL
};

#line 2770 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_internal_1_0[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_internal_1_0
};

#line 2775 "getopt_io.c"
static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_option_ops_internal_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_internal_1_0
  }
};

#line 2784 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_option_ops_internal_1[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_internal_1_0
};

#line 2789 "getopt_io.c"
static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_option_ops_internal_1[1] = {
  (MR_Integer) 0
};

#line 2794 "getopt_io.c"
const MR_TypeCtorInfo_Struct mercury__getopt_io__getopt_io__type_ctor_info_option_ops_internal_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt_io____Unify____option_ops_internal_1_0_10001)),
  ((MR_Box) (mercury__getopt_io____Compare____option_ops_internal_1_0_10001)),
  (MR_String) "getopt_io",
  (MR_String) "option_ops_internal",
  {
    mercury__getopt_io__getopt_io__du_name_ordered_option_ops_internal_1
  },
  {
    mercury__getopt_io__getopt_io__du_ptag_ordered_option_ops_internal_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__getopt_io__getopt_io__functor_number_map_option_ops_internal_1
};

#line 2815 "getopt_io.c"
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
  NULL
};

#line 2830 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_special_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_4__pseudo_1__plain_getopt_io__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0__pseudo_getopt_io__pti_maybe_option_table_1__pseudo_1
};

#line 2835 "getopt_io.c"
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
  NULL
};

#line 2850 "getopt_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt_io__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2858 "getopt_io.c"
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

#line 2871 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_special_1_2[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_5__pseudo_1__plain_getopt_io__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0__pseudo_getopt_io__pti_maybe_option_table_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
};

#line 2876 "getopt_io.c"
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
  NULL
};

#line 2891 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_special_1_0[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_special_1_0
};

#line 2896 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_special_1_1[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_special_1_1
};

#line 2901 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_special_1_2[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_special_1_2
};

#line 2906 "getopt_io.c"
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

#line 2925 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_option_ops_special_1[3] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_special_1_0,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_special_1_1,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_special_1_2
};

#line 2932 "getopt_io.c"
static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_option_ops_special_1[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 2939 "getopt_io.c"
const MR_TypeCtorInfo_Struct mercury__getopt_io__getopt_io__type_ctor_info_option_ops_special_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt_io____Unify____option_ops_special_1_0_10001)),
  ((MR_Box) (mercury__getopt_io____Compare____option_ops_special_1_0_10001)),
  (MR_String) "getopt_io",
  (MR_String) "option_ops_special",
  {
    mercury__getopt_io__getopt_io__du_name_ordered_option_ops_special_1
  },
  {
    mercury__getopt_io__getopt_io__du_ptag_ordered_option_ops_special_1
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__getopt_io__getopt_io__functor_number_map_option_ops_special_1
};

#line 2960 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_track_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_5__pseudo_1__plain_getopt_io__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0__pseudo_getopt_io__pti_maybe_option_table_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
};

#line 2967 "getopt_io.c"
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
  NULL
};

#line 2982 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_track_1_0[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_track_1_0
};

#line 2987 "getopt_io.c"
static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_option_ops_track_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_track_1_0
  }
};

#line 2996 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_option_ops_track_1[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_track_1_0
};

#line 3001 "getopt_io.c"
static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_option_ops_track_1[1] = {
  (MR_Integer) 0
};

#line 3006 "getopt_io.c"
const MR_TypeCtorInfo_Struct mercury__getopt_io__getopt_io__type_ctor_info_option_ops_track_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt_io____Unify____option_ops_track_1_0_10001)),
  ((MR_Box) (mercury__getopt_io____Compare____option_ops_track_1_0_10001)),
  (MR_String) "getopt_io",
  (MR_String) "option_ops_track",
  {
    mercury__getopt_io__getopt_io__du_name_ordered_option_ops_track_1
  },
  {
    mercury__getopt_io__getopt_io__du_ptag_ordered_option_ops_track_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__getopt_io__getopt_io__functor_number_map_option_ops_track_1
};

#line 3027 "getopt_io.c"
const MR_TypeCtorInfo_Struct mercury__getopt_io__getopt_io__type_ctor_info_option_table_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__getopt_io____Unify____option_table_1_0_10001)),
  ((MR_Box) (mercury__getopt_io____Compare____option_table_1_0_10001)),
  (MR_String) "getopt_io",
  (MR_String) "option_table",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__getopt_io__tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3048 "getopt_io.c"
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
  NULL
};

#line 3063 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_special_data_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 3068 "getopt_io.c"
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
  NULL
};

#line 3083 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_special_data_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3088 "getopt_io.c"
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
  NULL
};

#line 3103 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_special_data_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3108 "getopt_io.c"
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
  NULL
};

#line 3123 "getopt_io.c"
static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_special_data_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt_io__maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

#line 3128 "getopt_io.c"
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
  NULL
};

#line 3143 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_special_data_0_0[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_0
};

#line 3148 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_special_data_0_1[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_1
};

#line 3153 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_special_data_0_2[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_2
};

#line 3158 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_special_data_0_3[2] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_3,
  &mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_4
};

#line 3164 "getopt_io.c"
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

#line 3188 "getopt_io.c"
static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_special_data_0[5] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_1,
  &mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_2,
  &mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_4,
  &mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_0,
  &mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_3
};

#line 3197 "getopt_io.c"
static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_special_data_0[5] = {
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 2
};

#line 3206 "getopt_io.c"
const MR_TypeCtorInfo_Struct mercury__getopt_io__getopt_io__type_ctor_info_special_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt_io____Unify____special_data_0_0_10001)),
  ((MR_Box) (mercury__getopt_io____Compare____special_data_0_0_10001)),
  (MR_String) "getopt_io",
  (MR_String) "special_data",
  {
    mercury__getopt_io__getopt_io__du_name_ordered_special_data_0
  },
  {
    mercury__getopt_io__getopt_io__du_ptag_ordered_special_data_0
  },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mercury__getopt_io__getopt_io__functor_number_map_special_data_0
};

#line 3227 "getopt_io.c"
static MR_bool MR_CALL 
mercury__getopt_io____Unify____maybe_option_table_1_0_10001(
#line 3230 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 3232 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_2,
#line 3234 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3)
#line 3236 "getopt_io.c"
{
#line 3238 "getopt_io.c"
  {
#line 3240 "getopt_io.c"
    MR_bool mercury__getopt_io__succeeded;

#line 3243 "getopt_io.c"
    {
#line 3245 "getopt_io.c"
      mercury__getopt_io__succeeded = mercury__getopt_io____Unify____maybe_option_table_1_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), ((MR_Word) mercury__getopt_io__wrapper_arg_2), ((MR_Word) mercury__getopt_io__wrapper_arg_3));
    }
#line 3248 "getopt_io.c"
    return mercury__getopt_io__succeeded;
#line 3250 "getopt_io.c"
  }
#line 3252 "getopt_io.c"
}

#line 3255 "getopt_io.c"
static void MR_CALL 
mercury__getopt_io____Compare____maybe_option_table_1_0_10001(
#line 3258 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 3260 "getopt_io.c"
  MR_Box * mercury__getopt_io__wrapper_arg_2,
#line 3262 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3,
#line 3264 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_4)
#line 3266 "getopt_io.c"
{
#line 3268 "getopt_io.c"
  {
#line 3270 "getopt_io.c"
    MR_Word mercury__getopt_io__conv0_HeadVar__1_1;

#line 3273 "getopt_io.c"
    {
#line 3275 "getopt_io.c"
      mercury__getopt_io____Compare____maybe_option_table_1_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), &mercury__getopt_io__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt_io__wrapper_arg_3), ((MR_Word) mercury__getopt_io__wrapper_arg_4));
    }
#line 3278 "getopt_io.c"
    *mercury__getopt_io__wrapper_arg_2 = ((MR_Box) (mercury__getopt_io__conv0_HeadVar__1_1));
#line 3280 "getopt_io.c"
  }
#line 3282 "getopt_io.c"
}

#line 3285 "getopt_io.c"
static MR_bool MR_CALL 
mercury__getopt_io____Unify____maybe_option_table_se_1_0_10001(
#line 3288 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 3290 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_2,
#line 3292 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3)
#line 3294 "getopt_io.c"
{
#line 3296 "getopt_io.c"
  {
#line 3298 "getopt_io.c"
    MR_bool mercury__getopt_io__succeeded;

#line 3301 "getopt_io.c"
    {
#line 3303 "getopt_io.c"
      mercury__getopt_io__succeeded = mercury__getopt_io____Unify____maybe_option_table_se_1_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), ((MR_Word) mercury__getopt_io__wrapper_arg_2), ((MR_Word) mercury__getopt_io__wrapper_arg_3));
    }
#line 3306 "getopt_io.c"
    return mercury__getopt_io__succeeded;
#line 3308 "getopt_io.c"
  }
#line 3310 "getopt_io.c"
}

#line 3313 "getopt_io.c"
static void MR_CALL 
mercury__getopt_io____Compare____maybe_option_table_se_1_0_10001(
#line 3316 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 3318 "getopt_io.c"
  MR_Box * mercury__getopt_io__wrapper_arg_2,
#line 3320 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3,
#line 3322 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_4)
#line 3324 "getopt_io.c"
{
#line 3326 "getopt_io.c"
  {
#line 3328 "getopt_io.c"
    MR_Word mercury__getopt_io__conv0_HeadVar__1_1;

#line 3331 "getopt_io.c"
    {
#line 3333 "getopt_io.c"
      mercury__getopt_io____Compare____maybe_option_table_se_1_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), &mercury__getopt_io__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt_io__wrapper_arg_3), ((MR_Word) mercury__getopt_io__wrapper_arg_4));
    }
#line 3336 "getopt_io.c"
    *mercury__getopt_io__wrapper_arg_2 = ((MR_Box) (mercury__getopt_io__conv0_HeadVar__1_1));
#line 3338 "getopt_io.c"
  }
#line 3340 "getopt_io.c"
}

#line 3343 "getopt_io.c"
static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_data_0_0_10001(
#line 3346 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 3348 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_2)
#line 3350 "getopt_io.c"
{
#line 3352 "getopt_io.c"
  {
#line 3354 "getopt_io.c"
    MR_bool mercury__getopt_io__succeeded;

#line 3357 "getopt_io.c"
    {
#line 3359 "getopt_io.c"
      mercury__getopt_io__succeeded = mercury__getopt_io____Unify____option_data_0_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), ((MR_Word) mercury__getopt_io__wrapper_arg_2));
    }
#line 3362 "getopt_io.c"
    return mercury__getopt_io__succeeded;
#line 3364 "getopt_io.c"
  }
#line 3366 "getopt_io.c"
}

#line 3369 "getopt_io.c"
static void MR_CALL 
mercury__getopt_io____Compare____option_data_0_0_10001(
#line 3372 "getopt_io.c"
  MR_Box * mercury__getopt_io__wrapper_arg_1,
#line 3374 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_2,
#line 3376 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3)
#line 3378 "getopt_io.c"
{
#line 3380 "getopt_io.c"
  {
#line 3382 "getopt_io.c"
    MR_Word mercury__getopt_io__conv0_HeadVar__1_1;

#line 3385 "getopt_io.c"
    {
#line 3387 "getopt_io.c"
      mercury__getopt_io____Compare____option_data_0_0(&mercury__getopt_io__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt_io__wrapper_arg_2), ((MR_Word) mercury__getopt_io__wrapper_arg_3));
    }
#line 3390 "getopt_io.c"
    *mercury__getopt_io__wrapper_arg_1 = ((MR_Box) (mercury__getopt_io__conv0_HeadVar__1_1));
#line 3392 "getopt_io.c"
  }
#line 3394 "getopt_io.c"
}

#line 3397 "getopt_io.c"
static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_error_1_0_10001(
#line 3400 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 3402 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_2,
#line 3404 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3)
#line 3406 "getopt_io.c"
{
#line 3408 "getopt_io.c"
  {
#line 3410 "getopt_io.c"
    MR_bool mercury__getopt_io__succeeded;

#line 3413 "getopt_io.c"
    {
#line 3415 "getopt_io.c"
      mercury__getopt_io__succeeded = mercury__getopt_io____Unify____option_error_1_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), ((MR_Word) mercury__getopt_io__wrapper_arg_2), ((MR_Word) mercury__getopt_io__wrapper_arg_3));
    }
#line 3418 "getopt_io.c"
    return mercury__getopt_io__succeeded;
#line 3420 "getopt_io.c"
  }
#line 3422 "getopt_io.c"
}

#line 3425 "getopt_io.c"
static void MR_CALL 
mercury__getopt_io____Compare____option_error_1_0_10001(
#line 3428 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 3430 "getopt_io.c"
  MR_Box * mercury__getopt_io__wrapper_arg_2,
#line 3432 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3,
#line 3434 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_4)
#line 3436 "getopt_io.c"
{
#line 3438 "getopt_io.c"
  {
#line 3440 "getopt_io.c"
    MR_Word mercury__getopt_io__conv0_HeadVar__1_1;

#line 3443 "getopt_io.c"
    {
#line 3445 "getopt_io.c"
      mercury__getopt_io____Compare____option_error_1_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), &mercury__getopt_io__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt_io__wrapper_arg_3), ((MR_Word) mercury__getopt_io__wrapper_arg_4));
    }
#line 3448 "getopt_io.c"
    *mercury__getopt_io__wrapper_arg_2 = ((MR_Box) (mercury__getopt_io__conv0_HeadVar__1_1));
#line 3450 "getopt_io.c"
  }
#line 3452 "getopt_io.c"
}

#line 3455 "getopt_io.c"
static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_error_reason_0_0_10001(
#line 3458 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 3460 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_2)
#line 3462 "getopt_io.c"
{
#line 3464 "getopt_io.c"
  {
#line 3466 "getopt_io.c"
    MR_bool mercury__getopt_io__succeeded;

#line 3469 "getopt_io.c"
    {
#line 3471 "getopt_io.c"
      mercury__getopt_io__succeeded = mercury__getopt_io____Unify____option_error_reason_0_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), ((MR_Word) mercury__getopt_io__wrapper_arg_2));
    }
#line 3474 "getopt_io.c"
    return mercury__getopt_io__succeeded;
#line 3476 "getopt_io.c"
  }
#line 3478 "getopt_io.c"
}

#line 3481 "getopt_io.c"
static void MR_CALL 
mercury__getopt_io____Compare____option_error_reason_0_0_10001(
#line 3484 "getopt_io.c"
  MR_Box * mercury__getopt_io__wrapper_arg_1,
#line 3486 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_2,
#line 3488 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3)
#line 3490 "getopt_io.c"
{
#line 3492 "getopt_io.c"
  {
#line 3494 "getopt_io.c"
    MR_Word mercury__getopt_io__conv0_HeadVar__1_1;

#line 3497 "getopt_io.c"
    {
#line 3499 "getopt_io.c"
      mercury__getopt_io____Compare____option_error_reason_0_0(&mercury__getopt_io__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt_io__wrapper_arg_2), ((MR_Word) mercury__getopt_io__wrapper_arg_3));
    }
#line 3502 "getopt_io.c"
    *mercury__getopt_io__wrapper_arg_1 = ((MR_Box) (mercury__getopt_io__conv0_HeadVar__1_1));
#line 3504 "getopt_io.c"
  }
#line 3506 "getopt_io.c"
}

#line 3509 "getopt_io.c"
static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_1_0_10001(
#line 3512 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 3514 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_2,
#line 3516 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3)
#line 3518 "getopt_io.c"
{
#line 3520 "getopt_io.c"
  {
#line 3522 "getopt_io.c"
    MR_bool mercury__getopt_io__succeeded;

#line 3525 "getopt_io.c"
    {
#line 3527 "getopt_io.c"
      mercury__getopt_io__succeeded = mercury__getopt_io____Unify____option_ops_1_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), ((MR_Word) mercury__getopt_io__wrapper_arg_2), ((MR_Word) mercury__getopt_io__wrapper_arg_3));
    }
#line 3530 "getopt_io.c"
    return mercury__getopt_io__succeeded;
#line 3532 "getopt_io.c"
  }
#line 3534 "getopt_io.c"
}

#line 3537 "getopt_io.c"
static void MR_CALL 
mercury__getopt_io____Compare____option_ops_1_0_10001(
#line 3540 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 3542 "getopt_io.c"
  MR_Box * mercury__getopt_io__wrapper_arg_2,
#line 3544 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3,
#line 3546 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_4)
#line 3548 "getopt_io.c"
{
#line 3550 "getopt_io.c"
  {
#line 3552 "getopt_io.c"
    MR_Word mercury__getopt_io__conv0_HeadVar__1_1;

#line 3555 "getopt_io.c"
    {
#line 3557 "getopt_io.c"
      mercury__getopt_io____Compare____option_ops_1_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), &mercury__getopt_io__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt_io__wrapper_arg_3), ((MR_Word) mercury__getopt_io__wrapper_arg_4));
    }
#line 3560 "getopt_io.c"
    *mercury__getopt_io__wrapper_arg_2 = ((MR_Box) (mercury__getopt_io__conv0_HeadVar__1_1));
#line 3562 "getopt_io.c"
  }
#line 3564 "getopt_io.c"
}

#line 3567 "getopt_io.c"
static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_internal_1_0_10001(
#line 3570 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 3572 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_2,
#line 3574 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3)
#line 3576 "getopt_io.c"
{
#line 3578 "getopt_io.c"
  {
#line 3580 "getopt_io.c"
    MR_bool mercury__getopt_io__succeeded;

#line 3583 "getopt_io.c"
    {
#line 3585 "getopt_io.c"
      mercury__getopt_io__succeeded = mercury__getopt_io____Unify____option_ops_internal_1_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), ((MR_Word) mercury__getopt_io__wrapper_arg_2), ((MR_Word) mercury__getopt_io__wrapper_arg_3));
    }
#line 3588 "getopt_io.c"
    return mercury__getopt_io__succeeded;
#line 3590 "getopt_io.c"
  }
#line 3592 "getopt_io.c"
}

#line 3595 "getopt_io.c"
static void MR_CALL 
mercury__getopt_io____Compare____option_ops_internal_1_0_10001(
#line 3598 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 3600 "getopt_io.c"
  MR_Box * mercury__getopt_io__wrapper_arg_2,
#line 3602 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3,
#line 3604 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_4)
#line 3606 "getopt_io.c"
{
#line 3608 "getopt_io.c"
  {
#line 3610 "getopt_io.c"
    MR_Word mercury__getopt_io__conv0_HeadVar__1_1;

#line 3613 "getopt_io.c"
    {
#line 3615 "getopt_io.c"
      mercury__getopt_io____Compare____option_ops_internal_1_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), &mercury__getopt_io__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt_io__wrapper_arg_3), ((MR_Word) mercury__getopt_io__wrapper_arg_4));
    }
#line 3618 "getopt_io.c"
    *mercury__getopt_io__wrapper_arg_2 = ((MR_Box) (mercury__getopt_io__conv0_HeadVar__1_1));
#line 3620 "getopt_io.c"
  }
#line 3622 "getopt_io.c"
}

#line 3625 "getopt_io.c"
static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_special_1_0_10001(
#line 3628 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 3630 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_2,
#line 3632 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3)
#line 3634 "getopt_io.c"
{
#line 3636 "getopt_io.c"
  {
#line 3638 "getopt_io.c"
    MR_bool mercury__getopt_io__succeeded;

#line 3641 "getopt_io.c"
    {
#line 3643 "getopt_io.c"
      mercury__getopt_io__succeeded = mercury__getopt_io____Unify____option_ops_special_1_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), ((MR_Word) mercury__getopt_io__wrapper_arg_2), ((MR_Word) mercury__getopt_io__wrapper_arg_3));
    }
#line 3646 "getopt_io.c"
    return mercury__getopt_io__succeeded;
#line 3648 "getopt_io.c"
  }
#line 3650 "getopt_io.c"
}

#line 3653 "getopt_io.c"
static void MR_CALL 
mercury__getopt_io____Compare____option_ops_special_1_0_10001(
#line 3656 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 3658 "getopt_io.c"
  MR_Box * mercury__getopt_io__wrapper_arg_2,
#line 3660 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3,
#line 3662 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_4)
#line 3664 "getopt_io.c"
{
#line 3666 "getopt_io.c"
  {
#line 3668 "getopt_io.c"
    MR_Word mercury__getopt_io__conv0_HeadVar__1_1;

#line 3671 "getopt_io.c"
    {
#line 3673 "getopt_io.c"
      mercury__getopt_io____Compare____option_ops_special_1_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), &mercury__getopt_io__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt_io__wrapper_arg_3), ((MR_Word) mercury__getopt_io__wrapper_arg_4));
    }
#line 3676 "getopt_io.c"
    *mercury__getopt_io__wrapper_arg_2 = ((MR_Box) (mercury__getopt_io__conv0_HeadVar__1_1));
#line 3678 "getopt_io.c"
  }
#line 3680 "getopt_io.c"
}

#line 3683 "getopt_io.c"
static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_track_1_0_10001(
#line 3686 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 3688 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_2,
#line 3690 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3)
#line 3692 "getopt_io.c"
{
#line 3694 "getopt_io.c"
  {
#line 3696 "getopt_io.c"
    MR_bool mercury__getopt_io__succeeded;

#line 3699 "getopt_io.c"
    {
#line 3701 "getopt_io.c"
      mercury__getopt_io__succeeded = mercury__getopt_io____Unify____option_ops_track_1_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), ((MR_Word) mercury__getopt_io__wrapper_arg_2), ((MR_Word) mercury__getopt_io__wrapper_arg_3));
    }
#line 3704 "getopt_io.c"
    return mercury__getopt_io__succeeded;
#line 3706 "getopt_io.c"
  }
#line 3708 "getopt_io.c"
}

#line 3711 "getopt_io.c"
static void MR_CALL 
mercury__getopt_io____Compare____option_ops_track_1_0_10001(
#line 3714 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 3716 "getopt_io.c"
  MR_Box * mercury__getopt_io__wrapper_arg_2,
#line 3718 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3,
#line 3720 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_4)
#line 3722 "getopt_io.c"
{
#line 3724 "getopt_io.c"
  {
#line 3726 "getopt_io.c"
    MR_Word mercury__getopt_io__conv0_HeadVar__1_1;

#line 3729 "getopt_io.c"
    {
#line 3731 "getopt_io.c"
      mercury__getopt_io____Compare____option_ops_track_1_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), &mercury__getopt_io__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt_io__wrapper_arg_3), ((MR_Word) mercury__getopt_io__wrapper_arg_4));
    }
#line 3734 "getopt_io.c"
    *mercury__getopt_io__wrapper_arg_2 = ((MR_Box) (mercury__getopt_io__conv0_HeadVar__1_1));
#line 3736 "getopt_io.c"
  }
#line 3738 "getopt_io.c"
}

#line 3741 "getopt_io.c"
static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_table_1_0_10001(
#line 3744 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 3746 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_2,
#line 3748 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3)
#line 3750 "getopt_io.c"
{
#line 3752 "getopt_io.c"
  {
#line 3754 "getopt_io.c"
    MR_bool mercury__getopt_io__succeeded;

#line 3757 "getopt_io.c"
    {
#line 3759 "getopt_io.c"
      mercury__getopt_io__succeeded = mercury__getopt_io____Unify____option_table_1_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), ((MR_Word) mercury__getopt_io__wrapper_arg_2), ((MR_Word) mercury__getopt_io__wrapper_arg_3));
    }
#line 3762 "getopt_io.c"
    return mercury__getopt_io__succeeded;
#line 3764 "getopt_io.c"
  }
#line 3766 "getopt_io.c"
}

#line 3769 "getopt_io.c"
static void MR_CALL 
mercury__getopt_io____Compare____option_table_1_0_10001(
#line 3772 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 3774 "getopt_io.c"
  MR_Box * mercury__getopt_io__wrapper_arg_2,
#line 3776 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3,
#line 3778 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_4)
#line 3780 "getopt_io.c"
{
#line 3782 "getopt_io.c"
  {
#line 3784 "getopt_io.c"
    MR_Word mercury__getopt_io__conv0_HeadVar__1_1;

#line 3787 "getopt_io.c"
    {
#line 3789 "getopt_io.c"
      mercury__getopt_io____Compare____option_table_1_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), &mercury__getopt_io__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt_io__wrapper_arg_3), ((MR_Word) mercury__getopt_io__wrapper_arg_4));
    }
#line 3792 "getopt_io.c"
    *mercury__getopt_io__wrapper_arg_2 = ((MR_Box) (mercury__getopt_io__conv0_HeadVar__1_1));
#line 3794 "getopt_io.c"
  }
#line 3796 "getopt_io.c"
}

#line 3799 "getopt_io.c"
static MR_bool MR_CALL 
mercury__getopt_io____Unify____special_data_0_0_10001(
#line 3802 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 3804 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_2)
#line 3806 "getopt_io.c"
{
#line 3808 "getopt_io.c"
  {
#line 3810 "getopt_io.c"
    MR_bool mercury__getopt_io__succeeded;

#line 3813 "getopt_io.c"
    {
#line 3815 "getopt_io.c"
      mercury__getopt_io__succeeded = mercury__getopt_io____Unify____special_data_0_0(((MR_Word) mercury__getopt_io__wrapper_arg_1), ((MR_Word) mercury__getopt_io__wrapper_arg_2));
    }
#line 3818 "getopt_io.c"
    return mercury__getopt_io__succeeded;
#line 3820 "getopt_io.c"
  }
#line 3822 "getopt_io.c"
}

#line 3825 "getopt_io.c"
static void MR_CALL 
mercury__getopt_io____Compare____special_data_0_0_10001(
#line 3828 "getopt_io.c"
  MR_Box * mercury__getopt_io__wrapper_arg_1,
#line 3830 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_2,
#line 3832 "getopt_io.c"
  MR_Box mercury__getopt_io__wrapper_arg_3)
#line 3834 "getopt_io.c"
{
#line 3836 "getopt_io.c"
  {
#line 3838 "getopt_io.c"
    MR_Word mercury__getopt_io__conv0_HeadVar__1_1;

#line 3841 "getopt_io.c"
    {
#line 3843 "getopt_io.c"
      mercury__getopt_io____Compare____special_data_0_0(&mercury__getopt_io__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt_io__wrapper_arg_2), ((MR_Word) mercury__getopt_io__wrapper_arg_3));
    }
#line 3846 "getopt_io.c"
    *mercury__getopt_io__wrapper_arg_1 = ((MR_Box) (mercury__getopt_io__conv0_HeadVar__1_1));
#line 3848 "getopt_io.c"
  }
#line 3850 "getopt_io.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__getopt_io__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__getopt_io__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 1092 "getopt_io.m"
static void MR_CALL 
mercury__getopt_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(
#line 1092 "getopt_io.m"
  MR_Box mercury__getopt_io__Flag_5,
#line 1092 "getopt_io.m"
  MR_String mercury__getopt_io__Option_6,
#line 1092 "getopt_io.m"
  MR_String mercury__getopt_io__Arg_7,
#line 1092 "getopt_io.m"
  MR_Word * mercury__getopt_io__Result_8)
#line 1092 "getopt_io.m"
{
#line 1095 "getopt_io.m"
  {
#line 1095 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 1095 "getopt_io.m"
    MR_Word mercury__getopt_io__Reason_9;
#line 1095 "getopt_io.m"
    MR_Word mercury__getopt_io__Error_10;

#line 1096 "getopt_io.m"
    {
#line 1096 "getopt_io.m"
      mercury__getopt_io__Reason_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1096 "getopt_io.m"
      MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1096 "getopt_io.m"
      MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_9, 1) = ((MR_Box) (mercury__getopt_io__Arg_7));
#line 1096 "getopt_io.m"
    }
#line 1097 "getopt_io.m"
    {
#line 1097 "getopt_io.m"
      mercury__getopt_io__Error_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1097 "getopt_io.m"
      MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_10, 0) = mercury__getopt_io__Flag_5;
#line 1097 "getopt_io.m"
      MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_10, 1) = ((MR_Box) (mercury__getopt_io__Option_6));
#line 1097 "getopt_io.m"
      MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_10, 2) = ((MR_Box) (mercury__getopt_io__Reason_9));
#line 1097 "getopt_io.m"
    }
#line 1098 "getopt_io.m"
    {
#line 1098 "getopt_io.m"
      MR_Word base;
#line 1098 "getopt_io.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1098 "getopt_io.m"
      *mercury__getopt_io__Result_8 = base;
#line 1098 "getopt_io.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_10));
#line 1098 "getopt_io.m"
    }
#line 1095 "getopt_io.m"
  }
#line 1092 "getopt_io.m"
}

#line 190 "string.opt"
static void MR_CALL 
mercury__getopt_io__next_boundary__ho5__ho21_4_p_in__string_0(
#line 190 "string.opt"
  MR_String mercury__getopt_io__String_6_6,
#line 190 "string.opt"
  MR_Integer mercury__getopt_io__I0_7_7,
#line 190 "string.opt"
  MR_Integer * mercury__getopt_io__I_8_8)
#line 190 "string.opt"
{
#line 1149 "string.opt"
  while (MR_TRUE)
#line 1149 "string.opt"
    {
#line 1149 "string.opt"
      /* tailcall optimized into a loop */
#line 1149 "string.opt"
      {
#line 1149 "string.opt"
        MR_bool mercury__getopt_io__succeeded;
#line 1149 "string.opt"
        MR_Integer mercury__getopt_io__I1_9_9;
#line 1145 "string.opt"
        MR_Char mercury__getopt_io__Char_10_10;

#line 593 "string.opt"
{
#define MR_PROC_LABEL mercury__getopt_io__next_boundary__ho5__ho21_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__getopt_io__String_6_6 ;
	Index =  mercury__getopt_io__I0_7_7 ;
		{
#line 593 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 3982 "getopt_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__getopt_io__I1_9_9  = NextIndex;
	 mercury__getopt_io__Char_10_10  = Ch;
#line 593 "string.opt"
	}
mercury__getopt_io__succeeded  = SUCCESS_INDICATOR;
}
#line 1145 "string.opt"
        if (mercury__getopt_io__succeeded)
#line 1145 "string.opt"
          {
#line 38 "std_util.opt"
            {
#line 38 "std_util.opt"
              mercury__getopt_io__succeeded = mercury__char__is_whitespace_1_p_0(mercury__getopt_io__Char_10_10);
            }
#line 37 "std_util.opt"
            mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
#line 1145 "string.opt"
          }
#line 1149 "string.opt"
        if (mercury__getopt_io__succeeded)
#line 1148 "string.opt"
          {
#line 1148 "string.opt"
            /* direct tailcall eliminated */
#line 1148 "string.opt"
            {
#line 1148 "string.opt"
              MR_Integer mercury__getopt_io__I0_7__tmp_copy_7 = mercury__getopt_io__I1_9_9;

#line 1148 "string.opt"
              mercury__getopt_io__I0_7_7 = mercury__getopt_io__I0_7__tmp_copy_7;
#line 1148 "string.opt"
            }
#line 1148 "string.opt"
            continue;
#line 1148 "string.opt"
          }
#line 1149 "string.opt"
        else
#line 1150 "string.opt"
          *mercury__getopt_io__I_8_8 = mercury__getopt_io__I0_7_7;
#line 1149 "string.opt"
      }
#line 1149 "string.opt"
      break;
#line 1149 "string.opt"
    }
#line 190 "string.opt"
}

#line 188 "string.opt"
static void MR_CALL 
mercury__getopt_io__words_2__ho20_4_p_in__string_0(
#line 188 "string.opt"
  MR_String mercury__getopt_io__String_6_6,
#line 188 "string.opt"
  MR_Integer mercury__getopt_io__WordStart_7_7,
#line 188 "string.opt"
  MR_Word * mercury__getopt_io__Words_8_8)
#line 188 "string.opt"
{
#line 1123 "string.opt"
  {
#line 1123 "string.opt"
    MR_bool mercury__getopt_io__succeeded;
#line 1123 "string.opt"
    MR_Integer mercury__getopt_io__WordEnd_9_10;

#line 1125 "string.opt"
    {
#line 1125 "string.opt"
      mercury__getopt_io__next_boundary__ho5__ho21_4_p_in__string_0(mercury__getopt_io__String_6_6, mercury__getopt_io__WordStart_7_7, &mercury__getopt_io__WordEnd_9_10);
    }
#line 1127 "string.opt"
    mercury__getopt_io__succeeded = (mercury__getopt_io__WordEnd_9_10 == mercury__getopt_io__WordStart_7_7);
#line 1130 "string.opt"
    if (mercury__getopt_io__succeeded)
#line 1129 "string.opt"
      *mercury__getopt_io__Words_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1130 "string.opt"
    else
#line 1131 "string.opt"
      {
#line 1131 "string.opt"
        MR_String mercury__getopt_io__Word_10_11;
#line 1131 "string.opt"
        MR_Integer mercury__getopt_io__NextWordStart_11_12;

#line 800 "string.opt"
{
#define MR_PROC_LABEL mercury__getopt_io__words_2__ho20_4_p_in__string_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__getopt_io__String_6_6 ;
	Start =  mercury__getopt_io__WordStart_7_7 ;
	End =  mercury__getopt_io__WordEnd_9_10 ;
		{
#line 800 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 4098 "getopt_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__getopt_io__Word_10_11  = SubString;
#line 800 "string.opt"
}
#line 1132 "string.opt"
        {
#line 1132 "string.opt"
          mercury__getopt_io__next_boundary__ho19_4_p_in__string_0(mercury__getopt_io__String_6_6, mercury__getopt_io__WordEnd_9_10, &mercury__getopt_io__NextWordStart_11_12);
        }
#line 1134 "string.opt"
        mercury__getopt_io__succeeded = (mercury__getopt_io__WordEnd_9_10 == mercury__getopt_io__NextWordStart_11_12);
#line 1138 "string.opt"
        if (mercury__getopt_io__succeeded)
#line 1136 "string.opt"
          {
#line 1136 "string.opt"
            MR_Word mercury__getopt_io__V_14_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1136 "string.opt"
            {
#line 1136 "string.opt"
              MR_Word base;
#line 1136 "string.opt"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1136 "string.opt"
              *mercury__getopt_io__Words_8_8 = base;
#line 1136 "string.opt"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Word_10_11));
#line 1136 "string.opt"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__getopt_io__V_14_13));
#line 1136 "string.opt"
            }
#line 1136 "string.opt"
          }
#line 1138 "string.opt"
        else
#line 1139 "string.opt"
          {
#line 1139 "string.opt"
            MR_Word mercury__getopt_io__Words0_12_14;

#line 1139 "string.opt"
            {
#line 1139 "string.opt"
              mercury__getopt_io__words_2__ho20_4_p_in__string_0(mercury__getopt_io__String_6_6, mercury__getopt_io__NextWordStart_11_12, &mercury__getopt_io__Words0_12_14);
            }
#line 1140 "string.opt"
            {
#line 1140 "string.opt"
              MR_Word base;
#line 1140 "string.opt"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1140 "string.opt"
              *mercury__getopt_io__Words_8_8 = base;
#line 1140 "string.opt"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Word_10_11));
#line 1140 "string.opt"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__getopt_io__Words0_12_14));
#line 1140 "string.opt"
            }
#line 1139 "string.opt"
          }
#line 1131 "string.opt"
      }
#line 1123 "string.opt"
  }
#line 188 "string.opt"
}

#line 190 "string.opt"
static void MR_CALL 
mercury__getopt_io__next_boundary__ho19_4_p_in__string_0(
#line 190 "string.opt"
  MR_String mercury__getopt_io__String_6_6,
#line 190 "string.opt"
  MR_Integer mercury__getopt_io__I0_7_7,
#line 190 "string.opt"
  MR_Integer * mercury__getopt_io__I_8_8)
#line 190 "string.opt"
{
#line 1149 "string.opt"
  while (MR_TRUE)
#line 1149 "string.opt"
    {
#line 1149 "string.opt"
      /* tailcall optimized into a loop */
#line 1149 "string.opt"
      {
#line 1149 "string.opt"
        MR_bool mercury__getopt_io__succeeded;
#line 1149 "string.opt"
        MR_Integer mercury__getopt_io__I1_9_9;
#line 1145 "string.opt"
        MR_Char mercury__getopt_io__Char_10_10;

#line 593 "string.opt"
{
#define MR_PROC_LABEL mercury__getopt_io__next_boundary__ho19_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__getopt_io__String_6_6 ;
	Index =  mercury__getopt_io__I0_7_7 ;
		{
#line 593 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 4221 "getopt_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__getopt_io__I1_9_9  = NextIndex;
	 mercury__getopt_io__Char_10_10  = Ch;
#line 593 "string.opt"
	}
mercury__getopt_io__succeeded  = SUCCESS_INDICATOR;
}
#line 1145 "string.opt"
        if (mercury__getopt_io__succeeded)
#line 1146 "string.opt"
          {
#line 1146 "string.opt"
            mercury__getopt_io__succeeded = mercury__char__is_whitespace_1_p_0(mercury__getopt_io__Char_10_10);
          }
#line 1149 "string.opt"
        if (mercury__getopt_io__succeeded)
#line 1148 "string.opt"
          {
#line 1148 "string.opt"
            /* direct tailcall eliminated */
#line 1148 "string.opt"
            {
#line 1148 "string.opt"
              MR_Integer mercury__getopt_io__I0_7__tmp_copy_7 = mercury__getopt_io__I1_9_9;

#line 1148 "string.opt"
              mercury__getopt_io__I0_7_7 = mercury__getopt_io__I0_7__tmp_copy_7;
#line 1148 "string.opt"
            }
#line 1148 "string.opt"
            continue;
#line 1148 "string.opt"
          }
#line 1149 "string.opt"
        else
#line 1150 "string.opt"
          *mercury__getopt_io__I_8_8 = mercury__getopt_io__I0_7_7;
#line 1149 "string.opt"
      }
#line 1149 "string.opt"
      break;
#line 1149 "string.opt"
    }
#line 190 "string.opt"
}

#line 445 "getopt_io.m"
static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_2(
#line 445 "getopt_io.m"
  void * mercury__getopt_io__env_ptr_arg)
#line 445 "getopt_io.m"
{
#line 445 "getopt_io.m"
  {
#line 445 "getopt_io.m"
    struct mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0_s * mercury__getopt_io__env_ptr = (struct mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0_s *) mercury__getopt_io__env_ptr_arg;

#line 445 "getopt_io.m"
    (mercury__getopt_io__env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__OptionData_7 = ((MR_Word) (mercury__getopt_io__env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__conv1_OptionData_7);
#line 445 "getopt_io.m"
    {
#line 445 "getopt_io.m"
      mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_1(mercury__getopt_io__env_ptr);
#line 445 "getopt_io.m"
      return;
    }
#line 445 "getopt_io.m"
  }
#line 445 "getopt_io.m"
}

#line 443 "getopt_io.m"
static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_1(
#line 443 "getopt_io.m"
  void * mercury__getopt_io__env_ptr_arg)
#line 443 "getopt_io.m"
{
#line 443 "getopt_io.m"
  {
#line 443 "getopt_io.m"
    struct mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0_s * mercury__getopt_io__env_ptr = (struct mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0_s *) mercury__getopt_io__env_ptr_arg;

#line 444 "getopt_io.m"
    {
#line 444 "getopt_io.m"
      MR_Word base;
#line 444 "getopt_io.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "getopt_io.m"
      *((mercury__getopt_io__env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__HeadVar__3_10) = base;
#line 444 "getopt_io.m"
      MR_hl_field(MR_mktag(0), base, 0) = (mercury__getopt_io__env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__Option_6;
#line 444 "getopt_io.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((mercury__getopt_io__env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__OptionData_7));
#line 444 "getopt_io.m"
    }
#line 444 "getopt_io.m"
    {
#line 444 "getopt_io.m"
      ((mercury__getopt_io__env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__cont)((mercury__getopt_io__env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__cont_env_ptr);
#line 444 "getopt_io.m"
      return;
    }
#line 443 "getopt_io.m"
  }
#line 443 "getopt_io.m"
}

#line 443 "getopt_io.m"
static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0(
#line 443 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_12,
#line 443 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionDefaultsPred_3,
#line 443 "getopt_io.m"
  MR_Word * mercury__getopt_io__HeadVar__3_10,
#line 443 "getopt_io.m"
  MR_Cont mercury__getopt_io__cont,
#line 443 "getopt_io.m"
  void * mercury__getopt_io__cont_env_ptr)
#line 443 "getopt_io.m"
{
#line 443 "getopt_io.m"
  {
#line 443 "getopt_io.m"
    struct mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0_s mercury__getopt_io__env;

#line 443 "getopt_io.m"
    (mercury__getopt_io__env).mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__HeadVar__3_10 = mercury__getopt_io__HeadVar__3_10;
#line 443 "getopt_io.m"
    (mercury__getopt_io__env).mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__cont = mercury__getopt_io__cont;
#line 443 "getopt_io.m"
    (mercury__getopt_io__env).mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__cont_env_ptr = mercury__getopt_io__cont_env_ptr;
#line 443 "getopt_io.m"
    {
#line 443 "getopt_io.m"
      MR_bool mercury__getopt_io__succeeded;
#line 445 "getopt_io.m"
      void MR_CALL (* mercury__getopt_io__func_0)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionDefaultsPred_3, (MR_Integer) 1)));

#line 445 "getopt_io.m"
      {
#line 445 "getopt_io.m"
        mercury__getopt_io__func_0(((MR_Box) mercury__getopt_io__OptionDefaultsPred_3), &(mercury__getopt_io__env).mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__Option_6, &(mercury__getopt_io__env).mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__conv1_OptionData_7, mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_2, &mercury__getopt_io__env);
      }
#line 443 "getopt_io.m"
    }
#line 443 "getopt_io.m"
  }
#line 443 "getopt_io.m"
}

#line 438 "getopt_io.m"
static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_2(
#line 438 "getopt_io.m"
  void * mercury__getopt_io__env_ptr_arg)
#line 438 "getopt_io.m"
{
#line 438 "getopt_io.m"
  {
#line 438 "getopt_io.m"
    struct mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0_s * mercury__getopt_io__env_ptr = (struct mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0_s *) mercury__getopt_io__env_ptr_arg;

#line 438 "getopt_io.m"
    (mercury__getopt_io__env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__OptionData_7 = ((MR_Word) (mercury__getopt_io__env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__conv1_OptionData_7);
#line 438 "getopt_io.m"
    {
#line 438 "getopt_io.m"
      mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_1(mercury__getopt_io__env_ptr);
#line 438 "getopt_io.m"
      return;
    }
#line 438 "getopt_io.m"
  }
#line 438 "getopt_io.m"
}

#line 436 "getopt_io.m"
static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_1(
#line 436 "getopt_io.m"
  void * mercury__getopt_io__env_ptr_arg)
#line 436 "getopt_io.m"
{
#line 436 "getopt_io.m"
  {
#line 436 "getopt_io.m"
    struct mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0_s * mercury__getopt_io__env_ptr = (struct mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0_s *) mercury__getopt_io__env_ptr_arg;

#line 437 "getopt_io.m"
    {
#line 437 "getopt_io.m"
      MR_Word base;
#line 437 "getopt_io.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 437 "getopt_io.m"
      *((mercury__getopt_io__env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__HeadVar__3_10) = base;
#line 437 "getopt_io.m"
      MR_hl_field(MR_mktag(0), base, 0) = (mercury__getopt_io__env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__Option_6;
#line 437 "getopt_io.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((mercury__getopt_io__env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__OptionData_7));
#line 437 "getopt_io.m"
    }
#line 437 "getopt_io.m"
    {
#line 437 "getopt_io.m"
      ((mercury__getopt_io__env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__cont)((mercury__getopt_io__env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__cont_env_ptr);
#line 437 "getopt_io.m"
      return;
    }
#line 436 "getopt_io.m"
  }
#line 436 "getopt_io.m"
}

#line 436 "getopt_io.m"
static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0(
#line 436 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_12,
#line 436 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionDefaultsPred_3,
#line 436 "getopt_io.m"
  MR_Word * mercury__getopt_io__HeadVar__3_10,
#line 436 "getopt_io.m"
  MR_Cont mercury__getopt_io__cont,
#line 436 "getopt_io.m"
  void * mercury__getopt_io__cont_env_ptr)
#line 436 "getopt_io.m"
{
#line 436 "getopt_io.m"
  {
#line 436 "getopt_io.m"
    struct mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0_s mercury__getopt_io__env;

#line 436 "getopt_io.m"
    (mercury__getopt_io__env).mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__HeadVar__3_10 = mercury__getopt_io__HeadVar__3_10;
#line 436 "getopt_io.m"
    (mercury__getopt_io__env).mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__cont = mercury__getopt_io__cont;
#line 436 "getopt_io.m"
    (mercury__getopt_io__env).mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__cont_env_ptr = mercury__getopt_io__cont_env_ptr;
#line 436 "getopt_io.m"
    {
#line 436 "getopt_io.m"
      MR_bool mercury__getopt_io__succeeded;
#line 438 "getopt_io.m"
      void MR_CALL (* mercury__getopt_io__func_0)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionDefaultsPred_3, (MR_Integer) 1)));

#line 438 "getopt_io.m"
      {
#line 438 "getopt_io.m"
        mercury__getopt_io__func_0(((MR_Box) mercury__getopt_io__OptionDefaultsPred_3), &(mercury__getopt_io__env).mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__Option_6, &(mercury__getopt_io__env).mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__conv1_OptionData_7, mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_2, &mercury__getopt_io__env);
      }
#line 436 "getopt_io.m"
    }
#line 436 "getopt_io.m"
  }
#line 436 "getopt_io.m"
}

#line 269 "getopt_io.m"
void MR_CALL 
mercury__getopt_io____Compare____special_data_0_0(
#line 269 "getopt_io.m"
  MR_Word * mercury__getopt_io__HeadVar__1_1,
#line 269 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__2_2,
#line 269 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__3_3)
#line 269 "getopt_io.m"
{
#line 269 "getopt_io.m"
  {
#line 269 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 269 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastX_44 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;
#line 269 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastY_45 = (MR_Integer) mercury__getopt_io__HeadVar__3_3;

#line 269 "getopt_io.m"
    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_44 == mercury__getopt_io__CastY_45);
#line 269 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 4513 "getopt_io.c"
      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 269 "getopt_io.m"
    else
#line 269 "getopt_io.m"
      if ((mercury__getopt_io__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 269 "getopt_io.m"
        if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 269 "getopt_io.m"
          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 269 "getopt_io.m"
        else
#line 269 "getopt_io.m"
          if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4527 "getopt_io.c"
            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 269 "getopt_io.m"
          else
#line 269 "getopt_io.m"
            if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4533 "getopt_io.c"
              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 269 "getopt_io.m"
            else
#line 269 "getopt_io.m"
              if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4539 "getopt_io.c"
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 269 "getopt_io.m"
              else
#line 4543 "getopt_io.c"
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 269 "getopt_io.m"
      else
#line 269 "getopt_io.m"
        if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 269 "getopt_io.m"
          {
#line 269 "getopt_io.m"
            MR_Word mercury__getopt_io__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

#line 269 "getopt_io.m"
            if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4556 "getopt_io.c"
              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 269 "getopt_io.m"
            else
#line 269 "getopt_io.m"
              if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 269 "getopt_io.m"
                {
#line 269 "getopt_io.m"
                  MR_Word mercury__getopt_io__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));
#line 269 "getopt_io.m"
                  MR_Integer mercury__getopt_io__V_54_54 = (MR_Integer) mercury__getopt_io__V_50_50;
#line 269 "getopt_io.m"
                  MR_Integer mercury__getopt_io__V_55_55 = (MR_Integer) mercury__getopt_io__V_10_10;

#line 66 "private_builtin.opt"
                  mercury__getopt_io__succeeded = (mercury__getopt_io__V_54_54 < mercury__getopt_io__V_55_55);
#line 69 "private_builtin.opt"
                  if (mercury__getopt_io__succeeded)
#line 68 "private_builtin.opt"
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                  else
#line 74 "private_builtin.opt"
                    {
#line 71 "private_builtin.opt"
                      mercury__getopt_io__succeeded = (mercury__getopt_io__V_54_54 == mercury__getopt_io__V_55_55);
#line 74 "private_builtin.opt"
                      if (mercury__getopt_io__succeeded)
#line 73 "private_builtin.opt"
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                      else
#line 75 "private_builtin.opt"
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                    }
#line 269 "getopt_io.m"
                }
#line 269 "getopt_io.m"
              else
#line 269 "getopt_io.m"
                if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4599 "getopt_io.c"
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 269 "getopt_io.m"
                else
#line 269 "getopt_io.m"
                  if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4605 "getopt_io.c"
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 269 "getopt_io.m"
                  else
#line 4609 "getopt_io.c"
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 269 "getopt_io.m"
          }
#line 269 "getopt_io.m"
        else
#line 269 "getopt_io.m"
          if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 269 "getopt_io.m"
            {
#line 269 "getopt_io.m"
              MR_Integer mercury__getopt_io__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

#line 269 "getopt_io.m"
              if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4624 "getopt_io.c"
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 269 "getopt_io.m"
              else
#line 269 "getopt_io.m"
                if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4630 "getopt_io.c"
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 269 "getopt_io.m"
                else
#line 269 "getopt_io.m"
                  if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 269 "getopt_io.m"
                    {
#line 269 "getopt_io.m"
                      MR_Integer mercury__getopt_io__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));

#line 66 "private_builtin.opt"
                      mercury__getopt_io__succeeded = (mercury__getopt_io__V_51_51 < mercury__getopt_io__V_21_21);
#line 69 "private_builtin.opt"
                      if (mercury__getopt_io__succeeded)
#line 68 "private_builtin.opt"
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                      else
#line 74 "private_builtin.opt"
                        {
#line 71 "private_builtin.opt"
                          mercury__getopt_io__succeeded = (mercury__getopt_io__V_51_51 == mercury__getopt_io__V_21_21);
#line 74 "private_builtin.opt"
                          if (mercury__getopt_io__succeeded)
#line 73 "private_builtin.opt"
                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                          else
#line 75 "private_builtin.opt"
                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                        }
#line 269 "getopt_io.m"
                    }
#line 269 "getopt_io.m"
                  else
#line 269 "getopt_io.m"
                    if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4669 "getopt_io.c"
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 269 "getopt_io.m"
                    else
#line 4673 "getopt_io.c"
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 269 "getopt_io.m"
            }
#line 269 "getopt_io.m"
          else
#line 269 "getopt_io.m"
            if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 269 "getopt_io.m"
              {
#line 269 "getopt_io.m"
                MR_Word mercury__getopt_io__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));

#line 269 "getopt_io.m"
                if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4688 "getopt_io.c"
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 269 "getopt_io.m"
                else
#line 269 "getopt_io.m"
                  if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4694 "getopt_io.c"
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 269 "getopt_io.m"
                  else
#line 269 "getopt_io.m"
                    if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4700 "getopt_io.c"
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 269 "getopt_io.m"
                    else
#line 269 "getopt_io.m"
                      if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 269 "getopt_io.m"
                        {
#line 269 "getopt_io.m"
                          MR_Word mercury__getopt_io__TypeInfo_46_46 = (MR_Word) &mercury__getopt_io_scalar_common_1[1];
#line 269 "getopt_io.m"
                          MR_Word mercury__getopt_io__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));

#line 269 "getopt_io.m"
                          {
#line 269 "getopt_io.m"
                            mercury__builtin__compare_3_p_0(mercury__getopt_io__TypeInfo_46_46, mercury__getopt_io__HeadVar__1_1, ((MR_Box) (mercury__getopt_io__V_52_52)), ((MR_Box) (mercury__getopt_io__V_43_43)));
#line 269 "getopt_io.m"
                            return;
                          }
#line 269 "getopt_io.m"
                        }
#line 269 "getopt_io.m"
                      else
#line 4724 "getopt_io.c"
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 269 "getopt_io.m"
              }
#line 269 "getopt_io.m"
            else
#line 269 "getopt_io.m"
              {
#line 269 "getopt_io.m"
                MR_String mercury__getopt_io__V_53_53 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));

#line 269 "getopt_io.m"
                if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4737 "getopt_io.c"
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 269 "getopt_io.m"
                else
#line 269 "getopt_io.m"
                  if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4743 "getopt_io.c"
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 269 "getopt_io.m"
                  else
#line 269 "getopt_io.m"
                    if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4749 "getopt_io.c"
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 269 "getopt_io.m"
                    else
#line 269 "getopt_io.m"
                      if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4755 "getopt_io.c"
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 269 "getopt_io.m"
                      else
#line 269 "getopt_io.m"
                        {
#line 269 "getopt_io.m"
                          MR_String mercury__getopt_io__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));
#line 269 "getopt_io.m"
                          MR_Integer mercury__getopt_io__Res_7_65;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__getopt_io____Compare____special_data_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt_io__V_53_53 ;
	S2 =  mercury__getopt_io__V_32_32 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 4781 "getopt_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__getopt_io__Res_7_65  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                          mercury__getopt_io__succeeded = (mercury__getopt_io__Res_7_65 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                          if (mercury__getopt_io__succeeded)
#line 104 "private_builtin.opt"
                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                          else
#line 110 "private_builtin.opt"
                            {
#line 107 "private_builtin.opt"
                              mercury__getopt_io__succeeded = (mercury__getopt_io__Res_7_65 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                              if (mercury__getopt_io__succeeded)
#line 109 "private_builtin.opt"
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                              else
#line 111 "private_builtin.opt"
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                            }
#line 269 "getopt_io.m"
                        }
#line 269 "getopt_io.m"
              }
#line 269 "getopt_io.m"
  }
#line 269 "getopt_io.m"
}

#line 269 "getopt_io.m"
MR_bool MR_CALL 
mercury__getopt_io____Unify____special_data_0_0(
#line 269 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__1_1,
#line 269 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__2_2)
#line 269 "getopt_io.m"
{
#line 269 "getopt_io.m"
  {
#line 269 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 269 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastX_13 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
#line 269 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastY_14 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

#line 269 "getopt_io.m"
    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_13 == mercury__getopt_io__CastY_14);
#line 269 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 269 "getopt_io.m"
      mercury__getopt_io__succeeded = MR_TRUE;
#line 269 "getopt_io.m"
    else
#line 269 "getopt_io.m"
      if ((mercury__getopt_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 269 "getopt_io.m"
        {
#line 269 "getopt_io.m"
          MR_Integer mercury__getopt_io__CastX_3 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
#line 269 "getopt_io.m"
          MR_Integer mercury__getopt_io__CastY_4 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

#line 269 "getopt_io.m"
          mercury__getopt_io__succeeded = (mercury__getopt_io__CastY_4 == mercury__getopt_io__CastX_3);
#line 269 "getopt_io.m"
        }
#line 269 "getopt_io.m"
      else
#line 269 "getopt_io.m"
        if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 269 "getopt_io.m"
          {
#line 269 "getopt_io.m"
            MR_Word mercury__getopt_io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
#line 269 "getopt_io.m"
            MR_Word mercury__getopt_io__V_6_6;

#line 269 "getopt_io.m"
            mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 269 "getopt_io.m"
            if (mercury__getopt_io__succeeded)
#line 269 "getopt_io.m"
              {
#line 269 "getopt_io.m"
                mercury__getopt_io__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
#line 4877 "getopt_io.c"
                mercury__getopt_io__succeeded = (mercury__getopt_io__V_5_5 == mercury__getopt_io__V_6_6);
#line 269 "getopt_io.m"
              }
#line 269 "getopt_io.m"
          }
#line 269 "getopt_io.m"
        else
#line 269 "getopt_io.m"
          if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 269 "getopt_io.m"
            {
#line 269 "getopt_io.m"
              MR_Integer mercury__getopt_io__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
#line 269 "getopt_io.m"
              MR_Integer mercury__getopt_io__V_8_8;

#line 269 "getopt_io.m"
              mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 269 "getopt_io.m"
              if (mercury__getopt_io__succeeded)
#line 269 "getopt_io.m"
                {
#line 269 "getopt_io.m"
                  mercury__getopt_io__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
#line 4902 "getopt_io.c"
                  mercury__getopt_io__succeeded = (mercury__getopt_io__V_7_7 == mercury__getopt_io__V_8_8);
#line 269 "getopt_io.m"
                }
#line 269 "getopt_io.m"
            }
#line 269 "getopt_io.m"
          else
#line 269 "getopt_io.m"
            if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 269 "getopt_io.m"
              {
#line 269 "getopt_io.m"
                MR_Word mercury__getopt_io__TypeInfo_15_15;
#line 269 "getopt_io.m"
                MR_Word mercury__getopt_io__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
#line 269 "getopt_io.m"
                MR_Word mercury__getopt_io__V_12_12;

#line 269 "getopt_io.m"
                mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 269 "getopt_io.m"
                if (mercury__getopt_io__succeeded)
#line 269 "getopt_io.m"
                  {
#line 269 "getopt_io.m"
                    mercury__getopt_io__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
#line 4929 "getopt_io.c"
                    mercury__getopt_io__TypeInfo_15_15 = (MR_Word) &mercury__getopt_io_scalar_common_1[1];
#line 4931 "getopt_io.c"
                    {
#line 4933 "getopt_io.c"
                      return mercury__getopt_io__succeeded = mercury__builtin__unify_2_p_0(mercury__getopt_io__TypeInfo_15_15, ((MR_Box) (mercury__getopt_io__V_11_11)), ((MR_Box) (mercury__getopt_io__V_12_12)));
                    }
#line 269 "getopt_io.m"
                  }
#line 269 "getopt_io.m"
              }
#line 269 "getopt_io.m"
            else
#line 269 "getopt_io.m"
              {
#line 269 "getopt_io.m"
                MR_String mercury__getopt_io__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
#line 269 "getopt_io.m"
                MR_String mercury__getopt_io__V_10_10;

#line 269 "getopt_io.m"
                mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 269 "getopt_io.m"
                if (mercury__getopt_io__succeeded)
#line 269 "getopt_io.m"
                  {
#line 269 "getopt_io.m"
                    mercury__getopt_io__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
#line 4957 "getopt_io.c"
                    mercury__getopt_io__succeeded = (strcmp(mercury__getopt_io__V_9_9, mercury__getopt_io__V_10_10) == 0);
#line 269 "getopt_io.m"
                  }
#line 269 "getopt_io.m"
              }
#line 269 "getopt_io.m"
    return mercury__getopt_io__succeeded;
#line 269 "getopt_io.m"
  }
#line 269 "getopt_io.m"
}

#line 276 "getopt_io.m"
void MR_CALL 
mercury__getopt_io____Compare____option_table_1_0(
#line 276 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_6,
#line 276 "getopt_io.m"
  MR_Word * mercury__getopt_io__HeadVar__1_1,
#line 276 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__2_2,
#line 276 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__3_3)
#line 276 "getopt_io.m"
{
#line 276 "getopt_io.m"
  {
#line 276 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 276 "getopt_io.m"
    MR_Word mercury__getopt_io__TypeCtorInfo_7_7 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 276 "getopt_io.m"
    MR_Word mercury__getopt_io__Cast_HeadVar1_4 = mercury__getopt_io__HeadVar__2_2;
#line 276 "getopt_io.m"
    MR_Word mercury__getopt_io__Cast_HeadVar2_5 = mercury__getopt_io__HeadVar__3_3;

#line 276 "getopt_io.m"
    {
#line 276 "getopt_io.m"
      mercury__tree234____Compare____tree234_2_0(mercury__getopt_io__TypeInfo_for_OptionType_6, mercury__getopt_io__TypeCtorInfo_7_7, mercury__getopt_io__HeadVar__1_1, mercury__getopt_io__Cast_HeadVar1_4, mercury__getopt_io__Cast_HeadVar2_5);
#line 276 "getopt_io.m"
      return;
    }
#line 276 "getopt_io.m"
  }
#line 276 "getopt_io.m"
}

#line 276 "getopt_io.m"
MR_bool MR_CALL 
mercury__getopt_io____Unify____option_table_1_0(
#line 276 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_5,
#line 276 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__1_1,
#line 276 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__2_2)
#line 276 "getopt_io.m"
{
#line 276 "getopt_io.m"
  {
#line 276 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 276 "getopt_io.m"
    MR_Word mercury__getopt_io__TypeCtorInfo_6_6 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 276 "getopt_io.m"
    MR_Word mercury__getopt_io__Cast_HeadVar1_3 = mercury__getopt_io__HeadVar__1_1;
#line 276 "getopt_io.m"
    MR_Word mercury__getopt_io__Cast_HeadVar2_4 = mercury__getopt_io__HeadVar__2_2;

#line 276 "getopt_io.m"
    {
#line 276 "getopt_io.m"
      return mercury__getopt_io__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__getopt_io__TypeInfo_for_OptionType_5, mercury__getopt_io__TypeCtorInfo_6_6, mercury__getopt_io__Cast_HeadVar1_3, mercury__getopt_io__Cast_HeadVar2_4);
    }
#line 276 "getopt_io.m"
    return mercury__getopt_io__succeeded;
#line 276 "getopt_io.m"
  }
#line 276 "getopt_io.m"
}

#line 210 "getopt_io.m"
void MR_CALL 
mercury__getopt_io____Compare____option_ops_track_1_0(
#line 210 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_14,
#line 210 "getopt_io.m"
  MR_Word * mercury__getopt_io__HeadVar__1_1,
#line 210 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__2_2,
#line 210 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__3_3)
#line 210 "getopt_io.m"
{
#line 210 "getopt_io.m"
  {
#line 210 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 210 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastX_12 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;
#line 210 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastY_13 = (MR_Integer) mercury__getopt_io__HeadVar__3_3;

#line 210 "getopt_io.m"
    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_12 == mercury__getopt_io__CastY_13);
#line 210 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 5066 "getopt_io.c"
      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 210 "getopt_io.m"
    else
#line 210 "getopt_io.m"
      {
#line 210 "getopt_io.m"
        MR_Word mercury__getopt_io__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
#line 210 "getopt_io.m"
        MR_Word mercury__getopt_io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
#line 210 "getopt_io.m"
        MR_Word mercury__getopt_io__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));
#line 210 "getopt_io.m"
        MR_Word mercury__getopt_io__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));
#line 210 "getopt_io.m"
        MR_Word mercury__getopt_io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));
#line 210 "getopt_io.m"
        MR_Word mercury__getopt_io__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 2)));
#line 210 "getopt_io.m"
        MR_Word mercury__getopt_io__V_10_10;

#line 210 "getopt_io.m"
        {
#line 210 "getopt_io.m"
          mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt_io__V_10_10, (MR_Word) mercury__getopt_io__V_4_4, (MR_Word) mercury__getopt_io__V_7_7);
        }
#line 5092 "getopt_io.c"
        mercury__getopt_io__succeeded = (mercury__getopt_io__V_10_10 == (MR_Integer) 0);
#line 210 "getopt_io.m"
        mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
#line 210 "getopt_io.m"
        if (mercury__getopt_io__succeeded)
#line 210 "getopt_io.m"
          *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__V_10_10;
#line 210 "getopt_io.m"
        else
#line 210 "getopt_io.m"
          {
#line 210 "getopt_io.m"
            MR_Word mercury__getopt_io__V_11_11;

#line 210 "getopt_io.m"
            {
#line 210 "getopt_io.m"
              mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt_io__V_11_11, (MR_Word) mercury__getopt_io__V_5_5, (MR_Word) mercury__getopt_io__V_8_8);
            }
#line 5112 "getopt_io.c"
            mercury__getopt_io__succeeded = (mercury__getopt_io__V_11_11 == (MR_Integer) 0);
#line 210 "getopt_io.m"
            mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
#line 210 "getopt_io.m"
            if (mercury__getopt_io__succeeded)
#line 210 "getopt_io.m"
              *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__V_11_11;
#line 210 "getopt_io.m"
            else
#line 210 "getopt_io.m"
              {
#line 210 "getopt_io.m"
                mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt_io__HeadVar__1_1, (MR_Word) mercury__getopt_io__V_6_6, (MR_Word) mercury__getopt_io__V_9_9);
#line 210 "getopt_io.m"
                return;
              }
#line 210 "getopt_io.m"
          }
#line 210 "getopt_io.m"
      }
#line 210 "getopt_io.m"
  }
#line 210 "getopt_io.m"
}

#line 210 "getopt_io.m"
MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_track_1_0(
#line 210 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_11,
#line 210 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__1_1,
#line 210 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__2_2)
#line 210 "getopt_io.m"
{
#line 210 "getopt_io.m"
  {
#line 210 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 210 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastX_9 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
#line 210 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastY_10 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

#line 210 "getopt_io.m"
    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_9 == mercury__getopt_io__CastY_10);
#line 210 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 210 "getopt_io.m"
      mercury__getopt_io__succeeded = MR_TRUE;
#line 210 "getopt_io.m"
    else
#line 210 "getopt_io.m"
      {
#line 210 "getopt_io.m"
        MR_Word mercury__getopt_io__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
#line 210 "getopt_io.m"
        MR_Word mercury__getopt_io__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
#line 210 "getopt_io.m"
        MR_Word mercury__getopt_io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 2)));
#line 210 "getopt_io.m"
        MR_Word mercury__getopt_io__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
#line 210 "getopt_io.m"
        MR_Word mercury__getopt_io__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
#line 210 "getopt_io.m"
        MR_Word mercury__getopt_io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));

#line 5181 "getopt_io.c"
        {
#line 5183 "getopt_io.c"
          mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__V_3_3, (MR_Word) mercury__getopt_io__V_6_6);
        }
#line 210 "getopt_io.m"
        if (mercury__getopt_io__succeeded)
#line 210 "getopt_io.m"
          {
#line 5190 "getopt_io.c"
            {
#line 5192 "getopt_io.c"
              mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__V_4_4, (MR_Word) mercury__getopt_io__V_7_7);
            }
#line 210 "getopt_io.m"
            if (mercury__getopt_io__succeeded)
#line 5197 "getopt_io.c"
              {
#line 5199 "getopt_io.c"
                return mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__V_5_5, (MR_Word) mercury__getopt_io__V_8_8);
              }
#line 210 "getopt_io.m"
          }
#line 210 "getopt_io.m"
      }
#line 210 "getopt_io.m"
    return mercury__getopt_io__succeeded;
#line 210 "getopt_io.m"
  }
#line 210 "getopt_io.m"
}

#line 399 "getopt_io.m"
void MR_CALL 
mercury__getopt_io____Compare____option_ops_special_1_0(
#line 399 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_18,
#line 399 "getopt_io.m"
  MR_Word * mercury__getopt_io__HeadVar__1_1,
#line 399 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__2_2,
#line 399 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__3_3)
#line 399 "getopt_io.m"
{
#line 399 "getopt_io.m"
  {
#line 399 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 399 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastX_16 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;
#line 399 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastY_17 = (MR_Integer) mercury__getopt_io__HeadVar__3_3;

#line 399 "getopt_io.m"
    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_16 == mercury__getopt_io__CastY_17);
#line 399 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 5239 "getopt_io.c"
      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 399 "getopt_io.m"
    else
#line 399 "getopt_io.m"
      if ((mercury__getopt_io__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 399 "getopt_io.m"
        if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 399 "getopt_io.m"
          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 399 "getopt_io.m"
        else
#line 399 "getopt_io.m"
          if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5253 "getopt_io.c"
            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 399 "getopt_io.m"
          else
#line 5257 "getopt_io.c"
            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 399 "getopt_io.m"
      else
#line 399 "getopt_io.m"
        if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 399 "getopt_io.m"
          {
#line 399 "getopt_io.m"
            MR_Word mercury__getopt_io__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

#line 399 "getopt_io.m"
            if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5270 "getopt_io.c"
              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 399 "getopt_io.m"
            else
#line 399 "getopt_io.m"
              if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 399 "getopt_io.m"
                {
#line 399 "getopt_io.m"
                  MR_Word mercury__getopt_io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));

#line 399 "getopt_io.m"
                  {
#line 399 "getopt_io.m"
                    mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt_io__HeadVar__1_1, (MR_Word) mercury__getopt_io__V_39_39, (MR_Word) mercury__getopt_io__V_8_8);
#line 399 "getopt_io.m"
                    return;
                  }
#line 399 "getopt_io.m"
                }
#line 399 "getopt_io.m"
              else
#line 5292 "getopt_io.c"
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 399 "getopt_io.m"
          }
#line 399 "getopt_io.m"
        else
#line 399 "getopt_io.m"
          {
#line 399 "getopt_io.m"
            MR_Word mercury__getopt_io__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

#line 399 "getopt_io.m"
            if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5305 "getopt_io.c"
              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 399 "getopt_io.m"
            else
#line 399 "getopt_io.m"
              if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5311 "getopt_io.c"
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 399 "getopt_io.m"
              else
#line 399 "getopt_io.m"
                {
#line 399 "getopt_io.m"
                  MR_Word mercury__getopt_io__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));

#line 399 "getopt_io.m"
                  {
#line 399 "getopt_io.m"
                    mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt_io__HeadVar__1_1, (MR_Word) mercury__getopt_io__V_40_40, (MR_Word) mercury__getopt_io__V_15_15);
#line 399 "getopt_io.m"
                    return;
                  }
#line 399 "getopt_io.m"
                }
#line 399 "getopt_io.m"
          }
#line 399 "getopt_io.m"
  }
#line 399 "getopt_io.m"
}

#line 399 "getopt_io.m"
MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_special_1_0(
#line 399 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_11,
#line 399 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__1_1,
#line 399 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__2_2)
#line 399 "getopt_io.m"
{
#line 399 "getopt_io.m"
  {
#line 399 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 399 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastX_9 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
#line 399 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastY_10 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

#line 399 "getopt_io.m"
    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_9 == mercury__getopt_io__CastY_10);
#line 399 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 399 "getopt_io.m"
      mercury__getopt_io__succeeded = MR_TRUE;
#line 399 "getopt_io.m"
    else
#line 399 "getopt_io.m"
      if ((mercury__getopt_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 399 "getopt_io.m"
        {
#line 399 "getopt_io.m"
          MR_Integer mercury__getopt_io__CastX_3 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
#line 399 "getopt_io.m"
          MR_Integer mercury__getopt_io__CastY_4 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

#line 399 "getopt_io.m"
          mercury__getopt_io__succeeded = (mercury__getopt_io__CastY_4 == mercury__getopt_io__CastX_3);
#line 399 "getopt_io.m"
        }
#line 399 "getopt_io.m"
      else
#line 399 "getopt_io.m"
        if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 399 "getopt_io.m"
          {
#line 399 "getopt_io.m"
            MR_Word mercury__getopt_io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
#line 399 "getopt_io.m"
            MR_Word mercury__getopt_io__V_6_6;

#line 399 "getopt_io.m"
            mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 399 "getopt_io.m"
            if (mercury__getopt_io__succeeded)
#line 399 "getopt_io.m"
              {
#line 399 "getopt_io.m"
                mercury__getopt_io__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
#line 5396 "getopt_io.c"
                {
#line 5398 "getopt_io.c"
                  return mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__V_5_5, (MR_Word) mercury__getopt_io__V_6_6);
                }
#line 399 "getopt_io.m"
              }
#line 399 "getopt_io.m"
          }
#line 399 "getopt_io.m"
        else
#line 399 "getopt_io.m"
          {
#line 399 "getopt_io.m"
            MR_Word mercury__getopt_io__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
#line 399 "getopt_io.m"
            MR_Word mercury__getopt_io__V_8_8;

#line 399 "getopt_io.m"
            mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 399 "getopt_io.m"
            if (mercury__getopt_io__succeeded)
#line 399 "getopt_io.m"
              {
#line 399 "getopt_io.m"
                mercury__getopt_io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
#line 5422 "getopt_io.c"
                {
#line 5424 "getopt_io.c"
                  return mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__V_7_7, (MR_Word) mercury__getopt_io__V_8_8);
                }
#line 399 "getopt_io.m"
              }
#line 399 "getopt_io.m"
          }
#line 399 "getopt_io.m"
    return mercury__getopt_io__succeeded;
#line 399 "getopt_io.m"
  }
#line 399 "getopt_io.m"
}

#line 413 "getopt_io.m"
void MR_CALL 
mercury__getopt_io____Compare____option_ops_internal_1_0(
#line 413 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_14,
#line 413 "getopt_io.m"
  MR_Word * mercury__getopt_io__HeadVar__1_1,
#line 413 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__2_2,
#line 413 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__3_3)
#line 413 "getopt_io.m"
{
#line 413 "getopt_io.m"
  {
#line 413 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 413 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastX_12 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;
#line 413 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastY_13 = (MR_Integer) mercury__getopt_io__HeadVar__3_3;

#line 413 "getopt_io.m"
    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_12 == mercury__getopt_io__CastY_13);
#line 413 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 5464 "getopt_io.c"
      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 413 "getopt_io.m"
    else
#line 413 "getopt_io.m"
      {
#line 413 "getopt_io.m"
        MR_Word mercury__getopt_io__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
#line 413 "getopt_io.m"
        MR_Word mercury__getopt_io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
#line 413 "getopt_io.m"
        MR_Word mercury__getopt_io__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));
#line 413 "getopt_io.m"
        MR_Word mercury__getopt_io__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));
#line 413 "getopt_io.m"
        MR_Word mercury__getopt_io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));
#line 413 "getopt_io.m"
        MR_Word mercury__getopt_io__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 2)));
#line 413 "getopt_io.m"
        MR_Word mercury__getopt_io__V_10_10;

#line 413 "getopt_io.m"
        {
#line 413 "getopt_io.m"
          mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt_io__V_10_10, (MR_Word) mercury__getopt_io__V_4_4, (MR_Word) mercury__getopt_io__V_7_7);
        }
#line 5490 "getopt_io.c"
        mercury__getopt_io__succeeded = (mercury__getopt_io__V_10_10 == (MR_Integer) 0);
#line 413 "getopt_io.m"
        mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
#line 413 "getopt_io.m"
        if (mercury__getopt_io__succeeded)
#line 413 "getopt_io.m"
          *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__V_10_10;
#line 413 "getopt_io.m"
        else
#line 413 "getopt_io.m"
          {
#line 413 "getopt_io.m"
            MR_Word mercury__getopt_io__V_11_11;

#line 413 "getopt_io.m"
            {
#line 413 "getopt_io.m"
              mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt_io__V_11_11, (MR_Word) mercury__getopt_io__V_5_5, (MR_Word) mercury__getopt_io__V_8_8);
            }
#line 5510 "getopt_io.c"
            mercury__getopt_io__succeeded = (mercury__getopt_io__V_11_11 == (MR_Integer) 0);
#line 413 "getopt_io.m"
            mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
#line 413 "getopt_io.m"
            if (mercury__getopt_io__succeeded)
#line 413 "getopt_io.m"
              *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__V_11_11;
#line 413 "getopt_io.m"
            else
#line 413 "getopt_io.m"
              {
#line 413 "getopt_io.m"
                mercury__getopt_io____Compare____option_ops_special_1_0(mercury__getopt_io__TypeInfo_for_OptionType_14, mercury__getopt_io__HeadVar__1_1, mercury__getopt_io__V_6_6, mercury__getopt_io__V_9_9);
#line 413 "getopt_io.m"
                return;
              }
#line 413 "getopt_io.m"
          }
#line 413 "getopt_io.m"
      }
#line 413 "getopt_io.m"
  }
#line 413 "getopt_io.m"
}

#line 413 "getopt_io.m"
MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_internal_1_0(
#line 413 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_11,
#line 413 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__1_1,
#line 413 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__2_2)
#line 413 "getopt_io.m"
{
#line 413 "getopt_io.m"
  {
#line 413 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 413 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastX_9 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
#line 413 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastY_10 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

#line 413 "getopt_io.m"
    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_9 == mercury__getopt_io__CastY_10);
#line 413 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 413 "getopt_io.m"
      mercury__getopt_io__succeeded = MR_TRUE;
#line 413 "getopt_io.m"
    else
#line 413 "getopt_io.m"
      {
#line 413 "getopt_io.m"
        MR_Word mercury__getopt_io__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
#line 413 "getopt_io.m"
        MR_Word mercury__getopt_io__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
#line 413 "getopt_io.m"
        MR_Word mercury__getopt_io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 2)));
#line 413 "getopt_io.m"
        MR_Word mercury__getopt_io__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
#line 413 "getopt_io.m"
        MR_Word mercury__getopt_io__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
#line 413 "getopt_io.m"
        MR_Word mercury__getopt_io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));

#line 5579 "getopt_io.c"
        {
#line 5581 "getopt_io.c"
          mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__V_3_3, (MR_Word) mercury__getopt_io__V_6_6);
        }
#line 413 "getopt_io.m"
        if (mercury__getopt_io__succeeded)
#line 413 "getopt_io.m"
          {
#line 5588 "getopt_io.c"
            {
#line 5590 "getopt_io.c"
              mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__V_4_4, (MR_Word) mercury__getopt_io__V_7_7);
            }
#line 413 "getopt_io.m"
            if (mercury__getopt_io__succeeded)
#line 5595 "getopt_io.c"
              {
#line 5597 "getopt_io.c"
                return mercury__getopt_io__succeeded = mercury__getopt_io____Unify____option_ops_special_1_0(mercury__getopt_io__TypeInfo_for_OptionType_11, mercury__getopt_io__V_5_5, mercury__getopt_io__V_8_8);
              }
#line 413 "getopt_io.m"
          }
#line 413 "getopt_io.m"
      }
#line 413 "getopt_io.m"
    return mercury__getopt_io__succeeded;
#line 413 "getopt_io.m"
  }
#line 413 "getopt_io.m"
}

#line 182 "getopt_io.m"
void MR_CALL 
mercury__getopt_io____Compare____option_ops_1_0(
#line 182 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_128,
#line 182 "getopt_io.m"
  MR_Word * mercury__getopt_io__HeadVar__1_1,
#line 182 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__2_2,
#line 182 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__3_3)
#line 182 "getopt_io.m"
{
#line 182 "getopt_io.m"
  {
#line 182 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 182 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastX_126 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;
#line 182 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastY_127 = (MR_Integer) mercury__getopt_io__HeadVar__3_3;

#line 182 "getopt_io.m"
    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_126 == mercury__getopt_io__CastY_127);
#line 182 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 5637 "getopt_io.c"
      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 182 "getopt_io.m"
    else
#line 182 "getopt_io.m"
      if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 182 "getopt_io.m"
        {
#line 182 "getopt_io.m"
          MR_Word mercury__getopt_io__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));
#line 182 "getopt_io.m"
          MR_Word mercury__getopt_io__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
#line 182 "getopt_io.m"
          MR_Word mercury__getopt_io__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

#line 182 "getopt_io.m"
          if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 182 "getopt_io.m"
            {
#line 182 "getopt_io.m"
              MR_Word mercury__getopt_io__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));
#line 182 "getopt_io.m"
              MR_Word mercury__getopt_io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));
#line 182 "getopt_io.m"
              MR_Word mercury__getopt_io__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 2)));
#line 182 "getopt_io.m"
              MR_Word mercury__getopt_io__V_10_10;

#line 182 "getopt_io.m"
              {
#line 182 "getopt_io.m"
                mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt_io__V_10_10, (MR_Word) mercury__getopt_io__V_197_197, (MR_Word) mercury__getopt_io__V_7_7);
              }
#line 5670 "getopt_io.c"
              mercury__getopt_io__succeeded = (mercury__getopt_io__V_10_10 == (MR_Integer) 0);
#line 182 "getopt_io.m"
              mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
#line 182 "getopt_io.m"
              if (mercury__getopt_io__succeeded)
#line 182 "getopt_io.m"
                *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__V_10_10;
#line 182 "getopt_io.m"
              else
#line 182 "getopt_io.m"
                {
#line 182 "getopt_io.m"
                  MR_Word mercury__getopt_io__V_11_11;

#line 182 "getopt_io.m"
                  {
#line 182 "getopt_io.m"
                    mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt_io__V_11_11, (MR_Word) mercury__getopt_io__V_196_196, (MR_Word) mercury__getopt_io__V_8_8);
                  }
#line 5690 "getopt_io.c"
                  mercury__getopt_io__succeeded = (mercury__getopt_io__V_11_11 == (MR_Integer) 0);
#line 182 "getopt_io.m"
                  mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
#line 182 "getopt_io.m"
                  if (mercury__getopt_io__succeeded)
#line 182 "getopt_io.m"
                    *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__V_11_11;
#line 182 "getopt_io.m"
                  else
#line 182 "getopt_io.m"
                    {
#line 182 "getopt_io.m"
                      mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt_io__HeadVar__1_1, (MR_Word) mercury__getopt_io__V_195_195, (MR_Word) mercury__getopt_io__V_9_9);
#line 182 "getopt_io.m"
                      return;
                    }
#line 182 "getopt_io.m"
                }
#line 182 "getopt_io.m"
            }
#line 182 "getopt_io.m"
          else
#line 182 "getopt_io.m"
            if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5715 "getopt_io.c"
              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 182 "getopt_io.m"
            else
#line 182 "getopt_io.m"
              if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5721 "getopt_io.c"
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 182 "getopt_io.m"
              else
#line 5725 "getopt_io.c"
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 182 "getopt_io.m"
        }
#line 182 "getopt_io.m"
      else
#line 182 "getopt_io.m"
        if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 182 "getopt_io.m"
          {
#line 182 "getopt_io.m"
            MR_Word mercury__getopt_io__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 3)));
#line 182 "getopt_io.m"
            MR_Word mercury__getopt_io__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));
#line 182 "getopt_io.m"
            MR_Word mercury__getopt_io__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
#line 182 "getopt_io.m"
            MR_Word mercury__getopt_io__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

#line 182 "getopt_io.m"
            if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5746 "getopt_io.c"
              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 182 "getopt_io.m"
            else
#line 182 "getopt_io.m"
              if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 182 "getopt_io.m"
                {
#line 182 "getopt_io.m"
                  MR_Word mercury__getopt_io__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));
#line 182 "getopt_io.m"
                  MR_Word mercury__getopt_io__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));
#line 182 "getopt_io.m"
                  MR_Word mercury__getopt_io__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 2)));
#line 182 "getopt_io.m"
                  MR_Word mercury__getopt_io__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 3)));
#line 182 "getopt_io.m"
                  MR_Word mercury__getopt_io__V_47_47;

#line 182 "getopt_io.m"
                  {
#line 182 "getopt_io.m"
                    mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt_io__V_47_47, (MR_Word) mercury__getopt_io__V_201_201, (MR_Word) mercury__getopt_io__V_43_43);
                  }
#line 5770 "getopt_io.c"
                  mercury__getopt_io__succeeded = (mercury__getopt_io__V_47_47 == (MR_Integer) 0);
#line 182 "getopt_io.m"
                  mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
#line 182 "getopt_io.m"
                  if (mercury__getopt_io__succeeded)
#line 182 "getopt_io.m"
                    *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__V_47_47;
#line 182 "getopt_io.m"
                  else
#line 182 "getopt_io.m"
                    {
#line 182 "getopt_io.m"
                      MR_Word mercury__getopt_io__V_48_48;

#line 182 "getopt_io.m"
                      {
#line 182 "getopt_io.m"
                        mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt_io__V_48_48, (MR_Word) mercury__getopt_io__V_200_200, (MR_Word) mercury__getopt_io__V_44_44);
                      }
#line 5790 "getopt_io.c"
                      mercury__getopt_io__succeeded = (mercury__getopt_io__V_48_48 == (MR_Integer) 0);
#line 182 "getopt_io.m"
                      mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
#line 182 "getopt_io.m"
                      if (mercury__getopt_io__succeeded)
#line 182 "getopt_io.m"
                        *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__V_48_48;
#line 182 "getopt_io.m"
                      else
#line 182 "getopt_io.m"
                        {
#line 182 "getopt_io.m"
                          MR_Word mercury__getopt_io__V_49_49;

#line 182 "getopt_io.m"
                          {
#line 182 "getopt_io.m"
                            mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt_io__V_49_49, (MR_Word) mercury__getopt_io__V_199_199, (MR_Word) mercury__getopt_io__V_45_45);
                          }
#line 5810 "getopt_io.c"
                          mercury__getopt_io__succeeded = (mercury__getopt_io__V_49_49 == (MR_Integer) 0);
#line 182 "getopt_io.m"
                          mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
#line 182 "getopt_io.m"
                          if (mercury__getopt_io__succeeded)
#line 182 "getopt_io.m"
                            *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__V_49_49;
#line 182 "getopt_io.m"
                          else
#line 182 "getopt_io.m"
                            {
#line 182 "getopt_io.m"
                              mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt_io__HeadVar__1_1, (MR_Word) mercury__getopt_io__V_198_198, (MR_Word) mercury__getopt_io__V_46_46);
#line 182 "getopt_io.m"
                              return;
                            }
#line 182 "getopt_io.m"
                        }
#line 182 "getopt_io.m"
                    }
#line 182 "getopt_io.m"
                }
#line 182 "getopt_io.m"
              else
#line 182 "getopt_io.m"
                if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5837 "getopt_io.c"
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 182 "getopt_io.m"
                else
#line 5841 "getopt_io.c"
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 182 "getopt_io.m"
          }
#line 182 "getopt_io.m"
        else
#line 182 "getopt_io.m"
          if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 182 "getopt_io.m"
            {
#line 182 "getopt_io.m"
              MR_Word mercury__getopt_io__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));
#line 182 "getopt_io.m"
              MR_Word mercury__getopt_io__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
#line 182 "getopt_io.m"
              MR_Word mercury__getopt_io__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

#line 182 "getopt_io.m"
              if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5860 "getopt_io.c"
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 182 "getopt_io.m"
              else
#line 182 "getopt_io.m"
                if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5866 "getopt_io.c"
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 182 "getopt_io.m"
                else
#line 182 "getopt_io.m"
                  if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 182 "getopt_io.m"
                    {
#line 182 "getopt_io.m"
                      MR_Word mercury__getopt_io__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));
#line 182 "getopt_io.m"
                      MR_Word mercury__getopt_io__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));
#line 182 "getopt_io.m"
                      MR_Word mercury__getopt_io__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 2)));
#line 182 "getopt_io.m"
                      MR_Word mercury__getopt_io__V_84_84;

#line 182 "getopt_io.m"
                      {
#line 182 "getopt_io.m"
                        mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt_io__V_84_84, (MR_Word) mercury__getopt_io__V_204_204, (MR_Word) mercury__getopt_io__V_81_81);
                      }
#line 5888 "getopt_io.c"
                      mercury__getopt_io__succeeded = (mercury__getopt_io__V_84_84 == (MR_Integer) 0);
#line 182 "getopt_io.m"
                      mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
#line 182 "getopt_io.m"
                      if (mercury__getopt_io__succeeded)
#line 182 "getopt_io.m"
                        *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__V_84_84;
#line 182 "getopt_io.m"
                      else
#line 182 "getopt_io.m"
                        {
#line 182 "getopt_io.m"
                          MR_Word mercury__getopt_io__V_85_85;

#line 182 "getopt_io.m"
                          {
#line 182 "getopt_io.m"
                            mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt_io__V_85_85, (MR_Word) mercury__getopt_io__V_203_203, (MR_Word) mercury__getopt_io__V_82_82);
                          }
#line 5908 "getopt_io.c"
                          mercury__getopt_io__succeeded = (mercury__getopt_io__V_85_85 == (MR_Integer) 0);
#line 182 "getopt_io.m"
                          mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
#line 182 "getopt_io.m"
                          if (mercury__getopt_io__succeeded)
#line 182 "getopt_io.m"
                            *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__V_85_85;
#line 182 "getopt_io.m"
                          else
#line 182 "getopt_io.m"
                            {
#line 182 "getopt_io.m"
                              mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt_io__HeadVar__1_1, (MR_Word) mercury__getopt_io__V_202_202, (MR_Word) mercury__getopt_io__V_83_83);
#line 182 "getopt_io.m"
                              return;
                            }
#line 182 "getopt_io.m"
                        }
#line 182 "getopt_io.m"
                    }
#line 182 "getopt_io.m"
                  else
#line 5931 "getopt_io.c"
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 182 "getopt_io.m"
            }
#line 182 "getopt_io.m"
          else
#line 182 "getopt_io.m"
            {
#line 182 "getopt_io.m"
              MR_Word mercury__getopt_io__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 3)));
#line 182 "getopt_io.m"
              MR_Word mercury__getopt_io__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));
#line 182 "getopt_io.m"
              MR_Word mercury__getopt_io__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
#line 182 "getopt_io.m"
              MR_Word mercury__getopt_io__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

#line 182 "getopt_io.m"
              if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5950 "getopt_io.c"
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 182 "getopt_io.m"
              else
#line 182 "getopt_io.m"
                if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5956 "getopt_io.c"
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 182 "getopt_io.m"
                else
#line 182 "getopt_io.m"
                  if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5962 "getopt_io.c"
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 182 "getopt_io.m"
                  else
#line 182 "getopt_io.m"
                    {
#line 182 "getopt_io.m"
                      MR_Word mercury__getopt_io__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));
#line 182 "getopt_io.m"
                      MR_Word mercury__getopt_io__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));
#line 182 "getopt_io.m"
                      MR_Word mercury__getopt_io__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 2)));
#line 182 "getopt_io.m"
                      MR_Word mercury__getopt_io__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 3)));
#line 182 "getopt_io.m"
                      MR_Word mercury__getopt_io__V_123_123;

#line 182 "getopt_io.m"
                      {
#line 182 "getopt_io.m"
                        mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt_io__V_123_123, (MR_Word) mercury__getopt_io__V_208_208, (MR_Word) mercury__getopt_io__V_119_119);
                      }
#line 5984 "getopt_io.c"
                      mercury__getopt_io__succeeded = (mercury__getopt_io__V_123_123 == (MR_Integer) 0);
#line 182 "getopt_io.m"
                      mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
#line 182 "getopt_io.m"
                      if (mercury__getopt_io__succeeded)
#line 182 "getopt_io.m"
                        *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__V_123_123;
#line 182 "getopt_io.m"
                      else
#line 182 "getopt_io.m"
                        {
#line 182 "getopt_io.m"
                          MR_Word mercury__getopt_io__V_124_124;

#line 182 "getopt_io.m"
                          {
#line 182 "getopt_io.m"
                            mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt_io__V_124_124, (MR_Word) mercury__getopt_io__V_207_207, (MR_Word) mercury__getopt_io__V_120_120);
                          }
#line 6004 "getopt_io.c"
                          mercury__getopt_io__succeeded = (mercury__getopt_io__V_124_124 == (MR_Integer) 0);
#line 182 "getopt_io.m"
                          mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
#line 182 "getopt_io.m"
                          if (mercury__getopt_io__succeeded)
#line 182 "getopt_io.m"
                            *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__V_124_124;
#line 182 "getopt_io.m"
                          else
#line 182 "getopt_io.m"
                            {
#line 182 "getopt_io.m"
                              MR_Word mercury__getopt_io__V_125_125;

#line 182 "getopt_io.m"
                              {
#line 182 "getopt_io.m"
                                mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt_io__V_125_125, (MR_Word) mercury__getopt_io__V_206_206, (MR_Word) mercury__getopt_io__V_121_121);
                              }
#line 6024 "getopt_io.c"
                              mercury__getopt_io__succeeded = (mercury__getopt_io__V_125_125 == (MR_Integer) 0);
#line 182 "getopt_io.m"
                              mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
#line 182 "getopt_io.m"
                              if (mercury__getopt_io__succeeded)
#line 182 "getopt_io.m"
                                *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__V_125_125;
#line 182 "getopt_io.m"
                              else
#line 182 "getopt_io.m"
                                {
#line 182 "getopt_io.m"
                                  mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt_io__HeadVar__1_1, (MR_Word) mercury__getopt_io__V_205_205, (MR_Word) mercury__getopt_io__V_122_122);
#line 182 "getopt_io.m"
                                  return;
                                }
#line 182 "getopt_io.m"
                            }
#line 182 "getopt_io.m"
                        }
#line 182 "getopt_io.m"
                    }
#line 182 "getopt_io.m"
            }
#line 182 "getopt_io.m"
  }
#line 182 "getopt_io.m"
}

#line 182 "getopt_io.m"
MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_1_0(
#line 182 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_33,
#line 182 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__1_1,
#line 182 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__2_2)
#line 182 "getopt_io.m"
{
#line 182 "getopt_io.m"
  {
#line 182 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 182 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastX_31 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
#line 182 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastY_32 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

#line 182 "getopt_io.m"
    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_31 == mercury__getopt_io__CastY_32);
#line 182 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 182 "getopt_io.m"
      mercury__getopt_io__succeeded = MR_TRUE;
#line 182 "getopt_io.m"
    else
#line 182 "getopt_io.m"
      if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 182 "getopt_io.m"
        {
#line 182 "getopt_io.m"
          MR_Word mercury__getopt_io__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
#line 182 "getopt_io.m"
          MR_Word mercury__getopt_io__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
#line 182 "getopt_io.m"
          MR_Word mercury__getopt_io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 2)));
#line 182 "getopt_io.m"
          MR_Word mercury__getopt_io__V_6_6;
#line 182 "getopt_io.m"
          MR_Word mercury__getopt_io__V_7_7;
#line 182 "getopt_io.m"
          MR_Word mercury__getopt_io__V_8_8;

#line 182 "getopt_io.m"
          mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 182 "getopt_io.m"
          if (mercury__getopt_io__succeeded)
#line 182 "getopt_io.m"
            {
#line 182 "getopt_io.m"
              mercury__getopt_io__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
#line 182 "getopt_io.m"
              mercury__getopt_io__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
#line 182 "getopt_io.m"
              mercury__getopt_io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));
#line 6111 "getopt_io.c"
              {
#line 6113 "getopt_io.c"
                mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__V_3_3, (MR_Word) mercury__getopt_io__V_6_6);
              }
#line 182 "getopt_io.m"
              if (mercury__getopt_io__succeeded)
#line 182 "getopt_io.m"
                {
#line 6120 "getopt_io.c"
                  {
#line 6122 "getopt_io.c"
                    mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__V_4_4, (MR_Word) mercury__getopt_io__V_7_7);
                  }
#line 182 "getopt_io.m"
                  if (mercury__getopt_io__succeeded)
#line 6127 "getopt_io.c"
                    {
#line 6129 "getopt_io.c"
                      return mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__V_5_5, (MR_Word) mercury__getopt_io__V_8_8);
                    }
#line 182 "getopt_io.m"
                }
#line 182 "getopt_io.m"
            }
#line 182 "getopt_io.m"
        }
#line 182 "getopt_io.m"
      else
#line 182 "getopt_io.m"
        if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 182 "getopt_io.m"
          {
#line 182 "getopt_io.m"
            MR_Word mercury__getopt_io__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
#line 182 "getopt_io.m"
            MR_Word mercury__getopt_io__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
#line 182 "getopt_io.m"
            MR_Word mercury__getopt_io__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 2)));
#line 182 "getopt_io.m"
            MR_Word mercury__getopt_io__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 3)));
#line 182 "getopt_io.m"
            MR_Word mercury__getopt_io__V_13_13;
#line 182 "getopt_io.m"
            MR_Word mercury__getopt_io__V_14_14;
#line 182 "getopt_io.m"
            MR_Word mercury__getopt_io__V_15_15;
#line 182 "getopt_io.m"
            MR_Word mercury__getopt_io__V_16_16;

#line 182 "getopt_io.m"
            mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 182 "getopt_io.m"
            if (mercury__getopt_io__succeeded)
#line 182 "getopt_io.m"
              {
#line 182 "getopt_io.m"
                mercury__getopt_io__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
#line 182 "getopt_io.m"
                mercury__getopt_io__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
#line 182 "getopt_io.m"
                mercury__getopt_io__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));
#line 182 "getopt_io.m"
                mercury__getopt_io__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 3)));
#line 6175 "getopt_io.c"
                {
#line 6177 "getopt_io.c"
                  mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__V_9_9, (MR_Word) mercury__getopt_io__V_13_13);
                }
#line 182 "getopt_io.m"
                if (mercury__getopt_io__succeeded)
#line 182 "getopt_io.m"
                  {
#line 6184 "getopt_io.c"
                    {
#line 6186 "getopt_io.c"
                      mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__V_10_10, (MR_Word) mercury__getopt_io__V_14_14);
                    }
#line 182 "getopt_io.m"
                    if (mercury__getopt_io__succeeded)
#line 182 "getopt_io.m"
                      {
#line 6193 "getopt_io.c"
                        {
#line 6195 "getopt_io.c"
                          mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__V_11_11, (MR_Word) mercury__getopt_io__V_15_15);
                        }
#line 182 "getopt_io.m"
                        if (mercury__getopt_io__succeeded)
#line 6200 "getopt_io.c"
                          {
#line 6202 "getopt_io.c"
                            return mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__V_12_12, (MR_Word) mercury__getopt_io__V_16_16);
                          }
#line 182 "getopt_io.m"
                      }
#line 182 "getopt_io.m"
                  }
#line 182 "getopt_io.m"
              }
#line 182 "getopt_io.m"
          }
#line 182 "getopt_io.m"
        else
#line 182 "getopt_io.m"
          if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 182 "getopt_io.m"
            {
#line 182 "getopt_io.m"
              MR_Word mercury__getopt_io__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
#line 182 "getopt_io.m"
              MR_Word mercury__getopt_io__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
#line 182 "getopt_io.m"
              MR_Word mercury__getopt_io__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 2)));
#line 182 "getopt_io.m"
              MR_Word mercury__getopt_io__V_20_20;
#line 182 "getopt_io.m"
              MR_Word mercury__getopt_io__V_21_21;
#line 182 "getopt_io.m"
              MR_Word mercury__getopt_io__V_22_22;

#line 182 "getopt_io.m"
              mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 182 "getopt_io.m"
              if (mercury__getopt_io__succeeded)
#line 182 "getopt_io.m"
                {
#line 182 "getopt_io.m"
                  mercury__getopt_io__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
#line 182 "getopt_io.m"
                  mercury__getopt_io__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
#line 182 "getopt_io.m"
                  mercury__getopt_io__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));
#line 6244 "getopt_io.c"
                  {
#line 6246 "getopt_io.c"
                    mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__V_17_17, (MR_Word) mercury__getopt_io__V_20_20);
                  }
#line 182 "getopt_io.m"
                  if (mercury__getopt_io__succeeded)
#line 182 "getopt_io.m"
                    {
#line 6253 "getopt_io.c"
                      {
#line 6255 "getopt_io.c"
                        mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__V_18_18, (MR_Word) mercury__getopt_io__V_21_21);
                      }
#line 182 "getopt_io.m"
                      if (mercury__getopt_io__succeeded)
#line 6260 "getopt_io.c"
                        {
#line 6262 "getopt_io.c"
                          return mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__V_19_19, (MR_Word) mercury__getopt_io__V_22_22);
                        }
#line 182 "getopt_io.m"
                    }
#line 182 "getopt_io.m"
                }
#line 182 "getopt_io.m"
            }
#line 182 "getopt_io.m"
          else
#line 182 "getopt_io.m"
            {
#line 182 "getopt_io.m"
              MR_Word mercury__getopt_io__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
#line 182 "getopt_io.m"
              MR_Word mercury__getopt_io__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
#line 182 "getopt_io.m"
              MR_Word mercury__getopt_io__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 2)));
#line 182 "getopt_io.m"
              MR_Word mercury__getopt_io__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 3)));
#line 182 "getopt_io.m"
              MR_Word mercury__getopt_io__V_27_27;
#line 182 "getopt_io.m"
              MR_Word mercury__getopt_io__V_28_28;
#line 182 "getopt_io.m"
              MR_Word mercury__getopt_io__V_29_29;
#line 182 "getopt_io.m"
              MR_Word mercury__getopt_io__V_30_30;

#line 182 "getopt_io.m"
              mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 182 "getopt_io.m"
              if (mercury__getopt_io__succeeded)
#line 182 "getopt_io.m"
                {
#line 182 "getopt_io.m"
                  mercury__getopt_io__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
#line 182 "getopt_io.m"
                  mercury__getopt_io__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
#line 182 "getopt_io.m"
                  mercury__getopt_io__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));
#line 182 "getopt_io.m"
                  mercury__getopt_io__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 3)));
#line 6306 "getopt_io.c"
                  {
#line 6308 "getopt_io.c"
                    mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__V_23_23, (MR_Word) mercury__getopt_io__V_27_27);
                  }
#line 182 "getopt_io.m"
                  if (mercury__getopt_io__succeeded)
#line 182 "getopt_io.m"
                    {
#line 6315 "getopt_io.c"
                      {
#line 6317 "getopt_io.c"
                        mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__V_24_24, (MR_Word) mercury__getopt_io__V_28_28);
                      }
#line 182 "getopt_io.m"
                      if (mercury__getopt_io__succeeded)
#line 182 "getopt_io.m"
                        {
#line 6324 "getopt_io.c"
                          {
#line 6326 "getopt_io.c"
                            mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__V_25_25, (MR_Word) mercury__getopt_io__V_29_29);
                          }
#line 182 "getopt_io.m"
                          if (mercury__getopt_io__succeeded)
#line 6331 "getopt_io.c"
                            {
#line 6333 "getopt_io.c"
                              return mercury__getopt_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt_io__V_26_26, (MR_Word) mercury__getopt_io__V_30_30);
                            }
#line 182 "getopt_io.m"
                        }
#line 182 "getopt_io.m"
                    }
#line 182 "getopt_io.m"
                }
#line 182 "getopt_io.m"
            }
#line 182 "getopt_io.m"
    return mercury__getopt_io__succeeded;
#line 182 "getopt_io.m"
  }
#line 182 "getopt_io.m"
}

#line 298 "getopt_io.m"
void MR_CALL 
mercury__getopt_io____Compare____option_error_reason_0_0(
#line 298 "getopt_io.m"
  MR_Word * mercury__getopt_io__HeadVar__1_1,
#line 298 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__2_2,
#line 298 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__3_3)
#line 298 "getopt_io.m"
{
#line 298 "getopt_io.m"
  {
#line 298 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 298 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastX_182 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;
#line 298 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastY_183 = (MR_Integer) mercury__getopt_io__HeadVar__3_3;

#line 298 "getopt_io.m"
    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_182 == mercury__getopt_io__CastY_183);
#line 298 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 6375 "getopt_io.c"
      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 298 "getopt_io.m"
    else
#line 298 "getopt_io.m"
      if ((mercury__getopt_io__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 298 "getopt_io.m"
        if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 298 "getopt_io.m"
          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 298 "getopt_io.m"
        else
#line 298 "getopt_io.m"
          if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 298 "getopt_io.m"
            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
          else
#line 298 "getopt_io.m"
            if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 298 "getopt_io.m"
              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
            else
#line 298 "getopt_io.m"
              if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 298 "getopt_io.m"
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
              else
#line 298 "getopt_io.m"
                if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 298 "getopt_io.m"
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                else
#line 298 "getopt_io.m"
                  if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6413 "getopt_io.c"
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                  else
#line 298 "getopt_io.m"
                    if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6419 "getopt_io.c"
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                    else
#line 298 "getopt_io.m"
                      if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6425 "getopt_io.c"
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                      else
#line 298 "getopt_io.m"
                        if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6431 "getopt_io.c"
                          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                        else
#line 298 "getopt_io.m"
                          if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6437 "getopt_io.c"
                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                          else
#line 6441 "getopt_io.c"
                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
      else
#line 298 "getopt_io.m"
        if ((mercury__getopt_io__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 298 "getopt_io.m"
          if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 298 "getopt_io.m"
            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
          else
#line 298 "getopt_io.m"
            if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 298 "getopt_io.m"
              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 298 "getopt_io.m"
            else
#line 298 "getopt_io.m"
              if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 298 "getopt_io.m"
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
              else
#line 298 "getopt_io.m"
                if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 298 "getopt_io.m"
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                else
#line 298 "getopt_io.m"
                  if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 298 "getopt_io.m"
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                  else
#line 298 "getopt_io.m"
                    if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6479 "getopt_io.c"
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                    else
#line 298 "getopt_io.m"
                      if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6485 "getopt_io.c"
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                      else
#line 298 "getopt_io.m"
                        if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6491 "getopt_io.c"
                          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                        else
#line 298 "getopt_io.m"
                          if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6497 "getopt_io.c"
                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                          else
#line 298 "getopt_io.m"
                            if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6503 "getopt_io.c"
                              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                            else
#line 6507 "getopt_io.c"
                              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
        else
#line 298 "getopt_io.m"
          if ((mercury__getopt_io__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 298 "getopt_io.m"
            if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 298 "getopt_io.m"
              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
            else
#line 298 "getopt_io.m"
              if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 298 "getopt_io.m"
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
              else
#line 298 "getopt_io.m"
                if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 298 "getopt_io.m"
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 298 "getopt_io.m"
                else
#line 298 "getopt_io.m"
                  if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 298 "getopt_io.m"
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                  else
#line 298 "getopt_io.m"
                    if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 298 "getopt_io.m"
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                    else
#line 298 "getopt_io.m"
                      if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6545 "getopt_io.c"
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                      else
#line 298 "getopt_io.m"
                        if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6551 "getopt_io.c"
                          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                        else
#line 298 "getopt_io.m"
                          if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6557 "getopt_io.c"
                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                          else
#line 298 "getopt_io.m"
                            if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6563 "getopt_io.c"
                              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                            else
#line 298 "getopt_io.m"
                              if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6569 "getopt_io.c"
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                              else
#line 6573 "getopt_io.c"
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
          else
#line 298 "getopt_io.m"
            if ((mercury__getopt_io__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 298 "getopt_io.m"
              if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 298 "getopt_io.m"
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
              else
#line 298 "getopt_io.m"
                if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 298 "getopt_io.m"
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                else
#line 298 "getopt_io.m"
                  if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 298 "getopt_io.m"
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                  else
#line 298 "getopt_io.m"
                    if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 298 "getopt_io.m"
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 298 "getopt_io.m"
                    else
#line 298 "getopt_io.m"
                      if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 298 "getopt_io.m"
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                      else
#line 298 "getopt_io.m"
                        if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6611 "getopt_io.c"
                          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                        else
#line 298 "getopt_io.m"
                          if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6617 "getopt_io.c"
                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                          else
#line 298 "getopt_io.m"
                            if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6623 "getopt_io.c"
                              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                            else
#line 298 "getopt_io.m"
                              if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6629 "getopt_io.c"
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                              else
#line 298 "getopt_io.m"
                                if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6635 "getopt_io.c"
                                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                                else
#line 6639 "getopt_io.c"
                                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
            else
#line 298 "getopt_io.m"
              if ((mercury__getopt_io__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 298 "getopt_io.m"
                if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 298 "getopt_io.m"
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                else
#line 298 "getopt_io.m"
                  if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 298 "getopt_io.m"
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                  else
#line 298 "getopt_io.m"
                    if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 298 "getopt_io.m"
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                    else
#line 298 "getopt_io.m"
                      if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 298 "getopt_io.m"
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                      else
#line 298 "getopt_io.m"
                        if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 298 "getopt_io.m"
                          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 298 "getopt_io.m"
                        else
#line 298 "getopt_io.m"
                          if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6677 "getopt_io.c"
                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                          else
#line 298 "getopt_io.m"
                            if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6683 "getopt_io.c"
                              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                            else
#line 298 "getopt_io.m"
                              if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6689 "getopt_io.c"
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                              else
#line 298 "getopt_io.m"
                                if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6695 "getopt_io.c"
                                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                                else
#line 298 "getopt_io.m"
                                  if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6701 "getopt_io.c"
                                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                                  else
#line 6705 "getopt_io.c"
                                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
              else
#line 298 "getopt_io.m"
                if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 298 "getopt_io.m"
                  {
#line 298 "getopt_io.m"
                    MR_String mercury__getopt_io__V_192_192 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

#line 298 "getopt_io.m"
                    if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 6718 "getopt_io.c"
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                    else
#line 298 "getopt_io.m"
                      if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 6724 "getopt_io.c"
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                      else
#line 298 "getopt_io.m"
                        if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 6730 "getopt_io.c"
                          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                        else
#line 298 "getopt_io.m"
                          if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 6736 "getopt_io.c"
                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                          else
#line 298 "getopt_io.m"
                            if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6742 "getopt_io.c"
                              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                            else
#line 298 "getopt_io.m"
                              if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 298 "getopt_io.m"
                                {
#line 298 "getopt_io.m"
                                  MR_String mercury__getopt_io__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));
#line 298 "getopt_io.m"
                                  MR_Integer mercury__getopt_io__Res_7_207;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt_io__V_192_192 ;
	S2 =  mercury__getopt_io__V_23_23 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6770 "getopt_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__getopt_io__Res_7_207  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                                  mercury__getopt_io__succeeded = (mercury__getopt_io__Res_7_207 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                                  if (mercury__getopt_io__succeeded)
#line 104 "private_builtin.opt"
                                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                                  else
#line 110 "private_builtin.opt"
                                    {
#line 107 "private_builtin.opt"
                                      mercury__getopt_io__succeeded = (mercury__getopt_io__Res_7_207 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                                      if (mercury__getopt_io__succeeded)
#line 109 "private_builtin.opt"
                                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                                      else
#line 111 "private_builtin.opt"
                                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                                    }
#line 298 "getopt_io.m"
                                }
#line 298 "getopt_io.m"
                              else
#line 298 "getopt_io.m"
                                if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6805 "getopt_io.c"
                                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                                else
#line 298 "getopt_io.m"
                                  if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6811 "getopt_io.c"
                                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                                  else
#line 298 "getopt_io.m"
                                    if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6817 "getopt_io.c"
                                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                                    else
#line 298 "getopt_io.m"
                                      if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6823 "getopt_io.c"
                                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                                      else
#line 6827 "getopt_io.c"
                                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                  }
#line 298 "getopt_io.m"
                else
#line 298 "getopt_io.m"
                  if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 298 "getopt_io.m"
                    {
#line 298 "getopt_io.m"
                      MR_String mercury__getopt_io__V_199_199 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

#line 298 "getopt_io.m"
                      if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 6842 "getopt_io.c"
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                      else
#line 298 "getopt_io.m"
                        if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 6848 "getopt_io.c"
                          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                        else
#line 298 "getopt_io.m"
                          if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 6854 "getopt_io.c"
                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                          else
#line 298 "getopt_io.m"
                            if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 6860 "getopt_io.c"
                              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                            else
#line 298 "getopt_io.m"
                              if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6866 "getopt_io.c"
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                              else
#line 298 "getopt_io.m"
                                if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6872 "getopt_io.c"
                                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                                else
#line 298 "getopt_io.m"
                                  if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 298 "getopt_io.m"
                                    {
#line 298 "getopt_io.m"
                                      MR_String mercury__getopt_io__V_71_71 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));
#line 298 "getopt_io.m"
                                      MR_Integer mercury__getopt_io__Res_7_242;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt_io__V_199_199 ;
	S2 =  mercury__getopt_io__V_71_71 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6900 "getopt_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__getopt_io__Res_7_242  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                                      mercury__getopt_io__succeeded = (mercury__getopt_io__Res_7_242 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                                      if (mercury__getopt_io__succeeded)
#line 104 "private_builtin.opt"
                                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                                      else
#line 110 "private_builtin.opt"
                                        {
#line 107 "private_builtin.opt"
                                          mercury__getopt_io__succeeded = (mercury__getopt_io__Res_7_242 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                                          if (mercury__getopt_io__succeeded)
#line 109 "private_builtin.opt"
                                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                                          else
#line 111 "private_builtin.opt"
                                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                                        }
#line 298 "getopt_io.m"
                                    }
#line 298 "getopt_io.m"
                                  else
#line 298 "getopt_io.m"
                                    if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6935 "getopt_io.c"
                                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                                    else
#line 298 "getopt_io.m"
                                      if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6941 "getopt_io.c"
                                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                                      else
#line 298 "getopt_io.m"
                                        if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6947 "getopt_io.c"
                                          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                                        else
#line 6951 "getopt_io.c"
                                          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                    }
#line 298 "getopt_io.m"
                  else
#line 298 "getopt_io.m"
                    if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 298 "getopt_io.m"
                      {
#line 298 "getopt_io.m"
                        MR_Word mercury__getopt_io__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));
#line 298 "getopt_io.m"
                        MR_String mercury__getopt_io__V_194_194 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));

#line 298 "getopt_io.m"
                        if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 6968 "getopt_io.c"
                          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                        else
#line 298 "getopt_io.m"
                          if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 6974 "getopt_io.c"
                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                          else
#line 298 "getopt_io.m"
                            if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 6980 "getopt_io.c"
                              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                            else
#line 298 "getopt_io.m"
                              if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 6986 "getopt_io.c"
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                              else
#line 298 "getopt_io.m"
                                if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6992 "getopt_io.c"
                                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                                else
#line 298 "getopt_io.m"
                                  if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6998 "getopt_io.c"
                                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                                  else
#line 298 "getopt_io.m"
                                    if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7004 "getopt_io.c"
                                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                                    else
#line 298 "getopt_io.m"
                                      if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 298 "getopt_io.m"
                                        {
#line 298 "getopt_io.m"
                                          MR_String mercury__getopt_io__V_122_122 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));
#line 298 "getopt_io.m"
                                          MR_Word mercury__getopt_io__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 2)));
#line 298 "getopt_io.m"
                                          MR_Word mercury__getopt_io__V_124_124;
#line 298 "getopt_io.m"
                                          MR_Integer mercury__getopt_io__Res_7_212;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt_io__V_194_194 ;
	S2 =  mercury__getopt_io__V_122_122 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 7036 "getopt_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__getopt_io__Res_7_212  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                                          mercury__getopt_io__succeeded = (mercury__getopt_io__Res_7_212 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                                          if (mercury__getopt_io__succeeded)
#line 104 "private_builtin.opt"
                                            mercury__getopt_io__V_124_124 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                                          else
#line 110 "private_builtin.opt"
                                            {
#line 107 "private_builtin.opt"
                                              mercury__getopt_io__succeeded = (mercury__getopt_io__Res_7_212 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                                              if (mercury__getopt_io__succeeded)
#line 109 "private_builtin.opt"
                                                mercury__getopt_io__V_124_124 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                                              else
#line 111 "private_builtin.opt"
                                                mercury__getopt_io__V_124_124 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                                            }
#line 7065 "getopt_io.c"
                                          mercury__getopt_io__succeeded = (mercury__getopt_io__V_124_124 == (MR_Integer) 0);
#line 298 "getopt_io.m"
                                          mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
#line 298 "getopt_io.m"
                                          if (mercury__getopt_io__succeeded)
#line 298 "getopt_io.m"
                                            *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__V_124_124;
#line 298 "getopt_io.m"
                                          else
#line 298 "getopt_io.m"
                                            {
#line 298 "getopt_io.m"
                                              MR_String mercury__getopt_io__V_200_200 = (MR_String) mercury__getopt_io__V_193_193;
#line 298 "getopt_io.m"
                                              MR_String mercury__getopt_io__V_201_201 = (MR_String) mercury__getopt_io__V_123_123;
#line 298 "getopt_io.m"
                                              MR_Integer mercury__getopt_io__Res_7_217;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt_io__V_200_200 ;
	S2 =  mercury__getopt_io__V_201_201 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 7099 "getopt_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__getopt_io__Res_7_217  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                                              mercury__getopt_io__succeeded = (mercury__getopt_io__Res_7_217 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                                              if (mercury__getopt_io__succeeded)
#line 104 "private_builtin.opt"
                                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                                              else
#line 110 "private_builtin.opt"
                                                {
#line 107 "private_builtin.opt"
                                                  mercury__getopt_io__succeeded = (mercury__getopt_io__Res_7_217 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                                                  if (mercury__getopt_io__succeeded)
#line 109 "private_builtin.opt"
                                                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                                                  else
#line 111 "private_builtin.opt"
                                                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                                                }
#line 298 "getopt_io.m"
                                            }
#line 298 "getopt_io.m"
                                        }
#line 298 "getopt_io.m"
                                      else
#line 298 "getopt_io.m"
                                        if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7136 "getopt_io.c"
                                          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                                        else
#line 298 "getopt_io.m"
                                          if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7142 "getopt_io.c"
                                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                                          else
#line 7146 "getopt_io.c"
                                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                      }
#line 298 "getopt_io.m"
                    else
#line 298 "getopt_io.m"
                      if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 298 "getopt_io.m"
                        {
#line 298 "getopt_io.m"
                          MR_Word mercury__getopt_io__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));
#line 298 "getopt_io.m"
                          MR_String mercury__getopt_io__V_196_196 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));

#line 298 "getopt_io.m"
                          if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 7163 "getopt_io.c"
                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                          else
#line 298 "getopt_io.m"
                            if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 7169 "getopt_io.c"
                              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                            else
#line 298 "getopt_io.m"
                              if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 7175 "getopt_io.c"
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                              else
#line 298 "getopt_io.m"
                                if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 7181 "getopt_io.c"
                                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                                else
#line 298 "getopt_io.m"
                                  if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7187 "getopt_io.c"
                                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                                  else
#line 298 "getopt_io.m"
                                    if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7193 "getopt_io.c"
                                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                                    else
#line 298 "getopt_io.m"
                                      if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7199 "getopt_io.c"
                                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                                      else
#line 298 "getopt_io.m"
                                        if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7205 "getopt_io.c"
                                          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                                        else
#line 298 "getopt_io.m"
                                          if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 298 "getopt_io.m"
                                            {
#line 298 "getopt_io.m"
                                              MR_String mercury__getopt_io__V_157_157 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));
#line 298 "getopt_io.m"
                                              MR_Word mercury__getopt_io__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 2)));
#line 298 "getopt_io.m"
                                              MR_Word mercury__getopt_io__V_159_159;
#line 298 "getopt_io.m"
                                              MR_Integer mercury__getopt_io__Res_7_222;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt_io__V_196_196 ;
	S2 =  mercury__getopt_io__V_157_157 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 7237 "getopt_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__getopt_io__Res_7_222  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                                              mercury__getopt_io__succeeded = (mercury__getopt_io__Res_7_222 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                                              if (mercury__getopt_io__succeeded)
#line 104 "private_builtin.opt"
                                                mercury__getopt_io__V_159_159 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                                              else
#line 110 "private_builtin.opt"
                                                {
#line 107 "private_builtin.opt"
                                                  mercury__getopt_io__succeeded = (mercury__getopt_io__Res_7_222 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                                                  if (mercury__getopt_io__succeeded)
#line 109 "private_builtin.opt"
                                                    mercury__getopt_io__V_159_159 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                                                  else
#line 111 "private_builtin.opt"
                                                    mercury__getopt_io__V_159_159 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                                                }
#line 7266 "getopt_io.c"
                                              mercury__getopt_io__succeeded = (mercury__getopt_io__V_159_159 == (MR_Integer) 0);
#line 298 "getopt_io.m"
                                              mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
#line 298 "getopt_io.m"
                                              if (mercury__getopt_io__succeeded)
#line 298 "getopt_io.m"
                                                *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__V_159_159;
#line 298 "getopt_io.m"
                                              else
#line 298 "getopt_io.m"
                                                {
#line 298 "getopt_io.m"
                                                  MR_String mercury__getopt_io__V_202_202 = (MR_String) mercury__getopt_io__V_195_195;
#line 298 "getopt_io.m"
                                                  MR_String mercury__getopt_io__V_203_203 = (MR_String) mercury__getopt_io__V_158_158;
#line 298 "getopt_io.m"
                                                  MR_Integer mercury__getopt_io__Res_7_227;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt_io__V_202_202 ;
	S2 =  mercury__getopt_io__V_203_203 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 7300 "getopt_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__getopt_io__Res_7_227  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                                                  mercury__getopt_io__succeeded = (mercury__getopt_io__Res_7_227 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                                                  if (mercury__getopt_io__succeeded)
#line 104 "private_builtin.opt"
                                                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                                                  else
#line 110 "private_builtin.opt"
                                                    {
#line 107 "private_builtin.opt"
                                                      mercury__getopt_io__succeeded = (mercury__getopt_io__Res_7_227 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                                                      if (mercury__getopt_io__succeeded)
#line 109 "private_builtin.opt"
                                                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                                                      else
#line 111 "private_builtin.opt"
                                                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                                                    }
#line 298 "getopt_io.m"
                                                }
#line 298 "getopt_io.m"
                                            }
#line 298 "getopt_io.m"
                                          else
#line 298 "getopt_io.m"
                                            if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7337 "getopt_io.c"
                                              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                                            else
#line 7341 "getopt_io.c"
                                              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                        }
#line 298 "getopt_io.m"
                      else
#line 298 "getopt_io.m"
                        if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 298 "getopt_io.m"
                          {
#line 298 "getopt_io.m"
                            MR_String mercury__getopt_io__V_197_197 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));

#line 298 "getopt_io.m"
                            if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 7356 "getopt_io.c"
                              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                            else
#line 298 "getopt_io.m"
                              if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 7362 "getopt_io.c"
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                              else
#line 298 "getopt_io.m"
                                if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 7368 "getopt_io.c"
                                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                                else
#line 298 "getopt_io.m"
                                  if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 7374 "getopt_io.c"
                                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                                  else
#line 298 "getopt_io.m"
                                    if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7380 "getopt_io.c"
                                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                                    else
#line 298 "getopt_io.m"
                                      if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7386 "getopt_io.c"
                                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                                      else
#line 298 "getopt_io.m"
                                        if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7392 "getopt_io.c"
                                          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                                        else
#line 298 "getopt_io.m"
                                          if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7398 "getopt_io.c"
                                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                                          else
#line 298 "getopt_io.m"
                                            if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7404 "getopt_io.c"
                                              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                                            else
#line 298 "getopt_io.m"
                                              if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 298 "getopt_io.m"
                                                {
#line 298 "getopt_io.m"
                                                  MR_String mercury__getopt_io__V_181_181 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));
#line 298 "getopt_io.m"
                                                  MR_Integer mercury__getopt_io__Res_7_232;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt_io__V_197_197 ;
	S2 =  mercury__getopt_io__V_181_181 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 7432 "getopt_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__getopt_io__Res_7_232  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                                                  mercury__getopt_io__succeeded = (mercury__getopt_io__Res_7_232 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                                                  if (mercury__getopt_io__succeeded)
#line 104 "private_builtin.opt"
                                                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                                                  else
#line 110 "private_builtin.opt"
                                                    {
#line 107 "private_builtin.opt"
                                                      mercury__getopt_io__succeeded = (mercury__getopt_io__Res_7_232 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                                                      if (mercury__getopt_io__succeeded)
#line 109 "private_builtin.opt"
                                                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                                                      else
#line 111 "private_builtin.opt"
                                                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                                                    }
#line 298 "getopt_io.m"
                                                }
#line 298 "getopt_io.m"
                                              else
#line 7465 "getopt_io.c"
                                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                          }
#line 298 "getopt_io.m"
                        else
#line 298 "getopt_io.m"
                          {
#line 298 "getopt_io.m"
                            MR_String mercury__getopt_io__V_198_198 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));

#line 298 "getopt_io.m"
                            if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 7478 "getopt_io.c"
                              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                            else
#line 298 "getopt_io.m"
                              if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 7484 "getopt_io.c"
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                              else
#line 298 "getopt_io.m"
                                if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 7490 "getopt_io.c"
                                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                                else
#line 298 "getopt_io.m"
                                  if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 7496 "getopt_io.c"
                                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                                  else
#line 298 "getopt_io.m"
                                    if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7502 "getopt_io.c"
                                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                                    else
#line 298 "getopt_io.m"
                                      if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7508 "getopt_io.c"
                                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                                      else
#line 298 "getopt_io.m"
                                        if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7514 "getopt_io.c"
                                          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 298 "getopt_io.m"
                                        else
#line 298 "getopt_io.m"
                                          if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7520 "getopt_io.c"
                                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                                          else
#line 298 "getopt_io.m"
                                            if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7526 "getopt_io.c"
                                              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                                            else
#line 298 "getopt_io.m"
                                              if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7532 "getopt_io.c"
                                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 298 "getopt_io.m"
                                              else
#line 298 "getopt_io.m"
                                                {
#line 298 "getopt_io.m"
                                                  MR_String mercury__getopt_io__V_92_92 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));
#line 298 "getopt_io.m"
                                                  MR_Integer mercury__getopt_io__Res_7_237;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt_io__V_198_198 ;
	S2 =  mercury__getopt_io__V_92_92 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 7558 "getopt_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__getopt_io__Res_7_237  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                                                  mercury__getopt_io__succeeded = (mercury__getopt_io__Res_7_237 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                                                  if (mercury__getopt_io__succeeded)
#line 104 "private_builtin.opt"
                                                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                                                  else
#line 110 "private_builtin.opt"
                                                    {
#line 107 "private_builtin.opt"
                                                      mercury__getopt_io__succeeded = (mercury__getopt_io__Res_7_237 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                                                      if (mercury__getopt_io__succeeded)
#line 109 "private_builtin.opt"
                                                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                                                      else
#line 111 "private_builtin.opt"
                                                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                                                    }
#line 298 "getopt_io.m"
                                                }
#line 298 "getopt_io.m"
                          }
#line 298 "getopt_io.m"
  }
#line 298 "getopt_io.m"
}

#line 298 "getopt_io.m"
MR_bool MR_CALL 
mercury__getopt_io____Unify____option_error_reason_0_0(
#line 298 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__1_1,
#line 298 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__2_2)
#line 298 "getopt_io.m"
{
#line 298 "getopt_io.m"
  {
#line 298 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 298 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastX_29 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
#line 298 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastY_30 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

#line 298 "getopt_io.m"
    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_29 == mercury__getopt_io__CastY_30);
#line 298 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 298 "getopt_io.m"
      mercury__getopt_io__succeeded = MR_TRUE;
#line 298 "getopt_io.m"
    else
#line 298 "getopt_io.m"
      if ((mercury__getopt_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 298 "getopt_io.m"
        {
#line 298 "getopt_io.m"
          MR_Integer mercury__getopt_io__CastX_9 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
#line 298 "getopt_io.m"
          MR_Integer mercury__getopt_io__CastY_10 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

#line 298 "getopt_io.m"
          mercury__getopt_io__succeeded = (mercury__getopt_io__CastY_10 == mercury__getopt_io__CastX_9);
#line 298 "getopt_io.m"
        }
#line 298 "getopt_io.m"
      else
#line 298 "getopt_io.m"
        if ((mercury__getopt_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 298 "getopt_io.m"
          {
#line 298 "getopt_io.m"
            MR_Integer mercury__getopt_io__CastX_5 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
#line 298 "getopt_io.m"
            MR_Integer mercury__getopt_io__CastY_6 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

#line 298 "getopt_io.m"
            mercury__getopt_io__succeeded = (mercury__getopt_io__CastY_6 == mercury__getopt_io__CastX_5);
#line 298 "getopt_io.m"
          }
#line 298 "getopt_io.m"
        else
#line 298 "getopt_io.m"
          if ((mercury__getopt_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 298 "getopt_io.m"
            {
#line 298 "getopt_io.m"
              MR_Integer mercury__getopt_io__CastX_11 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
#line 298 "getopt_io.m"
              MR_Integer mercury__getopt_io__CastY_12 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

#line 298 "getopt_io.m"
              mercury__getopt_io__succeeded = (mercury__getopt_io__CastY_12 == mercury__getopt_io__CastX_11);
#line 298 "getopt_io.m"
            }
#line 298 "getopt_io.m"
          else
#line 298 "getopt_io.m"
            if ((mercury__getopt_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 298 "getopt_io.m"
              {
#line 298 "getopt_io.m"
                MR_Integer mercury__getopt_io__CastX_13 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
#line 298 "getopt_io.m"
                MR_Integer mercury__getopt_io__CastY_14 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

#line 298 "getopt_io.m"
                mercury__getopt_io__succeeded = (mercury__getopt_io__CastY_14 == mercury__getopt_io__CastX_13);
#line 298 "getopt_io.m"
              }
#line 298 "getopt_io.m"
            else
#line 298 "getopt_io.m"
              if ((mercury__getopt_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 298 "getopt_io.m"
                {
#line 298 "getopt_io.m"
                  MR_Integer mercury__getopt_io__CastX_3 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
#line 298 "getopt_io.m"
                  MR_Integer mercury__getopt_io__CastY_4 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

#line 298 "getopt_io.m"
                  mercury__getopt_io__succeeded = (mercury__getopt_io__CastY_4 == mercury__getopt_io__CastX_3);
#line 298 "getopt_io.m"
                }
#line 298 "getopt_io.m"
              else
#line 298 "getopt_io.m"
                if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 298 "getopt_io.m"
                  {
#line 298 "getopt_io.m"
                    MR_String mercury__getopt_io__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
#line 298 "getopt_io.m"
                    MR_String mercury__getopt_io__V_8_8;

#line 298 "getopt_io.m"
                    mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 298 "getopt_io.m"
                    if (mercury__getopt_io__succeeded)
#line 298 "getopt_io.m"
                      {
#line 298 "getopt_io.m"
                        mercury__getopt_io__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
#line 7714 "getopt_io.c"
                        mercury__getopt_io__succeeded = (strcmp(mercury__getopt_io__V_7_7, mercury__getopt_io__V_8_8) == 0);
#line 298 "getopt_io.m"
                      }
#line 298 "getopt_io.m"
                  }
#line 298 "getopt_io.m"
                else
#line 298 "getopt_io.m"
                  if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 298 "getopt_io.m"
                    {
#line 298 "getopt_io.m"
                      MR_String mercury__getopt_io__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
#line 298 "getopt_io.m"
                      MR_String mercury__getopt_io__V_16_16;

#line 298 "getopt_io.m"
                      mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 298 "getopt_io.m"
                      if (mercury__getopt_io__succeeded)
#line 298 "getopt_io.m"
                        {
#line 298 "getopt_io.m"
                          mercury__getopt_io__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
#line 7739 "getopt_io.c"
                          mercury__getopt_io__succeeded = (strcmp(mercury__getopt_io__V_15_15, mercury__getopt_io__V_16_16) == 0);
#line 298 "getopt_io.m"
                        }
#line 298 "getopt_io.m"
                    }
#line 298 "getopt_io.m"
                  else
#line 298 "getopt_io.m"
                    if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 298 "getopt_io.m"
                      {
#line 298 "getopt_io.m"
                        MR_String mercury__getopt_io__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
#line 298 "getopt_io.m"
                        MR_Word mercury__getopt_io__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 2)));
#line 298 "getopt_io.m"
                        MR_String mercury__getopt_io__V_21_21;
#line 298 "getopt_io.m"
                        MR_Word mercury__getopt_io__V_22_22;
#line 298 "getopt_io.m"
                        MR_String mercury__getopt_io__V_33_33;
#line 298 "getopt_io.m"
                        MR_String mercury__getopt_io__V_34_34;

#line 298 "getopt_io.m"
                        mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 298 "getopt_io.m"
                        if (mercury__getopt_io__succeeded)
#line 298 "getopt_io.m"
                          {
#line 298 "getopt_io.m"
                            mercury__getopt_io__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
#line 298 "getopt_io.m"
                            mercury__getopt_io__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));
#line 7774 "getopt_io.c"
                            mercury__getopt_io__succeeded = (strcmp(mercury__getopt_io__V_19_19, mercury__getopt_io__V_21_21) == 0);
#line 298 "getopt_io.m"
                            if (mercury__getopt_io__succeeded)
#line 298 "getopt_io.m"
                              {
#line 7780 "getopt_io.c"
                                mercury__getopt_io__V_33_33 = (MR_String) mercury__getopt_io__V_20_20;
#line 7782 "getopt_io.c"
                                mercury__getopt_io__V_34_34 = (MR_String) mercury__getopt_io__V_22_22;
#line 7784 "getopt_io.c"
                                mercury__getopt_io__succeeded = (strcmp(mercury__getopt_io__V_33_33, mercury__getopt_io__V_34_34) == 0);
#line 298 "getopt_io.m"
                              }
#line 298 "getopt_io.m"
                          }
#line 298 "getopt_io.m"
                      }
#line 298 "getopt_io.m"
                    else
#line 298 "getopt_io.m"
                      if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 298 "getopt_io.m"
                        {
#line 298 "getopt_io.m"
                          MR_String mercury__getopt_io__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
#line 298 "getopt_io.m"
                          MR_Word mercury__getopt_io__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 2)));
#line 298 "getopt_io.m"
                          MR_String mercury__getopt_io__V_25_25;
#line 298 "getopt_io.m"
                          MR_Word mercury__getopt_io__V_26_26;
#line 298 "getopt_io.m"
                          MR_String mercury__getopt_io__V_35_35;
#line 298 "getopt_io.m"
                          MR_String mercury__getopt_io__V_36_36;

#line 298 "getopt_io.m"
                          mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 298 "getopt_io.m"
                          if (mercury__getopt_io__succeeded)
#line 298 "getopt_io.m"
                            {
#line 298 "getopt_io.m"
                              mercury__getopt_io__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
#line 298 "getopt_io.m"
                              mercury__getopt_io__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));
#line 7821 "getopt_io.c"
                              mercury__getopt_io__succeeded = (strcmp(mercury__getopt_io__V_23_23, mercury__getopt_io__V_25_25) == 0);
#line 298 "getopt_io.m"
                              if (mercury__getopt_io__succeeded)
#line 298 "getopt_io.m"
                                {
#line 7827 "getopt_io.c"
                                  mercury__getopt_io__V_35_35 = (MR_String) mercury__getopt_io__V_24_24;
#line 7829 "getopt_io.c"
                                  mercury__getopt_io__V_36_36 = (MR_String) mercury__getopt_io__V_26_26;
#line 7831 "getopt_io.c"
                                  mercury__getopt_io__succeeded = (strcmp(mercury__getopt_io__V_35_35, mercury__getopt_io__V_36_36) == 0);
#line 298 "getopt_io.m"
                                }
#line 298 "getopt_io.m"
                            }
#line 298 "getopt_io.m"
                        }
#line 298 "getopt_io.m"
                      else
#line 298 "getopt_io.m"
                        if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 298 "getopt_io.m"
                          {
#line 298 "getopt_io.m"
                            MR_String mercury__getopt_io__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
#line 298 "getopt_io.m"
                            MR_String mercury__getopt_io__V_28_28;

#line 298 "getopt_io.m"
                            mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 298 "getopt_io.m"
                            if (mercury__getopt_io__succeeded)
#line 298 "getopt_io.m"
                              {
#line 298 "getopt_io.m"
                                mercury__getopt_io__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
#line 7858 "getopt_io.c"
                                mercury__getopt_io__succeeded = (strcmp(mercury__getopt_io__V_27_27, mercury__getopt_io__V_28_28) == 0);
#line 298 "getopt_io.m"
                              }
#line 298 "getopt_io.m"
                          }
#line 298 "getopt_io.m"
                        else
#line 298 "getopt_io.m"
                          {
#line 298 "getopt_io.m"
                            MR_String mercury__getopt_io__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
#line 298 "getopt_io.m"
                            MR_String mercury__getopt_io__V_18_18;

#line 298 "getopt_io.m"
                            mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 298 "getopt_io.m"
                            if (mercury__getopt_io__succeeded)
#line 298 "getopt_io.m"
                              {
#line 298 "getopt_io.m"
                                mercury__getopt_io__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
#line 7881 "getopt_io.c"
                                mercury__getopt_io__succeeded = (strcmp(mercury__getopt_io__V_17_17, mercury__getopt_io__V_18_18) == 0);
#line 298 "getopt_io.m"
                              }
#line 298 "getopt_io.m"
                          }
#line 298 "getopt_io.m"
    return mercury__getopt_io__succeeded;
#line 298 "getopt_io.m"
  }
#line 298 "getopt_io.m"
}

#line 286 "getopt_io.m"
void MR_CALL 
mercury__getopt_io____Compare____option_error_1_0(
#line 286 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_24,
#line 286 "getopt_io.m"
  MR_Word * mercury__getopt_io__HeadVar__1_1,
#line 286 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__2_2,
#line 286 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__3_3)
#line 286 "getopt_io.m"
{
#line 286 "getopt_io.m"
  {
#line 286 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 286 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastX_22 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;
#line 286 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastY_23 = (MR_Integer) mercury__getopt_io__HeadVar__3_3;

#line 286 "getopt_io.m"
    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_22 == mercury__getopt_io__CastY_23);
#line 286 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 7920 "getopt_io.c"
      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 286 "getopt_io.m"
    else
#line 286 "getopt_io.m"
      if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 286 "getopt_io.m"
        {
#line 286 "getopt_io.m"
          MR_Word mercury__getopt_io__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));
#line 286 "getopt_io.m"
          MR_String mercury__getopt_io__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "getopt_io.m"
          MR_Box mercury__getopt_io__V_30_30 = (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0));

#line 286 "getopt_io.m"
          if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 286 "getopt_io.m"
            {
#line 286 "getopt_io.m"
              MR_Box mercury__getopt_io__V_17_17 = (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0));
#line 286 "getopt_io.m"
              MR_String mercury__getopt_io__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));
#line 286 "getopt_io.m"
              MR_Word mercury__getopt_io__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 2)));
#line 286 "getopt_io.m"
              MR_Word mercury__getopt_io__V_20_20;

#line 286 "getopt_io.m"
              {
#line 286 "getopt_io.m"
                mercury__builtin__compare_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_24, &mercury__getopt_io__V_20_20, mercury__getopt_io__V_30_30, mercury__getopt_io__V_17_17);
              }
#line 7953 "getopt_io.c"
              mercury__getopt_io__succeeded = (mercury__getopt_io__V_20_20 == (MR_Integer) 0);
#line 286 "getopt_io.m"
              mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
#line 286 "getopt_io.m"
              if (mercury__getopt_io__succeeded)
#line 286 "getopt_io.m"
                *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__V_20_20;
#line 286 "getopt_io.m"
              else
#line 286 "getopt_io.m"
                {
#line 286 "getopt_io.m"
                  MR_Word mercury__getopt_io__V_21_21;
#line 286 "getopt_io.m"
                  MR_Integer mercury__getopt_io__Res_7_35;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt_io__V_29_29 ;
	S2 =  mercury__getopt_io__V_18_18 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 7985 "getopt_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__getopt_io__Res_7_35  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                  mercury__getopt_io__succeeded = (mercury__getopt_io__Res_7_35 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                  if (mercury__getopt_io__succeeded)
#line 104 "private_builtin.opt"
                    mercury__getopt_io__V_21_21 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                  else
#line 110 "private_builtin.opt"
                    {
#line 107 "private_builtin.opt"
                      mercury__getopt_io__succeeded = (mercury__getopt_io__Res_7_35 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                      if (mercury__getopt_io__succeeded)
#line 109 "private_builtin.opt"
                        mercury__getopt_io__V_21_21 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                      else
#line 111 "private_builtin.opt"
                        mercury__getopt_io__V_21_21 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                    }
#line 8014 "getopt_io.c"
                  mercury__getopt_io__succeeded = (mercury__getopt_io__V_21_21 == (MR_Integer) 0);
#line 286 "getopt_io.m"
                  mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
#line 286 "getopt_io.m"
                  if (mercury__getopt_io__succeeded)
#line 286 "getopt_io.m"
                    *mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__V_21_21;
#line 286 "getopt_io.m"
                  else
#line 286 "getopt_io.m"
                    {
#line 286 "getopt_io.m"
                      mercury__getopt_io____Compare____option_error_reason_0_0(mercury__getopt_io__HeadVar__1_1, mercury__getopt_io__V_28_28, mercury__getopt_io__V_19_19);
#line 286 "getopt_io.m"
                      return;
                    }
#line 286 "getopt_io.m"
                }
#line 286 "getopt_io.m"
            }
#line 286 "getopt_io.m"
          else
#line 8037 "getopt_io.c"
            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 286 "getopt_io.m"
        }
#line 286 "getopt_io.m"
      else
#line 286 "getopt_io.m"
        {
#line 286 "getopt_io.m"
          MR_String mercury__getopt_io__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

#line 286 "getopt_io.m"
          if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 8050 "getopt_io.c"
            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 286 "getopt_io.m"
          else
#line 286 "getopt_io.m"
            {
#line 286 "getopt_io.m"
              MR_String mercury__getopt_io__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));
#line 286 "getopt_io.m"
              MR_Integer mercury__getopt_io__Res_7_40;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt_io__V_31_31 ;
	S2 =  mercury__getopt_io__V_5_5 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 8076 "getopt_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__getopt_io__Res_7_40  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
              mercury__getopt_io__succeeded = (mercury__getopt_io__Res_7_40 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
              if (mercury__getopt_io__succeeded)
#line 104 "private_builtin.opt"
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
              else
#line 110 "private_builtin.opt"
                {
#line 107 "private_builtin.opt"
                  mercury__getopt_io__succeeded = (mercury__getopt_io__Res_7_40 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                  if (mercury__getopt_io__succeeded)
#line 109 "private_builtin.opt"
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                  else
#line 111 "private_builtin.opt"
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                }
#line 286 "getopt_io.m"
            }
#line 286 "getopt_io.m"
        }
#line 286 "getopt_io.m"
  }
#line 286 "getopt_io.m"
}

#line 286 "getopt_io.m"
MR_bool MR_CALL 
mercury__getopt_io____Unify____option_error_1_0(
#line 286 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_13,
#line 286 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__1_1,
#line 286 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__2_2)
#line 286 "getopt_io.m"
{
#line 286 "getopt_io.m"
  {
#line 286 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 286 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastX_11 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
#line 286 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastY_12 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

#line 286 "getopt_io.m"
    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_11 == mercury__getopt_io__CastY_12);
#line 286 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 286 "getopt_io.m"
      mercury__getopt_io__succeeded = MR_TRUE;
#line 286 "getopt_io.m"
    else
#line 286 "getopt_io.m"
      if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 286 "getopt_io.m"
        {
#line 286 "getopt_io.m"
          MR_Box mercury__getopt_io__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0));
#line 286 "getopt_io.m"
          MR_String mercury__getopt_io__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
#line 286 "getopt_io.m"
          MR_Word mercury__getopt_io__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 2)));
#line 286 "getopt_io.m"
          MR_Box mercury__getopt_io__V_8_8;
#line 286 "getopt_io.m"
          MR_String mercury__getopt_io__V_9_9;
#line 286 "getopt_io.m"
          MR_Word mercury__getopt_io__V_10_10;

#line 286 "getopt_io.m"
          mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 286 "getopt_io.m"
          if (mercury__getopt_io__succeeded)
#line 286 "getopt_io.m"
            {
#line 286 "getopt_io.m"
              mercury__getopt_io__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0));
#line 286 "getopt_io.m"
              mercury__getopt_io__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "getopt_io.m"
              mercury__getopt_io__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 2)));
#line 8171 "getopt_io.c"
              {
#line 8173 "getopt_io.c"
                mercury__getopt_io__succeeded = mercury__builtin__unify_2_p_0(mercury__getopt_io__TypeInfo_for_OptionType_13, mercury__getopt_io__V_5_5, mercury__getopt_io__V_8_8);
              }
#line 286 "getopt_io.m"
              if (mercury__getopt_io__succeeded)
#line 286 "getopt_io.m"
                {
#line 8180 "getopt_io.c"
                  mercury__getopt_io__succeeded = (strcmp(mercury__getopt_io__V_6_6, mercury__getopt_io__V_9_9) == 0);
#line 286 "getopt_io.m"
                  if (mercury__getopt_io__succeeded)
#line 8184 "getopt_io.c"
                    {
#line 8186 "getopt_io.c"
                      return mercury__getopt_io__succeeded = mercury__getopt_io____Unify____option_error_reason_0_0(mercury__getopt_io__V_7_7, mercury__getopt_io__V_10_10);
                    }
#line 286 "getopt_io.m"
                }
#line 286 "getopt_io.m"
            }
#line 286 "getopt_io.m"
        }
#line 286 "getopt_io.m"
      else
#line 286 "getopt_io.m"
        {
#line 286 "getopt_io.m"
          MR_String mercury__getopt_io__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
#line 286 "getopt_io.m"
          MR_String mercury__getopt_io__V_4_4;

#line 286 "getopt_io.m"
          mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 286 "getopt_io.m"
          if (mercury__getopt_io__succeeded)
#line 286 "getopt_io.m"
            {
#line 286 "getopt_io.m"
              mercury__getopt_io__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
#line 8212 "getopt_io.c"
              mercury__getopt_io__succeeded = (strcmp(mercury__getopt_io__V_3_3, mercury__getopt_io__V_4_4) == 0);
#line 286 "getopt_io.m"
            }
#line 286 "getopt_io.m"
        }
#line 286 "getopt_io.m"
    return mercury__getopt_io__succeeded;
#line 286 "getopt_io.m"
  }
#line 286 "getopt_io.m"
}

#line 255 "getopt_io.m"
void MR_CALL 
mercury__getopt_io____Compare____option_data_0_0(
#line 255 "getopt_io.m"
  MR_Word * mercury__getopt_io__HeadVar__1_1,
#line 255 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__2_2,
#line 255 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__3_3)
#line 255 "getopt_io.m"
{
#line 255 "getopt_io.m"
  {
#line 255 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 255 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastX_148 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;
#line 255 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastY_149 = (MR_Integer) mercury__getopt_io__HeadVar__3_3;

#line 255 "getopt_io.m"
    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_148 == mercury__getopt_io__CastY_149);
#line 255 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 8249 "getopt_io.c"
      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 255 "getopt_io.m"
    else
#line 255 "getopt_io.m"
      if ((mercury__getopt_io__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 255 "getopt_io.m"
        if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 255 "getopt_io.m"
          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 255 "getopt_io.m"
        else
#line 255 "getopt_io.m"
          if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 255 "getopt_io.m"
            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
          else
#line 255 "getopt_io.m"
            if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 255 "getopt_io.m"
              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
            else
#line 255 "getopt_io.m"
              if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 255 "getopt_io.m"
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
              else
#line 255 "getopt_io.m"
                if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 255 "getopt_io.m"
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                else
#line 255 "getopt_io.m"
                  if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 255 "getopt_io.m"
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                  else
#line 255 "getopt_io.m"
                    if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 8293 "getopt_io.c"
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                    else
#line 255 "getopt_io.m"
                      if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 8299 "getopt_io.c"
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                      else
#line 255 "getopt_io.m"
                        if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 8305 "getopt_io.c"
                          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                        else
#line 255 "getopt_io.m"
                          if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 8311 "getopt_io.c"
                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                          else
#line 255 "getopt_io.m"
                            if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 8317 "getopt_io.c"
                              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                            else
#line 8321 "getopt_io.c"
                              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
      else
#line 255 "getopt_io.m"
        if ((mercury__getopt_io__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 255 "getopt_io.m"
          if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 255 "getopt_io.m"
            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
          else
#line 255 "getopt_io.m"
            if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 255 "getopt_io.m"
              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 255 "getopt_io.m"
            else
#line 255 "getopt_io.m"
              if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 255 "getopt_io.m"
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
              else
#line 255 "getopt_io.m"
                if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 255 "getopt_io.m"
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                else
#line 255 "getopt_io.m"
                  if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 255 "getopt_io.m"
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                  else
#line 255 "getopt_io.m"
                    if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 255 "getopt_io.m"
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                    else
#line 255 "getopt_io.m"
                      if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 8365 "getopt_io.c"
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                      else
#line 255 "getopt_io.m"
                        if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 8371 "getopt_io.c"
                          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                        else
#line 255 "getopt_io.m"
                          if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 8377 "getopt_io.c"
                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                          else
#line 255 "getopt_io.m"
                            if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 8383 "getopt_io.c"
                              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                            else
#line 255 "getopt_io.m"
                              if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 8389 "getopt_io.c"
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                              else
#line 8393 "getopt_io.c"
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
        else
#line 255 "getopt_io.m"
          if ((mercury__getopt_io__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 255 "getopt_io.m"
            if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 255 "getopt_io.m"
              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
            else
#line 255 "getopt_io.m"
              if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 255 "getopt_io.m"
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
              else
#line 255 "getopt_io.m"
                if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 255 "getopt_io.m"
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 255 "getopt_io.m"
                else
#line 255 "getopt_io.m"
                  if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 255 "getopt_io.m"
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                  else
#line 255 "getopt_io.m"
                    if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 255 "getopt_io.m"
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                    else
#line 255 "getopt_io.m"
                      if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 255 "getopt_io.m"
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                      else
#line 255 "getopt_io.m"
                        if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 8437 "getopt_io.c"
                          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                        else
#line 255 "getopt_io.m"
                          if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 8443 "getopt_io.c"
                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                          else
#line 255 "getopt_io.m"
                            if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 8449 "getopt_io.c"
                              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                            else
#line 255 "getopt_io.m"
                              if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 8455 "getopt_io.c"
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                              else
#line 255 "getopt_io.m"
                                if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 8461 "getopt_io.c"
                                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                                else
#line 8465 "getopt_io.c"
                                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
          else
#line 255 "getopt_io.m"
            if ((mercury__getopt_io__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 255 "getopt_io.m"
              if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 255 "getopt_io.m"
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
              else
#line 255 "getopt_io.m"
                if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 255 "getopt_io.m"
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                else
#line 255 "getopt_io.m"
                  if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 255 "getopt_io.m"
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                  else
#line 255 "getopt_io.m"
                    if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 255 "getopt_io.m"
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 255 "getopt_io.m"
                    else
#line 255 "getopt_io.m"
                      if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 255 "getopt_io.m"
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                      else
#line 255 "getopt_io.m"
                        if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 255 "getopt_io.m"
                          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                        else
#line 255 "getopt_io.m"
                          if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 8509 "getopt_io.c"
                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                          else
#line 255 "getopt_io.m"
                            if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 8515 "getopt_io.c"
                              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                            else
#line 255 "getopt_io.m"
                              if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 8521 "getopt_io.c"
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                              else
#line 255 "getopt_io.m"
                                if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 8527 "getopt_io.c"
                                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                                else
#line 255 "getopt_io.m"
                                  if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 8533 "getopt_io.c"
                                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                                  else
#line 8537 "getopt_io.c"
                                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
            else
#line 255 "getopt_io.m"
              if ((mercury__getopt_io__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 255 "getopt_io.m"
                if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 255 "getopt_io.m"
                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                else
#line 255 "getopt_io.m"
                  if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 255 "getopt_io.m"
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                  else
#line 255 "getopt_io.m"
                    if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 255 "getopt_io.m"
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                    else
#line 255 "getopt_io.m"
                      if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 255 "getopt_io.m"
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                      else
#line 255 "getopt_io.m"
                        if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 255 "getopt_io.m"
                          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 255 "getopt_io.m"
                        else
#line 255 "getopt_io.m"
                          if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 255 "getopt_io.m"
                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                          else
#line 255 "getopt_io.m"
                            if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 8581 "getopt_io.c"
                              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                            else
#line 255 "getopt_io.m"
                              if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 8587 "getopt_io.c"
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                              else
#line 255 "getopt_io.m"
                                if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 8593 "getopt_io.c"
                                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                                else
#line 255 "getopt_io.m"
                                  if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 8599 "getopt_io.c"
                                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                                  else
#line 255 "getopt_io.m"
                                    if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 8605 "getopt_io.c"
                                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                                    else
#line 8609 "getopt_io.c"
                                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
              else
#line 255 "getopt_io.m"
                if ((mercury__getopt_io__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 255 "getopt_io.m"
                  if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 255 "getopt_io.m"
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                  else
#line 255 "getopt_io.m"
                    if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 255 "getopt_io.m"
                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                    else
#line 255 "getopt_io.m"
                      if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 255 "getopt_io.m"
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                      else
#line 255 "getopt_io.m"
                        if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 255 "getopt_io.m"
                          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                        else
#line 255 "getopt_io.m"
                          if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 255 "getopt_io.m"
                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                          else
#line 255 "getopt_io.m"
                            if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 255 "getopt_io.m"
                              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 255 "getopt_io.m"
                            else
#line 255 "getopt_io.m"
                              if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 8653 "getopt_io.c"
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                              else
#line 255 "getopt_io.m"
                                if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 8659 "getopt_io.c"
                                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                                else
#line 255 "getopt_io.m"
                                  if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 8665 "getopt_io.c"
                                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                                  else
#line 255 "getopt_io.m"
                                    if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 8671 "getopt_io.c"
                                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                                    else
#line 255 "getopt_io.m"
                                      if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 8677 "getopt_io.c"
                                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                                      else
#line 8681 "getopt_io.c"
                                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                else
#line 255 "getopt_io.m"
                  if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 255 "getopt_io.m"
                    {
#line 255 "getopt_io.m"
                      MR_Word mercury__getopt_io__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

#line 255 "getopt_io.m"
                      if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 8694 "getopt_io.c"
                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                      else
#line 255 "getopt_io.m"
                        if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 8700 "getopt_io.c"
                          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                        else
#line 255 "getopt_io.m"
                          if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 8706 "getopt_io.c"
                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                          else
#line 255 "getopt_io.m"
                            if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 8712 "getopt_io.c"
                              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                            else
#line 255 "getopt_io.m"
                              if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 8718 "getopt_io.c"
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                              else
#line 255 "getopt_io.m"
                                if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 8724 "getopt_io.c"
                                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                else
#line 255 "getopt_io.m"
                                  if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 255 "getopt_io.m"
                                    {
#line 255 "getopt_io.m"
                                      MR_Word mercury__getopt_io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));
#line 255 "getopt_io.m"
                                      MR_Integer mercury__getopt_io__V_162_162 = (MR_Integer) mercury__getopt_io__V_157_157;
#line 255 "getopt_io.m"
                                      MR_Integer mercury__getopt_io__V_163_163 = (MR_Integer) mercury__getopt_io__V_5_5;

#line 66 "private_builtin.opt"
                                      mercury__getopt_io__succeeded = (mercury__getopt_io__V_162_162 < mercury__getopt_io__V_163_163);
#line 69 "private_builtin.opt"
                                      if (mercury__getopt_io__succeeded)
#line 68 "private_builtin.opt"
                                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                      else
#line 74 "private_builtin.opt"
                                        {
#line 71 "private_builtin.opt"
                                          mercury__getopt_io__succeeded = (mercury__getopt_io__V_162_162 == mercury__getopt_io__V_163_163);
#line 74 "private_builtin.opt"
                                          if (mercury__getopt_io__succeeded)
#line 73 "private_builtin.opt"
                                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                          else
#line 75 "private_builtin.opt"
                                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                        }
#line 255 "getopt_io.m"
                                    }
#line 255 "getopt_io.m"
                                  else
#line 255 "getopt_io.m"
                                    if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 8767 "getopt_io.c"
                                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                    else
#line 255 "getopt_io.m"
                                      if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 8773 "getopt_io.c"
                                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                      else
#line 255 "getopt_io.m"
                                        if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 8779 "getopt_io.c"
                                          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                        else
#line 255 "getopt_io.m"
                                          if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 8785 "getopt_io.c"
                                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                          else
#line 8789 "getopt_io.c"
                                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                    }
#line 255 "getopt_io.m"
                  else
#line 255 "getopt_io.m"
                    if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 255 "getopt_io.m"
                      {
#line 255 "getopt_io.m"
                        MR_Integer mercury__getopt_io__V_158_158 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

#line 255 "getopt_io.m"
                        if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 8804 "getopt_io.c"
                          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                        else
#line 255 "getopt_io.m"
                          if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 8810 "getopt_io.c"
                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                          else
#line 255 "getopt_io.m"
                            if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 8816 "getopt_io.c"
                              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                            else
#line 255 "getopt_io.m"
                              if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 8822 "getopt_io.c"
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                              else
#line 255 "getopt_io.m"
                                if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 8828 "getopt_io.c"
                                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                else
#line 255 "getopt_io.m"
                                  if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 8834 "getopt_io.c"
                                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                  else
#line 255 "getopt_io.m"
                                    if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 8840 "getopt_io.c"
                                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                                    else
#line 255 "getopt_io.m"
                                      if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 255 "getopt_io.m"
                                        {
#line 255 "getopt_io.m"
                                          MR_Integer mercury__getopt_io__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));

#line 66 "private_builtin.opt"
                                          mercury__getopt_io__succeeded = (mercury__getopt_io__V_158_158 < mercury__getopt_io__V_25_25);
#line 69 "private_builtin.opt"
                                          if (mercury__getopt_io__succeeded)
#line 68 "private_builtin.opt"
                                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                          else
#line 74 "private_builtin.opt"
                                            {
#line 71 "private_builtin.opt"
                                              mercury__getopt_io__succeeded = (mercury__getopt_io__V_158_158 == mercury__getopt_io__V_25_25);
#line 74 "private_builtin.opt"
                                              if (mercury__getopt_io__succeeded)
#line 73 "private_builtin.opt"
                                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                              else
#line 75 "private_builtin.opt"
                                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                            }
#line 255 "getopt_io.m"
                                        }
#line 255 "getopt_io.m"
                                      else
#line 255 "getopt_io.m"
                                        if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 8879 "getopt_io.c"
                                          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                        else
#line 255 "getopt_io.m"
                                          if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 8885 "getopt_io.c"
                                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                          else
#line 255 "getopt_io.m"
                                            if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 8891 "getopt_io.c"
                                              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                            else
#line 8895 "getopt_io.c"
                                              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                      }
#line 255 "getopt_io.m"
                    else
#line 255 "getopt_io.m"
                      if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 255 "getopt_io.m"
                        {
#line 255 "getopt_io.m"
                          MR_Word mercury__getopt_io__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));

#line 255 "getopt_io.m"
                          if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 8910 "getopt_io.c"
                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                          else
#line 255 "getopt_io.m"
                            if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 8916 "getopt_io.c"
                              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                            else
#line 255 "getopt_io.m"
                              if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 8922 "getopt_io.c"
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                              else
#line 255 "getopt_io.m"
                                if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 8928 "getopt_io.c"
                                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                else
#line 255 "getopt_io.m"
                                  if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 8934 "getopt_io.c"
                                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                  else
#line 255 "getopt_io.m"
                                    if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 8940 "getopt_io.c"
                                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                    else
#line 255 "getopt_io.m"
                                      if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 8946 "getopt_io.c"
                                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                                      else
#line 255 "getopt_io.m"
                                        if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 8952 "getopt_io.c"
                                          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                                        else
#line 255 "getopt_io.m"
                                          if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 255 "getopt_io.m"
                                            {
#line 255 "getopt_io.m"
                                              MR_Word mercury__getopt_io__TypeInfo_150_150 = (MR_Word) &mercury__getopt_io_scalar_common_1[0];
#line 255 "getopt_io.m"
                                              MR_Word mercury__getopt_io__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));

#line 255 "getopt_io.m"
                                              {
#line 255 "getopt_io.m"
                                                mercury__builtin__compare_3_p_0(mercury__getopt_io__TypeInfo_150_150, mercury__getopt_io__HeadVar__1_1, ((MR_Box) (mercury__getopt_io__V_156_156)), ((MR_Box) (mercury__getopt_io__V_105_105)));
#line 255 "getopt_io.m"
                                                return;
                                              }
#line 255 "getopt_io.m"
                                            }
#line 255 "getopt_io.m"
                                          else
#line 255 "getopt_io.m"
                                            if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 8978 "getopt_io.c"
                                              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                                            else
#line 255 "getopt_io.m"
                                              if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 8984 "getopt_io.c"
                                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                                              else
#line 8988 "getopt_io.c"
                                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                        }
#line 255 "getopt_io.m"
                      else
#line 255 "getopt_io.m"
                        if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 255 "getopt_io.m"
                          {
#line 255 "getopt_io.m"
                            MR_Word mercury__getopt_io__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));

#line 255 "getopt_io.m"
                            if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 9003 "getopt_io.c"
                              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                            else
#line 255 "getopt_io.m"
                              if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 9009 "getopt_io.c"
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                              else
#line 255 "getopt_io.m"
                                if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 9015 "getopt_io.c"
                                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                else
#line 255 "getopt_io.m"
                                  if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 9021 "getopt_io.c"
                                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                  else
#line 255 "getopt_io.m"
                                    if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 9027 "getopt_io.c"
                                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                    else
#line 255 "getopt_io.m"
                                      if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 9033 "getopt_io.c"
                                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                      else
#line 255 "getopt_io.m"
                                        if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 9039 "getopt_io.c"
                                          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                                        else
#line 255 "getopt_io.m"
                                          if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 9045 "getopt_io.c"
                                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                                          else
#line 255 "getopt_io.m"
                                            if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 9051 "getopt_io.c"
                                              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                            else
#line 255 "getopt_io.m"
                                              if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 255 "getopt_io.m"
                                                {
#line 255 "getopt_io.m"
                                                  MR_Word mercury__getopt_io__TypeInfo_152_152 = (MR_Word) &mercury__getopt_io_scalar_common_1[2];
#line 255 "getopt_io.m"
                                                  MR_Word mercury__getopt_io__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));

#line 255 "getopt_io.m"
                                                  {
#line 255 "getopt_io.m"
                                                    mercury__builtin__compare_3_p_0(mercury__getopt_io__TypeInfo_152_152, mercury__getopt_io__HeadVar__1_1, ((MR_Box) (mercury__getopt_io__V_159_159)), ((MR_Box) (mercury__getopt_io__V_65_65)));
#line 255 "getopt_io.m"
                                                    return;
                                                  }
#line 255 "getopt_io.m"
                                                }
#line 255 "getopt_io.m"
                                              else
#line 255 "getopt_io.m"
                                                if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 9077 "getopt_io.c"
                                                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                                else
#line 9081 "getopt_io.c"
                                                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                          }
#line 255 "getopt_io.m"
                        else
#line 255 "getopt_io.m"
                          if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 255 "getopt_io.m"
                            {
#line 255 "getopt_io.m"
                              MR_Word mercury__getopt_io__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));

#line 255 "getopt_io.m"
                              if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 9096 "getopt_io.c"
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                              else
#line 255 "getopt_io.m"
                                if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 9102 "getopt_io.c"
                                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                else
#line 255 "getopt_io.m"
                                  if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 9108 "getopt_io.c"
                                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                  else
#line 255 "getopt_io.m"
                                    if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 9114 "getopt_io.c"
                                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                    else
#line 255 "getopt_io.m"
                                      if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 9120 "getopt_io.c"
                                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                      else
#line 255 "getopt_io.m"
                                        if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 9126 "getopt_io.c"
                                          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                        else
#line 255 "getopt_io.m"
                                          if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 9132 "getopt_io.c"
                                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                                          else
#line 255 "getopt_io.m"
                                            if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 9138 "getopt_io.c"
                                              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                                            else
#line 255 "getopt_io.m"
                                              if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 9144 "getopt_io.c"
                                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                              else
#line 255 "getopt_io.m"
                                                if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 9150 "getopt_io.c"
                                                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                                                else
#line 255 "getopt_io.m"
                                                  if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 255 "getopt_io.m"
                                                    {
#line 255 "getopt_io.m"
                                                      MR_Word mercury__getopt_io__TypeInfo_151_151 = (MR_Word) &mercury__getopt_io_scalar_common_1[1];
#line 255 "getopt_io.m"
                                                      MR_Word mercury__getopt_io__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));

#line 255 "getopt_io.m"
                                                      {
#line 255 "getopt_io.m"
                                                        mercury__builtin__compare_3_p_0(mercury__getopt_io__TypeInfo_151_151, mercury__getopt_io__HeadVar__1_1, ((MR_Box) (mercury__getopt_io__V_160_160)), ((MR_Box) (mercury__getopt_io__V_85_85)));
#line 255 "getopt_io.m"
                                                        return;
                                                      }
#line 255 "getopt_io.m"
                                                    }
#line 255 "getopt_io.m"
                                                  else
#line 9174 "getopt_io.c"
                                                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                            }
#line 255 "getopt_io.m"
                          else
#line 255 "getopt_io.m"
                            {
#line 255 "getopt_io.m"
                              MR_String mercury__getopt_io__V_161_161 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));

#line 255 "getopt_io.m"
                              if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 9187 "getopt_io.c"
                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                              else
#line 255 "getopt_io.m"
                                if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 9193 "getopt_io.c"
                                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                else
#line 255 "getopt_io.m"
                                  if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 9199 "getopt_io.c"
                                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                  else
#line 255 "getopt_io.m"
                                    if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 9205 "getopt_io.c"
                                      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                    else
#line 255 "getopt_io.m"
                                      if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 9211 "getopt_io.c"
                                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                      else
#line 255 "getopt_io.m"
                                        if ((mercury__getopt_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 9217 "getopt_io.c"
                                          *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                        else
#line 255 "getopt_io.m"
                                          if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 9223 "getopt_io.c"
                                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                                          else
#line 255 "getopt_io.m"
                                            if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 9229 "getopt_io.c"
                                              *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "getopt_io.m"
                                            else
#line 255 "getopt_io.m"
                                              if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 9235 "getopt_io.c"
                                                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                              else
#line 255 "getopt_io.m"
                                                if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 9241 "getopt_io.c"
                                                  *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                                else
#line 255 "getopt_io.m"
                                                  if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 9247 "getopt_io.c"
                                                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "getopt_io.m"
                                                  else
#line 255 "getopt_io.m"
                                                    {
#line 255 "getopt_io.m"
                                                      MR_String mercury__getopt_io__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));
#line 255 "getopt_io.m"
                                                      MR_Integer mercury__getopt_io__Res_7_173;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_data_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt_io__V_161_161 ;
	S2 =  mercury__getopt_io__V_45_45 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 9273 "getopt_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__getopt_io__Res_7_173  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                                                      mercury__getopt_io__succeeded = (mercury__getopt_io__Res_7_173 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                                                      if (mercury__getopt_io__succeeded)
#line 104 "private_builtin.opt"
                                                        *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                                                      else
#line 110 "private_builtin.opt"
                                                        {
#line 107 "private_builtin.opt"
                                                          mercury__getopt_io__succeeded = (mercury__getopt_io__Res_7_173 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                                                          if (mercury__getopt_io__succeeded)
#line 109 "private_builtin.opt"
                                                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                                                          else
#line 111 "private_builtin.opt"
                                                            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                                                        }
#line 255 "getopt_io.m"
                                                    }
#line 255 "getopt_io.m"
                            }
#line 255 "getopt_io.m"
  }
#line 255 "getopt_io.m"
}

#line 255 "getopt_io.m"
MR_bool MR_CALL 
mercury__getopt_io____Unify____option_data_0_0(
#line 255 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__1_1,
#line 255 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__2_2)
#line 255 "getopt_io.m"
{
#line 255 "getopt_io.m"
  {
#line 255 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 255 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastX_27 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
#line 255 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastY_28 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

#line 255 "getopt_io.m"
    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_27 == mercury__getopt_io__CastY_28);
#line 255 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 255 "getopt_io.m"
      mercury__getopt_io__succeeded = MR_TRUE;
#line 255 "getopt_io.m"
    else
#line 255 "getopt_io.m"
      if ((mercury__getopt_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 255 "getopt_io.m"
        {
#line 255 "getopt_io.m"
          MR_Integer mercury__getopt_io__CastX_17 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
#line 255 "getopt_io.m"
          MR_Integer mercury__getopt_io__CastY_18 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

#line 255 "getopt_io.m"
          mercury__getopt_io__succeeded = (mercury__getopt_io__CastY_18 == mercury__getopt_io__CastX_17);
#line 255 "getopt_io.m"
        }
#line 255 "getopt_io.m"
      else
#line 255 "getopt_io.m"
        if ((mercury__getopt_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 255 "getopt_io.m"
          {
#line 255 "getopt_io.m"
            MR_Integer mercury__getopt_io__CastX_25 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
#line 255 "getopt_io.m"
            MR_Integer mercury__getopt_io__CastY_26 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

#line 255 "getopt_io.m"
            mercury__getopt_io__succeeded = (mercury__getopt_io__CastY_26 == mercury__getopt_io__CastX_25);
#line 255 "getopt_io.m"
          }
#line 255 "getopt_io.m"
        else
#line 255 "getopt_io.m"
          if ((mercury__getopt_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 255 "getopt_io.m"
            {
#line 255 "getopt_io.m"
              MR_Integer mercury__getopt_io__CastX_19 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
#line 255 "getopt_io.m"
              MR_Integer mercury__getopt_io__CastY_20 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

#line 255 "getopt_io.m"
              mercury__getopt_io__succeeded = (mercury__getopt_io__CastY_20 == mercury__getopt_io__CastX_19);
#line 255 "getopt_io.m"
            }
#line 255 "getopt_io.m"
          else
#line 255 "getopt_io.m"
            if ((mercury__getopt_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 255 "getopt_io.m"
              {
#line 255 "getopt_io.m"
                MR_Integer mercury__getopt_io__CastX_23 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
#line 255 "getopt_io.m"
                MR_Integer mercury__getopt_io__CastY_24 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

#line 255 "getopt_io.m"
                mercury__getopt_io__succeeded = (mercury__getopt_io__CastY_24 == mercury__getopt_io__CastX_23);
#line 255 "getopt_io.m"
              }
#line 255 "getopt_io.m"
            else
#line 255 "getopt_io.m"
              if ((mercury__getopt_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 255 "getopt_io.m"
                {
#line 255 "getopt_io.m"
                  MR_Integer mercury__getopt_io__CastX_15 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
#line 255 "getopt_io.m"
                  MR_Integer mercury__getopt_io__CastY_16 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

#line 255 "getopt_io.m"
                  mercury__getopt_io__succeeded = (mercury__getopt_io__CastY_16 == mercury__getopt_io__CastX_15);
#line 255 "getopt_io.m"
                }
#line 255 "getopt_io.m"
              else
#line 255 "getopt_io.m"
                if ((mercury__getopt_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 255 "getopt_io.m"
                  {
#line 255 "getopt_io.m"
                    MR_Integer mercury__getopt_io__CastX_21 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
#line 255 "getopt_io.m"
                    MR_Integer mercury__getopt_io__CastY_22 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

#line 255 "getopt_io.m"
                    mercury__getopt_io__succeeded = (mercury__getopt_io__CastY_22 == mercury__getopt_io__CastX_21);
#line 255 "getopt_io.m"
                  }
#line 255 "getopt_io.m"
                else
#line 255 "getopt_io.m"
                  if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 255 "getopt_io.m"
                    {
#line 255 "getopt_io.m"
                      MR_Word mercury__getopt_io__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
#line 255 "getopt_io.m"
                      MR_Word mercury__getopt_io__V_4_4;

#line 255 "getopt_io.m"
                      mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 255 "getopt_io.m"
                      if (mercury__getopt_io__succeeded)
#line 255 "getopt_io.m"
                        {
#line 255 "getopt_io.m"
                          mercury__getopt_io__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
#line 9444 "getopt_io.c"
                          mercury__getopt_io__succeeded = (mercury__getopt_io__V_3_3 == mercury__getopt_io__V_4_4);
#line 255 "getopt_io.m"
                        }
#line 255 "getopt_io.m"
                    }
#line 255 "getopt_io.m"
                  else
#line 255 "getopt_io.m"
                    if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 255 "getopt_io.m"
                      {
#line 255 "getopt_io.m"
                        MR_Integer mercury__getopt_io__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
#line 255 "getopt_io.m"
                        MR_Integer mercury__getopt_io__V_6_6;

#line 255 "getopt_io.m"
                        mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 255 "getopt_io.m"
                        if (mercury__getopt_io__succeeded)
#line 255 "getopt_io.m"
                          {
#line 255 "getopt_io.m"
                            mercury__getopt_io__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
#line 9469 "getopt_io.c"
                            mercury__getopt_io__succeeded = (mercury__getopt_io__V_5_5 == mercury__getopt_io__V_6_6);
#line 255 "getopt_io.m"
                          }
#line 255 "getopt_io.m"
                      }
#line 255 "getopt_io.m"
                    else
#line 255 "getopt_io.m"
                      if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 255 "getopt_io.m"
                        {
#line 255 "getopt_io.m"
                          MR_Word mercury__getopt_io__TypeInfo_29_29;
#line 255 "getopt_io.m"
                          MR_Word mercury__getopt_io__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
#line 255 "getopt_io.m"
                          MR_Word mercury__getopt_io__V_14_14;

#line 255 "getopt_io.m"
                          mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 255 "getopt_io.m"
                          if (mercury__getopt_io__succeeded)
#line 255 "getopt_io.m"
                            {
#line 255 "getopt_io.m"
                              mercury__getopt_io__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
#line 9496 "getopt_io.c"
                              mercury__getopt_io__TypeInfo_29_29 = (MR_Word) &mercury__getopt_io_scalar_common_1[0];
#line 9498 "getopt_io.c"
                              {
#line 9500 "getopt_io.c"
                                return mercury__getopt_io__succeeded = mercury__builtin__unify_2_p_0(mercury__getopt_io__TypeInfo_29_29, ((MR_Box) (mercury__getopt_io__V_13_13)), ((MR_Box) (mercury__getopt_io__V_14_14)));
                              }
#line 255 "getopt_io.m"
                            }
#line 255 "getopt_io.m"
                        }
#line 255 "getopt_io.m"
                      else
#line 255 "getopt_io.m"
                        if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 255 "getopt_io.m"
                          {
#line 255 "getopt_io.m"
                            MR_Word mercury__getopt_io__TypeInfo_30_30;
#line 255 "getopt_io.m"
                            MR_Word mercury__getopt_io__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
#line 255 "getopt_io.m"
                            MR_Word mercury__getopt_io__V_10_10;

#line 255 "getopt_io.m"
                            mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 255 "getopt_io.m"
                            if (mercury__getopt_io__succeeded)
#line 255 "getopt_io.m"
                              {
#line 255 "getopt_io.m"
                                mercury__getopt_io__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
#line 9528 "getopt_io.c"
                                mercury__getopt_io__TypeInfo_30_30 = (MR_Word) &mercury__getopt_io_scalar_common_1[2];
#line 9530 "getopt_io.c"
                                {
#line 9532 "getopt_io.c"
                                  return mercury__getopt_io__succeeded = mercury__builtin__unify_2_p_0(mercury__getopt_io__TypeInfo_30_30, ((MR_Box) (mercury__getopt_io__V_9_9)), ((MR_Box) (mercury__getopt_io__V_10_10)));
                                }
#line 255 "getopt_io.m"
                              }
#line 255 "getopt_io.m"
                          }
#line 255 "getopt_io.m"
                        else
#line 255 "getopt_io.m"
                          if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 255 "getopt_io.m"
                            {
#line 255 "getopt_io.m"
                              MR_Word mercury__getopt_io__TypeInfo_31_31;
#line 255 "getopt_io.m"
                              MR_Word mercury__getopt_io__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
#line 255 "getopt_io.m"
                              MR_Word mercury__getopt_io__V_12_12;

#line 255 "getopt_io.m"
                              mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 255 "getopt_io.m"
                              if (mercury__getopt_io__succeeded)
#line 255 "getopt_io.m"
                                {
#line 255 "getopt_io.m"
                                  mercury__getopt_io__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
#line 9560 "getopt_io.c"
                                  mercury__getopt_io__TypeInfo_31_31 = (MR_Word) &mercury__getopt_io_scalar_common_1[1];
#line 9562 "getopt_io.c"
                                  {
#line 9564 "getopt_io.c"
                                    return mercury__getopt_io__succeeded = mercury__builtin__unify_2_p_0(mercury__getopt_io__TypeInfo_31_31, ((MR_Box) (mercury__getopt_io__V_11_11)), ((MR_Box) (mercury__getopt_io__V_12_12)));
                                  }
#line 255 "getopt_io.m"
                                }
#line 255 "getopt_io.m"
                            }
#line 255 "getopt_io.m"
                          else
#line 255 "getopt_io.m"
                            {
#line 255 "getopt_io.m"
                              MR_String mercury__getopt_io__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
#line 255 "getopt_io.m"
                              MR_String mercury__getopt_io__V_8_8;

#line 255 "getopt_io.m"
                              mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 255 "getopt_io.m"
                              if (mercury__getopt_io__succeeded)
#line 255 "getopt_io.m"
                                {
#line 255 "getopt_io.m"
                                  mercury__getopt_io__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 1)));
#line 9588 "getopt_io.c"
                                  mercury__getopt_io__succeeded = (strcmp(mercury__getopt_io__V_7_7, mercury__getopt_io__V_8_8) == 0);
#line 255 "getopt_io.m"
                                }
#line 255 "getopt_io.m"
                            }
#line 255 "getopt_io.m"
    return mercury__getopt_io__succeeded;
#line 255 "getopt_io.m"
  }
#line 255 "getopt_io.m"
}

#line 282 "getopt_io.m"
void MR_CALL 
mercury__getopt_io____Compare____maybe_option_table_se_1_0(
#line 282 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_14,
#line 282 "getopt_io.m"
  MR_Word * mercury__getopt_io__HeadVar__1_1,
#line 282 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__2_2,
#line 282 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__3_3)
#line 282 "getopt_io.m"
{
#line 282 "getopt_io.m"
  {
#line 282 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 282 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastX_12 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;
#line 282 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastY_13 = (MR_Integer) mercury__getopt_io__HeadVar__3_3;

#line 282 "getopt_io.m"
    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_12 == mercury__getopt_io__CastY_13);
#line 282 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 9627 "getopt_io.c"
      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 282 "getopt_io.m"
    else
#line 282 "getopt_io.m"
      if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 282 "getopt_io.m"
        {
#line 282 "getopt_io.m"
          MR_Word mercury__getopt_io__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

#line 282 "getopt_io.m"
          if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 282 "getopt_io.m"
            {
#line 282 "getopt_io.m"
              MR_Word mercury__getopt_io__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));

#line 282 "getopt_io.m"
              {
#line 282 "getopt_io.m"
                mercury__getopt_io____Compare____option_error_1_0(mercury__getopt_io__TypeInfo_for_OptionType_14, mercury__getopt_io__HeadVar__1_1, mercury__getopt_io__V_20_20, mercury__getopt_io__V_11_11);
#line 282 "getopt_io.m"
                return;
              }
#line 282 "getopt_io.m"
            }
#line 282 "getopt_io.m"
          else
#line 9656 "getopt_io.c"
            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 282 "getopt_io.m"
        }
#line 282 "getopt_io.m"
      else
#line 282 "getopt_io.m"
        {
#line 282 "getopt_io.m"
          MR_Word mercury__getopt_io__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

#line 282 "getopt_io.m"
          if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 9669 "getopt_io.c"
            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 282 "getopt_io.m"
          else
#line 282 "getopt_io.m"
            {
#line 282 "getopt_io.m"
              MR_Word mercury__getopt_io__TypeCtorInfo_17_17 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 282 "getopt_io.m"
              MR_Word mercury__getopt_io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));

#line 282 "getopt_io.m"
              {
#line 282 "getopt_io.m"
                mercury__tree234____Compare____tree234_2_0(mercury__getopt_io__TypeInfo_for_OptionType_14, mercury__getopt_io__TypeCtorInfo_17_17, mercury__getopt_io__HeadVar__1_1, mercury__getopt_io__V_21_21, mercury__getopt_io__V_5_5);
#line 282 "getopt_io.m"
                return;
              }
#line 282 "getopt_io.m"
            }
#line 282 "getopt_io.m"
        }
#line 282 "getopt_io.m"
  }
#line 282 "getopt_io.m"
}

#line 282 "getopt_io.m"
MR_bool MR_CALL 
mercury__getopt_io____Unify____maybe_option_table_se_1_0(
#line 282 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_9,
#line 282 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__1_1,
#line 282 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__2_2)
#line 282 "getopt_io.m"
{
#line 282 "getopt_io.m"
  {
#line 282 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 282 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastX_7 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
#line 282 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastY_8 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

#line 282 "getopt_io.m"
    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_7 == mercury__getopt_io__CastY_8);
#line 282 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 282 "getopt_io.m"
      mercury__getopt_io__succeeded = MR_TRUE;
#line 282 "getopt_io.m"
    else
#line 282 "getopt_io.m"
      if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 282 "getopt_io.m"
        {
#line 282 "getopt_io.m"
          MR_Word mercury__getopt_io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
#line 282 "getopt_io.m"
          MR_Word mercury__getopt_io__V_6_6;

#line 282 "getopt_io.m"
          mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 282 "getopt_io.m"
          if (mercury__getopt_io__succeeded)
#line 282 "getopt_io.m"
            {
#line 282 "getopt_io.m"
              mercury__getopt_io__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
#line 9741 "getopt_io.c"
              {
#line 9743 "getopt_io.c"
                return mercury__getopt_io__succeeded = mercury__getopt_io____Unify____option_error_1_0(mercury__getopt_io__TypeInfo_for_OptionType_9, mercury__getopt_io__V_5_5, mercury__getopt_io__V_6_6);
              }
#line 282 "getopt_io.m"
            }
#line 282 "getopt_io.m"
        }
#line 282 "getopt_io.m"
      else
#line 282 "getopt_io.m"
        {
#line 282 "getopt_io.m"
          MR_Word mercury__getopt_io__TypeCtorInfo_10_10;
#line 282 "getopt_io.m"
          MR_Word mercury__getopt_io__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
#line 282 "getopt_io.m"
          MR_Word mercury__getopt_io__V_4_4;

#line 282 "getopt_io.m"
          mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 282 "getopt_io.m"
          if (mercury__getopt_io__succeeded)
#line 282 "getopt_io.m"
            {
#line 282 "getopt_io.m"
              mercury__getopt_io__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
#line 9769 "getopt_io.c"
              mercury__getopt_io__TypeCtorInfo_10_10 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 9771 "getopt_io.c"
              {
#line 9773 "getopt_io.c"
                return mercury__getopt_io__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__getopt_io__TypeInfo_for_OptionType_9, mercury__getopt_io__TypeCtorInfo_10_10, mercury__getopt_io__V_3_3, mercury__getopt_io__V_4_4);
              }
#line 282 "getopt_io.m"
            }
#line 282 "getopt_io.m"
        }
#line 282 "getopt_io.m"
    return mercury__getopt_io__succeeded;
#line 282 "getopt_io.m"
  }
#line 282 "getopt_io.m"
}

#line 278 "getopt_io.m"
void MR_CALL 
mercury__getopt_io____Compare____maybe_option_table_1_0(
#line 278 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_14,
#line 278 "getopt_io.m"
  MR_Word * mercury__getopt_io__HeadVar__1_1,
#line 278 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__2_2,
#line 278 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__3_3)
#line 278 "getopt_io.m"
{
#line 278 "getopt_io.m"
  {
#line 278 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 278 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastX_12 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;
#line 278 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastY_13 = (MR_Integer) mercury__getopt_io__HeadVar__3_3;

#line 278 "getopt_io.m"
    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_12 == mercury__getopt_io__CastY_13);
#line 278 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 9813 "getopt_io.c"
      *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 278 "getopt_io.m"
    else
#line 278 "getopt_io.m"
      if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 278 "getopt_io.m"
        {
#line 278 "getopt_io.m"
          MR_String mercury__getopt_io__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

#line 278 "getopt_io.m"
          if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 278 "getopt_io.m"
            {
#line 278 "getopt_io.m"
              MR_String mercury__getopt_io__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));
#line 278 "getopt_io.m"
              MR_Integer mercury__getopt_io__Res_7_24;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__getopt_io____Compare____maybe_option_table_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt_io__V_19_19 ;
	S2 =  mercury__getopt_io__V_11_11 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 9848 "getopt_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__getopt_io__Res_7_24  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
              mercury__getopt_io__succeeded = (mercury__getopt_io__Res_7_24 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
              if (mercury__getopt_io__succeeded)
#line 104 "private_builtin.opt"
                *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
              else
#line 110 "private_builtin.opt"
                {
#line 107 "private_builtin.opt"
                  mercury__getopt_io__succeeded = (mercury__getopt_io__Res_7_24 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                  if (mercury__getopt_io__succeeded)
#line 109 "private_builtin.opt"
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                  else
#line 111 "private_builtin.opt"
                    *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                }
#line 278 "getopt_io.m"
            }
#line 278 "getopt_io.m"
          else
#line 9881 "getopt_io.c"
            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "getopt_io.m"
        }
#line 278 "getopt_io.m"
      else
#line 278 "getopt_io.m"
        {
#line 278 "getopt_io.m"
          MR_Word mercury__getopt_io__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));

#line 278 "getopt_io.m"
          if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 9894 "getopt_io.c"
            *mercury__getopt_io__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "getopt_io.m"
          else
#line 278 "getopt_io.m"
            {
#line 278 "getopt_io.m"
              MR_Word mercury__getopt_io__TypeCtorInfo_16_16 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 278 "getopt_io.m"
              MR_Word mercury__getopt_io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));

#line 278 "getopt_io.m"
              {
#line 278 "getopt_io.m"
                mercury__tree234____Compare____tree234_2_0(mercury__getopt_io__TypeInfo_for_OptionType_14, mercury__getopt_io__TypeCtorInfo_16_16, mercury__getopt_io__HeadVar__1_1, mercury__getopt_io__V_20_20, mercury__getopt_io__V_5_5);
#line 278 "getopt_io.m"
                return;
              }
#line 278 "getopt_io.m"
            }
#line 278 "getopt_io.m"
        }
#line 278 "getopt_io.m"
  }
#line 278 "getopt_io.m"
}

#line 278 "getopt_io.m"
MR_bool MR_CALL 
mercury__getopt_io____Unify____maybe_option_table_1_0(
#line 278 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_9,
#line 278 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__1_1,
#line 278 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__2_2)
#line 278 "getopt_io.m"
{
#line 278 "getopt_io.m"
  {
#line 278 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 278 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastX_7 = (MR_Integer) mercury__getopt_io__HeadVar__1_1;
#line 278 "getopt_io.m"
    MR_Integer mercury__getopt_io__CastY_8 = (MR_Integer) mercury__getopt_io__HeadVar__2_2;

#line 278 "getopt_io.m"
    mercury__getopt_io__succeeded = (mercury__getopt_io__CastX_7 == mercury__getopt_io__CastY_8);
#line 278 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 278 "getopt_io.m"
      mercury__getopt_io__succeeded = MR_TRUE;
#line 278 "getopt_io.m"
    else
#line 278 "getopt_io.m"
      if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 278 "getopt_io.m"
        {
#line 278 "getopt_io.m"
          MR_String mercury__getopt_io__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
#line 278 "getopt_io.m"
          MR_String mercury__getopt_io__V_6_6;

#line 278 "getopt_io.m"
          mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 278 "getopt_io.m"
          if (mercury__getopt_io__succeeded)
#line 278 "getopt_io.m"
            {
#line 278 "getopt_io.m"
              mercury__getopt_io__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
#line 9966 "getopt_io.c"
              mercury__getopt_io__succeeded = (strcmp(mercury__getopt_io__V_5_5, mercury__getopt_io__V_6_6) == 0);
#line 278 "getopt_io.m"
            }
#line 278 "getopt_io.m"
        }
#line 278 "getopt_io.m"
      else
#line 278 "getopt_io.m"
        {
#line 278 "getopt_io.m"
          MR_Word mercury__getopt_io__TypeCtorInfo_10_10;
#line 278 "getopt_io.m"
          MR_Word mercury__getopt_io__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
#line 278 "getopt_io.m"
          MR_Word mercury__getopt_io__V_4_4;

#line 278 "getopt_io.m"
          mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 278 "getopt_io.m"
          if (mercury__getopt_io__succeeded)
#line 278 "getopt_io.m"
            {
#line 278 "getopt_io.m"
              mercury__getopt_io__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__HeadVar__2_2, (MR_Integer) 0)));
#line 9991 "getopt_io.c"
              mercury__getopt_io__TypeCtorInfo_10_10 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 9993 "getopt_io.c"
              {
#line 9995 "getopt_io.c"
                return mercury__getopt_io__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__getopt_io__TypeInfo_for_OptionType_9, mercury__getopt_io__TypeCtorInfo_10_10, mercury__getopt_io__V_3_3, mercury__getopt_io__V_4_4);
              }
#line 278 "getopt_io.m"
            }
#line 278 "getopt_io.m"
        }
#line 278 "getopt_io.m"
    return mercury__getopt_io__succeeded;
#line 278 "getopt_io.m"
  }
#line 278 "getopt_io.m"
}

#line 1023 "getopt_io.m"
static void MR_CALL 
mercury__getopt_io__process_special_8_p_0(
#line 1023 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_54,
#line 1023 "getopt_io.m"
  MR_String mercury__getopt_io__Option_9,
#line 1023 "getopt_io.m"
  MR_Box mercury__getopt_io__Flag_10,
#line 1023 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionData_11,
#line 1023 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionOps_12,
#line 1023 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionTable0_13,
#line 1023 "getopt_io.m"
  MR_Word * mercury__getopt_io__Result_14,
#line 1023 "getopt_io.m"
  MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_26,
#line 1023 "getopt_io.m"
  MR_Word * mercury__getopt_io__STATE_VARIABLE_OptionsSet_27)
#line 1023 "getopt_io.m"
{
#line 1029 "getopt_io.m"
  {
#line 1029 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 1029 "getopt_io.m"
    MR_Word mercury__getopt_io__MaybeHandler_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_12, (MR_Integer) 2)));
#line 1030 "getopt_io.m"
    MR_Word mercury__getopt_io__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_12, (MR_Integer) 0)));
#line 1030 "getopt_io.m"
    MR_Word mercury__getopt_io__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_12, (MR_Integer) 1)));

#line 1049 "getopt_io.m"
    if ((mercury__getopt_io__MaybeHandler_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1070 "getopt_io.m"
      {
#line 1070 "getopt_io.m"
        MR_Word mercury__getopt_io__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
#line 1070 "getopt_io.m"
        MR_Word mercury__getopt_io__Error_51;

#line 1071 "getopt_io.m"
        {
#line 1071 "getopt_io.m"
          mercury__getopt_io__Error_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1071 "getopt_io.m"
          MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_51, 0) = mercury__getopt_io__Flag_10;
#line 1071 "getopt_io.m"
          MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_51, 1) = ((MR_Box) (mercury__getopt_io__Option_9));
#line 1071 "getopt_io.m"
          MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_51, 2) = ((MR_Box) (mercury__getopt_io__V_28_28));
#line 1071 "getopt_io.m"
        }
#line 1072 "getopt_io.m"
        {
#line 1072 "getopt_io.m"
          MR_Word base;
#line 1072 "getopt_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1072 "getopt_io.m"
          *mercury__getopt_io__Result_14 = base;
#line 1072 "getopt_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_51));
#line 1072 "getopt_io.m"
        }
#line 1072 "getopt_io.m"
        *mercury__getopt_io__STATE_VARIABLE_OptionsSet_27 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_26;
#line 1070 "getopt_io.m"
      }
#line 1049 "getopt_io.m"
    else
#line 1049 "getopt_io.m"
      if (((MR_tag((MR_Word) mercury__getopt_io__MaybeHandler_16)) == (MR_mktag((MR_Integer) 1))))
#line 1032 "getopt_io.m"
        {
#line 1032 "getopt_io.m"
          MR_Word mercury__getopt_io__Handler_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__MaybeHandler_16, (MR_Integer) 0)));
#line 1045 "getopt_io.m"
          MR_Word mercury__getopt_io__Result0_18;
#line 1034 "getopt_io.m"
          MR_bool MR_CALL (* mercury__getopt_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt_io__Handler_17, (MR_Integer) 1)));
#line 1034 "getopt_io.m"
          MR_Box mercury__getopt_io__conv1_Result0_18;

#line 1034 "getopt_io.m"
          {
#line 1034 "getopt_io.m"
            mercury__getopt_io__succeeded = mercury__getopt_io__func_0(((MR_Box) mercury__getopt_io__Handler_17), mercury__getopt_io__Flag_10, ((MR_Box) (mercury__getopt_io__OptionData_11)), ((MR_Box) (mercury__getopt_io__OptionTable0_13)), &mercury__getopt_io__conv1_Result0_18);
          }
#line 1034 "getopt_io.m"
          if (mercury__getopt_io__succeeded)
#line 1034 "getopt_io.m"
            {
#line 1034 "getopt_io.m"
              mercury__getopt_io__Result0_18 = ((MR_Word) mercury__getopt_io__conv1_Result0_18);
#line 1034 "getopt_io.m"
              mercury__getopt_io__succeeded = MR_TRUE;
#line 1034 "getopt_io.m"
            }
#line 1045 "getopt_io.m"
          if (mercury__getopt_io__succeeded)
#line 1039 "getopt_io.m"
            if (((MR_tag((MR_Word) mercury__getopt_io__Result0_18)) == (MR_mktag((MR_Integer) 1))))
#line 1040 "getopt_io.m"
              {
#line 1040 "getopt_io.m"
                MR_String mercury__getopt_io__HandlerMsg_20 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__Result0_18, (MR_Integer) 0)));
#line 1040 "getopt_io.m"
                MR_Word mercury__getopt_io__Reason_21;
#line 1040 "getopt_io.m"
                MR_Word mercury__getopt_io__Error_22;

#line 1041 "getopt_io.m"
                {
#line 1041 "getopt_io.m"
                  mercury__getopt_io__Reason_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1041 "getopt_io.m"
                  MR_hl_field(MR_mktag(2), mercury__getopt_io__Reason_21, 0) = ((MR_Box) (mercury__getopt_io__HandlerMsg_20));
#line 1041 "getopt_io.m"
                }
#line 1042 "getopt_io.m"
                {
#line 1042 "getopt_io.m"
                  mercury__getopt_io__Error_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1042 "getopt_io.m"
                  MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_22, 0) = mercury__getopt_io__Flag_10;
#line 1042 "getopt_io.m"
                  MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_22, 1) = ((MR_Box) (mercury__getopt_io__Option_9));
#line 1042 "getopt_io.m"
                  MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_22, 2) = ((MR_Box) (mercury__getopt_io__Reason_21));
#line 1042 "getopt_io.m"
                }
#line 1043 "getopt_io.m"
                {
#line 1043 "getopt_io.m"
                  MR_Word base;
#line 1043 "getopt_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1043 "getopt_io.m"
                  *mercury__getopt_io__Result_14 = base;
#line 1043 "getopt_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_22));
#line 1043 "getopt_io.m"
                }
#line 1040 "getopt_io.m"
              }
#line 1039 "getopt_io.m"
            else
#line 1037 "getopt_io.m"
              {
#line 1037 "getopt_io.m"
                MR_Word mercury__getopt_io__OptionTable_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__Result0_18, (MR_Integer) 0)));

#line 1038 "getopt_io.m"
                {
#line 1038 "getopt_io.m"
                  MR_Word base;
#line 1038 "getopt_io.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1038 "getopt_io.m"
                  *mercury__getopt_io__Result_14 = base;
#line 1038 "getopt_io.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__OptionTable_19));
#line 1038 "getopt_io.m"
                }
#line 1037 "getopt_io.m"
              }
#line 1045 "getopt_io.m"
          else
#line 1046 "getopt_io.m"
            {
#line 1046 "getopt_io.m"
              MR_Word mercury__getopt_io__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 1046 "getopt_io.m"
              MR_Word mercury__getopt_io__Error_32;

#line 1046 "getopt_io.m"
              {
#line 1046 "getopt_io.m"
                mercury__getopt_io__Error_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1046 "getopt_io.m"
                MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_32, 0) = mercury__getopt_io__Flag_10;
#line 1046 "getopt_io.m"
                MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_32, 1) = ((MR_Box) (mercury__getopt_io__Option_9));
#line 1046 "getopt_io.m"
                MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_32, 2) = ((MR_Box) (mercury__getopt_io__V_31_31));
#line 1046 "getopt_io.m"
              }
#line 1047 "getopt_io.m"
              {
#line 1047 "getopt_io.m"
                MR_Word base;
#line 1047 "getopt_io.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1047 "getopt_io.m"
                *mercury__getopt_io__Result_14 = base;
#line 1047 "getopt_io.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_32));
#line 1047 "getopt_io.m"
              }
#line 1046 "getopt_io.m"
            }
#line 1047 "getopt_io.m"
          *mercury__getopt_io__STATE_VARIABLE_OptionsSet_27 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_26;
#line 1032 "getopt_io.m"
        }
#line 1049 "getopt_io.m"
      else
#line 1050 "getopt_io.m"
        {
#line 1050 "getopt_io.m"
          MR_Word mercury__getopt_io__TrackHandler_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__MaybeHandler_16, (MR_Integer) 0)));
#line 1065 "getopt_io.m"
          MR_Word mercury__getopt_io__NewOptionsSet_24;
#line 1065 "getopt_io.m"
          MR_Word mercury__getopt_io__Result0_43;
#line 1052 "getopt_io.m"
          MR_bool MR_CALL (* mercury__getopt_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt_io__TrackHandler_23, (MR_Integer) 1)));
#line 1052 "getopt_io.m"
          MR_Box mercury__getopt_io__conv4_Result0_43;
#line 1052 "getopt_io.m"
          MR_Box mercury__getopt_io__conv3_NewOptionsSet_24;

#line 1052 "getopt_io.m"
          {
#line 1052 "getopt_io.m"
            mercury__getopt_io__succeeded = mercury__getopt_io__func_2(((MR_Box) mercury__getopt_io__TrackHandler_23), mercury__getopt_io__Flag_10, ((MR_Box) (mercury__getopt_io__OptionData_11)), ((MR_Box) (mercury__getopt_io__OptionTable0_13)), &mercury__getopt_io__conv4_Result0_43, &mercury__getopt_io__conv3_NewOptionsSet_24);
          }
#line 1052 "getopt_io.m"
          if (mercury__getopt_io__succeeded)
#line 1052 "getopt_io.m"
            {
#line 1052 "getopt_io.m"
              mercury__getopt_io__Result0_43 = ((MR_Word) mercury__getopt_io__conv4_Result0_43);
#line 1052 "getopt_io.m"
              mercury__getopt_io__NewOptionsSet_24 = ((MR_Word) mercury__getopt_io__conv3_NewOptionsSet_24);
#line 1052 "getopt_io.m"
              mercury__getopt_io__succeeded = MR_TRUE;
#line 1052 "getopt_io.m"
            }
#line 1065 "getopt_io.m"
          if (mercury__getopt_io__succeeded)
#line 1055 "getopt_io.m"
            {
#line 1055 "getopt_io.m"
              MR_Word mercury__getopt_io__Set0_4_58 = (MR_Word) mercury__getopt_io__NewOptionsSet_24;
#line 1055 "getopt_io.m"
              MR_Word mercury__getopt_io__Set1_5_59 = (MR_Word) mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_26;
#line 1055 "getopt_io.m"
              MR_Word mercury__getopt_io__Set_6_60;

#line 101 "set_ordlist.opt"
              {
#line 101 "set_ordlist.opt"
                mercury__list__merge_and_remove_dups_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_54, mercury__getopt_io__Set0_4_58, mercury__getopt_io__Set1_5_59, &mercury__getopt_io__Set_6_60);
              }
#line 100 "set_ordlist.opt"
              *mercury__getopt_io__STATE_VARIABLE_OptionsSet_27 = (MR_Word) mercury__getopt_io__Set_6_60;
#line 1059 "getopt_io.m"
              if (((MR_tag((MR_Word) mercury__getopt_io__Result0_43)) == (MR_mktag((MR_Integer) 1))))
#line 1060 "getopt_io.m"
                {
#line 1060 "getopt_io.m"
                  MR_String mercury__getopt_io__TrackHandlerMsg_25 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__Result0_43, (MR_Integer) 0)));
#line 1060 "getopt_io.m"
                  MR_Word mercury__getopt_io__Reason_34;
#line 1060 "getopt_io.m"
                  MR_Word mercury__getopt_io__Error_35;

#line 1061 "getopt_io.m"
                  {
#line 1061 "getopt_io.m"
                    mercury__getopt_io__Reason_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1061 "getopt_io.m"
                    MR_hl_field(MR_mktag(2), mercury__getopt_io__Reason_34, 0) = ((MR_Box) (mercury__getopt_io__TrackHandlerMsg_25));
#line 1061 "getopt_io.m"
                  }
#line 1062 "getopt_io.m"
                  {
#line 1062 "getopt_io.m"
                    mercury__getopt_io__Error_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1062 "getopt_io.m"
                    MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_35, 0) = mercury__getopt_io__Flag_10;
#line 1062 "getopt_io.m"
                    MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_35, 1) = ((MR_Box) (mercury__getopt_io__Option_9));
#line 1062 "getopt_io.m"
                    MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_35, 2) = ((MR_Box) (mercury__getopt_io__Reason_34));
#line 1062 "getopt_io.m"
                  }
#line 1063 "getopt_io.m"
                  {
#line 1063 "getopt_io.m"
                    MR_Word base;
#line 1063 "getopt_io.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1063 "getopt_io.m"
                    *mercury__getopt_io__Result_14 = base;
#line 1063 "getopt_io.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_35));
#line 1063 "getopt_io.m"
                  }
#line 1060 "getopt_io.m"
                }
#line 1059 "getopt_io.m"
              else
#line 1057 "getopt_io.m"
                {
#line 1057 "getopt_io.m"
                  MR_Word mercury__getopt_io__OptionTable_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__Result0_43, (MR_Integer) 0)));

#line 1058 "getopt_io.m"
                  {
#line 1058 "getopt_io.m"
                    MR_Word base;
#line 1058 "getopt_io.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1058 "getopt_io.m"
                    *mercury__getopt_io__Result_14 = base;
#line 1058 "getopt_io.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__OptionTable_33));
#line 1058 "getopt_io.m"
                  }
#line 1057 "getopt_io.m"
                }
#line 1055 "getopt_io.m"
            }
#line 1065 "getopt_io.m"
          else
#line 1066 "getopt_io.m"
            {
#line 1066 "getopt_io.m"
              MR_Word mercury__getopt_io__V_30_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 1066 "getopt_io.m"
              MR_Word mercury__getopt_io__Error_42;

#line 1066 "getopt_io.m"
              {
#line 1066 "getopt_io.m"
                mercury__getopt_io__Error_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1066 "getopt_io.m"
                MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_42, 0) = mercury__getopt_io__Flag_10;
#line 1066 "getopt_io.m"
                MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_42, 1) = ((MR_Box) (mercury__getopt_io__Option_9));
#line 1066 "getopt_io.m"
                MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_42, 2) = ((MR_Box) (mercury__getopt_io__V_30_30));
#line 1066 "getopt_io.m"
              }
#line 1067 "getopt_io.m"
              {
#line 1067 "getopt_io.m"
                MR_Word base;
#line 1067 "getopt_io.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1067 "getopt_io.m"
                *mercury__getopt_io__Result_14 = base;
#line 1067 "getopt_io.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_42));
#line 1067 "getopt_io.m"
              }
#line 1067 "getopt_io.m"
              *mercury__getopt_io__STATE_VARIABLE_OptionsSet_27 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_26;
#line 1066 "getopt_io.m"
            }
#line 1050 "getopt_io.m"
        }
#line 1029 "getopt_io.m"
  }
#line 1023 "getopt_io.m"
}

#line 969 "getopt_io.m"
static void MR_CALL 
mercury__getopt_io__process_negated_option_7_p_0(
#line 969 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_51,
#line 969 "getopt_io.m"
  MR_String mercury__getopt_io__Option_8,
#line 969 "getopt_io.m"
  MR_Box mercury__getopt_io__Flag_9,
#line 969 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionOps_10,
#line 969 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionTable0_11,
#line 969 "getopt_io.m"
  MR_Word * mercury__getopt_io__Result_12,
#line 969 "getopt_io.m"
  MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_23,
#line 969 "getopt_io.m"
  MR_Word * mercury__getopt_io__STATE_VARIABLE_OptionsSet_24)
#line 969 "getopt_io.m"
{
#line 1018 "getopt_io.m"
  {
#line 1018 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 1018 "getopt_io.m"
    MR_Word mercury__getopt_io__OptionData_14;
#line 976 "getopt_io.m"
    MR_Word mercury__getopt_io__TypeCtorInfo_52_52 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 39 "map.opt"
    MR_Box mercury__getopt_io__conv0_OptionData_14;

#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__getopt_io__succeeded = mercury__tree234__search_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_51, mercury__getopt_io__TypeCtorInfo_52_52, mercury__getopt_io__OptionTable0_11, mercury__getopt_io__Flag_9, &mercury__getopt_io__conv0_OptionData_14);
    }
#line 39 "map.opt"
    if (mercury__getopt_io__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__getopt_io__OptionData_14 = ((MR_Word) mercury__getopt_io__conv0_OptionData_14);
#line 39 "map.opt"
        mercury__getopt_io__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 1018 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 982 "getopt_io.m"
      if ((mercury__getopt_io__OptionData_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 998 "getopt_io.m"
        {
#line 998 "getopt_io.m"
          MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_30_30;
#line 998 "getopt_io.m"
          MR_Word mercury__getopt_io__V_31_31;
#line 998 "getopt_io.m"
          MR_Word mercury__getopt_io__List0_5_84 = (MR_Word) mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_23;
#line 998 "getopt_io.m"
          MR_Word mercury__getopt_io__List_6_85;

#line 68 "set_ordlist.opt"
          {
#line 68 "set_ordlist.opt"
            mercury__set_ordlist__insert_2_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_51, mercury__getopt_io__List0_5_84, mercury__getopt_io__Flag_9, &mercury__getopt_io__List_6_85);
          }
#line 67 "set_ordlist.opt"
          mercury__getopt_io__STATE_VARIABLE_OptionsSet_30_30 = (MR_Word) mercury__getopt_io__List_6_85;
#line 1000 "getopt_io.m"
          mercury__getopt_io__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_io_scalar_common_8[1]);
#line 1000 "getopt_io.m"
          {
#line 1000 "getopt_io.m"
            mercury__getopt_io__process_special_8_p_0(mercury__getopt_io__TypeInfo_for_OptionType_51, mercury__getopt_io__Option_8, mercury__getopt_io__Flag_9, mercury__getopt_io__V_31_31, mercury__getopt_io__OptionOps_10, mercury__getopt_io__OptionTable0_11, mercury__getopt_io__Result_12, mercury__getopt_io__STATE_VARIABLE_OptionsSet_30_30, mercury__getopt_io__STATE_VARIABLE_OptionsSet_24);
#line 1000 "getopt_io.m"
            return;
          }
#line 998 "getopt_io.m"
        }
#line 982 "getopt_io.m"
      else
#line 982 "getopt_io.m"
        if ((mercury__getopt_io__OptionData_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1003 "getopt_io.m"
          {
#line 1003 "getopt_io.m"
            MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_26_26;
#line 1003 "getopt_io.m"
            MR_Word mercury__getopt_io__V_27_27;
#line 1003 "getopt_io.m"
            MR_Word mercury__getopt_io__V_29_29;

#line 1004 "getopt_io.m"
            {
#line 1004 "getopt_io.m"
              mercury__set__insert_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_51, mercury__getopt_io__Flag_9, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_23, &mercury__getopt_io__STATE_VARIABLE_OptionsSet_26_26);
            }
#line 1005 "getopt_io.m"
            mercury__getopt_io__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1005 "getopt_io.m"
            mercury__getopt_io__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__getopt_io_scalar_common_1[3]);
#line 1005 "getopt_io.m"
            {
#line 1005 "getopt_io.m"
              mercury__getopt_io__process_special_8_p_0(mercury__getopt_io__TypeInfo_for_OptionType_51, mercury__getopt_io__Option_8, mercury__getopt_io__Flag_9, mercury__getopt_io__V_27_27, mercury__getopt_io__OptionOps_10, mercury__getopt_io__OptionTable0_11, mercury__getopt_io__Result_12, mercury__getopt_io__STATE_VARIABLE_OptionsSet_26_26, mercury__getopt_io__STATE_VARIABLE_OptionsSet_24);
#line 1005 "getopt_io.m"
              return;
            }
#line 1003 "getopt_io.m"
          }
#line 982 "getopt_io.m"
        else
#line 982 "getopt_io.m"
          if (((MR_tag((MR_Word) mercury__getopt_io__OptionData_14)) == (MR_mktag((MR_Integer) 1))))
#line 978 "getopt_io.m"
            {
#line 978 "getopt_io.m"
              MR_Word mercury__getopt_io__TypeCtorInfo_53_53;
#line 978 "getopt_io.m"
              MR_Word mercury__getopt_io__OptionTable_16;
#line 978 "getopt_io.m"
              MR_Word mercury__getopt_io__V_44_44;
#line 978 "getopt_io.m"
              MR_Word mercury__getopt_io__List0_5_74 = (MR_Word) mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_23;
#line 978 "getopt_io.m"
              MR_Word mercury__getopt_io__List_6_75;

#line 68 "set_ordlist.opt"
              {
#line 68 "set_ordlist.opt"
                mercury__set_ordlist__insert_2_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_51, mercury__getopt_io__List0_5_74, mercury__getopt_io__Flag_9, &mercury__getopt_io__List_6_75);
              }
#line 67 "set_ordlist.opt"
              *mercury__getopt_io__STATE_VARIABLE_OptionsSet_24 = (MR_Word) mercury__getopt_io__List_6_75;
#line 980 "getopt_io.m"
              mercury__getopt_io__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_io_scalar_common_8[1]);
#line 10518 "getopt_io.c"
              mercury__getopt_io__TypeCtorInfo_53_53 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 117 "map.opt"
              {
#line 117 "map.opt"
                mercury__tree234__set_4_p_0(mercury__getopt_io__TypeInfo_for_OptionType_51, mercury__getopt_io__TypeCtorInfo_53_53, mercury__getopt_io__Flag_9, ((MR_Box) (mercury__getopt_io__V_44_44)), mercury__getopt_io__OptionTable0_11, &mercury__getopt_io__OptionTable_16);
              }
#line 981 "getopt_io.m"
              {
#line 981 "getopt_io.m"
                MR_Word base;
#line 981 "getopt_io.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 981 "getopt_io.m"
                *mercury__getopt_io__Result_12 = base;
#line 981 "getopt_io.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__OptionTable_16));
#line 981 "getopt_io.m"
              }
#line 978 "getopt_io.m"
            }
#line 982 "getopt_io.m"
          else
#line 982 "getopt_io.m"
            if (((((MR_tag((MR_Word) mercury__getopt_io__OptionData_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__OptionData_14, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 993 "getopt_io.m"
              {
#line 993 "getopt_io.m"
                MR_Word mercury__getopt_io__TypeCtorInfo_56_56;
#line 993 "getopt_io.m"
                MR_Word mercury__getopt_io__V_35_35;
#line 993 "getopt_io.m"
                MR_Word mercury__getopt_io__V_36_36;
#line 993 "getopt_io.m"
                MR_Word mercury__getopt_io__OptionTable_49;
#line 993 "getopt_io.m"
                MR_Word mercury__getopt_io__List0_5_64 = (MR_Word) mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_23;
#line 993 "getopt_io.m"
                MR_Word mercury__getopt_io__List_6_65;

#line 68 "set_ordlist.opt"
                {
#line 68 "set_ordlist.opt"
                  mercury__set_ordlist__insert_2_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_51, mercury__getopt_io__List0_5_64, mercury__getopt_io__Flag_9, &mercury__getopt_io__List_6_65);
                }
#line 67 "set_ordlist.opt"
                *mercury__getopt_io__STATE_VARIABLE_OptionsSet_24 = (MR_Word) mercury__getopt_io__List_6_65;
#line 995 "getopt_io.m"
                mercury__getopt_io__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 995 "getopt_io.m"
                mercury__getopt_io__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__getopt_io_scalar_common_1[4]);
#line 10569 "getopt_io.c"
                mercury__getopt_io__TypeCtorInfo_56_56 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 117 "map.opt"
                {
#line 117 "map.opt"
                  mercury__tree234__set_4_p_0(mercury__getopt_io__TypeInfo_for_OptionType_51, mercury__getopt_io__TypeCtorInfo_56_56, mercury__getopt_io__Flag_9, ((MR_Box) (mercury__getopt_io__V_35_35)), mercury__getopt_io__OptionTable0_11, &mercury__getopt_io__OptionTable_49);
                }
#line 996 "getopt_io.m"
                {
#line 996 "getopt_io.m"
                  MR_Word base;
#line 996 "getopt_io.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 996 "getopt_io.m"
                  *mercury__getopt_io__Result_12 = base;
#line 996 "getopt_io.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__OptionTable_49));
#line 996 "getopt_io.m"
                }
#line 993 "getopt_io.m"
              }
#line 982 "getopt_io.m"
            else
#line 982 "getopt_io.m"
              if (((((MR_tag((MR_Word) mercury__getopt_io__OptionData_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__OptionData_14, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 983 "getopt_io.m"
                {
#line 983 "getopt_io.m"
                  MR_Word mercury__getopt_io__TypeCtorInfo_54_54;
#line 983 "getopt_io.m"
                  MR_Word mercury__getopt_io__V_41_41;
#line 983 "getopt_io.m"
                  MR_Word mercury__getopt_io__V_42_42;
#line 983 "getopt_io.m"
                  MR_Word mercury__getopt_io__OptionTable_47;
#line 983 "getopt_io.m"
                  MR_Word mercury__getopt_io__List0_5_90 = (MR_Word) mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_23;
#line 983 "getopt_io.m"
                  MR_Word mercury__getopt_io__List_6_91;

#line 68 "set_ordlist.opt"
                  {
#line 68 "set_ordlist.opt"
                    mercury__set_ordlist__insert_2_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_51, mercury__getopt_io__List0_5_90, mercury__getopt_io__Flag_9, &mercury__getopt_io__List_6_91);
                  }
#line 67 "set_ordlist.opt"
                  *mercury__getopt_io__STATE_VARIABLE_OptionsSet_24 = (MR_Word) mercury__getopt_io__List_6_91;
#line 985 "getopt_io.m"
                  mercury__getopt_io__V_42_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 985 "getopt_io.m"
                  mercury__getopt_io__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__getopt_io_scalar_common_1[5]);
#line 10620 "getopt_io.c"
                  mercury__getopt_io__TypeCtorInfo_54_54 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 985 "getopt_io.m"
                  {
#line 985 "getopt_io.m"
                    mercury__map__set_4_p_0(mercury__getopt_io__TypeInfo_for_OptionType_51, mercury__getopt_io__TypeCtorInfo_54_54, mercury__getopt_io__Flag_9, ((MR_Box) (mercury__getopt_io__V_41_41)), mercury__getopt_io__OptionTable0_11, &mercury__getopt_io__OptionTable_47);
                  }
#line 986 "getopt_io.m"
                  {
#line 986 "getopt_io.m"
                    MR_Word base;
#line 986 "getopt_io.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 986 "getopt_io.m"
                    *mercury__getopt_io__Result_12 = base;
#line 986 "getopt_io.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__OptionTable_47));
#line 986 "getopt_io.m"
                  }
#line 983 "getopt_io.m"
                }
#line 982 "getopt_io.m"
              else
#line 982 "getopt_io.m"
                if (((((MR_tag((MR_Word) mercury__getopt_io__OptionData_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__OptionData_14, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 988 "getopt_io.m"
                  {
#line 988 "getopt_io.m"
                    MR_Word mercury__getopt_io__TypeCtorInfo_55_55;
#line 988 "getopt_io.m"
                    MR_Word mercury__getopt_io__V_38_38;
#line 988 "getopt_io.m"
                    MR_Word mercury__getopt_io__V_39_39;
#line 988 "getopt_io.m"
                    MR_Word mercury__getopt_io__OptionTable_48;

#line 989 "getopt_io.m"
                    {
#line 989 "getopt_io.m"
                      mercury__set__insert_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_51, mercury__getopt_io__Flag_9, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_23, mercury__getopt_io__STATE_VARIABLE_OptionsSet_24);
                    }
#line 990 "getopt_io.m"
                    mercury__getopt_io__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 990 "getopt_io.m"
                    mercury__getopt_io__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__getopt_io_scalar_common_1[6]);
#line 10665 "getopt_io.c"
                    mercury__getopt_io__TypeCtorInfo_55_55 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 990 "getopt_io.m"
                    {
#line 990 "getopt_io.m"
                      mercury__map__set_4_p_0(mercury__getopt_io__TypeInfo_for_OptionType_51, mercury__getopt_io__TypeCtorInfo_55_55, mercury__getopt_io__Flag_9, ((MR_Box) (mercury__getopt_io__V_38_38)), mercury__getopt_io__OptionTable0_11, &mercury__getopt_io__OptionTable_48);
                    }
#line 991 "getopt_io.m"
                    {
#line 991 "getopt_io.m"
                      MR_Word base;
#line 991 "getopt_io.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 991 "getopt_io.m"
                      *mercury__getopt_io__Result_12 = base;
#line 991 "getopt_io.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__OptionTable_48));
#line 991 "getopt_io.m"
                    }
#line 988 "getopt_io.m"
                  }
#line 982 "getopt_io.m"
                else
#line 1014 "getopt_io.m"
                  {
#line 1014 "getopt_io.m"
                    MR_Word mercury__getopt_io__Error_22;
#line 1014 "getopt_io.m"
                    MR_Word mercury__getopt_io__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));

#line 1015 "getopt_io.m"
                    {
#line 1015 "getopt_io.m"
                      mercury__getopt_io__Error_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "getopt_io.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_22, 0) = mercury__getopt_io__Flag_9;
#line 1015 "getopt_io.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_22, 1) = ((MR_Box) (mercury__getopt_io__Option_8));
#line 1015 "getopt_io.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_22, 2) = ((MR_Box) (mercury__getopt_io__V_25_25));
#line 1015 "getopt_io.m"
                    }
#line 1016 "getopt_io.m"
                    {
#line 1016 "getopt_io.m"
                      MR_Word base;
#line 1016 "getopt_io.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "getopt_io.m"
                      *mercury__getopt_io__Result_12 = base;
#line 1016 "getopt_io.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_22));
#line 1016 "getopt_io.m"
                    }
#line 1016 "getopt_io.m"
                    *mercury__getopt_io__STATE_VARIABLE_OptionsSet_24 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_23;
#line 1014 "getopt_io.m"
                  }
#line 1018 "getopt_io.m"
    else
#line 1019 "getopt_io.m"
      {
#line 1019 "getopt_io.m"
        MR_Word mercury__getopt_io__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1019 "getopt_io.m"
        MR_Word mercury__getopt_io__Error_50;

#line 1019 "getopt_io.m"
        {
#line 1019 "getopt_io.m"
          mercury__getopt_io__Error_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "getopt_io.m"
          MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_50, 0) = mercury__getopt_io__Flag_9;
#line 1019 "getopt_io.m"
          MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_50, 1) = ((MR_Box) (mercury__getopt_io__Option_8));
#line 1019 "getopt_io.m"
          MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_50, 2) = ((MR_Box) (mercury__getopt_io__V_46_46));
#line 1019 "getopt_io.m"
        }
#line 1020 "getopt_io.m"
        {
#line 1020 "getopt_io.m"
          MR_Word base;
#line 1020 "getopt_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1020 "getopt_io.m"
          *mercury__getopt_io__Result_12 = base;
#line 1020 "getopt_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_50));
#line 1020 "getopt_io.m"
        }
#line 1020 "getopt_io.m"
        *mercury__getopt_io__STATE_VARIABLE_OptionsSet_24 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_23;
#line 1019 "getopt_io.m"
      }
#line 1018 "getopt_io.m"
  }
#line 969 "getopt_io.m"
}

#line 787 "getopt_io.m"
static void MR_CALL 
mercury__getopt_io__process_option_11_p_0(
#line 787 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_279,
#line 787 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__1_1,
#line 787 "getopt_io.m"
  MR_String mercury__getopt_io__HeadVar__2_2,
#line 787 "getopt_io.m"
  MR_Box mercury__getopt_io__Flag_3,
#line 787 "getopt_io.m"
  MR_Word mercury__getopt_io__MaybeArg_4,
#line 787 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__5_5,
#line 787 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__6_6,
#line 787 "getopt_io.m"
  MR_Word * mercury__getopt_io__Result_7,
#line 787 "getopt_io.m"
  MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8,
#line 787 "getopt_io.m"
  MR_Word * mercury__getopt_io__STATE_VARIABLE_OptionsSet_9)
#line 787 "getopt_io.m"
{
#line 794 "getopt_io.m"
  {
#line 794 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;

#line 794 "getopt_io.m"
    if ((mercury__getopt_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 881 "getopt_io.m"
      {
#line 881 "getopt_io.m"
        MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_181_181;

#line 882 "getopt_io.m"
        {
#line 882 "getopt_io.m"
          mercury__set__insert_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_279, mercury__getopt_io__Flag_3, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt_io__STATE_VARIABLE_OptionsSet_181_181);
        }
#line 887 "getopt_io.m"
        if ((mercury__getopt_io__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 888 "getopt_io.m"
          {
#line 888 "getopt_io.m"
            MR_Word mercury__getopt_io__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_io_scalar_common_8[0]);

#line 889 "getopt_io.m"
            {
#line 889 "getopt_io.m"
              mercury__getopt_io__process_special_8_p_0(mercury__getopt_io__TypeInfo_for_OptionType_279, mercury__getopt_io__HeadVar__2_2, mercury__getopt_io__Flag_3, mercury__getopt_io__V_182_182, mercury__getopt_io__HeadVar__5_5, mercury__getopt_io__HeadVar__6_6, mercury__getopt_io__Result_7, mercury__getopt_io__STATE_VARIABLE_OptionsSet_181_181, mercury__getopt_io__STATE_VARIABLE_OptionsSet_9);
#line 889 "getopt_io.m"
              return;
            }
#line 888 "getopt_io.m"
          }
#line 887 "getopt_io.m"
        else
#line 884 "getopt_io.m"
          {
#line 884 "getopt_io.m"
            MR_Word mercury__getopt_io__V_185_185 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_io_scalar_common_8[1]);

#line 885 "getopt_io.m"
            {
#line 885 "getopt_io.m"
              mercury__getopt_io__process_special_8_p_0(mercury__getopt_io__TypeInfo_for_OptionType_279, mercury__getopt_io__HeadVar__2_2, mercury__getopt_io__Flag_3, mercury__getopt_io__V_185_185, mercury__getopt_io__HeadVar__5_5, mercury__getopt_io__HeadVar__6_6, mercury__getopt_io__Result_7, mercury__getopt_io__STATE_VARIABLE_OptionsSet_181_181, mercury__getopt_io__STATE_VARIABLE_OptionsSet_9);
#line 885 "getopt_io.m"
              return;
            }
#line 884 "getopt_io.m"
          }
#line 881 "getopt_io.m"
      }
#line 794 "getopt_io.m"
    else
#line 794 "getopt_io.m"
      if ((mercury__getopt_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 964 "getopt_io.m"
        if ((mercury__getopt_io__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 965 "getopt_io.m"
          {
#line 966 "getopt_io.m"
            {
#line 966 "getopt_io.m"
              mercury__require__error_1_p_0((MR_String) "file_special argument expected in getopt_io.process_option");
#line 966 "getopt_io.m"
              return;
            }
#line 965 "getopt_io.m"
          }
#line 964 "getopt_io.m"
        else
#line 932 "getopt_io.m"
          {
#line 932 "getopt_io.m"
            MR_String mercury__getopt_io__FileName_249 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__MaybeArg_4, (MR_Integer) 0)));
#line 932 "getopt_io.m"
            MR_Word mercury__getopt_io__SeeRes_250;

#line 933 "getopt_io.m"
            {
#line 933 "getopt_io.m"
              mercury__io__see_4_p_0(mercury__getopt_io__FileName_249, &mercury__getopt_io__SeeRes_250);
            }
#line 958 "getopt_io.m"
            if ((mercury__getopt_io__SeeRes_250 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 935 "getopt_io.m"
              {
#line 935 "getopt_io.m"
                MR_Word mercury__getopt_io__ReadRes_251;

#line 936 "getopt_io.m"
                {
#line 936 "getopt_io.m"
                  mercury__io__read_file_as_string_3_p_0(&mercury__getopt_io__ReadRes_251);
                }
#line 951 "getopt_io.m"
                if (((MR_tag((MR_Word) mercury__getopt_io__ReadRes_251)) == (MR_mktag((MR_Integer) 1))))
#line 952 "getopt_io.m"
                  {
#line 952 "getopt_io.m"
                    MR_Word mercury__getopt_io__IO_Error_262 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__ReadRes_251, (MR_Integer) 1)));
#line 952 "getopt_io.m"
                    MR_Word mercury__getopt_io__Reason_274;
#line 952 "getopt_io.m"
                    MR_Word mercury__getopt_io__Error_275;
#line 952 "getopt_io.m"
                    MR_String mercury__getopt_io__V_261_261 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__ReadRes_251, (MR_Integer) 0)));

#line 953 "getopt_io.m"
                    {
#line 953 "getopt_io.m"
                      mercury__getopt_io__Reason_274 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 953 "getopt_io.m"
                      MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_274, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 953 "getopt_io.m"
                      MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_274, 1) = ((MR_Box) (mercury__getopt_io__FileName_249));
#line 953 "getopt_io.m"
                      MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_274, 2) = ((MR_Box) (mercury__getopt_io__IO_Error_262));
#line 953 "getopt_io.m"
                    }
#line 954 "getopt_io.m"
                    {
#line 954 "getopt_io.m"
                      mercury__getopt_io__Error_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 954 "getopt_io.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_275, 0) = mercury__getopt_io__Flag_3;
#line 954 "getopt_io.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_275, 1) = ((MR_Box) (mercury__getopt_io__HeadVar__2_2));
#line 954 "getopt_io.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_275, 2) = ((MR_Box) (mercury__getopt_io__Reason_274));
#line 954 "getopt_io.m"
                    }
#line 955 "getopt_io.m"
                    {
#line 955 "getopt_io.m"
                      MR_Word base;
#line 955 "getopt_io.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 955 "getopt_io.m"
                      *mercury__getopt_io__Result_7 = base;
#line 955 "getopt_io.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_275));
#line 955 "getopt_io.m"
                    }
#line 955 "getopt_io.m"
                    *mercury__getopt_io__STATE_VARIABLE_OptionsSet_9 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8;
#line 952 "getopt_io.m"
                  }
#line 951 "getopt_io.m"
                else
#line 938 "getopt_io.m"
                  {
#line 938 "getopt_io.m"
                    MR_String mercury__getopt_io__Contents_252 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__getopt_io__ReadRes_251, (MR_Integer) 0)));
#line 938 "getopt_io.m"
                    MR_Word mercury__getopt_io__Words_253;
#line 938 "getopt_io.m"
                    MR_Word mercury__getopt_io__Args_254;
#line 938 "getopt_io.m"
                    MR_Word mercury__getopt_io__Result0_256;
#line 938 "getopt_io.m"
                    MR_Word mercury__getopt_io__V_270_270;
#line 940 "getopt_io.m"
                    MR_Word mercury__getopt_io___OptionArgs_255;

#line 939 "getopt_io.m"
                    {
#line 939 "getopt_io.m"
                      mercury__getopt_io__Words_253 = mercury__string__words_1_f_0(mercury__getopt_io__Contents_252);
                    }
#line 941 "getopt_io.m"
                    mercury__getopt_io__V_270_270 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 940 "getopt_io.m"
                    {
#line 940 "getopt_io.m"
                      mercury__getopt_io__process_arguments_11_p_0(mercury__getopt_io__TypeInfo_for_OptionType_279, mercury__getopt_io__Words_253, &mercury__getopt_io__Args_254, mercury__getopt_io__HeadVar__5_5, mercury__getopt_io__V_270_270, &mercury__getopt_io___OptionArgs_255, mercury__getopt_io__HeadVar__6_6, &mercury__getopt_io__Result0_256, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt_io__STATE_VARIABLE_OptionsSet_9);
                    }
#line 945 "getopt_io.m"
                    if ((mercury__getopt_io__Args_254 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 944 "getopt_io.m"
                      *mercury__getopt_io__Result_7 = mercury__getopt_io__Result0_256;
#line 945 "getopt_io.m"
                    else
#line 946 "getopt_io.m"
                      {
#line 946 "getopt_io.m"
                        MR_Word mercury__getopt_io__Reason_259;
#line 946 "getopt_io.m"
                        MR_Word mercury__getopt_io__Error_260;

#line 947 "getopt_io.m"
                        {
#line 947 "getopt_io.m"
                          mercury__getopt_io__Reason_259 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "getopt_io.m"
                          MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_259, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 947 "getopt_io.m"
                          MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_259, 1) = ((MR_Box) (mercury__getopt_io__FileName_249));
#line 947 "getopt_io.m"
                        }
#line 948 "getopt_io.m"
                        {
#line 948 "getopt_io.m"
                          mercury__getopt_io__Error_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 948 "getopt_io.m"
                          MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_260, 0) = mercury__getopt_io__Flag_3;
#line 948 "getopt_io.m"
                          MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_260, 1) = ((MR_Box) (mercury__getopt_io__HeadVar__2_2));
#line 948 "getopt_io.m"
                          MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_260, 2) = ((MR_Box) (mercury__getopt_io__Reason_259));
#line 948 "getopt_io.m"
                        }
#line 949 "getopt_io.m"
                        {
#line 949 "getopt_io.m"
                          MR_Word base;
#line 949 "getopt_io.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 949 "getopt_io.m"
                          *mercury__getopt_io__Result_7 = base;
#line 949 "getopt_io.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_260));
#line 949 "getopt_io.m"
                        }
#line 946 "getopt_io.m"
                      }
#line 938 "getopt_io.m"
                  }
#line 957 "getopt_io.m"
                {
#line 957 "getopt_io.m"
                  mercury__io__seen_2_p_0();
#line 957 "getopt_io.m"
                  return;
                }
#line 935 "getopt_io.m"
              }
#line 958 "getopt_io.m"
            else
#line 959 "getopt_io.m"
              {
#line 959 "getopt_io.m"
                MR_Word mercury__getopt_io__Reason_276;
#line 959 "getopt_io.m"
                MR_Word mercury__getopt_io__Error_277;
#line 959 "getopt_io.m"
                MR_Word mercury__getopt_io__IO_Error_278 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__SeeRes_250, (MR_Integer) 0)));

#line 960 "getopt_io.m"
                {
#line 960 "getopt_io.m"
                  mercury__getopt_io__Reason_276 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 960 "getopt_io.m"
                  MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_276, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 960 "getopt_io.m"
                  MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_276, 1) = ((MR_Box) (mercury__getopt_io__FileName_249));
#line 960 "getopt_io.m"
                  MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_276, 2) = ((MR_Box) (mercury__getopt_io__IO_Error_278));
#line 960 "getopt_io.m"
                }
#line 961 "getopt_io.m"
                {
#line 961 "getopt_io.m"
                  mercury__getopt_io__Error_277 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 961 "getopt_io.m"
                  MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_277, 0) = mercury__getopt_io__Flag_3;
#line 961 "getopt_io.m"
                  MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_277, 1) = ((MR_Box) (mercury__getopt_io__HeadVar__2_2));
#line 961 "getopt_io.m"
                  MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_277, 2) = ((MR_Box) (mercury__getopt_io__Reason_276));
#line 961 "getopt_io.m"
                }
#line 962 "getopt_io.m"
                {
#line 962 "getopt_io.m"
                  MR_Word base;
#line 962 "getopt_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 962 "getopt_io.m"
                  *mercury__getopt_io__Result_7 = base;
#line 962 "getopt_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_277));
#line 962 "getopt_io.m"
                }
#line 962 "getopt_io.m"
                *mercury__getopt_io__STATE_VARIABLE_OptionsSet_9 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8;
#line 959 "getopt_io.m"
              }
#line 932 "getopt_io.m"
          }
#line 794 "getopt_io.m"
      else
#line 794 "getopt_io.m"
        if ((mercury__getopt_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 893 "getopt_io.m"
          {
#line 893 "getopt_io.m"
            MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_202_202;

#line 894 "getopt_io.m"
            {
#line 894 "getopt_io.m"
              mercury__set__insert_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_279, mercury__getopt_io__Flag_3, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt_io__STATE_VARIABLE_OptionsSet_202_202);
            }
#line 903 "getopt_io.m"
            if ((mercury__getopt_io__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 904 "getopt_io.m"
              {
#line 905 "getopt_io.m"
                {
#line 905 "getopt_io.m"
                  mercury__require__error_1_p_0((MR_String) "int_special argument expected in getopt_io.process_option");
#line 905 "getopt_io.m"
                  return;
                }
#line 904 "getopt_io.m"
              }
#line 903 "getopt_io.m"
            else
#line 896 "getopt_io.m"
              {
#line 896 "getopt_io.m"
                MR_String mercury__getopt_io__Arg_196 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__MaybeArg_4, (MR_Integer) 0)));
#line 900 "getopt_io.m"
                MR_Integer mercury__getopt_io__IntArg_197;

#line 897 "getopt_io.m"
                {
#line 897 "getopt_io.m"
                  mercury__getopt_io__succeeded = mercury__string__to_int_2_p_0(mercury__getopt_io__Arg_196, &mercury__getopt_io__IntArg_197);
                }
#line 900 "getopt_io.m"
                if (mercury__getopt_io__succeeded)
#line 898 "getopt_io.m"
                  {
#line 898 "getopt_io.m"
                    MR_Word mercury__getopt_io__V_204_204;

#line 898 "getopt_io.m"
                    {
#line 898 "getopt_io.m"
                      mercury__getopt_io__V_204_204 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 898 "getopt_io.m"
                      MR_hl_field(MR_mktag(2), mercury__getopt_io__V_204_204, 0) = ((MR_Box) (mercury__getopt_io__IntArg_197));
#line 898 "getopt_io.m"
                    }
#line 898 "getopt_io.m"
                    {
#line 898 "getopt_io.m"
                      mercury__getopt_io__process_special_8_p_0(mercury__getopt_io__TypeInfo_for_OptionType_279, mercury__getopt_io__HeadVar__2_2, mercury__getopt_io__Flag_3, mercury__getopt_io__V_204_204, mercury__getopt_io__HeadVar__5_5, mercury__getopt_io__HeadVar__6_6, mercury__getopt_io__Result_7, mercury__getopt_io__STATE_VARIABLE_OptionsSet_202_202, mercury__getopt_io__STATE_VARIABLE_OptionsSet_9);
#line 898 "getopt_io.m"
                      return;
                    }
#line 898 "getopt_io.m"
                  }
#line 900 "getopt_io.m"
                else
#line 901 "getopt_io.m"
                  {
#line 901 "getopt_io.m"
                    {
#line 901 "getopt_io.m"
                      mercury__getopt_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(mercury__getopt_io__Flag_3, mercury__getopt_io__HeadVar__2_2, mercury__getopt_io__Arg_196, mercury__getopt_io__Result_7);
                    }
#line 901 "getopt_io.m"
                    *mercury__getopt_io__STATE_VARIABLE_OptionsSet_9 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_202_202;
#line 901 "getopt_io.m"
                  }
#line 896 "getopt_io.m"
              }
#line 893 "getopt_io.m"
          }
#line 794 "getopt_io.m"
        else
#line 794 "getopt_io.m"
          if ((mercury__getopt_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 924 "getopt_io.m"
            if ((mercury__getopt_io__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 925 "getopt_io.m"
              {
#line 926 "getopt_io.m"
                {
#line 926 "getopt_io.m"
                  mercury__require__error_1_p_0((MR_String) "maybe_string_special argument expected in getopt_io.process_option");
#line 926 "getopt_io.m"
                  return;
                }
#line 925 "getopt_io.m"
              }
#line 924 "getopt_io.m"
            else
#line 921 "getopt_io.m"
              {
#line 921 "getopt_io.m"
                MR_Word mercury__getopt_io__V_239_239;

#line 922 "getopt_io.m"
                {
#line 922 "getopt_io.m"
                  mercury__getopt_io__V_239_239 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 922 "getopt_io.m"
                  MR_hl_field(MR_mktag(3), mercury__getopt_io__V_239_239, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 922 "getopt_io.m"
                  MR_hl_field(MR_mktag(3), mercury__getopt_io__V_239_239, 1) = ((MR_Box) (mercury__getopt_io__MaybeArg_4));
#line 922 "getopt_io.m"
                }
#line 922 "getopt_io.m"
                {
#line 922 "getopt_io.m"
                  mercury__getopt_io__process_special_8_p_0(mercury__getopt_io__TypeInfo_for_OptionType_279, mercury__getopt_io__HeadVar__2_2, mercury__getopt_io__Flag_3, mercury__getopt_io__V_239_239, mercury__getopt_io__HeadVar__5_5, mercury__getopt_io__HeadVar__6_6, mercury__getopt_io__Result_7, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt_io__STATE_VARIABLE_OptionsSet_9);
#line 922 "getopt_io.m"
                  return;
                }
#line 921 "getopt_io.m"
              }
#line 794 "getopt_io.m"
          else
#line 794 "getopt_io.m"
            if ((mercury__getopt_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 870 "getopt_io.m"
              {
#line 870 "getopt_io.m"
                MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_164_164;

#line 871 "getopt_io.m"
                {
#line 871 "getopt_io.m"
                  mercury__set__insert_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_279, mercury__getopt_io__Flag_3, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt_io__STATE_VARIABLE_OptionsSet_164_164);
                }
#line 875 "getopt_io.m"
                if ((mercury__getopt_io__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 876 "getopt_io.m"
                  {
#line 876 "getopt_io.m"
                    MR_Word mercury__getopt_io__V_165_165 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 877 "getopt_io.m"
                    {
#line 877 "getopt_io.m"
                      mercury__getopt_io__process_special_8_p_0(mercury__getopt_io__TypeInfo_for_OptionType_279, mercury__getopt_io__HeadVar__2_2, mercury__getopt_io__Flag_3, mercury__getopt_io__V_165_165, mercury__getopt_io__HeadVar__5_5, mercury__getopt_io__HeadVar__6_6, mercury__getopt_io__Result_7, mercury__getopt_io__STATE_VARIABLE_OptionsSet_164_164, mercury__getopt_io__STATE_VARIABLE_OptionsSet_9);
#line 877 "getopt_io.m"
                      return;
                    }
#line 876 "getopt_io.m"
                  }
#line 875 "getopt_io.m"
                else
#line 873 "getopt_io.m"
                  {
#line 874 "getopt_io.m"
                    {
#line 874 "getopt_io.m"
                      mercury__require__error_1_p_0((MR_String) "no special argument expected in getopt_io.process_option");
#line 874 "getopt_io.m"
                      return;
                    }
#line 873 "getopt_io.m"
                  }
#line 870 "getopt_io.m"
              }
#line 794 "getopt_io.m"
            else
#line 794 "getopt_io.m"
              if ((mercury__getopt_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 908 "getopt_io.m"
                {
#line 908 "getopt_io.m"
                  MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_219_219;

#line 909 "getopt_io.m"
                  {
#line 909 "getopt_io.m"
                    mercury__set__insert_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_279, mercury__getopt_io__Flag_3, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt_io__STATE_VARIABLE_OptionsSet_219_219);
                  }
#line 914 "getopt_io.m"
                  if ((mercury__getopt_io__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 915 "getopt_io.m"
                    {
#line 916 "getopt_io.m"
                      {
#line 916 "getopt_io.m"
                        mercury__require__error_1_p_0((MR_String) "string_special argument expected in getopt_io.process_option");
#line 916 "getopt_io.m"
                        return;
                      }
#line 915 "getopt_io.m"
                    }
#line 914 "getopt_io.m"
                  else
#line 911 "getopt_io.m"
                    {
#line 911 "getopt_io.m"
                      MR_String mercury__getopt_io__Arg_214 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__MaybeArg_4, (MR_Integer) 0)));
#line 911 "getopt_io.m"
                      MR_Word mercury__getopt_io__V_221_221;

#line 912 "getopt_io.m"
                      {
#line 912 "getopt_io.m"
                        mercury__getopt_io__V_221_221 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 912 "getopt_io.m"
                        MR_hl_field(MR_mktag(3), mercury__getopt_io__V_221_221, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 912 "getopt_io.m"
                        MR_hl_field(MR_mktag(3), mercury__getopt_io__V_221_221, 1) = ((MR_Box) (mercury__getopt_io__Arg_214));
#line 912 "getopt_io.m"
                      }
#line 912 "getopt_io.m"
                      {
#line 912 "getopt_io.m"
                        mercury__getopt_io__process_special_8_p_0(mercury__getopt_io__TypeInfo_for_OptionType_279, mercury__getopt_io__HeadVar__2_2, mercury__getopt_io__Flag_3, mercury__getopt_io__V_221_221, mercury__getopt_io__HeadVar__5_5, mercury__getopt_io__HeadVar__6_6, mercury__getopt_io__Result_7, mercury__getopt_io__STATE_VARIABLE_OptionsSet_219_219, mercury__getopt_io__STATE_VARIABLE_OptionsSet_9);
#line 912 "getopt_io.m"
                        return;
                      }
#line 911 "getopt_io.m"
                    }
#line 908 "getopt_io.m"
                }
#line 794 "getopt_io.m"
              else
#line 794 "getopt_io.m"
                if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 794 "getopt_io.m"
                  {
#line 795 "getopt_io.m"
                    {
#line 795 "getopt_io.m"
                      mercury__set__insert_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_279, mercury__getopt_io__Flag_3, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt_io__STATE_VARIABLE_OptionsSet_9);
                    }
#line 800 "getopt_io.m"
                    if ((mercury__getopt_io__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 801 "getopt_io.m"
                      {
#line 801 "getopt_io.m"
                        MR_Word mercury__getopt_io__TypeCtorInfo_281_281 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 801 "getopt_io.m"
                        MR_Word mercury__getopt_io__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_io_scalar_common_8[0]);
#line 801 "getopt_io.m"
                        MR_Word mercury__getopt_io__STATE_VARIABLE_OptionTable_32_34;

#line 802 "getopt_io.m"
                        {
#line 802 "getopt_io.m"
                          mercury__map__set_4_p_0(mercury__getopt_io__TypeInfo_for_OptionType_279, mercury__getopt_io__TypeCtorInfo_281_281, mercury__getopt_io__Flag_3, ((MR_Box) (mercury__getopt_io__V_28_28)), mercury__getopt_io__HeadVar__6_6, &mercury__getopt_io__STATE_VARIABLE_OptionTable_32_34);
                        }
#line 803 "getopt_io.m"
                        {
#line 803 "getopt_io.m"
                          MR_Word base;
#line 803 "getopt_io.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 803 "getopt_io.m"
                          *mercury__getopt_io__Result_7 = base;
#line 803 "getopt_io.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__STATE_VARIABLE_OptionTable_32_34));
#line 803 "getopt_io.m"
                        }
#line 801 "getopt_io.m"
                      }
#line 800 "getopt_io.m"
                    else
#line 797 "getopt_io.m"
                      {
#line 797 "getopt_io.m"
                        MR_Word mercury__getopt_io__TypeCtorInfo_280_280 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 797 "getopt_io.m"
                        MR_Word mercury__getopt_io__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_io_scalar_common_8[1]);
#line 797 "getopt_io.m"
                        MR_Word mercury__getopt_io__STATE_VARIABLE_OptionTable_32_32;

#line 798 "getopt_io.m"
                        {
#line 798 "getopt_io.m"
                          mercury__map__set_4_p_0(mercury__getopt_io__TypeInfo_for_OptionType_279, mercury__getopt_io__TypeCtorInfo_280_280, mercury__getopt_io__Flag_3, ((MR_Box) (mercury__getopt_io__V_31_31)), mercury__getopt_io__HeadVar__6_6, &mercury__getopt_io__STATE_VARIABLE_OptionTable_32_32);
                        }
#line 799 "getopt_io.m"
                        {
#line 799 "getopt_io.m"
                          MR_Word base;
#line 799 "getopt_io.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 799 "getopt_io.m"
                          *mercury__getopt_io__Result_7 = base;
#line 799 "getopt_io.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__STATE_VARIABLE_OptionTable_32_32));
#line 799 "getopt_io.m"
                        }
#line 797 "getopt_io.m"
                      }
#line 794 "getopt_io.m"
                  }
#line 794 "getopt_io.m"
                else
#line 794 "getopt_io.m"
                  if (((MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 806 "getopt_io.m"
                    {
#line 807 "getopt_io.m"
                      {
#line 807 "getopt_io.m"
                        mercury__set__insert_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_279, mercury__getopt_io__Flag_3, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt_io__STATE_VARIABLE_OptionsSet_9);
                      }
#line 816 "getopt_io.m"
                      if ((mercury__getopt_io__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 817 "getopt_io.m"
                        {
#line 818 "getopt_io.m"
                          {
#line 818 "getopt_io.m"
                            mercury__require__error_1_p_0((MR_String) "integer argument expected in getopt_io.process_option");
#line 818 "getopt_io.m"
                            return;
                          }
#line 817 "getopt_io.m"
                        }
#line 816 "getopt_io.m"
                      else
#line 809 "getopt_io.m"
                        {
#line 809 "getopt_io.m"
                          MR_String mercury__getopt_io__Arg_44 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__MaybeArg_4, (MR_Integer) 0)));
#line 813 "getopt_io.m"
                          MR_Integer mercury__getopt_io__IntArg_45;

#line 810 "getopt_io.m"
                          {
#line 810 "getopt_io.m"
                            mercury__getopt_io__succeeded = mercury__string__to_int_2_p_0(mercury__getopt_io__Arg_44, &mercury__getopt_io__IntArg_45);
                          }
#line 813 "getopt_io.m"
                          if (mercury__getopt_io__succeeded)
#line 811 "getopt_io.m"
                            {
#line 811 "getopt_io.m"
                              MR_Word mercury__getopt_io__TypeCtorInfo_282_282;
#line 811 "getopt_io.m"
                              MR_Word mercury__getopt_io__V_53_53;
#line 811 "getopt_io.m"
                              MR_Word mercury__getopt_io__STATE_VARIABLE_OptionTable_54_54;

#line 811 "getopt_io.m"
                              {
#line 811 "getopt_io.m"
                                mercury__getopt_io__V_53_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 811 "getopt_io.m"
                                MR_hl_field(MR_mktag(2), mercury__getopt_io__V_53_53, 0) = ((MR_Box) (mercury__getopt_io__IntArg_45));
#line 811 "getopt_io.m"
                              }
#line 11436 "getopt_io.c"
                              mercury__getopt_io__TypeCtorInfo_282_282 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 811 "getopt_io.m"
                              {
#line 811 "getopt_io.m"
                                mercury__map__set_4_p_0(mercury__getopt_io__TypeInfo_for_OptionType_279, mercury__getopt_io__TypeCtorInfo_282_282, mercury__getopt_io__Flag_3, ((MR_Box) (mercury__getopt_io__V_53_53)), mercury__getopt_io__HeadVar__6_6, &mercury__getopt_io__STATE_VARIABLE_OptionTable_54_54);
                              }
#line 812 "getopt_io.m"
                              {
#line 812 "getopt_io.m"
                                MR_Word base;
#line 812 "getopt_io.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 812 "getopt_io.m"
                                *mercury__getopt_io__Result_7 = base;
#line 812 "getopt_io.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__STATE_VARIABLE_OptionTable_54_54));
#line 812 "getopt_io.m"
                              }
#line 811 "getopt_io.m"
                            }
#line 813 "getopt_io.m"
                          else
#line 814 "getopt_io.m"
                            {
#line 814 "getopt_io.m"
                              mercury__getopt_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(mercury__getopt_io__Flag_3, mercury__getopt_io__HeadVar__2_2, mercury__getopt_io__Arg_44, mercury__getopt_io__Result_7);
#line 814 "getopt_io.m"
                              return;
                            }
#line 809 "getopt_io.m"
                        }
#line 806 "getopt_io.m"
                    }
#line 794 "getopt_io.m"
                  else
#line 794 "getopt_io.m"
                    if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 858 "getopt_io.m"
                      {
#line 858 "getopt_io.m"
                        MR_Word mercury__getopt_io__List0_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));

#line 859 "getopt_io.m"
                        {
#line 859 "getopt_io.m"
                          mercury__set__insert_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_279, mercury__getopt_io__Flag_3, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt_io__STATE_VARIABLE_OptionsSet_9);
                        }
#line 865 "getopt_io.m"
                        if ((mercury__getopt_io__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 866 "getopt_io.m"
                          {
#line 867 "getopt_io.m"
                            {
#line 867 "getopt_io.m"
                              mercury__require__error_1_p_0((MR_String) "acumulating argument expected in getopt_io.process_option");
#line 867 "getopt_io.m"
                              return;
                            }
#line 866 "getopt_io.m"
                          }
#line 865 "getopt_io.m"
                        else
#line 861 "getopt_io.m"
                          {
#line 861 "getopt_io.m"
                            MR_Word mercury__getopt_io__TypeCtorInfo_286_286;
#line 861 "getopt_io.m"
                            MR_Word mercury__getopt_io__TypeCtorInfo_287_287;
#line 861 "getopt_io.m"
                            MR_String mercury__getopt_io__Arg_136 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__MaybeArg_4, (MR_Integer) 0)));
#line 861 "getopt_io.m"
                            MR_Word mercury__getopt_io__List_137;
#line 861 "getopt_io.m"
                            MR_Word mercury__getopt_io__V_145_145;
#line 861 "getopt_io.m"
                            MR_Word mercury__getopt_io__V_146_146 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 861 "getopt_io.m"
                            MR_Word mercury__getopt_io__V_147_147;
#line 861 "getopt_io.m"
                            MR_Word mercury__getopt_io__STATE_VARIABLE_OptionTable_148_148;

#line 862 "getopt_io.m"
                            {
#line 862 "getopt_io.m"
                              mercury__getopt_io__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 862 "getopt_io.m"
                              MR_hl_field(MR_mktag(1), mercury__getopt_io__V_145_145, 0) = ((MR_Box) (mercury__getopt_io__Arg_136));
#line 862 "getopt_io.m"
                              MR_hl_field(MR_mktag(1), mercury__getopt_io__V_145_145, 1) = ((MR_Box) (mercury__getopt_io__V_146_146));
#line 862 "getopt_io.m"
                            }
#line 11528 "getopt_io.c"
                            mercury__getopt_io__TypeCtorInfo_286_286 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 862 "getopt_io.m"
                            {
#line 862 "getopt_io.m"
                              mercury__list__append_3_p_1(mercury__getopt_io__TypeCtorInfo_286_286, mercury__getopt_io__List0_127, mercury__getopt_io__V_145_145, &mercury__getopt_io__List_137);
                            }
#line 863 "getopt_io.m"
                            {
#line 863 "getopt_io.m"
                              mercury__getopt_io__V_147_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 863 "getopt_io.m"
                              MR_hl_field(MR_mktag(3), mercury__getopt_io__V_147_147, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 863 "getopt_io.m"
                              MR_hl_field(MR_mktag(3), mercury__getopt_io__V_147_147, 1) = ((MR_Box) (mercury__getopt_io__List_137));
#line 863 "getopt_io.m"
                            }
#line 11545 "getopt_io.c"
                            mercury__getopt_io__TypeCtorInfo_287_287 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 863 "getopt_io.m"
                            {
#line 863 "getopt_io.m"
                              mercury__map__set_4_p_0(mercury__getopt_io__TypeInfo_for_OptionType_279, mercury__getopt_io__TypeCtorInfo_287_287, mercury__getopt_io__Flag_3, ((MR_Box) (mercury__getopt_io__V_147_147)), mercury__getopt_io__HeadVar__6_6, &mercury__getopt_io__STATE_VARIABLE_OptionTable_148_148);
                            }
#line 864 "getopt_io.m"
                            {
#line 864 "getopt_io.m"
                              MR_Word base;
#line 864 "getopt_io.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 864 "getopt_io.m"
                              *mercury__getopt_io__Result_7 = base;
#line 864 "getopt_io.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__STATE_VARIABLE_OptionTable_148_148));
#line 864 "getopt_io.m"
                            }
#line 861 "getopt_io.m"
                          }
#line 858 "getopt_io.m"
                      }
#line 794 "getopt_io.m"
                    else
#line 794 "getopt_io.m"
                      if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 832 "getopt_io.m"
                        {
#line 833 "getopt_io.m"
                          {
#line 833 "getopt_io.m"
                            mercury__set__insert_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_279, mercury__getopt_io__Flag_3, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt_io__STATE_VARIABLE_OptionsSet_9);
                          }
#line 842 "getopt_io.m"
                          if ((mercury__getopt_io__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 843 "getopt_io.m"
                            {
#line 844 "getopt_io.m"
                              {
#line 844 "getopt_io.m"
                                mercury__require__error_1_p_0((MR_String) "integer argument expected in getopt_io.process_option");
#line 844 "getopt_io.m"
                                return;
                              }
#line 843 "getopt_io.m"
                            }
#line 842 "getopt_io.m"
                          else
#line 835 "getopt_io.m"
                            {
#line 835 "getopt_io.m"
                              MR_String mercury__getopt_io__Arg_89 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__MaybeArg_4, (MR_Integer) 0)));
#line 839 "getopt_io.m"
                              MR_Integer mercury__getopt_io__IntArg_90;

#line 836 "getopt_io.m"
                              {
#line 836 "getopt_io.m"
                                mercury__getopt_io__succeeded = mercury__string__to_int_2_p_0(mercury__getopt_io__Arg_89, &mercury__getopt_io__IntArg_90);
                              }
#line 839 "getopt_io.m"
                              if (mercury__getopt_io__succeeded)
#line 837 "getopt_io.m"
                                {
#line 837 "getopt_io.m"
                                  MR_Word mercury__getopt_io__TypeCtorInfo_284_284;
#line 837 "getopt_io.m"
                                  MR_Word mercury__getopt_io__V_98_98;
#line 837 "getopt_io.m"
                                  MR_Word mercury__getopt_io__STATE_VARIABLE_OptionTable_99_99;
#line 837 "getopt_io.m"
                                  MR_Word mercury__getopt_io__V_100_100;

#line 837 "getopt_io.m"
                                  {
#line 837 "getopt_io.m"
                                    mercury__getopt_io__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 837 "getopt_io.m"
                                    MR_hl_field(MR_mktag(1), mercury__getopt_io__V_100_100, 0) = ((MR_Box) (mercury__getopt_io__IntArg_90));
#line 837 "getopt_io.m"
                                  }
#line 837 "getopt_io.m"
                                  {
#line 837 "getopt_io.m"
                                    mercury__getopt_io__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 837 "getopt_io.m"
                                    MR_hl_field(MR_mktag(3), mercury__getopt_io__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 837 "getopt_io.m"
                                    MR_hl_field(MR_mktag(3), mercury__getopt_io__V_98_98, 1) = ((MR_Box) (mercury__getopt_io__V_100_100));
#line 837 "getopt_io.m"
                                  }
#line 11637 "getopt_io.c"
                                  mercury__getopt_io__TypeCtorInfo_284_284 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 837 "getopt_io.m"
                                  {
#line 837 "getopt_io.m"
                                    mercury__map__set_4_p_0(mercury__getopt_io__TypeInfo_for_OptionType_279, mercury__getopt_io__TypeCtorInfo_284_284, mercury__getopt_io__Flag_3, ((MR_Box) (mercury__getopt_io__V_98_98)), mercury__getopt_io__HeadVar__6_6, &mercury__getopt_io__STATE_VARIABLE_OptionTable_99_99);
                                  }
#line 838 "getopt_io.m"
                                  {
#line 838 "getopt_io.m"
                                    MR_Word base;
#line 838 "getopt_io.m"
                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 838 "getopt_io.m"
                                    *mercury__getopt_io__Result_7 = base;
#line 838 "getopt_io.m"
                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__STATE_VARIABLE_OptionTable_99_99));
#line 838 "getopt_io.m"
                                  }
#line 837 "getopt_io.m"
                                }
#line 839 "getopt_io.m"
                              else
#line 840 "getopt_io.m"
                                {
#line 840 "getopt_io.m"
                                  mercury__getopt_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(mercury__getopt_io__Flag_3, mercury__getopt_io__HeadVar__2_2, mercury__getopt_io__Arg_89, mercury__getopt_io__Result_7);
#line 840 "getopt_io.m"
                                  return;
                                }
#line 835 "getopt_io.m"
                            }
#line 832 "getopt_io.m"
                        }
#line 794 "getopt_io.m"
                      else
#line 794 "getopt_io.m"
                        if (((((MR_tag((MR_Word) mercury__getopt_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 847 "getopt_io.m"
                          {
#line 848 "getopt_io.m"
                            {
#line 848 "getopt_io.m"
                              mercury__set__insert_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_279, mercury__getopt_io__Flag_3, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt_io__STATE_VARIABLE_OptionsSet_9);
                            }
#line 853 "getopt_io.m"
                            if ((mercury__getopt_io__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 854 "getopt_io.m"
                              {
#line 855 "getopt_io.m"
                                {
#line 855 "getopt_io.m"
                                  mercury__require__error_1_p_0((MR_String) "string argument expected in getopt_io.process_option");
#line 855 "getopt_io.m"
                                  return;
                                }
#line 854 "getopt_io.m"
                              }
#line 853 "getopt_io.m"
                            else
#line 850 "getopt_io.m"
                              {
#line 850 "getopt_io.m"
                                MR_Word mercury__getopt_io__TypeCtorInfo_285_285;
#line 850 "getopt_io.m"
                                MR_Word mercury__getopt_io__V_122_122;
#line 850 "getopt_io.m"
                                MR_Word mercury__getopt_io__STATE_VARIABLE_OptionTable_123_123;

#line 851 "getopt_io.m"
                                {
#line 851 "getopt_io.m"
                                  mercury__getopt_io__V_122_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 851 "getopt_io.m"
                                  MR_hl_field(MR_mktag(3), mercury__getopt_io__V_122_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 851 "getopt_io.m"
                                  MR_hl_field(MR_mktag(3), mercury__getopt_io__V_122_122, 1) = ((MR_Box) (mercury__getopt_io__MaybeArg_4));
#line 851 "getopt_io.m"
                                }
#line 11716 "getopt_io.c"
                                mercury__getopt_io__TypeCtorInfo_285_285 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 851 "getopt_io.m"
                                {
#line 851 "getopt_io.m"
                                  mercury__map__set_4_p_0(mercury__getopt_io__TypeInfo_for_OptionType_279, mercury__getopt_io__TypeCtorInfo_285_285, mercury__getopt_io__Flag_3, ((MR_Box) (mercury__getopt_io__V_122_122)), mercury__getopt_io__HeadVar__6_6, &mercury__getopt_io__STATE_VARIABLE_OptionTable_123_123);
                                }
#line 852 "getopt_io.m"
                                {
#line 852 "getopt_io.m"
                                  MR_Word base;
#line 852 "getopt_io.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 852 "getopt_io.m"
                                  *mercury__getopt_io__Result_7 = base;
#line 852 "getopt_io.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__STATE_VARIABLE_OptionTable_123_123));
#line 852 "getopt_io.m"
                                }
#line 850 "getopt_io.m"
                              }
#line 847 "getopt_io.m"
                          }
#line 794 "getopt_io.m"
                        else
#line 821 "getopt_io.m"
                          {
#line 822 "getopt_io.m"
                            {
#line 822 "getopt_io.m"
                              mercury__set__insert_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_279, mercury__getopt_io__Flag_3, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt_io__STATE_VARIABLE_OptionsSet_9);
                            }
#line 827 "getopt_io.m"
                            if ((mercury__getopt_io__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 828 "getopt_io.m"
                              {
#line 829 "getopt_io.m"
                                {
#line 829 "getopt_io.m"
                                  mercury__require__error_1_p_0((MR_String) "string argument expected in getopt_io.process_option");
#line 829 "getopt_io.m"
                                  return;
                                }
#line 828 "getopt_io.m"
                              }
#line 827 "getopt_io.m"
                            else
#line 824 "getopt_io.m"
                              {
#line 824 "getopt_io.m"
                                MR_Word mercury__getopt_io__TypeCtorInfo_283_283;
#line 824 "getopt_io.m"
                                MR_String mercury__getopt_io__Arg_68 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__MaybeArg_4, (MR_Integer) 0)));
#line 824 "getopt_io.m"
                                MR_Word mercury__getopt_io__V_76_76;
#line 824 "getopt_io.m"
                                MR_Word mercury__getopt_io__STATE_VARIABLE_OptionTable_77_77;

#line 825 "getopt_io.m"
                                {
#line 825 "getopt_io.m"
                                  mercury__getopt_io__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "getopt_io.m"
                                  MR_hl_field(MR_mktag(3), mercury__getopt_io__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 825 "getopt_io.m"
                                  MR_hl_field(MR_mktag(3), mercury__getopt_io__V_76_76, 1) = ((MR_Box) (mercury__getopt_io__Arg_68));
#line 825 "getopt_io.m"
                                }
#line 11784 "getopt_io.c"
                                mercury__getopt_io__TypeCtorInfo_283_283 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 825 "getopt_io.m"
                                {
#line 825 "getopt_io.m"
                                  mercury__map__set_4_p_0(mercury__getopt_io__TypeInfo_for_OptionType_279, mercury__getopt_io__TypeCtorInfo_283_283, mercury__getopt_io__Flag_3, ((MR_Box) (mercury__getopt_io__V_76_76)), mercury__getopt_io__HeadVar__6_6, &mercury__getopt_io__STATE_VARIABLE_OptionTable_77_77);
                                }
#line 826 "getopt_io.m"
                                {
#line 826 "getopt_io.m"
                                  MR_Word base;
#line 826 "getopt_io.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 826 "getopt_io.m"
                                  *mercury__getopt_io__Result_7 = base;
#line 826 "getopt_io.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__STATE_VARIABLE_OptionTable_77_77));
#line 826 "getopt_io.m"
                                }
#line 824 "getopt_io.m"
                              }
#line 821 "getopt_io.m"
                          }
#line 794 "getopt_io.m"
  }
#line 787 "getopt_io.m"
}

#line 714 "getopt_io.m"
static void MR_CALL 
mercury__getopt_io__handle_short_options_12_p_0(
#line 714 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_70,
#line 714 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__1_1,
#line 714 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionOps_2,
#line 714 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__3_3,
#line 714 "getopt_io.m"
  MR_Word * mercury__getopt_io__Args_4,
#line 714 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__5_5,
#line 714 "getopt_io.m"
  MR_Word * mercury__getopt_io__OptionArgs_6,
#line 714 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__7_7,
#line 714 "getopt_io.m"
  MR_Word * mercury__getopt_io__HeadVar__8_8,
#line 714 "getopt_io.m"
  MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_9,
#line 714 "getopt_io.m"
  MR_Word * mercury__getopt_io__STATE_VARIABLE_OptionsSet_10)
#line 714 "getopt_io.m"
{
#line 721 "getopt_io.m"
  while (MR_TRUE)
#line 721 "getopt_io.m"
    {
#line 721 "getopt_io.m"
      /* tailcall optimized into a loop */
#line 721 "getopt_io.m"
      {
#line 721 "getopt_io.m"
        MR_bool mercury__getopt_io__succeeded;

#line 721 "getopt_io.m"
        if ((mercury__getopt_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 721 "getopt_io.m"
          {
#line 721 "getopt_io.m"
            *mercury__getopt_io__Args_4 = mercury__getopt_io__HeadVar__3_3;
#line 721 "getopt_io.m"
            *mercury__getopt_io__OptionArgs_6 = mercury__getopt_io__HeadVar__5_5;
#line 722 "getopt_io.m"
            {
#line 722 "getopt_io.m"
              MR_Word base;
#line 722 "getopt_io.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 722 "getopt_io.m"
              *mercury__getopt_io__HeadVar__8_8 = base;
#line 722 "getopt_io.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__HeadVar__7_7));
#line 722 "getopt_io.m"
            }
#line 722 "getopt_io.m"
            *mercury__getopt_io__STATE_VARIABLE_OptionsSet_10 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_9;
#line 721 "getopt_io.m"
          }
#line 721 "getopt_io.m"
        else
#line 724 "getopt_io.m"
          {
#line 724 "getopt_io.m"
            MR_Char mercury__getopt_io__Opt_23 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
#line 724 "getopt_io.m"
            MR_Word mercury__getopt_io__Opts0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));
#line 724 "getopt_io.m"
            MR_Word mercury__getopt_io__ShortOptionPred_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_2, (MR_Integer) 0)));
#line 725 "getopt_io.m"
            MR_Word mercury__getopt_io__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_2, (MR_Integer) 1)));
#line 725 "getopt_io.m"
            MR_Word mercury__getopt_io__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_2, (MR_Integer) 2)));
#line 760 "getopt_io.m"
            MR_Box mercury__getopt_io__Flag_35;
#line 726 "getopt_io.m"
            MR_bool MR_CALL (* mercury__getopt_io__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt_io__ShortOptionPred_34, (MR_Integer) 1)));

#line 726 "getopt_io.m"
            {
#line 726 "getopt_io.m"
              mercury__getopt_io__succeeded = mercury__getopt_io__func_0(((MR_Box) mercury__getopt_io__ShortOptionPred_34), ((MR_Box) (MR_Word) (mercury__getopt_io__Opt_23)), &mercury__getopt_io__Flag_35);
            }
#line 760 "getopt_io.m"
            if (mercury__getopt_io__succeeded)
#line 753 "getopt_io.m"
              {
#line 753 "getopt_io.m"
                MR_Word mercury__getopt_io__OptionData_36;
#line 727 "getopt_io.m"
                MR_Word mercury__getopt_io__TypeCtorInfo_71_71 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 39 "map.opt"
                MR_Box mercury__getopt_io__conv1_OptionData_36;

#line 39 "map.opt"
                {
#line 39 "map.opt"
                  mercury__getopt_io__succeeded = mercury__tree234__search_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_70, mercury__getopt_io__TypeCtorInfo_71_71, mercury__getopt_io__HeadVar__7_7, mercury__getopt_io__Flag_35, &mercury__getopt_io__conv1_OptionData_36);
                }
#line 39 "map.opt"
                if (mercury__getopt_io__succeeded)
#line 39 "map.opt"
                  {
#line 39 "map.opt"
                    mercury__getopt_io__OptionData_36 = ((MR_Word) mercury__getopt_io__conv1_OptionData_36);
#line 39 "map.opt"
                    mercury__getopt_io__succeeded = MR_TRUE;
#line 39 "map.opt"
                  }
#line 753 "getopt_io.m"
                if (mercury__getopt_io__succeeded)
#line 738 "getopt_io.m"
                  {
#line 738 "getopt_io.m"
                    MR_Word mercury__getopt_io__Args1_38;
#line 738 "getopt_io.m"
                    MR_Word mercury__getopt_io__OptionArgs1_39;
#line 738 "getopt_io.m"
                    MR_Word mercury__getopt_io__MaybeOptionArg_40;
#line 738 "getopt_io.m"
                    MR_Word mercury__getopt_io__Opts1_41;
#line 738 "getopt_io.m"
                    MR_String mercury__getopt_io__Option_42;
#line 738 "getopt_io.m"
                    MR_Word mercury__getopt_io__Result1_43;
#line 738 "getopt_io.m"
                    MR_Word mercury__getopt_io__V_53_53;
#line 738 "getopt_io.m"
                    MR_Word mercury__getopt_io__V_55_55;
#line 738 "getopt_io.m"
                    MR_Word mercury__getopt_io__V_56_56;
#line 738 "getopt_io.m"
                    MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_57_57;
#line 728 "getopt_io.m"
                    MR_Word mercury__getopt_io__V_72_72;

#line 1079 "getopt_io.m"
                    if ((mercury__getopt_io__OptionData_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1086 "getopt_io.m"
                      mercury__getopt_io__V_72_72 = (MR_Integer) 0;
#line 1079 "getopt_io.m"
                    else
#line 1079 "getopt_io.m"
                      if ((mercury__getopt_io__OptionData_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 1090 "getopt_io.m"
                        mercury__getopt_io__V_72_72 = (MR_Integer) 1;
#line 1079 "getopt_io.m"
                      else
#line 1079 "getopt_io.m"
                        if ((mercury__getopt_io__OptionData_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1087 "getopt_io.m"
                          mercury__getopt_io__V_72_72 = (MR_Integer) 1;
#line 1079 "getopt_io.m"
                        else
#line 1079 "getopt_io.m"
                          if ((mercury__getopt_io__OptionData_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1089 "getopt_io.m"
                            mercury__getopt_io__V_72_72 = (MR_Integer) 1;
#line 1079 "getopt_io.m"
                          else
#line 1079 "getopt_io.m"
                            if ((mercury__getopt_io__OptionData_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1085 "getopt_io.m"
                              mercury__getopt_io__V_72_72 = (MR_Integer) 0;
#line 1079 "getopt_io.m"
                            else
#line 1079 "getopt_io.m"
                              if ((mercury__getopt_io__OptionData_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1088 "getopt_io.m"
                                mercury__getopt_io__V_72_72 = (MR_Integer) 1;
#line 1079 "getopt_io.m"
                              else
#line 1079 "getopt_io.m"
                                if (((MR_tag((MR_Word) mercury__getopt_io__OptionData_36)) == (MR_mktag((MR_Integer) 1))))
#line 1079 "getopt_io.m"
                                  mercury__getopt_io__V_72_72 = (MR_Integer) 0;
#line 1079 "getopt_io.m"
                                else
#line 1079 "getopt_io.m"
                                  if (((MR_tag((MR_Word) mercury__getopt_io__OptionData_36)) == (MR_mktag((MR_Integer) 2))))
#line 1080 "getopt_io.m"
                                    mercury__getopt_io__V_72_72 = (MR_Integer) 1;
#line 1079 "getopt_io.m"
                                  else
#line 1079 "getopt_io.m"
                                    if (((((MR_tag((MR_Word) mercury__getopt_io__OptionData_36)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__OptionData_36, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1084 "getopt_io.m"
                                      mercury__getopt_io__V_72_72 = (MR_Integer) 1;
#line 1079 "getopt_io.m"
                                    else
#line 1079 "getopt_io.m"
                                      if (((((MR_tag((MR_Word) mercury__getopt_io__OptionData_36)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__OptionData_36, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1082 "getopt_io.m"
                                        mercury__getopt_io__V_72_72 = (MR_Integer) 1;
#line 1079 "getopt_io.m"
                                      else
#line 1079 "getopt_io.m"
                                        if (((((MR_tag((MR_Word) mercury__getopt_io__OptionData_36)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__OptionData_36, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1083 "getopt_io.m"
                                          mercury__getopt_io__V_72_72 = (MR_Integer) 1;
#line 1079 "getopt_io.m"
                                        else
#line 1081 "getopt_io.m"
                                          mercury__getopt_io__V_72_72 = (MR_Integer) 1;
#line 728 "getopt_io.m"
                    mercury__getopt_io__succeeded = ((MR_Integer) 1 == mercury__getopt_io__V_72_72);
#line 733 "getopt_io.m"
                    if (mercury__getopt_io__succeeded)
#line 730 "getopt_io.m"
                      {
#line 730 "getopt_io.m"
                        MR_String mercury__getopt_io__Arg_37;
#line 781 "getopt_io.m"
                        MR_String mercury__getopt_io__ArgPrime_88;
#line 781 "getopt_io.m"
                        MR_Word mercury__getopt_io__ArgsPrime_89;

#line 775 "getopt_io.m"
                        mercury__getopt_io__succeeded = (mercury__getopt_io__Opts0_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 775 "getopt_io.m"
                        if (mercury__getopt_io__succeeded)
#line 775 "getopt_io.m"
                          {
#line 776 "getopt_io.m"
                            mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 776 "getopt_io.m"
                            if (mercury__getopt_io__succeeded)
#line 776 "getopt_io.m"
                              {
#line 776 "getopt_io.m"
                                mercury__getopt_io__ArgPrime_88 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 0)));
#line 776 "getopt_io.m"
                                mercury__getopt_io__ArgsPrime_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__3_3, (MR_Integer) 1)));
#line 776 "getopt_io.m"
                              }
#line 775 "getopt_io.m"
                          }
#line 781 "getopt_io.m"
                        if (mercury__getopt_io__succeeded)
#line 778 "getopt_io.m"
                          {
#line 778 "getopt_io.m"
                            {
#line 778 "getopt_io.m"
                              mercury__getopt_io__OptionArgs1_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "getopt_io.m"
                              MR_hl_field(MR_mktag(1), mercury__getopt_io__OptionArgs1_39, 0) = ((MR_Box) (mercury__getopt_io__ArgPrime_88));
#line 778 "getopt_io.m"
                              MR_hl_field(MR_mktag(1), mercury__getopt_io__OptionArgs1_39, 1) = ((MR_Box) (mercury__getopt_io__HeadVar__5_5));
#line 778 "getopt_io.m"
                            }
#line 779 "getopt_io.m"
                            mercury__getopt_io__Arg_37 = mercury__getopt_io__ArgPrime_88;
#line 780 "getopt_io.m"
                            mercury__getopt_io__Args1_38 = mercury__getopt_io__ArgsPrime_89;
#line 778 "getopt_io.m"
                          }
#line 781 "getopt_io.m"
                        else
#line 782 "getopt_io.m"
                          {
#line 782 "getopt_io.m"
                            {
#line 782 "getopt_io.m"
                              mercury__string__from_char_list_2_p_0(mercury__getopt_io__Opts0_24, &mercury__getopt_io__Arg_37);
                            }
#line 783 "getopt_io.m"
                            mercury__getopt_io__OptionArgs1_39 = mercury__getopt_io__HeadVar__5_5;
#line 784 "getopt_io.m"
                            mercury__getopt_io__Args1_38 = mercury__getopt_io__HeadVar__3_3;
#line 782 "getopt_io.m"
                          }
#line 731 "getopt_io.m"
                        {
#line 731 "getopt_io.m"
                          mercury__getopt_io__MaybeOptionArg_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 731 "getopt_io.m"
                          MR_hl_field(MR_mktag(1), mercury__getopt_io__MaybeOptionArg_40, 0) = ((MR_Box) (mercury__getopt_io__Arg_37));
#line 731 "getopt_io.m"
                        }
#line 732 "getopt_io.m"
                        mercury__getopt_io__Opts1_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 730 "getopt_io.m"
                      }
#line 733 "getopt_io.m"
                    else
#line 734 "getopt_io.m"
                      {
#line 734 "getopt_io.m"
                        mercury__getopt_io__MaybeOptionArg_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 735 "getopt_io.m"
                        mercury__getopt_io__Opts1_41 = mercury__getopt_io__Opts0_24;
#line 736 "getopt_io.m"
                        mercury__getopt_io__OptionArgs1_39 = mercury__getopt_io__HeadVar__5_5;
#line 737 "getopt_io.m"
                        mercury__getopt_io__Args1_38 = mercury__getopt_io__HeadVar__3_3;
#line 734 "getopt_io.m"
                      }
#line 739 "getopt_io.m"
                    mercury__getopt_io__V_56_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 739 "getopt_io.m"
                    {
#line 739 "getopt_io.m"
                      mercury__getopt_io__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "getopt_io.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt_io__V_55_55, 0) = ((MR_Box) (MR_Word) (mercury__getopt_io__Opt_23));
#line 739 "getopt_io.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt_io__V_55_55, 1) = ((MR_Box) (mercury__getopt_io__V_56_56));
#line 739 "getopt_io.m"
                    }
#line 739 "getopt_io.m"
                    {
#line 739 "getopt_io.m"
                      mercury__getopt_io__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "getopt_io.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt_io__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
#line 739 "getopt_io.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt_io__V_53_53, 1) = ((MR_Box) (mercury__getopt_io__V_55_55));
#line 739 "getopt_io.m"
                    }
#line 739 "getopt_io.m"
                    {
#line 739 "getopt_io.m"
                      mercury__string__from_char_list_2_p_0(mercury__getopt_io__V_53_53, &mercury__getopt_io__Option_42);
                    }
#line 740 "getopt_io.m"
                    {
#line 740 "getopt_io.m"
                      mercury__getopt_io__process_option_11_p_0(mercury__getopt_io__TypeInfo_for_OptionType_70, mercury__getopt_io__OptionData_36, mercury__getopt_io__Option_42, mercury__getopt_io__Flag_35, mercury__getopt_io__MaybeOptionArg_40, mercury__getopt_io__OptionOps_2, mercury__getopt_io__HeadVar__7_7, &mercury__getopt_io__Result1_43, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_9, &mercury__getopt_io__STATE_VARIABLE_OptionsSet_57_57);
                    }
#line 747 "getopt_io.m"
                    if (((MR_tag((MR_Word) mercury__getopt_io__Result1_43)) == (MR_mktag((MR_Integer) 1))))
#line 748 "getopt_io.m"
                      {
#line 749 "getopt_io.m"
                        *mercury__getopt_io__HeadVar__8_8 = mercury__getopt_io__Result1_43;
#line 750 "getopt_io.m"
                        *mercury__getopt_io__OptionArgs_6 = mercury__getopt_io__OptionArgs1_39;
#line 751 "getopt_io.m"
                        *mercury__getopt_io__Args_4 = mercury__getopt_io__Args1_38;
#line 751 "getopt_io.m"
                        *mercury__getopt_io__STATE_VARIABLE_OptionsSet_10 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_57_57;
#line 748 "getopt_io.m"
                      }
#line 747 "getopt_io.m"
                    else
#line 743 "getopt_io.m"
                      {
#line 743 "getopt_io.m"
                        MR_Word mercury__getopt_io__OptionTable1_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__Result1_43, (MR_Integer) 0)));

#line 744 "getopt_io.m"
                        /* direct tailcall eliminated */
#line 744 "getopt_io.m"
                        {
#line 744 "getopt_io.m"
                          MR_Word mercury__getopt_io__HeadVar__1__tmp_copy_1 = mercury__getopt_io__Opts1_41;
#line 744 "getopt_io.m"
                          MR_Word mercury__getopt_io__HeadVar__3__tmp_copy_3 = mercury__getopt_io__Args1_38;
#line 744 "getopt_io.m"
                          MR_Word mercury__getopt_io__HeadVar__5__tmp_copy_5 = mercury__getopt_io__OptionArgs1_39;
#line 744 "getopt_io.m"
                          MR_Word mercury__getopt_io__HeadVar__7__tmp_copy_7 = mercury__getopt_io__OptionTable1_44;
#line 744 "getopt_io.m"
                          MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_0__tmp_copy_9 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_57_57;

#line 744 "getopt_io.m"
                          mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_9 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0__tmp_copy_9;
#line 744 "getopt_io.m"
                          mercury__getopt_io__HeadVar__7_7 = mercury__getopt_io__HeadVar__7__tmp_copy_7;
#line 744 "getopt_io.m"
                          mercury__getopt_io__HeadVar__5_5 = mercury__getopt_io__HeadVar__5__tmp_copy_5;
#line 744 "getopt_io.m"
                          mercury__getopt_io__HeadVar__3_3 = mercury__getopt_io__HeadVar__3__tmp_copy_3;
#line 744 "getopt_io.m"
                          mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__HeadVar__1__tmp_copy_1;
#line 744 "getopt_io.m"
                        }
#line 744 "getopt_io.m"
                        continue;
#line 743 "getopt_io.m"
                      }
#line 738 "getopt_io.m"
                  }
#line 753 "getopt_io.m"
                else
#line 754 "getopt_io.m"
                  {
#line 754 "getopt_io.m"
                    MR_String mercury__getopt_io__OptString_46;
#line 754 "getopt_io.m"
                    MR_Word mercury__getopt_io__Error_47;
#line 754 "getopt_io.m"
                    MR_String mercury__getopt_io__V_61_61;
#line 754 "getopt_io.m"
                    MR_Word mercury__getopt_io__V_63_63;
#line 754 "getopt_io.m"
                    MR_Word mercury__getopt_io__V_5_92;
#line 754 "getopt_io.m"
                    MR_Word mercury__getopt_io__V_6_93 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 288 "string.opt"
                    {
#line 288 "string.opt"
                      mercury__getopt_io__V_5_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "string.opt"
                      MR_hl_field(MR_mktag(1), mercury__getopt_io__V_5_92, 0) = ((MR_Box) (MR_Word) (mercury__getopt_io__Opt_23));
#line 288 "string.opt"
                      MR_hl_field(MR_mktag(1), mercury__getopt_io__V_5_92, 1) = ((MR_Box) (mercury__getopt_io__V_6_93));
#line 288 "string.opt"
                    }
#line 290 "string.opt"
                    {
#line 290 "string.opt"
                      mercury__string__to_char_list_2_p_1(&mercury__getopt_io__OptString_46, mercury__getopt_io__V_5_92);
                    }
#line 755 "getopt_io.m"
                    {
#line 755 "getopt_io.m"
                      mercury__getopt_io__V_61_61 = mercury__string__f_43_43_2_f_0((MR_String) "-", mercury__getopt_io__OptString_46);
                    }
#line 755 "getopt_io.m"
                    mercury__getopt_io__V_63_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 755 "getopt_io.m"
                    {
#line 755 "getopt_io.m"
                      mercury__getopt_io__Error_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 755 "getopt_io.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_47, 0) = mercury__getopt_io__Flag_35;
#line 755 "getopt_io.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_47, 1) = ((MR_Box) (mercury__getopt_io__V_61_61));
#line 755 "getopt_io.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_47, 2) = ((MR_Box) (mercury__getopt_io__V_63_63));
#line 755 "getopt_io.m"
                    }
#line 756 "getopt_io.m"
                    {
#line 756 "getopt_io.m"
                      MR_Word base;
#line 756 "getopt_io.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 756 "getopt_io.m"
                      *mercury__getopt_io__HeadVar__8_8 = base;
#line 756 "getopt_io.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_47));
#line 756 "getopt_io.m"
                    }
#line 757 "getopt_io.m"
                    *mercury__getopt_io__OptionArgs_6 = mercury__getopt_io__HeadVar__5_5;
#line 758 "getopt_io.m"
                    *mercury__getopt_io__Args_4 = mercury__getopt_io__HeadVar__3_3;
#line 758 "getopt_io.m"
                    *mercury__getopt_io__STATE_VARIABLE_OptionsSet_10 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_9;
#line 754 "getopt_io.m"
                  }
#line 753 "getopt_io.m"
              }
#line 760 "getopt_io.m"
            else
#line 761 "getopt_io.m"
              {
#line 761 "getopt_io.m"
                MR_String mercury__getopt_io__V_64_64;
#line 761 "getopt_io.m"
                MR_String mercury__getopt_io__OptString_66;
#line 761 "getopt_io.m"
                MR_Word mercury__getopt_io__Error_67;
#line 761 "getopt_io.m"
                MR_Word mercury__getopt_io__V_5_96;
#line 761 "getopt_io.m"
                MR_Word mercury__getopt_io__V_6_97 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 288 "string.opt"
                {
#line 288 "string.opt"
                  mercury__getopt_io__V_5_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "string.opt"
                  MR_hl_field(MR_mktag(1), mercury__getopt_io__V_5_96, 0) = ((MR_Box) (MR_Word) (mercury__getopt_io__Opt_23));
#line 288 "string.opt"
                  MR_hl_field(MR_mktag(1), mercury__getopt_io__V_5_96, 1) = ((MR_Box) (mercury__getopt_io__V_6_97));
#line 288 "string.opt"
                }
#line 290 "string.opt"
                {
#line 290 "string.opt"
                  mercury__string__to_char_list_2_p_1(&mercury__getopt_io__OptString_66, mercury__getopt_io__V_5_96);
                }
#line 762 "getopt_io.m"
                {
#line 762 "getopt_io.m"
                  mercury__getopt_io__V_64_64 = mercury__string__f_43_43_2_f_0((MR_String) "-", mercury__getopt_io__OptString_66);
                }
#line 762 "getopt_io.m"
                {
#line 762 "getopt_io.m"
                  mercury__getopt_io__Error_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 762 "getopt_io.m"
                  MR_hl_field(MR_mktag(0), mercury__getopt_io__Error_67, 0) = ((MR_Box) (mercury__getopt_io__V_64_64));
#line 762 "getopt_io.m"
                }
#line 763 "getopt_io.m"
                {
#line 763 "getopt_io.m"
                  MR_Word base;
#line 763 "getopt_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 763 "getopt_io.m"
                  *mercury__getopt_io__HeadVar__8_8 = base;
#line 763 "getopt_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_67));
#line 763 "getopt_io.m"
                }
#line 764 "getopt_io.m"
                *mercury__getopt_io__OptionArgs_6 = mercury__getopt_io__HeadVar__5_5;
#line 765 "getopt_io.m"
                *mercury__getopt_io__Args_4 = mercury__getopt_io__HeadVar__3_3;
#line 765 "getopt_io.m"
                *mercury__getopt_io__STATE_VARIABLE_OptionsSet_10 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_9;
#line 761 "getopt_io.m"
              }
#line 724 "getopt_io.m"
          }
#line 721 "getopt_io.m"
      }
#line 721 "getopt_io.m"
      break;
#line 721 "getopt_io.m"
    }
#line 714 "getopt_io.m"
}

#line 647 "getopt_io.m"
static void MR_CALL 
mercury__getopt_io__handle_long_option_15_p_0(
#line 647 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_55,
#line 647 "getopt_io.m"
  MR_String mercury__getopt_io__Option_16,
#line 647 "getopt_io.m"
  MR_Box mercury__getopt_io__Flag_17,
#line 647 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionData_18,
#line 647 "getopt_io.m"
  MR_Word mercury__getopt_io__MaybeOptionArg0_19,
#line 647 "getopt_io.m"
  MR_Word mercury__getopt_io__Args0_20,
#line 647 "getopt_io.m"
  MR_Word * mercury__getopt_io__Args_21,
#line 647 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionOps_22,
#line 647 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionArgs0_23,
#line 647 "getopt_io.m"
  MR_Word * mercury__getopt_io__OptionArgs_24,
#line 647 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionTable0_25,
#line 647 "getopt_io.m"
  MR_Word * mercury__getopt_io__Result_26,
#line 647 "getopt_io.m"
  MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_40,
#line 647 "getopt_io.m"
  MR_Word * mercury__getopt_io__STATE_VARIABLE_OptionsSet_41)
#line 647 "getopt_io.m"
{
#line 657 "getopt_io.m"
  {
#line 657 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 657 "getopt_io.m"
    MR_Word mercury__getopt_io__MaybeOptionArg_31;
#line 657 "getopt_io.m"
    MR_Word mercury__getopt_io__Args1_32;
#line 657 "getopt_io.m"
    MR_Word mercury__getopt_io__MissingArg_33;
#line 657 "getopt_io.m"
    MR_Word mercury__getopt_io__OptionArgs1_34;
#line 659 "getopt_io.m"
    MR_Word mercury__getopt_io__V_56_56;

#line 1079 "getopt_io.m"
    if ((mercury__getopt_io__OptionData_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1086 "getopt_io.m"
      mercury__getopt_io__V_56_56 = (MR_Integer) 0;
#line 1079 "getopt_io.m"
    else
#line 1079 "getopt_io.m"
      if ((mercury__getopt_io__OptionData_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 1090 "getopt_io.m"
        mercury__getopt_io__V_56_56 = (MR_Integer) 1;
#line 1079 "getopt_io.m"
      else
#line 1079 "getopt_io.m"
        if ((mercury__getopt_io__OptionData_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1087 "getopt_io.m"
          mercury__getopt_io__V_56_56 = (MR_Integer) 1;
#line 1079 "getopt_io.m"
        else
#line 1079 "getopt_io.m"
          if ((mercury__getopt_io__OptionData_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1089 "getopt_io.m"
            mercury__getopt_io__V_56_56 = (MR_Integer) 1;
#line 1079 "getopt_io.m"
          else
#line 1079 "getopt_io.m"
            if ((mercury__getopt_io__OptionData_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1085 "getopt_io.m"
              mercury__getopt_io__V_56_56 = (MR_Integer) 0;
#line 1079 "getopt_io.m"
            else
#line 1079 "getopt_io.m"
              if ((mercury__getopt_io__OptionData_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1088 "getopt_io.m"
                mercury__getopt_io__V_56_56 = (MR_Integer) 1;
#line 1079 "getopt_io.m"
              else
#line 1079 "getopt_io.m"
                if (((MR_tag((MR_Word) mercury__getopt_io__OptionData_18)) == (MR_mktag((MR_Integer) 1))))
#line 1079 "getopt_io.m"
                  mercury__getopt_io__V_56_56 = (MR_Integer) 0;
#line 1079 "getopt_io.m"
                else
#line 1079 "getopt_io.m"
                  if (((MR_tag((MR_Word) mercury__getopt_io__OptionData_18)) == (MR_mktag((MR_Integer) 2))))
#line 1080 "getopt_io.m"
                    mercury__getopt_io__V_56_56 = (MR_Integer) 1;
#line 1079 "getopt_io.m"
                  else
#line 1079 "getopt_io.m"
                    if (((((MR_tag((MR_Word) mercury__getopt_io__OptionData_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__OptionData_18, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1084 "getopt_io.m"
                      mercury__getopt_io__V_56_56 = (MR_Integer) 1;
#line 1079 "getopt_io.m"
                    else
#line 1079 "getopt_io.m"
                      if (((((MR_tag((MR_Word) mercury__getopt_io__OptionData_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__OptionData_18, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1082 "getopt_io.m"
                        mercury__getopt_io__V_56_56 = (MR_Integer) 1;
#line 1079 "getopt_io.m"
                      else
#line 1079 "getopt_io.m"
                        if (((((MR_tag((MR_Word) mercury__getopt_io__OptionData_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__OptionData_18, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1083 "getopt_io.m"
                          mercury__getopt_io__V_56_56 = (MR_Integer) 1;
#line 1079 "getopt_io.m"
                        else
#line 1081 "getopt_io.m"
                          mercury__getopt_io__V_56_56 = (MR_Integer) 1;
#line 659 "getopt_io.m"
    mercury__getopt_io__succeeded = ((MR_Integer) 1 == mercury__getopt_io__V_56_56);
#line 659 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 660 "getopt_io.m"
      mercury__getopt_io__succeeded = (mercury__getopt_io__MaybeOptionArg0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 675 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 668 "getopt_io.m"
      if ((mercury__getopt_io__Args0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 669 "getopt_io.m"
        {
#line 670 "getopt_io.m"
          mercury__getopt_io__MaybeOptionArg_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 671 "getopt_io.m"
          mercury__getopt_io__Args1_32 = mercury__getopt_io__Args0_20;
#line 672 "getopt_io.m"
          mercury__getopt_io__OptionArgs1_34 = mercury__getopt_io__OptionArgs0_23;
#line 673 "getopt_io.m"
          mercury__getopt_io__MissingArg_33 = (MR_Integer) 1;
#line 669 "getopt_io.m"
        }
#line 668 "getopt_io.m"
      else
#line 663 "getopt_io.m"
        {
#line 663 "getopt_io.m"
          MR_String mercury__getopt_io__Arg_29 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__Args0_20, (MR_Integer) 0)));

#line 663 "getopt_io.m"
          mercury__getopt_io__Args1_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__Args0_20, (MR_Integer) 1)));
#line 664 "getopt_io.m"
          {
#line 664 "getopt_io.m"
            mercury__getopt_io__MaybeOptionArg_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 664 "getopt_io.m"
            MR_hl_field(MR_mktag(1), mercury__getopt_io__MaybeOptionArg_31, 0) = ((MR_Box) (mercury__getopt_io__Arg_29));
#line 664 "getopt_io.m"
          }
#line 666 "getopt_io.m"
          mercury__getopt_io__MissingArg_33 = (MR_Integer) 0;
#line 667 "getopt_io.m"
          {
#line 667 "getopt_io.m"
            mercury__getopt_io__OptionArgs1_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "getopt_io.m"
            MR_hl_field(MR_mktag(1), mercury__getopt_io__OptionArgs1_34, 0) = ((MR_Box) (mercury__getopt_io__Arg_29));
#line 667 "getopt_io.m"
            MR_hl_field(MR_mktag(1), mercury__getopt_io__OptionArgs1_34, 1) = ((MR_Box) (mercury__getopt_io__OptionArgs0_23));
#line 667 "getopt_io.m"
          }
#line 663 "getopt_io.m"
        }
#line 675 "getopt_io.m"
    else
#line 676 "getopt_io.m"
      {
#line 676 "getopt_io.m"
        mercury__getopt_io__MaybeOptionArg_31 = mercury__getopt_io__MaybeOptionArg0_19;
#line 677 "getopt_io.m"
        mercury__getopt_io__Args1_32 = mercury__getopt_io__Args0_20;
#line 678 "getopt_io.m"
        mercury__getopt_io__OptionArgs1_34 = mercury__getopt_io__OptionArgs0_23;
#line 679 "getopt_io.m"
        mercury__getopt_io__MissingArg_33 = (MR_Integer) 0;
#line 676 "getopt_io.m"
      }
#line 687 "getopt_io.m"
    if ((mercury__getopt_io__MissingArg_33 == (MR_Integer) 0))
#line 697 "getopt_io.m"
      {
#line 697 "getopt_io.m"
        MR_String mercury__getopt_io__ArgVal_36;
#line 690 "getopt_io.m"
        MR_Word mercury__getopt_io__V_57_57;

#line 1079 "getopt_io.m"
        if ((mercury__getopt_io__OptionData_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1086 "getopt_io.m"
          mercury__getopt_io__V_57_57 = (MR_Integer) 0;
#line 1079 "getopt_io.m"
        else
#line 1079 "getopt_io.m"
          if ((mercury__getopt_io__OptionData_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 1090 "getopt_io.m"
            mercury__getopt_io__V_57_57 = (MR_Integer) 1;
#line 1079 "getopt_io.m"
          else
#line 1079 "getopt_io.m"
            if ((mercury__getopt_io__OptionData_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1087 "getopt_io.m"
              mercury__getopt_io__V_57_57 = (MR_Integer) 1;
#line 1079 "getopt_io.m"
            else
#line 1079 "getopt_io.m"
              if ((mercury__getopt_io__OptionData_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1089 "getopt_io.m"
                mercury__getopt_io__V_57_57 = (MR_Integer) 1;
#line 1079 "getopt_io.m"
              else
#line 1079 "getopt_io.m"
                if ((mercury__getopt_io__OptionData_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1085 "getopt_io.m"
                  mercury__getopt_io__V_57_57 = (MR_Integer) 0;
#line 1079 "getopt_io.m"
                else
#line 1079 "getopt_io.m"
                  if ((mercury__getopt_io__OptionData_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1088 "getopt_io.m"
                    mercury__getopt_io__V_57_57 = (MR_Integer) 1;
#line 1079 "getopt_io.m"
                  else
#line 1079 "getopt_io.m"
                    if (((MR_tag((MR_Word) mercury__getopt_io__OptionData_18)) == (MR_mktag((MR_Integer) 1))))
#line 1079 "getopt_io.m"
                      mercury__getopt_io__V_57_57 = (MR_Integer) 0;
#line 1079 "getopt_io.m"
                    else
#line 1079 "getopt_io.m"
                      if (((MR_tag((MR_Word) mercury__getopt_io__OptionData_18)) == (MR_mktag((MR_Integer) 2))))
#line 1080 "getopt_io.m"
                        mercury__getopt_io__V_57_57 = (MR_Integer) 1;
#line 1079 "getopt_io.m"
                      else
#line 1079 "getopt_io.m"
                        if (((((MR_tag((MR_Word) mercury__getopt_io__OptionData_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__OptionData_18, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1084 "getopt_io.m"
                          mercury__getopt_io__V_57_57 = (MR_Integer) 1;
#line 1079 "getopt_io.m"
                        else
#line 1079 "getopt_io.m"
                          if (((((MR_tag((MR_Word) mercury__getopt_io__OptionData_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__OptionData_18, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1082 "getopt_io.m"
                            mercury__getopt_io__V_57_57 = (MR_Integer) 1;
#line 1079 "getopt_io.m"
                          else
#line 1079 "getopt_io.m"
                            if (((((MR_tag((MR_Word) mercury__getopt_io__OptionData_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__OptionData_18, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1083 "getopt_io.m"
                              mercury__getopt_io__V_57_57 = (MR_Integer) 1;
#line 1079 "getopt_io.m"
                            else
#line 1081 "getopt_io.m"
                              mercury__getopt_io__V_57_57 = (MR_Integer) 1;
#line 690 "getopt_io.m"
        mercury__getopt_io__succeeded = ((MR_Integer) 0 == mercury__getopt_io__V_57_57);
#line 690 "getopt_io.m"
        if (mercury__getopt_io__succeeded)
#line 690 "getopt_io.m"
          {
#line 691 "getopt_io.m"
            mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__MaybeOptionArg_31)) == (MR_mktag((MR_Integer) 1)));
#line 691 "getopt_io.m"
            if (mercury__getopt_io__succeeded)
#line 691 "getopt_io.m"
              mercury__getopt_io__ArgVal_36 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__MaybeOptionArg_31, (MR_Integer) 0)));
#line 690 "getopt_io.m"
          }
#line 697 "getopt_io.m"
        if (mercury__getopt_io__succeeded)
#line 693 "getopt_io.m"
          {
#line 693 "getopt_io.m"
            MR_Word mercury__getopt_io__V_46_46;
#line 693 "getopt_io.m"
            MR_Word mercury__getopt_io__Error_52;

#line 693 "getopt_io.m"
            *mercury__getopt_io__Args_21 = mercury__getopt_io__Args0_20;
#line 694 "getopt_io.m"
            *mercury__getopt_io__OptionArgs_24 = mercury__getopt_io__OptionArgs1_34;
#line 695 "getopt_io.m"
            {
#line 695 "getopt_io.m"
              mercury__getopt_io__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 695 "getopt_io.m"
              MR_hl_field(MR_mktag(1), mercury__getopt_io__V_46_46, 0) = ((MR_Box) (mercury__getopt_io__ArgVal_36));
#line 695 "getopt_io.m"
            }
#line 695 "getopt_io.m"
            {
#line 695 "getopt_io.m"
              mercury__getopt_io__Error_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 695 "getopt_io.m"
              MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_52, 0) = mercury__getopt_io__Flag_17;
#line 695 "getopt_io.m"
              MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_52, 1) = ((MR_Box) (mercury__getopt_io__Option_16));
#line 695 "getopt_io.m"
              MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_52, 2) = ((MR_Box) (mercury__getopt_io__V_46_46));
#line 695 "getopt_io.m"
            }
#line 696 "getopt_io.m"
            {
#line 696 "getopt_io.m"
              MR_Word base;
#line 696 "getopt_io.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 696 "getopt_io.m"
              *mercury__getopt_io__Result_26 = base;
#line 696 "getopt_io.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_52));
#line 696 "getopt_io.m"
            }
#line 696 "getopt_io.m"
            *mercury__getopt_io__STATE_VARIABLE_OptionsSet_41 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_40;
#line 693 "getopt_io.m"
          }
#line 697 "getopt_io.m"
        else
#line 699 "getopt_io.m"
          {
#line 699 "getopt_io.m"
            MR_Word mercury__getopt_io__Result1_37;
#line 699 "getopt_io.m"
            MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_47_47;

#line 698 "getopt_io.m"
            {
#line 698 "getopt_io.m"
              mercury__getopt_io__process_option_11_p_0(mercury__getopt_io__TypeInfo_for_OptionType_55, mercury__getopt_io__OptionData_18, mercury__getopt_io__Option_16, mercury__getopt_io__Flag_17, mercury__getopt_io__MaybeOptionArg_31, mercury__getopt_io__OptionOps_22, mercury__getopt_io__OptionTable0_25, &mercury__getopt_io__Result1_37, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_40, &mercury__getopt_io__STATE_VARIABLE_OptionsSet_47_47);
            }
#line 705 "getopt_io.m"
            if (((MR_tag((MR_Word) mercury__getopt_io__Result1_37)) == (MR_mktag((MR_Integer) 1))))
#line 706 "getopt_io.m"
              {
#line 707 "getopt_io.m"
                *mercury__getopt_io__Result_26 = mercury__getopt_io__Result1_37;
#line 708 "getopt_io.m"
                *mercury__getopt_io__OptionArgs_24 = mercury__getopt_io__OptionArgs1_34;
#line 709 "getopt_io.m"
                *mercury__getopt_io__Args_21 = mercury__getopt_io__Args1_32;
#line 709 "getopt_io.m"
                *mercury__getopt_io__STATE_VARIABLE_OptionsSet_41 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_47_47;
#line 706 "getopt_io.m"
              }
#line 705 "getopt_io.m"
            else
#line 701 "getopt_io.m"
              {
#line 701 "getopt_io.m"
                MR_Word mercury__getopt_io__OptionTable1_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__Result1_37, (MR_Integer) 0)));

#line 702 "getopt_io.m"
                {
#line 702 "getopt_io.m"
                  mercury__getopt_io__process_arguments_11_p_0(mercury__getopt_io__TypeInfo_for_OptionType_55, mercury__getopt_io__Args1_32, mercury__getopt_io__Args_21, mercury__getopt_io__OptionOps_22, mercury__getopt_io__OptionArgs1_34, mercury__getopt_io__OptionArgs_24, mercury__getopt_io__OptionTable1_38, mercury__getopt_io__Result_26, mercury__getopt_io__STATE_VARIABLE_OptionsSet_47_47, mercury__getopt_io__STATE_VARIABLE_OptionsSet_41);
#line 702 "getopt_io.m"
                  return;
                }
#line 701 "getopt_io.m"
              }
#line 699 "getopt_io.m"
          }
#line 697 "getopt_io.m"
      }
#line 687 "getopt_io.m"
    else
#line 682 "getopt_io.m"
      {
#line 682 "getopt_io.m"
        MR_Word mercury__getopt_io__Error_35;
#line 682 "getopt_io.m"
        MR_Word mercury__getopt_io__V_51_51;

#line 683 "getopt_io.m"
        *mercury__getopt_io__Args_21 = mercury__getopt_io__Args0_20;
#line 684 "getopt_io.m"
        *mercury__getopt_io__OptionArgs_24 = mercury__getopt_io__OptionArgs1_34;
#line 685 "getopt_io.m"
        mercury__getopt_io__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 685 "getopt_io.m"
        {
#line 685 "getopt_io.m"
          mercury__getopt_io__Error_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 685 "getopt_io.m"
          MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_35, 0) = mercury__getopt_io__Flag_17;
#line 685 "getopt_io.m"
          MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_35, 1) = ((MR_Box) (mercury__getopt_io__Option_16));
#line 685 "getopt_io.m"
          MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_35, 2) = ((MR_Box) (mercury__getopt_io__V_51_51));
#line 685 "getopt_io.m"
        }
#line 686 "getopt_io.m"
        {
#line 686 "getopt_io.m"
          MR_Word base;
#line 686 "getopt_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 686 "getopt_io.m"
          *mercury__getopt_io__Result_26 = base;
#line 686 "getopt_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_35));
#line 686 "getopt_io.m"
        }
#line 686 "getopt_io.m"
        *mercury__getopt_io__STATE_VARIABLE_OptionsSet_41 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_40;
#line 682 "getopt_io.m"
      }
#line 657 "getopt_io.m"
  }
#line 647 "getopt_io.m"
}

#line 521 "getopt_io.m"
void MR_CALL 
mercury__getopt_io__process_arguments_11_p_0(
#line 521 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_152,
#line 521 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__1_1,
#line 521 "getopt_io.m"
  MR_Word * mercury__getopt_io__HeadVar__2_2,
#line 521 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionOps_3,
#line 521 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__4_4,
#line 521 "getopt_io.m"
  MR_Word * mercury__getopt_io__OptionArgs_5,
#line 521 "getopt_io.m"
  MR_Word mercury__getopt_io__HeadVar__6_6,
#line 521 "getopt_io.m"
  MR_Word * mercury__getopt_io__HeadVar__7_7,
#line 521 "getopt_io.m"
  MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8,
#line 521 "getopt_io.m"
  MR_Word * mercury__getopt_io__STATE_VARIABLE_OptionsSet_9)
#line 521 "getopt_io.m"
{
#line 527 "getopt_io.m"
  while (MR_TRUE)
#line 527 "getopt_io.m"
    {
#line 527 "getopt_io.m"
      /* tailcall optimized into a loop */
#line 527 "getopt_io.m"
      {
#line 527 "getopt_io.m"
        MR_bool mercury__getopt_io__succeeded;

#line 527 "getopt_io.m"
        if ((mercury__getopt_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 527 "getopt_io.m"
          {
#line 527 "getopt_io.m"
            *mercury__getopt_io__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 527 "getopt_io.m"
            *mercury__getopt_io__OptionArgs_5 = mercury__getopt_io__HeadVar__4_4;
#line 528 "getopt_io.m"
            {
#line 528 "getopt_io.m"
              MR_Word base;
#line 528 "getopt_io.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 528 "getopt_io.m"
              *mercury__getopt_io__HeadVar__7_7 = base;
#line 528 "getopt_io.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__HeadVar__6_6));
#line 528 "getopt_io.m"
            }
#line 528 "getopt_io.m"
            *mercury__getopt_io__STATE_VARIABLE_OptionsSet_9 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8;
#line 527 "getopt_io.m"
          }
#line 527 "getopt_io.m"
        else
#line 530 "getopt_io.m"
          {
#line 530 "getopt_io.m"
            MR_String mercury__getopt_io__Option_21 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 0)));
#line 530 "getopt_io.m"
            MR_Word mercury__getopt_io__Args0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__HeadVar__1_1, (MR_Integer) 1)));

#line 531 "getopt_io.m"
            mercury__getopt_io__succeeded = (strcmp(mercury__getopt_io__Option_21, (MR_String) "--") == 0);
#line 535 "getopt_io.m"
            if (mercury__getopt_io__succeeded)
#line 532 "getopt_io.m"
              {
#line 532 "getopt_io.m"
                *mercury__getopt_io__OptionArgs_5 = mercury__getopt_io__HeadVar__4_4;
#line 533 "getopt_io.m"
                *mercury__getopt_io__HeadVar__2_2 = mercury__getopt_io__Args0_22;
#line 534 "getopt_io.m"
                {
#line 534 "getopt_io.m"
                  MR_Word base;
#line 534 "getopt_io.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 534 "getopt_io.m"
                  *mercury__getopt_io__HeadVar__7_7 = base;
#line 534 "getopt_io.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__HeadVar__6_6));
#line 534 "getopt_io.m"
                }
#line 534 "getopt_io.m"
                *mercury__getopt_io__STATE_VARIABLE_OptionsSet_9 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8;
#line 532 "getopt_io.m"
              }
#line 535 "getopt_io.m"
            else
#line 558 "getopt_io.m"
              {
#line 558 "getopt_io.m"
                MR_String mercury__getopt_io__LongOption_31;

#line 535 "getopt_io.m"
                {
#line 535 "getopt_io.m"
                  mercury__getopt_io__succeeded = mercury__string__append_3_p_1((MR_String) "--no-", &mercury__getopt_io__LongOption_31, mercury__getopt_io__Option_21);
                }
#line 558 "getopt_io.m"
                if (mercury__getopt_io__succeeded)
#line 536 "getopt_io.m"
                  {
#line 536 "getopt_io.m"
                    MR_Word mercury__getopt_io__LongOptionPred_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_3, (MR_Integer) 1)));
#line 536 "getopt_io.m"
                    MR_Word mercury__getopt_io__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_3, (MR_Integer) 0)));
#line 536 "getopt_io.m"
                    MR_Word mercury__getopt_io__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_3, (MR_Integer) 2)));
#line 552 "getopt_io.m"
                    MR_Box mercury__getopt_io__Flag_33;
#line 537 "getopt_io.m"
                    MR_bool MR_CALL (* mercury__getopt_io__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt_io__LongOptionPred_32, (MR_Integer) 1)));

#line 537 "getopt_io.m"
                    {
#line 537 "getopt_io.m"
                      mercury__getopt_io__succeeded = mercury__getopt_io__func_0(((MR_Box) mercury__getopt_io__LongOptionPred_32), ((MR_Box) (mercury__getopt_io__LongOption_31)), &mercury__getopt_io__Flag_33);
                    }
#line 552 "getopt_io.m"
                    if (mercury__getopt_io__succeeded)
#line 538 "getopt_io.m"
                      {
#line 538 "getopt_io.m"
                        MR_String mercury__getopt_io__OptName_34;
#line 538 "getopt_io.m"
                        MR_Word mercury__getopt_io__Result1_35;
#line 538 "getopt_io.m"
                        MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_60_60;

#line 538 "getopt_io.m"
                        {
#line 538 "getopt_io.m"
                          mercury__string__append_3_p_2((MR_String) "--", mercury__getopt_io__LongOption_31, &mercury__getopt_io__OptName_34);
                        }
#line 539 "getopt_io.m"
                        {
#line 539 "getopt_io.m"
                          mercury__getopt_io__process_negated_option_7_p_0(mercury__getopt_io__TypeInfo_for_OptionType_152, mercury__getopt_io__OptName_34, mercury__getopt_io__Flag_33, mercury__getopt_io__OptionOps_3, mercury__getopt_io__HeadVar__6_6, &mercury__getopt_io__Result1_35, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt_io__STATE_VARIABLE_OptionsSet_60_60);
                        }
#line 546 "getopt_io.m"
                        if (((MR_tag((MR_Word) mercury__getopt_io__Result1_35)) == (MR_mktag((MR_Integer) 1))))
#line 547 "getopt_io.m"
                          {
#line 548 "getopt_io.m"
                            *mercury__getopt_io__HeadVar__7_7 = mercury__getopt_io__Result1_35;
#line 549 "getopt_io.m"
                            *mercury__getopt_io__OptionArgs_5 = mercury__getopt_io__HeadVar__4_4;
#line 550 "getopt_io.m"
                            *mercury__getopt_io__HeadVar__2_2 = mercury__getopt_io__Args0_22;
#line 550 "getopt_io.m"
                            *mercury__getopt_io__STATE_VARIABLE_OptionsSet_9 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_60_60;
#line 547 "getopt_io.m"
                          }
#line 546 "getopt_io.m"
                        else
#line 542 "getopt_io.m"
                          {
#line 542 "getopt_io.m"
                            MR_Word mercury__getopt_io__OptionTable1_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__Result1_35, (MR_Integer) 0)));
#line 542 "getopt_io.m"
                            MR_Word mercury__getopt_io__V_61_61;

#line 544 "getopt_io.m"
                            {
#line 544 "getopt_io.m"
                              mercury__getopt_io__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "getopt_io.m"
                              MR_hl_field(MR_mktag(1), mercury__getopt_io__V_61_61, 0) = ((MR_Box) (mercury__getopt_io__Option_21));
#line 544 "getopt_io.m"
                              MR_hl_field(MR_mktag(1), mercury__getopt_io__V_61_61, 1) = ((MR_Box) (mercury__getopt_io__HeadVar__4_4));
#line 544 "getopt_io.m"
                            }
#line 543 "getopt_io.m"
                            /* direct tailcall eliminated */
#line 543 "getopt_io.m"
                            {
#line 543 "getopt_io.m"
                              MR_Word mercury__getopt_io__HeadVar__1__tmp_copy_1 = mercury__getopt_io__Args0_22;
#line 543 "getopt_io.m"
                              MR_Word mercury__getopt_io__HeadVar__4__tmp_copy_4 = mercury__getopt_io__V_61_61;
#line 543 "getopt_io.m"
                              MR_Word mercury__getopt_io__HeadVar__6__tmp_copy_6 = mercury__getopt_io__OptionTable1_36;
#line 543 "getopt_io.m"
                              MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_0__tmp_copy_8 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_60_60;

#line 543 "getopt_io.m"
                              mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0__tmp_copy_8;
#line 543 "getopt_io.m"
                              mercury__getopt_io__HeadVar__6_6 = mercury__getopt_io__HeadVar__6__tmp_copy_6;
#line 543 "getopt_io.m"
                              mercury__getopt_io__HeadVar__4_4 = mercury__getopt_io__HeadVar__4__tmp_copy_4;
#line 543 "getopt_io.m"
                              mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__HeadVar__1__tmp_copy_1;
#line 543 "getopt_io.m"
                            }
#line 543 "getopt_io.m"
                            continue;
#line 542 "getopt_io.m"
                          }
#line 538 "getopt_io.m"
                      }
#line 552 "getopt_io.m"
                    else
#line 553 "getopt_io.m"
                      {
#line 553 "getopt_io.m"
                        MR_Word mercury__getopt_io__Error_38;

#line 553 "getopt_io.m"
                        {
#line 553 "getopt_io.m"
                          mercury__getopt_io__Error_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 553 "getopt_io.m"
                          MR_hl_field(MR_mktag(0), mercury__getopt_io__Error_38, 0) = ((MR_Box) (mercury__getopt_io__Option_21));
#line 553 "getopt_io.m"
                        }
#line 554 "getopt_io.m"
                        {
#line 554 "getopt_io.m"
                          MR_Word base;
#line 554 "getopt_io.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 554 "getopt_io.m"
                          *mercury__getopt_io__HeadVar__7_7 = base;
#line 554 "getopt_io.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_38));
#line 554 "getopt_io.m"
                        }
#line 555 "getopt_io.m"
                        *mercury__getopt_io__OptionArgs_5 = mercury__getopt_io__HeadVar__4_4;
#line 556 "getopt_io.m"
                        *mercury__getopt_io__HeadVar__2_2 = mercury__getopt_io__Args0_22;
#line 556 "getopt_io.m"
                        *mercury__getopt_io__STATE_VARIABLE_OptionsSet_9 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8;
#line 553 "getopt_io.m"
                      }
#line 536 "getopt_io.m"
                  }
#line 558 "getopt_io.m"
                else
#line 591 "getopt_io.m"
                  {
#line 591 "getopt_io.m"
                    MR_String mercury__getopt_io__LongOptionStr_39;

#line 558 "getopt_io.m"
                    {
#line 558 "getopt_io.m"
                      mercury__getopt_io__succeeded = mercury__string__append_3_p_1((MR_String) "--", &mercury__getopt_io__LongOptionStr_39, mercury__getopt_io__Option_21);
                    }
#line 591 "getopt_io.m"
                    if (mercury__getopt_io__succeeded)
#line 559 "getopt_io.m"
                      {
#line 559 "getopt_io.m"
                        MR_Word mercury__getopt_io__MaybeArg_43;
#line 559 "getopt_io.m"
                        MR_String mercury__getopt_io__OptionName_44;
#line 559 "getopt_io.m"
                        MR_String mercury__getopt_io__LongOption_99;
#line 559 "getopt_io.m"
                        MR_Word mercury__getopt_io__LongOptionPred_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_3, (MR_Integer) 1)));
#line 559 "getopt_io.m"
                        MR_Word mercury__getopt_io__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_3, (MR_Integer) 0)));
#line 559 "getopt_io.m"
                        MR_Word mercury__getopt_io__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_3, (MR_Integer) 2)));
#line 568 "getopt_io.m"
                        MR_Integer mercury__getopt_io__OptionLen_40;
#line 585 "getopt_io.m"
                        MR_Box mercury__getopt_io__Flag_97;
#line 573 "getopt_io.m"
                        MR_bool MR_CALL (* mercury__getopt_io__func_1)(MR_Box, MR_Box, MR_Box *);

#line 560 "getopt_io.m"
                        {
#line 560 "getopt_io.m"
                          mercury__getopt_io__succeeded = mercury__string__sub_string_search_3_p_0(mercury__getopt_io__LongOptionStr_39, (MR_String) "=", &mercury__getopt_io__OptionLen_40);
                        }
#line 568 "getopt_io.m"
                        if (mercury__getopt_io__succeeded)
#line 562 "getopt_io.m"
                          {
#line 562 "getopt_io.m"
                            MR_String mercury__getopt_io__EqualOptionArg_41;
#line 565 "getopt_io.m"
                            MR_String mercury__getopt_io__OptionArg_42;

#line 561 "getopt_io.m"
                            {
#line 561 "getopt_io.m"
                              mercury__string__split_4_p_0(mercury__getopt_io__LongOptionStr_39, mercury__getopt_io__OptionLen_40, &mercury__getopt_io__LongOption_99, &mercury__getopt_io__EqualOptionArg_41);
                            }
#line 563 "getopt_io.m"
                            {
#line 563 "getopt_io.m"
                              mercury__getopt_io__succeeded = mercury__string__first_char_3_p_2(mercury__getopt_io__EqualOptionArg_41, (MR_Char) 61, &mercury__getopt_io__OptionArg_42);
                            }
#line 565 "getopt_io.m"
                            if (mercury__getopt_io__succeeded)
#line 564 "getopt_io.m"
                              {
#line 564 "getopt_io.m"
                                mercury__getopt_io__MaybeArg_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 564 "getopt_io.m"
                                MR_hl_field(MR_mktag(1), mercury__getopt_io__MaybeArg_43, 0) = ((MR_Box) (mercury__getopt_io__OptionArg_42));
#line 564 "getopt_io.m"
                              }
#line 565 "getopt_io.m"
                            else
#line 566 "getopt_io.m"
                              {
#line 566 "getopt_io.m"
                                {
#line 566 "getopt_io.m"
                                  mercury__require__error_1_p_0((MR_String) "bad split of --longoption=arg");
#line 566 "getopt_io.m"
                                  return;
                                }
#line 566 "getopt_io.m"
                              }
#line 562 "getopt_io.m"
                          }
#line 568 "getopt_io.m"
                        else
#line 569 "getopt_io.m"
                          {
#line 569 "getopt_io.m"
                            mercury__getopt_io__LongOption_99 = mercury__getopt_io__LongOptionStr_39;
#line 570 "getopt_io.m"
                            mercury__getopt_io__MaybeArg_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 569 "getopt_io.m"
                          }
#line 572 "getopt_io.m"
                        {
#line 572 "getopt_io.m"
                          mercury__getopt_io__OptionName_44 = mercury__string__f_43_43_2_f_0((MR_String) "--", mercury__getopt_io__LongOption_99);
                        }
#line 573 "getopt_io.m"
                        mercury__getopt_io__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt_io__LongOptionPred_100, (MR_Integer) 1)));
#line 573 "getopt_io.m"
                        {
#line 573 "getopt_io.m"
                          mercury__getopt_io__succeeded = mercury__getopt_io__func_1(((MR_Box) mercury__getopt_io__LongOptionPred_100), ((MR_Box) (mercury__getopt_io__LongOption_99)), &mercury__getopt_io__Flag_97);
                        }
#line 585 "getopt_io.m"
                        if (mercury__getopt_io__succeeded)
#line 579 "getopt_io.m"
                          {
#line 579 "getopt_io.m"
                            MR_Word mercury__getopt_io__OptionData_45;
#line 574 "getopt_io.m"
                            MR_Word mercury__getopt_io__TypeCtorInfo_153_153 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 574 "getopt_io.m"
                            MR_Box mercury__getopt_io__conv2_OptionData_45;

#line 574 "getopt_io.m"
                            {
#line 574 "getopt_io.m"
                              mercury__getopt_io__succeeded = mercury__map__search_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_152, mercury__getopt_io__TypeCtorInfo_153_153, mercury__getopt_io__HeadVar__6_6, mercury__getopt_io__Flag_97, &mercury__getopt_io__conv2_OptionData_45);
                            }
#line 574 "getopt_io.m"
                            if (mercury__getopt_io__succeeded)
#line 574 "getopt_io.m"
                              {
#line 574 "getopt_io.m"
                                mercury__getopt_io__OptionData_45 = ((MR_Word) mercury__getopt_io__conv2_OptionData_45);
#line 574 "getopt_io.m"
                                mercury__getopt_io__succeeded = MR_TRUE;
#line 574 "getopt_io.m"
                              }
#line 579 "getopt_io.m"
                            if (mercury__getopt_io__succeeded)
#line 575 "getopt_io.m"
                              {
#line 575 "getopt_io.m"
                                MR_Word mercury__getopt_io__V_69_69;

#line 577 "getopt_io.m"
                                {
#line 577 "getopt_io.m"
                                  mercury__getopt_io__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 577 "getopt_io.m"
                                  MR_hl_field(MR_mktag(1), mercury__getopt_io__V_69_69, 0) = ((MR_Box) (mercury__getopt_io__Option_21));
#line 577 "getopt_io.m"
                                  MR_hl_field(MR_mktag(1), mercury__getopt_io__V_69_69, 1) = ((MR_Box) (mercury__getopt_io__HeadVar__4_4));
#line 577 "getopt_io.m"
                                }
#line 575 "getopt_io.m"
                                {
#line 575 "getopt_io.m"
                                  mercury__getopt_io__handle_long_option_15_p_0(mercury__getopt_io__TypeInfo_for_OptionType_152, mercury__getopt_io__OptionName_44, mercury__getopt_io__Flag_97, mercury__getopt_io__OptionData_45, mercury__getopt_io__MaybeArg_43, mercury__getopt_io__Args0_22, mercury__getopt_io__HeadVar__2_2, mercury__getopt_io__OptionOps_3, mercury__getopt_io__V_69_69, mercury__getopt_io__OptionArgs_5, mercury__getopt_io__HeadVar__6_6, mercury__getopt_io__HeadVar__7_7, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt_io__STATE_VARIABLE_OptionsSet_9);
#line 575 "getopt_io.m"
                                  return;
                                }
#line 575 "getopt_io.m"
                              }
#line 579 "getopt_io.m"
                            else
#line 580 "getopt_io.m"
                              {
#line 580 "getopt_io.m"
                                MR_Word mercury__getopt_io__V_72_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 580 "getopt_io.m"
                                MR_Word mercury__getopt_io__Error_94;

#line 580 "getopt_io.m"
                                {
#line 580 "getopt_io.m"
                                  mercury__getopt_io__Error_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 580 "getopt_io.m"
                                  MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_94, 0) = mercury__getopt_io__Flag_97;
#line 580 "getopt_io.m"
                                  MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_94, 1) = ((MR_Box) (mercury__getopt_io__Option_21));
#line 580 "getopt_io.m"
                                  MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_94, 2) = ((MR_Box) (mercury__getopt_io__V_72_72));
#line 580 "getopt_io.m"
                                }
#line 581 "getopt_io.m"
                                {
#line 581 "getopt_io.m"
                                  MR_Word base;
#line 581 "getopt_io.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 581 "getopt_io.m"
                                  *mercury__getopt_io__HeadVar__7_7 = base;
#line 581 "getopt_io.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_94));
#line 581 "getopt_io.m"
                                }
#line 582 "getopt_io.m"
                                *mercury__getopt_io__OptionArgs_5 = mercury__getopt_io__HeadVar__4_4;
#line 583 "getopt_io.m"
                                *mercury__getopt_io__HeadVar__2_2 = mercury__getopt_io__Args0_22;
#line 583 "getopt_io.m"
                                *mercury__getopt_io__STATE_VARIABLE_OptionsSet_9 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8;
#line 580 "getopt_io.m"
                              }
#line 579 "getopt_io.m"
                          }
#line 585 "getopt_io.m"
                        else
#line 586 "getopt_io.m"
                          {
#line 586 "getopt_io.m"
                            MR_Word mercury__getopt_io__Error_96;

#line 586 "getopt_io.m"
                            {
#line 586 "getopt_io.m"
                              mercury__getopt_io__Error_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 586 "getopt_io.m"
                              MR_hl_field(MR_mktag(0), mercury__getopt_io__Error_96, 0) = ((MR_Box) (mercury__getopt_io__OptionName_44));
#line 586 "getopt_io.m"
                            }
#line 587 "getopt_io.m"
                            {
#line 587 "getopt_io.m"
                              MR_Word base;
#line 587 "getopt_io.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 587 "getopt_io.m"
                              *mercury__getopt_io__HeadVar__7_7 = base;
#line 587 "getopt_io.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_96));
#line 587 "getopt_io.m"
                            }
#line 588 "getopt_io.m"
                            *mercury__getopt_io__OptionArgs_5 = mercury__getopt_io__HeadVar__4_4;
#line 589 "getopt_io.m"
                            *mercury__getopt_io__HeadVar__2_2 = mercury__getopt_io__Args0_22;
#line 589 "getopt_io.m"
                            *mercury__getopt_io__STATE_VARIABLE_OptionsSet_9 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8;
#line 586 "getopt_io.m"
                          }
#line 559 "getopt_io.m"
                      }
#line 591 "getopt_io.m"
                    else
#line 638 "getopt_io.m"
                      {
#line 638 "getopt_io.m"
                        MR_String mercury__getopt_io__ShortOptions_46;

#line 591 "getopt_io.m"
                        {
#line 591 "getopt_io.m"
                          mercury__getopt_io__succeeded = mercury__string__first_char_3_p_2(mercury__getopt_io__Option_21, (MR_Char) 45, &mercury__getopt_io__ShortOptions_46);
                        }
#line 591 "getopt_io.m"
                        if (mercury__getopt_io__succeeded)
#line 591 "getopt_io.m"
                          {
#line 591 "getopt_io.m"
                            mercury__getopt_io__succeeded = (strcmp(mercury__getopt_io__ShortOptions_46, (MR_String) "") == 0);
#line 591 "getopt_io.m"
                            mercury__getopt_io__succeeded = !(mercury__getopt_io__succeeded);
#line 591 "getopt_io.m"
                          }
#line 638 "getopt_io.m"
                        if (mercury__getopt_io__succeeded)
#line 592 "getopt_io.m"
                          {
#line 592 "getopt_io.m"
                            MR_Word mercury__getopt_io__ShortOptionsList_47;
#line 617 "getopt_io.m"
                            MR_Char mercury__getopt_io__SingleShortOpt_48;
#line 594 "getopt_io.m"
                            MR_Word mercury__getopt_io__V_74_74;
#line 594 "getopt_io.m"
                            MR_Char mercury__getopt_io__V_75_75;
#line 594 "getopt_io.m"
                            MR_Word mercury__getopt_io__V_76_76;

#line 592 "getopt_io.m"
                            {
#line 592 "getopt_io.m"
                              mercury__string__to_char_list_2_p_0(mercury__getopt_io__ShortOptions_46, &mercury__getopt_io__ShortOptionsList_47);
                            }
#line 594 "getopt_io.m"
                            mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__ShortOptionsList_47)) == (MR_mktag((MR_Integer) 1)));
#line 594 "getopt_io.m"
                            if (mercury__getopt_io__succeeded)
#line 594 "getopt_io.m"
                              {
#line 594 "getopt_io.m"
                                mercury__getopt_io__SingleShortOpt_48 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__ShortOptionsList_47, (MR_Integer) 0)));
#line 594 "getopt_io.m"
                                mercury__getopt_io__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__ShortOptionsList_47, (MR_Integer) 1)));
#line 594 "getopt_io.m"
                                mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__V_74_74)) == (MR_mktag((MR_Integer) 1)));
#line 594 "getopt_io.m"
                                if (mercury__getopt_io__succeeded)
#line 594 "getopt_io.m"
                                  {
#line 594 "getopt_io.m"
                                    mercury__getopt_io__V_75_75 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__V_74_74, (MR_Integer) 0)));
#line 594 "getopt_io.m"
                                    mercury__getopt_io__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__V_74_74, (MR_Integer) 1)));
#line 594 "getopt_io.m"
                                    mercury__getopt_io__succeeded = (mercury__getopt_io__V_75_75 == (MR_Char) 45);
#line 594 "getopt_io.m"
                                    if (mercury__getopt_io__succeeded)
#line 594 "getopt_io.m"
                                      mercury__getopt_io__succeeded = (mercury__getopt_io__V_76_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 594 "getopt_io.m"
                                  }
#line 594 "getopt_io.m"
                              }
#line 617 "getopt_io.m"
                            if (mercury__getopt_io__succeeded)
#line 595 "getopt_io.m"
                              {
#line 595 "getopt_io.m"
                                MR_Word mercury__getopt_io__ShortOptionPred_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_3, (MR_Integer) 0)));
#line 595 "getopt_io.m"
                                MR_Word mercury__getopt_io__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_3, (MR_Integer) 1)));
#line 595 "getopt_io.m"
                                MR_Word mercury__getopt_io__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_3, (MR_Integer) 2)));
#line 611 "getopt_io.m"
                                MR_Box mercury__getopt_io__Flag_109;
#line 596 "getopt_io.m"
                                MR_bool MR_CALL (* mercury__getopt_io__func_3)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt_io__ShortOptionPred_49, (MR_Integer) 1)));

#line 596 "getopt_io.m"
                                {
#line 596 "getopt_io.m"
                                  mercury__getopt_io__succeeded = mercury__getopt_io__func_3(((MR_Box) mercury__getopt_io__ShortOptionPred_49), ((MR_Box) (MR_Word) (mercury__getopt_io__SingleShortOpt_48)), &mercury__getopt_io__Flag_109);
                                }
#line 611 "getopt_io.m"
                                if (mercury__getopt_io__succeeded)
#line 597 "getopt_io.m"
                                  {
#line 597 "getopt_io.m"
                                    MR_Word mercury__getopt_io__V_77_77;
#line 597 "getopt_io.m"
                                    MR_Word mercury__getopt_io__V_79_79;
#line 597 "getopt_io.m"
                                    MR_Word mercury__getopt_io__V_80_80 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 597 "getopt_io.m"
                                    MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_81_81;
#line 597 "getopt_io.m"
                                    MR_String mercury__getopt_io__OptName_105;
#line 597 "getopt_io.m"
                                    MR_Word mercury__getopt_io__Result1_106;

#line 597 "getopt_io.m"
                                    {
#line 597 "getopt_io.m"
                                      mercury__getopt_io__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 597 "getopt_io.m"
                                      MR_hl_field(MR_mktag(1), mercury__getopt_io__V_79_79, 0) = ((MR_Box) (MR_Word) (mercury__getopt_io__SingleShortOpt_48));
#line 597 "getopt_io.m"
                                      MR_hl_field(MR_mktag(1), mercury__getopt_io__V_79_79, 1) = ((MR_Box) (mercury__getopt_io__V_80_80));
#line 597 "getopt_io.m"
                                    }
#line 597 "getopt_io.m"
                                    {
#line 597 "getopt_io.m"
                                      mercury__getopt_io__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 597 "getopt_io.m"
                                      MR_hl_field(MR_mktag(1), mercury__getopt_io__V_77_77, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
#line 597 "getopt_io.m"
                                      MR_hl_field(MR_mktag(1), mercury__getopt_io__V_77_77, 1) = ((MR_Box) (mercury__getopt_io__V_79_79));
#line 597 "getopt_io.m"
                                    }
#line 597 "getopt_io.m"
                                    {
#line 597 "getopt_io.m"
                                      mercury__string__from_char_list_2_p_0(mercury__getopt_io__V_77_77, &mercury__getopt_io__OptName_105);
                                    }
#line 598 "getopt_io.m"
                                    {
#line 598 "getopt_io.m"
                                      mercury__getopt_io__process_negated_option_7_p_0(mercury__getopt_io__TypeInfo_for_OptionType_152, mercury__getopt_io__OptName_105, mercury__getopt_io__Flag_109, mercury__getopt_io__OptionOps_3, mercury__getopt_io__HeadVar__6_6, &mercury__getopt_io__Result1_106, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt_io__STATE_VARIABLE_OptionsSet_81_81);
                                    }
#line 605 "getopt_io.m"
                                    if (((MR_tag((MR_Word) mercury__getopt_io__Result1_106)) == (MR_mktag((MR_Integer) 1))))
#line 606 "getopt_io.m"
                                      {
#line 607 "getopt_io.m"
                                        *mercury__getopt_io__HeadVar__7_7 = mercury__getopt_io__Result1_106;
#line 608 "getopt_io.m"
                                        *mercury__getopt_io__OptionArgs_5 = mercury__getopt_io__HeadVar__4_4;
#line 609 "getopt_io.m"
                                        *mercury__getopt_io__HeadVar__2_2 = mercury__getopt_io__Args0_22;
#line 609 "getopt_io.m"
                                        *mercury__getopt_io__STATE_VARIABLE_OptionsSet_9 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_81_81;
#line 606 "getopt_io.m"
                                      }
#line 605 "getopt_io.m"
                                    else
#line 601 "getopt_io.m"
                                      {
#line 601 "getopt_io.m"
                                        MR_Word mercury__getopt_io__V_82_82;
#line 601 "getopt_io.m"
                                        MR_Word mercury__getopt_io__OptionTable1_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__Result1_106, (MR_Integer) 0)));

#line 603 "getopt_io.m"
                                        {
#line 603 "getopt_io.m"
                                          mercury__getopt_io__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 603 "getopt_io.m"
                                          MR_hl_field(MR_mktag(1), mercury__getopt_io__V_82_82, 0) = ((MR_Box) (mercury__getopt_io__Option_21));
#line 603 "getopt_io.m"
                                          MR_hl_field(MR_mktag(1), mercury__getopt_io__V_82_82, 1) = ((MR_Box) (mercury__getopt_io__HeadVar__4_4));
#line 603 "getopt_io.m"
                                        }
#line 602 "getopt_io.m"
                                        /* direct tailcall eliminated */
#line 602 "getopt_io.m"
                                        {
#line 602 "getopt_io.m"
                                          MR_Word mercury__getopt_io__HeadVar__1__tmp_copy_1 = mercury__getopt_io__Args0_22;
#line 602 "getopt_io.m"
                                          MR_Word mercury__getopt_io__HeadVar__4__tmp_copy_4 = mercury__getopt_io__V_82_82;
#line 602 "getopt_io.m"
                                          MR_Word mercury__getopt_io__HeadVar__6__tmp_copy_6 = mercury__getopt_io__OptionTable1_103;
#line 602 "getopt_io.m"
                                          MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_0__tmp_copy_8 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_81_81;

#line 602 "getopt_io.m"
                                          mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0__tmp_copy_8;
#line 602 "getopt_io.m"
                                          mercury__getopt_io__HeadVar__6_6 = mercury__getopt_io__HeadVar__6__tmp_copy_6;
#line 602 "getopt_io.m"
                                          mercury__getopt_io__HeadVar__4_4 = mercury__getopt_io__HeadVar__4__tmp_copy_4;
#line 602 "getopt_io.m"
                                          mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__HeadVar__1__tmp_copy_1;
#line 602 "getopt_io.m"
                                        }
#line 602 "getopt_io.m"
                                        continue;
#line 601 "getopt_io.m"
                                      }
#line 597 "getopt_io.m"
                                  }
#line 611 "getopt_io.m"
                                else
#line 612 "getopt_io.m"
                                  {
#line 612 "getopt_io.m"
                                    MR_String mercury__getopt_io__V_85_85;
#line 612 "getopt_io.m"
                                    MR_Word mercury__getopt_io__Error_108;

#line 612 "getopt_io.m"
                                    {
#line 612 "getopt_io.m"
                                      mercury__getopt_io__V_85_85 = mercury__string__f_43_43_2_f_0((MR_String) "-", mercury__getopt_io__ShortOptions_46);
                                    }
#line 612 "getopt_io.m"
                                    {
#line 612 "getopt_io.m"
                                      mercury__getopt_io__Error_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 612 "getopt_io.m"
                                      MR_hl_field(MR_mktag(0), mercury__getopt_io__Error_108, 0) = ((MR_Box) (mercury__getopt_io__V_85_85));
#line 612 "getopt_io.m"
                                    }
#line 613 "getopt_io.m"
                                    {
#line 613 "getopt_io.m"
                                      MR_Word base;
#line 613 "getopt_io.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 613 "getopt_io.m"
                                      *mercury__getopt_io__HeadVar__7_7 = base;
#line 613 "getopt_io.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Error_108));
#line 613 "getopt_io.m"
                                    }
#line 614 "getopt_io.m"
                                    *mercury__getopt_io__OptionArgs_5 = mercury__getopt_io__HeadVar__4_4;
#line 615 "getopt_io.m"
                                    *mercury__getopt_io__HeadVar__2_2 = mercury__getopt_io__Args0_22;
#line 615 "getopt_io.m"
                                    *mercury__getopt_io__STATE_VARIABLE_OptionsSet_9 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8;
#line 612 "getopt_io.m"
                                  }
#line 595 "getopt_io.m"
                              }
#line 617 "getopt_io.m"
                            else
#line 625 "getopt_io.m"
                              {
#line 625 "getopt_io.m"
                                MR_Word mercury__getopt_io__Args1_51;
#line 625 "getopt_io.m"
                                MR_Word mercury__getopt_io__OptionArgs1_52;
#line 625 "getopt_io.m"
                                MR_Word mercury__getopt_io__V_87_87;
#line 625 "getopt_io.m"
                                MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_88_88;
#line 625 "getopt_io.m"
                                MR_Word mercury__getopt_io__Result1_121;

#line 624 "getopt_io.m"
                                {
#line 624 "getopt_io.m"
                                  mercury__getopt_io__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 624 "getopt_io.m"
                                  MR_hl_field(MR_mktag(1), mercury__getopt_io__V_87_87, 0) = ((MR_Box) (mercury__getopt_io__Option_21));
#line 624 "getopt_io.m"
                                  MR_hl_field(MR_mktag(1), mercury__getopt_io__V_87_87, 1) = ((MR_Box) (mercury__getopt_io__HeadVar__4_4));
#line 624 "getopt_io.m"
                                }
#line 623 "getopt_io.m"
                                {
#line 623 "getopt_io.m"
                                  mercury__getopt_io__handle_short_options_12_p_0(mercury__getopt_io__TypeInfo_for_OptionType_152, mercury__getopt_io__ShortOptionsList_47, mercury__getopt_io__OptionOps_3, mercury__getopt_io__Args0_22, &mercury__getopt_io__Args1_51, mercury__getopt_io__V_87_87, &mercury__getopt_io__OptionArgs1_52, mercury__getopt_io__HeadVar__6_6, &mercury__getopt_io__Result1_121, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt_io__STATE_VARIABLE_OptionsSet_88_88);
                                }
#line 631 "getopt_io.m"
                                if (((MR_tag((MR_Word) mercury__getopt_io__Result1_121)) == (MR_mktag((MR_Integer) 1))))
#line 632 "getopt_io.m"
                                  {
#line 633 "getopt_io.m"
                                    *mercury__getopt_io__HeadVar__7_7 = mercury__getopt_io__Result1_121;
#line 634 "getopt_io.m"
                                    *mercury__getopt_io__OptionArgs_5 = mercury__getopt_io__OptionArgs1_52;
#line 635 "getopt_io.m"
                                    *mercury__getopt_io__HeadVar__2_2 = mercury__getopt_io__Args0_22;
#line 635 "getopt_io.m"
                                    *mercury__getopt_io__STATE_VARIABLE_OptionsSet_9 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_88_88;
#line 632 "getopt_io.m"
                                  }
#line 631 "getopt_io.m"
                                else
#line 627 "getopt_io.m"
                                  {
#line 627 "getopt_io.m"
                                    MR_Word mercury__getopt_io__OptionTable1_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__Result1_121, (MR_Integer) 0)));

#line 628 "getopt_io.m"
                                    /* direct tailcall eliminated */
#line 628 "getopt_io.m"
                                    {
#line 628 "getopt_io.m"
                                      MR_Word mercury__getopt_io__HeadVar__1__tmp_copy_1 = mercury__getopt_io__Args1_51;
#line 628 "getopt_io.m"
                                      MR_Word mercury__getopt_io__HeadVar__4__tmp_copy_4 = mercury__getopt_io__OptionArgs1_52;
#line 628 "getopt_io.m"
                                      MR_Word mercury__getopt_io__HeadVar__6__tmp_copy_6 = mercury__getopt_io__OptionTable1_119;
#line 628 "getopt_io.m"
                                      MR_Word mercury__getopt_io__STATE_VARIABLE_OptionsSet_0__tmp_copy_8 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_88_88;

#line 628 "getopt_io.m"
                                      mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8 = mercury__getopt_io__STATE_VARIABLE_OptionsSet_0__tmp_copy_8;
#line 628 "getopt_io.m"
                                      mercury__getopt_io__HeadVar__6_6 = mercury__getopt_io__HeadVar__6__tmp_copy_6;
#line 628 "getopt_io.m"
                                      mercury__getopt_io__HeadVar__4_4 = mercury__getopt_io__HeadVar__4__tmp_copy_4;
#line 628 "getopt_io.m"
                                      mercury__getopt_io__HeadVar__1_1 = mercury__getopt_io__HeadVar__1__tmp_copy_1;
#line 628 "getopt_io.m"
                                    }
#line 628 "getopt_io.m"
                                    continue;
#line 627 "getopt_io.m"
                                  }
#line 625 "getopt_io.m"
                              }
#line 592 "getopt_io.m"
                          }
#line 638 "getopt_io.m"
                        else
#line 643 "getopt_io.m"
                          {
#line 643 "getopt_io.m"
                            MR_Word mercury__getopt_io__Args1_133;

#line 642 "getopt_io.m"
                            {
#line 642 "getopt_io.m"
                              mercury__getopt_io__process_arguments_11_p_0(mercury__getopt_io__TypeInfo_for_OptionType_152, mercury__getopt_io__Args0_22, &mercury__getopt_io__Args1_133, mercury__getopt_io__OptionOps_3, mercury__getopt_io__HeadVar__4_4, mercury__getopt_io__OptionArgs_5, mercury__getopt_io__HeadVar__6_6, mercury__getopt_io__HeadVar__7_7, mercury__getopt_io__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt_io__STATE_VARIABLE_OptionsSet_9);
                            }
#line 644 "getopt_io.m"
                            {
#line 644 "getopt_io.m"
                              MR_Word base;
#line 644 "getopt_io.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "getopt_io.m"
                              *mercury__getopt_io__HeadVar__2_2 = base;
#line 644 "getopt_io.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Option_21));
#line 644 "getopt_io.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__getopt_io__Args1_133));
#line 644 "getopt_io.m"
                            }
#line 643 "getopt_io.m"
                          }
#line 638 "getopt_io.m"
                      }
#line 591 "getopt_io.m"
                  }
#line 558 "getopt_io.m"
              }
#line 530 "getopt_io.m"
          }
#line 527 "getopt_io.m"
      }
#line 527 "getopt_io.m"
      break;
#line 527 "getopt_io.m"
    }
#line 521 "getopt_io.m"
}

#line 381 "getopt_io.m"
MR_Word MR_CALL 
mercury__getopt_io__lookup_accumulating_option_2_f_0(
#line 381 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_Option_7,
#line 381 "getopt_io.m"
  MR_Word mercury__getopt_io__OT_4,
#line 381 "getopt_io.m"
  MR_Box mercury__getopt_io__Opt_5)
#line 381 "getopt_io.m"
{
#line 1213 "getopt_io.m"
  {
#line 1213 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 1213 "getopt_io.m"
    MR_Word mercury__getopt_io__Ss_6;
#line 1213 "getopt_io.m"
    MR_Word mercury__getopt_io__Val0_11;
#line 1211 "getopt_io.m"
    MR_Word mercury__getopt_io__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 1211 "getopt_io.m"
    MR_Word mercury__getopt_io__V_12_12;
#line 1211 "getopt_io.m"
    MR_Box mercury__getopt_io__conv0_V_12_12;

#line 1211 "getopt_io.m"
    {
#line 1211 "getopt_io.m"
      mercury__map__lookup_3_p_0(mercury__getopt_io__TypeInfo_for_Option_7, mercury__getopt_io__TypeCtorInfo_11_14, mercury__getopt_io__OT_4, mercury__getopt_io__Opt_5, &mercury__getopt_io__conv0_V_12_12);
    }
#line 1211 "getopt_io.m"
    mercury__getopt_io__V_12_12 = ((MR_Word) mercury__getopt_io__conv0_V_12_12);
#line 1211 "getopt_io.m"
    mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__V_12_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__V_12_12, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1211 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 1211 "getopt_io.m"
      {
#line 1211 "getopt_io.m"
        mercury__getopt_io__Val0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__V_12_12, (MR_Integer) 1)));
#line 1212 "getopt_io.m"
        mercury__getopt_io__Ss_6 = mercury__getopt_io__Val0_11;
#line 1211 "getopt_io.m"
      }
#line 1211 "getopt_io.m"
    else
#line 1214 "getopt_io.m"
      {
#line 1214 "getopt_io.m"
        {
#line 1214 "getopt_io.m"
          mercury__require__error_1_p_0((MR_String) "Expected accumulating option and didn\'t get one.");
        }
#line 1214 "getopt_io.m"
      }
#line 1213 "getopt_io.m"
    return mercury__getopt_io__Ss_6;
#line 1213 "getopt_io.m"
  }
#line 381 "getopt_io.m"
}

#line 379 "getopt_io.m"
void MR_CALL 
mercury__getopt_io__lookup_accumulating_option_3_p_0(
#line 379 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_Option_10,
#line 379 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionTable_4,
#line 379 "getopt_io.m"
  MR_Box mercury__getopt_io__Opt_5,
#line 379 "getopt_io.m"
  MR_Word * mercury__getopt_io__Val_6)
#line 379 "getopt_io.m"
{
#line 1213 "getopt_io.m"
  {
#line 1213 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 1213 "getopt_io.m"
    MR_Word mercury__getopt_io__Val0_7;
#line 1211 "getopt_io.m"
    MR_Word mercury__getopt_io__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 1211 "getopt_io.m"
    MR_Word mercury__getopt_io__V_8_8;
#line 1211 "getopt_io.m"
    MR_Box mercury__getopt_io__conv0_V_8_8;

#line 1211 "getopt_io.m"
    {
#line 1211 "getopt_io.m"
      mercury__map__lookup_3_p_0(mercury__getopt_io__TypeInfo_for_Option_10, mercury__getopt_io__TypeCtorInfo_11_11, mercury__getopt_io__OptionTable_4, mercury__getopt_io__Opt_5, &mercury__getopt_io__conv0_V_8_8);
    }
#line 1211 "getopt_io.m"
    mercury__getopt_io__V_8_8 = ((MR_Word) mercury__getopt_io__conv0_V_8_8);
#line 1211 "getopt_io.m"
    mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__V_8_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__V_8_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1211 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 1211 "getopt_io.m"
      {
#line 1211 "getopt_io.m"
        mercury__getopt_io__Val0_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__V_8_8, (MR_Integer) 1)));
#line 1212 "getopt_io.m"
        *mercury__getopt_io__Val_6 = mercury__getopt_io__Val0_7;
#line 1211 "getopt_io.m"
      }
#line 1211 "getopt_io.m"
    else
#line 1214 "getopt_io.m"
      {
#line 1214 "getopt_io.m"
        {
#line 1214 "getopt_io.m"
          mercury__require__error_1_p_0((MR_String) "Expected accumulating option and didn\'t get one.");
#line 1214 "getopt_io.m"
          return;
        }
#line 1214 "getopt_io.m"
      }
#line 1213 "getopt_io.m"
  }
#line 379 "getopt_io.m"
}

#line 376 "getopt_io.m"
MR_Word MR_CALL 
mercury__getopt_io__lookup_maybe_string_option_2_f_0(
#line 376 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_Option_7,
#line 376 "getopt_io.m"
  MR_Word mercury__getopt_io__OT_4,
#line 376 "getopt_io.m"
  MR_Box mercury__getopt_io__Opt_5)
#line 376 "getopt_io.m"
{
#line 1203 "getopt_io.m"
  {
#line 1203 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 1203 "getopt_io.m"
    MR_Word mercury__getopt_io__MS_6;
#line 1203 "getopt_io.m"
    MR_Word mercury__getopt_io__Val0_11;
#line 1201 "getopt_io.m"
    MR_Word mercury__getopt_io__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 1201 "getopt_io.m"
    MR_Word mercury__getopt_io__V_12_12;
#line 1201 "getopt_io.m"
    MR_Box mercury__getopt_io__conv0_V_12_12;

#line 1201 "getopt_io.m"
    {
#line 1201 "getopt_io.m"
      mercury__map__lookup_3_p_0(mercury__getopt_io__TypeInfo_for_Option_7, mercury__getopt_io__TypeCtorInfo_11_14, mercury__getopt_io__OT_4, mercury__getopt_io__Opt_5, &mercury__getopt_io__conv0_V_12_12);
    }
#line 1201 "getopt_io.m"
    mercury__getopt_io__V_12_12 = ((MR_Word) mercury__getopt_io__conv0_V_12_12);
#line 1201 "getopt_io.m"
    mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__V_12_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__V_12_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1201 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 1201 "getopt_io.m"
      {
#line 1201 "getopt_io.m"
        mercury__getopt_io__Val0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__V_12_12, (MR_Integer) 1)));
#line 1202 "getopt_io.m"
        mercury__getopt_io__MS_6 = mercury__getopt_io__Val0_11;
#line 1201 "getopt_io.m"
      }
#line 1201 "getopt_io.m"
    else
#line 1204 "getopt_io.m"
      {
#line 1204 "getopt_io.m"
        {
#line 1204 "getopt_io.m"
          mercury__require__error_1_p_0((MR_String) "Expected maybe_string option and didn\'t get one.");
        }
#line 1204 "getopt_io.m"
      }
#line 1203 "getopt_io.m"
    return mercury__getopt_io__MS_6;
#line 1203 "getopt_io.m"
  }
#line 376 "getopt_io.m"
}

#line 374 "getopt_io.m"
void MR_CALL 
mercury__getopt_io__lookup_maybe_string_option_3_p_0(
#line 374 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_Option_10,
#line 374 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionTable_4,
#line 374 "getopt_io.m"
  MR_Box mercury__getopt_io__Opt_5,
#line 374 "getopt_io.m"
  MR_Word * mercury__getopt_io__Val_6)
#line 374 "getopt_io.m"
{
#line 1203 "getopt_io.m"
  {
#line 1203 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 1203 "getopt_io.m"
    MR_Word mercury__getopt_io__Val0_7;
#line 1201 "getopt_io.m"
    MR_Word mercury__getopt_io__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 1201 "getopt_io.m"
    MR_Word mercury__getopt_io__V_8_8;
#line 1201 "getopt_io.m"
    MR_Box mercury__getopt_io__conv0_V_8_8;

#line 1201 "getopt_io.m"
    {
#line 1201 "getopt_io.m"
      mercury__map__lookup_3_p_0(mercury__getopt_io__TypeInfo_for_Option_10, mercury__getopt_io__TypeCtorInfo_11_11, mercury__getopt_io__OptionTable_4, mercury__getopt_io__Opt_5, &mercury__getopt_io__conv0_V_8_8);
    }
#line 1201 "getopt_io.m"
    mercury__getopt_io__V_8_8 = ((MR_Word) mercury__getopt_io__conv0_V_8_8);
#line 1201 "getopt_io.m"
    mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__V_8_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__V_8_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1201 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 1201 "getopt_io.m"
      {
#line 1201 "getopt_io.m"
        mercury__getopt_io__Val0_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__V_8_8, (MR_Integer) 1)));
#line 1202 "getopt_io.m"
        *mercury__getopt_io__Val_6 = mercury__getopt_io__Val0_7;
#line 1201 "getopt_io.m"
      }
#line 1201 "getopt_io.m"
    else
#line 1204 "getopt_io.m"
      {
#line 1204 "getopt_io.m"
        {
#line 1204 "getopt_io.m"
          mercury__require__error_1_p_0((MR_String) "Expected maybe_string option and didn\'t get one.");
#line 1204 "getopt_io.m"
          return;
        }
#line 1204 "getopt_io.m"
      }
#line 1203 "getopt_io.m"
  }
#line 374 "getopt_io.m"
}

#line 371 "getopt_io.m"
MR_Word MR_CALL 
mercury__getopt_io__lookup_maybe_int_option_2_f_0(
#line 371 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_Option_7,
#line 371 "getopt_io.m"
  MR_Word mercury__getopt_io__OT_4,
#line 371 "getopt_io.m"
  MR_Box mercury__getopt_io__Opt_5)
#line 371 "getopt_io.m"
{
#line 1193 "getopt_io.m"
  {
#line 1193 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 1193 "getopt_io.m"
    MR_Word mercury__getopt_io__MN_6;
#line 1193 "getopt_io.m"
    MR_Word mercury__getopt_io__Val0_11;
#line 1191 "getopt_io.m"
    MR_Word mercury__getopt_io__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 1191 "getopt_io.m"
    MR_Word mercury__getopt_io__V_12_12;
#line 1191 "getopt_io.m"
    MR_Box mercury__getopt_io__conv0_V_12_12;

#line 1191 "getopt_io.m"
    {
#line 1191 "getopt_io.m"
      mercury__map__lookup_3_p_0(mercury__getopt_io__TypeInfo_for_Option_7, mercury__getopt_io__TypeCtorInfo_11_14, mercury__getopt_io__OT_4, mercury__getopt_io__Opt_5, &mercury__getopt_io__conv0_V_12_12);
    }
#line 1191 "getopt_io.m"
    mercury__getopt_io__V_12_12 = ((MR_Word) mercury__getopt_io__conv0_V_12_12);
#line 1191 "getopt_io.m"
    mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__V_12_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__V_12_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1191 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 1191 "getopt_io.m"
      {
#line 1191 "getopt_io.m"
        mercury__getopt_io__Val0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__V_12_12, (MR_Integer) 1)));
#line 1192 "getopt_io.m"
        mercury__getopt_io__MN_6 = mercury__getopt_io__Val0_11;
#line 1191 "getopt_io.m"
      }
#line 1191 "getopt_io.m"
    else
#line 1194 "getopt_io.m"
      {
#line 1194 "getopt_io.m"
        {
#line 1194 "getopt_io.m"
          mercury__require__error_1_p_0((MR_String) "Expected maybe_int option and didn\'t get one.");
        }
#line 1194 "getopt_io.m"
      }
#line 1193 "getopt_io.m"
    return mercury__getopt_io__MN_6;
#line 1193 "getopt_io.m"
  }
#line 371 "getopt_io.m"
}

#line 369 "getopt_io.m"
void MR_CALL 
mercury__getopt_io__lookup_maybe_int_option_3_p_0(
#line 369 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_Option_10,
#line 369 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionTable_4,
#line 369 "getopt_io.m"
  MR_Box mercury__getopt_io__Opt_5,
#line 369 "getopt_io.m"
  MR_Word * mercury__getopt_io__Val_6)
#line 369 "getopt_io.m"
{
#line 1193 "getopt_io.m"
  {
#line 1193 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 1193 "getopt_io.m"
    MR_Word mercury__getopt_io__Val0_7;
#line 1191 "getopt_io.m"
    MR_Word mercury__getopt_io__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 1191 "getopt_io.m"
    MR_Word mercury__getopt_io__V_8_8;
#line 1191 "getopt_io.m"
    MR_Box mercury__getopt_io__conv0_V_8_8;

#line 1191 "getopt_io.m"
    {
#line 1191 "getopt_io.m"
      mercury__map__lookup_3_p_0(mercury__getopt_io__TypeInfo_for_Option_10, mercury__getopt_io__TypeCtorInfo_11_11, mercury__getopt_io__OptionTable_4, mercury__getopt_io__Opt_5, &mercury__getopt_io__conv0_V_8_8);
    }
#line 1191 "getopt_io.m"
    mercury__getopt_io__V_8_8 = ((MR_Word) mercury__getopt_io__conv0_V_8_8);
#line 1191 "getopt_io.m"
    mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__V_8_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__V_8_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1191 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 1191 "getopt_io.m"
      {
#line 1191 "getopt_io.m"
        mercury__getopt_io__Val0_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__V_8_8, (MR_Integer) 1)));
#line 1192 "getopt_io.m"
        *mercury__getopt_io__Val_6 = mercury__getopt_io__Val0_7;
#line 1191 "getopt_io.m"
      }
#line 1191 "getopt_io.m"
    else
#line 1194 "getopt_io.m"
      {
#line 1194 "getopt_io.m"
        {
#line 1194 "getopt_io.m"
          mercury__require__error_1_p_0((MR_String) "Expected maybe_int option and didn\'t get one.");
#line 1194 "getopt_io.m"
          return;
        }
#line 1194 "getopt_io.m"
      }
#line 1193 "getopt_io.m"
  }
#line 369 "getopt_io.m"
}

#line 367 "getopt_io.m"
MR_String MR_CALL 
mercury__getopt_io__lookup_string_option_2_f_0(
#line 367 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_Option_7,
#line 367 "getopt_io.m"
  MR_Word mercury__getopt_io__OT_4,
#line 367 "getopt_io.m"
  MR_Box mercury__getopt_io__Opt_5)
#line 367 "getopt_io.m"
{
#line 1183 "getopt_io.m"
  {
#line 1183 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 1183 "getopt_io.m"
    MR_String mercury__getopt_io__S_6;
#line 1183 "getopt_io.m"
    MR_String mercury__getopt_io__Val0_11;
#line 1181 "getopt_io.m"
    MR_Word mercury__getopt_io__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 1181 "getopt_io.m"
    MR_Word mercury__getopt_io__V_12_12;
#line 1181 "getopt_io.m"
    MR_Box mercury__getopt_io__conv0_V_12_12;

#line 1181 "getopt_io.m"
    {
#line 1181 "getopt_io.m"
      mercury__map__lookup_3_p_0(mercury__getopt_io__TypeInfo_for_Option_7, mercury__getopt_io__TypeCtorInfo_11_14, mercury__getopt_io__OT_4, mercury__getopt_io__Opt_5, &mercury__getopt_io__conv0_V_12_12);
    }
#line 1181 "getopt_io.m"
    mercury__getopt_io__V_12_12 = ((MR_Word) mercury__getopt_io__conv0_V_12_12);
#line 1181 "getopt_io.m"
    mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__V_12_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__V_12_12, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1181 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 1181 "getopt_io.m"
      {
#line 1181 "getopt_io.m"
        mercury__getopt_io__Val0_11 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__V_12_12, (MR_Integer) 1)));
#line 1182 "getopt_io.m"
        mercury__getopt_io__S_6 = mercury__getopt_io__Val0_11;
#line 1181 "getopt_io.m"
      }
#line 1181 "getopt_io.m"
    else
#line 1184 "getopt_io.m"
      {
#line 1184 "getopt_io.m"
        {
#line 1184 "getopt_io.m"
          mercury__require__error_1_p_0((MR_String) "Expected string option and didn\'t get one.");
        }
#line 1184 "getopt_io.m"
      }
#line 1183 "getopt_io.m"
    return mercury__getopt_io__S_6;
#line 1183 "getopt_io.m"
  }
#line 367 "getopt_io.m"
}

#line 365 "getopt_io.m"
void MR_CALL 
mercury__getopt_io__lookup_string_option_3_p_0(
#line 365 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_Option_10,
#line 365 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionTable_4,
#line 365 "getopt_io.m"
  MR_Box mercury__getopt_io__Opt_5,
#line 365 "getopt_io.m"
  MR_String * mercury__getopt_io__Val_6)
#line 365 "getopt_io.m"
{
#line 1183 "getopt_io.m"
  {
#line 1183 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 1183 "getopt_io.m"
    MR_String mercury__getopt_io__Val0_7;
#line 1181 "getopt_io.m"
    MR_Word mercury__getopt_io__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 1181 "getopt_io.m"
    MR_Word mercury__getopt_io__V_8_8;
#line 1181 "getopt_io.m"
    MR_Box mercury__getopt_io__conv0_V_8_8;

#line 1181 "getopt_io.m"
    {
#line 1181 "getopt_io.m"
      mercury__map__lookup_3_p_0(mercury__getopt_io__TypeInfo_for_Option_10, mercury__getopt_io__TypeCtorInfo_11_11, mercury__getopt_io__OptionTable_4, mercury__getopt_io__Opt_5, &mercury__getopt_io__conv0_V_8_8);
    }
#line 1181 "getopt_io.m"
    mercury__getopt_io__V_8_8 = ((MR_Word) mercury__getopt_io__conv0_V_8_8);
#line 1181 "getopt_io.m"
    mercury__getopt_io__succeeded = ((((MR_tag((MR_Word) mercury__getopt_io__V_8_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__V_8_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1181 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 1181 "getopt_io.m"
      {
#line 1181 "getopt_io.m"
        mercury__getopt_io__Val0_7 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__V_8_8, (MR_Integer) 1)));
#line 1182 "getopt_io.m"
        *mercury__getopt_io__Val_6 = mercury__getopt_io__Val0_7;
#line 1181 "getopt_io.m"
      }
#line 1181 "getopt_io.m"
    else
#line 1184 "getopt_io.m"
      {
#line 1184 "getopt_io.m"
        {
#line 1184 "getopt_io.m"
          mercury__require__error_1_p_0((MR_String) "Expected string option and didn\'t get one.");
#line 1184 "getopt_io.m"
          return;
        }
#line 1184 "getopt_io.m"
      }
#line 1183 "getopt_io.m"
  }
#line 365 "getopt_io.m"
}

#line 363 "getopt_io.m"
MR_Integer MR_CALL 
mercury__getopt_io__lookup_int_option_2_f_0(
#line 363 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_Option_7,
#line 363 "getopt_io.m"
  MR_Word mercury__getopt_io__OT_4,
#line 363 "getopt_io.m"
  MR_Box mercury__getopt_io__Opt_5)
#line 363 "getopt_io.m"
{
#line 1173 "getopt_io.m"
  {
#line 1173 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 1173 "getopt_io.m"
    MR_Integer mercury__getopt_io__N_6;
#line 1173 "getopt_io.m"
    MR_Integer mercury__getopt_io__Val0_11;
#line 1171 "getopt_io.m"
    MR_Word mercury__getopt_io__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 1171 "getopt_io.m"
    MR_Word mercury__getopt_io__V_12_12;
#line 1171 "getopt_io.m"
    MR_Box mercury__getopt_io__conv0_V_12_12;

#line 1171 "getopt_io.m"
    {
#line 1171 "getopt_io.m"
      mercury__map__lookup_3_p_0(mercury__getopt_io__TypeInfo_for_Option_7, mercury__getopt_io__TypeCtorInfo_11_14, mercury__getopt_io__OT_4, mercury__getopt_io__Opt_5, &mercury__getopt_io__conv0_V_12_12);
    }
#line 1171 "getopt_io.m"
    mercury__getopt_io__V_12_12 = ((MR_Word) mercury__getopt_io__conv0_V_12_12);
#line 1171 "getopt_io.m"
    mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__V_12_12)) == (MR_mktag((MR_Integer) 2)));
#line 1171 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 1171 "getopt_io.m"
      {
#line 1171 "getopt_io.m"
        mercury__getopt_io__Val0_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt_io__V_12_12, (MR_Integer) 0)));
#line 1172 "getopt_io.m"
        mercury__getopt_io__N_6 = mercury__getopt_io__Val0_11;
#line 1171 "getopt_io.m"
      }
#line 1171 "getopt_io.m"
    else
#line 1174 "getopt_io.m"
      {
#line 1174 "getopt_io.m"
        {
#line 1174 "getopt_io.m"
          mercury__require__error_1_p_0((MR_String) "Expected int option and didn\'t get one.");
        }
#line 1174 "getopt_io.m"
      }
#line 1173 "getopt_io.m"
    return mercury__getopt_io__N_6;
#line 1173 "getopt_io.m"
  }
#line 363 "getopt_io.m"
}

#line 361 "getopt_io.m"
void MR_CALL 
mercury__getopt_io__lookup_int_option_3_p_0(
#line 361 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_Option_10,
#line 361 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionTable_4,
#line 361 "getopt_io.m"
  MR_Box mercury__getopt_io__Opt_5,
#line 361 "getopt_io.m"
  MR_Integer * mercury__getopt_io__Val_6)
#line 361 "getopt_io.m"
{
#line 1173 "getopt_io.m"
  {
#line 1173 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 1173 "getopt_io.m"
    MR_Integer mercury__getopt_io__Val0_7;
#line 1171 "getopt_io.m"
    MR_Word mercury__getopt_io__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 1171 "getopt_io.m"
    MR_Word mercury__getopt_io__V_8_8;
#line 1171 "getopt_io.m"
    MR_Box mercury__getopt_io__conv0_V_8_8;

#line 1171 "getopt_io.m"
    {
#line 1171 "getopt_io.m"
      mercury__map__lookup_3_p_0(mercury__getopt_io__TypeInfo_for_Option_10, mercury__getopt_io__TypeCtorInfo_11_11, mercury__getopt_io__OptionTable_4, mercury__getopt_io__Opt_5, &mercury__getopt_io__conv0_V_8_8);
    }
#line 1171 "getopt_io.m"
    mercury__getopt_io__V_8_8 = ((MR_Word) mercury__getopt_io__conv0_V_8_8);
#line 1171 "getopt_io.m"
    mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__V_8_8)) == (MR_mktag((MR_Integer) 2)));
#line 1171 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 1171 "getopt_io.m"
      {
#line 1171 "getopt_io.m"
        mercury__getopt_io__Val0_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt_io__V_8_8, (MR_Integer) 0)));
#line 1172 "getopt_io.m"
        *mercury__getopt_io__Val_6 = mercury__getopt_io__Val0_7;
#line 1171 "getopt_io.m"
      }
#line 1171 "getopt_io.m"
    else
#line 1174 "getopt_io.m"
      {
#line 1174 "getopt_io.m"
        {
#line 1174 "getopt_io.m"
          mercury__require__error_1_p_0((MR_String) "Expected int option and didn\'t get one.");
#line 1174 "getopt_io.m"
          return;
        }
#line 1174 "getopt_io.m"
      }
#line 1173 "getopt_io.m"
  }
#line 361 "getopt_io.m"
}

#line 359 "getopt_io.m"
MR_Word MR_CALL 
mercury__getopt_io__lookup_bool_option_2_f_0(
#line 359 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_Option_7,
#line 359 "getopt_io.m"
  MR_Word mercury__getopt_io__OT_4,
#line 359 "getopt_io.m"
  MR_Box mercury__getopt_io__Opt_5)
#line 359 "getopt_io.m"
{
#line 1163 "getopt_io.m"
  {
#line 1163 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 1163 "getopt_io.m"
    MR_Word mercury__getopt_io__B_6;
#line 1163 "getopt_io.m"
    MR_Word mercury__getopt_io__Val0_11;
#line 1161 "getopt_io.m"
    MR_Word mercury__getopt_io__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 1161 "getopt_io.m"
    MR_Word mercury__getopt_io__V_12_12;
#line 1161 "getopt_io.m"
    MR_Box mercury__getopt_io__conv0_V_12_12;

#line 1161 "getopt_io.m"
    {
#line 1161 "getopt_io.m"
      mercury__map__lookup_3_p_0(mercury__getopt_io__TypeInfo_for_Option_7, mercury__getopt_io__TypeCtorInfo_11_14, mercury__getopt_io__OT_4, mercury__getopt_io__Opt_5, &mercury__getopt_io__conv0_V_12_12);
    }
#line 1161 "getopt_io.m"
    mercury__getopt_io__V_12_12 = ((MR_Word) mercury__getopt_io__conv0_V_12_12);
#line 1161 "getopt_io.m"
    mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 1161 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 1161 "getopt_io.m"
      {
#line 1161 "getopt_io.m"
        mercury__getopt_io__Val0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__V_12_12, (MR_Integer) 0)));
#line 1162 "getopt_io.m"
        mercury__getopt_io__B_6 = mercury__getopt_io__Val0_11;
#line 1161 "getopt_io.m"
      }
#line 1161 "getopt_io.m"
    else
#line 1164 "getopt_io.m"
      {
#line 1164 "getopt_io.m"
        {
#line 1164 "getopt_io.m"
          mercury__require__error_1_p_0((MR_String) "Expected bool option and didn\'t get one.");
        }
#line 1164 "getopt_io.m"
      }
#line 1163 "getopt_io.m"
    return mercury__getopt_io__B_6;
#line 1163 "getopt_io.m"
  }
#line 359 "getopt_io.m"
}

#line 357 "getopt_io.m"
void MR_CALL 
mercury__getopt_io__lookup_bool_option_3_p_0(
#line 357 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_Option_10,
#line 357 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionTable_4,
#line 357 "getopt_io.m"
  MR_Box mercury__getopt_io__Opt_5,
#line 357 "getopt_io.m"
  MR_Word * mercury__getopt_io__Val_6)
#line 357 "getopt_io.m"
{
#line 1163 "getopt_io.m"
  {
#line 1163 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 1163 "getopt_io.m"
    MR_Word mercury__getopt_io__Val0_7;
#line 1161 "getopt_io.m"
    MR_Word mercury__getopt_io__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 1161 "getopt_io.m"
    MR_Word mercury__getopt_io__V_8_8;
#line 1161 "getopt_io.m"
    MR_Box mercury__getopt_io__conv0_V_8_8;

#line 1161 "getopt_io.m"
    {
#line 1161 "getopt_io.m"
      mercury__map__lookup_3_p_0(mercury__getopt_io__TypeInfo_for_Option_10, mercury__getopt_io__TypeCtorInfo_11_11, mercury__getopt_io__OptionTable_4, mercury__getopt_io__Opt_5, &mercury__getopt_io__conv0_V_8_8);
    }
#line 1161 "getopt_io.m"
    mercury__getopt_io__V_8_8 = ((MR_Word) mercury__getopt_io__conv0_V_8_8);
#line 1161 "getopt_io.m"
    mercury__getopt_io__succeeded = ((MR_tag((MR_Word) mercury__getopt_io__V_8_8)) == (MR_mktag((MR_Integer) 1)));
#line 1161 "getopt_io.m"
    if (mercury__getopt_io__succeeded)
#line 1161 "getopt_io.m"
      {
#line 1161 "getopt_io.m"
        mercury__getopt_io__Val0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__V_8_8, (MR_Integer) 0)));
#line 1162 "getopt_io.m"
        *mercury__getopt_io__Val_6 = mercury__getopt_io__Val0_7;
#line 1161 "getopt_io.m"
      }
#line 1161 "getopt_io.m"
    else
#line 1164 "getopt_io.m"
      {
#line 1164 "getopt_io.m"
        {
#line 1164 "getopt_io.m"
          mercury__require__error_1_p_0((MR_String) "Expected bool option and didn\'t get one.");
#line 1164 "getopt_io.m"
          return;
        }
#line 1164 "getopt_io.m"
      }
#line 1163 "getopt_io.m"
  }
#line 357 "getopt_io.m"
}

#line 351 "getopt_io.m"
MR_String MR_CALL 
mercury__getopt_io__option_error_to_string_1_f_0(
#line 351 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_70,
#line 351 "getopt_io.m"
  MR_Word mercury__getopt_io__Error_3)
#line 351 "getopt_io.m"
{
#line 1106 "getopt_io.m"
  {
#line 1106 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 1106 "getopt_io.m"
    MR_String mercury__getopt_io__String_4;

#line 1106 "getopt_io.m"
    if (((MR_tag((MR_Word) mercury__getopt_io__Error_3)) == (MR_mktag((MR_Integer) 1))))
#line 1107 "getopt_io.m"
      {
#line 1107 "getopt_io.m"
        MR_Word mercury__getopt_io__Reason_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_3, (MR_Integer) 2)));
#line 1107 "getopt_io.m"
        MR_String mercury__getopt_io__OptionName_69 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_3, (MR_Integer) 1)));
#line 1107 "getopt_io.m"
        MR_Box mercury__getopt_io__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__getopt_io__Error_3, (MR_Integer) 0));

#line 1112 "getopt_io.m"
        if ((mercury__getopt_io__Reason_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1121 "getopt_io.m"
          {
#line 1121 "getopt_io.m"
            MR_String mercury__getopt_io__V_105_105;

#line 14412 "getopt_io.c"
            {
#line 14414 "getopt_io.c"
              mercury__getopt_io__V_105_105 = mercury__string__f_43_43_2_f_0(mercury__getopt_io__OptionName_69, (MR_String) "\' -- only boolean, maybe and accumulating options can be negated");
            }
#line 14417 "getopt_io.c"
            {
#line 14419 "getopt_io.c"
              return mercury__getopt_io__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "cannot negate option \140", mercury__getopt_io__V_105_105);
            }
#line 1121 "getopt_io.m"
          }
#line 1112 "getopt_io.m"
        else
#line 1112 "getopt_io.m"
          if ((mercury__getopt_io__Reason_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1113 "getopt_io.m"
            {
#line 1113 "getopt_io.m"
              MR_String mercury__getopt_io__V_84_84;

#line 14433 "getopt_io.c"
              {
#line 14435 "getopt_io.c"
                mercury__getopt_io__V_84_84 = mercury__string__f_43_43_2_f_0(mercury__getopt_io__OptionName_69, (MR_String) "\' needs an argument");
              }
#line 14438 "getopt_io.c"
              {
#line 14440 "getopt_io.c"
                return mercury__getopt_io__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", mercury__getopt_io__V_84_84);
              }
#line 1113 "getopt_io.m"
            }
#line 1112 "getopt_io.m"
          else
#line 1112 "getopt_io.m"
            if ((mercury__getopt_io__Reason_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1126 "getopt_io.m"
              {
#line 1126 "getopt_io.m"
                MR_String mercury__getopt_io__V_93_93;

#line 14454 "getopt_io.c"
                {
#line 14456 "getopt_io.c"
                  mercury__getopt_io__V_93_93 = mercury__string__f_43_43_2_f_0(mercury__getopt_io__OptionName_69, (MR_String) "\' failed");
                }
#line 14459 "getopt_io.c"
                {
#line 14461 "getopt_io.c"
                  return mercury__getopt_io__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "the handler of option \140", mercury__getopt_io__V_93_93);
                }
#line 1126 "getopt_io.m"
              }
#line 1112 "getopt_io.m"
            else
#line 1112 "getopt_io.m"
              if ((mercury__getopt_io__Reason_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1130 "getopt_io.m"
                {
#line 1130 "getopt_io.m"
                  MR_String mercury__getopt_io__V_96_96;

#line 14475 "getopt_io.c"
                  {
#line 14477 "getopt_io.c"
                    mercury__getopt_io__V_96_96 = mercury__string__f_43_43_2_f_0(mercury__getopt_io__OptionName_69, (MR_String) "\' has no handler");
                  }
#line 14480 "getopt_io.c"
                  {
#line 14482 "getopt_io.c"
                    return mercury__getopt_io__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", mercury__getopt_io__V_96_96);
                  }
#line 1130 "getopt_io.m"
                }
#line 1112 "getopt_io.m"
              else
#line 1112 "getopt_io.m"
                if ((mercury__getopt_io__Reason_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1109 "getopt_io.m"
                  {
#line 1109 "getopt_io.m"
                    MR_String mercury__getopt_io__V_99_99;

#line 14496 "getopt_io.c"
                    {
#line 14498 "getopt_io.c"
                      mercury__getopt_io__V_99_99 = mercury__string__f_43_43_2_f_0(mercury__getopt_io__OptionName_69, (MR_String) "\'");
                    }
#line 14501 "getopt_io.c"
                    {
#line 14503 "getopt_io.c"
                      return mercury__getopt_io__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "unknown type for option \140", mercury__getopt_io__V_99_99);
                    }
#line 1109 "getopt_io.m"
                  }
#line 1112 "getopt_io.m"
                else
#line 1112 "getopt_io.m"
                  if (((MR_tag((MR_Word) mercury__getopt_io__Reason_7)) == (MR_mktag((MR_Integer) 1))))
#line 1117 "getopt_io.m"
                    {
#line 1117 "getopt_io.m"
                      MR_String mercury__getopt_io__V_72_72;

#line 14517 "getopt_io.c"
                      {
#line 14519 "getopt_io.c"
                        mercury__getopt_io__V_72_72 = mercury__string__f_43_43_2_f_0(mercury__getopt_io__OptionName_69, (MR_String) "\' does not allow an argument");
                      }
#line 14522 "getopt_io.c"
                      {
#line 14524 "getopt_io.c"
                        return mercury__getopt_io__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", mercury__getopt_io__V_72_72);
                      }
#line 1117 "getopt_io.m"
                    }
#line 1112 "getopt_io.m"
                  else
#line 1112 "getopt_io.m"
                    if (((MR_tag((MR_Word) mercury__getopt_io__Reason_7)) == (MR_mktag((MR_Integer) 2))))
#line 1134 "getopt_io.m"
                      mercury__getopt_io__String_4 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__getopt_io__Reason_7, (MR_Integer) 0)));
#line 1112 "getopt_io.m"
                    else
#line 1112 "getopt_io.m"
                      if (((((MR_tag((MR_Word) mercury__getopt_io__Reason_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1141 "getopt_io.m"
                        {
#line 1141 "getopt_io.m"
                          MR_String mercury__getopt_io__FileName_10 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_7, (MR_Integer) 1)));
#line 1141 "getopt_io.m"
                          MR_Word mercury__getopt_io__IO_Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_7, (MR_Integer) 2)));
#line 1141 "getopt_io.m"
                          MR_String mercury__getopt_io__Msg_12;
#line 1141 "getopt_io.m"
                          MR_String mercury__getopt_io__V_75_75;
#line 1141 "getopt_io.m"
                          MR_String mercury__getopt_io__V_76_76;

#line 1142 "getopt_io.m"
                          {
#line 1142 "getopt_io.m"
                            mercury__io__error_message_2_p_0(mercury__getopt_io__IO_Error_11, &mercury__getopt_io__Msg_12);
                          }
#line 14557 "getopt_io.c"
                          {
#line 14559 "getopt_io.c"
                            mercury__getopt_io__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mercury__getopt_io__Msg_12);
                          }
#line 14562 "getopt_io.c"
                          {
#line 14564 "getopt_io.c"
                            mercury__getopt_io__V_76_76 = mercury__string__f_43_43_2_f_0(mercury__getopt_io__FileName_10, mercury__getopt_io__V_75_75);
                          }
#line 14567 "getopt_io.c"
                          {
#line 14569 "getopt_io.c"
                            return mercury__getopt_io__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "cannot open ", mercury__getopt_io__V_76_76);
                          }
#line 1141 "getopt_io.m"
                        }
#line 1112 "getopt_io.m"
                      else
#line 1112 "getopt_io.m"
                        if (((((MR_tag((MR_Word) mercury__getopt_io__Reason_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1145 "getopt_io.m"
                          {
#line 1145 "getopt_io.m"
                            MR_String mercury__getopt_io__FileName_65 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_7, (MR_Integer) 1)));
#line 1145 "getopt_io.m"
                            MR_Word mercury__getopt_io__IO_Error_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_7, (MR_Integer) 2)));
#line 1145 "getopt_io.m"
                            MR_String mercury__getopt_io__Msg_67;
#line 1145 "getopt_io.m"
                            MR_String mercury__getopt_io__V_79_79;
#line 1145 "getopt_io.m"
                            MR_String mercury__getopt_io__V_80_80;

#line 1146 "getopt_io.m"
                            {
#line 1146 "getopt_io.m"
                              mercury__io__error_message_2_p_0(mercury__getopt_io__IO_Error_66, &mercury__getopt_io__Msg_67);
                            }
#line 14596 "getopt_io.c"
                            {
#line 14598 "getopt_io.c"
                              mercury__getopt_io__V_79_79 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mercury__getopt_io__Msg_67);
                            }
#line 14601 "getopt_io.c"
                            {
#line 14603 "getopt_io.c"
                              mercury__getopt_io__V_80_80 = mercury__string__f_43_43_2_f_0(mercury__getopt_io__FileName_65, mercury__getopt_io__V_79_79);
                            }
#line 14606 "getopt_io.c"
                            {
#line 14608 "getopt_io.c"
                              return mercury__getopt_io__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "cannot read ", mercury__getopt_io__V_80_80);
                            }
#line 1145 "getopt_io.m"
                          }
#line 1112 "getopt_io.m"
                        else
#line 1112 "getopt_io.m"
                          if (((((MR_tag((MR_Word) mercury__getopt_io__Reason_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1149 "getopt_io.m"
                            {
#line 1149 "getopt_io.m"
                              MR_String mercury__getopt_io__FileName_68 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_7, (MR_Integer) 1)));

#line 14622 "getopt_io.c"
                              {
#line 14624 "getopt_io.c"
                                return mercury__getopt_io__String_4 = mercury__string__f_43_43_2_f_0(mercury__getopt_io__FileName_68, (MR_String) " contains non-option arguments");
                              }
#line 1149 "getopt_io.m"
                            }
#line 1112 "getopt_io.m"
                          else
#line 1136 "getopt_io.m"
                            {
#line 1136 "getopt_io.m"
                              MR_String mercury__getopt_io__Arg_9 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt_io__Reason_7, (MR_Integer) 1)));
#line 1136 "getopt_io.m"
                              MR_String mercury__getopt_io__V_87_87;
#line 1136 "getopt_io.m"
                              MR_String mercury__getopt_io__V_89_89;
#line 1136 "getopt_io.m"
                              MR_String mercury__getopt_io__V_90_90;

#line 14642 "getopt_io.c"
                              {
#line 14644 "getopt_io.c"
                                mercury__getopt_io__V_87_87 = mercury__string__f_43_43_2_f_0(mercury__getopt_io__Arg_9, (MR_String) "\' is not numeric");
                              }
#line 14647 "getopt_io.c"
                              {
#line 14649 "getopt_io.c"
                                mercury__getopt_io__V_89_89 = mercury__string__f_43_43_2_f_0((MR_String) "\' requires a numeric argument; \140", mercury__getopt_io__V_87_87);
                              }
#line 14652 "getopt_io.c"
                              {
#line 14654 "getopt_io.c"
                                mercury__getopt_io__V_90_90 = mercury__string__f_43_43_2_f_0(mercury__getopt_io__OptionName_69, mercury__getopt_io__V_89_89);
                              }
#line 14657 "getopt_io.c"
                              {
#line 14659 "getopt_io.c"
                                return mercury__getopt_io__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", mercury__getopt_io__V_90_90);
                              }
#line 1136 "getopt_io.m"
                            }
#line 1107 "getopt_io.m"
      }
#line 1106 "getopt_io.m"
    else
#line 1104 "getopt_io.m"
      {
#line 1104 "getopt_io.m"
        MR_String mercury__getopt_io__OptionName_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__getopt_io__Error_3, (MR_Integer) 0)));
#line 1104 "getopt_io.m"
        MR_String mercury__getopt_io__V_102_102;

#line 14675 "getopt_io.c"
        {
#line 14677 "getopt_io.c"
          mercury__getopt_io__V_102_102 = mercury__string__f_43_43_2_f_0(mercury__getopt_io__OptionName_5, (MR_String) "\'");
        }
#line 14680 "getopt_io.c"
        {
#line 14682 "getopt_io.c"
          return mercury__getopt_io__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "unrecognized option \140", mercury__getopt_io__V_102_102);
        }
#line 1104 "getopt_io.m"
      }
#line 1106 "getopt_io.m"
    return mercury__getopt_io__String_4;
#line 1106 "getopt_io.m"
  }
#line 351 "getopt_io.m"
}

#line 69 "solutions.opt"
static void MR_CALL 
mercury__getopt_io__init_option_table_multi_2_p_0_3(
#line 69 "solutions.opt"
  MR_Box mercury__getopt_io__closure_arg,
#line 69 "solutions.opt"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 69 "solutions.opt"
  MR_Box mercury__getopt_io__wrapper_arg_2,
#line 69 "solutions.opt"
  MR_Box * mercury__getopt_io__wrapper_arg_3)
#line 69 "solutions.opt"
{
#line 69 "solutions.opt"
  {
#line 69 "solutions.opt"
    MR_Box mercury__getopt_io__closure = mercury__getopt_io__closure_arg;
#line 69 "solutions.opt"
    MR_Word mercury__getopt_io__conv1_HeadVar__3_3;

#line 69 "solutions.opt"
    {
#line 69 "solutions.opt"
      mercury__list__cons_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__closure, (MR_Integer) 3))), mercury__getopt_io__wrapper_arg_1, ((MR_Word) mercury__getopt_io__wrapper_arg_2), &mercury__getopt_io__conv1_HeadVar__3_3);
    }
#line 69 "solutions.opt"
    *mercury__getopt_io__wrapper_arg_3 = ((MR_Box) (mercury__getopt_io__conv1_HeadVar__3_3));
#line 69 "solutions.opt"
  }
#line 69 "solutions.opt"
}

#line 443 "getopt_io.m"
static void MR_CALL 
mercury__getopt_io__init_option_table_multi_2_p_0_1(
#line 443 "getopt_io.m"
  void * mercury__getopt_io__env_ptr_arg)
#line 443 "getopt_io.m"
{
#line 443 "getopt_io.m"
  {
#line 443 "getopt_io.m"
    struct mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0_s * mercury__getopt_io__env_ptr = (struct mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0_s *) mercury__getopt_io__env_ptr_arg;

#line 443 "getopt_io.m"
    *((mercury__getopt_io__env_ptr)->mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((mercury__getopt_io__env_ptr)->mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0__conv0_HeadVar__3_10));
#line 443 "getopt_io.m"
    {
#line 443 "getopt_io.m"
      ((mercury__getopt_io__env_ptr)->mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0__cont)((mercury__getopt_io__env_ptr)->mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0__cont_env_ptr);
#line 443 "getopt_io.m"
      return;
    }
#line 443 "getopt_io.m"
  }
#line 443 "getopt_io.m"
}

#line 443 "getopt_io.m"
static void MR_CALL 
mercury__getopt_io__init_option_table_multi_2_p_0_2(
#line 443 "getopt_io.m"
  MR_Box mercury__getopt_io__closure_arg,
#line 443 "getopt_io.m"
  MR_Box * mercury__getopt_io__wrapper_arg_1,
#line 443 "getopt_io.m"
  MR_Cont mercury__getopt_io__cont,
#line 443 "getopt_io.m"
  void * mercury__getopt_io__cont_env_ptr)
#line 443 "getopt_io.m"
{
#line 443 "getopt_io.m"
  {
#line 443 "getopt_io.m"
    struct mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0_s mercury__getopt_io__env;

#line 443 "getopt_io.m"
    (mercury__getopt_io__env).mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0__wrapper_arg_1 = mercury__getopt_io__wrapper_arg_1;
#line 443 "getopt_io.m"
    (mercury__getopt_io__env).mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0__cont = mercury__getopt_io__cont;
#line 443 "getopt_io.m"
    (mercury__getopt_io__env).mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0__cont_env_ptr = mercury__getopt_io__cont_env_ptr;
#line 443 "getopt_io.m"
    {
#line 443 "getopt_io.m"
      MR_Box mercury__getopt_io__closure = mercury__getopt_io__closure_arg;

#line 443 "getopt_io.m"
      {
#line 443 "getopt_io.m"
        mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__closure, (MR_Integer) 4))), &(mercury__getopt_io__env).mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0__conv0_HeadVar__3_10, mercury__getopt_io__init_option_table_multi_2_p_0_1, &mercury__getopt_io__env);
      }
#line 443 "getopt_io.m"
    }
#line 443 "getopt_io.m"
  }
#line 443 "getopt_io.m"
}

#line 178 "getopt_io.m"
void MR_CALL 
mercury__getopt_io__init_option_table_multi_2_p_0(
#line 178 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_12,
#line 178 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionDefaultsPred_3,
#line 178 "getopt_io.m"
  MR_Word * mercury__getopt_io__OptionTable_4)
#line 178 "getopt_io.m"
{
#line 442 "getopt_io.m"
  {
#line 442 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 442 "getopt_io.m"
    MR_Word mercury__getopt_io__TypeCtorInfo_13_13;
#line 442 "getopt_io.m"
    MR_Word mercury__getopt_io__TypeCtorInfo_14_14;
#line 442 "getopt_io.m"
    MR_Word mercury__getopt_io__TypeInfo_15_15;
#line 442 "getopt_io.m"
    MR_Word mercury__getopt_io__TypeCtorInfo_12_29;
#line 442 "getopt_io.m"
    MR_Word mercury__getopt_io__TypeInfo_13_30;
#line 442 "getopt_io.m"
    MR_Word mercury__getopt_io__OptionDefaultsList_8;
#line 442 "getopt_io.m"
    MR_Word mercury__getopt_io__V_9_9;
#line 442 "getopt_io.m"
    MR_Word mercury__getopt_io__UnsortedList_5_18;
#line 442 "getopt_io.m"
    MR_Word mercury__getopt_io__V_5_23;
#line 442 "getopt_io.m"
    MR_Word mercury__getopt_io__V_6_25;
#line 442 "getopt_io.m"
    MR_Integer mercury__getopt_io__V_5_35;
#line 442 "getopt_io.m"
    MR_Word mercury__getopt_io__V_5_45;
#line 71 "solutions.opt"
    MR_Box mercury__getopt_io__conv2_UnsortedList_5_18;
#line 110 "list.opt"
    MR_Word mercury__getopt_io__conv3_OptionDefaultsList_8;

#line 443 "getopt_io.m"
    {
#line 443 "getopt_io.m"
      mercury__getopt_io__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 443 "getopt_io.m"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__V_9_9, 0) = ((MR_Box) (&mercury__getopt_io_scalar_common_6[0]));
#line 443 "getopt_io.m"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__V_9_9, 1) = ((MR_Box) (mercury__getopt_io__init_option_table_multi_2_p_0_2));
#line 443 "getopt_io.m"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 443 "getopt_io.m"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__V_9_9, 3) = ((MR_Box) (mercury__getopt_io__TypeInfo_for_OptionType_12));
#line 443 "getopt_io.m"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__V_9_9, 4) = ((MR_Box) (mercury__getopt_io__OptionDefaultsPred_3));
#line 443 "getopt_io.m"
    }
#line 14853 "getopt_io.c"
    mercury__getopt_io__TypeCtorInfo_14_14 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 14855 "getopt_io.c"
    mercury__getopt_io__TypeCtorInfo_13_13 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 14857 "getopt_io.c"
    {
#line 14859 "getopt_io.c"
      mercury__getopt_io__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 14861 "getopt_io.c"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__TypeInfo_15_15, 0) = ((MR_Box) (mercury__getopt_io__TypeCtorInfo_14_14));
#line 14863 "getopt_io.c"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__TypeInfo_15_15, 1) = ((MR_Box) (mercury__getopt_io__TypeInfo_for_OptionType_12));
#line 14865 "getopt_io.c"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__TypeInfo_15_15, 2) = ((MR_Box) (mercury__getopt_io__TypeCtorInfo_13_13));
#line 14867 "getopt_io.c"
    }
#line 69 "solutions.opt"
    {
#line 69 "solutions.opt"
      mercury__getopt_io__V_5_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 69 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__V_5_23, 0) = ((MR_Box) (&mercury__getopt_io_scalar_common_7[0]));
#line 69 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__V_5_23, 1) = ((MR_Box) (mercury__getopt_io__init_option_table_multi_2_p_0_3));
#line 69 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__V_5_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 69 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__V_5_23, 3) = ((MR_Box) (mercury__getopt_io__TypeInfo_15_15));
#line 69 "solutions.opt"
    }
#line 70 "solutions.opt"
    mercury__getopt_io__V_6_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 14885 "getopt_io.c"
    mercury__getopt_io__TypeCtorInfo_12_29 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 14887 "getopt_io.c"
    {
#line 14889 "getopt_io.c"
      mercury__getopt_io__TypeInfo_13_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14891 "getopt_io.c"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__TypeInfo_13_30, 0) = ((MR_Box) (mercury__getopt_io__TypeCtorInfo_12_29));
#line 14893 "getopt_io.c"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__TypeInfo_13_30, 1) = ((MR_Box) (mercury__getopt_io__TypeInfo_15_15));
#line 14895 "getopt_io.c"
    }
#line 71 "solutions.opt"
    {
#line 71 "solutions.opt"
      mercury__solutions__builtin_aggregate_4_p_0(mercury__getopt_io__TypeInfo_15_15, mercury__getopt_io__TypeInfo_13_30, (MR_Word) mercury__getopt_io__V_9_9, (MR_Word) mercury__getopt_io__V_5_23, ((MR_Box) (mercury__getopt_io__V_6_25)), &mercury__getopt_io__conv2_UnsortedList_5_18);
    }
#line 71 "solutions.opt"
    mercury__getopt_io__UnsortedList_5_18 = ((MR_Word) mercury__getopt_io__conv2_UnsortedList_5_18);
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__getopt_io__TypeInfo_15_15, (MR_Word) mercury__getopt_io__UnsortedList_5_18, (MR_Integer) 0, &mercury__getopt_io__V_5_35);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__getopt_io__TypeInfo_15_15, mercury__getopt_io__V_5_35, (MR_Word) mercury__getopt_io__UnsortedList_5_18, &mercury__getopt_io__conv3_OptionDefaultsList_8);
    }
#line 110 "list.opt"
    mercury__getopt_io__OptionDefaultsList_8 = (MR_Word) mercury__getopt_io__conv3_OptionDefaultsList_8;
#line 90 "tree234.opt"
    mercury__getopt_io__V_5_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 91 "tree234.opt"
    {
#line 91 "tree234.opt"
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_12, mercury__getopt_io__TypeCtorInfo_13_13, mercury__getopt_io__OptionDefaultsList_8, mercury__getopt_io__V_5_45, mercury__getopt_io__OptionTable_4);
#line 91 "tree234.opt"
      return;
    }
#line 442 "getopt_io.m"
  }
#line 178 "getopt_io.m"
}

#line 69 "solutions.opt"
static void MR_CALL 
mercury__getopt_io__init_option_table_2_p_0_3(
#line 69 "solutions.opt"
  MR_Box mercury__getopt_io__closure_arg,
#line 69 "solutions.opt"
  MR_Box mercury__getopt_io__wrapper_arg_1,
#line 69 "solutions.opt"
  MR_Box mercury__getopt_io__wrapper_arg_2,
#line 69 "solutions.opt"
  MR_Box * mercury__getopt_io__wrapper_arg_3)
#line 69 "solutions.opt"
{
#line 69 "solutions.opt"
  {
#line 69 "solutions.opt"
    MR_Box mercury__getopt_io__closure = mercury__getopt_io__closure_arg;
#line 69 "solutions.opt"
    MR_Word mercury__getopt_io__conv1_HeadVar__3_3;

#line 69 "solutions.opt"
    {
#line 69 "solutions.opt"
      mercury__list__cons_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__closure, (MR_Integer) 3))), mercury__getopt_io__wrapper_arg_1, ((MR_Word) mercury__getopt_io__wrapper_arg_2), &mercury__getopt_io__conv1_HeadVar__3_3);
    }
#line 69 "solutions.opt"
    *mercury__getopt_io__wrapper_arg_3 = ((MR_Box) (mercury__getopt_io__conv1_HeadVar__3_3));
#line 69 "solutions.opt"
  }
#line 69 "solutions.opt"
}

#line 436 "getopt_io.m"
static void MR_CALL 
mercury__getopt_io__init_option_table_2_p_0_1(
#line 436 "getopt_io.m"
  void * mercury__getopt_io__env_ptr_arg)
#line 436 "getopt_io.m"
{
#line 436 "getopt_io.m"
  {
#line 436 "getopt_io.m"
    struct mercury__getopt_io__init_option_table_2_p_0_2_env_0_s * mercury__getopt_io__env_ptr = (struct mercury__getopt_io__init_option_table_2_p_0_2_env_0_s *) mercury__getopt_io__env_ptr_arg;

#line 436 "getopt_io.m"
    *((mercury__getopt_io__env_ptr)->mercury__getopt_io__init_option_table_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((mercury__getopt_io__env_ptr)->mercury__getopt_io__init_option_table_2_p_0_2_env_0__conv0_HeadVar__3_10));
#line 436 "getopt_io.m"
    {
#line 436 "getopt_io.m"
      ((mercury__getopt_io__env_ptr)->mercury__getopt_io__init_option_table_2_p_0_2_env_0__cont)((mercury__getopt_io__env_ptr)->mercury__getopt_io__init_option_table_2_p_0_2_env_0__cont_env_ptr);
#line 436 "getopt_io.m"
      return;
    }
#line 436 "getopt_io.m"
  }
#line 436 "getopt_io.m"
}

#line 436 "getopt_io.m"
static void MR_CALL 
mercury__getopt_io__init_option_table_2_p_0_2(
#line 436 "getopt_io.m"
  MR_Box mercury__getopt_io__closure_arg,
#line 436 "getopt_io.m"
  MR_Box * mercury__getopt_io__wrapper_arg_1,
#line 436 "getopt_io.m"
  MR_Cont mercury__getopt_io__cont,
#line 436 "getopt_io.m"
  void * mercury__getopt_io__cont_env_ptr)
#line 436 "getopt_io.m"
{
#line 436 "getopt_io.m"
  {
#line 436 "getopt_io.m"
    struct mercury__getopt_io__init_option_table_2_p_0_2_env_0_s mercury__getopt_io__env;

#line 436 "getopt_io.m"
    (mercury__getopt_io__env).mercury__getopt_io__init_option_table_2_p_0_2_env_0__wrapper_arg_1 = mercury__getopt_io__wrapper_arg_1;
#line 436 "getopt_io.m"
    (mercury__getopt_io__env).mercury__getopt_io__init_option_table_2_p_0_2_env_0__cont = mercury__getopt_io__cont;
#line 436 "getopt_io.m"
    (mercury__getopt_io__env).mercury__getopt_io__init_option_table_2_p_0_2_env_0__cont_env_ptr = mercury__getopt_io__cont_env_ptr;
#line 436 "getopt_io.m"
    {
#line 436 "getopt_io.m"
      MR_Box mercury__getopt_io__closure = mercury__getopt_io__closure_arg;

#line 436 "getopt_io.m"
      {
#line 436 "getopt_io.m"
        mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__closure, (MR_Integer) 4))), &(mercury__getopt_io__env).mercury__getopt_io__init_option_table_2_p_0_2_env_0__conv0_HeadVar__3_10, mercury__getopt_io__init_option_table_2_p_0_1, &mercury__getopt_io__env);
      }
#line 436 "getopt_io.m"
    }
#line 436 "getopt_io.m"
  }
#line 436 "getopt_io.m"
}

#line 174 "getopt_io.m"
void MR_CALL 
mercury__getopt_io__init_option_table_2_p_0(
#line 174 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_12,
#line 174 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionDefaultsPred_3,
#line 174 "getopt_io.m"
  MR_Word * mercury__getopt_io__OptionTable_4)
#line 174 "getopt_io.m"
{
#line 435 "getopt_io.m"
  {
#line 435 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 435 "getopt_io.m"
    MR_Word mercury__getopt_io__TypeCtorInfo_13_13;
#line 435 "getopt_io.m"
    MR_Word mercury__getopt_io__TypeCtorInfo_14_14;
#line 435 "getopt_io.m"
    MR_Word mercury__getopt_io__TypeInfo_15_15;
#line 435 "getopt_io.m"
    MR_Word mercury__getopt_io__TypeCtorInfo_12_29;
#line 435 "getopt_io.m"
    MR_Word mercury__getopt_io__TypeInfo_13_30;
#line 435 "getopt_io.m"
    MR_Word mercury__getopt_io__OptionDefaultsList_8;
#line 435 "getopt_io.m"
    MR_Word mercury__getopt_io__V_9_9;
#line 435 "getopt_io.m"
    MR_Word mercury__getopt_io__UnsortedList_5_18;
#line 435 "getopt_io.m"
    MR_Word mercury__getopt_io__V_5_23;
#line 435 "getopt_io.m"
    MR_Word mercury__getopt_io__V_6_25;
#line 435 "getopt_io.m"
    MR_Integer mercury__getopt_io__V_5_35;
#line 435 "getopt_io.m"
    MR_Word mercury__getopt_io__V_5_45;
#line 71 "solutions.opt"
    MR_Box mercury__getopt_io__conv2_UnsortedList_5_18;
#line 110 "list.opt"
    MR_Word mercury__getopt_io__conv3_OptionDefaultsList_8;

#line 436 "getopt_io.m"
    {
#line 436 "getopt_io.m"
      mercury__getopt_io__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 436 "getopt_io.m"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__V_9_9, 0) = ((MR_Box) (&mercury__getopt_io_scalar_common_6[0]));
#line 436 "getopt_io.m"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__V_9_9, 1) = ((MR_Box) (mercury__getopt_io__init_option_table_2_p_0_2));
#line 436 "getopt_io.m"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 436 "getopt_io.m"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__V_9_9, 3) = ((MR_Box) (mercury__getopt_io__TypeInfo_for_OptionType_12));
#line 436 "getopt_io.m"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__V_9_9, 4) = ((MR_Box) (mercury__getopt_io__OptionDefaultsPred_3));
#line 436 "getopt_io.m"
    }
#line 15089 "getopt_io.c"
    mercury__getopt_io__TypeCtorInfo_14_14 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 15091 "getopt_io.c"
    mercury__getopt_io__TypeCtorInfo_13_13 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 15093 "getopt_io.c"
    {
#line 15095 "getopt_io.c"
      mercury__getopt_io__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 15097 "getopt_io.c"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__TypeInfo_15_15, 0) = ((MR_Box) (mercury__getopt_io__TypeCtorInfo_14_14));
#line 15099 "getopt_io.c"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__TypeInfo_15_15, 1) = ((MR_Box) (mercury__getopt_io__TypeInfo_for_OptionType_12));
#line 15101 "getopt_io.c"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__TypeInfo_15_15, 2) = ((MR_Box) (mercury__getopt_io__TypeCtorInfo_13_13));
#line 15103 "getopt_io.c"
    }
#line 69 "solutions.opt"
    {
#line 69 "solutions.opt"
      mercury__getopt_io__V_5_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 69 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__V_5_23, 0) = ((MR_Box) (&mercury__getopt_io_scalar_common_7[0]));
#line 69 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__V_5_23, 1) = ((MR_Box) (mercury__getopt_io__init_option_table_2_p_0_3));
#line 69 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__V_5_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 69 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__V_5_23, 3) = ((MR_Box) (mercury__getopt_io__TypeInfo_15_15));
#line 69 "solutions.opt"
    }
#line 70 "solutions.opt"
    mercury__getopt_io__V_6_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 15121 "getopt_io.c"
    mercury__getopt_io__TypeCtorInfo_12_29 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 15123 "getopt_io.c"
    {
#line 15125 "getopt_io.c"
      mercury__getopt_io__TypeInfo_13_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15127 "getopt_io.c"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__TypeInfo_13_30, 0) = ((MR_Box) (mercury__getopt_io__TypeCtorInfo_12_29));
#line 15129 "getopt_io.c"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__TypeInfo_13_30, 1) = ((MR_Box) (mercury__getopt_io__TypeInfo_15_15));
#line 15131 "getopt_io.c"
    }
#line 71 "solutions.opt"
    {
#line 71 "solutions.opt"
      mercury__solutions__builtin_aggregate_4_p_7(mercury__getopt_io__TypeInfo_15_15, mercury__getopt_io__TypeInfo_13_30, (MR_Word) mercury__getopt_io__V_9_9, (MR_Word) mercury__getopt_io__V_5_23, ((MR_Box) (mercury__getopt_io__V_6_25)), &mercury__getopt_io__conv2_UnsortedList_5_18);
    }
#line 71 "solutions.opt"
    mercury__getopt_io__UnsortedList_5_18 = ((MR_Word) mercury__getopt_io__conv2_UnsortedList_5_18);
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__getopt_io__TypeInfo_15_15, (MR_Word) mercury__getopt_io__UnsortedList_5_18, (MR_Integer) 0, &mercury__getopt_io__V_5_35);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__getopt_io__TypeInfo_15_15, mercury__getopt_io__V_5_35, (MR_Word) mercury__getopt_io__UnsortedList_5_18, &mercury__getopt_io__conv3_OptionDefaultsList_8);
    }
#line 110 "list.opt"
    mercury__getopt_io__OptionDefaultsList_8 = (MR_Word) mercury__getopt_io__conv3_OptionDefaultsList_8;
#line 90 "tree234.opt"
    mercury__getopt_io__V_5_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 91 "tree234.opt"
    {
#line 91 "tree234.opt"
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__getopt_io__TypeInfo_for_OptionType_12, mercury__getopt_io__TypeCtorInfo_13_13, mercury__getopt_io__OptionDefaultsList_8, mercury__getopt_io__V_5_45, mercury__getopt_io__OptionTable_4);
#line 91 "tree234.opt"
      return;
    }
#line 435 "getopt_io.m"
  }
#line 174 "getopt_io.m"
}

#line 168 "getopt_io.m"
void MR_CALL 
mercury__getopt_io__process_options_track_se_9_p_0(
#line 168 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_29,
#line 168 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionOps_10,
#line 168 "getopt_io.m"
  MR_Word mercury__getopt_io__Args0_11,
#line 168 "getopt_io.m"
  MR_Word * mercury__getopt_io__OptionArgs_12,
#line 168 "getopt_io.m"
  MR_Word * mercury__getopt_io__NonOptionArgs_13,
#line 168 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionTable0_14,
#line 168 "getopt_io.m"
  MR_Word * mercury__getopt_io__Result_15,
#line 168 "getopt_io.m"
  MR_Word * mercury__getopt_io__OptionsSet_16)
#line 168 "getopt_io.m"
{
#line 514 "getopt_io.m"
  {
#line 514 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 514 "getopt_io.m"
    MR_Word mercury__getopt_io__TypeCtorInfo_30_30;
#line 514 "getopt_io.m"
    MR_Word mercury__getopt_io__Short_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_10, (MR_Integer) 0)));
#line 514 "getopt_io.m"
    MR_Word mercury__getopt_io__Long_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_10, (MR_Integer) 1)));
#line 514 "getopt_io.m"
    MR_Word mercury__getopt_io__Special_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_10, (MR_Integer) 2)));
#line 514 "getopt_io.m"
    MR_Word mercury__getopt_io__Internal_21;
#line 514 "getopt_io.m"
    MR_Word mercury__getopt_io__RevOptionArgs_22;
#line 514 "getopt_io.m"
    MR_Word mercury__getopt_io__V_25_25;
#line 514 "getopt_io.m"
    MR_Word mercury__getopt_io__V_26_26;
#line 514 "getopt_io.m"
    MR_Word mercury__getopt_io__V_27_27;
#line 514 "getopt_io.m"
    MR_Word mercury__getopt_io__V_2_33;

#line 516 "getopt_io.m"
    {
#line 516 "getopt_io.m"
      mercury__getopt_io__V_25_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 516 "getopt_io.m"
      MR_hl_field(MR_mktag(2), mercury__getopt_io__V_25_25, 0) = ((MR_Box) (mercury__getopt_io__Special_20));
#line 516 "getopt_io.m"
    }
#line 516 "getopt_io.m"
    {
#line 516 "getopt_io.m"
      mercury__getopt_io__Internal_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 516 "getopt_io.m"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__Internal_21, 0) = ((MR_Box) (mercury__getopt_io__Short_18));
#line 516 "getopt_io.m"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__Internal_21, 1) = ((MR_Box) (mercury__getopt_io__Long_19));
#line 516 "getopt_io.m"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__Internal_21, 2) = ((MR_Box) (mercury__getopt_io__V_25_25));
#line 516 "getopt_io.m"
    }
#line 518 "getopt_io.m"
    mercury__getopt_io__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 23 "set_ordlist.opt"
    mercury__getopt_io__V_2_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 22 "set_ordlist.opt"
    mercury__getopt_io__V_27_27 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 517 "getopt_io.m"
    {
#line 517 "getopt_io.m"
      mercury__getopt_io__process_arguments_11_p_0(mercury__getopt_io__TypeInfo_for_OptionType_29, mercury__getopt_io__Args0_11, mercury__getopt_io__NonOptionArgs_13, mercury__getopt_io__Internal_21, mercury__getopt_io__V_26_26, &mercury__getopt_io__RevOptionArgs_22, mercury__getopt_io__OptionTable0_14, mercury__getopt_io__Result_15, mercury__getopt_io__V_27_27, mercury__getopt_io__OptionsSet_16);
    }
#line 15243 "getopt_io.c"
    mercury__getopt_io__TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__getopt_io__TypeCtorInfo_30_30, mercury__getopt_io__RevOptionArgs_22, mercury__getopt_io__OptionArgs_12);
#line 118 "list.opt"
      return;
    }
#line 514 "getopt_io.m"
  }
#line 168 "getopt_io.m"
}

#line 164 "getopt_io.m"
void MR_CALL 
mercury__getopt_io__process_options_se_7_p_0(
#line 164 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_32,
#line 164 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionOps_8,
#line 164 "getopt_io.m"
  MR_Word mercury__getopt_io__Args0_9,
#line 164 "getopt_io.m"
  MR_Word * mercury__getopt_io__OptionArgs_10,
#line 164 "getopt_io.m"
  MR_Word * mercury__getopt_io__NonOptionArgs_11,
#line 164 "getopt_io.m"
  MR_Word * mercury__getopt_io__Result_12)
#line 164 "getopt_io.m"
{
#line 490 "getopt_io.m"
  {
#line 490 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 490 "getopt_io.m"
    MR_Word mercury__getopt_io__TypeCtorInfo_33_33;
#line 490 "getopt_io.m"
    MR_Word mercury__getopt_io__Short_14;
#line 490 "getopt_io.m"
    MR_Word mercury__getopt_io__Long_15;
#line 490 "getopt_io.m"
    MR_Word mercury__getopt_io__MaybeSpecial_17;
#line 490 "getopt_io.m"
    MR_Word mercury__getopt_io__OptionTable0_18;
#line 490 "getopt_io.m"
    MR_Word mercury__getopt_io__Internal_20;
#line 490 "getopt_io.m"
    MR_Word mercury__getopt_io__RevOptionArgs_21;
#line 490 "getopt_io.m"
    MR_Word mercury__getopt_io__V_25_25;
#line 490 "getopt_io.m"
    MR_Word mercury__getopt_io__V_26_26;
#line 490 "getopt_io.m"
    MR_Word mercury__getopt_io__V_2_36;
#line 509 "getopt_io.m"
    MR_Word mercury__getopt_io___OptionsSet_22;

#line 495 "getopt_io.m"
    if (((MR_tag((MR_Word) mercury__getopt_io__OptionOps_8)) == (MR_mktag((MR_Integer) 0))))
#line 492 "getopt_io.m"
      {
#line 492 "getopt_io.m"
        MR_Word mercury__getopt_io__Defaults_16;

#line 492 "getopt_io.m"
        mercury__getopt_io__Short_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_8, (MR_Integer) 0)));
#line 492 "getopt_io.m"
        mercury__getopt_io__Long_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_8, (MR_Integer) 1)));
#line 492 "getopt_io.m"
        mercury__getopt_io__Defaults_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__OptionOps_8, (MR_Integer) 2)));
#line 493 "getopt_io.m"
        mercury__getopt_io__MaybeSpecial_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 494 "getopt_io.m"
        {
#line 494 "getopt_io.m"
          mercury__getopt_io__init_option_table_2_p_0(mercury__getopt_io__TypeInfo_for_OptionType_32, mercury__getopt_io__Defaults_16, &mercury__getopt_io__OptionTable0_18);
        }
#line 492 "getopt_io.m"
      }
#line 495 "getopt_io.m"
    else
#line 495 "getopt_io.m"
      if (((MR_tag((MR_Word) mercury__getopt_io__OptionOps_8)) == (MR_mktag((MR_Integer) 1))))
#line 496 "getopt_io.m"
        {
#line 496 "getopt_io.m"
          MR_Word mercury__getopt_io__Special_19;
#line 496 "getopt_io.m"
          MR_Word mercury__getopt_io__Defaults_28;

#line 496 "getopt_io.m"
          mercury__getopt_io__Short_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__OptionOps_8, (MR_Integer) 0)));
#line 496 "getopt_io.m"
          mercury__getopt_io__Long_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__OptionOps_8, (MR_Integer) 1)));
#line 496 "getopt_io.m"
          mercury__getopt_io__Defaults_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__OptionOps_8, (MR_Integer) 2)));
#line 496 "getopt_io.m"
          mercury__getopt_io__Special_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__OptionOps_8, (MR_Integer) 3)));
#line 497 "getopt_io.m"
          {
#line 497 "getopt_io.m"
            mercury__getopt_io__MaybeSpecial_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 497 "getopt_io.m"
            MR_hl_field(MR_mktag(1), mercury__getopt_io__MaybeSpecial_17, 0) = ((MR_Box) (mercury__getopt_io__Special_19));
#line 497 "getopt_io.m"
          }
#line 498 "getopt_io.m"
          {
#line 498 "getopt_io.m"
            mercury__getopt_io__init_option_table_2_p_0(mercury__getopt_io__TypeInfo_for_OptionType_32, mercury__getopt_io__Defaults_28, &mercury__getopt_io__OptionTable0_18);
          }
#line 496 "getopt_io.m"
        }
#line 495 "getopt_io.m"
      else
#line 495 "getopt_io.m"
        if (((MR_tag((MR_Word) mercury__getopt_io__OptionOps_8)) == (MR_mktag((MR_Integer) 2))))
#line 500 "getopt_io.m"
          {
#line 500 "getopt_io.m"
            MR_Word mercury__getopt_io__Defaults_29;

#line 500 "getopt_io.m"
            mercury__getopt_io__Short_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__OptionOps_8, (MR_Integer) 0)));
#line 500 "getopt_io.m"
            mercury__getopt_io__Long_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__OptionOps_8, (MR_Integer) 1)));
#line 500 "getopt_io.m"
            mercury__getopt_io__Defaults_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt_io__OptionOps_8, (MR_Integer) 2)));
#line 501 "getopt_io.m"
            mercury__getopt_io__MaybeSpecial_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 502 "getopt_io.m"
            {
#line 502 "getopt_io.m"
              mercury__getopt_io__init_option_table_multi_2_p_0(mercury__getopt_io__TypeInfo_for_OptionType_32, mercury__getopt_io__Defaults_29, &mercury__getopt_io__OptionTable0_18);
            }
#line 500 "getopt_io.m"
          }
#line 495 "getopt_io.m"
        else
#line 504 "getopt_io.m"
          {
#line 504 "getopt_io.m"
            MR_Word mercury__getopt_io__Defaults_30;
#line 504 "getopt_io.m"
            MR_Word mercury__getopt_io__Special_31;

#line 504 "getopt_io.m"
            mercury__getopt_io__Short_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__OptionOps_8, (MR_Integer) 0)));
#line 504 "getopt_io.m"
            mercury__getopt_io__Long_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__OptionOps_8, (MR_Integer) 1)));
#line 504 "getopt_io.m"
            mercury__getopt_io__Defaults_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__OptionOps_8, (MR_Integer) 2)));
#line 504 "getopt_io.m"
            mercury__getopt_io__Special_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt_io__OptionOps_8, (MR_Integer) 3)));
#line 505 "getopt_io.m"
            {
#line 505 "getopt_io.m"
              mercury__getopt_io__MaybeSpecial_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 505 "getopt_io.m"
              MR_hl_field(MR_mktag(1), mercury__getopt_io__MaybeSpecial_17, 0) = ((MR_Box) (mercury__getopt_io__Special_31));
#line 505 "getopt_io.m"
            }
#line 506 "getopt_io.m"
            {
#line 506 "getopt_io.m"
              mercury__getopt_io__init_option_table_multi_2_p_0(mercury__getopt_io__TypeInfo_for_OptionType_32, mercury__getopt_io__Defaults_30, &mercury__getopt_io__OptionTable0_18);
            }
#line 504 "getopt_io.m"
          }
#line 508 "getopt_io.m"
    {
#line 508 "getopt_io.m"
      mercury__getopt_io__Internal_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 508 "getopt_io.m"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__Internal_20, 0) = ((MR_Box) (mercury__getopt_io__Short_14));
#line 508 "getopt_io.m"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__Internal_20, 1) = ((MR_Box) (mercury__getopt_io__Long_15));
#line 508 "getopt_io.m"
      MR_hl_field(MR_mktag(0), mercury__getopt_io__Internal_20, 2) = ((MR_Box) (mercury__getopt_io__MaybeSpecial_17));
#line 508 "getopt_io.m"
    }
#line 510 "getopt_io.m"
    mercury__getopt_io__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 23 "set_ordlist.opt"
    mercury__getopt_io__V_2_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 22 "set_ordlist.opt"
    mercury__getopt_io__V_26_26 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 509 "getopt_io.m"
    {
#line 509 "getopt_io.m"
      mercury__getopt_io__process_arguments_11_p_0(mercury__getopt_io__TypeInfo_for_OptionType_32, mercury__getopt_io__Args0_9, mercury__getopt_io__NonOptionArgs_11, mercury__getopt_io__Internal_20, mercury__getopt_io__V_25_25, &mercury__getopt_io__RevOptionArgs_21, mercury__getopt_io__OptionTable0_18, mercury__getopt_io__Result_12, mercury__getopt_io__V_26_26, &mercury__getopt_io___OptionsSet_22);
    }
#line 15436 "getopt_io.c"
    mercury__getopt_io__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__getopt_io__TypeCtorInfo_33_33, mercury__getopt_io__RevOptionArgs_21, mercury__getopt_io__OptionArgs_10);
#line 118 "list.opt"
      return;
    }
#line 490 "getopt_io.m"
  }
#line 164 "getopt_io.m"
}

#line 160 "getopt_io.m"
void MR_CALL 
mercury__getopt_io__process_options_se_6_p_0(
#line 160 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_16,
#line 160 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionOps_7,
#line 160 "getopt_io.m"
  MR_Word mercury__getopt_io__Args0_8,
#line 160 "getopt_io.m"
  MR_Word * mercury__getopt_io__NonOptionArgs_9,
#line 160 "getopt_io.m"
  MR_Word * mercury__getopt_io__Result_10)
#line 160 "getopt_io.m"
{
#line 486 "getopt_io.m"
  {
#line 486 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 486 "getopt_io.m"
    MR_Word mercury__getopt_io___OptionArgs_12;

#line 486 "getopt_io.m"
    {
#line 486 "getopt_io.m"
      mercury__getopt_io__process_options_se_7_p_0(mercury__getopt_io__TypeInfo_for_OptionType_16, mercury__getopt_io__OptionOps_7, mercury__getopt_io__Args0_8, &mercury__getopt_io___OptionArgs_12, mercury__getopt_io__NonOptionArgs_9, mercury__getopt_io__Result_10);
    }
#line 486 "getopt_io.m"
  }
#line 160 "getopt_io.m"
}

#line 150 "getopt_io.m"
void MR_CALL 
mercury__getopt_io__process_options_track_9_p_0(
#line 150 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_25,
#line 150 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionOps_10,
#line 150 "getopt_io.m"
  MR_Word mercury__getopt_io__Args0_11,
#line 150 "getopt_io.m"
  MR_Word * mercury__getopt_io__OptionArgs_12,
#line 150 "getopt_io.m"
  MR_Word * mercury__getopt_io__NonOptionArgs_13,
#line 150 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionTable0_14,
#line 150 "getopt_io.m"
  MR_Word * mercury__getopt_io__Result_15,
#line 150 "getopt_io.m"
  MR_Word * mercury__getopt_io__OptionsSet_16)
#line 150 "getopt_io.m"
{
#line 473 "getopt_io.m"
  {
#line 473 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 473 "getopt_io.m"
    MR_Word mercury__getopt_io__Result0_18;

#line 474 "getopt_io.m"
    {
#line 474 "getopt_io.m"
      mercury__getopt_io__process_options_track_se_9_p_0(mercury__getopt_io__TypeInfo_for_OptionType_25, mercury__getopt_io__OptionOps_10, mercury__getopt_io__Args0_11, mercury__getopt_io__OptionArgs_12, mercury__getopt_io__NonOptionArgs_13, mercury__getopt_io__OptionTable0_14, &mercury__getopt_io__Result0_18, mercury__getopt_io__OptionsSet_16);
    }
#line 479 "getopt_io.m"
    if (((MR_tag((MR_Word) mercury__getopt_io__Result0_18)) == (MR_mktag((MR_Integer) 1))))
#line 480 "getopt_io.m"
      {
#line 480 "getopt_io.m"
        MR_Word mercury__getopt_io__Error_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__Result0_18, (MR_Integer) 0)));
#line 480 "getopt_io.m"
        MR_String mercury__getopt_io__Msg_21;

#line 481 "getopt_io.m"
        {
#line 481 "getopt_io.m"
          mercury__getopt_io__Msg_21 = mercury__getopt_io__option_error_to_string_1_f_0(mercury__getopt_io__TypeInfo_for_OptionType_25, mercury__getopt_io__Error_20);
        }
#line 482 "getopt_io.m"
        {
#line 482 "getopt_io.m"
          MR_Word base;
#line 482 "getopt_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 482 "getopt_io.m"
          *mercury__getopt_io__Result_15 = base;
#line 482 "getopt_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Msg_21));
#line 482 "getopt_io.m"
        }
#line 480 "getopt_io.m"
      }
#line 479 "getopt_io.m"
    else
#line 477 "getopt_io.m"
      {
#line 477 "getopt_io.m"
        MR_Word mercury__getopt_io__OptionTable_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__Result0_18, (MR_Integer) 0)));

#line 478 "getopt_io.m"
        {
#line 478 "getopt_io.m"
          MR_Word base;
#line 478 "getopt_io.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 478 "getopt_io.m"
          *mercury__getopt_io__Result_15 = base;
#line 478 "getopt_io.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__OptionTable_19));
#line 478 "getopt_io.m"
        }
#line 477 "getopt_io.m"
      }
#line 473 "getopt_io.m"
  }
#line 150 "getopt_io.m"
}

#line 143 "getopt_io.m"
void MR_CALL 
mercury__getopt_io__process_options_7_p_0(
#line 143 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_21,
#line 143 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionOps_8,
#line 143 "getopt_io.m"
  MR_Word mercury__getopt_io__Args0_9,
#line 143 "getopt_io.m"
  MR_Word * mercury__getopt_io__OptionArgs_10,
#line 143 "getopt_io.m"
  MR_Word * mercury__getopt_io__NonOptionArgs_11,
#line 143 "getopt_io.m"
  MR_Word * mercury__getopt_io__Result_12)
#line 143 "getopt_io.m"
{
#line 460 "getopt_io.m"
  {
#line 460 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 460 "getopt_io.m"
    MR_Word mercury__getopt_io__Result0_14;

#line 461 "getopt_io.m"
    {
#line 461 "getopt_io.m"
      mercury__getopt_io__process_options_se_7_p_0(mercury__getopt_io__TypeInfo_for_OptionType_21, mercury__getopt_io__OptionOps_8, mercury__getopt_io__Args0_9, mercury__getopt_io__OptionArgs_10, mercury__getopt_io__NonOptionArgs_11, &mercury__getopt_io__Result0_14);
    }
#line 466 "getopt_io.m"
    if (((MR_tag((MR_Word) mercury__getopt_io__Result0_14)) == (MR_mktag((MR_Integer) 1))))
#line 467 "getopt_io.m"
      {
#line 467 "getopt_io.m"
        MR_Word mercury__getopt_io__Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__Result0_14, (MR_Integer) 0)));
#line 467 "getopt_io.m"
        MR_String mercury__getopt_io__Msg_17;

#line 468 "getopt_io.m"
        {
#line 468 "getopt_io.m"
          mercury__getopt_io__Msg_17 = mercury__getopt_io__option_error_to_string_1_f_0(mercury__getopt_io__TypeInfo_for_OptionType_21, mercury__getopt_io__Error_16);
        }
#line 469 "getopt_io.m"
        {
#line 469 "getopt_io.m"
          MR_Word base;
#line 469 "getopt_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 469 "getopt_io.m"
          *mercury__getopt_io__Result_12 = base;
#line 469 "getopt_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Msg_17));
#line 469 "getopt_io.m"
        }
#line 467 "getopt_io.m"
      }
#line 466 "getopt_io.m"
    else
#line 464 "getopt_io.m"
      {
#line 464 "getopt_io.m"
        MR_Word mercury__getopt_io__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__Result0_14, (MR_Integer) 0)));

#line 465 "getopt_io.m"
        {
#line 465 "getopt_io.m"
          MR_Word base;
#line 465 "getopt_io.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 465 "getopt_io.m"
          *mercury__getopt_io__Result_12 = base;
#line 465 "getopt_io.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__OptionTable_15));
#line 465 "getopt_io.m"
        }
#line 464 "getopt_io.m"
      }
#line 460 "getopt_io.m"
  }
#line 143 "getopt_io.m"
}

#line 139 "getopt_io.m"
void MR_CALL 
mercury__getopt_io__process_options_6_p_0(
#line 139 "getopt_io.m"
  MR_Word mercury__getopt_io__TypeInfo_for_OptionType_19,
#line 139 "getopt_io.m"
  MR_Word mercury__getopt_io__OptionOps_7,
#line 139 "getopt_io.m"
  MR_Word mercury__getopt_io__Args0_8,
#line 139 "getopt_io.m"
  MR_Word * mercury__getopt_io__NonOptionArgs_9,
#line 139 "getopt_io.m"
  MR_Word * mercury__getopt_io__Result_10)
#line 139 "getopt_io.m"
{
#line 449 "getopt_io.m"
  {
#line 449 "getopt_io.m"
    MR_bool mercury__getopt_io__succeeded;
#line 449 "getopt_io.m"
    MR_Word mercury__getopt_io__Result0_12;
#line 486 "getopt_io.m"
    MR_Word mercury__getopt_io___OptionArgs_27;

#line 486 "getopt_io.m"
    {
#line 486 "getopt_io.m"
      mercury__getopt_io__process_options_se_7_p_0(mercury__getopt_io__TypeInfo_for_OptionType_19, mercury__getopt_io__OptionOps_7, mercury__getopt_io__Args0_8, &mercury__getopt_io___OptionArgs_27, mercury__getopt_io__NonOptionArgs_9, &mercury__getopt_io__Result0_12);
    }
#line 454 "getopt_io.m"
    if (((MR_tag((MR_Word) mercury__getopt_io__Result0_12)) == (MR_mktag((MR_Integer) 1))))
#line 455 "getopt_io.m"
      {
#line 455 "getopt_io.m"
        MR_Word mercury__getopt_io__Error_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt_io__Result0_12, (MR_Integer) 0)));
#line 455 "getopt_io.m"
        MR_String mercury__getopt_io__Msg_15;

#line 456 "getopt_io.m"
        {
#line 456 "getopt_io.m"
          mercury__getopt_io__Msg_15 = mercury__getopt_io__option_error_to_string_1_f_0(mercury__getopt_io__TypeInfo_for_OptionType_19, mercury__getopt_io__Error_14);
        }
#line 457 "getopt_io.m"
        {
#line 457 "getopt_io.m"
          MR_Word base;
#line 457 "getopt_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 457 "getopt_io.m"
          *mercury__getopt_io__Result_10 = base;
#line 457 "getopt_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt_io__Msg_15));
#line 457 "getopt_io.m"
        }
#line 455 "getopt_io.m"
      }
#line 454 "getopt_io.m"
    else
#line 452 "getopt_io.m"
      {
#line 452 "getopt_io.m"
        MR_Word mercury__getopt_io__OptionTable_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt_io__Result0_12, (MR_Integer) 0)));

#line 453 "getopt_io.m"
        {
#line 453 "getopt_io.m"
          MR_Word base;
#line 453 "getopt_io.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 453 "getopt_io.m"
          *mercury__getopt_io__Result_10 = base;
#line 453 "getopt_io.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt_io__OptionTable_13));
#line 453 "getopt_io.m"
        }
#line 452 "getopt_io.m"
      }
#line 449 "getopt_io.m"
  }
#line 139 "getopt_io.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module getopt_io. */
