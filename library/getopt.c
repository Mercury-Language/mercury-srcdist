/*
** Automatically generated from `getopt.m'
** by the Mercury compiler,
** version rotd-2015-02-20
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
#include "calendar.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
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
#include "term_conversion.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"



#line 421 "getopt.m"
struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0_s {
#line 421 "getopt.m"
  MR_Word * mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__HeadVar__3_10;
#line 421 "getopt.m"
  MR_Cont mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__cont;
#line 421 "getopt.m"
  void * mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__cont_env_ptr;
#line 421 "getopt.m"
  MR_Box mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__Option_6;
#line 421 "getopt.m"
  MR_Word mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__OptionData_7;
#line 423 "getopt.m"
  MR_Box mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__conv1_OptionData_7;
#line 421 "getopt.m"
};

#line 414 "getopt.m"
struct mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0_s {
#line 414 "getopt.m"
  MR_Word * mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__HeadVar__3_10;
#line 414 "getopt.m"
  MR_Cont mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__cont;
#line 414 "getopt.m"
  void * mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__cont_env_ptr;
#line 414 "getopt.m"
  MR_Box mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__Option_6;
#line 414 "getopt.m"
  MR_Word mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__OptionData_7;
#line 416 "getopt.m"
  MR_Box mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__conv1_OptionData_7;
#line 414 "getopt.m"
};

#line 421 "getopt.m"
struct mercury__getopt__init_option_table_multi_2_p_0_2_env_0_s {
#line 421 "getopt.m"
  MR_Box * mercury__getopt__init_option_table_multi_2_p_0_2_env_0__wrapper_arg_1;
#line 421 "getopt.m"
  MR_Cont mercury__getopt__init_option_table_multi_2_p_0_2_env_0__cont;
#line 421 "getopt.m"
  void * mercury__getopt__init_option_table_multi_2_p_0_2_env_0__cont_env_ptr;
#line 421 "getopt.m"
  MR_Word mercury__getopt__init_option_table_multi_2_p_0_2_env_0__conv0_HeadVar__3_10;
#line 421 "getopt.m"
};

#line 414 "getopt.m"
struct mercury__getopt__init_option_table_2_p_0_2_env_0_s {
#line 414 "getopt.m"
  MR_Box * mercury__getopt__init_option_table_2_p_0_2_env_0__wrapper_arg_1;
#line 414 "getopt.m"
  MR_Cont mercury__getopt__init_option_table_2_p_0_2_env_0__cont;
#line 414 "getopt.m"
  void * mercury__getopt__init_option_table_2_p_0_2_env_0__cont_env_ptr;
#line 414 "getopt.m"
  MR_Word mercury__getopt__init_option_table_2_p_0_2_env_0__conv0_HeadVar__3_10;
#line 414 "getopt.m"
};


#line 154 "getopt.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt____vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0;

#line 157 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__getopt__pair__pti_pair_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0;

#line 160 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__list__pti_list_1__pseudo_1;

#line 163 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__getopt__tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0;

#line 166 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_1_0[1];

#line 169 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_0;

#line 172 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_1_1[1];

#line 175 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_1;

#line 178 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_1_0[1];

#line 181 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_1_1[1];

#line 184 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_maybe_option_table_1[2];

#line 187 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_maybe_option_table_1[2];

#line 190 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_maybe_option_table_1[2];

#line 193 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_se_1_0[1];

#line 196 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_table_se_1_0;

#line 199 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__getopt__pti_option_error_1__pseudo_1;

#line 202 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_se_1_1[1];

#line 205 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_table_se_1_1;

#line 208 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_se_1_0[1];

#line 211 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_se_1_1[1];

#line 214 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_maybe_option_table_se_1[2];

#line 217 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_maybe_option_table_se_1[2];

#line 220 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_maybe_option_table_se_1[2];

#line 223 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_0[1];

#line 226 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_0;

#line 229 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_1[1];

#line 232 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_1;

#line 235 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_2[1];

#line 238 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_2;

#line 241 "getopt.c"
static const MR_FA_TypeInfo_Struct1 mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 244 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_3[1];

#line 247 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_3;

#line 250 "getopt.c"
static const MR_FA_TypeInfo_Struct1 mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

#line 253 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_4[1];

#line 256 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_4;

#line 259 "getopt.c"
static const MR_FA_TypeInfo_Struct1 mercury__getopt__list__ti_list_1builtin__type_ctor_info_string_0;

#line 262 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_5[1];

#line 265 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_5;

#line 268 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_6;

#line 271 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_7;

#line 274 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_8;

#line 277 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_9;

#line 280 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_10;

#line 283 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_0[5];

#line 286 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_1[1];

#line 289 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_2[1];

#line 292 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_3[4];

#line 295 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_data_0[4];

#line 298 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_data_0[11];

#line 301 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_data_0[11];

#line 304 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_1_0[1];

#line 307 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_1_0;

#line 310 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_1_1[3];

#line 313 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_1_1;

#line 316 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_1_0[1];

#line 319 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_1_1[1];

#line 322 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_error_1[2];

#line 325 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_error_1[2];

#line 328 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_error_1[2];

#line 331 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_0;

#line 334 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_1;

#line 337 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_2[1];

#line 340 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_2;

#line 343 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_3;

#line 346 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_4;

#line 349 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_5;

#line 352 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_6[1];

#line 355 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_6;

#line 358 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_7[1];

#line 361 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_7;

#line 364 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_0[5];

#line 367 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_1[1];

#line 370 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_2[1];

#line 373 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_3[1];

#line 376 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_error_reason_0[4];

#line 379 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_error_reason_0[8];

#line 382 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_error_reason_0[8];

#line 385 "getopt.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1;

#line 388 "getopt.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1;

#line 391 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_0[3];

#line 394 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_1_0;

#line 397 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__getopt__pti_maybe_option_table_1__pseudo_1;

#line 400 "getopt.c"
static const MR_VA_PseudoTypeInfo_Struct4 mercury__getopt____vpti_pred_4__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1;

#line 403 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_1[4];

#line 406 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_1_1;

#line 409 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_2[3];

#line 412 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_1_2;

#line 415 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_3[4];

#line 418 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_1_3;

#line 421 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_0[1];

#line 424 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_1[1];

#line 427 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_2[1];

#line 430 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_3[1];

#line 433 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_1[4];

#line 436 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_1[4];

#line 439 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_1[4];

#line 442 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__getopt__pti_option_ops_special_1__pseudo_1;

#line 445 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_internal_1_0[3];

#line 448 "getopt.c"
static const MR_ConstString mercury__getopt__getopt__field_names_option_ops_internal_1_0[3];

#line 451 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_internal_1_0;

#line 454 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_internal_1_0[1];

#line 457 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_internal_1[1];

#line 460 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_internal_1[1];

#line 463 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_internal_1[1];

#line 466 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_special_1_0;

#line 469 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_special_1_1[1];

#line 472 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_special_1_1;

#line 475 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__set_ordlist__pti_set_ordlist_1__pseudo_1;

#line 478 "getopt.c"
static const MR_VA_PseudoTypeInfo_Struct5 mercury__getopt____vpti_pred_5__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1;

#line 481 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_special_1_2[1];

#line 484 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_special_1_2;

#line 487 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_1_0[1];

#line 490 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_1_1[1];

#line 493 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_1_2[1];

#line 496 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_special_1[3];

#line 499 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_special_1[3];

#line 502 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_special_1[3];

#line 505 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_track_1_0[3];

#line 508 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_track_1_0;

#line 511 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_track_1_0[1];

#line 514 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_track_1[1];

#line 517 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_track_1[1];

#line 520 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_track_1[1];

#line 523 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_0;

#line 526 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_1[1];

#line 529 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_1;

#line 532 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_2[1];

#line 535 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_2;

#line 538 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_3[1];

#line 541 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_3;

#line 544 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_4[1];

#line 547 "getopt.c"
static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_4;

#line 550 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_0[1];

#line 553 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_1[1];

#line 556 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_2[1];

#line 559 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_3[2];

#line 562 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_special_data_0[4];

#line 565 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_special_data_0[5];

#line 568 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_special_data_0[5];

#line 571 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_table_1_0_10001(
#line 574 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 576 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 578 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3);

#line 581 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____maybe_option_table_1_0_10001(
#line 584 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 586 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 588 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 590 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4);

#line 593 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_table_se_1_0_10001(
#line 596 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 598 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 600 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3);

#line 603 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____maybe_option_table_se_1_0_10001(
#line 606 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 608 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 610 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 612 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4);

#line 615 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_data_0_0_10001(
#line 618 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 620 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2);

#line 623 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_data_0_0_10001(
#line 626 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_1,
#line 628 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 630 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3);

#line 633 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_error_1_0_10001(
#line 636 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 638 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 640 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3);

#line 643 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_error_1_0_10001(
#line 646 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 648 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 650 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 652 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4);

#line 655 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_error_reason_0_0_10001(
#line 658 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 660 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2);

#line 663 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_error_reason_0_0_10001(
#line 666 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_1,
#line 668 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 670 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3);

#line 673 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_1_0_10001(
#line 676 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 678 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 680 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3);

#line 683 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_ops_1_0_10001(
#line 686 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 688 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 690 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 692 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4);

#line 695 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_internal_1_0_10001(
#line 698 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 700 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 702 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3);

#line 705 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_ops_internal_1_0_10001(
#line 708 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 710 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 712 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 714 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4);

#line 717 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_special_1_0_10001(
#line 720 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 722 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 724 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3);

#line 727 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_ops_special_1_0_10001(
#line 730 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 732 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 734 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 736 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4);

#line 739 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_track_1_0_10001(
#line 742 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 744 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 746 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3);

#line 749 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_ops_track_1_0_10001(
#line 752 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 754 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 756 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 758 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4);

#line 761 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_table_1_0_10001(
#line 764 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 766 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 768 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3);

#line 771 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_table_1_0_10001(
#line 774 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 776 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 778 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 780 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4);

#line 783 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____special_data_0_0_10001(
#line 786 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 788 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2);

#line 791 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____special_data_0_0_10001(
#line 794 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_1,
#line 796 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 798 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 1024 "getopt.m"
static void MR_CALL 
mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(
#line 1024 "getopt.m"
  MR_Box mercury__getopt__Flag_5,
#line 1024 "getopt.m"
  MR_String mercury__getopt__Option_6,
#line 1024 "getopt.m"
  MR_String mercury__getopt__Arg_7,
#line 1024 "getopt.m"
  MR_Word * mercury__getopt__Result_8);

#line 423 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_2(
#line 423 "getopt.m"
  void * mercury__getopt__env_ptr_arg);

#line 421 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_1(
#line 421 "getopt.m"
  void * mercury__getopt__env_ptr_arg);

#line 421 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0(
#line 421 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_12,
#line 421 "getopt.m"
  MR_Word mercury__getopt__OptionDefaultsPred_3,
#line 421 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__3_10,
#line 421 "getopt.m"
  MR_Cont mercury__getopt__cont,
#line 421 "getopt.m"
  void * mercury__getopt__cont_env_ptr);

#line 416 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_2(
#line 416 "getopt.m"
  void * mercury__getopt__env_ptr_arg);

#line 414 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_1(
#line 414 "getopt.m"
  void * mercury__getopt__env_ptr_arg);

#line 414 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0(
#line 414 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_12,
#line 414 "getopt.m"
  MR_Word mercury__getopt__OptionDefaultsPred_3,
#line 414 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__3_10,
#line 414 "getopt.m"
  MR_Cont mercury__getopt__cont,
#line 414 "getopt.m"
  void * mercury__getopt__cont_env_ptr);

#line 956 "getopt.m"
static void MR_CALL 
mercury__getopt__process_special_8_p_0(
#line 956 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_54,
#line 956 "getopt.m"
  MR_String mercury__getopt__Option_9,
#line 956 "getopt.m"
  MR_Box mercury__getopt__Flag_10,
#line 956 "getopt.m"
  MR_Word mercury__getopt__OptionData_11,
#line 956 "getopt.m"
  MR_Word mercury__getopt__OptionOps_12,
#line 956 "getopt.m"
  MR_Word mercury__getopt__OptionTable0_13,
#line 956 "getopt.m"
  MR_Word * mercury__getopt__Result_14,
#line 956 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_26,
#line 956 "getopt.m"
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_27);

#line 903 "getopt.m"
static void MR_CALL 
mercury__getopt__process_negated_option_7_p_0(
#line 903 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_51,
#line 903 "getopt.m"
  MR_String mercury__getopt__Option_8,
#line 903 "getopt.m"
  MR_Box mercury__getopt__Flag_9,
#line 903 "getopt.m"
  MR_Word mercury__getopt__OptionOps_10,
#line 903 "getopt.m"
  MR_Word mercury__getopt__OptionTable0_11,
#line 903 "getopt.m"
  MR_Word * mercury__getopt__Result_12,
#line 903 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_23,
#line 903 "getopt.m"
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_24);

#line 760 "getopt.m"
static void MR_CALL 
mercury__getopt__process_option_9_p_0(
#line 760 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_204,
#line 760 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 760 "getopt.m"
  MR_String mercury__getopt__HeadVar__2_2,
#line 760 "getopt.m"
  MR_Box mercury__getopt__Flag_3,
#line 760 "getopt.m"
  MR_Word mercury__getopt__MaybeArg_4,
#line 760 "getopt.m"
  MR_Word mercury__getopt__HeadVar__5_5,
#line 760 "getopt.m"
  MR_Word mercury__getopt__HeadVar__6_6,
#line 760 "getopt.m"
  MR_Word * mercury__getopt__Result_7,
#line 760 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_8,
#line 760 "getopt.m"
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_9);

#line 688 "getopt.m"
static void MR_CALL 
mercury__getopt__handle_short_options_10_p_0(
#line 688 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_60,
#line 688 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 688 "getopt.m"
  MR_Word mercury__getopt__OptionOps_2,
#line 688 "getopt.m"
  MR_Word mercury__getopt__HeadVar__3_3,
#line 688 "getopt.m"
  MR_Word * mercury__getopt__Args_4,
#line 688 "getopt.m"
  MR_Word mercury__getopt__HeadVar__5_5,
#line 688 "getopt.m"
  MR_Word * mercury__getopt__OptionArgs_6,
#line 688 "getopt.m"
  MR_Word mercury__getopt__HeadVar__7_7,
#line 688 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__8_8,
#line 688 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_9,
#line 688 "getopt.m"
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_10);

#line 622 "getopt.m"
static void MR_CALL 
mercury__getopt__handle_long_option_13_p_0(
#line 622 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_48,
#line 622 "getopt.m"
  MR_String mercury__getopt__Option_14,
#line 622 "getopt.m"
  MR_Box mercury__getopt__Flag_15,
#line 622 "getopt.m"
  MR_Word mercury__getopt__OptionData_16,
#line 622 "getopt.m"
  MR_Word mercury__getopt__MaybeOptionArg0_17,
#line 622 "getopt.m"
  MR_Word mercury__getopt__Args0_18,
#line 622 "getopt.m"
  MR_Word * mercury__getopt__Args_19,
#line 622 "getopt.m"
  MR_Word mercury__getopt__OptionOps_20,
#line 622 "getopt.m"
  MR_Word mercury__getopt__OptionArgs0_21,
#line 622 "getopt.m"
  MR_Word * mercury__getopt__OptionArgs_22,
#line 622 "getopt.m"
  MR_Word mercury__getopt__OptionTable0_23,
#line 622 "getopt.m"
  MR_Word * mercury__getopt__Result_24,
#line 622 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_37,
#line 622 "getopt.m"
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

#line 421 "getopt.m"
static void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0_1(
#line 421 "getopt.m"
  void * mercury__getopt__env_ptr_arg);

#line 421 "getopt.m"
static void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0_2(
#line 421 "getopt.m"
  MR_Box mercury__getopt__closure_arg,
#line 421 "getopt.m"
  MR_Box * mercury__getopt__wrapper_arg_1,
#line 421 "getopt.m"
  MR_Cont mercury__getopt__cont,
#line 421 "getopt.m"
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

#line 414 "getopt.m"
static void MR_CALL 
mercury__getopt__init_option_table_2_p_0_1(
#line 414 "getopt.m"
  void * mercury__getopt__env_ptr_arg);

#line 414 "getopt.m"
static void MR_CALL 
mercury__getopt__init_option_table_2_p_0_2(
#line 414 "getopt.m"
  MR_Box mercury__getopt__closure_arg,
#line 414 "getopt.m"
  MR_Box * mercury__getopt__wrapper_arg_1,
#line 414 "getopt.m"
  MR_Cont mercury__getopt__cont,
#line 414 "getopt.m"
  void * mercury__getopt__cont_env_ptr);


static /* final */ const MR_Box mercury__getopt_scalar_common_1[7][2];

static /* final */ const MR_Box mercury__getopt_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__getopt_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__getopt_scalar_common_4[2][5];

static /* final */ const MR_Integer mercury__getopt_scalar_common_5[1][2];

static /* final */ const MR_Box mercury__getopt_scalar_common_6[1][6];

static /* final */ const MR_Box mercury__getopt_scalar_common_7[1][7];

static /* final */ const MR_Box mercury__getopt_scalar_common_8[3][1];




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

static /* final */ const MR_Box mercury__getopt_scalar_common_8[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
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
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
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
#include "version_array.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "string.mh"
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



#line 1512 "getopt.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt____vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

#line 1522 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__getopt__pair__pti_pair_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

#line 1531 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1539 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__getopt__tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

#line 1548 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_1_0[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt__tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0
};

#line 1553 "getopt.c"
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

#line 1568 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1573 "getopt.c"
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

#line 1588 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_1_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_0
};

#line 1593 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_1_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_1
};

#line 1598 "getopt.c"
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

#line 1612 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_maybe_option_table_1[2] = {
  &mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_1,
  &mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_0
};

#line 1618 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_maybe_option_table_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1624 "getopt.c"
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

#line 1645 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_se_1_0[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt__tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0
};

#line 1650 "getopt.c"
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

#line 1665 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__getopt__pti_option_error_1__pseudo_1 = {
  &mercury__getopt__getopt__type_ctor_info_option_error_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1673 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_se_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt__getopt__pti_option_error_1__pseudo_1
};

#line 1678 "getopt.c"
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

#line 1693 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_se_1_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_maybe_option_table_se_1_0
};

#line 1698 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_se_1_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_maybe_option_table_se_1_1
};

#line 1703 "getopt.c"
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

#line 1717 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_maybe_option_table_se_1[2] = {
  &mercury__getopt__getopt__du_functor_desc_maybe_option_table_se_1_1,
  &mercury__getopt__getopt__du_functor_desc_maybe_option_table_se_1_0
};

#line 1723 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_maybe_option_table_se_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1729 "getopt.c"
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

#line 1750 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1755 "getopt.c"
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

#line 1770 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1775 "getopt.c"
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

#line 1790 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1795 "getopt.c"
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

#line 1810 "getopt.c"
static const MR_FA_TypeInfo_Struct1 mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1818 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

#line 1823 "getopt.c"
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

#line 1838 "getopt.c"
static const MR_FA_TypeInfo_Struct1 mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1846 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

#line 1851 "getopt.c"
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

#line 1866 "getopt.c"
static const MR_FA_TypeInfo_Struct1 mercury__getopt__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1874 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 1879 "getopt.c"
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

#line 1894 "getopt.c"
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

#line 1909 "getopt.c"
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

#line 1924 "getopt.c"
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

#line 1939 "getopt.c"
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

#line 1954 "getopt.c"
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

#line 1969 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_0[5] = {
  &mercury__getopt__getopt__du_functor_desc_option_data_0_6,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_7,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_8,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_9,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_10
};

#line 1978 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_data_0_0
};

#line 1983 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_2[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_data_0_1
};

#line 1988 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_3[4] = {
  &mercury__getopt__getopt__du_functor_desc_option_data_0_2,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_3,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_4,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_5
};

#line 1996 "getopt.c"
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

#line 2020 "getopt.c"
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

#line 2035 "getopt.c"
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

#line 2050 "getopt.c"
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

#line 2071 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_1_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2076 "getopt.c"
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

#line 2091 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_1_1[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__getopt__getopt__type_ctor_info_option_error_reason_0
};

#line 2098 "getopt.c"
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

#line 2113 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_1_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_error_1_0
};

#line 2118 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_1_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_error_1_1
};

#line 2123 "getopt.c"
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

#line 2137 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_error_1[2] = {
  &mercury__getopt__getopt__du_functor_desc_option_error_1_1,
  &mercury__getopt__getopt__du_functor_desc_option_error_1_0
};

#line 2143 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_error_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2149 "getopt.c"
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

#line 2170 "getopt.c"
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

#line 2185 "getopt.c"
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

#line 2200 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2205 "getopt.c"
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

#line 2220 "getopt.c"
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

#line 2235 "getopt.c"
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

#line 2250 "getopt.c"
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

#line 2265 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2270 "getopt.c"
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

#line 2285 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2290 "getopt.c"
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

#line 2305 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_0[5] = {
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_0,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_1,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_3,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_4,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_5
};

#line 2314 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_2
};

#line 2319 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_2[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_6
};

#line 2324 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_3[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_7
};

#line 2329 "getopt.c"
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

#line 2353 "getopt.c"
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

#line 2365 "getopt.c"
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

#line 2377 "getopt.c"
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

#line 2398 "getopt.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2408 "getopt.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2418 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0
};

#line 2425 "getopt.c"
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

#line 2440 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__getopt__pti_maybe_option_table_1__pseudo_1 = {
  &mercury__getopt__getopt__type_ctor_info_maybe_option_table_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2448 "getopt.c"
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

#line 2460 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_1[4] = {
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_4__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1
};

#line 2468 "getopt.c"
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

#line 2483 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_2[3] = {
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0
};

#line 2490 "getopt.c"
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

#line 2505 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_3[4] = {
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_4__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1
};

#line 2513 "getopt.c"
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

#line 2528 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_1_0
};

#line 2533 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_1_1
};

#line 2538 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_2[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_1_2
};

#line 2543 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_3[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_1_3
};

#line 2548 "getopt.c"
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

#line 2572 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_1[4] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_1_0,
  &mercury__getopt__getopt__du_functor_desc_option_ops_1_1,
  &mercury__getopt__getopt__du_functor_desc_option_ops_1_2,
  &mercury__getopt__getopt__du_functor_desc_option_ops_1_3
};

#line 2580 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_1[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 2588 "getopt.c"
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

#line 2609 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__getopt__pti_option_ops_special_1__pseudo_1 = {
  &mercury__getopt__getopt__type_ctor_info_option_ops_special_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2617 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_internal_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt__getopt__pti_option_ops_special_1__pseudo_1
};

#line 2624 "getopt.c"
static const MR_ConstString mercury__getopt__getopt__field_names_option_ops_internal_1_0[3] = {
  (MR_String) "short_option",
  (MR_String) "long_option",
  (MR_String) "special_handler"
};

#line 2631 "getopt.c"
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

#line 2646 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_internal_1_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_internal_1_0
};

#line 2651 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_internal_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_internal_1_0
  }
};

#line 2660 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_internal_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_internal_1_0
};

#line 2665 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_internal_1[1] = {
  (MR_Integer) 0
};

#line 2670 "getopt.c"
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

#line 2691 "getopt.c"
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

#line 2706 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_special_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_4__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1
};

#line 2711 "getopt.c"
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

#line 2726 "getopt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2734 "getopt.c"
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

#line 2747 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_special_1_2[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_5__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
};

#line 2752 "getopt.c"
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

#line 2767 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_1_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_special_1_0
};

#line 2772 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_1_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_special_1_1
};

#line 2777 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_1_2[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_special_1_2
};

#line 2782 "getopt.c"
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

#line 2801 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_special_1[3] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_special_1_0,
  &mercury__getopt__getopt__du_functor_desc_option_ops_special_1_1,
  &mercury__getopt__getopt__du_functor_desc_option_ops_special_1_2
};

#line 2808 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_special_1[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 2815 "getopt.c"
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

#line 2836 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_track_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_5__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
};

#line 2843 "getopt.c"
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

#line 2858 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_track_1_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_track_1_0
};

#line 2863 "getopt.c"
static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_track_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_track_1_0
  }
};

#line 2872 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_track_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_track_1_0
};

#line 2877 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_track_1[1] = {
  (MR_Integer) 0
};

#line 2882 "getopt.c"
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

#line 2903 "getopt.c"
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

#line 2924 "getopt.c"
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

#line 2939 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 2944 "getopt.c"
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

#line 2959 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2964 "getopt.c"
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

#line 2979 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2984 "getopt.c"
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

#line 2999 "getopt.c"
static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

#line 3004 "getopt.c"
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

#line 3019 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_special_data_0_0
};

#line 3024 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_special_data_0_1
};

#line 3029 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_2[1] = {
  &mercury__getopt__getopt__du_functor_desc_special_data_0_2
};

#line 3034 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_3[2] = {
  &mercury__getopt__getopt__du_functor_desc_special_data_0_3,
  &mercury__getopt__getopt__du_functor_desc_special_data_0_4
};

#line 3040 "getopt.c"
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

#line 3064 "getopt.c"
static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_special_data_0[5] = {
  &mercury__getopt__getopt__du_functor_desc_special_data_0_1,
  &mercury__getopt__getopt__du_functor_desc_special_data_0_2,
  &mercury__getopt__getopt__du_functor_desc_special_data_0_4,
  &mercury__getopt__getopt__du_functor_desc_special_data_0_0,
  &mercury__getopt__getopt__du_functor_desc_special_data_0_3
};

#line 3073 "getopt.c"
static const MR_Integer mercury__getopt__getopt__functor_number_map_special_data_0[5] = {
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 2
};

#line 3082 "getopt.c"
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

#line 3103 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_table_1_0_10001(
#line 3106 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3108 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 3110 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3)
#line 3112 "getopt.c"
{
#line 3114 "getopt.c"
  {
#line 3116 "getopt.c"
    MR_bool mercury__getopt__succeeded;

#line 3119 "getopt.c"
    {
#line 3121 "getopt.c"
      mercury__getopt__succeeded = mercury__getopt____Unify____maybe_option_table_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    }
#line 3124 "getopt.c"
    return mercury__getopt__succeeded;
#line 3126 "getopt.c"
  }
#line 3128 "getopt.c"
}

#line 3131 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____maybe_option_table_1_0_10001(
#line 3134 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3136 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 3138 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 3140 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4)
#line 3142 "getopt.c"
{
#line 3144 "getopt.c"
  {
#line 3146 "getopt.c"
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

#line 3149 "getopt.c"
    {
#line 3151 "getopt.c"
      mercury__getopt____Compare____maybe_option_table_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), &mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_3), ((MR_Word) mercury__getopt__wrapper_arg_4));
    }
#line 3154 "getopt.c"
    *mercury__getopt__wrapper_arg_2 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
#line 3156 "getopt.c"
  }
#line 3158 "getopt.c"
}

#line 3161 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_table_se_1_0_10001(
#line 3164 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3166 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 3168 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3)
#line 3170 "getopt.c"
{
#line 3172 "getopt.c"
  {
#line 3174 "getopt.c"
    MR_bool mercury__getopt__succeeded;

#line 3177 "getopt.c"
    {
#line 3179 "getopt.c"
      mercury__getopt__succeeded = mercury__getopt____Unify____maybe_option_table_se_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    }
#line 3182 "getopt.c"
    return mercury__getopt__succeeded;
#line 3184 "getopt.c"
  }
#line 3186 "getopt.c"
}

#line 3189 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____maybe_option_table_se_1_0_10001(
#line 3192 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3194 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 3196 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 3198 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4)
#line 3200 "getopt.c"
{
#line 3202 "getopt.c"
  {
#line 3204 "getopt.c"
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

#line 3207 "getopt.c"
    {
#line 3209 "getopt.c"
      mercury__getopt____Compare____maybe_option_table_se_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), &mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_3), ((MR_Word) mercury__getopt__wrapper_arg_4));
    }
#line 3212 "getopt.c"
    *mercury__getopt__wrapper_arg_2 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
#line 3214 "getopt.c"
  }
#line 3216 "getopt.c"
}

#line 3219 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_data_0_0_10001(
#line 3222 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3224 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2)
#line 3226 "getopt.c"
{
#line 3228 "getopt.c"
  {
#line 3230 "getopt.c"
    MR_bool mercury__getopt__succeeded;

#line 3233 "getopt.c"
    {
#line 3235 "getopt.c"
      mercury__getopt__succeeded = mercury__getopt____Unify____option_data_0_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2));
    }
#line 3238 "getopt.c"
    return mercury__getopt__succeeded;
#line 3240 "getopt.c"
  }
#line 3242 "getopt.c"
}

#line 3245 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_data_0_0_10001(
#line 3248 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_1,
#line 3250 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 3252 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3)
#line 3254 "getopt.c"
{
#line 3256 "getopt.c"
  {
#line 3258 "getopt.c"
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

#line 3261 "getopt.c"
    {
#line 3263 "getopt.c"
      mercury__getopt____Compare____option_data_0_0(&mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    }
#line 3266 "getopt.c"
    *mercury__getopt__wrapper_arg_1 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
#line 3268 "getopt.c"
  }
#line 3270 "getopt.c"
}

#line 3273 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_error_1_0_10001(
#line 3276 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3278 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 3280 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3)
#line 3282 "getopt.c"
{
#line 3284 "getopt.c"
  {
#line 3286 "getopt.c"
    MR_bool mercury__getopt__succeeded;

#line 3289 "getopt.c"
    {
#line 3291 "getopt.c"
      mercury__getopt__succeeded = mercury__getopt____Unify____option_error_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    }
#line 3294 "getopt.c"
    return mercury__getopt__succeeded;
#line 3296 "getopt.c"
  }
#line 3298 "getopt.c"
}

#line 3301 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_error_1_0_10001(
#line 3304 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3306 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 3308 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 3310 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4)
#line 3312 "getopt.c"
{
#line 3314 "getopt.c"
  {
#line 3316 "getopt.c"
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

#line 3319 "getopt.c"
    {
#line 3321 "getopt.c"
      mercury__getopt____Compare____option_error_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), &mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_3), ((MR_Word) mercury__getopt__wrapper_arg_4));
    }
#line 3324 "getopt.c"
    *mercury__getopt__wrapper_arg_2 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
#line 3326 "getopt.c"
  }
#line 3328 "getopt.c"
}

#line 3331 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_error_reason_0_0_10001(
#line 3334 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3336 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2)
#line 3338 "getopt.c"
{
#line 3340 "getopt.c"
  {
#line 3342 "getopt.c"
    MR_bool mercury__getopt__succeeded;

#line 3345 "getopt.c"
    {
#line 3347 "getopt.c"
      mercury__getopt__succeeded = mercury__getopt____Unify____option_error_reason_0_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2));
    }
#line 3350 "getopt.c"
    return mercury__getopt__succeeded;
#line 3352 "getopt.c"
  }
#line 3354 "getopt.c"
}

#line 3357 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_error_reason_0_0_10001(
#line 3360 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_1,
#line 3362 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 3364 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3)
#line 3366 "getopt.c"
{
#line 3368 "getopt.c"
  {
#line 3370 "getopt.c"
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

#line 3373 "getopt.c"
    {
#line 3375 "getopt.c"
      mercury__getopt____Compare____option_error_reason_0_0(&mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    }
#line 3378 "getopt.c"
    *mercury__getopt__wrapper_arg_1 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
#line 3380 "getopt.c"
  }
#line 3382 "getopt.c"
}

#line 3385 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_1_0_10001(
#line 3388 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3390 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 3392 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3)
#line 3394 "getopt.c"
{
#line 3396 "getopt.c"
  {
#line 3398 "getopt.c"
    MR_bool mercury__getopt__succeeded;

#line 3401 "getopt.c"
    {
#line 3403 "getopt.c"
      mercury__getopt__succeeded = mercury__getopt____Unify____option_ops_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    }
#line 3406 "getopt.c"
    return mercury__getopt__succeeded;
#line 3408 "getopt.c"
  }
#line 3410 "getopt.c"
}

#line 3413 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_ops_1_0_10001(
#line 3416 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3418 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 3420 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 3422 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4)
#line 3424 "getopt.c"
{
#line 3426 "getopt.c"
  {
#line 3428 "getopt.c"
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

#line 3431 "getopt.c"
    {
#line 3433 "getopt.c"
      mercury__getopt____Compare____option_ops_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), &mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_3), ((MR_Word) mercury__getopt__wrapper_arg_4));
    }
#line 3436 "getopt.c"
    *mercury__getopt__wrapper_arg_2 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
#line 3438 "getopt.c"
  }
#line 3440 "getopt.c"
}

#line 3443 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_internal_1_0_10001(
#line 3446 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3448 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 3450 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3)
#line 3452 "getopt.c"
{
#line 3454 "getopt.c"
  {
#line 3456 "getopt.c"
    MR_bool mercury__getopt__succeeded;

#line 3459 "getopt.c"
    {
#line 3461 "getopt.c"
      mercury__getopt__succeeded = mercury__getopt____Unify____option_ops_internal_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    }
#line 3464 "getopt.c"
    return mercury__getopt__succeeded;
#line 3466 "getopt.c"
  }
#line 3468 "getopt.c"
}

#line 3471 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_ops_internal_1_0_10001(
#line 3474 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3476 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 3478 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 3480 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4)
#line 3482 "getopt.c"
{
#line 3484 "getopt.c"
  {
#line 3486 "getopt.c"
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

#line 3489 "getopt.c"
    {
#line 3491 "getopt.c"
      mercury__getopt____Compare____option_ops_internal_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), &mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_3), ((MR_Word) mercury__getopt__wrapper_arg_4));
    }
#line 3494 "getopt.c"
    *mercury__getopt__wrapper_arg_2 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
#line 3496 "getopt.c"
  }
#line 3498 "getopt.c"
}

#line 3501 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_special_1_0_10001(
#line 3504 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3506 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 3508 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3)
#line 3510 "getopt.c"
{
#line 3512 "getopt.c"
  {
#line 3514 "getopt.c"
    MR_bool mercury__getopt__succeeded;

#line 3517 "getopt.c"
    {
#line 3519 "getopt.c"
      mercury__getopt__succeeded = mercury__getopt____Unify____option_ops_special_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    }
#line 3522 "getopt.c"
    return mercury__getopt__succeeded;
#line 3524 "getopt.c"
  }
#line 3526 "getopt.c"
}

#line 3529 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_ops_special_1_0_10001(
#line 3532 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3534 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 3536 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 3538 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4)
#line 3540 "getopt.c"
{
#line 3542 "getopt.c"
  {
#line 3544 "getopt.c"
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

#line 3547 "getopt.c"
    {
#line 3549 "getopt.c"
      mercury__getopt____Compare____option_ops_special_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), &mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_3), ((MR_Word) mercury__getopt__wrapper_arg_4));
    }
#line 3552 "getopt.c"
    *mercury__getopt__wrapper_arg_2 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
#line 3554 "getopt.c"
  }
#line 3556 "getopt.c"
}

#line 3559 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_track_1_0_10001(
#line 3562 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3564 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 3566 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3)
#line 3568 "getopt.c"
{
#line 3570 "getopt.c"
  {
#line 3572 "getopt.c"
    MR_bool mercury__getopt__succeeded;

#line 3575 "getopt.c"
    {
#line 3577 "getopt.c"
      mercury__getopt__succeeded = mercury__getopt____Unify____option_ops_track_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    }
#line 3580 "getopt.c"
    return mercury__getopt__succeeded;
#line 3582 "getopt.c"
  }
#line 3584 "getopt.c"
}

#line 3587 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_ops_track_1_0_10001(
#line 3590 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3592 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 3594 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 3596 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4)
#line 3598 "getopt.c"
{
#line 3600 "getopt.c"
  {
#line 3602 "getopt.c"
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

#line 3605 "getopt.c"
    {
#line 3607 "getopt.c"
      mercury__getopt____Compare____option_ops_track_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), &mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_3), ((MR_Word) mercury__getopt__wrapper_arg_4));
    }
#line 3610 "getopt.c"
    *mercury__getopt__wrapper_arg_2 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
#line 3612 "getopt.c"
  }
#line 3614 "getopt.c"
}

#line 3617 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____option_table_1_0_10001(
#line 3620 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3622 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 3624 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3)
#line 3626 "getopt.c"
{
#line 3628 "getopt.c"
  {
#line 3630 "getopt.c"
    MR_bool mercury__getopt__succeeded;

#line 3633 "getopt.c"
    {
#line 3635 "getopt.c"
      mercury__getopt__succeeded = mercury__getopt____Unify____option_table_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    }
#line 3638 "getopt.c"
    return mercury__getopt__succeeded;
#line 3640 "getopt.c"
  }
#line 3642 "getopt.c"
}

#line 3645 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____option_table_1_0_10001(
#line 3648 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3650 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_2,
#line 3652 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3,
#line 3654 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_4)
#line 3656 "getopt.c"
{
#line 3658 "getopt.c"
  {
#line 3660 "getopt.c"
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

#line 3663 "getopt.c"
    {
#line 3665 "getopt.c"
      mercury__getopt____Compare____option_table_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), &mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_3), ((MR_Word) mercury__getopt__wrapper_arg_4));
    }
#line 3668 "getopt.c"
    *mercury__getopt__wrapper_arg_2 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
#line 3670 "getopt.c"
  }
#line 3672 "getopt.c"
}

#line 3675 "getopt.c"
static MR_bool MR_CALL 
mercury__getopt____Unify____special_data_0_0_10001(
#line 3678 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_1,
#line 3680 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2)
#line 3682 "getopt.c"
{
#line 3684 "getopt.c"
  {
#line 3686 "getopt.c"
    MR_bool mercury__getopt__succeeded;

#line 3689 "getopt.c"
    {
#line 3691 "getopt.c"
      mercury__getopt__succeeded = mercury__getopt____Unify____special_data_0_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2));
    }
#line 3694 "getopt.c"
    return mercury__getopt__succeeded;
#line 3696 "getopt.c"
  }
#line 3698 "getopt.c"
}

#line 3701 "getopt.c"
static void MR_CALL 
mercury__getopt____Compare____special_data_0_0_10001(
#line 3704 "getopt.c"
  MR_Box * mercury__getopt__wrapper_arg_1,
#line 3706 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_2,
#line 3708 "getopt.c"
  MR_Box mercury__getopt__wrapper_arg_3)
#line 3710 "getopt.c"
{
#line 3712 "getopt.c"
  {
#line 3714 "getopt.c"
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

#line 3717 "getopt.c"
    {
#line 3719 "getopt.c"
      mercury__getopt____Compare____special_data_0_0(&mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    }
#line 3722 "getopt.c"
    *mercury__getopt__wrapper_arg_1 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
#line 3724 "getopt.c"
  }
#line 3726 "getopt.c"
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

#line 1024 "getopt.m"
static void MR_CALL 
mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(
#line 1024 "getopt.m"
  MR_Box mercury__getopt__Flag_5,
#line 1024 "getopt.m"
  MR_String mercury__getopt__Option_6,
#line 1024 "getopt.m"
  MR_String mercury__getopt__Arg_7,
#line 1024 "getopt.m"
  MR_Word * mercury__getopt__Result_8)
#line 1024 "getopt.m"
{
#line 1027 "getopt.m"
  {
#line 1027 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 1027 "getopt.m"
    MR_Word mercury__getopt__Reason_9;
#line 1027 "getopt.m"
    MR_Word mercury__getopt__Error_10;

#line 1028 "getopt.m"
    {
#line 1028 "getopt.m"
      mercury__getopt__Reason_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "getopt.m"
      MR_hl_field(MR_mktag(3), mercury__getopt__Reason_9, 0) = ((MR_Box) (mercury__getopt__Arg_7));
#line 1028 "getopt.m"
    }
#line 1029 "getopt.m"
    {
#line 1029 "getopt.m"
      mercury__getopt__Error_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1029 "getopt.m"
      MR_hl_field(MR_mktag(1), mercury__getopt__Error_10, 0) = mercury__getopt__Flag_5;
#line 1029 "getopt.m"
      MR_hl_field(MR_mktag(1), mercury__getopt__Error_10, 1) = ((MR_Box) (mercury__getopt__Option_6));
#line 1029 "getopt.m"
      MR_hl_field(MR_mktag(1), mercury__getopt__Error_10, 2) = ((MR_Box) (mercury__getopt__Reason_9));
#line 1029 "getopt.m"
    }
#line 1030 "getopt.m"
    {
#line 1030 "getopt.m"
      MR_Word base;
#line 1030 "getopt.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "getopt.m"
      *mercury__getopt__Result_8 = base;
#line 1030 "getopt.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_10));
#line 1030 "getopt.m"
    }
#line 1027 "getopt.m"
  }
#line 1024 "getopt.m"
}

#line 423 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_2(
#line 423 "getopt.m"
  void * mercury__getopt__env_ptr_arg)
#line 423 "getopt.m"
{
#line 423 "getopt.m"
  {
#line 423 "getopt.m"
    struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0_s * mercury__getopt__env_ptr = (struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0_s *) mercury__getopt__env_ptr_arg;

#line 423 "getopt.m"
    (mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__OptionData_7 = ((MR_Word) (mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__conv1_OptionData_7);
#line 423 "getopt.m"
    {
#line 423 "getopt.m"
      mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_1(mercury__getopt__env_ptr);
#line 423 "getopt.m"
      return;
    }
#line 423 "getopt.m"
  }
#line 423 "getopt.m"
}

#line 421 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_1(
#line 421 "getopt.m"
  void * mercury__getopt__env_ptr_arg)
#line 421 "getopt.m"
{
#line 421 "getopt.m"
  {
#line 421 "getopt.m"
    struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0_s * mercury__getopt__env_ptr = (struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0_s *) mercury__getopt__env_ptr_arg;

#line 422 "getopt.m"
    {
#line 422 "getopt.m"
      MR_Word base;
#line 422 "getopt.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 422 "getopt.m"
      *((mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__HeadVar__3_10) = base;
#line 422 "getopt.m"
      MR_hl_field(MR_mktag(0), base, 0) = (mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__Option_6;
#line 422 "getopt.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__OptionData_7));
#line 422 "getopt.m"
    }
#line 422 "getopt.m"
    {
#line 422 "getopt.m"
      ((mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__cont)((mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__cont_env_ptr);
#line 422 "getopt.m"
      return;
    }
#line 421 "getopt.m"
  }
#line 421 "getopt.m"
}

#line 421 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0(
#line 421 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_12,
#line 421 "getopt.m"
  MR_Word mercury__getopt__OptionDefaultsPred_3,
#line 421 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__3_10,
#line 421 "getopt.m"
  MR_Cont mercury__getopt__cont,
#line 421 "getopt.m"
  void * mercury__getopt__cont_env_ptr)
#line 421 "getopt.m"
{
#line 421 "getopt.m"
  {
#line 421 "getopt.m"
    struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0_s mercury__getopt__env;

#line 421 "getopt.m"
    (mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__HeadVar__3_10 = mercury__getopt__HeadVar__3_10;
#line 421 "getopt.m"
    (mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__cont = mercury__getopt__cont;
#line 421 "getopt.m"
    (mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__cont_env_ptr = mercury__getopt__cont_env_ptr;
#line 421 "getopt.m"
    {
#line 421 "getopt.m"
      MR_bool mercury__getopt__succeeded;
#line 423 "getopt.m"
      void MR_CALL (* mercury__getopt__func_0)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionDefaultsPred_3, (MR_Integer) 1)));

#line 423 "getopt.m"
      {
#line 423 "getopt.m"
        mercury__getopt__func_0(((MR_Box) mercury__getopt__OptionDefaultsPred_3), &(mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__Option_6, &(mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__conv1_OptionData_7, mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_2, &mercury__getopt__env);
      }
#line 421 "getopt.m"
    }
#line 421 "getopt.m"
  }
#line 421 "getopt.m"
}

#line 416 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_2(
#line 416 "getopt.m"
  void * mercury__getopt__env_ptr_arg)
#line 416 "getopt.m"
{
#line 416 "getopt.m"
  {
#line 416 "getopt.m"
    struct mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0_s * mercury__getopt__env_ptr = (struct mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0_s *) mercury__getopt__env_ptr_arg;

#line 416 "getopt.m"
    (mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__OptionData_7 = ((MR_Word) (mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__conv1_OptionData_7);
#line 416 "getopt.m"
    {
#line 416 "getopt.m"
      mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_1(mercury__getopt__env_ptr);
#line 416 "getopt.m"
      return;
    }
#line 416 "getopt.m"
  }
#line 416 "getopt.m"
}

#line 414 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_1(
#line 414 "getopt.m"
  void * mercury__getopt__env_ptr_arg)
#line 414 "getopt.m"
{
#line 414 "getopt.m"
  {
#line 414 "getopt.m"
    struct mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0_s * mercury__getopt__env_ptr = (struct mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0_s *) mercury__getopt__env_ptr_arg;

#line 415 "getopt.m"
    {
#line 415 "getopt.m"
      MR_Word base;
#line 415 "getopt.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 415 "getopt.m"
      *((mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__HeadVar__3_10) = base;
#line 415 "getopt.m"
      MR_hl_field(MR_mktag(0), base, 0) = (mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__Option_6;
#line 415 "getopt.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__OptionData_7));
#line 415 "getopt.m"
    }
#line 415 "getopt.m"
    {
#line 415 "getopt.m"
      ((mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__cont)((mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__cont_env_ptr);
#line 415 "getopt.m"
      return;
    }
#line 414 "getopt.m"
  }
#line 414 "getopt.m"
}

#line 414 "getopt.m"
static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0(
#line 414 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_12,
#line 414 "getopt.m"
  MR_Word mercury__getopt__OptionDefaultsPred_3,
#line 414 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__3_10,
#line 414 "getopt.m"
  MR_Cont mercury__getopt__cont,
#line 414 "getopt.m"
  void * mercury__getopt__cont_env_ptr)
#line 414 "getopt.m"
{
#line 414 "getopt.m"
  {
#line 414 "getopt.m"
    struct mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0_s mercury__getopt__env;

#line 414 "getopt.m"
    (mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__HeadVar__3_10 = mercury__getopt__HeadVar__3_10;
#line 414 "getopt.m"
    (mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__cont = mercury__getopt__cont;
#line 414 "getopt.m"
    (mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__cont_env_ptr = mercury__getopt__cont_env_ptr;
#line 414 "getopt.m"
    {
#line 414 "getopt.m"
      MR_bool mercury__getopt__succeeded;
#line 416 "getopt.m"
      void MR_CALL (* mercury__getopt__func_0)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionDefaultsPred_3, (MR_Integer) 1)));

#line 416 "getopt.m"
      {
#line 416 "getopt.m"
        mercury__getopt__func_0(((MR_Box) mercury__getopt__OptionDefaultsPred_3), &(mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__Option_6, &(mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__conv1_OptionData_7, mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_2, &mercury__getopt__env);
      }
#line 414 "getopt.m"
    }
#line 414 "getopt.m"
  }
#line 414 "getopt.m"
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
#line 4047 "getopt.c"
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
#line 4061 "getopt.c"
            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "getopt.m"
          else
#line 263 "getopt.m"
            if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4067 "getopt.c"
              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "getopt.m"
            else
#line 263 "getopt.m"
              if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4073 "getopt.c"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "getopt.m"
              else
#line 4077 "getopt.c"
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
#line 4090 "getopt.c"
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
#line 4133 "getopt.c"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "getopt.m"
                else
#line 263 "getopt.m"
                  if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4139 "getopt.c"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "getopt.m"
                  else
#line 4143 "getopt.c"
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
#line 4158 "getopt.c"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "getopt.m"
              else
#line 263 "getopt.m"
                if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4164 "getopt.c"
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
#line 4203 "getopt.c"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "getopt.m"
                    else
#line 4207 "getopt.c"
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
#line 4222 "getopt.c"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "getopt.m"
                else
#line 263 "getopt.m"
                  if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4228 "getopt.c"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "getopt.m"
                  else
#line 263 "getopt.m"
                    if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4234 "getopt.c"
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
#line 4258 "getopt.c"
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
#line 4271 "getopt.c"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "getopt.m"
                else
#line 263 "getopt.m"
                  if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4277 "getopt.c"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "getopt.m"
                  else
#line 263 "getopt.m"
                    if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4283 "getopt.c"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "getopt.m"
                    else
#line 263 "getopt.m"
                      if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4289 "getopt.c"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "getopt.m"
                      else
#line 263 "getopt.m"
                        {
#line 263 "getopt.m"
                          MR_String mercury__getopt__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
#line 263 "getopt.m"
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

#line 4315 "getopt.c"

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
#line 4411 "getopt.c"
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
#line 4436 "getopt.c"
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
#line 4463 "getopt.c"
                    mercury__getopt__TypeInfo_15_15 = (MR_Word) &mercury__getopt_scalar_common_1[1];
#line 4465 "getopt.c"
                    {
#line 4467 "getopt.c"
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
#line 4491 "getopt.c"
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
#line 4600 "getopt.c"
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
#line 4626 "getopt.c"
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
#line 4646 "getopt.c"
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

#line 4715 "getopt.c"
        {
#line 4717 "getopt.c"
          mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_3_3, (MR_Word) mercury__getopt__V_6_6);
        }
#line 205 "getopt.m"
        if (mercury__getopt__succeeded)
#line 205 "getopt.m"
          {
#line 4724 "getopt.c"
            {
#line 4726 "getopt.c"
              mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_4_4, (MR_Word) mercury__getopt__V_7_7);
            }
#line 205 "getopt.m"
            if (mercury__getopt__succeeded)
#line 4731 "getopt.c"
              {
#line 4733 "getopt.c"
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

#line 377 "getopt.m"
void MR_CALL 
mercury__getopt____Compare____option_ops_special_1_0(
#line 377 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_18,
#line 377 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__1_1,
#line 377 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2,
#line 377 "getopt.m"
  MR_Word mercury__getopt__HeadVar__3_3)
#line 377 "getopt.m"
{
#line 377 "getopt.m"
  {
#line 377 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 377 "getopt.m"
    MR_Integer mercury__getopt__CastX_16 = (MR_Integer) mercury__getopt__HeadVar__2_2;
#line 377 "getopt.m"
    MR_Integer mercury__getopt__CastY_17 = (MR_Integer) mercury__getopt__HeadVar__3_3;

#line 377 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_16 == mercury__getopt__CastY_17);
#line 377 "getopt.m"
    if (mercury__getopt__succeeded)
#line 4773 "getopt.c"
      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 377 "getopt.m"
    else
#line 377 "getopt.m"
      if ((mercury__getopt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 377 "getopt.m"
        if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 377 "getopt.m"
          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 377 "getopt.m"
        else
#line 377 "getopt.m"
          if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4787 "getopt.c"
            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 377 "getopt.m"
          else
#line 4791 "getopt.c"
            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 377 "getopt.m"
      else
#line 377 "getopt.m"
        if (((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 377 "getopt.m"
          {
#line 377 "getopt.m"
            MR_Word mercury__getopt__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

#line 377 "getopt.m"
            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4804 "getopt.c"
              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 377 "getopt.m"
            else
#line 377 "getopt.m"
              if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 377 "getopt.m"
                {
#line 377 "getopt.m"
                  MR_Word mercury__getopt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));

#line 377 "getopt.m"
                  {
#line 377 "getopt.m"
                    mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt__HeadVar__1_1, (MR_Word) mercury__getopt__V_39_39, (MR_Word) mercury__getopt__V_8_8);
#line 377 "getopt.m"
                    return;
                  }
#line 377 "getopt.m"
                }
#line 377 "getopt.m"
              else
#line 4826 "getopt.c"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 377 "getopt.m"
          }
#line 377 "getopt.m"
        else
#line 377 "getopt.m"
          {
#line 377 "getopt.m"
            MR_Word mercury__getopt__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

#line 377 "getopt.m"
            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4839 "getopt.c"
              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 377 "getopt.m"
            else
#line 377 "getopt.m"
              if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4845 "getopt.c"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 377 "getopt.m"
              else
#line 377 "getopt.m"
                {
#line 377 "getopt.m"
                  MR_Word mercury__getopt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));

#line 377 "getopt.m"
                  {
#line 377 "getopt.m"
                    mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt__HeadVar__1_1, (MR_Word) mercury__getopt__V_40_40, (MR_Word) mercury__getopt__V_15_15);
#line 377 "getopt.m"
                    return;
                  }
#line 377 "getopt.m"
                }
#line 377 "getopt.m"
          }
#line 377 "getopt.m"
  }
#line 377 "getopt.m"
}

#line 377 "getopt.m"
MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_special_1_0(
#line 377 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_11,
#line 377 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 377 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2)
#line 377 "getopt.m"
{
#line 377 "getopt.m"
  {
#line 377 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 377 "getopt.m"
    MR_Integer mercury__getopt__CastX_9 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 377 "getopt.m"
    MR_Integer mercury__getopt__CastY_10 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 377 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_9 == mercury__getopt__CastY_10);
#line 377 "getopt.m"
    if (mercury__getopt__succeeded)
#line 377 "getopt.m"
      mercury__getopt__succeeded = MR_TRUE;
#line 377 "getopt.m"
    else
#line 377 "getopt.m"
      if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 377 "getopt.m"
        {
#line 377 "getopt.m"
          MR_Integer mercury__getopt__CastX_3 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 377 "getopt.m"
          MR_Integer mercury__getopt__CastY_4 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 377 "getopt.m"
          mercury__getopt__succeeded = (mercury__getopt__CastY_4 == mercury__getopt__CastX_3);
#line 377 "getopt.m"
        }
#line 377 "getopt.m"
      else
#line 377 "getopt.m"
        if (((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 377 "getopt.m"
          {
#line 377 "getopt.m"
            MR_Word mercury__getopt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 377 "getopt.m"
            MR_Word mercury__getopt__V_6_6;

#line 377 "getopt.m"
            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 377 "getopt.m"
            if (mercury__getopt__succeeded)
#line 377 "getopt.m"
              {
#line 377 "getopt.m"
                mercury__getopt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 4930 "getopt.c"
                {
#line 4932 "getopt.c"
                  return mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_5_5, (MR_Word) mercury__getopt__V_6_6);
                }
#line 377 "getopt.m"
              }
#line 377 "getopt.m"
          }
#line 377 "getopt.m"
        else
#line 377 "getopt.m"
          {
#line 377 "getopt.m"
            MR_Word mercury__getopt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 377 "getopt.m"
            MR_Word mercury__getopt__V_8_8;

#line 377 "getopt.m"
            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 377 "getopt.m"
            if (mercury__getopt__succeeded)
#line 377 "getopt.m"
              {
#line 377 "getopt.m"
                mercury__getopt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 4956 "getopt.c"
                {
#line 4958 "getopt.c"
                  return mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_7_7, (MR_Word) mercury__getopt__V_8_8);
                }
#line 377 "getopt.m"
              }
#line 377 "getopt.m"
          }
#line 377 "getopt.m"
    return mercury__getopt__succeeded;
#line 377 "getopt.m"
  }
#line 377 "getopt.m"
}

#line 391 "getopt.m"
void MR_CALL 
mercury__getopt____Compare____option_ops_internal_1_0(
#line 391 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_14,
#line 391 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__1_1,
#line 391 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2,
#line 391 "getopt.m"
  MR_Word mercury__getopt__HeadVar__3_3)
#line 391 "getopt.m"
{
#line 391 "getopt.m"
  {
#line 391 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 391 "getopt.m"
    MR_Integer mercury__getopt__CastX_12 = (MR_Integer) mercury__getopt__HeadVar__2_2;
#line 391 "getopt.m"
    MR_Integer mercury__getopt__CastY_13 = (MR_Integer) mercury__getopt__HeadVar__3_3;

#line 391 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_12 == mercury__getopt__CastY_13);
#line 391 "getopt.m"
    if (mercury__getopt__succeeded)
#line 4998 "getopt.c"
      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
#line 391 "getopt.m"
    else
#line 391 "getopt.m"
      {
#line 391 "getopt.m"
        MR_Word mercury__getopt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 391 "getopt.m"
        MR_Word mercury__getopt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 391 "getopt.m"
        MR_Word mercury__getopt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
#line 391 "getopt.m"
        MR_Word mercury__getopt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
#line 391 "getopt.m"
        MR_Word mercury__getopt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
#line 391 "getopt.m"
        MR_Word mercury__getopt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 2)));
#line 391 "getopt.m"
        MR_Word mercury__getopt__V_10_10;

#line 391 "getopt.m"
        {
#line 391 "getopt.m"
          mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__V_10_10, (MR_Word) mercury__getopt__V_4_4, (MR_Word) mercury__getopt__V_7_7);
        }
#line 5024 "getopt.c"
        mercury__getopt__succeeded = (mercury__getopt__V_10_10 == (MR_Integer) 0);
#line 391 "getopt.m"
        mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 391 "getopt.m"
        if (mercury__getopt__succeeded)
#line 391 "getopt.m"
          *mercury__getopt__HeadVar__1_1 = mercury__getopt__V_10_10;
#line 391 "getopt.m"
        else
#line 391 "getopt.m"
          {
#line 391 "getopt.m"
            MR_Word mercury__getopt__V_11_11;

#line 391 "getopt.m"
            {
#line 391 "getopt.m"
              mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__V_11_11, (MR_Word) mercury__getopt__V_5_5, (MR_Word) mercury__getopt__V_8_8);
            }
#line 5044 "getopt.c"
            mercury__getopt__succeeded = (mercury__getopt__V_11_11 == (MR_Integer) 0);
#line 391 "getopt.m"
            mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 391 "getopt.m"
            if (mercury__getopt__succeeded)
#line 391 "getopt.m"
              *mercury__getopt__HeadVar__1_1 = mercury__getopt__V_11_11;
#line 391 "getopt.m"
            else
#line 391 "getopt.m"
              {
#line 391 "getopt.m"
                mercury__getopt____Compare____option_ops_special_1_0(mercury__getopt__TypeInfo_for_OptionType_14, mercury__getopt__HeadVar__1_1, mercury__getopt__V_6_6, mercury__getopt__V_9_9);
#line 391 "getopt.m"
                return;
              }
#line 391 "getopt.m"
          }
#line 391 "getopt.m"
      }
#line 391 "getopt.m"
  }
#line 391 "getopt.m"
}

#line 391 "getopt.m"
MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_internal_1_0(
#line 391 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_11,
#line 391 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 391 "getopt.m"
  MR_Word mercury__getopt__HeadVar__2_2)
#line 391 "getopt.m"
{
#line 391 "getopt.m"
  {
#line 391 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 391 "getopt.m"
    MR_Integer mercury__getopt__CastX_9 = (MR_Integer) mercury__getopt__HeadVar__1_1;
#line 391 "getopt.m"
    MR_Integer mercury__getopt__CastY_10 = (MR_Integer) mercury__getopt__HeadVar__2_2;

#line 391 "getopt.m"
    mercury__getopt__succeeded = (mercury__getopt__CastX_9 == mercury__getopt__CastY_10);
#line 391 "getopt.m"
    if (mercury__getopt__succeeded)
#line 391 "getopt.m"
      mercury__getopt__succeeded = MR_TRUE;
#line 391 "getopt.m"
    else
#line 391 "getopt.m"
      {
#line 391 "getopt.m"
        MR_Word mercury__getopt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 391 "getopt.m"
        MR_Word mercury__getopt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
#line 391 "getopt.m"
        MR_Word mercury__getopt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 2)));
#line 391 "getopt.m"
        MR_Word mercury__getopt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
#line 391 "getopt.m"
        MR_Word mercury__getopt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
#line 391 "getopt.m"
        MR_Word mercury__getopt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));

#line 5113 "getopt.c"
        {
#line 5115 "getopt.c"
          mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_3_3, (MR_Word) mercury__getopt__V_6_6);
        }
#line 391 "getopt.m"
        if (mercury__getopt__succeeded)
#line 391 "getopt.m"
          {
#line 5122 "getopt.c"
            {
#line 5124 "getopt.c"
              mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_4_4, (MR_Word) mercury__getopt__V_7_7);
            }
#line 391 "getopt.m"
            if (mercury__getopt__succeeded)
#line 5129 "getopt.c"
              {
#line 5131 "getopt.c"
                return mercury__getopt__succeeded = mercury__getopt____Unify____option_ops_special_1_0(mercury__getopt__TypeInfo_for_OptionType_11, mercury__getopt__V_5_5, mercury__getopt__V_8_8);
              }
#line 391 "getopt.m"
          }
#line 391 "getopt.m"
      }
#line 391 "getopt.m"
    return mercury__getopt__succeeded;
#line 391 "getopt.m"
  }
#line 391 "getopt.m"
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
#line 5171 "getopt.c"
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
#line 5204 "getopt.c"
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
#line 5224 "getopt.c"
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
#line 5249 "getopt.c"
              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "getopt.m"
            else
#line 177 "getopt.m"
              if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5255 "getopt.c"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "getopt.m"
              else
#line 5259 "getopt.c"
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
#line 5280 "getopt.c"
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
#line 5304 "getopt.c"
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
#line 5324 "getopt.c"
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
#line 5344 "getopt.c"
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
#line 5371 "getopt.c"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "getopt.m"
                else
#line 5375 "getopt.c"
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
#line 5394 "getopt.c"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "getopt.m"
              else
#line 177 "getopt.m"
                if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5400 "getopt.c"
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
#line 5422 "getopt.c"
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
#line 5442 "getopt.c"
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
#line 5465 "getopt.c"
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
#line 5484 "getopt.c"
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "getopt.m"
              else
#line 177 "getopt.m"
                if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5490 "getopt.c"
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "getopt.m"
                else
#line 177 "getopt.m"
                  if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5496 "getopt.c"
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
#line 5518 "getopt.c"
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
#line 5538 "getopt.c"
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
#line 5558 "getopt.c"
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
#line 5645 "getopt.c"
              {
#line 5647 "getopt.c"
                mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_3_3, (MR_Word) mercury__getopt__V_6_6);
              }
#line 177 "getopt.m"
              if (mercury__getopt__succeeded)
#line 177 "getopt.m"
                {
#line 5654 "getopt.c"
                  {
#line 5656 "getopt.c"
                    mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_4_4, (MR_Word) mercury__getopt__V_7_7);
                  }
#line 177 "getopt.m"
                  if (mercury__getopt__succeeded)
#line 5661 "getopt.c"
                    {
#line 5663 "getopt.c"
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
#line 5709 "getopt.c"
                {
#line 5711 "getopt.c"
                  mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_9_9, (MR_Word) mercury__getopt__V_13_13);
                }
#line 177 "getopt.m"
                if (mercury__getopt__succeeded)
#line 177 "getopt.m"
                  {
#line 5718 "getopt.c"
                    {
#line 5720 "getopt.c"
                      mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_10_10, (MR_Word) mercury__getopt__V_14_14);
                    }
#line 177 "getopt.m"
                    if (mercury__getopt__succeeded)
#line 177 "getopt.m"
                      {
#line 5727 "getopt.c"
                        {
#line 5729 "getopt.c"
                          mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_11_11, (MR_Word) mercury__getopt__V_15_15);
                        }
#line 177 "getopt.m"
                        if (mercury__getopt__succeeded)
#line 5734 "getopt.c"
                          {
#line 5736 "getopt.c"
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
#line 5778 "getopt.c"
                  {
#line 5780 "getopt.c"
                    mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_17_17, (MR_Word) mercury__getopt__V_20_20);
                  }
#line 177 "getopt.m"
                  if (mercury__getopt__succeeded)
#line 177 "getopt.m"
                    {
#line 5787 "getopt.c"
                      {
#line 5789 "getopt.c"
                        mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_18_18, (MR_Word) mercury__getopt__V_21_21);
                      }
#line 177 "getopt.m"
                      if (mercury__getopt__succeeded)
#line 5794 "getopt.c"
                        {
#line 5796 "getopt.c"
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
#line 5840 "getopt.c"
                  {
#line 5842 "getopt.c"
                    mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_23_23, (MR_Word) mercury__getopt__V_27_27);
                  }
#line 177 "getopt.m"
                  if (mercury__getopt__succeeded)
#line 177 "getopt.m"
                    {
#line 5849 "getopt.c"
                      {
#line 5851 "getopt.c"
                        mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_24_24, (MR_Word) mercury__getopt__V_28_28);
                      }
#line 177 "getopt.m"
                      if (mercury__getopt__succeeded)
#line 177 "getopt.m"
                        {
#line 5858 "getopt.c"
                          {
#line 5860 "getopt.c"
                            mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__V_25_25, (MR_Word) mercury__getopt__V_29_29);
                          }
#line 177 "getopt.m"
                          if (mercury__getopt__succeeded)
#line 5865 "getopt.c"
                            {
#line 5867 "getopt.c"
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
#line 5909 "getopt.c"
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
#line 5947 "getopt.c"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                  else
#line 292 "getopt.m"
                    if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5953 "getopt.c"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
                    else
#line 5957 "getopt.c"
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
#line 5995 "getopt.c"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
                    else
#line 292 "getopt.m"
                      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 6001 "getopt.c"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
                      else
#line 6005 "getopt.c"
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
#line 6043 "getopt.c"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                      else
#line 292 "getopt.m"
                        if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 6049 "getopt.c"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
                        else
#line 6053 "getopt.c"
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
#line 6091 "getopt.c"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                        else
#line 292 "getopt.m"
                          if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 6097 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
                          else
#line 6101 "getopt.c"
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
#line 6139 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
                          else
#line 292 "getopt.m"
                            if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 6145 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
                            else
#line 6149 "getopt.c"
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
#line 6162 "getopt.c"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
                    else
#line 292 "getopt.m"
                      if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 6168 "getopt.c"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                      else
#line 292 "getopt.m"
                        if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 6174 "getopt.c"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
                        else
#line 292 "getopt.m"
                          if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 6180 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
                          else
#line 292 "getopt.m"
                            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6186 "getopt.c"
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

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt__V_57_57 ;
	S2 =  mercury__getopt__V_13_13 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6214 "getopt.c"

		;}
#undef MR_PROC_LABEL
	 mercury__getopt__Res_7_63  = Res;
#line 130 "private_builtin.opt"
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
#line 6249 "getopt.c"
                                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
                                else
#line 6253 "getopt.c"
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
#line 6268 "getopt.c"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                      else
#line 292 "getopt.m"
                        if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 6274 "getopt.c"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                        else
#line 292 "getopt.m"
                          if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 6280 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                          else
#line 292 "getopt.m"
                            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 6286 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                            else
#line 292 "getopt.m"
                              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6292 "getopt.c"
                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                              else
#line 292 "getopt.m"
                                if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6298 "getopt.c"
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

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt__V_58_58 ;
	S2 =  mercury__getopt__V_51_51 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6326 "getopt.c"

		;}
#undef MR_PROC_LABEL
	 mercury__getopt__Res_7_68  = Res;
#line 130 "private_builtin.opt"
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
#line 6359 "getopt.c"
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
#line 6372 "getopt.c"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                      else
#line 292 "getopt.m"
                        if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 6378 "getopt.c"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                        else
#line 292 "getopt.m"
                          if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 6384 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                          else
#line 292 "getopt.m"
                            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 6390 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                            else
#line 292 "getopt.m"
                              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6396 "getopt.c"
                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                              else
#line 292 "getopt.m"
                                if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6402 "getopt.c"
                                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "getopt.m"
                                else
#line 292 "getopt.m"
                                  if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 6408 "getopt.c"
                                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "getopt.m"
                                  else
#line 292 "getopt.m"
                                    {
#line 292 "getopt.m"
                                      MR_String mercury__getopt__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
#line 292 "getopt.m"
                                      MR_Integer mercury__getopt__Res_7_73;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt__V_59_59 ;
	S2 =  mercury__getopt__V_38_38 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6434 "getopt.c"

		;}
#undef MR_PROC_LABEL
	 mercury__getopt__Res_7_73  = Res;
#line 130 "private_builtin.opt"
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
#line 6590 "getopt.c"
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
#line 6615 "getopt.c"
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
#line 6638 "getopt.c"
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
#line 6677 "getopt.c"
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
#line 6710 "getopt.c"
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

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt__V_29_29 ;
	S2 =  mercury__getopt__V_18_18 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6742 "getopt.c"

		;}
#undef MR_PROC_LABEL
	 mercury__getopt__Res_7_35  = Res;
#line 130 "private_builtin.opt"
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
#line 6771 "getopt.c"
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
#line 6794 "getopt.c"
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
#line 6807 "getopt.c"
            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "getopt.m"
          else
#line 280 "getopt.m"
            {
#line 280 "getopt.m"
              MR_String mercury__getopt__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
#line 280 "getopt.m"
              MR_Integer mercury__getopt__Res_7_40;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt__V_31_31 ;
	S2 =  mercury__getopt__V_5_5 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6833 "getopt.c"

		;}
#undef MR_PROC_LABEL
	 mercury__getopt__Res_7_40  = Res;
#line 130 "private_builtin.opt"
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
#line 6928 "getopt.c"
              {
#line 6930 "getopt.c"
                mercury__getopt__succeeded = mercury__builtin__unify_2_p_0(mercury__getopt__TypeInfo_for_OptionType_13, mercury__getopt__V_5_5, mercury__getopt__V_8_8);
              }
#line 280 "getopt.m"
              if (mercury__getopt__succeeded)
#line 280 "getopt.m"
                {
#line 6937 "getopt.c"
                  mercury__getopt__succeeded = (strcmp(mercury__getopt__V_6_6, mercury__getopt__V_9_9) == 0);
#line 280 "getopt.m"
                  if (mercury__getopt__succeeded)
#line 6941 "getopt.c"
                    {
#line 6943 "getopt.c"
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
#line 6969 "getopt.c"
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
#line 7006 "getopt.c"
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
#line 7044 "getopt.c"
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                  else
#line 250 "getopt.m"
                    if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7050 "getopt.c"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                    else
#line 250 "getopt.m"
                      if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7056 "getopt.c"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                      else
#line 250 "getopt.m"
                        if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7062 "getopt.c"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                        else
#line 250 "getopt.m"
                          if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7068 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                          else
#line 7072 "getopt.c"
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
#line 7110 "getopt.c"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                    else
#line 250 "getopt.m"
                      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7116 "getopt.c"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                      else
#line 250 "getopt.m"
                        if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7122 "getopt.c"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                        else
#line 250 "getopt.m"
                          if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7128 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                          else
#line 250 "getopt.m"
                            if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7134 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                            else
#line 7138 "getopt.c"
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
#line 7176 "getopt.c"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                      else
#line 250 "getopt.m"
                        if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7182 "getopt.c"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                        else
#line 250 "getopt.m"
                          if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7188 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                          else
#line 250 "getopt.m"
                            if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7194 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                            else
#line 250 "getopt.m"
                              if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7200 "getopt.c"
                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                              else
#line 7204 "getopt.c"
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
#line 7242 "getopt.c"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                        else
#line 250 "getopt.m"
                          if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7248 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                          else
#line 250 "getopt.m"
                            if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7254 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                            else
#line 250 "getopt.m"
                              if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7260 "getopt.c"
                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                              else
#line 250 "getopt.m"
                                if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7266 "getopt.c"
                                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                                else
#line 7270 "getopt.c"
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
#line 7308 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                          else
#line 250 "getopt.m"
                            if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7314 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                            else
#line 250 "getopt.m"
                              if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7320 "getopt.c"
                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                              else
#line 250 "getopt.m"
                                if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7326 "getopt.c"
                                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                                else
#line 250 "getopt.m"
                                  if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7332 "getopt.c"
                                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                                  else
#line 7336 "getopt.c"
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
#line 7349 "getopt.c"
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                    else
#line 250 "getopt.m"
                      if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 7355 "getopt.c"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                      else
#line 250 "getopt.m"
                        if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 7361 "getopt.c"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                        else
#line 250 "getopt.m"
                          if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7367 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                          else
#line 250 "getopt.m"
                            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 7373 "getopt.c"
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
#line 7416 "getopt.c"
                                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                else
#line 250 "getopt.m"
                                  if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7422 "getopt.c"
                                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                  else
#line 250 "getopt.m"
                                    if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7428 "getopt.c"
                                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                    else
#line 250 "getopt.m"
                                      if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7434 "getopt.c"
                                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                      else
#line 7438 "getopt.c"
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
#line 7453 "getopt.c"
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                      else
#line 250 "getopt.m"
                        if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 7459 "getopt.c"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                        else
#line 250 "getopt.m"
                          if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 7465 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                          else
#line 250 "getopt.m"
                            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7471 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                            else
#line 250 "getopt.m"
                              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 7477 "getopt.c"
                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                              else
#line 250 "getopt.m"
                                if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7483 "getopt.c"
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
#line 7522 "getopt.c"
                                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                    else
#line 250 "getopt.m"
                                      if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7528 "getopt.c"
                                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                      else
#line 250 "getopt.m"
                                        if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7534 "getopt.c"
                                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                        else
#line 7538 "getopt.c"
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
#line 7553 "getopt.c"
                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                        else
#line 250 "getopt.m"
                          if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 7559 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                          else
#line 250 "getopt.m"
                            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 7565 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                            else
#line 250 "getopt.m"
                              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7571 "getopt.c"
                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                              else
#line 250 "getopt.m"
                                if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 7577 "getopt.c"
                                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                else
#line 250 "getopt.m"
                                  if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7583 "getopt.c"
                                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                                  else
#line 250 "getopt.m"
                                    if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7589 "getopt.c"
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
#line 7615 "getopt.c"
                                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                                        else
#line 250 "getopt.m"
                                          if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7621 "getopt.c"
                                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                                          else
#line 7625 "getopt.c"
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
#line 7640 "getopt.c"
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                          else
#line 250 "getopt.m"
                            if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 7646 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                            else
#line 250 "getopt.m"
                              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 7652 "getopt.c"
                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                              else
#line 250 "getopt.m"
                                if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7658 "getopt.c"
                                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                else
#line 250 "getopt.m"
                                  if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 7664 "getopt.c"
                                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                  else
#line 250 "getopt.m"
                                    if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7670 "getopt.c"
                                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                                    else
#line 250 "getopt.m"
                                      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7676 "getopt.c"
                                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                                      else
#line 250 "getopt.m"
                                        if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7682 "getopt.c"
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
#line 7708 "getopt.c"
                                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                            else
#line 7712 "getopt.c"
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
#line 7727 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                            else
#line 250 "getopt.m"
                              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 7733 "getopt.c"
                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                              else
#line 250 "getopt.m"
                                if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 7739 "getopt.c"
                                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                else
#line 250 "getopt.m"
                                  if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7745 "getopt.c"
                                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                  else
#line 250 "getopt.m"
                                    if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 7751 "getopt.c"
                                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                    else
#line 250 "getopt.m"
                                      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7757 "getopt.c"
                                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                                      else
#line 250 "getopt.m"
                                        if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7763 "getopt.c"
                                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                                        else
#line 250 "getopt.m"
                                          if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7769 "getopt.c"
                                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                          else
#line 250 "getopt.m"
                                            if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7775 "getopt.c"
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
#line 7799 "getopt.c"
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
#line 7812 "getopt.c"
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                            else
#line 250 "getopt.m"
                              if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 7818 "getopt.c"
                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                              else
#line 250 "getopt.m"
                                if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 7824 "getopt.c"
                                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                else
#line 250 "getopt.m"
                                  if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7830 "getopt.c"
                                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                  else
#line 250 "getopt.m"
                                    if ((mercury__getopt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 7836 "getopt.c"
                                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                    else
#line 250 "getopt.m"
                                      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7842 "getopt.c"
                                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                                      else
#line 250 "getopt.m"
                                        if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7848 "getopt.c"
                                          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "getopt.m"
                                        else
#line 250 "getopt.m"
                                          if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7854 "getopt.c"
                                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                          else
#line 250 "getopt.m"
                                            if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7860 "getopt.c"
                                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                            else
#line 250 "getopt.m"
                                              if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7866 "getopt.c"
                                                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "getopt.m"
                                              else
#line 250 "getopt.m"
                                                {
#line 250 "getopt.m"
                                                  MR_String mercury__getopt__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
#line 250 "getopt.m"
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

#line 7892 "getopt.c"

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
#line 8048 "getopt.c"
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
#line 8073 "getopt.c"
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
#line 8100 "getopt.c"
                            mercury__getopt__TypeInfo_27_27 = (MR_Word) &mercury__getopt_scalar_common_1[0];
#line 8102 "getopt.c"
                            {
#line 8104 "getopt.c"
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
#line 8132 "getopt.c"
                              mercury__getopt__TypeInfo_28_28 = (MR_Word) &mercury__getopt_scalar_common_1[2];
#line 8134 "getopt.c"
                              {
#line 8136 "getopt.c"
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
#line 8164 "getopt.c"
                                mercury__getopt__TypeInfo_29_29 = (MR_Word) &mercury__getopt_scalar_common_1[1];
#line 8166 "getopt.c"
                                {
#line 8168 "getopt.c"
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
#line 8192 "getopt.c"
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
#line 8231 "getopt.c"
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
#line 8260 "getopt.c"
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
#line 8273 "getopt.c"
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
#line 8345 "getopt.c"
              {
#line 8347 "getopt.c"
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
#line 8373 "getopt.c"
              mercury__getopt__TypeCtorInfo_10_10 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 8375 "getopt.c"
              {
#line 8377 "getopt.c"
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
#line 8417 "getopt.c"
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

#line 8452 "getopt.c"

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
#line 272 "getopt.m"
            }
#line 272 "getopt.m"
          else
#line 8485 "getopt.c"
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
#line 8498 "getopt.c"
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
#line 8570 "getopt.c"
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
#line 8595 "getopt.c"
              mercury__getopt__TypeCtorInfo_10_10 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 8597 "getopt.c"
              {
#line 8599 "getopt.c"
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

#line 956 "getopt.m"
static void MR_CALL 
mercury__getopt__process_special_8_p_0(
#line 956 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_54,
#line 956 "getopt.m"
  MR_String mercury__getopt__Option_9,
#line 956 "getopt.m"
  MR_Box mercury__getopt__Flag_10,
#line 956 "getopt.m"
  MR_Word mercury__getopt__OptionData_11,
#line 956 "getopt.m"
  MR_Word mercury__getopt__OptionOps_12,
#line 956 "getopt.m"
  MR_Word mercury__getopt__OptionTable0_13,
#line 956 "getopt.m"
  MR_Word * mercury__getopt__Result_14,
#line 956 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_26,
#line 956 "getopt.m"
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_27)
#line 956 "getopt.m"
{
#line 962 "getopt.m"
  {
#line 962 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 962 "getopt.m"
    MR_Word mercury__getopt__MaybeHandler_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_12, (MR_Integer) 2)));
#line 963 "getopt.m"
    MR_Word mercury__getopt__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_12, (MR_Integer) 0)));
#line 963 "getopt.m"
    MR_Word mercury__getopt__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_12, (MR_Integer) 1)));

#line 982 "getopt.m"
    if ((mercury__getopt__MaybeHandler_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1003 "getopt.m"
      {
#line 1003 "getopt.m"
        MR_Word mercury__getopt__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
#line 1003 "getopt.m"
        MR_Word mercury__getopt__Error_51;

#line 1004 "getopt.m"
        {
#line 1004 "getopt.m"
          mercury__getopt__Error_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1004 "getopt.m"
          MR_hl_field(MR_mktag(1), mercury__getopt__Error_51, 0) = mercury__getopt__Flag_10;
#line 1004 "getopt.m"
          MR_hl_field(MR_mktag(1), mercury__getopt__Error_51, 1) = ((MR_Box) (mercury__getopt__Option_9));
#line 1004 "getopt.m"
          MR_hl_field(MR_mktag(1), mercury__getopt__Error_51, 2) = ((MR_Box) (mercury__getopt__V_28_28));
#line 1004 "getopt.m"
        }
#line 1005 "getopt.m"
        {
#line 1005 "getopt.m"
          MR_Word base;
#line 1005 "getopt.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1005 "getopt.m"
          *mercury__getopt__Result_14 = base;
#line 1005 "getopt.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_51));
#line 1005 "getopt.m"
        }
#line 1003 "getopt.m"
        *mercury__getopt__STATE_VARIABLE_OptionsSet_27 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_26;
#line 1003 "getopt.m"
      }
#line 982 "getopt.m"
    else
#line 982 "getopt.m"
      if (((MR_tag((MR_Word) mercury__getopt__MaybeHandler_16)) == (MR_mktag((MR_Integer) 1))))
#line 965 "getopt.m"
        {
#line 965 "getopt.m"
          MR_Word mercury__getopt__Handler_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__MaybeHandler_16, (MR_Integer) 0)));
#line 978 "getopt.m"
          MR_Word mercury__getopt__Result0_18;
#line 967 "getopt.m"
          MR_bool MR_CALL (* mercury__getopt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt__Handler_17, (MR_Integer) 1)));
#line 967 "getopt.m"
          MR_Box mercury__getopt__conv1_Result0_18;

#line 967 "getopt.m"
          {
#line 967 "getopt.m"
            mercury__getopt__succeeded = mercury__getopt__func_0(((MR_Box) mercury__getopt__Handler_17), mercury__getopt__Flag_10, ((MR_Box) (mercury__getopt__OptionData_11)), ((MR_Box) (mercury__getopt__OptionTable0_13)), &mercury__getopt__conv1_Result0_18);
          }
#line 967 "getopt.m"
          if (mercury__getopt__succeeded)
#line 967 "getopt.m"
            {
#line 967 "getopt.m"
              mercury__getopt__Result0_18 = ((MR_Word) mercury__getopt__conv1_Result0_18);
#line 967 "getopt.m"
              mercury__getopt__succeeded = MR_TRUE;
#line 967 "getopt.m"
            }
#line 978 "getopt.m"
          if (mercury__getopt__succeeded)
#line 972 "getopt.m"
            if (((MR_tag((MR_Word) mercury__getopt__Result0_18)) == (MR_mktag((MR_Integer) 1))))
#line 973 "getopt.m"
              {
#line 973 "getopt.m"
                MR_String mercury__getopt__HandlerMsg_20 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__Result0_18, (MR_Integer) 0)));
#line 973 "getopt.m"
                MR_Word mercury__getopt__Reason_21;
#line 973 "getopt.m"
                MR_Word mercury__getopt__Error_22;

#line 974 "getopt.m"
                {
#line 974 "getopt.m"
                  mercury__getopt__Reason_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 974 "getopt.m"
                  MR_hl_field(MR_mktag(2), mercury__getopt__Reason_21, 0) = ((MR_Box) (mercury__getopt__HandlerMsg_20));
#line 974 "getopt.m"
                }
#line 975 "getopt.m"
                {
#line 975 "getopt.m"
                  mercury__getopt__Error_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 975 "getopt.m"
                  MR_hl_field(MR_mktag(1), mercury__getopt__Error_22, 0) = mercury__getopt__Flag_10;
#line 975 "getopt.m"
                  MR_hl_field(MR_mktag(1), mercury__getopt__Error_22, 1) = ((MR_Box) (mercury__getopt__Option_9));
#line 975 "getopt.m"
                  MR_hl_field(MR_mktag(1), mercury__getopt__Error_22, 2) = ((MR_Box) (mercury__getopt__Reason_21));
#line 975 "getopt.m"
                }
#line 976 "getopt.m"
                {
#line 976 "getopt.m"
                  MR_Word base;
#line 976 "getopt.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 976 "getopt.m"
                  *mercury__getopt__Result_14 = base;
#line 976 "getopt.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_22));
#line 976 "getopt.m"
                }
#line 973 "getopt.m"
              }
#line 972 "getopt.m"
            else
#line 970 "getopt.m"
              {
#line 970 "getopt.m"
                MR_Word mercury__getopt__OptionTable_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result0_18, (MR_Integer) 0)));

#line 971 "getopt.m"
                {
#line 971 "getopt.m"
                  MR_Word base;
#line 971 "getopt.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 971 "getopt.m"
                  *mercury__getopt__Result_14 = base;
#line 971 "getopt.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_19));
#line 971 "getopt.m"
                }
#line 970 "getopt.m"
              }
#line 978 "getopt.m"
          else
#line 979 "getopt.m"
            {
#line 979 "getopt.m"
              MR_Word mercury__getopt__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 979 "getopt.m"
              MR_Word mercury__getopt__Error_32;

#line 979 "getopt.m"
              {
#line 979 "getopt.m"
                mercury__getopt__Error_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 979 "getopt.m"
                MR_hl_field(MR_mktag(1), mercury__getopt__Error_32, 0) = mercury__getopt__Flag_10;
#line 979 "getopt.m"
                MR_hl_field(MR_mktag(1), mercury__getopt__Error_32, 1) = ((MR_Box) (mercury__getopt__Option_9));
#line 979 "getopt.m"
                MR_hl_field(MR_mktag(1), mercury__getopt__Error_32, 2) = ((MR_Box) (mercury__getopt__V_31_31));
#line 979 "getopt.m"
              }
#line 980 "getopt.m"
              {
#line 980 "getopt.m"
                MR_Word base;
#line 980 "getopt.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 980 "getopt.m"
                *mercury__getopt__Result_14 = base;
#line 980 "getopt.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_32));
#line 980 "getopt.m"
              }
#line 979 "getopt.m"
            }
#line 965 "getopt.m"
          *mercury__getopt__STATE_VARIABLE_OptionsSet_27 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_26;
#line 965 "getopt.m"
        }
#line 982 "getopt.m"
      else
#line 983 "getopt.m"
        {
#line 983 "getopt.m"
          MR_Word mercury__getopt__TrackHandler_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__MaybeHandler_16, (MR_Integer) 0)));
#line 998 "getopt.m"
          MR_Word mercury__getopt__NewOptionsSet_24;
#line 998 "getopt.m"
          MR_Word mercury__getopt__Result0_43;
#line 985 "getopt.m"
          MR_bool MR_CALL (* mercury__getopt__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt__TrackHandler_23, (MR_Integer) 1)));
#line 985 "getopt.m"
          MR_Box mercury__getopt__conv4_Result0_43;
#line 985 "getopt.m"
          MR_Box mercury__getopt__conv3_NewOptionsSet_24;

#line 985 "getopt.m"
          {
#line 985 "getopt.m"
            mercury__getopt__succeeded = mercury__getopt__func_2(((MR_Box) mercury__getopt__TrackHandler_23), mercury__getopt__Flag_10, ((MR_Box) (mercury__getopt__OptionData_11)), ((MR_Box) (mercury__getopt__OptionTable0_13)), &mercury__getopt__conv4_Result0_43, &mercury__getopt__conv3_NewOptionsSet_24);
          }
#line 985 "getopt.m"
          if (mercury__getopt__succeeded)
#line 985 "getopt.m"
            {
#line 985 "getopt.m"
              mercury__getopt__Result0_43 = ((MR_Word) mercury__getopt__conv4_Result0_43);
#line 985 "getopt.m"
              mercury__getopt__NewOptionsSet_24 = ((MR_Word) mercury__getopt__conv3_NewOptionsSet_24);
#line 985 "getopt.m"
              mercury__getopt__succeeded = MR_TRUE;
#line 985 "getopt.m"
            }
#line 998 "getopt.m"
          if (mercury__getopt__succeeded)
#line 988 "getopt.m"
            {
#line 988 "getopt.m"
              MR_Word mercury__getopt__Set0_4_58 = (MR_Word) mercury__getopt__NewOptionsSet_24;
#line 988 "getopt.m"
              MR_Word mercury__getopt__Set1_5_59 = (MR_Word) mercury__getopt__STATE_VARIABLE_OptionsSet_0_26;
#line 988 "getopt.m"
              MR_Word mercury__getopt__Set_6_60;

#line 101 "set_ordlist.opt"
              {
#line 101 "set_ordlist.opt"
                mercury__list__merge_and_remove_dups_3_p_0(mercury__getopt__TypeInfo_for_OptionType_54, mercury__getopt__Set0_4_58, mercury__getopt__Set1_5_59, &mercury__getopt__Set_6_60);
              }
#line 100 "set_ordlist.opt"
              *mercury__getopt__STATE_VARIABLE_OptionsSet_27 = (MR_Word) mercury__getopt__Set_6_60;
#line 992 "getopt.m"
              if (((MR_tag((MR_Word) mercury__getopt__Result0_43)) == (MR_mktag((MR_Integer) 1))))
#line 993 "getopt.m"
                {
#line 993 "getopt.m"
                  MR_String mercury__getopt__TrackHandlerMsg_25 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__Result0_43, (MR_Integer) 0)));
#line 993 "getopt.m"
                  MR_Word mercury__getopt__Reason_34;
#line 993 "getopt.m"
                  MR_Word mercury__getopt__Error_35;

#line 994 "getopt.m"
                  {
#line 994 "getopt.m"
                    mercury__getopt__Reason_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 994 "getopt.m"
                    MR_hl_field(MR_mktag(2), mercury__getopt__Reason_34, 0) = ((MR_Box) (mercury__getopt__TrackHandlerMsg_25));
#line 994 "getopt.m"
                  }
#line 995 "getopt.m"
                  {
#line 995 "getopt.m"
                    mercury__getopt__Error_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 995 "getopt.m"
                    MR_hl_field(MR_mktag(1), mercury__getopt__Error_35, 0) = mercury__getopt__Flag_10;
#line 995 "getopt.m"
                    MR_hl_field(MR_mktag(1), mercury__getopt__Error_35, 1) = ((MR_Box) (mercury__getopt__Option_9));
#line 995 "getopt.m"
                    MR_hl_field(MR_mktag(1), mercury__getopt__Error_35, 2) = ((MR_Box) (mercury__getopt__Reason_34));
#line 995 "getopt.m"
                  }
#line 996 "getopt.m"
                  {
#line 996 "getopt.m"
                    MR_Word base;
#line 996 "getopt.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 996 "getopt.m"
                    *mercury__getopt__Result_14 = base;
#line 996 "getopt.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_35));
#line 996 "getopt.m"
                  }
#line 993 "getopt.m"
                }
#line 992 "getopt.m"
              else
#line 990 "getopt.m"
                {
#line 990 "getopt.m"
                  MR_Word mercury__getopt__OptionTable_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result0_43, (MR_Integer) 0)));

#line 991 "getopt.m"
                  {
#line 991 "getopt.m"
                    MR_Word base;
#line 991 "getopt.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 991 "getopt.m"
                    *mercury__getopt__Result_14 = base;
#line 991 "getopt.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_33));
#line 991 "getopt.m"
                  }
#line 990 "getopt.m"
                }
#line 988 "getopt.m"
            }
#line 998 "getopt.m"
          else
#line 999 "getopt.m"
            {
#line 999 "getopt.m"
              MR_Word mercury__getopt__V_30_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 999 "getopt.m"
              MR_Word mercury__getopt__Error_42;

#line 999 "getopt.m"
              {
#line 999 "getopt.m"
                mercury__getopt__Error_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 999 "getopt.m"
                MR_hl_field(MR_mktag(1), mercury__getopt__Error_42, 0) = mercury__getopt__Flag_10;
#line 999 "getopt.m"
                MR_hl_field(MR_mktag(1), mercury__getopt__Error_42, 1) = ((MR_Box) (mercury__getopt__Option_9));
#line 999 "getopt.m"
                MR_hl_field(MR_mktag(1), mercury__getopt__Error_42, 2) = ((MR_Box) (mercury__getopt__V_30_30));
#line 999 "getopt.m"
              }
#line 1000 "getopt.m"
              {
#line 1000 "getopt.m"
                MR_Word base;
#line 1000 "getopt.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1000 "getopt.m"
                *mercury__getopt__Result_14 = base;
#line 1000 "getopt.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_42));
#line 1000 "getopt.m"
              }
#line 999 "getopt.m"
              *mercury__getopt__STATE_VARIABLE_OptionsSet_27 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_26;
#line 999 "getopt.m"
            }
#line 983 "getopt.m"
        }
#line 962 "getopt.m"
  }
#line 956 "getopt.m"
}

#line 903 "getopt.m"
static void MR_CALL 
mercury__getopt__process_negated_option_7_p_0(
#line 903 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_51,
#line 903 "getopt.m"
  MR_String mercury__getopt__Option_8,
#line 903 "getopt.m"
  MR_Box mercury__getopt__Flag_9,
#line 903 "getopt.m"
  MR_Word mercury__getopt__OptionOps_10,
#line 903 "getopt.m"
  MR_Word mercury__getopt__OptionTable0_11,
#line 903 "getopt.m"
  MR_Word * mercury__getopt__Result_12,
#line 903 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_23,
#line 903 "getopt.m"
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_24)
#line 903 "getopt.m"
{
#line 951 "getopt.m"
  {
#line 951 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 951 "getopt.m"
    MR_Word mercury__getopt__OptionData_14;
#line 910 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_52_52 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 41 "map.opt"
    MR_Box mercury__getopt__conv0_OptionData_14;

#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__getopt__succeeded = mercury__tree234__search_3_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__TypeCtorInfo_52_52, mercury__getopt__OptionTable0_11, mercury__getopt__Flag_9, &mercury__getopt__conv0_OptionData_14);
    }
#line 41 "map.opt"
    if (mercury__getopt__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__getopt__OptionData_14 = ((MR_Word) mercury__getopt__conv0_OptionData_14);
#line 41 "map.opt"
        mercury__getopt__succeeded = MR_TRUE;
#line 41 "map.opt"
      }
#line 951 "getopt.m"
    if (mercury__getopt__succeeded)
#line 916 "getopt.m"
      if ((mercury__getopt__OptionData_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 932 "getopt.m"
        {
#line 932 "getopt.m"
          MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_30_30;
#line 932 "getopt.m"
          MR_Word mercury__getopt__V_31_31;
#line 932 "getopt.m"
          MR_Word mercury__getopt__List0_5_84 = (MR_Word) mercury__getopt__STATE_VARIABLE_OptionsSet_0_23;
#line 932 "getopt.m"
          MR_Word mercury__getopt__List_6_85;

#line 68 "set_ordlist.opt"
          {
#line 68 "set_ordlist.opt"
            mercury__set_ordlist__insert_loop_3_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__List0_5_84, mercury__getopt__Flag_9, &mercury__getopt__List_6_85);
          }
#line 67 "set_ordlist.opt"
          mercury__getopt__STATE_VARIABLE_OptionsSet_30_30 = (MR_Word) mercury__getopt__List_6_85;
#line 934 "getopt.m"
          mercury__getopt__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[2]);
#line 934 "getopt.m"
          {
#line 934 "getopt.m"
            mercury__getopt__process_special_8_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__Option_8, mercury__getopt__Flag_9, mercury__getopt__V_31_31, mercury__getopt__OptionOps_10, mercury__getopt__OptionTable0_11, mercury__getopt__Result_12, mercury__getopt__STATE_VARIABLE_OptionsSet_30_30, mercury__getopt__STATE_VARIABLE_OptionsSet_24);
#line 934 "getopt.m"
            return;
          }
#line 932 "getopt.m"
        }
#line 916 "getopt.m"
      else
#line 916 "getopt.m"
        if ((mercury__getopt__OptionData_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 937 "getopt.m"
          {
#line 937 "getopt.m"
            MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_26_26;
#line 937 "getopt.m"
            MR_Word mercury__getopt__V_27_27;
#line 937 "getopt.m"
            MR_Word mercury__getopt__V_29_29;

#line 938 "getopt.m"
            {
#line 938 "getopt.m"
              mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__Flag_9, mercury__getopt__STATE_VARIABLE_OptionsSet_0_23, &mercury__getopt__STATE_VARIABLE_OptionsSet_26_26);
            }
#line 939 "getopt.m"
            mercury__getopt__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 939 "getopt.m"
            mercury__getopt__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__getopt_scalar_common_1[3]);
#line 939 "getopt.m"
            {
#line 939 "getopt.m"
              mercury__getopt__process_special_8_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__Option_8, mercury__getopt__Flag_9, mercury__getopt__V_27_27, mercury__getopt__OptionOps_10, mercury__getopt__OptionTable0_11, mercury__getopt__Result_12, mercury__getopt__STATE_VARIABLE_OptionsSet_26_26, mercury__getopt__STATE_VARIABLE_OptionsSet_24);
#line 939 "getopt.m"
              return;
            }
#line 937 "getopt.m"
          }
#line 916 "getopt.m"
        else
#line 916 "getopt.m"
          if (((MR_tag((MR_Word) mercury__getopt__OptionData_14)) == (MR_mktag((MR_Integer) 1))))
#line 912 "getopt.m"
            {
#line 912 "getopt.m"
              MR_Word mercury__getopt__TypeCtorInfo_53_53;
#line 912 "getopt.m"
              MR_Word mercury__getopt__OptionTable_16;
#line 912 "getopt.m"
              MR_Word mercury__getopt__V_44_44;
#line 912 "getopt.m"
              MR_Word mercury__getopt__List0_5_74 = (MR_Word) mercury__getopt__STATE_VARIABLE_OptionsSet_0_23;
#line 912 "getopt.m"
              MR_Word mercury__getopt__List_6_75;

#line 68 "set_ordlist.opt"
              {
#line 68 "set_ordlist.opt"
                mercury__set_ordlist__insert_loop_3_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__List0_5_74, mercury__getopt__Flag_9, &mercury__getopt__List_6_75);
              }
#line 67 "set_ordlist.opt"
              *mercury__getopt__STATE_VARIABLE_OptionsSet_24 = (MR_Word) mercury__getopt__List_6_75;
#line 914 "getopt.m"
              mercury__getopt__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[2]);
#line 9122 "getopt.c"
              mercury__getopt__TypeCtorInfo_53_53 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 119 "map.opt"
              {
#line 119 "map.opt"
                mercury__tree234__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__TypeCtorInfo_53_53, mercury__getopt__Flag_9, ((MR_Box) (mercury__getopt__V_44_44)), mercury__getopt__OptionTable0_11, &mercury__getopt__OptionTable_16);
              }
#line 915 "getopt.m"
              {
#line 915 "getopt.m"
                MR_Word base;
#line 915 "getopt.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 915 "getopt.m"
                *mercury__getopt__Result_12 = base;
#line 915 "getopt.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_16));
#line 915 "getopt.m"
              }
#line 912 "getopt.m"
            }
#line 916 "getopt.m"
          else
#line 916 "getopt.m"
            if (((((MR_tag((MR_Word) mercury__getopt__OptionData_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_14, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 927 "getopt.m"
              {
#line 927 "getopt.m"
                MR_Word mercury__getopt__TypeCtorInfo_56_56;
#line 927 "getopt.m"
                MR_Word mercury__getopt__V_35_35;
#line 927 "getopt.m"
                MR_Word mercury__getopt__V_36_36;
#line 927 "getopt.m"
                MR_Word mercury__getopt__OptionTable_49;
#line 927 "getopt.m"
                MR_Word mercury__getopt__List0_5_64 = (MR_Word) mercury__getopt__STATE_VARIABLE_OptionsSet_0_23;
#line 927 "getopt.m"
                MR_Word mercury__getopt__List_6_65;

#line 68 "set_ordlist.opt"
                {
#line 68 "set_ordlist.opt"
                  mercury__set_ordlist__insert_loop_3_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__List0_5_64, mercury__getopt__Flag_9, &mercury__getopt__List_6_65);
                }
#line 67 "set_ordlist.opt"
                *mercury__getopt__STATE_VARIABLE_OptionsSet_24 = (MR_Word) mercury__getopt__List_6_65;
#line 929 "getopt.m"
                mercury__getopt__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 929 "getopt.m"
                mercury__getopt__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__getopt_scalar_common_1[4]);
#line 9173 "getopt.c"
                mercury__getopt__TypeCtorInfo_56_56 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 119 "map.opt"
                {
#line 119 "map.opt"
                  mercury__tree234__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__TypeCtorInfo_56_56, mercury__getopt__Flag_9, ((MR_Box) (mercury__getopt__V_35_35)), mercury__getopt__OptionTable0_11, &mercury__getopt__OptionTable_49);
                }
#line 930 "getopt.m"
                {
#line 930 "getopt.m"
                  MR_Word base;
#line 930 "getopt.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 930 "getopt.m"
                  *mercury__getopt__Result_12 = base;
#line 930 "getopt.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_49));
#line 930 "getopt.m"
                }
#line 927 "getopt.m"
              }
#line 916 "getopt.m"
            else
#line 916 "getopt.m"
              if (((((MR_tag((MR_Word) mercury__getopt__OptionData_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_14, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 917 "getopt.m"
                {
#line 917 "getopt.m"
                  MR_Word mercury__getopt__TypeCtorInfo_54_54;
#line 917 "getopt.m"
                  MR_Word mercury__getopt__V_41_41;
#line 917 "getopt.m"
                  MR_Word mercury__getopt__V_42_42;
#line 917 "getopt.m"
                  MR_Word mercury__getopt__OptionTable_47;
#line 917 "getopt.m"
                  MR_Word mercury__getopt__List0_5_90 = (MR_Word) mercury__getopt__STATE_VARIABLE_OptionsSet_0_23;
#line 917 "getopt.m"
                  MR_Word mercury__getopt__List_6_91;

#line 68 "set_ordlist.opt"
                  {
#line 68 "set_ordlist.opt"
                    mercury__set_ordlist__insert_loop_3_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__List0_5_90, mercury__getopt__Flag_9, &mercury__getopt__List_6_91);
                  }
#line 67 "set_ordlist.opt"
                  *mercury__getopt__STATE_VARIABLE_OptionsSet_24 = (MR_Word) mercury__getopt__List_6_91;
#line 919 "getopt.m"
                  mercury__getopt__V_42_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 919 "getopt.m"
                  mercury__getopt__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__getopt_scalar_common_1[5]);
#line 9224 "getopt.c"
                  mercury__getopt__TypeCtorInfo_54_54 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 919 "getopt.m"
                  {
#line 919 "getopt.m"
                    mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__TypeCtorInfo_54_54, mercury__getopt__Flag_9, ((MR_Box) (mercury__getopt__V_41_41)), mercury__getopt__OptionTable0_11, &mercury__getopt__OptionTable_47);
                  }
#line 920 "getopt.m"
                  {
#line 920 "getopt.m"
                    MR_Word base;
#line 920 "getopt.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 920 "getopt.m"
                    *mercury__getopt__Result_12 = base;
#line 920 "getopt.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_47));
#line 920 "getopt.m"
                  }
#line 917 "getopt.m"
                }
#line 916 "getopt.m"
              else
#line 916 "getopt.m"
                if (((((MR_tag((MR_Word) mercury__getopt__OptionData_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_14, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 922 "getopt.m"
                  {
#line 922 "getopt.m"
                    MR_Word mercury__getopt__TypeCtorInfo_55_55;
#line 922 "getopt.m"
                    MR_Word mercury__getopt__V_38_38;
#line 922 "getopt.m"
                    MR_Word mercury__getopt__V_39_39;
#line 922 "getopt.m"
                    MR_Word mercury__getopt__OptionTable_48;

#line 923 "getopt.m"
                    {
#line 923 "getopt.m"
                      mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__Flag_9, mercury__getopt__STATE_VARIABLE_OptionsSet_0_23, mercury__getopt__STATE_VARIABLE_OptionsSet_24);
                    }
#line 924 "getopt.m"
                    mercury__getopt__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 924 "getopt.m"
                    mercury__getopt__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__getopt_scalar_common_1[6]);
#line 9269 "getopt.c"
                    mercury__getopt__TypeCtorInfo_55_55 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 924 "getopt.m"
                    {
#line 924 "getopt.m"
                      mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__TypeCtorInfo_55_55, mercury__getopt__Flag_9, ((MR_Box) (mercury__getopt__V_38_38)), mercury__getopt__OptionTable0_11, &mercury__getopt__OptionTable_48);
                    }
#line 925 "getopt.m"
                    {
#line 925 "getopt.m"
                      MR_Word base;
#line 925 "getopt.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 925 "getopt.m"
                      *mercury__getopt__Result_12 = base;
#line 925 "getopt.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_48));
#line 925 "getopt.m"
                    }
#line 922 "getopt.m"
                  }
#line 916 "getopt.m"
                else
#line 947 "getopt.m"
                  {
#line 947 "getopt.m"
                    MR_Word mercury__getopt__Error_22;
#line 947 "getopt.m"
                    MR_Word mercury__getopt__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));

#line 948 "getopt.m"
                    {
#line 948 "getopt.m"
                      mercury__getopt__Error_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 948 "getopt.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt__Error_22, 0) = mercury__getopt__Flag_9;
#line 948 "getopt.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt__Error_22, 1) = ((MR_Box) (mercury__getopt__Option_8));
#line 948 "getopt.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt__Error_22, 2) = ((MR_Box) (mercury__getopt__V_25_25));
#line 948 "getopt.m"
                    }
#line 949 "getopt.m"
                    {
#line 949 "getopt.m"
                      MR_Word base;
#line 949 "getopt.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 949 "getopt.m"
                      *mercury__getopt__Result_12 = base;
#line 949 "getopt.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_22));
#line 949 "getopt.m"
                    }
#line 947 "getopt.m"
                    *mercury__getopt__STATE_VARIABLE_OptionsSet_24 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_23;
#line 947 "getopt.m"
                  }
#line 951 "getopt.m"
    else
#line 952 "getopt.m"
      {
#line 952 "getopt.m"
        MR_Word mercury__getopt__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 952 "getopt.m"
        MR_Word mercury__getopt__Error_50;

#line 952 "getopt.m"
        {
#line 952 "getopt.m"
          mercury__getopt__Error_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 952 "getopt.m"
          MR_hl_field(MR_mktag(1), mercury__getopt__Error_50, 0) = mercury__getopt__Flag_9;
#line 952 "getopt.m"
          MR_hl_field(MR_mktag(1), mercury__getopt__Error_50, 1) = ((MR_Box) (mercury__getopt__Option_8));
#line 952 "getopt.m"
          MR_hl_field(MR_mktag(1), mercury__getopt__Error_50, 2) = ((MR_Box) (mercury__getopt__V_46_46));
#line 952 "getopt.m"
        }
#line 953 "getopt.m"
        {
#line 953 "getopt.m"
          MR_Word base;
#line 953 "getopt.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 953 "getopt.m"
          *mercury__getopt__Result_12 = base;
#line 953 "getopt.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_50));
#line 953 "getopt.m"
        }
#line 952 "getopt.m"
        *mercury__getopt__STATE_VARIABLE_OptionsSet_24 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_23;
#line 952 "getopt.m"
      }
#line 951 "getopt.m"
  }
#line 903 "getopt.m"
}

#line 760 "getopt.m"
static void MR_CALL 
mercury__getopt__process_option_9_p_0(
#line 760 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_204,
#line 760 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 760 "getopt.m"
  MR_String mercury__getopt__HeadVar__2_2,
#line 760 "getopt.m"
  MR_Box mercury__getopt__Flag_3,
#line 760 "getopt.m"
  MR_Word mercury__getopt__MaybeArg_4,
#line 760 "getopt.m"
  MR_Word mercury__getopt__HeadVar__5_5,
#line 760 "getopt.m"
  MR_Word mercury__getopt__HeadVar__6_6,
#line 760 "getopt.m"
  MR_Word * mercury__getopt__Result_7,
#line 760 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_8,
#line 760 "getopt.m"
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_9)
#line 760 "getopt.m"
{
#line 767 "getopt.m"
  {
#line 767 "getopt.m"
    MR_bool mercury__getopt__succeeded;

#line 767 "getopt.m"
    if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 854 "getopt.m"
      {
#line 854 "getopt.m"
        MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_153_153;

#line 855 "getopt.m"
        {
#line 855 "getopt.m"
          mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt__STATE_VARIABLE_OptionsSet_153_153);
        }
#line 860 "getopt.m"
        if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 861 "getopt.m"
          {
#line 861 "getopt.m"
            MR_Word mercury__getopt__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[1]);

#line 862 "getopt.m"
            {
#line 862 "getopt.m"
              mercury__getopt__process_special_8_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__HeadVar__2_2, mercury__getopt__Flag_3, mercury__getopt__V_154_154, mercury__getopt__HeadVar__5_5, mercury__getopt__HeadVar__6_6, mercury__getopt__Result_7, mercury__getopt__STATE_VARIABLE_OptionsSet_153_153, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
#line 862 "getopt.m"
              return;
            }
#line 861 "getopt.m"
          }
#line 860 "getopt.m"
        else
#line 857 "getopt.m"
          {
#line 857 "getopt.m"
            MR_Word mercury__getopt__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[2]);

#line 858 "getopt.m"
            {
#line 858 "getopt.m"
              mercury__getopt__process_special_8_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__HeadVar__2_2, mercury__getopt__Flag_3, mercury__getopt__V_157_157, mercury__getopt__HeadVar__5_5, mercury__getopt__HeadVar__6_6, mercury__getopt__Result_7, mercury__getopt__STATE_VARIABLE_OptionsSet_153_153, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
#line 858 "getopt.m"
              return;
            }
#line 857 "getopt.m"
          }
#line 854 "getopt.m"
      }
#line 767 "getopt.m"
    else
#line 767 "getopt.m"
      if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 866 "getopt.m"
        {
#line 866 "getopt.m"
          MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_171_171;

#line 867 "getopt.m"
          {
#line 867 "getopt.m"
            mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt__STATE_VARIABLE_OptionsSet_171_171);
          }
#line 876 "getopt.m"
          if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 877 "getopt.m"
            {
#line 878 "getopt.m"
              {
#line 878 "getopt.m"
                mercury__require__error_1_p_0((MR_String) "int_special argument expected in getopt.process_option");
#line 878 "getopt.m"
                return;
              }
#line 877 "getopt.m"
            }
#line 876 "getopt.m"
          else
#line 869 "getopt.m"
            {
#line 869 "getopt.m"
              MR_String mercury__getopt__Arg_167 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__MaybeArg_4, (MR_Integer) 0)));
#line 873 "getopt.m"
              MR_Integer mercury__getopt__IntArg_168;

#line 870 "getopt.m"
              {
#line 870 "getopt.m"
                mercury__getopt__succeeded = mercury__string__to_int_2_p_0(mercury__getopt__Arg_167, &mercury__getopt__IntArg_168);
              }
#line 873 "getopt.m"
              if (mercury__getopt__succeeded)
#line 871 "getopt.m"
                {
#line 871 "getopt.m"
                  MR_Word mercury__getopt__V_173_173;

#line 871 "getopt.m"
                  {
#line 871 "getopt.m"
                    mercury__getopt__V_173_173 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 871 "getopt.m"
                    MR_hl_field(MR_mktag(2), mercury__getopt__V_173_173, 0) = ((MR_Box) (mercury__getopt__IntArg_168));
#line 871 "getopt.m"
                  }
#line 871 "getopt.m"
                  {
#line 871 "getopt.m"
                    mercury__getopt__process_special_8_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__HeadVar__2_2, mercury__getopt__Flag_3, mercury__getopt__V_173_173, mercury__getopt__HeadVar__5_5, mercury__getopt__HeadVar__6_6, mercury__getopt__Result_7, mercury__getopt__STATE_VARIABLE_OptionsSet_171_171, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
#line 871 "getopt.m"
                    return;
                  }
#line 871 "getopt.m"
                }
#line 873 "getopt.m"
              else
#line 874 "getopt.m"
                {
#line 874 "getopt.m"
                  {
#line 874 "getopt.m"
                    mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(mercury__getopt__Flag_3, mercury__getopt__HeadVar__2_2, mercury__getopt__Arg_167, mercury__getopt__Result_7);
                  }
#line 874 "getopt.m"
                  *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_171_171;
#line 874 "getopt.m"
                }
#line 869 "getopt.m"
            }
#line 866 "getopt.m"
        }
#line 767 "getopt.m"
      else
#line 767 "getopt.m"
        if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 897 "getopt.m"
          if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 898 "getopt.m"
            {
#line 899 "getopt.m"
              {
#line 899 "getopt.m"
                mercury__require__error_1_p_0((MR_String) "maybe_string_special argument expected in getopt.process_option");
#line 899 "getopt.m"
                return;
              }
#line 898 "getopt.m"
            }
#line 897 "getopt.m"
          else
#line 894 "getopt.m"
            {
#line 894 "getopt.m"
              MR_Word mercury__getopt__V_202_202;

#line 895 "getopt.m"
              {
#line 895 "getopt.m"
                mercury__getopt__V_202_202 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 895 "getopt.m"
                MR_hl_field(MR_mktag(3), mercury__getopt__V_202_202, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 895 "getopt.m"
                MR_hl_field(MR_mktag(3), mercury__getopt__V_202_202, 1) = ((MR_Box) (mercury__getopt__MaybeArg_4));
#line 895 "getopt.m"
              }
#line 895 "getopt.m"
              {
#line 895 "getopt.m"
                mercury__getopt__process_special_8_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__HeadVar__2_2, mercury__getopt__Flag_3, mercury__getopt__V_202_202, mercury__getopt__HeadVar__5_5, mercury__getopt__HeadVar__6_6, mercury__getopt__Result_7, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
#line 895 "getopt.m"
                return;
              }
#line 894 "getopt.m"
            }
#line 767 "getopt.m"
        else
#line 767 "getopt.m"
          if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 843 "getopt.m"
            {
#line 843 "getopt.m"
              MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_139_139;

#line 844 "getopt.m"
              {
#line 844 "getopt.m"
                mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt__STATE_VARIABLE_OptionsSet_139_139);
              }
#line 848 "getopt.m"
              if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 849 "getopt.m"
                {
#line 849 "getopt.m"
                  MR_Word mercury__getopt__V_140_140 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 850 "getopt.m"
                  {
#line 850 "getopt.m"
                    mercury__getopt__process_special_8_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__HeadVar__2_2, mercury__getopt__Flag_3, mercury__getopt__V_140_140, mercury__getopt__HeadVar__5_5, mercury__getopt__HeadVar__6_6, mercury__getopt__Result_7, mercury__getopt__STATE_VARIABLE_OptionsSet_139_139, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
#line 850 "getopt.m"
                    return;
                  }
#line 849 "getopt.m"
                }
#line 848 "getopt.m"
              else
#line 846 "getopt.m"
                {
#line 847 "getopt.m"
                  {
#line 847 "getopt.m"
                    mercury__require__error_1_p_0((MR_String) "no special argument expected in getopt.process_option");
#line 847 "getopt.m"
                    return;
                  }
#line 846 "getopt.m"
                }
#line 843 "getopt.m"
            }
#line 767 "getopt.m"
          else
#line 767 "getopt.m"
            if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 881 "getopt.m"
              {
#line 881 "getopt.m"
                MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_185_185;

#line 882 "getopt.m"
                {
#line 882 "getopt.m"
                  mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt__STATE_VARIABLE_OptionsSet_185_185);
                }
#line 887 "getopt.m"
                if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 888 "getopt.m"
                  {
#line 889 "getopt.m"
                    {
#line 889 "getopt.m"
                      mercury__require__error_1_p_0((MR_String) "string_special argument expected in getopt.process_option");
#line 889 "getopt.m"
                      return;
                    }
#line 888 "getopt.m"
                  }
#line 887 "getopt.m"
                else
#line 884 "getopt.m"
                  {
#line 884 "getopt.m"
                    MR_String mercury__getopt__Arg_182 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__MaybeArg_4, (MR_Integer) 0)));
#line 884 "getopt.m"
                    MR_Word mercury__getopt__V_187_187;

#line 885 "getopt.m"
                    {
#line 885 "getopt.m"
                      mercury__getopt__V_187_187 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 885 "getopt.m"
                      MR_hl_field(MR_mktag(3), mercury__getopt__V_187_187, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 885 "getopt.m"
                      MR_hl_field(MR_mktag(3), mercury__getopt__V_187_187, 1) = ((MR_Box) (mercury__getopt__Arg_182));
#line 885 "getopt.m"
                    }
#line 885 "getopt.m"
                    {
#line 885 "getopt.m"
                      mercury__getopt__process_special_8_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__HeadVar__2_2, mercury__getopt__Flag_3, mercury__getopt__V_187_187, mercury__getopt__HeadVar__5_5, mercury__getopt__HeadVar__6_6, mercury__getopt__Result_7, mercury__getopt__STATE_VARIABLE_OptionsSet_185_185, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
#line 885 "getopt.m"
                      return;
                    }
#line 884 "getopt.m"
                  }
#line 881 "getopt.m"
              }
#line 767 "getopt.m"
            else
#line 767 "getopt.m"
              if (((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 767 "getopt.m"
                {
#line 768 "getopt.m"
                  {
#line 768 "getopt.m"
                    mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
                  }
#line 773 "getopt.m"
                  if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 774 "getopt.m"
                    {
#line 774 "getopt.m"
                      MR_Word mercury__getopt__TypeCtorInfo_206_206 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 774 "getopt.m"
                      MR_Word mercury__getopt__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[1]);
#line 774 "getopt.m"
                      MR_Word mercury__getopt__OptionTable_27;

#line 775 "getopt.m"
                      {
#line 775 "getopt.m"
                        mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__TypeCtorInfo_206_206, mercury__getopt__Flag_3, ((MR_Box) (mercury__getopt__V_23_23)), mercury__getopt__HeadVar__6_6, &mercury__getopt__OptionTable_27);
                      }
#line 776 "getopt.m"
                      {
#line 776 "getopt.m"
                        MR_Word base;
#line 776 "getopt.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 776 "getopt.m"
                        *mercury__getopt__Result_7 = base;
#line 776 "getopt.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_27));
#line 776 "getopt.m"
                      }
#line 774 "getopt.m"
                    }
#line 773 "getopt.m"
                  else
#line 770 "getopt.m"
                    {
#line 770 "getopt.m"
                      MR_Word mercury__getopt__TypeCtorInfo_205_205 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 770 "getopt.m"
                      MR_Word mercury__getopt__OptionTable_19;
#line 770 "getopt.m"
                      MR_Word mercury__getopt__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[2]);

#line 771 "getopt.m"
                      {
#line 771 "getopt.m"
                        mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__TypeCtorInfo_205_205, mercury__getopt__Flag_3, ((MR_Box) (mercury__getopt__V_25_25)), mercury__getopt__HeadVar__6_6, &mercury__getopt__OptionTable_19);
                      }
#line 772 "getopt.m"
                      {
#line 772 "getopt.m"
                        MR_Word base;
#line 772 "getopt.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 772 "getopt.m"
                        *mercury__getopt__Result_7 = base;
#line 772 "getopt.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_19));
#line 772 "getopt.m"
                      }
#line 770 "getopt.m"
                    }
#line 767 "getopt.m"
                }
#line 767 "getopt.m"
              else
#line 767 "getopt.m"
                if (((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 779 "getopt.m"
                  {
#line 780 "getopt.m"
                    {
#line 780 "getopt.m"
                      mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
                    }
#line 789 "getopt.m"
                    if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 790 "getopt.m"
                      {
#line 791 "getopt.m"
                        {
#line 791 "getopt.m"
                          mercury__require__error_1_p_0((MR_String) "integer argument expected in getopt.process_option");
#line 791 "getopt.m"
                          return;
                        }
#line 790 "getopt.m"
                      }
#line 789 "getopt.m"
                    else
#line 782 "getopt.m"
                      {
#line 782 "getopt.m"
                        MR_String mercury__getopt__Arg_36 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__MaybeArg_4, (MR_Integer) 0)));
#line 786 "getopt.m"
                        MR_Integer mercury__getopt__IntArg_37;

#line 783 "getopt.m"
                        {
#line 783 "getopt.m"
                          mercury__getopt__succeeded = mercury__string__to_int_2_p_0(mercury__getopt__Arg_36, &mercury__getopt__IntArg_37);
                        }
#line 786 "getopt.m"
                        if (mercury__getopt__succeeded)
#line 784 "getopt.m"
                          {
#line 784 "getopt.m"
                            MR_Word mercury__getopt__TypeCtorInfo_207_207;
#line 784 "getopt.m"
                            MR_Word mercury__getopt__V_43_43;
#line 784 "getopt.m"
                            MR_Word mercury__getopt__STATE_VARIABLE_OptionTable_44_44;

#line 784 "getopt.m"
                            {
#line 784 "getopt.m"
                              mercury__getopt__V_43_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 784 "getopt.m"
                              MR_hl_field(MR_mktag(2), mercury__getopt__V_43_43, 0) = ((MR_Box) (mercury__getopt__IntArg_37));
#line 784 "getopt.m"
                            }
#line 9802 "getopt.c"
                            mercury__getopt__TypeCtorInfo_207_207 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 784 "getopt.m"
                            {
#line 784 "getopt.m"
                              mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__TypeCtorInfo_207_207, mercury__getopt__Flag_3, ((MR_Box) (mercury__getopt__V_43_43)), mercury__getopt__HeadVar__6_6, &mercury__getopt__STATE_VARIABLE_OptionTable_44_44);
                            }
#line 785 "getopt.m"
                            {
#line 785 "getopt.m"
                              MR_Word base;
#line 785 "getopt.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 785 "getopt.m"
                              *mercury__getopt__Result_7 = base;
#line 785 "getopt.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__STATE_VARIABLE_OptionTable_44_44));
#line 785 "getopt.m"
                            }
#line 784 "getopt.m"
                          }
#line 786 "getopt.m"
                        else
#line 787 "getopt.m"
                          {
#line 787 "getopt.m"
                            mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(mercury__getopt__Flag_3, mercury__getopt__HeadVar__2_2, mercury__getopt__Arg_36, mercury__getopt__Result_7);
#line 787 "getopt.m"
                            return;
                          }
#line 782 "getopt.m"
                      }
#line 779 "getopt.m"
                  }
#line 767 "getopt.m"
                else
#line 767 "getopt.m"
                  if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 831 "getopt.m"
                    {
#line 831 "getopt.m"
                      MR_Word mercury__getopt__List0_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));

#line 832 "getopt.m"
                      {
#line 832 "getopt.m"
                        mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
                      }
#line 838 "getopt.m"
                      if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 839 "getopt.m"
                        {
#line 840 "getopt.m"
                          {
#line 840 "getopt.m"
                            mercury__require__error_1_p_0((MR_String) "acumulating argument expected in getopt.process_option");
#line 840 "getopt.m"
                            return;
                          }
#line 839 "getopt.m"
                        }
#line 838 "getopt.m"
                      else
#line 834 "getopt.m"
                        {
#line 834 "getopt.m"
                          MR_Word mercury__getopt__TypeCtorInfo_211_211;
#line 834 "getopt.m"
                          MR_Word mercury__getopt__TypeCtorInfo_212_212;
#line 834 "getopt.m"
                          MR_String mercury__getopt__Arg_116 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__MaybeArg_4, (MR_Integer) 0)));
#line 834 "getopt.m"
                          MR_Word mercury__getopt__List_117;
#line 834 "getopt.m"
                          MR_Word mercury__getopt__V_123_123;
#line 834 "getopt.m"
                          MR_Word mercury__getopt__V_124_124 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 834 "getopt.m"
                          MR_Word mercury__getopt__V_125_125;
#line 834 "getopt.m"
                          MR_Word mercury__getopt__STATE_VARIABLE_OptionTable_126_126;

#line 835 "getopt.m"
                          {
#line 835 "getopt.m"
                            mercury__getopt__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 835 "getopt.m"
                            MR_hl_field(MR_mktag(1), mercury__getopt__V_123_123, 0) = ((MR_Box) (mercury__getopt__Arg_116));
#line 835 "getopt.m"
                            MR_hl_field(MR_mktag(1), mercury__getopt__V_123_123, 1) = ((MR_Box) (mercury__getopt__V_124_124));
#line 835 "getopt.m"
                          }
#line 9894 "getopt.c"
                          mercury__getopt__TypeCtorInfo_211_211 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 835 "getopt.m"
                          {
#line 835 "getopt.m"
                            mercury__list__append_3_p_1(mercury__getopt__TypeCtorInfo_211_211, mercury__getopt__List0_108, mercury__getopt__V_123_123, &mercury__getopt__List_117);
                          }
#line 836 "getopt.m"
                          {
#line 836 "getopt.m"
                            mercury__getopt__V_125_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 836 "getopt.m"
                            MR_hl_field(MR_mktag(3), mercury__getopt__V_125_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 836 "getopt.m"
                            MR_hl_field(MR_mktag(3), mercury__getopt__V_125_125, 1) = ((MR_Box) (mercury__getopt__List_117));
#line 836 "getopt.m"
                          }
#line 9911 "getopt.c"
                          mercury__getopt__TypeCtorInfo_212_212 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 836 "getopt.m"
                          {
#line 836 "getopt.m"
                            mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__TypeCtorInfo_212_212, mercury__getopt__Flag_3, ((MR_Box) (mercury__getopt__V_125_125)), mercury__getopt__HeadVar__6_6, &mercury__getopt__STATE_VARIABLE_OptionTable_126_126);
                          }
#line 837 "getopt.m"
                          {
#line 837 "getopt.m"
                            MR_Word base;
#line 837 "getopt.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 837 "getopt.m"
                            *mercury__getopt__Result_7 = base;
#line 837 "getopt.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__STATE_VARIABLE_OptionTable_126_126));
#line 837 "getopt.m"
                          }
#line 834 "getopt.m"
                        }
#line 831 "getopt.m"
                    }
#line 767 "getopt.m"
                  else
#line 767 "getopt.m"
                    if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 805 "getopt.m"
                      {
#line 806 "getopt.m"
                        {
#line 806 "getopt.m"
                          mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
                        }
#line 815 "getopt.m"
                        if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 816 "getopt.m"
                          {
#line 817 "getopt.m"
                            {
#line 817 "getopt.m"
                              mercury__require__error_1_p_0((MR_String) "integer argument expected in getopt.process_option");
#line 817 "getopt.m"
                              return;
                            }
#line 816 "getopt.m"
                          }
#line 815 "getopt.m"
                        else
#line 808 "getopt.m"
                          {
#line 808 "getopt.m"
                            MR_String mercury__getopt__Arg_75 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__MaybeArg_4, (MR_Integer) 0)));
#line 812 "getopt.m"
                            MR_Integer mercury__getopt__IntArg_76;

#line 809 "getopt.m"
                            {
#line 809 "getopt.m"
                              mercury__getopt__succeeded = mercury__string__to_int_2_p_0(mercury__getopt__Arg_75, &mercury__getopt__IntArg_76);
                            }
#line 812 "getopt.m"
                            if (mercury__getopt__succeeded)
#line 810 "getopt.m"
                              {
#line 810 "getopt.m"
                                MR_Word mercury__getopt__TypeCtorInfo_209_209;
#line 810 "getopt.m"
                                MR_Word mercury__getopt__V_82_82;
#line 810 "getopt.m"
                                MR_Word mercury__getopt__STATE_VARIABLE_OptionTable_83_83;
#line 810 "getopt.m"
                                MR_Word mercury__getopt__V_84_84;

#line 810 "getopt.m"
                                {
#line 810 "getopt.m"
                                  mercury__getopt__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 810 "getopt.m"
                                  MR_hl_field(MR_mktag(1), mercury__getopt__V_84_84, 0) = ((MR_Box) (mercury__getopt__IntArg_76));
#line 810 "getopt.m"
                                }
#line 810 "getopt.m"
                                {
#line 810 "getopt.m"
                                  mercury__getopt__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 810 "getopt.m"
                                  MR_hl_field(MR_mktag(3), mercury__getopt__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 810 "getopt.m"
                                  MR_hl_field(MR_mktag(3), mercury__getopt__V_82_82, 1) = ((MR_Box) (mercury__getopt__V_84_84));
#line 810 "getopt.m"
                                }
#line 10003 "getopt.c"
                                mercury__getopt__TypeCtorInfo_209_209 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 810 "getopt.m"
                                {
#line 810 "getopt.m"
                                  mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__TypeCtorInfo_209_209, mercury__getopt__Flag_3, ((MR_Box) (mercury__getopt__V_82_82)), mercury__getopt__HeadVar__6_6, &mercury__getopt__STATE_VARIABLE_OptionTable_83_83);
                                }
#line 811 "getopt.m"
                                {
#line 811 "getopt.m"
                                  MR_Word base;
#line 811 "getopt.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 811 "getopt.m"
                                  *mercury__getopt__Result_7 = base;
#line 811 "getopt.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__STATE_VARIABLE_OptionTable_83_83));
#line 811 "getopt.m"
                                }
#line 810 "getopt.m"
                              }
#line 812 "getopt.m"
                            else
#line 813 "getopt.m"
                              {
#line 813 "getopt.m"
                                mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(mercury__getopt__Flag_3, mercury__getopt__HeadVar__2_2, mercury__getopt__Arg_75, mercury__getopt__Result_7);
#line 813 "getopt.m"
                                return;
                              }
#line 808 "getopt.m"
                          }
#line 805 "getopt.m"
                      }
#line 767 "getopt.m"
                    else
#line 767 "getopt.m"
                      if (((((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 820 "getopt.m"
                        {
#line 821 "getopt.m"
                          {
#line 821 "getopt.m"
                            mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
                          }
#line 826 "getopt.m"
                          if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 827 "getopt.m"
                            {
#line 828 "getopt.m"
                              {
#line 828 "getopt.m"
                                mercury__require__error_1_p_0((MR_String) "string argument expected in getopt.process_option");
#line 828 "getopt.m"
                                return;
                              }
#line 827 "getopt.m"
                            }
#line 826 "getopt.m"
                          else
#line 823 "getopt.m"
                            {
#line 823 "getopt.m"
                              MR_Word mercury__getopt__TypeCtorInfo_210_210;
#line 823 "getopt.m"
                              MR_Word mercury__getopt__V_103_103;
#line 823 "getopt.m"
                              MR_Word mercury__getopt__STATE_VARIABLE_OptionTable_104_104;

#line 824 "getopt.m"
                              {
#line 824 "getopt.m"
                                mercury__getopt__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 824 "getopt.m"
                                MR_hl_field(MR_mktag(3), mercury__getopt__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 824 "getopt.m"
                                MR_hl_field(MR_mktag(3), mercury__getopt__V_103_103, 1) = ((MR_Box) (mercury__getopt__MaybeArg_4));
#line 824 "getopt.m"
                              }
#line 10082 "getopt.c"
                              mercury__getopt__TypeCtorInfo_210_210 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 824 "getopt.m"
                              {
#line 824 "getopt.m"
                                mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__TypeCtorInfo_210_210, mercury__getopt__Flag_3, ((MR_Box) (mercury__getopt__V_103_103)), mercury__getopt__HeadVar__6_6, &mercury__getopt__STATE_VARIABLE_OptionTable_104_104);
                              }
#line 825 "getopt.m"
                              {
#line 825 "getopt.m"
                                MR_Word base;
#line 825 "getopt.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 825 "getopt.m"
                                *mercury__getopt__Result_7 = base;
#line 825 "getopt.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__STATE_VARIABLE_OptionTable_104_104));
#line 825 "getopt.m"
                              }
#line 823 "getopt.m"
                            }
#line 820 "getopt.m"
                        }
#line 767 "getopt.m"
                      else
#line 794 "getopt.m"
                        {
#line 795 "getopt.m"
                          {
#line 795 "getopt.m"
                            mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
                          }
#line 800 "getopt.m"
                          if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 801 "getopt.m"
                            {
#line 802 "getopt.m"
                              {
#line 802 "getopt.m"
                                mercury__require__error_1_p_0((MR_String) "string argument expected in getopt.process_option");
#line 802 "getopt.m"
                                return;
                              }
#line 801 "getopt.m"
                            }
#line 800 "getopt.m"
                          else
#line 797 "getopt.m"
                            {
#line 797 "getopt.m"
                              MR_Word mercury__getopt__TypeCtorInfo_208_208;
#line 797 "getopt.m"
                              MR_String mercury__getopt__Arg_57 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__MaybeArg_4, (MR_Integer) 0)));
#line 797 "getopt.m"
                              MR_Word mercury__getopt__V_63_63;
#line 797 "getopt.m"
                              MR_Word mercury__getopt__STATE_VARIABLE_OptionTable_64_64;

#line 798 "getopt.m"
                              {
#line 798 "getopt.m"
                                mercury__getopt__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "getopt.m"
                                MR_hl_field(MR_mktag(3), mercury__getopt__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 798 "getopt.m"
                                MR_hl_field(MR_mktag(3), mercury__getopt__V_63_63, 1) = ((MR_Box) (mercury__getopt__Arg_57));
#line 798 "getopt.m"
                              }
#line 10150 "getopt.c"
                              mercury__getopt__TypeCtorInfo_208_208 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 798 "getopt.m"
                              {
#line 798 "getopt.m"
                                mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__TypeCtorInfo_208_208, mercury__getopt__Flag_3, ((MR_Box) (mercury__getopt__V_63_63)), mercury__getopt__HeadVar__6_6, &mercury__getopt__STATE_VARIABLE_OptionTable_64_64);
                              }
#line 799 "getopt.m"
                              {
#line 799 "getopt.m"
                                MR_Word base;
#line 799 "getopt.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 799 "getopt.m"
                                *mercury__getopt__Result_7 = base;
#line 799 "getopt.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__STATE_VARIABLE_OptionTable_64_64));
#line 799 "getopt.m"
                              }
#line 797 "getopt.m"
                            }
#line 794 "getopt.m"
                        }
#line 767 "getopt.m"
  }
#line 760 "getopt.m"
}

#line 688 "getopt.m"
static void MR_CALL 
mercury__getopt__handle_short_options_10_p_0(
#line 688 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_60,
#line 688 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 688 "getopt.m"
  MR_Word mercury__getopt__OptionOps_2,
#line 688 "getopt.m"
  MR_Word mercury__getopt__HeadVar__3_3,
#line 688 "getopt.m"
  MR_Word * mercury__getopt__Args_4,
#line 688 "getopt.m"
  MR_Word mercury__getopt__HeadVar__5_5,
#line 688 "getopt.m"
  MR_Word * mercury__getopt__OptionArgs_6,
#line 688 "getopt.m"
  MR_Word mercury__getopt__HeadVar__7_7,
#line 688 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__8_8,
#line 688 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_9,
#line 688 "getopt.m"
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_10)
#line 688 "getopt.m"
{
#line 695 "getopt.m"
  while (MR_TRUE)
#line 695 "getopt.m"
    {
#line 695 "getopt.m"
      /* tailcall optimized into a loop */
#line 695 "getopt.m"
      {
#line 695 "getopt.m"
        MR_bool mercury__getopt__succeeded;

#line 695 "getopt.m"
        if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 695 "getopt.m"
          {
#line 695 "getopt.m"
            *mercury__getopt__Args_4 = mercury__getopt__HeadVar__3_3;
#line 695 "getopt.m"
            *mercury__getopt__OptionArgs_6 = mercury__getopt__HeadVar__5_5;
#line 696 "getopt.m"
            {
#line 696 "getopt.m"
              MR_Word base;
#line 696 "getopt.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 696 "getopt.m"
              *mercury__getopt__HeadVar__8_8 = base;
#line 696 "getopt.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__HeadVar__7_7));
#line 696 "getopt.m"
            }
#line 696 "getopt.m"
            *mercury__getopt__STATE_VARIABLE_OptionsSet_10 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_9;
#line 695 "getopt.m"
          }
#line 695 "getopt.m"
        else
#line 698 "getopt.m"
          {
#line 698 "getopt.m"
            MR_Char mercury__getopt__Opt_18 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 698 "getopt.m"
            MR_Word mercury__getopt__Opts0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
#line 698 "getopt.m"
            MR_Word mercury__getopt__ShortOptionPred_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_2, (MR_Integer) 0)));
#line 699 "getopt.m"
            MR_Word mercury__getopt__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_2, (MR_Integer) 1)));
#line 699 "getopt.m"
            MR_Word mercury__getopt__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_2, (MR_Integer) 2)));
#line 733 "getopt.m"
            MR_Box mercury__getopt__Flag_29;
#line 700 "getopt.m"
            MR_bool MR_CALL (* mercury__getopt__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt__ShortOptionPred_28, (MR_Integer) 1)));

#line 700 "getopt.m"
            {
#line 700 "getopt.m"
              mercury__getopt__succeeded = mercury__getopt__func_0(((MR_Box) mercury__getopt__ShortOptionPred_28), ((MR_Box) (MR_Word) (mercury__getopt__Opt_18)), &mercury__getopt__Flag_29);
            }
#line 733 "getopt.m"
            if (mercury__getopt__succeeded)
#line 726 "getopt.m"
              {
#line 726 "getopt.m"
                MR_Word mercury__getopt__OptionData_30;
#line 701 "getopt.m"
                MR_Word mercury__getopt__TypeCtorInfo_61_61 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 41 "map.opt"
                MR_Box mercury__getopt__conv1_OptionData_30;

#line 41 "map.opt"
                {
#line 41 "map.opt"
                  mercury__getopt__succeeded = mercury__tree234__search_3_p_0(mercury__getopt__TypeInfo_for_OptionType_60, mercury__getopt__TypeCtorInfo_61_61, mercury__getopt__HeadVar__7_7, mercury__getopt__Flag_29, &mercury__getopt__conv1_OptionData_30);
                }
#line 41 "map.opt"
                if (mercury__getopt__succeeded)
#line 41 "map.opt"
                  {
#line 41 "map.opt"
                    mercury__getopt__OptionData_30 = ((MR_Word) mercury__getopt__conv1_OptionData_30);
#line 41 "map.opt"
                    mercury__getopt__succeeded = MR_TRUE;
#line 41 "map.opt"
                  }
#line 726 "getopt.m"
                if (mercury__getopt__succeeded)
#line 712 "getopt.m"
                  {
#line 712 "getopt.m"
                    MR_Word mercury__getopt__Args1_32;
#line 712 "getopt.m"
                    MR_Word mercury__getopt__OptionArgs1_33;
#line 712 "getopt.m"
                    MR_Word mercury__getopt__MaybeOptionArg_34;
#line 712 "getopt.m"
                    MR_Word mercury__getopt__Opts1_35;
#line 712 "getopt.m"
                    MR_String mercury__getopt__Option_36;
#line 712 "getopt.m"
                    MR_Word mercury__getopt__Result1_37;
#line 712 "getopt.m"
                    MR_Word mercury__getopt__V_45_45;
#line 712 "getopt.m"
                    MR_Word mercury__getopt__V_47_47;
#line 712 "getopt.m"
                    MR_Word mercury__getopt__V_48_48;
#line 712 "getopt.m"
                    MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_49_49;
#line 702 "getopt.m"
                    MR_Word mercury__getopt__V_62_62;

#line 1012 "getopt.m"
                    if ((mercury__getopt__OptionData_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1019 "getopt.m"
                      mercury__getopt__V_62_62 = (MR_Integer) 0;
#line 1012 "getopt.m"
                    else
#line 1012 "getopt.m"
                      if ((mercury__getopt__OptionData_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1020 "getopt.m"
                        mercury__getopt__V_62_62 = (MR_Integer) 1;
#line 1012 "getopt.m"
                      else
#line 1012 "getopt.m"
                        if ((mercury__getopt__OptionData_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1022 "getopt.m"
                          mercury__getopt__V_62_62 = (MR_Integer) 1;
#line 1012 "getopt.m"
                        else
#line 1012 "getopt.m"
                          if ((mercury__getopt__OptionData_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1018 "getopt.m"
                            mercury__getopt__V_62_62 = (MR_Integer) 0;
#line 1012 "getopt.m"
                          else
#line 1012 "getopt.m"
                            if ((mercury__getopt__OptionData_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1021 "getopt.m"
                              mercury__getopt__V_62_62 = (MR_Integer) 1;
#line 1012 "getopt.m"
                            else
#line 1012 "getopt.m"
                              if (((MR_tag((MR_Word) mercury__getopt__OptionData_30)) == (MR_mktag((MR_Integer) 1))))
#line 1012 "getopt.m"
                                mercury__getopt__V_62_62 = (MR_Integer) 0;
#line 1012 "getopt.m"
                              else
#line 1012 "getopt.m"
                                if (((MR_tag((MR_Word) mercury__getopt__OptionData_30)) == (MR_mktag((MR_Integer) 2))))
#line 1013 "getopt.m"
                                  mercury__getopt__V_62_62 = (MR_Integer) 1;
#line 1012 "getopt.m"
                                else
#line 1012 "getopt.m"
                                  if (((((MR_tag((MR_Word) mercury__getopt__OptionData_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_30, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1017 "getopt.m"
                                    mercury__getopt__V_62_62 = (MR_Integer) 1;
#line 1012 "getopt.m"
                                  else
#line 1012 "getopt.m"
                                    if (((((MR_tag((MR_Word) mercury__getopt__OptionData_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_30, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1015 "getopt.m"
                                      mercury__getopt__V_62_62 = (MR_Integer) 1;
#line 1012 "getopt.m"
                                    else
#line 1012 "getopt.m"
                                      if (((((MR_tag((MR_Word) mercury__getopt__OptionData_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_30, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1016 "getopt.m"
                                        mercury__getopt__V_62_62 = (MR_Integer) 1;
#line 1012 "getopt.m"
                                      else
#line 1014 "getopt.m"
                                        mercury__getopt__V_62_62 = (MR_Integer) 1;
#line 702 "getopt.m"
                    mercury__getopt__succeeded = ((MR_Integer) 1 == mercury__getopt__V_62_62);
#line 707 "getopt.m"
                    if (mercury__getopt__succeeded)
#line 704 "getopt.m"
                      {
#line 704 "getopt.m"
                        MR_String mercury__getopt__Arg_31;
#line 754 "getopt.m"
                        MR_String mercury__getopt__ArgPrime_78;
#line 754 "getopt.m"
                        MR_Word mercury__getopt__ArgsPrime_79;

#line 748 "getopt.m"
                        mercury__getopt__succeeded = (mercury__getopt__Opts0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 748 "getopt.m"
                        if (mercury__getopt__succeeded)
#line 748 "getopt.m"
                          {
#line 749 "getopt.m"
                            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 749 "getopt.m"
                            if (mercury__getopt__succeeded)
#line 749 "getopt.m"
                              {
#line 749 "getopt.m"
                                mercury__getopt__ArgPrime_78 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
#line 749 "getopt.m"
                                mercury__getopt__ArgsPrime_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
#line 749 "getopt.m"
                              }
#line 748 "getopt.m"
                          }
#line 754 "getopt.m"
                        if (mercury__getopt__succeeded)
#line 751 "getopt.m"
                          {
#line 751 "getopt.m"
                            {
#line 751 "getopt.m"
                              mercury__getopt__OptionArgs1_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "getopt.m"
                              MR_hl_field(MR_mktag(1), mercury__getopt__OptionArgs1_33, 0) = ((MR_Box) (mercury__getopt__ArgPrime_78));
#line 751 "getopt.m"
                              MR_hl_field(MR_mktag(1), mercury__getopt__OptionArgs1_33, 1) = ((MR_Box) (mercury__getopt__HeadVar__5_5));
#line 751 "getopt.m"
                            }
#line 752 "getopt.m"
                            mercury__getopt__Arg_31 = mercury__getopt__ArgPrime_78;
#line 753 "getopt.m"
                            mercury__getopt__Args1_32 = mercury__getopt__ArgsPrime_79;
#line 751 "getopt.m"
                          }
#line 754 "getopt.m"
                        else
#line 755 "getopt.m"
                          {
#line 755 "getopt.m"
                            {
#line 755 "getopt.m"
                              mercury__string__from_char_list_2_p_0(mercury__getopt__Opts0_19, &mercury__getopt__Arg_31);
                            }
#line 756 "getopt.m"
                            mercury__getopt__OptionArgs1_33 = mercury__getopt__HeadVar__5_5;
#line 757 "getopt.m"
                            mercury__getopt__Args1_32 = mercury__getopt__HeadVar__3_3;
#line 755 "getopt.m"
                          }
#line 705 "getopt.m"
                        {
#line 705 "getopt.m"
                          mercury__getopt__MaybeOptionArg_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 705 "getopt.m"
                          MR_hl_field(MR_mktag(1), mercury__getopt__MaybeOptionArg_34, 0) = ((MR_Box) (mercury__getopt__Arg_31));
#line 705 "getopt.m"
                        }
#line 706 "getopt.m"
                        mercury__getopt__Opts1_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 704 "getopt.m"
                      }
#line 707 "getopt.m"
                    else
#line 708 "getopt.m"
                      {
#line 708 "getopt.m"
                        mercury__getopt__MaybeOptionArg_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 709 "getopt.m"
                        mercury__getopt__Opts1_35 = mercury__getopt__Opts0_19;
#line 710 "getopt.m"
                        mercury__getopt__OptionArgs1_33 = mercury__getopt__HeadVar__5_5;
#line 711 "getopt.m"
                        mercury__getopt__Args1_32 = mercury__getopt__HeadVar__3_3;
#line 708 "getopt.m"
                      }
#line 713 "getopt.m"
                    mercury__getopt__V_48_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 713 "getopt.m"
                    {
#line 713 "getopt.m"
                      mercury__getopt__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "getopt.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt__V_47_47, 0) = ((MR_Box) (MR_Word) (mercury__getopt__Opt_18));
#line 713 "getopt.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt__V_47_47, 1) = ((MR_Box) (mercury__getopt__V_48_48));
#line 713 "getopt.m"
                    }
#line 713 "getopt.m"
                    {
#line 713 "getopt.m"
                      mercury__getopt__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "getopt.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
#line 713 "getopt.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt__V_45_45, 1) = ((MR_Box) (mercury__getopt__V_47_47));
#line 713 "getopt.m"
                    }
#line 713 "getopt.m"
                    {
#line 713 "getopt.m"
                      mercury__string__from_char_list_2_p_0(mercury__getopt__V_45_45, &mercury__getopt__Option_36);
                    }
#line 714 "getopt.m"
                    {
#line 714 "getopt.m"
                      mercury__getopt__process_option_9_p_0(mercury__getopt__TypeInfo_for_OptionType_60, mercury__getopt__OptionData_30, mercury__getopt__Option_36, mercury__getopt__Flag_29, mercury__getopt__MaybeOptionArg_34, mercury__getopt__OptionOps_2, mercury__getopt__HeadVar__7_7, &mercury__getopt__Result1_37, mercury__getopt__STATE_VARIABLE_OptionsSet_0_9, &mercury__getopt__STATE_VARIABLE_OptionsSet_49_49);
                    }
#line 720 "getopt.m"
                    if (((MR_tag((MR_Word) mercury__getopt__Result1_37)) == (MR_mktag((MR_Integer) 1))))
#line 721 "getopt.m"
                      {
#line 722 "getopt.m"
                        *mercury__getopt__HeadVar__8_8 = mercury__getopt__Result1_37;
#line 723 "getopt.m"
                        *mercury__getopt__OptionArgs_6 = mercury__getopt__OptionArgs1_33;
#line 724 "getopt.m"
                        *mercury__getopt__Args_4 = mercury__getopt__Args1_32;
#line 721 "getopt.m"
                        *mercury__getopt__STATE_VARIABLE_OptionsSet_10 = mercury__getopt__STATE_VARIABLE_OptionsSet_49_49;
#line 721 "getopt.m"
                      }
#line 720 "getopt.m"
                    else
#line 717 "getopt.m"
                      {
#line 717 "getopt.m"
                        MR_Word mercury__getopt__OptionTable1_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result1_37, (MR_Integer) 0)));

#line 718 "getopt.m"
                        /* direct tailcall eliminated */
#line 718 "getopt.m"
                        {
#line 718 "getopt.m"
                          MR_Word mercury__getopt__HeadVar__1__tmp_copy_1 = mercury__getopt__Opts1_35;
#line 718 "getopt.m"
                          MR_Word mercury__getopt__HeadVar__3__tmp_copy_3 = mercury__getopt__Args1_32;
#line 718 "getopt.m"
                          MR_Word mercury__getopt__HeadVar__5__tmp_copy_5 = mercury__getopt__OptionArgs1_33;
#line 718 "getopt.m"
                          MR_Word mercury__getopt__HeadVar__7__tmp_copy_7 = mercury__getopt__OptionTable1_38;
#line 718 "getopt.m"
                          MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0__tmp_copy_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_49_49;

#line 718 "getopt.m"
                          mercury__getopt__STATE_VARIABLE_OptionsSet_0_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_0__tmp_copy_9;
#line 718 "getopt.m"
                          mercury__getopt__HeadVar__7_7 = mercury__getopt__HeadVar__7__tmp_copy_7;
#line 718 "getopt.m"
                          mercury__getopt__HeadVar__5_5 = mercury__getopt__HeadVar__5__tmp_copy_5;
#line 718 "getopt.m"
                          mercury__getopt__HeadVar__3_3 = mercury__getopt__HeadVar__3__tmp_copy_3;
#line 718 "getopt.m"
                          mercury__getopt__HeadVar__1_1 = mercury__getopt__HeadVar__1__tmp_copy_1;
#line 718 "getopt.m"
                        }
#line 718 "getopt.m"
                        continue;
#line 717 "getopt.m"
                      }
#line 712 "getopt.m"
                  }
#line 726 "getopt.m"
                else
#line 727 "getopt.m"
                  {
#line 727 "getopt.m"
                    MR_String mercury__getopt__OptString_40;
#line 727 "getopt.m"
                    MR_Word mercury__getopt__Error_41;
#line 727 "getopt.m"
                    MR_String mercury__getopt__V_51_51;
#line 727 "getopt.m"
                    MR_Word mercury__getopt__V_53_53;
#line 727 "getopt.m"
                    MR_Word mercury__getopt__V_5_82;
#line 727 "getopt.m"
                    MR_Word mercury__getopt__V_6_83 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 701 "string.opt"
                    {
#line 701 "string.opt"
                      mercury__getopt__V_5_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 701 "string.opt"
                      MR_hl_field(MR_mktag(1), mercury__getopt__V_5_82, 0) = ((MR_Box) (MR_Word) (mercury__getopt__Opt_18));
#line 701 "string.opt"
                      MR_hl_field(MR_mktag(1), mercury__getopt__V_5_82, 1) = ((MR_Box) (mercury__getopt__V_6_83));
#line 701 "string.opt"
                    }
#line 703 "string.opt"
                    {
#line 703 "string.opt"
                      mercury__string__to_char_list_2_p_1(&mercury__getopt__OptString_40, mercury__getopt__V_5_82);
                    }
#line 411 "string.opt"
                    {
#line 411 "string.opt"
                      mercury__string__append_3_p_2((MR_String) "-", mercury__getopt__OptString_40, &mercury__getopt__V_51_51);
                    }
#line 728 "getopt.m"
                    mercury__getopt__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 728 "getopt.m"
                    {
#line 728 "getopt.m"
                      mercury__getopt__Error_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 728 "getopt.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt__Error_41, 0) = mercury__getopt__Flag_29;
#line 728 "getopt.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt__Error_41, 1) = ((MR_Box) (mercury__getopt__V_51_51));
#line 728 "getopt.m"
                      MR_hl_field(MR_mktag(1), mercury__getopt__Error_41, 2) = ((MR_Box) (mercury__getopt__V_53_53));
#line 728 "getopt.m"
                    }
#line 729 "getopt.m"
                    {
#line 729 "getopt.m"
                      MR_Word base;
#line 729 "getopt.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 729 "getopt.m"
                      *mercury__getopt__HeadVar__8_8 = base;
#line 729 "getopt.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_41));
#line 729 "getopt.m"
                    }
#line 730 "getopt.m"
                    *mercury__getopt__OptionArgs_6 = mercury__getopt__HeadVar__5_5;
#line 731 "getopt.m"
                    *mercury__getopt__Args_4 = mercury__getopt__HeadVar__3_3;
#line 727 "getopt.m"
                    *mercury__getopt__STATE_VARIABLE_OptionsSet_10 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_9;
#line 727 "getopt.m"
                  }
#line 726 "getopt.m"
              }
#line 733 "getopt.m"
            else
#line 734 "getopt.m"
              {
#line 734 "getopt.m"
                MR_String mercury__getopt__V_54_54;
#line 734 "getopt.m"
                MR_String mercury__getopt__OptString_56;
#line 734 "getopt.m"
                MR_Word mercury__getopt__Error_57;
#line 734 "getopt.m"
                MR_Word mercury__getopt__V_5_92;
#line 734 "getopt.m"
                MR_Word mercury__getopt__V_6_93 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 701 "string.opt"
                {
#line 701 "string.opt"
                  mercury__getopt__V_5_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 701 "string.opt"
                  MR_hl_field(MR_mktag(1), mercury__getopt__V_5_92, 0) = ((MR_Box) (MR_Word) (mercury__getopt__Opt_18));
#line 701 "string.opt"
                  MR_hl_field(MR_mktag(1), mercury__getopt__V_5_92, 1) = ((MR_Box) (mercury__getopt__V_6_93));
#line 701 "string.opt"
                }
#line 703 "string.opt"
                {
#line 703 "string.opt"
                  mercury__string__to_char_list_2_p_1(&mercury__getopt__OptString_56, mercury__getopt__V_5_92);
                }
#line 735 "getopt.m"
                {
#line 735 "getopt.m"
                  mercury__getopt__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) "-", mercury__getopt__OptString_56);
                }
#line 735 "getopt.m"
                {
#line 735 "getopt.m"
                  mercury__getopt__Error_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 735 "getopt.m"
                  MR_hl_field(MR_mktag(0), mercury__getopt__Error_57, 0) = ((MR_Box) (mercury__getopt__V_54_54));
#line 735 "getopt.m"
                }
#line 736 "getopt.m"
                {
#line 736 "getopt.m"
                  MR_Word base;
#line 736 "getopt.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 736 "getopt.m"
                  *mercury__getopt__HeadVar__8_8 = base;
#line 736 "getopt.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_57));
#line 736 "getopt.m"
                }
#line 737 "getopt.m"
                *mercury__getopt__OptionArgs_6 = mercury__getopt__HeadVar__5_5;
#line 738 "getopt.m"
                *mercury__getopt__Args_4 = mercury__getopt__HeadVar__3_3;
#line 734 "getopt.m"
                *mercury__getopt__STATE_VARIABLE_OptionsSet_10 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_9;
#line 734 "getopt.m"
              }
#line 698 "getopt.m"
          }
#line 695 "getopt.m"
      }
#line 695 "getopt.m"
      break;
#line 695 "getopt.m"
    }
#line 688 "getopt.m"
}

#line 622 "getopt.m"
static void MR_CALL 
mercury__getopt__handle_long_option_13_p_0(
#line 622 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_48,
#line 622 "getopt.m"
  MR_String mercury__getopt__Option_14,
#line 622 "getopt.m"
  MR_Box mercury__getopt__Flag_15,
#line 622 "getopt.m"
  MR_Word mercury__getopt__OptionData_16,
#line 622 "getopt.m"
  MR_Word mercury__getopt__MaybeOptionArg0_17,
#line 622 "getopt.m"
  MR_Word mercury__getopt__Args0_18,
#line 622 "getopt.m"
  MR_Word * mercury__getopt__Args_19,
#line 622 "getopt.m"
  MR_Word mercury__getopt__OptionOps_20,
#line 622 "getopt.m"
  MR_Word mercury__getopt__OptionArgs0_21,
#line 622 "getopt.m"
  MR_Word * mercury__getopt__OptionArgs_22,
#line 622 "getopt.m"
  MR_Word mercury__getopt__OptionTable0_23,
#line 622 "getopt.m"
  MR_Word * mercury__getopt__Result_24,
#line 622 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_37,
#line 622 "getopt.m"
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_38)
#line 622 "getopt.m"
{
#line 631 "getopt.m"
  {
#line 631 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 631 "getopt.m"
    MR_Word mercury__getopt__MaybeOptionArg_28;
#line 631 "getopt.m"
    MR_Word mercury__getopt__Args1_29;
#line 631 "getopt.m"
    MR_Word mercury__getopt__MissingArg_30;
#line 631 "getopt.m"
    MR_Word mercury__getopt__OptionArgs1_31;
#line 633 "getopt.m"
    MR_Word mercury__getopt__V_49_49;

#line 1012 "getopt.m"
    if ((mercury__getopt__OptionData_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1019 "getopt.m"
      mercury__getopt__V_49_49 = (MR_Integer) 0;
#line 1012 "getopt.m"
    else
#line 1012 "getopt.m"
      if ((mercury__getopt__OptionData_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1020 "getopt.m"
        mercury__getopt__V_49_49 = (MR_Integer) 1;
#line 1012 "getopt.m"
      else
#line 1012 "getopt.m"
        if ((mercury__getopt__OptionData_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1022 "getopt.m"
          mercury__getopt__V_49_49 = (MR_Integer) 1;
#line 1012 "getopt.m"
        else
#line 1012 "getopt.m"
          if ((mercury__getopt__OptionData_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1018 "getopt.m"
            mercury__getopt__V_49_49 = (MR_Integer) 0;
#line 1012 "getopt.m"
          else
#line 1012 "getopt.m"
            if ((mercury__getopt__OptionData_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1021 "getopt.m"
              mercury__getopt__V_49_49 = (MR_Integer) 1;
#line 1012 "getopt.m"
            else
#line 1012 "getopt.m"
              if (((MR_tag((MR_Word) mercury__getopt__OptionData_16)) == (MR_mktag((MR_Integer) 1))))
#line 1012 "getopt.m"
                mercury__getopt__V_49_49 = (MR_Integer) 0;
#line 1012 "getopt.m"
              else
#line 1012 "getopt.m"
                if (((MR_tag((MR_Word) mercury__getopt__OptionData_16)) == (MR_mktag((MR_Integer) 2))))
#line 1013 "getopt.m"
                  mercury__getopt__V_49_49 = (MR_Integer) 1;
#line 1012 "getopt.m"
                else
#line 1012 "getopt.m"
                  if (((((MR_tag((MR_Word) mercury__getopt__OptionData_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_16, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1017 "getopt.m"
                    mercury__getopt__V_49_49 = (MR_Integer) 1;
#line 1012 "getopt.m"
                  else
#line 1012 "getopt.m"
                    if (((((MR_tag((MR_Word) mercury__getopt__OptionData_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_16, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1015 "getopt.m"
                      mercury__getopt__V_49_49 = (MR_Integer) 1;
#line 1012 "getopt.m"
                    else
#line 1012 "getopt.m"
                      if (((((MR_tag((MR_Word) mercury__getopt__OptionData_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_16, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1016 "getopt.m"
                        mercury__getopt__V_49_49 = (MR_Integer) 1;
#line 1012 "getopt.m"
                      else
#line 1014 "getopt.m"
                        mercury__getopt__V_49_49 = (MR_Integer) 1;
#line 633 "getopt.m"
    mercury__getopt__succeeded = ((MR_Integer) 1 == mercury__getopt__V_49_49);
#line 633 "getopt.m"
    if (mercury__getopt__succeeded)
#line 634 "getopt.m"
      mercury__getopt__succeeded = (mercury__getopt__MaybeOptionArg0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 649 "getopt.m"
    if (mercury__getopt__succeeded)
#line 642 "getopt.m"
      if ((mercury__getopt__Args0_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 643 "getopt.m"
        {
#line 644 "getopt.m"
          mercury__getopt__MaybeOptionArg_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 645 "getopt.m"
          mercury__getopt__Args1_29 = mercury__getopt__Args0_18;
#line 646 "getopt.m"
          mercury__getopt__OptionArgs1_31 = mercury__getopt__OptionArgs0_21;
#line 647 "getopt.m"
          mercury__getopt__MissingArg_30 = (MR_Integer) 1;
#line 643 "getopt.m"
        }
#line 642 "getopt.m"
      else
#line 637 "getopt.m"
        {
#line 637 "getopt.m"
          MR_String mercury__getopt__Arg_26 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__Args0_18, (MR_Integer) 0)));

#line 637 "getopt.m"
          mercury__getopt__Args1_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__Args0_18, (MR_Integer) 1)));
#line 638 "getopt.m"
          {
#line 638 "getopt.m"
            mercury__getopt__MaybeOptionArg_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 638 "getopt.m"
            MR_hl_field(MR_mktag(1), mercury__getopt__MaybeOptionArg_28, 0) = ((MR_Box) (mercury__getopt__Arg_26));
#line 638 "getopt.m"
          }
#line 640 "getopt.m"
          mercury__getopt__MissingArg_30 = (MR_Integer) 0;
#line 641 "getopt.m"
          {
#line 641 "getopt.m"
            mercury__getopt__OptionArgs1_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 641 "getopt.m"
            MR_hl_field(MR_mktag(1), mercury__getopt__OptionArgs1_31, 0) = ((MR_Box) (mercury__getopt__Arg_26));
#line 641 "getopt.m"
            MR_hl_field(MR_mktag(1), mercury__getopt__OptionArgs1_31, 1) = ((MR_Box) (mercury__getopt__OptionArgs0_21));
#line 641 "getopt.m"
          }
#line 637 "getopt.m"
        }
#line 649 "getopt.m"
    else
#line 650 "getopt.m"
      {
#line 650 "getopt.m"
        mercury__getopt__MaybeOptionArg_28 = mercury__getopt__MaybeOptionArg0_17;
#line 651 "getopt.m"
        mercury__getopt__Args1_29 = mercury__getopt__Args0_18;
#line 652 "getopt.m"
        mercury__getopt__OptionArgs1_31 = mercury__getopt__OptionArgs0_21;
#line 653 "getopt.m"
        mercury__getopt__MissingArg_30 = (MR_Integer) 0;
#line 650 "getopt.m"
      }
#line 661 "getopt.m"
    if ((mercury__getopt__MissingArg_30 == (MR_Integer) 0))
#line 672 "getopt.m"
      {
#line 672 "getopt.m"
        MR_String mercury__getopt__ArgVal_33;
#line 664 "getopt.m"
        MR_Word mercury__getopt__V_50_50;

#line 1012 "getopt.m"
        if ((mercury__getopt__OptionData_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1019 "getopt.m"
          mercury__getopt__V_50_50 = (MR_Integer) 0;
#line 1012 "getopt.m"
        else
#line 1012 "getopt.m"
          if ((mercury__getopt__OptionData_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1020 "getopt.m"
            mercury__getopt__V_50_50 = (MR_Integer) 1;
#line 1012 "getopt.m"
          else
#line 1012 "getopt.m"
            if ((mercury__getopt__OptionData_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1022 "getopt.m"
              mercury__getopt__V_50_50 = (MR_Integer) 1;
#line 1012 "getopt.m"
            else
#line 1012 "getopt.m"
              if ((mercury__getopt__OptionData_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1018 "getopt.m"
                mercury__getopt__V_50_50 = (MR_Integer) 0;
#line 1012 "getopt.m"
              else
#line 1012 "getopt.m"
                if ((mercury__getopt__OptionData_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1021 "getopt.m"
                  mercury__getopt__V_50_50 = (MR_Integer) 1;
#line 1012 "getopt.m"
                else
#line 1012 "getopt.m"
                  if (((MR_tag((MR_Word) mercury__getopt__OptionData_16)) == (MR_mktag((MR_Integer) 1))))
#line 1012 "getopt.m"
                    mercury__getopt__V_50_50 = (MR_Integer) 0;
#line 1012 "getopt.m"
                  else
#line 1012 "getopt.m"
                    if (((MR_tag((MR_Word) mercury__getopt__OptionData_16)) == (MR_mktag((MR_Integer) 2))))
#line 1013 "getopt.m"
                      mercury__getopt__V_50_50 = (MR_Integer) 1;
#line 1012 "getopt.m"
                    else
#line 1012 "getopt.m"
                      if (((((MR_tag((MR_Word) mercury__getopt__OptionData_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_16, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1017 "getopt.m"
                        mercury__getopt__V_50_50 = (MR_Integer) 1;
#line 1012 "getopt.m"
                      else
#line 1012 "getopt.m"
                        if (((((MR_tag((MR_Word) mercury__getopt__OptionData_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_16, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1015 "getopt.m"
                          mercury__getopt__V_50_50 = (MR_Integer) 1;
#line 1012 "getopt.m"
                        else
#line 1012 "getopt.m"
                          if (((((MR_tag((MR_Word) mercury__getopt__OptionData_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_16, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1016 "getopt.m"
                            mercury__getopt__V_50_50 = (MR_Integer) 1;
#line 1012 "getopt.m"
                          else
#line 1014 "getopt.m"
                            mercury__getopt__V_50_50 = (MR_Integer) 1;
#line 664 "getopt.m"
        mercury__getopt__succeeded = ((MR_Integer) 0 == mercury__getopt__V_50_50);
#line 664 "getopt.m"
        if (mercury__getopt__succeeded)
#line 664 "getopt.m"
          {
#line 665 "getopt.m"
            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__MaybeOptionArg_28)) == (MR_mktag((MR_Integer) 1)));
#line 665 "getopt.m"
            if (mercury__getopt__succeeded)
#line 665 "getopt.m"
              mercury__getopt__ArgVal_33 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__MaybeOptionArg_28, (MR_Integer) 0)));
#line 664 "getopt.m"
          }
#line 672 "getopt.m"
        if (mercury__getopt__succeeded)
#line 667 "getopt.m"
          {
#line 667 "getopt.m"
            MR_Word mercury__getopt__V_41_41;
#line 667 "getopt.m"
            MR_Word mercury__getopt__Error_45;

#line 667 "getopt.m"
            *mercury__getopt__Args_19 = mercury__getopt__Args0_18;
#line 668 "getopt.m"
            *mercury__getopt__OptionArgs_22 = mercury__getopt__OptionArgs1_31;
#line 670 "getopt.m"
            {
#line 670 "getopt.m"
              mercury__getopt__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 670 "getopt.m"
              MR_hl_field(MR_mktag(1), mercury__getopt__V_41_41, 0) = ((MR_Box) (mercury__getopt__ArgVal_33));
#line 670 "getopt.m"
            }
#line 669 "getopt.m"
            {
#line 669 "getopt.m"
              mercury__getopt__Error_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 669 "getopt.m"
              MR_hl_field(MR_mktag(1), mercury__getopt__Error_45, 0) = mercury__getopt__Flag_15;
#line 669 "getopt.m"
              MR_hl_field(MR_mktag(1), mercury__getopt__Error_45, 1) = ((MR_Box) (mercury__getopt__Option_14));
#line 669 "getopt.m"
              MR_hl_field(MR_mktag(1), mercury__getopt__Error_45, 2) = ((MR_Box) (mercury__getopt__V_41_41));
#line 669 "getopt.m"
            }
#line 671 "getopt.m"
            {
#line 671 "getopt.m"
              MR_Word base;
#line 671 "getopt.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 671 "getopt.m"
              *mercury__getopt__Result_24 = base;
#line 671 "getopt.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_45));
#line 671 "getopt.m"
            }
#line 667 "getopt.m"
            *mercury__getopt__STATE_VARIABLE_OptionsSet_38 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_37;
#line 667 "getopt.m"
          }
#line 672 "getopt.m"
        else
#line 674 "getopt.m"
          {
#line 674 "getopt.m"
            MR_Word mercury__getopt__Result1_34;
#line 674 "getopt.m"
            MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_42_42;

#line 673 "getopt.m"
            {
#line 673 "getopt.m"
              mercury__getopt__process_option_9_p_0(mercury__getopt__TypeInfo_for_OptionType_48, mercury__getopt__OptionData_16, mercury__getopt__Option_14, mercury__getopt__Flag_15, mercury__getopt__MaybeOptionArg_28, mercury__getopt__OptionOps_20, mercury__getopt__OptionTable0_23, &mercury__getopt__Result1_34, mercury__getopt__STATE_VARIABLE_OptionsSet_0_37, &mercury__getopt__STATE_VARIABLE_OptionsSet_42_42);
            }
#line 679 "getopt.m"
            if (((MR_tag((MR_Word) mercury__getopt__Result1_34)) == (MR_mktag((MR_Integer) 1))))
#line 680 "getopt.m"
              {
#line 681 "getopt.m"
                *mercury__getopt__Result_24 = mercury__getopt__Result1_34;
#line 682 "getopt.m"
                *mercury__getopt__OptionArgs_22 = mercury__getopt__OptionArgs1_31;
#line 683 "getopt.m"
                *mercury__getopt__Args_19 = mercury__getopt__Args1_29;
#line 680 "getopt.m"
                *mercury__getopt__STATE_VARIABLE_OptionsSet_38 = mercury__getopt__STATE_VARIABLE_OptionsSet_42_42;
#line 680 "getopt.m"
              }
#line 679 "getopt.m"
            else
#line 676 "getopt.m"
              {
#line 676 "getopt.m"
                MR_Word mercury__getopt__OptionTable1_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result1_34, (MR_Integer) 0)));

#line 677 "getopt.m"
                {
#line 677 "getopt.m"
                  mercury__getopt__process_arguments_9_p_0(mercury__getopt__TypeInfo_for_OptionType_48, mercury__getopt__Args1_29, mercury__getopt__Args_19, mercury__getopt__OptionOps_20, mercury__getopt__OptionArgs1_31, mercury__getopt__OptionArgs_22, mercury__getopt__OptionTable1_35, mercury__getopt__Result_24, mercury__getopt__STATE_VARIABLE_OptionsSet_42_42, mercury__getopt__STATE_VARIABLE_OptionsSet_38);
#line 677 "getopt.m"
                  return;
                }
#line 676 "getopt.m"
              }
#line 674 "getopt.m"
          }
#line 672 "getopt.m"
      }
#line 661 "getopt.m"
    else
#line 656 "getopt.m"
      {
#line 656 "getopt.m"
        MR_Word mercury__getopt__Error_32;
#line 656 "getopt.m"
        MR_Word mercury__getopt__V_44_44;

#line 657 "getopt.m"
        *mercury__getopt__Args_19 = mercury__getopt__Args0_18;
#line 658 "getopt.m"
        *mercury__getopt__OptionArgs_22 = mercury__getopt__OptionArgs1_31;
#line 659 "getopt.m"
        mercury__getopt__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 659 "getopt.m"
        {
#line 659 "getopt.m"
          mercury__getopt__Error_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 659 "getopt.m"
          MR_hl_field(MR_mktag(1), mercury__getopt__Error_32, 0) = mercury__getopt__Flag_15;
#line 659 "getopt.m"
          MR_hl_field(MR_mktag(1), mercury__getopt__Error_32, 1) = ((MR_Box) (mercury__getopt__Option_14));
#line 659 "getopt.m"
          MR_hl_field(MR_mktag(1), mercury__getopt__Error_32, 2) = ((MR_Box) (mercury__getopt__V_44_44));
#line 659 "getopt.m"
        }
#line 660 "getopt.m"
        {
#line 660 "getopt.m"
          MR_Word base;
#line 660 "getopt.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 660 "getopt.m"
          *mercury__getopt__Result_24 = base;
#line 660 "getopt.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_32));
#line 660 "getopt.m"
        }
#line 656 "getopt.m"
        *mercury__getopt__STATE_VARIABLE_OptionsSet_38 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_37;
#line 656 "getopt.m"
      }
#line 631 "getopt.m"
  }
#line 622 "getopt.m"
}

#line 497 "getopt.m"
void MR_CALL 
mercury__getopt__process_arguments_9_p_0(
#line 497 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_138,
#line 497 "getopt.m"
  MR_Word mercury__getopt__HeadVar__1_1,
#line 497 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__2_2,
#line 497 "getopt.m"
  MR_Word mercury__getopt__OptionOps_3,
#line 497 "getopt.m"
  MR_Word mercury__getopt__HeadVar__4_4,
#line 497 "getopt.m"
  MR_Word * mercury__getopt__OptionArgs_5,
#line 497 "getopt.m"
  MR_Word mercury__getopt__HeadVar__6_6,
#line 497 "getopt.m"
  MR_Word * mercury__getopt__HeadVar__7_7,
#line 497 "getopt.m"
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_8,
#line 497 "getopt.m"
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_9)
#line 497 "getopt.m"
{
#line 503 "getopt.m"
  while (MR_TRUE)
#line 503 "getopt.m"
    {
#line 503 "getopt.m"
      /* tailcall optimized into a loop */
#line 503 "getopt.m"
      {
#line 503 "getopt.m"
        MR_bool mercury__getopt__succeeded;

#line 503 "getopt.m"
        if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 503 "getopt.m"
          {
#line 503 "getopt.m"
            *mercury__getopt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 503 "getopt.m"
            *mercury__getopt__OptionArgs_5 = mercury__getopt__HeadVar__4_4;
#line 504 "getopt.m"
            {
#line 504 "getopt.m"
              MR_Word base;
#line 504 "getopt.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 504 "getopt.m"
              *mercury__getopt__HeadVar__7_7 = base;
#line 504 "getopt.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__HeadVar__6_6));
#line 504 "getopt.m"
            }
#line 504 "getopt.m"
            *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_8;
#line 503 "getopt.m"
          }
#line 503 "getopt.m"
        else
#line 506 "getopt.m"
          {
#line 506 "getopt.m"
            MR_String mercury__getopt__Option_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
#line 506 "getopt.m"
            MR_Word mercury__getopt__Args0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));

#line 507 "getopt.m"
            mercury__getopt__succeeded = (strcmp(mercury__getopt__Option_16, (MR_String) "--") == 0);
#line 511 "getopt.m"
            if (mercury__getopt__succeeded)
#line 508 "getopt.m"
              {
#line 508 "getopt.m"
                *mercury__getopt__OptionArgs_5 = mercury__getopt__HeadVar__4_4;
#line 509 "getopt.m"
                *mercury__getopt__HeadVar__2_2 = mercury__getopt__Args0_17;
#line 510 "getopt.m"
                {
#line 510 "getopt.m"
                  MR_Word base;
#line 510 "getopt.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 510 "getopt.m"
                  *mercury__getopt__HeadVar__7_7 = base;
#line 510 "getopt.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__HeadVar__6_6));
#line 510 "getopt.m"
                }
#line 508 "getopt.m"
                *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_8;
#line 508 "getopt.m"
              }
#line 511 "getopt.m"
            else
#line 534 "getopt.m"
              {
#line 534 "getopt.m"
                MR_String mercury__getopt__LongOption_25;

#line 511 "getopt.m"
                {
#line 511 "getopt.m"
                  mercury__getopt__succeeded = mercury__string__append_3_p_1((MR_String) "--no-", &mercury__getopt__LongOption_25, mercury__getopt__Option_16);
                }
#line 534 "getopt.m"
                if (mercury__getopt__succeeded)
#line 512 "getopt.m"
                  {
#line 512 "getopt.m"
                    MR_Word mercury__getopt__LongOptionPred_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 1)));
#line 512 "getopt.m"
                    MR_Word mercury__getopt__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 0)));
#line 512 "getopt.m"
                    MR_Word mercury__getopt__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 2)));
#line 528 "getopt.m"
                    MR_Box mercury__getopt__Flag_27;
#line 513 "getopt.m"
                    MR_bool MR_CALL (* mercury__getopt__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt__LongOptionPred_26, (MR_Integer) 1)));

#line 513 "getopt.m"
                    {
#line 513 "getopt.m"
                      mercury__getopt__succeeded = mercury__getopt__func_0(((MR_Box) mercury__getopt__LongOptionPred_26), ((MR_Box) (mercury__getopt__LongOption_25)), &mercury__getopt__Flag_27);
                    }
#line 528 "getopt.m"
                    if (mercury__getopt__succeeded)
#line 514 "getopt.m"
                      {
#line 514 "getopt.m"
                        MR_String mercury__getopt__OptName_28;
#line 514 "getopt.m"
                        MR_Word mercury__getopt__Result1_29;
#line 514 "getopt.m"
                        MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_52_52;

#line 514 "getopt.m"
                        {
#line 514 "getopt.m"
                          mercury__getopt__OptName_28 = mercury__string__f_43_43_2_f_0((MR_String) "--", mercury__getopt__LongOption_25);
                        }
#line 515 "getopt.m"
                        {
#line 515 "getopt.m"
                          mercury__getopt__process_negated_option_7_p_0(mercury__getopt__TypeInfo_for_OptionType_138, mercury__getopt__OptName_28, mercury__getopt__Flag_27, mercury__getopt__OptionOps_3, mercury__getopt__HeadVar__6_6, &mercury__getopt__Result1_29, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt__STATE_VARIABLE_OptionsSet_52_52);
                        }
#line 522 "getopt.m"
                        if (((MR_tag((MR_Word) mercury__getopt__Result1_29)) == (MR_mktag((MR_Integer) 1))))
#line 523 "getopt.m"
                          {
#line 524 "getopt.m"
                            *mercury__getopt__HeadVar__7_7 = mercury__getopt__Result1_29;
#line 525 "getopt.m"
                            *mercury__getopt__OptionArgs_5 = mercury__getopt__HeadVar__4_4;
#line 526 "getopt.m"
                            *mercury__getopt__HeadVar__2_2 = mercury__getopt__Args0_17;
#line 523 "getopt.m"
                            *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_52_52;
#line 523 "getopt.m"
                          }
#line 522 "getopt.m"
                        else
#line 518 "getopt.m"
                          {
#line 518 "getopt.m"
                            MR_Word mercury__getopt__OptionTable1_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result1_29, (MR_Integer) 0)));
#line 518 "getopt.m"
                            MR_Word mercury__getopt__V_53_53;

#line 520 "getopt.m"
                            {
#line 520 "getopt.m"
                              mercury__getopt__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "getopt.m"
                              MR_hl_field(MR_mktag(1), mercury__getopt__V_53_53, 0) = ((MR_Box) (mercury__getopt__Option_16));
#line 520 "getopt.m"
                              MR_hl_field(MR_mktag(1), mercury__getopt__V_53_53, 1) = ((MR_Box) (mercury__getopt__HeadVar__4_4));
#line 520 "getopt.m"
                            }
#line 519 "getopt.m"
                            /* direct tailcall eliminated */
#line 519 "getopt.m"
                            {
#line 519 "getopt.m"
                              MR_Word mercury__getopt__HeadVar__1__tmp_copy_1 = mercury__getopt__Args0_17;
#line 519 "getopt.m"
                              MR_Word mercury__getopt__HeadVar__4__tmp_copy_4 = mercury__getopt__V_53_53;
#line 519 "getopt.m"
                              MR_Word mercury__getopt__HeadVar__6__tmp_copy_6 = mercury__getopt__OptionTable1_30;
#line 519 "getopt.m"
                              MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0__tmp_copy_8 = mercury__getopt__STATE_VARIABLE_OptionsSet_52_52;

#line 519 "getopt.m"
                              mercury__getopt__STATE_VARIABLE_OptionsSet_0_8 = mercury__getopt__STATE_VARIABLE_OptionsSet_0__tmp_copy_8;
#line 519 "getopt.m"
                              mercury__getopt__HeadVar__6_6 = mercury__getopt__HeadVar__6__tmp_copy_6;
#line 519 "getopt.m"
                              mercury__getopt__HeadVar__4_4 = mercury__getopt__HeadVar__4__tmp_copy_4;
#line 519 "getopt.m"
                              mercury__getopt__HeadVar__1_1 = mercury__getopt__HeadVar__1__tmp_copy_1;
#line 519 "getopt.m"
                            }
#line 519 "getopt.m"
                            continue;
#line 518 "getopt.m"
                          }
#line 514 "getopt.m"
                      }
#line 528 "getopt.m"
                    else
#line 529 "getopt.m"
                      {
#line 529 "getopt.m"
                        MR_Word mercury__getopt__Error_32;

#line 529 "getopt.m"
                        {
#line 529 "getopt.m"
                          mercury__getopt__Error_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 529 "getopt.m"
                          MR_hl_field(MR_mktag(0), mercury__getopt__Error_32, 0) = ((MR_Box) (mercury__getopt__Option_16));
#line 529 "getopt.m"
                        }
#line 530 "getopt.m"
                        {
#line 530 "getopt.m"
                          MR_Word base;
#line 530 "getopt.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 530 "getopt.m"
                          *mercury__getopt__HeadVar__7_7 = base;
#line 530 "getopt.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_32));
#line 530 "getopt.m"
                        }
#line 531 "getopt.m"
                        *mercury__getopt__OptionArgs_5 = mercury__getopt__HeadVar__4_4;
#line 532 "getopt.m"
                        *mercury__getopt__HeadVar__2_2 = mercury__getopt__Args0_17;
#line 529 "getopt.m"
                        *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_8;
#line 529 "getopt.m"
                      }
#line 512 "getopt.m"
                  }
#line 534 "getopt.m"
                else
#line 567 "getopt.m"
                  {
#line 567 "getopt.m"
                    MR_String mercury__getopt__LongOptionStr_33;

#line 534 "getopt.m"
                    {
#line 534 "getopt.m"
                      mercury__getopt__succeeded = mercury__string__append_3_p_1((MR_String) "--", &mercury__getopt__LongOptionStr_33, mercury__getopt__Option_16);
                    }
#line 567 "getopt.m"
                    if (mercury__getopt__succeeded)
#line 535 "getopt.m"
                      {
#line 535 "getopt.m"
                        MR_Word mercury__getopt__MaybeArg_37;
#line 535 "getopt.m"
                        MR_String mercury__getopt__OptionName_38;
#line 535 "getopt.m"
                        MR_String mercury__getopt__LongOption_85;
#line 535 "getopt.m"
                        MR_Word mercury__getopt__LongOptionPred_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 1)));
#line 535 "getopt.m"
                        MR_Word mercury__getopt__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 0)));
#line 535 "getopt.m"
                        MR_Word mercury__getopt__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 2)));
#line 544 "getopt.m"
                        MR_Integer mercury__getopt__OptionLen_34;
#line 561 "getopt.m"
                        MR_Box mercury__getopt__Flag_83;
#line 549 "getopt.m"
                        MR_bool MR_CALL (* mercury__getopt__func_1)(MR_Box, MR_Box, MR_Box *);

#line 536 "getopt.m"
                        {
#line 536 "getopt.m"
                          mercury__getopt__succeeded = mercury__string__sub_string_search_3_p_0(mercury__getopt__LongOptionStr_33, (MR_String) "=", &mercury__getopt__OptionLen_34);
                        }
#line 544 "getopt.m"
                        if (mercury__getopt__succeeded)
#line 538 "getopt.m"
                          {
#line 538 "getopt.m"
                            MR_String mercury__getopt__EqualOptionArg_35;
#line 541 "getopt.m"
                            MR_String mercury__getopt__OptionArg_36;

#line 537 "getopt.m"
                            {
#line 537 "getopt.m"
                              mercury__string__split_4_p_0(mercury__getopt__LongOptionStr_33, mercury__getopt__OptionLen_34, &mercury__getopt__LongOption_85, &mercury__getopt__EqualOptionArg_35);
                            }
#line 539 "getopt.m"
                            {
#line 539 "getopt.m"
                              mercury__getopt__succeeded = mercury__string__first_char_3_p_2(mercury__getopt__EqualOptionArg_35, (MR_Char) 61, &mercury__getopt__OptionArg_36);
                            }
#line 541 "getopt.m"
                            if (mercury__getopt__succeeded)
#line 540 "getopt.m"
                              {
#line 540 "getopt.m"
                                mercury__getopt__MaybeArg_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 540 "getopt.m"
                                MR_hl_field(MR_mktag(1), mercury__getopt__MaybeArg_37, 0) = ((MR_Box) (mercury__getopt__OptionArg_36));
#line 540 "getopt.m"
                              }
#line 541 "getopt.m"
                            else
#line 542 "getopt.m"
                              {
#line 542 "getopt.m"
                                {
#line 542 "getopt.m"
                                  mercury__require__error_1_p_0((MR_String) "bad split of --longoption=arg");
#line 542 "getopt.m"
                                  return;
                                }
#line 542 "getopt.m"
                              }
#line 538 "getopt.m"
                          }
#line 544 "getopt.m"
                        else
#line 545 "getopt.m"
                          {
#line 545 "getopt.m"
                            mercury__getopt__LongOption_85 = mercury__getopt__LongOptionStr_33;
#line 546 "getopt.m"
                            mercury__getopt__MaybeArg_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 545 "getopt.m"
                          }
#line 548 "getopt.m"
                        {
#line 548 "getopt.m"
                          mercury__getopt__OptionName_38 = mercury__string__f_43_43_2_f_0((MR_String) "--", mercury__getopt__LongOption_85);
                        }
#line 549 "getopt.m"
                        mercury__getopt__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt__LongOptionPred_86, (MR_Integer) 1)));
#line 549 "getopt.m"
                        {
#line 549 "getopt.m"
                          mercury__getopt__succeeded = mercury__getopt__func_1(((MR_Box) mercury__getopt__LongOptionPred_86), ((MR_Box) (mercury__getopt__LongOption_85)), &mercury__getopt__Flag_83);
                        }
#line 561 "getopt.m"
                        if (mercury__getopt__succeeded)
#line 555 "getopt.m"
                          {
#line 555 "getopt.m"
                            MR_Word mercury__getopt__OptionData_39;
#line 550 "getopt.m"
                            MR_Word mercury__getopt__TypeCtorInfo_139_139 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 550 "getopt.m"
                            MR_Box mercury__getopt__conv2_OptionData_39;

#line 550 "getopt.m"
                            {
#line 550 "getopt.m"
                              mercury__getopt__succeeded = mercury__map__search_3_p_0(mercury__getopt__TypeInfo_for_OptionType_138, mercury__getopt__TypeCtorInfo_139_139, mercury__getopt__HeadVar__6_6, mercury__getopt__Flag_83, &mercury__getopt__conv2_OptionData_39);
                            }
#line 550 "getopt.m"
                            if (mercury__getopt__succeeded)
#line 550 "getopt.m"
                              {
#line 550 "getopt.m"
                                mercury__getopt__OptionData_39 = ((MR_Word) mercury__getopt__conv2_OptionData_39);
#line 550 "getopt.m"
                                mercury__getopt__succeeded = MR_TRUE;
#line 550 "getopt.m"
                              }
#line 555 "getopt.m"
                            if (mercury__getopt__succeeded)
#line 551 "getopt.m"
                              {
#line 551 "getopt.m"
                                MR_Word mercury__getopt__V_60_60;

#line 553 "getopt.m"
                                {
#line 553 "getopt.m"
                                  mercury__getopt__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 553 "getopt.m"
                                  MR_hl_field(MR_mktag(1), mercury__getopt__V_60_60, 0) = ((MR_Box) (mercury__getopt__Option_16));
#line 553 "getopt.m"
                                  MR_hl_field(MR_mktag(1), mercury__getopt__V_60_60, 1) = ((MR_Box) (mercury__getopt__HeadVar__4_4));
#line 553 "getopt.m"
                                }
#line 551 "getopt.m"
                                {
#line 551 "getopt.m"
                                  mercury__getopt__handle_long_option_13_p_0(mercury__getopt__TypeInfo_for_OptionType_138, mercury__getopt__OptionName_38, mercury__getopt__Flag_83, mercury__getopt__OptionData_39, mercury__getopt__MaybeArg_37, mercury__getopt__Args0_17, mercury__getopt__HeadVar__2_2, mercury__getopt__OptionOps_3, mercury__getopt__V_60_60, mercury__getopt__OptionArgs_5, mercury__getopt__HeadVar__6_6, mercury__getopt__HeadVar__7_7, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
#line 551 "getopt.m"
                                  return;
                                }
#line 551 "getopt.m"
                              }
#line 555 "getopt.m"
                            else
#line 556 "getopt.m"
                              {
#line 556 "getopt.m"
                                MR_Word mercury__getopt__V_62_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 556 "getopt.m"
                                MR_Word mercury__getopt__Error_80;

#line 556 "getopt.m"
                                {
#line 556 "getopt.m"
                                  mercury__getopt__Error_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 556 "getopt.m"
                                  MR_hl_field(MR_mktag(1), mercury__getopt__Error_80, 0) = mercury__getopt__Flag_83;
#line 556 "getopt.m"
                                  MR_hl_field(MR_mktag(1), mercury__getopt__Error_80, 1) = ((MR_Box) (mercury__getopt__Option_16));
#line 556 "getopt.m"
                                  MR_hl_field(MR_mktag(1), mercury__getopt__Error_80, 2) = ((MR_Box) (mercury__getopt__V_62_62));
#line 556 "getopt.m"
                                }
#line 557 "getopt.m"
                                {
#line 557 "getopt.m"
                                  MR_Word base;
#line 557 "getopt.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 557 "getopt.m"
                                  *mercury__getopt__HeadVar__7_7 = base;
#line 557 "getopt.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_80));
#line 557 "getopt.m"
                                }
#line 558 "getopt.m"
                                *mercury__getopt__OptionArgs_5 = mercury__getopt__HeadVar__4_4;
#line 559 "getopt.m"
                                *mercury__getopt__HeadVar__2_2 = mercury__getopt__Args0_17;
#line 556 "getopt.m"
                                *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_8;
#line 556 "getopt.m"
                              }
#line 555 "getopt.m"
                          }
#line 561 "getopt.m"
                        else
#line 562 "getopt.m"
                          {
#line 562 "getopt.m"
                            MR_Word mercury__getopt__Error_82;

#line 562 "getopt.m"
                            {
#line 562 "getopt.m"
                              mercury__getopt__Error_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 562 "getopt.m"
                              MR_hl_field(MR_mktag(0), mercury__getopt__Error_82, 0) = ((MR_Box) (mercury__getopt__OptionName_38));
#line 562 "getopt.m"
                            }
#line 563 "getopt.m"
                            {
#line 563 "getopt.m"
                              MR_Word base;
#line 563 "getopt.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 563 "getopt.m"
                              *mercury__getopt__HeadVar__7_7 = base;
#line 563 "getopt.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_82));
#line 563 "getopt.m"
                            }
#line 564 "getopt.m"
                            *mercury__getopt__OptionArgs_5 = mercury__getopt__HeadVar__4_4;
#line 565 "getopt.m"
                            *mercury__getopt__HeadVar__2_2 = mercury__getopt__Args0_17;
#line 562 "getopt.m"
                            *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_8;
#line 562 "getopt.m"
                          }
#line 535 "getopt.m"
                      }
#line 567 "getopt.m"
                    else
#line 613 "getopt.m"
                      {
#line 613 "getopt.m"
                        MR_String mercury__getopt__ShortOptions_40;

#line 567 "getopt.m"
                        {
#line 567 "getopt.m"
                          mercury__getopt__succeeded = mercury__string__first_char_3_p_2(mercury__getopt__Option_16, (MR_Char) 45, &mercury__getopt__ShortOptions_40);
                        }
#line 567 "getopt.m"
                        if (mercury__getopt__succeeded)
#line 567 "getopt.m"
                          {
#line 567 "getopt.m"
                            mercury__getopt__succeeded = (strcmp(mercury__getopt__ShortOptions_40, (MR_String) "") == 0);
#line 567 "getopt.m"
                            mercury__getopt__succeeded = !(mercury__getopt__succeeded);
#line 567 "getopt.m"
                          }
#line 613 "getopt.m"
                        if (mercury__getopt__succeeded)
#line 568 "getopt.m"
                          {
#line 568 "getopt.m"
                            MR_Word mercury__getopt__ShortOptionsList_41;
#line 593 "getopt.m"
                            MR_Char mercury__getopt__SingleShortOpt_42;
#line 570 "getopt.m"
                            MR_Word mercury__getopt__V_64_64;
#line 570 "getopt.m"
                            MR_Char mercury__getopt__V_65_65;
#line 570 "getopt.m"
                            MR_Word mercury__getopt__V_66_66;

#line 568 "getopt.m"
                            {
#line 568 "getopt.m"
                              mercury__string__to_char_list_2_p_0(mercury__getopt__ShortOptions_40, &mercury__getopt__ShortOptionsList_41);
                            }
#line 570 "getopt.m"
                            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__ShortOptionsList_41)) == (MR_mktag((MR_Integer) 1)));
#line 570 "getopt.m"
                            if (mercury__getopt__succeeded)
#line 570 "getopt.m"
                              {
#line 570 "getopt.m"
                                mercury__getopt__SingleShortOpt_42 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__ShortOptionsList_41, (MR_Integer) 0)));
#line 570 "getopt.m"
                                mercury__getopt__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__ShortOptionsList_41, (MR_Integer) 1)));
#line 570 "getopt.m"
                                mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__V_64_64)) == (MR_mktag((MR_Integer) 1)));
#line 570 "getopt.m"
                                if (mercury__getopt__succeeded)
#line 570 "getopt.m"
                                  {
#line 570 "getopt.m"
                                    mercury__getopt__V_65_65 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__V_64_64, (MR_Integer) 0)));
#line 570 "getopt.m"
                                    mercury__getopt__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__V_64_64, (MR_Integer) 1)));
#line 570 "getopt.m"
                                    mercury__getopt__succeeded = (mercury__getopt__V_65_65 == (MR_Char) 45);
#line 570 "getopt.m"
                                    if (mercury__getopt__succeeded)
#line 570 "getopt.m"
                                      mercury__getopt__succeeded = (mercury__getopt__V_66_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 570 "getopt.m"
                                  }
#line 570 "getopt.m"
                              }
#line 593 "getopt.m"
                            if (mercury__getopt__succeeded)
#line 571 "getopt.m"
                              {
#line 571 "getopt.m"
                                MR_Word mercury__getopt__ShortOptionPred_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 0)));
#line 571 "getopt.m"
                                MR_Word mercury__getopt__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 1)));
#line 571 "getopt.m"
                                MR_Word mercury__getopt__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 2)));
#line 587 "getopt.m"
                                MR_Box mercury__getopt__Flag_95;
#line 572 "getopt.m"
                                MR_bool MR_CALL (* mercury__getopt__func_3)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt__ShortOptionPred_43, (MR_Integer) 1)));

#line 572 "getopt.m"
                                {
#line 572 "getopt.m"
                                  mercury__getopt__succeeded = mercury__getopt__func_3(((MR_Box) mercury__getopt__ShortOptionPred_43), ((MR_Box) (MR_Word) (mercury__getopt__SingleShortOpt_42)), &mercury__getopt__Flag_95);
                                }
#line 587 "getopt.m"
                                if (mercury__getopt__succeeded)
#line 573 "getopt.m"
                                  {
#line 573 "getopt.m"
                                    MR_Word mercury__getopt__V_67_67;
#line 573 "getopt.m"
                                    MR_Word mercury__getopt__V_69_69;
#line 573 "getopt.m"
                                    MR_Word mercury__getopt__V_70_70 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 573 "getopt.m"
                                    MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_71_71;
#line 573 "getopt.m"
                                    MR_String mercury__getopt__OptName_91;
#line 573 "getopt.m"
                                    MR_Word mercury__getopt__Result1_92;

#line 573 "getopt.m"
                                    {
#line 573 "getopt.m"
                                      mercury__getopt__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 573 "getopt.m"
                                      MR_hl_field(MR_mktag(1), mercury__getopt__V_69_69, 0) = ((MR_Box) (MR_Word) (mercury__getopt__SingleShortOpt_42));
#line 573 "getopt.m"
                                      MR_hl_field(MR_mktag(1), mercury__getopt__V_69_69, 1) = ((MR_Box) (mercury__getopt__V_70_70));
#line 573 "getopt.m"
                                    }
#line 573 "getopt.m"
                                    {
#line 573 "getopt.m"
                                      mercury__getopt__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 573 "getopt.m"
                                      MR_hl_field(MR_mktag(1), mercury__getopt__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
#line 573 "getopt.m"
                                      MR_hl_field(MR_mktag(1), mercury__getopt__V_67_67, 1) = ((MR_Box) (mercury__getopt__V_69_69));
#line 573 "getopt.m"
                                    }
#line 573 "getopt.m"
                                    {
#line 573 "getopt.m"
                                      mercury__string__from_char_list_2_p_0(mercury__getopt__V_67_67, &mercury__getopt__OptName_91);
                                    }
#line 574 "getopt.m"
                                    {
#line 574 "getopt.m"
                                      mercury__getopt__process_negated_option_7_p_0(mercury__getopt__TypeInfo_for_OptionType_138, mercury__getopt__OptName_91, mercury__getopt__Flag_95, mercury__getopt__OptionOps_3, mercury__getopt__HeadVar__6_6, &mercury__getopt__Result1_92, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt__STATE_VARIABLE_OptionsSet_71_71);
                                    }
#line 581 "getopt.m"
                                    if (((MR_tag((MR_Word) mercury__getopt__Result1_92)) == (MR_mktag((MR_Integer) 1))))
#line 582 "getopt.m"
                                      {
#line 583 "getopt.m"
                                        *mercury__getopt__HeadVar__7_7 = mercury__getopt__Result1_92;
#line 584 "getopt.m"
                                        *mercury__getopt__OptionArgs_5 = mercury__getopt__HeadVar__4_4;
#line 585 "getopt.m"
                                        *mercury__getopt__HeadVar__2_2 = mercury__getopt__Args0_17;
#line 582 "getopt.m"
                                        *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_71_71;
#line 582 "getopt.m"
                                      }
#line 581 "getopt.m"
                                    else
#line 577 "getopt.m"
                                      {
#line 577 "getopt.m"
                                        MR_Word mercury__getopt__V_72_72;
#line 577 "getopt.m"
                                        MR_Word mercury__getopt__OptionTable1_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result1_92, (MR_Integer) 0)));

#line 579 "getopt.m"
                                        {
#line 579 "getopt.m"
                                          mercury__getopt__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 579 "getopt.m"
                                          MR_hl_field(MR_mktag(1), mercury__getopt__V_72_72, 0) = ((MR_Box) (mercury__getopt__Option_16));
#line 579 "getopt.m"
                                          MR_hl_field(MR_mktag(1), mercury__getopt__V_72_72, 1) = ((MR_Box) (mercury__getopt__HeadVar__4_4));
#line 579 "getopt.m"
                                        }
#line 578 "getopt.m"
                                        /* direct tailcall eliminated */
#line 578 "getopt.m"
                                        {
#line 578 "getopt.m"
                                          MR_Word mercury__getopt__HeadVar__1__tmp_copy_1 = mercury__getopt__Args0_17;
#line 578 "getopt.m"
                                          MR_Word mercury__getopt__HeadVar__4__tmp_copy_4 = mercury__getopt__V_72_72;
#line 578 "getopt.m"
                                          MR_Word mercury__getopt__HeadVar__6__tmp_copy_6 = mercury__getopt__OptionTable1_89;
#line 578 "getopt.m"
                                          MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0__tmp_copy_8 = mercury__getopt__STATE_VARIABLE_OptionsSet_71_71;

#line 578 "getopt.m"
                                          mercury__getopt__STATE_VARIABLE_OptionsSet_0_8 = mercury__getopt__STATE_VARIABLE_OptionsSet_0__tmp_copy_8;
#line 578 "getopt.m"
                                          mercury__getopt__HeadVar__6_6 = mercury__getopt__HeadVar__6__tmp_copy_6;
#line 578 "getopt.m"
                                          mercury__getopt__HeadVar__4_4 = mercury__getopt__HeadVar__4__tmp_copy_4;
#line 578 "getopt.m"
                                          mercury__getopt__HeadVar__1_1 = mercury__getopt__HeadVar__1__tmp_copy_1;
#line 578 "getopt.m"
                                        }
#line 578 "getopt.m"
                                        continue;
#line 577 "getopt.m"
                                      }
#line 573 "getopt.m"
                                  }
#line 587 "getopt.m"
                                else
#line 588 "getopt.m"
                                  {
#line 588 "getopt.m"
                                    MR_String mercury__getopt__V_74_74;
#line 588 "getopt.m"
                                    MR_Word mercury__getopt__Error_94;

#line 588 "getopt.m"
                                    {
#line 588 "getopt.m"
                                      mercury__getopt__V_74_74 = mercury__string__f_43_43_2_f_0((MR_String) "-", mercury__getopt__ShortOptions_40);
                                    }
#line 588 "getopt.m"
                                    {
#line 588 "getopt.m"
                                      mercury__getopt__Error_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 588 "getopt.m"
                                      MR_hl_field(MR_mktag(0), mercury__getopt__Error_94, 0) = ((MR_Box) (mercury__getopt__V_74_74));
#line 588 "getopt.m"
                                    }
#line 589 "getopt.m"
                                    {
#line 589 "getopt.m"
                                      MR_Word base;
#line 589 "getopt.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 589 "getopt.m"
                                      *mercury__getopt__HeadVar__7_7 = base;
#line 589 "getopt.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_94));
#line 589 "getopt.m"
                                    }
#line 590 "getopt.m"
                                    *mercury__getopt__OptionArgs_5 = mercury__getopt__HeadVar__4_4;
#line 591 "getopt.m"
                                    *mercury__getopt__HeadVar__2_2 = mercury__getopt__Args0_17;
#line 588 "getopt.m"
                                    *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_8;
#line 588 "getopt.m"
                                  }
#line 571 "getopt.m"
                              }
#line 593 "getopt.m"
                            else
#line 601 "getopt.m"
                              {
#line 601 "getopt.m"
                                MR_Word mercury__getopt__Args1_45;
#line 601 "getopt.m"
                                MR_Word mercury__getopt__OptionArgs1_46;
#line 601 "getopt.m"
                                MR_Word mercury__getopt__V_76_76;
#line 601 "getopt.m"
                                MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_77_77;
#line 601 "getopt.m"
                                MR_Word mercury__getopt__Result1_107;

#line 600 "getopt.m"
                                {
#line 600 "getopt.m"
                                  mercury__getopt__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 600 "getopt.m"
                                  MR_hl_field(MR_mktag(1), mercury__getopt__V_76_76, 0) = ((MR_Box) (mercury__getopt__Option_16));
#line 600 "getopt.m"
                                  MR_hl_field(MR_mktag(1), mercury__getopt__V_76_76, 1) = ((MR_Box) (mercury__getopt__HeadVar__4_4));
#line 600 "getopt.m"
                                }
#line 599 "getopt.m"
                                {
#line 599 "getopt.m"
                                  mercury__getopt__handle_short_options_10_p_0(mercury__getopt__TypeInfo_for_OptionType_138, mercury__getopt__ShortOptionsList_41, mercury__getopt__OptionOps_3, mercury__getopt__Args0_17, &mercury__getopt__Args1_45, mercury__getopt__V_76_76, &mercury__getopt__OptionArgs1_46, mercury__getopt__HeadVar__6_6, &mercury__getopt__Result1_107, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt__STATE_VARIABLE_OptionsSet_77_77);
                                }
#line 606 "getopt.m"
                                if (((MR_tag((MR_Word) mercury__getopt__Result1_107)) == (MR_mktag((MR_Integer) 1))))
#line 607 "getopt.m"
                                  {
#line 608 "getopt.m"
                                    *mercury__getopt__HeadVar__7_7 = mercury__getopt__Result1_107;
#line 609 "getopt.m"
                                    *mercury__getopt__OptionArgs_5 = mercury__getopt__OptionArgs1_46;
#line 610 "getopt.m"
                                    *mercury__getopt__HeadVar__2_2 = mercury__getopt__Args0_17;
#line 607 "getopt.m"
                                    *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_77_77;
#line 607 "getopt.m"
                                  }
#line 606 "getopt.m"
                                else
#line 603 "getopt.m"
                                  {
#line 603 "getopt.m"
                                    MR_Word mercury__getopt__OptionTable1_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result1_107, (MR_Integer) 0)));

#line 604 "getopt.m"
                                    /* direct tailcall eliminated */
#line 604 "getopt.m"
                                    {
#line 604 "getopt.m"
                                      MR_Word mercury__getopt__HeadVar__1__tmp_copy_1 = mercury__getopt__Args1_45;
#line 604 "getopt.m"
                                      MR_Word mercury__getopt__HeadVar__4__tmp_copy_4 = mercury__getopt__OptionArgs1_46;
#line 604 "getopt.m"
                                      MR_Word mercury__getopt__HeadVar__6__tmp_copy_6 = mercury__getopt__OptionTable1_105;
#line 604 "getopt.m"
                                      MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0__tmp_copy_8 = mercury__getopt__STATE_VARIABLE_OptionsSet_77_77;

#line 604 "getopt.m"
                                      mercury__getopt__STATE_VARIABLE_OptionsSet_0_8 = mercury__getopt__STATE_VARIABLE_OptionsSet_0__tmp_copy_8;
#line 604 "getopt.m"
                                      mercury__getopt__HeadVar__6_6 = mercury__getopt__HeadVar__6__tmp_copy_6;
#line 604 "getopt.m"
                                      mercury__getopt__HeadVar__4_4 = mercury__getopt__HeadVar__4__tmp_copy_4;
#line 604 "getopt.m"
                                      mercury__getopt__HeadVar__1_1 = mercury__getopt__HeadVar__1__tmp_copy_1;
#line 604 "getopt.m"
                                    }
#line 604 "getopt.m"
                                    continue;
#line 603 "getopt.m"
                                  }
#line 601 "getopt.m"
                              }
#line 568 "getopt.m"
                          }
#line 613 "getopt.m"
                        else
#line 618 "getopt.m"
                          {
#line 618 "getopt.m"
                            MR_Word mercury__getopt__Args1_119;

#line 617 "getopt.m"
                            {
#line 617 "getopt.m"
                              mercury__getopt__process_arguments_9_p_0(mercury__getopt__TypeInfo_for_OptionType_138, mercury__getopt__Args0_17, &mercury__getopt__Args1_119, mercury__getopt__OptionOps_3, mercury__getopt__HeadVar__4_4, mercury__getopt__OptionArgs_5, mercury__getopt__HeadVar__6_6, mercury__getopt__HeadVar__7_7, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
                            }
#line 619 "getopt.m"
                            {
#line 619 "getopt.m"
                              MR_Word base;
#line 619 "getopt.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "getopt.m"
                              *mercury__getopt__HeadVar__2_2 = base;
#line 619 "getopt.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Option_16));
#line 619 "getopt.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__getopt__Args1_119));
#line 619 "getopt.m"
                            }
#line 618 "getopt.m"
                          }
#line 613 "getopt.m"
                      }
#line 567 "getopt.m"
                  }
#line 534 "getopt.m"
              }
#line 506 "getopt.m"
          }
#line 503 "getopt.m"
      }
#line 503 "getopt.m"
      break;
#line 503 "getopt.m"
    }
#line 497 "getopt.m"
}

#line 359 "getopt.m"
MR_Word MR_CALL 
mercury__getopt__lookup_accumulating_option_2_f_0(
#line 359 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_7,
#line 359 "getopt.m"
  MR_Word mercury__getopt__OT_4,
#line 359 "getopt.m"
  MR_Box mercury__getopt__Opt_5)
#line 359 "getopt.m"
{
#line 1133 "getopt.m"
  {
#line 1133 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 1133 "getopt.m"
    MR_Word mercury__getopt__Ss_6;
#line 1133 "getopt.m"
    MR_Word mercury__getopt__Val0_11;
#line 1131 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 1131 "getopt.m"
    MR_Word mercury__getopt__V_12_12;
#line 1131 "getopt.m"
    MR_Box mercury__getopt__conv0_V_12_12;

#line 1131 "getopt.m"
    {
#line 1131 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_7, mercury__getopt__TypeCtorInfo_11_14, mercury__getopt__OT_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_12_12);
    }
#line 1131 "getopt.m"
    mercury__getopt__V_12_12 = ((MR_Word) mercury__getopt__conv0_V_12_12);
#line 1131 "getopt.m"
    mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__V_12_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_12_12, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1131 "getopt.m"
    if (mercury__getopt__succeeded)
#line 1131 "getopt.m"
      {
#line 1131 "getopt.m"
        mercury__getopt__Val0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_12_12, (MR_Integer) 1)));
#line 1132 "getopt.m"
        mercury__getopt__Ss_6 = mercury__getopt__Val0_11;
#line 1131 "getopt.m"
      }
#line 1131 "getopt.m"
    else
#line 1134 "getopt.m"
      {
#line 1134 "getopt.m"
        {
#line 1134 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected accumulating option and didn\'t get one.");
        }
#line 1134 "getopt.m"
      }
#line 1133 "getopt.m"
    return mercury__getopt__Ss_6;
#line 1133 "getopt.m"
  }
#line 359 "getopt.m"
}

#line 357 "getopt.m"
void MR_CALL 
mercury__getopt__lookup_accumulating_option_3_p_0(
#line 357 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_10,
#line 357 "getopt.m"
  MR_Word mercury__getopt__OptionTable_4,
#line 357 "getopt.m"
  MR_Box mercury__getopt__Opt_5,
#line 357 "getopt.m"
  MR_Word * mercury__getopt__Val_6)
#line 357 "getopt.m"
{
#line 1133 "getopt.m"
  {
#line 1133 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 1133 "getopt.m"
    MR_Word mercury__getopt__Val0_7;
#line 1131 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 1131 "getopt.m"
    MR_Word mercury__getopt__V_8_8;
#line 1131 "getopt.m"
    MR_Box mercury__getopt__conv0_V_8_8;

#line 1131 "getopt.m"
    {
#line 1131 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_10, mercury__getopt__TypeCtorInfo_11_11, mercury__getopt__OptionTable_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_8_8);
    }
#line 1131 "getopt.m"
    mercury__getopt__V_8_8 = ((MR_Word) mercury__getopt__conv0_V_8_8);
#line 1131 "getopt.m"
    mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__V_8_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_8_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1131 "getopt.m"
    if (mercury__getopt__succeeded)
#line 1131 "getopt.m"
      {
#line 1131 "getopt.m"
        mercury__getopt__Val0_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_8_8, (MR_Integer) 1)));
#line 1132 "getopt.m"
        *mercury__getopt__Val_6 = mercury__getopt__Val0_7;
#line 1131 "getopt.m"
      }
#line 1131 "getopt.m"
    else
#line 1134 "getopt.m"
      {
#line 1134 "getopt.m"
        {
#line 1134 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected accumulating option and didn\'t get one.");
#line 1134 "getopt.m"
          return;
        }
#line 1134 "getopt.m"
      }
#line 1133 "getopt.m"
  }
#line 357 "getopt.m"
}

#line 354 "getopt.m"
MR_Word MR_CALL 
mercury__getopt__lookup_maybe_string_option_2_f_0(
#line 354 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_7,
#line 354 "getopt.m"
  MR_Word mercury__getopt__OT_4,
#line 354 "getopt.m"
  MR_Box mercury__getopt__Opt_5)
#line 354 "getopt.m"
{
#line 1123 "getopt.m"
  {
#line 1123 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 1123 "getopt.m"
    MR_Word mercury__getopt__MS_6;
#line 1123 "getopt.m"
    MR_Word mercury__getopt__Val0_11;
#line 1121 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 1121 "getopt.m"
    MR_Word mercury__getopt__V_12_12;
#line 1121 "getopt.m"
    MR_Box mercury__getopt__conv0_V_12_12;

#line 1121 "getopt.m"
    {
#line 1121 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_7, mercury__getopt__TypeCtorInfo_11_14, mercury__getopt__OT_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_12_12);
    }
#line 1121 "getopt.m"
    mercury__getopt__V_12_12 = ((MR_Word) mercury__getopt__conv0_V_12_12);
#line 1121 "getopt.m"
    mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__V_12_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_12_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1121 "getopt.m"
    if (mercury__getopt__succeeded)
#line 1121 "getopt.m"
      {
#line 1121 "getopt.m"
        mercury__getopt__Val0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_12_12, (MR_Integer) 1)));
#line 1122 "getopt.m"
        mercury__getopt__MS_6 = mercury__getopt__Val0_11;
#line 1121 "getopt.m"
      }
#line 1121 "getopt.m"
    else
#line 1124 "getopt.m"
      {
#line 1124 "getopt.m"
        {
#line 1124 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected maybe_string option and didn\'t get one.");
        }
#line 1124 "getopt.m"
      }
#line 1123 "getopt.m"
    return mercury__getopt__MS_6;
#line 1123 "getopt.m"
  }
#line 354 "getopt.m"
}

#line 352 "getopt.m"
void MR_CALL 
mercury__getopt__lookup_maybe_string_option_3_p_0(
#line 352 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_10,
#line 352 "getopt.m"
  MR_Word mercury__getopt__OptionTable_4,
#line 352 "getopt.m"
  MR_Box mercury__getopt__Opt_5,
#line 352 "getopt.m"
  MR_Word * mercury__getopt__Val_6)
#line 352 "getopt.m"
{
#line 1123 "getopt.m"
  {
#line 1123 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 1123 "getopt.m"
    MR_Word mercury__getopt__Val0_7;
#line 1121 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 1121 "getopt.m"
    MR_Word mercury__getopt__V_8_8;
#line 1121 "getopt.m"
    MR_Box mercury__getopt__conv0_V_8_8;

#line 1121 "getopt.m"
    {
#line 1121 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_10, mercury__getopt__TypeCtorInfo_11_11, mercury__getopt__OptionTable_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_8_8);
    }
#line 1121 "getopt.m"
    mercury__getopt__V_8_8 = ((MR_Word) mercury__getopt__conv0_V_8_8);
#line 1121 "getopt.m"
    mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__V_8_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_8_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1121 "getopt.m"
    if (mercury__getopt__succeeded)
#line 1121 "getopt.m"
      {
#line 1121 "getopt.m"
        mercury__getopt__Val0_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_8_8, (MR_Integer) 1)));
#line 1122 "getopt.m"
        *mercury__getopt__Val_6 = mercury__getopt__Val0_7;
#line 1121 "getopt.m"
      }
#line 1121 "getopt.m"
    else
#line 1124 "getopt.m"
      {
#line 1124 "getopt.m"
        {
#line 1124 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected maybe_string option and didn\'t get one.");
#line 1124 "getopt.m"
          return;
        }
#line 1124 "getopt.m"
      }
#line 1123 "getopt.m"
  }
#line 352 "getopt.m"
}

#line 349 "getopt.m"
MR_Word MR_CALL 
mercury__getopt__lookup_maybe_int_option_2_f_0(
#line 349 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_7,
#line 349 "getopt.m"
  MR_Word mercury__getopt__OT_4,
#line 349 "getopt.m"
  MR_Box mercury__getopt__Opt_5)
#line 349 "getopt.m"
{
#line 1113 "getopt.m"
  {
#line 1113 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 1113 "getopt.m"
    MR_Word mercury__getopt__MN_6;
#line 1113 "getopt.m"
    MR_Word mercury__getopt__Val0_11;
#line 1111 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 1111 "getopt.m"
    MR_Word mercury__getopt__V_12_12;
#line 1111 "getopt.m"
    MR_Box mercury__getopt__conv0_V_12_12;

#line 1111 "getopt.m"
    {
#line 1111 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_7, mercury__getopt__TypeCtorInfo_11_14, mercury__getopt__OT_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_12_12);
    }
#line 1111 "getopt.m"
    mercury__getopt__V_12_12 = ((MR_Word) mercury__getopt__conv0_V_12_12);
#line 1111 "getopt.m"
    mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__V_12_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_12_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1111 "getopt.m"
    if (mercury__getopt__succeeded)
#line 1111 "getopt.m"
      {
#line 1111 "getopt.m"
        mercury__getopt__Val0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_12_12, (MR_Integer) 1)));
#line 1112 "getopt.m"
        mercury__getopt__MN_6 = mercury__getopt__Val0_11;
#line 1111 "getopt.m"
      }
#line 1111 "getopt.m"
    else
#line 1114 "getopt.m"
      {
#line 1114 "getopt.m"
        {
#line 1114 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected maybe_int option and didn\'t get one.");
        }
#line 1114 "getopt.m"
      }
#line 1113 "getopt.m"
    return mercury__getopt__MN_6;
#line 1113 "getopt.m"
  }
#line 349 "getopt.m"
}

#line 347 "getopt.m"
void MR_CALL 
mercury__getopt__lookup_maybe_int_option_3_p_0(
#line 347 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_10,
#line 347 "getopt.m"
  MR_Word mercury__getopt__OptionTable_4,
#line 347 "getopt.m"
  MR_Box mercury__getopt__Opt_5,
#line 347 "getopt.m"
  MR_Word * mercury__getopt__Val_6)
#line 347 "getopt.m"
{
#line 1113 "getopt.m"
  {
#line 1113 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 1113 "getopt.m"
    MR_Word mercury__getopt__Val0_7;
#line 1111 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 1111 "getopt.m"
    MR_Word mercury__getopt__V_8_8;
#line 1111 "getopt.m"
    MR_Box mercury__getopt__conv0_V_8_8;

#line 1111 "getopt.m"
    {
#line 1111 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_10, mercury__getopt__TypeCtorInfo_11_11, mercury__getopt__OptionTable_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_8_8);
    }
#line 1111 "getopt.m"
    mercury__getopt__V_8_8 = ((MR_Word) mercury__getopt__conv0_V_8_8);
#line 1111 "getopt.m"
    mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__V_8_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_8_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1111 "getopt.m"
    if (mercury__getopt__succeeded)
#line 1111 "getopt.m"
      {
#line 1111 "getopt.m"
        mercury__getopt__Val0_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_8_8, (MR_Integer) 1)));
#line 1112 "getopt.m"
        *mercury__getopt__Val_6 = mercury__getopt__Val0_7;
#line 1111 "getopt.m"
      }
#line 1111 "getopt.m"
    else
#line 1114 "getopt.m"
      {
#line 1114 "getopt.m"
        {
#line 1114 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected maybe_int option and didn\'t get one.");
#line 1114 "getopt.m"
          return;
        }
#line 1114 "getopt.m"
      }
#line 1113 "getopt.m"
  }
#line 347 "getopt.m"
}

#line 345 "getopt.m"
MR_String MR_CALL 
mercury__getopt__lookup_string_option_2_f_0(
#line 345 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_7,
#line 345 "getopt.m"
  MR_Word mercury__getopt__OT_4,
#line 345 "getopt.m"
  MR_Box mercury__getopt__Opt_5)
#line 345 "getopt.m"
{
#line 1103 "getopt.m"
  {
#line 1103 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 1103 "getopt.m"
    MR_String mercury__getopt__S_6;
#line 1103 "getopt.m"
    MR_String mercury__getopt__Val0_11;
#line 1101 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 1101 "getopt.m"
    MR_Word mercury__getopt__V_12_12;
#line 1101 "getopt.m"
    MR_Box mercury__getopt__conv0_V_12_12;

#line 1101 "getopt.m"
    {
#line 1101 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_7, mercury__getopt__TypeCtorInfo_11_14, mercury__getopt__OT_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_12_12);
    }
#line 1101 "getopt.m"
    mercury__getopt__V_12_12 = ((MR_Word) mercury__getopt__conv0_V_12_12);
#line 1101 "getopt.m"
    mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__V_12_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_12_12, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1101 "getopt.m"
    if (mercury__getopt__succeeded)
#line 1101 "getopt.m"
      {
#line 1101 "getopt.m"
        mercury__getopt__Val0_11 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__V_12_12, (MR_Integer) 1)));
#line 1102 "getopt.m"
        mercury__getopt__S_6 = mercury__getopt__Val0_11;
#line 1101 "getopt.m"
      }
#line 1101 "getopt.m"
    else
#line 1104 "getopt.m"
      {
#line 1104 "getopt.m"
        {
#line 1104 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected string option and didn\'t get one.");
        }
#line 1104 "getopt.m"
      }
#line 1103 "getopt.m"
    return mercury__getopt__S_6;
#line 1103 "getopt.m"
  }
#line 345 "getopt.m"
}

#line 343 "getopt.m"
void MR_CALL 
mercury__getopt__lookup_string_option_3_p_0(
#line 343 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_10,
#line 343 "getopt.m"
  MR_Word mercury__getopt__OptionTable_4,
#line 343 "getopt.m"
  MR_Box mercury__getopt__Opt_5,
#line 343 "getopt.m"
  MR_String * mercury__getopt__Val_6)
#line 343 "getopt.m"
{
#line 1103 "getopt.m"
  {
#line 1103 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 1103 "getopt.m"
    MR_String mercury__getopt__Val0_7;
#line 1101 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 1101 "getopt.m"
    MR_Word mercury__getopt__V_8_8;
#line 1101 "getopt.m"
    MR_Box mercury__getopt__conv0_V_8_8;

#line 1101 "getopt.m"
    {
#line 1101 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_10, mercury__getopt__TypeCtorInfo_11_11, mercury__getopt__OptionTable_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_8_8);
    }
#line 1101 "getopt.m"
    mercury__getopt__V_8_8 = ((MR_Word) mercury__getopt__conv0_V_8_8);
#line 1101 "getopt.m"
    mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__V_8_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__V_8_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1101 "getopt.m"
    if (mercury__getopt__succeeded)
#line 1101 "getopt.m"
      {
#line 1101 "getopt.m"
        mercury__getopt__Val0_7 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__V_8_8, (MR_Integer) 1)));
#line 1102 "getopt.m"
        *mercury__getopt__Val_6 = mercury__getopt__Val0_7;
#line 1101 "getopt.m"
      }
#line 1101 "getopt.m"
    else
#line 1104 "getopt.m"
      {
#line 1104 "getopt.m"
        {
#line 1104 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected string option and didn\'t get one.");
#line 1104 "getopt.m"
          return;
        }
#line 1104 "getopt.m"
      }
#line 1103 "getopt.m"
  }
#line 343 "getopt.m"
}

#line 341 "getopt.m"
MR_Integer MR_CALL 
mercury__getopt__lookup_int_option_2_f_0(
#line 341 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_7,
#line 341 "getopt.m"
  MR_Word mercury__getopt__OT_4,
#line 341 "getopt.m"
  MR_Box mercury__getopt__Opt_5)
#line 341 "getopt.m"
{
#line 1093 "getopt.m"
  {
#line 1093 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 1093 "getopt.m"
    MR_Integer mercury__getopt__N_6;
#line 1093 "getopt.m"
    MR_Integer mercury__getopt__Val0_11;
#line 1091 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 1091 "getopt.m"
    MR_Word mercury__getopt__V_12_12;
#line 1091 "getopt.m"
    MR_Box mercury__getopt__conv0_V_12_12;

#line 1091 "getopt.m"
    {
#line 1091 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_7, mercury__getopt__TypeCtorInfo_11_14, mercury__getopt__OT_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_12_12);
    }
#line 1091 "getopt.m"
    mercury__getopt__V_12_12 = ((MR_Word) mercury__getopt__conv0_V_12_12);
#line 1091 "getopt.m"
    mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__V_12_12)) == (MR_mktag((MR_Integer) 2)));
#line 1091 "getopt.m"
    if (mercury__getopt__succeeded)
#line 1091 "getopt.m"
      {
#line 1091 "getopt.m"
        mercury__getopt__Val0_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt__V_12_12, (MR_Integer) 0)));
#line 1092 "getopt.m"
        mercury__getopt__N_6 = mercury__getopt__Val0_11;
#line 1091 "getopt.m"
      }
#line 1091 "getopt.m"
    else
#line 1094 "getopt.m"
      {
#line 1094 "getopt.m"
        {
#line 1094 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected int option and didn\'t get one.");
        }
#line 1094 "getopt.m"
      }
#line 1093 "getopt.m"
    return mercury__getopt__N_6;
#line 1093 "getopt.m"
  }
#line 341 "getopt.m"
}

#line 339 "getopt.m"
void MR_CALL 
mercury__getopt__lookup_int_option_3_p_0(
#line 339 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_10,
#line 339 "getopt.m"
  MR_Word mercury__getopt__OptionTable_4,
#line 339 "getopt.m"
  MR_Box mercury__getopt__Opt_5,
#line 339 "getopt.m"
  MR_Integer * mercury__getopt__Val_6)
#line 339 "getopt.m"
{
#line 1093 "getopt.m"
  {
#line 1093 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 1093 "getopt.m"
    MR_Integer mercury__getopt__Val0_7;
#line 1091 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 1091 "getopt.m"
    MR_Word mercury__getopt__V_8_8;
#line 1091 "getopt.m"
    MR_Box mercury__getopt__conv0_V_8_8;

#line 1091 "getopt.m"
    {
#line 1091 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_10, mercury__getopt__TypeCtorInfo_11_11, mercury__getopt__OptionTable_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_8_8);
    }
#line 1091 "getopt.m"
    mercury__getopt__V_8_8 = ((MR_Word) mercury__getopt__conv0_V_8_8);
#line 1091 "getopt.m"
    mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__V_8_8)) == (MR_mktag((MR_Integer) 2)));
#line 1091 "getopt.m"
    if (mercury__getopt__succeeded)
#line 1091 "getopt.m"
      {
#line 1091 "getopt.m"
        mercury__getopt__Val0_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt__V_8_8, (MR_Integer) 0)));
#line 1092 "getopt.m"
        *mercury__getopt__Val_6 = mercury__getopt__Val0_7;
#line 1091 "getopt.m"
      }
#line 1091 "getopt.m"
    else
#line 1094 "getopt.m"
      {
#line 1094 "getopt.m"
        {
#line 1094 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected int option and didn\'t get one.");
#line 1094 "getopt.m"
          return;
        }
#line 1094 "getopt.m"
      }
#line 1093 "getopt.m"
  }
#line 339 "getopt.m"
}

#line 337 "getopt.m"
MR_Word MR_CALL 
mercury__getopt__lookup_bool_option_2_f_0(
#line 337 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_7,
#line 337 "getopt.m"
  MR_Word mercury__getopt__OT_4,
#line 337 "getopt.m"
  MR_Box mercury__getopt__Opt_5)
#line 337 "getopt.m"
{
#line 1083 "getopt.m"
  {
#line 1083 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 1083 "getopt.m"
    MR_Word mercury__getopt__B_6;
#line 1083 "getopt.m"
    MR_Word mercury__getopt__Val0_11;
#line 1081 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 1081 "getopt.m"
    MR_Word mercury__getopt__V_12_12;
#line 1081 "getopt.m"
    MR_Box mercury__getopt__conv0_V_12_12;

#line 1081 "getopt.m"
    {
#line 1081 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_7, mercury__getopt__TypeCtorInfo_11_14, mercury__getopt__OT_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_12_12);
    }
#line 1081 "getopt.m"
    mercury__getopt__V_12_12 = ((MR_Word) mercury__getopt__conv0_V_12_12);
#line 1081 "getopt.m"
    mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 1081 "getopt.m"
    if (mercury__getopt__succeeded)
#line 1081 "getopt.m"
      {
#line 1081 "getopt.m"
        mercury__getopt__Val0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__V_12_12, (MR_Integer) 0)));
#line 1082 "getopt.m"
        mercury__getopt__B_6 = mercury__getopt__Val0_11;
#line 1081 "getopt.m"
      }
#line 1081 "getopt.m"
    else
#line 1084 "getopt.m"
      {
#line 1084 "getopt.m"
        {
#line 1084 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected bool option and didn\'t get one.");
        }
#line 1084 "getopt.m"
      }
#line 1083 "getopt.m"
    return mercury__getopt__B_6;
#line 1083 "getopt.m"
  }
#line 337 "getopt.m"
}

#line 335 "getopt.m"
void MR_CALL 
mercury__getopt__lookup_bool_option_3_p_0(
#line 335 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_Option_10,
#line 335 "getopt.m"
  MR_Word mercury__getopt__OptionTable_4,
#line 335 "getopt.m"
  MR_Box mercury__getopt__Opt_5,
#line 335 "getopt.m"
  MR_Word * mercury__getopt__Val_6)
#line 335 "getopt.m"
{
#line 1083 "getopt.m"
  {
#line 1083 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 1083 "getopt.m"
    MR_Word mercury__getopt__Val0_7;
#line 1081 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 1081 "getopt.m"
    MR_Word mercury__getopt__V_8_8;
#line 1081 "getopt.m"
    MR_Box mercury__getopt__conv0_V_8_8;

#line 1081 "getopt.m"
    {
#line 1081 "getopt.m"
      mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_10, mercury__getopt__TypeCtorInfo_11_11, mercury__getopt__OptionTable_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_V_8_8);
    }
#line 1081 "getopt.m"
    mercury__getopt__V_8_8 = ((MR_Word) mercury__getopt__conv0_V_8_8);
#line 1081 "getopt.m"
    mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__V_8_8)) == (MR_mktag((MR_Integer) 1)));
#line 1081 "getopt.m"
    if (mercury__getopt__succeeded)
#line 1081 "getopt.m"
      {
#line 1081 "getopt.m"
        mercury__getopt__Val0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__V_8_8, (MR_Integer) 0)));
#line 1082 "getopt.m"
        *mercury__getopt__Val_6 = mercury__getopt__Val0_7;
#line 1081 "getopt.m"
      }
#line 1081 "getopt.m"
    else
#line 1084 "getopt.m"
      {
#line 1084 "getopt.m"
        {
#line 1084 "getopt.m"
          mercury__require__error_1_p_0((MR_String) "Expected bool option and didn\'t get one.");
#line 1084 "getopt.m"
          return;
        }
#line 1084 "getopt.m"
      }
#line 1083 "getopt.m"
  }
#line 335 "getopt.m"
}

#line 329 "getopt.m"
MR_String MR_CALL 
mercury__getopt__option_error_to_string_1_f_0(
#line 329 "getopt.m"
  MR_Word mercury__getopt__TypeInfo_for_OptionType_47,
#line 329 "getopt.m"
  MR_Word mercury__getopt__Error_3)
#line 329 "getopt.m"
{
#line 1038 "getopt.m"
  {
#line 1038 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 1038 "getopt.m"
    MR_String mercury__getopt__String_4;

#line 1038 "getopt.m"
    if (((MR_tag((MR_Word) mercury__getopt__Error_3)) == (MR_mktag((MR_Integer) 1))))
#line 1039 "getopt.m"
      {
#line 1039 "getopt.m"
        MR_Word mercury__getopt__Reason_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__Error_3, (MR_Integer) 2)));
#line 1039 "getopt.m"
        MR_String mercury__getopt__OptionName_46 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__Error_3, (MR_Integer) 1)));
#line 1039 "getopt.m"
        MR_Box mercury__getopt__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__getopt__Error_3, (MR_Integer) 0));

#line 1044 "getopt.m"
        if ((mercury__getopt__Reason_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1053 "getopt.m"
          {
#line 1053 "getopt.m"
            MR_String mercury__getopt__V_129_129;
#line 1053 "getopt.m"
            MR_Word mercury__getopt__V_135_135 = (MR_Word) &mercury__getopt_scalar_common_8[0];
#line 1053 "getopt.m"
            MR_String mercury__getopt__V_136_136;

#line 1056 "getopt.m"
            {
#line 1056 "getopt.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mercury__getopt__V_135_135, mercury__getopt__OptionName_46, &mercury__getopt__V_129_129);
            }
#line 1054 "getopt.m"
            {
#line 1054 "getopt.m"
              mercury__getopt__V_136_136 = mercury__string__f_43_43_2_f_0(mercury__getopt__V_129_129, (MR_String) "\' -- only boolean, maybe and accumulating options can be negated");
            }
#line 1054 "getopt.m"
            {
#line 1054 "getopt.m"
              return mercury__getopt__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "cannot negate option \140", mercury__getopt__V_136_136);
            }
#line 1053 "getopt.m"
          }
#line 1044 "getopt.m"
        else
#line 1044 "getopt.m"
          if ((mercury__getopt__Reason_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1045 "getopt.m"
            {
#line 1045 "getopt.m"
              MR_String mercury__getopt__V_109_109;
#line 1045 "getopt.m"
              MR_Word mercury__getopt__V_115_115 = (MR_Word) &mercury__getopt_scalar_common_8[0];
#line 1045 "getopt.m"
              MR_String mercury__getopt__V_116_116;

#line 1047 "getopt.m"
              {
#line 1047 "getopt.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mercury__getopt__V_115_115, mercury__getopt__OptionName_46, &mercury__getopt__V_109_109);
              }
#line 1046 "getopt.m"
              {
#line 1046 "getopt.m"
                mercury__getopt__V_116_116 = mercury__string__f_43_43_2_f_0(mercury__getopt__V_109_109, (MR_String) "\' needs an argument");
              }
#line 1046 "getopt.m"
              {
#line 1046 "getopt.m"
                return mercury__getopt__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", mercury__getopt__V_116_116);
              }
#line 1045 "getopt.m"
            }
#line 1044 "getopt.m"
          else
#line 1044 "getopt.m"
            if ((mercury__getopt__Reason_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1058 "getopt.m"
              {
#line 1058 "getopt.m"
                MR_String mercury__getopt__V_79_79;
#line 1058 "getopt.m"
                MR_Word mercury__getopt__V_85_85 = (MR_Word) &mercury__getopt_scalar_common_8[0];
#line 1058 "getopt.m"
                MR_String mercury__getopt__V_86_86;

#line 1060 "getopt.m"
                {
#line 1060 "getopt.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mercury__getopt__V_85_85, mercury__getopt__OptionName_46, &mercury__getopt__V_79_79);
                }
#line 1059 "getopt.m"
                {
#line 1059 "getopt.m"
                  mercury__getopt__V_86_86 = mercury__string__f_43_43_2_f_0(mercury__getopt__V_79_79, (MR_String) "\' failed");
                }
#line 1059 "getopt.m"
                {
#line 1059 "getopt.m"
                  return mercury__getopt__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "the handler of option \140", mercury__getopt__V_86_86);
                }
#line 1058 "getopt.m"
              }
#line 1044 "getopt.m"
            else
#line 1044 "getopt.m"
              if ((mercury__getopt__Reason_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1062 "getopt.m"
                {
#line 1062 "getopt.m"
                  MR_String mercury__getopt__V_69_69;
#line 1062 "getopt.m"
                  MR_Word mercury__getopt__V_75_75 = (MR_Word) &mercury__getopt_scalar_common_8[0];
#line 1062 "getopt.m"
                  MR_String mercury__getopt__V_76_76;

#line 1064 "getopt.m"
                  {
#line 1064 "getopt.m"
                    mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mercury__getopt__V_75_75, mercury__getopt__OptionName_46, &mercury__getopt__V_69_69);
                  }
#line 1063 "getopt.m"
                  {
#line 1063 "getopt.m"
                    mercury__getopt__V_76_76 = mercury__string__f_43_43_2_f_0(mercury__getopt__V_69_69, (MR_String) "\' has no handler");
                  }
#line 1063 "getopt.m"
                  {
#line 1063 "getopt.m"
                    return mercury__getopt__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", mercury__getopt__V_76_76);
                  }
#line 1062 "getopt.m"
                }
#line 1044 "getopt.m"
              else
#line 1044 "getopt.m"
                if ((mercury__getopt__Reason_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1041 "getopt.m"
                  {
#line 1041 "getopt.m"
                    MR_String mercury__getopt__V_59_59;
#line 1041 "getopt.m"
                    MR_Word mercury__getopt__V_65_65 = (MR_Word) &mercury__getopt_scalar_common_8[0];
#line 1041 "getopt.m"
                    MR_String mercury__getopt__V_66_66;

#line 1043 "getopt.m"
                    {
#line 1043 "getopt.m"
                      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mercury__getopt__V_65_65, mercury__getopt__OptionName_46, &mercury__getopt__V_59_59);
                    }
#line 1042 "getopt.m"
                    {
#line 1042 "getopt.m"
                      mercury__getopt__V_66_66 = mercury__string__f_43_43_2_f_0(mercury__getopt__V_59_59, (MR_String) "\'");
                    }
#line 1042 "getopt.m"
                    {
#line 1042 "getopt.m"
                      return mercury__getopt__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "unknown type for option \140", mercury__getopt__V_66_66);
                    }
#line 1041 "getopt.m"
                  }
#line 1044 "getopt.m"
                else
#line 1044 "getopt.m"
                  if (((MR_tag((MR_Word) mercury__getopt__Reason_7)) == (MR_mktag((MR_Integer) 1))))
#line 1049 "getopt.m"
                    {
#line 1049 "getopt.m"
                      MR_String mercury__getopt__V_119_119;
#line 1049 "getopt.m"
                      MR_Word mercury__getopt__V_125_125 = (MR_Word) &mercury__getopt_scalar_common_8[0];
#line 1049 "getopt.m"
                      MR_String mercury__getopt__V_126_126;

#line 1051 "getopt.m"
                      {
#line 1051 "getopt.m"
                        mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mercury__getopt__V_125_125, mercury__getopt__OptionName_46, &mercury__getopt__V_119_119);
                      }
#line 1050 "getopt.m"
                      {
#line 1050 "getopt.m"
                        mercury__getopt__V_126_126 = mercury__string__f_43_43_2_f_0(mercury__getopt__V_119_119, (MR_String) "\' does not allow an argument");
                      }
#line 1050 "getopt.m"
                      {
#line 1050 "getopt.m"
                        return mercury__getopt__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", mercury__getopt__V_126_126);
                      }
#line 1049 "getopt.m"
                    }
#line 1044 "getopt.m"
                  else
#line 1044 "getopt.m"
                    if (((MR_tag((MR_Word) mercury__getopt__Reason_7)) == (MR_mktag((MR_Integer) 3))))
#line 1068 "getopt.m"
                      {
#line 1068 "getopt.m"
                        MR_String mercury__getopt__Arg_9 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__Reason_7, (MR_Integer) 0)));
#line 1068 "getopt.m"
                        MR_String mercury__getopt__V_89_89;
#line 1068 "getopt.m"
                        MR_Word mercury__getopt__V_95_95 = (MR_Word) &mercury__getopt_scalar_common_8[0];
#line 1068 "getopt.m"
                        MR_String mercury__getopt__V_96_96;
#line 1068 "getopt.m"
                        MR_String mercury__getopt__V_98_98;
#line 1068 "getopt.m"
                        MR_String mercury__getopt__V_99_99;
#line 1068 "getopt.m"
                        MR_String mercury__getopt__V_106_106;

#line 1071 "getopt.m"
                        {
#line 1071 "getopt.m"
                          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mercury__getopt__V_95_95, mercury__getopt__Arg_9, &mercury__getopt__V_89_89);
                        }
#line 1069 "getopt.m"
                        {
#line 1069 "getopt.m"
                          mercury__getopt__V_96_96 = mercury__string__f_43_43_2_f_0(mercury__getopt__V_89_89, (MR_String) "\' is not numeric");
                        }
#line 1069 "getopt.m"
                        {
#line 1069 "getopt.m"
                          mercury__getopt__V_98_98 = mercury__string__f_43_43_2_f_0((MR_String) "\' requires a numeric argument; \140", mercury__getopt__V_96_96);
                        }
#line 1071 "getopt.m"
                        {
#line 1071 "getopt.m"
                          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mercury__getopt__V_95_95, mercury__getopt__OptionName_46, &mercury__getopt__V_99_99);
                        }
#line 1069 "getopt.m"
                        {
#line 1069 "getopt.m"
                          mercury__getopt__V_106_106 = mercury__string__f_43_43_2_f_0(mercury__getopt__V_99_99, mercury__getopt__V_98_98);
                        }
#line 1069 "getopt.m"
                        {
#line 1069 "getopt.m"
                          return mercury__getopt__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", mercury__getopt__V_106_106);
                        }
#line 1068 "getopt.m"
                      }
#line 1044 "getopt.m"
                    else
#line 1066 "getopt.m"
                      mercury__getopt__String_4 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__getopt__Reason_7, (MR_Integer) 0)));
#line 1039 "getopt.m"
      }
#line 1038 "getopt.m"
    else
#line 1036 "getopt.m"
      {
#line 1036 "getopt.m"
        MR_String mercury__getopt__OptionName_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__getopt__Error_3, (MR_Integer) 0)));
#line 1036 "getopt.m"
        MR_String mercury__getopt__V_49_49;
#line 1036 "getopt.m"
        MR_Word mercury__getopt__V_55_55 = (MR_Word) &mercury__getopt_scalar_common_8[0];
#line 1036 "getopt.m"
        MR_String mercury__getopt__V_56_56;

#line 1037 "getopt.m"
        {
#line 1037 "getopt.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mercury__getopt__V_55_55, mercury__getopt__OptionName_5, &mercury__getopt__V_49_49);
        }
#line 1037 "getopt.m"
        {
#line 1037 "getopt.m"
          mercury__getopt__V_56_56 = mercury__string__f_43_43_2_f_0(mercury__getopt__V_49_49, (MR_String) "\'");
        }
#line 1037 "getopt.m"
        {
#line 1037 "getopt.m"
          return mercury__getopt__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "unrecognized option \140", mercury__getopt__V_56_56);
        }
#line 1036 "getopt.m"
      }
#line 1038 "getopt.m"
    return mercury__getopt__String_4;
#line 1038 "getopt.m"
  }
#line 329 "getopt.m"
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

#line 421 "getopt.m"
static void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0_1(
#line 421 "getopt.m"
  void * mercury__getopt__env_ptr_arg)
#line 421 "getopt.m"
{
#line 421 "getopt.m"
  {
#line 421 "getopt.m"
    struct mercury__getopt__init_option_table_multi_2_p_0_2_env_0_s * mercury__getopt__env_ptr = (struct mercury__getopt__init_option_table_multi_2_p_0_2_env_0_s *) mercury__getopt__env_ptr_arg;

#line 421 "getopt.m"
    *((mercury__getopt__env_ptr)->mercury__getopt__init_option_table_multi_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((mercury__getopt__env_ptr)->mercury__getopt__init_option_table_multi_2_p_0_2_env_0__conv0_HeadVar__3_10));
#line 421 "getopt.m"
    {
#line 421 "getopt.m"
      ((mercury__getopt__env_ptr)->mercury__getopt__init_option_table_multi_2_p_0_2_env_0__cont)((mercury__getopt__env_ptr)->mercury__getopt__init_option_table_multi_2_p_0_2_env_0__cont_env_ptr);
#line 421 "getopt.m"
      return;
    }
#line 421 "getopt.m"
  }
#line 421 "getopt.m"
}

#line 421 "getopt.m"
static void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0_2(
#line 421 "getopt.m"
  MR_Box mercury__getopt__closure_arg,
#line 421 "getopt.m"
  MR_Box * mercury__getopt__wrapper_arg_1,
#line 421 "getopt.m"
  MR_Cont mercury__getopt__cont,
#line 421 "getopt.m"
  void * mercury__getopt__cont_env_ptr)
#line 421 "getopt.m"
{
#line 421 "getopt.m"
  {
#line 421 "getopt.m"
    struct mercury__getopt__init_option_table_multi_2_p_0_2_env_0_s mercury__getopt__env;

#line 421 "getopt.m"
    (mercury__getopt__env).mercury__getopt__init_option_table_multi_2_p_0_2_env_0__wrapper_arg_1 = mercury__getopt__wrapper_arg_1;
#line 421 "getopt.m"
    (mercury__getopt__env).mercury__getopt__init_option_table_multi_2_p_0_2_env_0__cont = mercury__getopt__cont;
#line 421 "getopt.m"
    (mercury__getopt__env).mercury__getopt__init_option_table_multi_2_p_0_2_env_0__cont_env_ptr = mercury__getopt__cont_env_ptr;
#line 421 "getopt.m"
    {
#line 421 "getopt.m"
      MR_Box mercury__getopt__closure = mercury__getopt__closure_arg;

#line 421 "getopt.m"
      {
#line 421 "getopt.m"
        mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__closure, (MR_Integer) 4))), &(mercury__getopt__env).mercury__getopt__init_option_table_multi_2_p_0_2_env_0__conv0_HeadVar__3_10, mercury__getopt__init_option_table_multi_2_p_0_1, &mercury__getopt__env);
      }
#line 421 "getopt.m"
    }
#line 421 "getopt.m"
  }
#line 421 "getopt.m"
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
#line 420 "getopt.m"
  {
#line 420 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 420 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_13_13;
#line 420 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_14_14;
#line 420 "getopt.m"
    MR_Word mercury__getopt__TypeInfo_15_15;
#line 420 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_13_31;
#line 420 "getopt.m"
    MR_Word mercury__getopt__TypeInfo_14_32;
#line 420 "getopt.m"
    MR_Word mercury__getopt__OptionDefaultsList_8;
#line 420 "getopt.m"
    MR_Word mercury__getopt__V_9_9;
#line 420 "getopt.m"
    MR_Word mercury__getopt__UnsortedList_5_18;
#line 420 "getopt.m"
    MR_Word mercury__getopt__List0_6_19;
#line 420 "getopt.m"
    MR_Word mercury__getopt__V_6_24;
#line 420 "getopt.m"
    MR_Word mercury__getopt__V_7_26;
#line 420 "getopt.m"
    MR_Word mercury__getopt__UnsortedList0_5_27;
#line 420 "getopt.m"
    MR_Integer mercury__getopt__V_5_50;
#line 420 "getopt.m"
    MR_Word mercury__getopt__V_5_73;
#line 80 "solutions.opt"
    MR_Box mercury__getopt__conv2_UnsortedList0_5_27;
#line 110 "list.opt"
    MR_Word mercury__getopt__conv3_List0_6_19;

#line 421 "getopt.m"
    {
#line 421 "getopt.m"
      mercury__getopt__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 421 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_9_9, 0) = ((MR_Box) (&mercury__getopt_scalar_common_6[0]));
#line 421 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_9_9, 1) = ((MR_Box) (mercury__getopt__init_option_table_multi_2_p_0_2));
#line 421 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 421 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_9_9, 3) = ((MR_Box) (mercury__getopt__TypeInfo_for_OptionType_12));
#line 421 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_9_9, 4) = ((MR_Box) (mercury__getopt__OptionDefaultsPred_3));
#line 421 "getopt.m"
    }
#line 13190 "getopt.c"
    mercury__getopt__TypeCtorInfo_14_14 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 13192 "getopt.c"
    mercury__getopt__TypeCtorInfo_13_13 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 13194 "getopt.c"
    {
#line 13196 "getopt.c"
      mercury__getopt__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13198 "getopt.c"
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_15_15, 0) = ((MR_Box) (mercury__getopt__TypeCtorInfo_14_14));
#line 13200 "getopt.c"
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_15_15, 1) = ((MR_Box) (mercury__getopt__TypeInfo_for_OptionType_12));
#line 13202 "getopt.c"
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_15_15, 2) = ((MR_Box) (mercury__getopt__TypeCtorInfo_13_13));
#line 13204 "getopt.c"
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
#line 13222 "getopt.c"
    mercury__getopt__TypeCtorInfo_13_31 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 13224 "getopt.c"
    {
#line 13226 "getopt.c"
      mercury__getopt__TypeInfo_14_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13228 "getopt.c"
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_14_32, 0) = ((MR_Box) (mercury__getopt__TypeCtorInfo_13_31));
#line 13230 "getopt.c"
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_14_32, 1) = ((MR_Box) (mercury__getopt__TypeInfo_15_15));
#line 13232 "getopt.c"
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
#line 420 "getopt.m"
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

#line 414 "getopt.m"
static void MR_CALL 
mercury__getopt__init_option_table_2_p_0_1(
#line 414 "getopt.m"
  void * mercury__getopt__env_ptr_arg)
#line 414 "getopt.m"
{
#line 414 "getopt.m"
  {
#line 414 "getopt.m"
    struct mercury__getopt__init_option_table_2_p_0_2_env_0_s * mercury__getopt__env_ptr = (struct mercury__getopt__init_option_table_2_p_0_2_env_0_s *) mercury__getopt__env_ptr_arg;

#line 414 "getopt.m"
    *((mercury__getopt__env_ptr)->mercury__getopt__init_option_table_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((mercury__getopt__env_ptr)->mercury__getopt__init_option_table_2_p_0_2_env_0__conv0_HeadVar__3_10));
#line 414 "getopt.m"
    {
#line 414 "getopt.m"
      ((mercury__getopt__env_ptr)->mercury__getopt__init_option_table_2_p_0_2_env_0__cont)((mercury__getopt__env_ptr)->mercury__getopt__init_option_table_2_p_0_2_env_0__cont_env_ptr);
#line 414 "getopt.m"
      return;
    }
#line 414 "getopt.m"
  }
#line 414 "getopt.m"
}

#line 414 "getopt.m"
static void MR_CALL 
mercury__getopt__init_option_table_2_p_0_2(
#line 414 "getopt.m"
  MR_Box mercury__getopt__closure_arg,
#line 414 "getopt.m"
  MR_Box * mercury__getopt__wrapper_arg_1,
#line 414 "getopt.m"
  MR_Cont mercury__getopt__cont,
#line 414 "getopt.m"
  void * mercury__getopt__cont_env_ptr)
#line 414 "getopt.m"
{
#line 414 "getopt.m"
  {
#line 414 "getopt.m"
    struct mercury__getopt__init_option_table_2_p_0_2_env_0_s mercury__getopt__env;

#line 414 "getopt.m"
    (mercury__getopt__env).mercury__getopt__init_option_table_2_p_0_2_env_0__wrapper_arg_1 = mercury__getopt__wrapper_arg_1;
#line 414 "getopt.m"
    (mercury__getopt__env).mercury__getopt__init_option_table_2_p_0_2_env_0__cont = mercury__getopt__cont;
#line 414 "getopt.m"
    (mercury__getopt__env).mercury__getopt__init_option_table_2_p_0_2_env_0__cont_env_ptr = mercury__getopt__cont_env_ptr;
#line 414 "getopt.m"
    {
#line 414 "getopt.m"
      MR_Box mercury__getopt__closure = mercury__getopt__closure_arg;

#line 414 "getopt.m"
      {
#line 414 "getopt.m"
        mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__closure, (MR_Integer) 4))), &(mercury__getopt__env).mercury__getopt__init_option_table_2_p_0_2_env_0__conv0_HeadVar__3_10, mercury__getopt__init_option_table_2_p_0_1, &mercury__getopt__env);
      }
#line 414 "getopt.m"
    }
#line 414 "getopt.m"
  }
#line 414 "getopt.m"
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
#line 413 "getopt.m"
  {
#line 413 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 413 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_13_13;
#line 413 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_14_14;
#line 413 "getopt.m"
    MR_Word mercury__getopt__TypeInfo_15_15;
#line 413 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_13_31;
#line 413 "getopt.m"
    MR_Word mercury__getopt__TypeInfo_14_32;
#line 413 "getopt.m"
    MR_Word mercury__getopt__OptionDefaultsList_8;
#line 413 "getopt.m"
    MR_Word mercury__getopt__V_9_9;
#line 413 "getopt.m"
    MR_Word mercury__getopt__UnsortedList_5_18;
#line 413 "getopt.m"
    MR_Word mercury__getopt__V_6_24;
#line 413 "getopt.m"
    MR_Word mercury__getopt__V_7_26;
#line 413 "getopt.m"
    MR_Integer mercury__getopt__V_5_50;
#line 413 "getopt.m"
    MR_Word mercury__getopt__V_5_73;
#line 80 "solutions.opt"
    MR_Box mercury__getopt__conv2_UnsortedList_5_18;
#line 110 "list.opt"
    MR_Word mercury__getopt__conv3_OptionDefaultsList_8;

#line 414 "getopt.m"
    {
#line 414 "getopt.m"
      mercury__getopt__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 414 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_9_9, 0) = ((MR_Box) (&mercury__getopt_scalar_common_6[0]));
#line 414 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_9_9, 1) = ((MR_Box) (mercury__getopt__init_option_table_2_p_0_2));
#line 414 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 414 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_9_9, 3) = ((MR_Box) (mercury__getopt__TypeInfo_for_OptionType_12));
#line 414 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__V_9_9, 4) = ((MR_Box) (mercury__getopt__OptionDefaultsPred_3));
#line 414 "getopt.m"
    }
#line 13460 "getopt.c"
    mercury__getopt__TypeCtorInfo_14_14 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 13462 "getopt.c"
    mercury__getopt__TypeCtorInfo_13_13 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
#line 13464 "getopt.c"
    {
#line 13466 "getopt.c"
      mercury__getopt__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13468 "getopt.c"
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_15_15, 0) = ((MR_Box) (mercury__getopt__TypeCtorInfo_14_14));
#line 13470 "getopt.c"
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_15_15, 1) = ((MR_Box) (mercury__getopt__TypeInfo_for_OptionType_12));
#line 13472 "getopt.c"
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_15_15, 2) = ((MR_Box) (mercury__getopt__TypeCtorInfo_13_13));
#line 13474 "getopt.c"
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
#line 13492 "getopt.c"
    mercury__getopt__TypeCtorInfo_13_31 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 13494 "getopt.c"
    {
#line 13496 "getopt.c"
      mercury__getopt__TypeInfo_14_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13498 "getopt.c"
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_14_32, 0) = ((MR_Box) (mercury__getopt__TypeCtorInfo_13_31));
#line 13500 "getopt.c"
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_14_32, 1) = ((MR_Box) (mercury__getopt__TypeInfo_15_15));
#line 13502 "getopt.c"
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
#line 413 "getopt.m"
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
#line 490 "getopt.m"
  {
#line 490 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 490 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_24_24;
#line 490 "getopt.m"
    MR_Word mercury__getopt__Short_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_8, (MR_Integer) 0)));
#line 490 "getopt.m"
    MR_Word mercury__getopt__Long_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_8, (MR_Integer) 1)));
#line 490 "getopt.m"
    MR_Word mercury__getopt__Special_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_8, (MR_Integer) 2)));
#line 490 "getopt.m"
    MR_Word mercury__getopt__Internal_18;
#line 490 "getopt.m"
    MR_Word mercury__getopt__RevOptionArgs_19;
#line 490 "getopt.m"
    MR_Word mercury__getopt__V_20_20;
#line 490 "getopt.m"
    MR_Word mercury__getopt__V_21_21;
#line 490 "getopt.m"
    MR_Word mercury__getopt__V_22_22;
#line 490 "getopt.m"
    MR_Word mercury__getopt__V_2_27;

#line 492 "getopt.m"
    {
#line 492 "getopt.m"
      mercury__getopt__V_20_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 492 "getopt.m"
      MR_hl_field(MR_mktag(2), mercury__getopt__V_20_20, 0) = ((MR_Box) (mercury__getopt__Special_17));
#line 492 "getopt.m"
    }
#line 492 "getopt.m"
    {
#line 492 "getopt.m"
      mercury__getopt__Internal_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 492 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__Internal_18, 0) = ((MR_Box) (mercury__getopt__Short_15));
#line 492 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__Internal_18, 1) = ((MR_Box) (mercury__getopt__Long_16));
#line 492 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__Internal_18, 2) = ((MR_Box) (mercury__getopt__V_20_20));
#line 492 "getopt.m"
    }
#line 494 "getopt.m"
    mercury__getopt__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 23 "set_ordlist.opt"
    mercury__getopt__V_2_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 22 "set_ordlist.opt"
    mercury__getopt__V_22_22 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 493 "getopt.m"
    {
#line 493 "getopt.m"
      mercury__getopt__process_arguments_9_p_0(mercury__getopt__TypeInfo_for_OptionType_23, mercury__getopt__Args0_9, mercury__getopt__NonOptionArgs_11, mercury__getopt__Internal_18, mercury__getopt__V_21_21, &mercury__getopt__RevOptionArgs_19, mercury__getopt__OptionTable0_12, mercury__getopt__Result_13, mercury__getopt__V_22_22, mercury__getopt__OptionsSet_14);
    }
#line 13614 "getopt.c"
    mercury__getopt__TypeCtorInfo_24_24 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__getopt__TypeCtorInfo_24_24, mercury__getopt__RevOptionArgs_19, mercury__getopt__OptionArgs_10);
#line 118 "list.opt"
      return;
    }
#line 490 "getopt.m"
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
#line 466 "getopt.m"
  {
#line 466 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 466 "getopt.m"
    MR_Word mercury__getopt__TypeCtorInfo_27_27;
#line 466 "getopt.m"
    MR_Word mercury__getopt__Short_11;
#line 466 "getopt.m"
    MR_Word mercury__getopt__Long_12;
#line 466 "getopt.m"
    MR_Word mercury__getopt__MaybeSpecial_14;
#line 466 "getopt.m"
    MR_Word mercury__getopt__OptionTable0_15;
#line 466 "getopt.m"
    MR_Word mercury__getopt__Internal_17;
#line 466 "getopt.m"
    MR_Word mercury__getopt__RevOptionArgs_18;
#line 466 "getopt.m"
    MR_Word mercury__getopt__V_20_20;
#line 466 "getopt.m"
    MR_Word mercury__getopt__V_21_21;
#line 466 "getopt.m"
    MR_Word mercury__getopt__V_2_30;
#line 485 "getopt.m"
    MR_Word mercury__getopt___OptionsSet_19;

#line 471 "getopt.m"
    if (((MR_tag((MR_Word) mercury__getopt__OptionOps_6)) == (MR_mktag((MR_Integer) 0))))
#line 468 "getopt.m"
      {
#line 468 "getopt.m"
        MR_Word mercury__getopt__Defaults_13;

#line 468 "getopt.m"
        mercury__getopt__Short_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_6, (MR_Integer) 0)));
#line 468 "getopt.m"
        mercury__getopt__Long_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_6, (MR_Integer) 1)));
#line 468 "getopt.m"
        mercury__getopt__Defaults_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_6, (MR_Integer) 2)));
#line 469 "getopt.m"
        mercury__getopt__MaybeSpecial_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 470 "getopt.m"
        {
#line 470 "getopt.m"
          mercury__getopt__init_option_table_2_p_0(mercury__getopt__TypeInfo_for_OptionType_26, mercury__getopt__Defaults_13, &mercury__getopt__OptionTable0_15);
        }
#line 468 "getopt.m"
      }
#line 471 "getopt.m"
    else
#line 471 "getopt.m"
      if (((MR_tag((MR_Word) mercury__getopt__OptionOps_6)) == (MR_mktag((MR_Integer) 1))))
#line 472 "getopt.m"
        {
#line 472 "getopt.m"
          MR_Word mercury__getopt__Special_16;
#line 472 "getopt.m"
          MR_Word mercury__getopt__Defaults_22;

#line 472 "getopt.m"
          mercury__getopt__Short_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__OptionOps_6, (MR_Integer) 0)));
#line 472 "getopt.m"
          mercury__getopt__Long_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__OptionOps_6, (MR_Integer) 1)));
#line 472 "getopt.m"
          mercury__getopt__Defaults_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__OptionOps_6, (MR_Integer) 2)));
#line 472 "getopt.m"
          mercury__getopt__Special_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__OptionOps_6, (MR_Integer) 3)));
#line 473 "getopt.m"
          {
#line 473 "getopt.m"
            mercury__getopt__MaybeSpecial_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 473 "getopt.m"
            MR_hl_field(MR_mktag(1), mercury__getopt__MaybeSpecial_14, 0) = ((MR_Box) (mercury__getopt__Special_16));
#line 473 "getopt.m"
          }
#line 474 "getopt.m"
          {
#line 474 "getopt.m"
            mercury__getopt__init_option_table_2_p_0(mercury__getopt__TypeInfo_for_OptionType_26, mercury__getopt__Defaults_22, &mercury__getopt__OptionTable0_15);
          }
#line 472 "getopt.m"
        }
#line 471 "getopt.m"
      else
#line 471 "getopt.m"
        if (((MR_tag((MR_Word) mercury__getopt__OptionOps_6)) == (MR_mktag((MR_Integer) 2))))
#line 476 "getopt.m"
          {
#line 476 "getopt.m"
            MR_Word mercury__getopt__Defaults_23;

#line 476 "getopt.m"
            mercury__getopt__Short_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__OptionOps_6, (MR_Integer) 0)));
#line 476 "getopt.m"
            mercury__getopt__Long_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__OptionOps_6, (MR_Integer) 1)));
#line 476 "getopt.m"
            mercury__getopt__Defaults_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__OptionOps_6, (MR_Integer) 2)));
#line 477 "getopt.m"
            mercury__getopt__MaybeSpecial_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 478 "getopt.m"
            {
#line 478 "getopt.m"
              mercury__getopt__init_option_table_multi_2_p_0(mercury__getopt__TypeInfo_for_OptionType_26, mercury__getopt__Defaults_23, &mercury__getopt__OptionTable0_15);
            }
#line 476 "getopt.m"
          }
#line 471 "getopt.m"
        else
#line 480 "getopt.m"
          {
#line 480 "getopt.m"
            MR_Word mercury__getopt__Defaults_24;
#line 480 "getopt.m"
            MR_Word mercury__getopt__Special_25;

#line 480 "getopt.m"
            mercury__getopt__Short_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionOps_6, (MR_Integer) 0)));
#line 480 "getopt.m"
            mercury__getopt__Long_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionOps_6, (MR_Integer) 1)));
#line 480 "getopt.m"
            mercury__getopt__Defaults_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionOps_6, (MR_Integer) 2)));
#line 480 "getopt.m"
            mercury__getopt__Special_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionOps_6, (MR_Integer) 3)));
#line 481 "getopt.m"
            {
#line 481 "getopt.m"
              mercury__getopt__MaybeSpecial_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 481 "getopt.m"
              MR_hl_field(MR_mktag(1), mercury__getopt__MaybeSpecial_14, 0) = ((MR_Box) (mercury__getopt__Special_25));
#line 481 "getopt.m"
            }
#line 482 "getopt.m"
            {
#line 482 "getopt.m"
              mercury__getopt__init_option_table_multi_2_p_0(mercury__getopt__TypeInfo_for_OptionType_26, mercury__getopt__Defaults_24, &mercury__getopt__OptionTable0_15);
            }
#line 480 "getopt.m"
          }
#line 484 "getopt.m"
    {
#line 484 "getopt.m"
      mercury__getopt__Internal_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 484 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__Internal_17, 0) = ((MR_Box) (mercury__getopt__Short_11));
#line 484 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__Internal_17, 1) = ((MR_Box) (mercury__getopt__Long_12));
#line 484 "getopt.m"
      MR_hl_field(MR_mktag(0), mercury__getopt__Internal_17, 2) = ((MR_Box) (mercury__getopt__MaybeSpecial_14));
#line 484 "getopt.m"
    }
#line 486 "getopt.m"
    mercury__getopt__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 23 "set_ordlist.opt"
    mercury__getopt__V_2_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 22 "set_ordlist.opt"
    mercury__getopt__V_21_21 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 485 "getopt.m"
    {
#line 485 "getopt.m"
      mercury__getopt__process_arguments_9_p_0(mercury__getopt__TypeInfo_for_OptionType_26, mercury__getopt__Args0_7, mercury__getopt__NonOptionArgs_9, mercury__getopt__Internal_17, mercury__getopt__V_20_20, &mercury__getopt__RevOptionArgs_18, mercury__getopt__OptionTable0_15, mercury__getopt__Result_10, mercury__getopt__V_21_21, &mercury__getopt___OptionsSet_19);
    }
#line 13807 "getopt.c"
    mercury__getopt__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__getopt__TypeCtorInfo_27_27, mercury__getopt__RevOptionArgs_18, mercury__getopt__OptionArgs_8);
#line 118 "list.opt"
      return;
    }
#line 466 "getopt.m"
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
#line 463 "getopt.m"
  {
#line 463 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 463 "getopt.m"
    MR_Word mercury__getopt___OptionArgs_9;

#line 463 "getopt.m"
    {
#line 463 "getopt.m"
      mercury__getopt__process_options_se_5_p_0(mercury__getopt__TypeInfo_for_OptionType_10, mercury__getopt__OptionOps_5, mercury__getopt__Args0_6, &mercury__getopt___OptionArgs_9, mercury__getopt__NonOptionArgs_7, mercury__getopt__Result_8);
    }
#line 463 "getopt.m"
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
#line 450 "getopt.m"
  {
#line 450 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 450 "getopt.m"
    MR_Word mercury__getopt__Result0_15;

#line 451 "getopt.m"
    {
#line 451 "getopt.m"
      mercury__getopt__process_options_track_se_7_p_0(mercury__getopt__TypeInfo_for_OptionType_19, mercury__getopt__OptionOps_8, mercury__getopt__Args0_9, mercury__getopt__OptionArgs_10, mercury__getopt__NonOptionArgs_11, mercury__getopt__OptionTable0_12, &mercury__getopt__Result0_15, mercury__getopt__OptionsSet_14);
    }
#line 456 "getopt.m"
    if (((MR_tag((MR_Word) mercury__getopt__Result0_15)) == (MR_mktag((MR_Integer) 1))))
#line 457 "getopt.m"
      {
#line 457 "getopt.m"
        MR_Word mercury__getopt__Error_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__Result0_15, (MR_Integer) 0)));
#line 457 "getopt.m"
        MR_String mercury__getopt__Msg_18;

#line 458 "getopt.m"
        {
#line 458 "getopt.m"
          mercury__getopt__Msg_18 = mercury__getopt__option_error_to_string_1_f_0(mercury__getopt__TypeInfo_for_OptionType_19, mercury__getopt__Error_17);
        }
#line 459 "getopt.m"
        {
#line 459 "getopt.m"
          MR_Word base;
#line 459 "getopt.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 459 "getopt.m"
          *mercury__getopt__Result_13 = base;
#line 459 "getopt.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Msg_18));
#line 459 "getopt.m"
        }
#line 457 "getopt.m"
      }
#line 456 "getopt.m"
    else
#line 454 "getopt.m"
      {
#line 454 "getopt.m"
        MR_Word mercury__getopt__OptionTable_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result0_15, (MR_Integer) 0)));

#line 455 "getopt.m"
        {
#line 455 "getopt.m"
          MR_Word base;
#line 455 "getopt.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 455 "getopt.m"
          *mercury__getopt__Result_13 = base;
#line 455 "getopt.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_16));
#line 455 "getopt.m"
        }
#line 454 "getopt.m"
      }
#line 450 "getopt.m"
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
#line 438 "getopt.m"
  {
#line 438 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 438 "getopt.m"
    MR_Word mercury__getopt__Result0_11;

#line 439 "getopt.m"
    {
#line 439 "getopt.m"
      mercury__getopt__process_options_se_5_p_0(mercury__getopt__TypeInfo_for_OptionType_15, mercury__getopt__OptionOps_6, mercury__getopt__Args0_7, mercury__getopt__OptionArgs_8, mercury__getopt__NonOptionArgs_9, &mercury__getopt__Result0_11);
    }
#line 443 "getopt.m"
    if (((MR_tag((MR_Word) mercury__getopt__Result0_11)) == (MR_mktag((MR_Integer) 1))))
#line 444 "getopt.m"
      {
#line 444 "getopt.m"
        MR_Word mercury__getopt__Error_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__Result0_11, (MR_Integer) 0)));
#line 444 "getopt.m"
        MR_String mercury__getopt__Msg_14;

#line 445 "getopt.m"
        {
#line 445 "getopt.m"
          mercury__getopt__Msg_14 = mercury__getopt__option_error_to_string_1_f_0(mercury__getopt__TypeInfo_for_OptionType_15, mercury__getopt__Error_13);
        }
#line 446 "getopt.m"
        {
#line 446 "getopt.m"
          MR_Word base;
#line 446 "getopt.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 446 "getopt.m"
          *mercury__getopt__Result_10 = base;
#line 446 "getopt.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Msg_14));
#line 446 "getopt.m"
        }
#line 444 "getopt.m"
      }
#line 443 "getopt.m"
    else
#line 441 "getopt.m"
      {
#line 441 "getopt.m"
        MR_Word mercury__getopt__OptionTable_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result0_11, (MR_Integer) 0)));

#line 442 "getopt.m"
        {
#line 442 "getopt.m"
          MR_Word base;
#line 442 "getopt.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 442 "getopt.m"
          *mercury__getopt__Result_10 = base;
#line 442 "getopt.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_12));
#line 442 "getopt.m"
        }
#line 441 "getopt.m"
      }
#line 438 "getopt.m"
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
#line 427 "getopt.m"
  {
#line 427 "getopt.m"
    MR_bool mercury__getopt__succeeded;
#line 427 "getopt.m"
    MR_Word mercury__getopt__Result0_9;
#line 463 "getopt.m"
    MR_Word mercury__getopt___OptionArgs_18;

#line 463 "getopt.m"
    {
#line 463 "getopt.m"
      mercury__getopt__process_options_se_5_p_0(mercury__getopt__TypeInfo_for_OptionType_13, mercury__getopt__OptionOps_5, mercury__getopt__Args0_6, &mercury__getopt___OptionArgs_18, mercury__getopt__NonOptionArgs_7, &mercury__getopt__Result0_9);
    }
#line 432 "getopt.m"
    if (((MR_tag((MR_Word) mercury__getopt__Result0_9)) == (MR_mktag((MR_Integer) 1))))
#line 433 "getopt.m"
      {
#line 433 "getopt.m"
        MR_Word mercury__getopt__Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__Result0_9, (MR_Integer) 0)));
#line 433 "getopt.m"
        MR_String mercury__getopt__Msg_12;

#line 434 "getopt.m"
        {
#line 434 "getopt.m"
          mercury__getopt__Msg_12 = mercury__getopt__option_error_to_string_1_f_0(mercury__getopt__TypeInfo_for_OptionType_13, mercury__getopt__Error_11);
        }
#line 435 "getopt.m"
        {
#line 435 "getopt.m"
          MR_Word base;
#line 435 "getopt.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 435 "getopt.m"
          *mercury__getopt__Result_8 = base;
#line 435 "getopt.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Msg_12));
#line 435 "getopt.m"
        }
#line 433 "getopt.m"
      }
#line 432 "getopt.m"
    else
#line 430 "getopt.m"
      {
#line 430 "getopt.m"
        MR_Word mercury__getopt__OptionTable_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result0_9, (MR_Integer) 0)));

#line 431 "getopt.m"
        {
#line 431 "getopt.m"
          MR_Word base;
#line 431 "getopt.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 431 "getopt.m"
          *mercury__getopt__Result_8 = base;
#line 431 "getopt.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_10));
#line 431 "getopt.m"
        }
#line 430 "getopt.m"
      }
#line 427 "getopt.m"
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
