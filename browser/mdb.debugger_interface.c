/*
** Automatically generated from `debugger_interface.m'
** by the Mercury compiler,
** version 14.01.1, configured for x86_64-apple-darwin13.3.0.
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


/* :- module mdb.debugger_interface. */
/* :- implementation. */

/*
INIT mercury__mdb__debugger_interface__init
ENDINIT
*/

#include "mdb.debugger_interface.mih"
#include "mdb.debugger_interface.mh"


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
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "mdb.interactive_query.mih"
#include "mdb.util.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"




#line 72 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_0;

#line 75 "mdb.debugger_interface.c"
static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0;

#line 78 "mdb.debugger_interface.c"
static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1mdbcomp__prim_data__type_ctor_info_trace_port_0;

#line 81 "mdb.debugger_interface.c"
static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0;

#line 84 "mdb.debugger_interface.c"
static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__list__ti_list_1univ__type_ctor_info_univ_0;

#line 87 "mdb.debugger_interface.c"
static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1list__ti_list_1univ__type_ctor_info_univ_0;

#line 90 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_1[12];

#line 93 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_1;

#line 96 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_2;

#line 99 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_3;

#line 102 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_4;

#line 105 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_5[1];

#line 108 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_5;

#line 111 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_6;

#line 114 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_7;

#line 117 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_8;

#line 120 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_9;

#line 123 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_10;

#line 126 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_11;

#line 129 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_12[1];

#line 132 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_12;

#line 135 "mdb.debugger_interface.c"
static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0;

#line 138 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_13[1];

#line 141 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_13;

#line 144 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_14[1];

#line 147 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_14;

#line 150 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_15[1];

#line 153 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_15;

#line 156 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_16[1];

#line 159 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_16;

#line 162 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_17[1];

#line 165 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_17;

#line 168 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_18[1];

#line 171 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_18;

#line 174 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_19;

#line 177 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_20;

#line 180 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_21;

#line 183 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_22;

#line 186 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_0[14];

#line 189 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_1[1];

#line 192 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_2[1];

#line 195 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_3[7];

#line 198 "mdb.debugger_interface.c"
static const MR_DuPtagLayout mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_debugger_request_0[4];

#line 201 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_debugger_request_0[23];

#line 204 "mdb.debugger_interface.c"
static const MR_Integer mdb__debugger_interface__mdb__debugger_interface__functor_number_map_debugger_request_0[23];

#line 207 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_0;

#line 210 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_1;

#line 213 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_2;

#line 216 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_3;

#line 219 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_4[13];

#line 222 "mdb.debugger_interface.c"
static const MR_DuArgLocn mdb__debugger_interface__mdb__debugger_interface__field_locns_debugger_response_0_4[13];

#line 225 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_4;

#line 228 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_5[13];

#line 231 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_5;

#line 234 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_6[2];

#line 237 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_6;

#line 240 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_7[1];

#line 243 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_7;

#line 246 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_8[2];

#line 249 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_8;

#line 252 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_9;

#line 255 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_10;

#line 258 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_11;

#line 261 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_12;

#line 264 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_13[1];

#line 267 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_13;

#line 270 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_14[1];

#line 273 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_14;

#line 276 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_15[5];

#line 279 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_15;

#line 282 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_16[4];

#line 285 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_16;

#line 288 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_17[1];

#line 291 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_17;

#line 294 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_18[3];

#line 297 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_18;

#line 300 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_19;

#line 303 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_20;

#line 306 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_21[1];

#line 309 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_21;

#line 312 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_22;

#line 315 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_23[3];

#line 318 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_23;

#line 321 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_24;

#line 324 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_25;

#line 327 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_26;

#line 330 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_27;

#line 333 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_28[1];

#line 336 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_28;

#line 339 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_29;

#line 342 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_30;

#line 345 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_31;

#line 348 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_32;

#line 351 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_0[19];

#line 354 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_1[1];

#line 357 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_2[1];

#line 360 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_3[12];

#line 363 "mdb.debugger_interface.c"
static const MR_DuPtagLayout mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_debugger_response_0[4];

#line 366 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_debugger_response_0[33];

#line 369 "mdb.debugger_interface.c"
static const MR_Integer mdb__debugger_interface__mdb__debugger_interface__functor_number_map_debugger_response_0[33];

#line 372 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_0;

#line 375 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_1[1];

#line 378 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_1;

#line 381 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_2[1];

#line 384 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_2;

#line 387 "mdb.debugger_interface.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__debugger_interface__list__pti_list_1__pseudo_1;

#line 390 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_3[1];

#line 393 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_3;

#line 396 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_4[2];

#line 399 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_4;

#line 402 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_0[1];

#line 405 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_1[1];

#line 408 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_2[1];

#line 411 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_3[2];

#line 414 "mdb.debugger_interface.c"
static const MR_DuPtagLayout mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_match_1[4];

#line 417 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_match_1[5];

#line 420 "mdb.debugger_interface.c"
static const MR_Integer mdb__debugger_interface__mdb__debugger_interface__functor_number_map_match_1[5];

#line 423 "mdb.debugger_interface.c"
static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0;

#line 426 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_pred_match_0_0[2];

#line 429 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_0;

#line 432 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_pred_match_0_1[2];

#line 435 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_1;

#line 438 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_2;

#line 441 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_0[1];

#line 444 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_1[1];

#line 447 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_2[1];

#line 450 "mdb.debugger_interface.c"
static const MR_DuPtagLayout mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_pred_match_0[3];

#line 453 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_pred_match_0[3];

#line 456 "mdb.debugger_interface.c"
static const MR_Integer mdb__debugger_interface__mdb__debugger_interface__functor_number_map_pred_match_0[3];

#line 459 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____arity_0_0_10001(
#line 462 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 464 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2);

#line 467 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____arity_0_0_10001(
#line 470 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
#line 472 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 474 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3);

#line 477 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____call_number_0_0_10001(
#line 480 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 482 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2);

#line 485 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____call_number_0_0_10001(
#line 488 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
#line 490 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 492 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3);

#line 495 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_request_0_0_10001(
#line 498 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 500 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2);

#line 503 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____debugger_request_0_0_10001(
#line 506 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
#line 508 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 510 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3);

#line 513 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_response_0_0_10001(
#line 516 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 518 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2);

#line 521 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____debugger_response_0_0_10001(
#line 524 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
#line 526 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 528 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3);

#line 531 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____depth_number_0_0_10001(
#line 534 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 536 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2);

#line 539 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____depth_number_0_0_10001(
#line 542 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
#line 544 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 546 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3);

#line 549 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____determinism_0_0_10001(
#line 552 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 554 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2);

#line 557 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____determinism_0_0_10001(
#line 560 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
#line 562 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 564 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3);

#line 567 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____event_number_0_0_10001(
#line 570 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 572 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2);

#line 575 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____event_number_0_0_10001(
#line 578 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
#line 580 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 582 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3);

#line 585 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____match_1_0_10001(
#line 588 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 590 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 592 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3);

#line 595 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____match_1_0_10001(
#line 598 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 600 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_2,
#line 602 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3,
#line 604 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_4);

#line 607 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____pred_match_0_0_10001(
#line 610 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 612 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2);

#line 615 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____pred_match_0_0_10001(
#line 618 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
#line 620 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 622 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3);

#line 68 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Compare____pred_match_0_0(
#line 68 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
#line 68 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__2_2,
#line 68 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__3_3);

#line 68 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____pred_match_0_0(
#line 68 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__1_1,
#line 68 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__2_2);

#line 195 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Compare____match_1_0(
#line 195 "debugger_interface.m"
  MR_Word mdb__debugger_interface__TypeInfo_for_T_57,
#line 195 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
#line 195 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__2_2,
#line 195 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__3_3);

#line 195 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____match_1_0(
#line 195 "debugger_interface.m"
  MR_Word mdb__debugger_interface__TypeInfo_for_T_17,
#line 195 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__1_1,
#line 195 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__2_2);

#line 188 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Compare____event_number_0_0(
#line 188 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
#line 188 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__2_2,
#line 188 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__3_3);

#line 188 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____event_number_0_0(
#line 188 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__1_1,
#line 188 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__2_2);

#line 59 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Compare____determinism_0_0(
#line 59 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
#line 59 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__2_2,
#line 59 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__3_3);

#line 59 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____determinism_0_0(
#line 59 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__1_1,
#line 59 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__2_2);

#line 190 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Compare____depth_number_0_0(
#line 190 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
#line 190 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__2_2,
#line 190 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__3_3);

#line 190 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____depth_number_0_0(
#line 190 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__1_1,
#line 190 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__2_2);

#line 204 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Compare____debugger_response_0_0(
#line 204 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
#line 204 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__2_2,
#line 204 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__3_3);

#line 204 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Index____debugger_response_0_0(
#line 204 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__1_1,
#line 204 "debugger_interface.m"
  MR_Integer * mdb__debugger_interface__HeadVar__2_2);

#line 204 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_response_0_0(
#line 204 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__1_1,
#line 204 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__2_2);

#line 88 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Compare____debugger_request_0_0(
#line 88 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
#line 88 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__2_2,
#line 88 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__3_3);

#line 88 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Index____debugger_request_0_0(
#line 88 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__1_1,
#line 88 "debugger_interface.m"
  MR_Integer * mdb__debugger_interface__HeadVar__2_2);

#line 88 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_request_0_0(
#line 88 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__1_1,
#line 88 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__2_2);

#line 189 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Compare____call_number_0_0(
#line 189 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
#line 189 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__2_2,
#line 189 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__3_3);

#line 189 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____call_number_0_0(
#line 189 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__1_1,
#line 189 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__2_2);

#line 57 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Compare____arity_0_0(
#line 57 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
#line 57 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__2_2,
#line 57 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__3_3);

#line 57 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____arity_0_0(
#line 57 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__1_1,
#line 57 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__2_2);

#line 643 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__get_variable_name_2_p_0(
#line 643 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_3,
#line 643 "debugger_interface.m"
  MR_String * mdb__debugger_interface__Options_4);

#line 632 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__init_mercury_string_1_p_0(
#line 632 "debugger_interface.m"
  MR_String * mdb__debugger_interface__HeadVar__1_1);

#line 619 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__get_object_file_name_2_p_0(
#line 619 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_3,
#line 619 "debugger_interface.m"
  MR_String * mdb__debugger_interface__ObjectFileName_4);

#line 602 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__get_mmc_options_2_p_0(
#line 602 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_3,
#line 602 "debugger_interface.m"
  MR_String * mdb__debugger_interface__Options_4);

#line 582 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__get_list_modules_to_import_3_p_0(
#line 582 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_4,
#line 582 "debugger_interface.m"
  MR_Integer * mdb__debugger_interface__ListLength_5,
#line 582 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__ModulesList_6);

#line 551 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__read_request_from_socket_5_p_0(
#line 551 "debugger_interface.m"
  MR_Word mdb__debugger_interface__SocketStream_6,
#line 551 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__Request_7,
#line 551 "debugger_interface.m"
  MR_Integer * mdb__debugger_interface__RequestType_8);

#line 506 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface__found_match_comp_14_p_0(
#line 506 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__EventNumber_15,
#line 506 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__CallNumber_16,
#line 506 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__DepthNumber_17,
#line 506 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Port_18,
#line 506 "debugger_interface.m"
  MR_String mdb__debugger_interface__NameType_19,
#line 506 "debugger_interface.m"
  MR_String mdb__debugger_interface__ModuleType_20,
#line 506 "debugger_interface.m"
  MR_String mdb__debugger_interface__DefModuleName_21,
#line 506 "debugger_interface.m"
  MR_String mdb__debugger_interface__PredName_22,
#line 506 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Arity_23,
#line 506 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__ModeNum_24,
#line 506 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Determinism_25,
#line 506 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Args_26,
#line 506 "debugger_interface.m"
  MR_String mdb__debugger_interface__Path_27,
#line 506 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_28);

#line 489 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface__match_2_p_0(
#line 489 "debugger_interface.m"
  MR_Word mdb__debugger_interface__TypeInfo_for_T_14,
#line 489 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__1_1,
#line 489 "debugger_interface.m"
  MR_Box mdb__debugger_interface__HeadVar__2_2);

#line 444 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface__found_match_user_14_p_0(
#line 444 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__EventNumber_15,
#line 444 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__CallNumber_16,
#line 444 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__DepthNumber_17,
#line 444 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Port_18,
#line 444 "debugger_interface.m"
  MR_Word mdb__debugger_interface__PredOrFunc_19,
#line 444 "debugger_interface.m"
  MR_String mdb__debugger_interface__DeclModuleName_20,
#line 444 "debugger_interface.m"
  MR_String mdb__debugger_interface__DefModuleName_21,
#line 444 "debugger_interface.m"
  MR_String mdb__debugger_interface__PredName_22,
#line 444 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Arity_23,
#line 444 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__ModeNum_24,
#line 444 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Determinism_25,
#line 444 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Args_26,
#line 444 "debugger_interface.m"
  MR_String mdb__debugger_interface__Path_27,
#line 444 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_28);

#line 429 "debugger_interface.m"
static MR_Integer MR_CALL 
mdb__debugger_interface__get_var_number_1_f_0(
#line 429 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_3);

#line 410 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__output_current_live_var_names_5_p_0(
#line 410 "debugger_interface.m"
  MR_Word mdb__debugger_interface__LiveVarNameList_6,
#line 410 "debugger_interface.m"
  MR_Word mdb__debugger_interface__LiveVarTypeList_7,
#line 410 "debugger_interface.m"
  MR_Word mdb__debugger_interface__OutputStream_8);

#line 397 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__output_current_nth_var_4_p_0(
#line 397 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Var_5,
#line 397 "debugger_interface.m"
  MR_Word mdb__debugger_interface__OutputStream_6);

#line 382 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__output_current_vars_5_p_0(
#line 382 "debugger_interface.m"
  MR_Word mdb__debugger_interface__VarList_6,
#line 382 "debugger_interface.m"
  MR_Word mdb__debugger_interface__StringList_7,
#line 382 "debugger_interface.m"
  MR_Word mdb__debugger_interface__OutputStream_8);

#line 358 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__output_current_slots_comp_16_p_0(
#line 358 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__EventNumber_17,
#line 358 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__CallNumber_18,
#line 358 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__DepthNumber_19,
#line 358 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Port_20,
#line 358 "debugger_interface.m"
  MR_String mdb__debugger_interface__NameType_21,
#line 358 "debugger_interface.m"
  MR_String mdb__debugger_interface__ModuleType_22,
#line 358 "debugger_interface.m"
  MR_String mdb__debugger_interface__DefModuleName_23,
#line 358 "debugger_interface.m"
  MR_String mdb__debugger_interface__PredName_24,
#line 358 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Arity_25,
#line 358 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__ModeNum_26,
#line 358 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Determinism_27,
#line 358 "debugger_interface.m"
  MR_String mdb__debugger_interface__Path_28,
#line 358 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__LineNo_29,
#line 358 "debugger_interface.m"
  MR_Word mdb__debugger_interface__OutputStream_30);

#line 332 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__output_current_slots_user_16_p_0(
#line 332 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__EventNumber_17,
#line 332 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__CallNumber_18,
#line 332 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__DepthNumber_19,
#line 332 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Port_20,
#line 332 "debugger_interface.m"
  MR_Word mdb__debugger_interface__PredOrFunc_21,
#line 332 "debugger_interface.m"
  MR_String mdb__debugger_interface__DeclModuleName_22,
#line 332 "debugger_interface.m"
  MR_String mdb__debugger_interface__DefModuleName_23,
#line 332 "debugger_interface.m"
  MR_String mdb__debugger_interface__PredName_24,
#line 332 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Arity_25,
#line 332 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__ModeNum_26,
#line 332 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Determinism_27,
#line 332 "debugger_interface.m"
  MR_String mdb__debugger_interface__Path_28,
#line 332 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__LineNo_29,
#line 332 "debugger_interface.m"
  MR_Word mdb__debugger_interface__OutputStream_30);


static /* final */ const MR_Box mdb__debugger_interface_scalar_common_1[8][2];




static /* final */ const MR_Box mdb__debugger_interface_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1)),
    ((MR_Box) (&mdb__debugger_interface_scalar_common_1[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "end of file"))
  },
};



#include "mdb.debugger_interface.mh"
#include "mdb.mh"
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

#line 644 "debugger_interface.m"
void 
ML_DI_get_variable_name(
#line 644 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_3,
#line 644 "debugger_interface.m"
  MR_String * mdb__debugger_interface__Options_4)
#line 644 "debugger_interface.m"
{
#line 644 "debugger_interface.m"
	mdb__debugger_interface__get_variable_name_2_p_0((MR_Word) mdb__debugger_interface__DebuggerRequest_3, (MR_String *) mdb__debugger_interface__Options_4);
}

#line 633 "debugger_interface.m"
void 
ML_DI_init_mercury_string(
#line 633 "debugger_interface.m"
  MR_String * mdb__debugger_interface__HeadVar__1_1)
#line 633 "debugger_interface.m"
{
#line 633 "debugger_interface.m"
	mdb__debugger_interface__init_mercury_string_1_p_0((MR_String *) mdb__debugger_interface__HeadVar__1_1);
}

#line 620 "debugger_interface.m"
void 
ML_DI_get_object_file_name(
#line 620 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_3,
#line 620 "debugger_interface.m"
  MR_String * mdb__debugger_interface__ObjectFileName_4)
#line 620 "debugger_interface.m"
{
#line 620 "debugger_interface.m"
	mdb__debugger_interface__get_object_file_name_2_p_0((MR_Word) mdb__debugger_interface__DebuggerRequest_3, (MR_String *) mdb__debugger_interface__ObjectFileName_4);
}

#line 603 "debugger_interface.m"
void 
ML_DI_get_mmc_options(
#line 603 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_3,
#line 603 "debugger_interface.m"
  MR_String * mdb__debugger_interface__Options_4)
#line 603 "debugger_interface.m"
{
#line 603 "debugger_interface.m"
	mdb__debugger_interface__get_mmc_options_2_p_0((MR_Word) mdb__debugger_interface__DebuggerRequest_3, (MR_String *) mdb__debugger_interface__Options_4);
}

#line 585 "debugger_interface.m"
void 
ML_DI_get_list_modules_to_import(
#line 585 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_4,
#line 585 "debugger_interface.m"
  MR_Integer * mdb__debugger_interface__ListLength_5,
#line 585 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__ModulesList_6)
#line 585 "debugger_interface.m"
{
#line 585 "debugger_interface.m"
	mdb__debugger_interface__get_list_modules_to_import_3_p_0((MR_Word) mdb__debugger_interface__DebuggerRequest_4, (MR_Integer *) mdb__debugger_interface__ListLength_5, (MR_Word *) mdb__debugger_interface__ModulesList_6);
}

#line 554 "debugger_interface.m"
void 
ML_DI_read_request_from_socket(
#line 554 "debugger_interface.m"
  MR_Word mdb__debugger_interface__SocketStream_6,
#line 554 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__Request_7,
#line 554 "debugger_interface.m"
  MR_Integer * mdb__debugger_interface__RequestType_8)
#line 554 "debugger_interface.m"
{
#line 554 "debugger_interface.m"
	mdb__debugger_interface__read_request_from_socket_5_p_0((MR_Word) mdb__debugger_interface__SocketStream_6, (MR_Word *) mdb__debugger_interface__Request_7, (MR_Integer *) mdb__debugger_interface__RequestType_8);
}

#line 502 "debugger_interface.m"
MR_bool 
ML_DI_found_match_comp(
#line 502 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__EventNumber_15,
#line 502 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__CallNumber_16,
#line 502 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__DepthNumber_17,
#line 502 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Port_18,
#line 502 "debugger_interface.m"
  MR_String mdb__debugger_interface__NameType_19,
#line 502 "debugger_interface.m"
  MR_String mdb__debugger_interface__ModuleType_20,
#line 502 "debugger_interface.m"
  MR_String mdb__debugger_interface__DefModuleName_21,
#line 502 "debugger_interface.m"
  MR_String mdb__debugger_interface__PredName_22,
#line 502 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Arity_23,
#line 502 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__ModeNum_24,
#line 502 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Determinism_25,
#line 502 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Args_26,
#line 502 "debugger_interface.m"
  MR_String mdb__debugger_interface__Path_27,
#line 502 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_28)
#line 502 "debugger_interface.m"
{
#line 502 "debugger_interface.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__debugger_interface__found_match_comp_14_p_0((MR_Integer) mdb__debugger_interface__EventNumber_15, (MR_Integer) mdb__debugger_interface__CallNumber_16, (MR_Integer) mdb__debugger_interface__DepthNumber_17, (MR_Word) mdb__debugger_interface__Port_18, (MR_String) mdb__debugger_interface__NameType_19, (MR_String) mdb__debugger_interface__ModuleType_20, (MR_String) mdb__debugger_interface__DefModuleName_21, (MR_String) mdb__debugger_interface__PredName_22, (MR_Integer) mdb__debugger_interface__Arity_23, (MR_Integer) mdb__debugger_interface__ModeNum_24, (MR_Integer) mdb__debugger_interface__Determinism_25, (MR_Word) mdb__debugger_interface__Args_26, (MR_String) mdb__debugger_interface__Path_27, (MR_Word) mdb__debugger_interface__DebuggerRequest_28);
	return ret_value;
}

#line 440 "debugger_interface.m"
MR_bool 
ML_DI_found_match_user(
#line 440 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__EventNumber_15,
#line 440 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__CallNumber_16,
#line 440 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__DepthNumber_17,
#line 440 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Port_18,
#line 440 "debugger_interface.m"
  MR_Word mdb__debugger_interface__PredOrFunc_19,
#line 440 "debugger_interface.m"
  MR_String mdb__debugger_interface__DeclModuleName_20,
#line 440 "debugger_interface.m"
  MR_String mdb__debugger_interface__DefModuleName_21,
#line 440 "debugger_interface.m"
  MR_String mdb__debugger_interface__PredName_22,
#line 440 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Arity_23,
#line 440 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__ModeNum_24,
#line 440 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Determinism_25,
#line 440 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Args_26,
#line 440 "debugger_interface.m"
  MR_String mdb__debugger_interface__Path_27,
#line 440 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_28)
#line 440 "debugger_interface.m"
{
#line 440 "debugger_interface.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__debugger_interface__found_match_user_14_p_0((MR_Integer) mdb__debugger_interface__EventNumber_15, (MR_Integer) mdb__debugger_interface__CallNumber_16, (MR_Integer) mdb__debugger_interface__DepthNumber_17, (MR_Word) mdb__debugger_interface__Port_18, (MR_Word) mdb__debugger_interface__PredOrFunc_19, (MR_String) mdb__debugger_interface__DeclModuleName_20, (MR_String) mdb__debugger_interface__DefModuleName_21, (MR_String) mdb__debugger_interface__PredName_22, (MR_Integer) mdb__debugger_interface__Arity_23, (MR_Integer) mdb__debugger_interface__ModeNum_24, (MR_Integer) mdb__debugger_interface__Determinism_25, (MR_Word) mdb__debugger_interface__Args_26, (MR_String) mdb__debugger_interface__Path_27, (MR_Word) mdb__debugger_interface__DebuggerRequest_28);
	return ret_value;
}

#line 423 "debugger_interface.m"
MR_Integer 
ML_DI_get_var_number(
#line 423 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_3)
#line 423 "debugger_interface.m"
{
#line 423 "debugger_interface.m"
	MR_Integer ret_value;
	ret_value = (MR_Integer)mdb__debugger_interface__get_var_number_1_f_0((MR_Word) mdb__debugger_interface__DebuggerRequest_3);
	return ret_value;
}

#line 406 "debugger_interface.m"
void 
ML_DI_output_current_live_var_names(
#line 406 "debugger_interface.m"
  MR_Word mdb__debugger_interface__LiveVarNameList_6,
#line 406 "debugger_interface.m"
  MR_Word mdb__debugger_interface__LiveVarTypeList_7,
#line 406 "debugger_interface.m"
  MR_Word mdb__debugger_interface__OutputStream_8)
#line 406 "debugger_interface.m"
{
#line 406 "debugger_interface.m"
	mdb__debugger_interface__output_current_live_var_names_5_p_0((MR_Word) mdb__debugger_interface__LiveVarNameList_6, (MR_Word) mdb__debugger_interface__LiveVarTypeList_7, (MR_Word) mdb__debugger_interface__OutputStream_8);
}

#line 394 "debugger_interface.m"
void 
ML_DI_output_current_nth_var(
#line 394 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Var_5,
#line 394 "debugger_interface.m"
  MR_Word mdb__debugger_interface__OutputStream_6)
#line 394 "debugger_interface.m"
{
#line 394 "debugger_interface.m"
	mdb__debugger_interface__output_current_nth_var_4_p_0((MR_Word) mdb__debugger_interface__Var_5, (MR_Word) mdb__debugger_interface__OutputStream_6);
}

#line 379 "debugger_interface.m"
void 
ML_DI_output_current_vars(
#line 379 "debugger_interface.m"
  MR_Word mdb__debugger_interface__VarList_6,
#line 379 "debugger_interface.m"
  MR_Word mdb__debugger_interface__StringList_7,
#line 379 "debugger_interface.m"
  MR_Word mdb__debugger_interface__OutputStream_8)
#line 379 "debugger_interface.m"
{
#line 379 "debugger_interface.m"
	mdb__debugger_interface__output_current_vars_5_p_0((MR_Word) mdb__debugger_interface__VarList_6, (MR_Word) mdb__debugger_interface__StringList_7, (MR_Word) mdb__debugger_interface__OutputStream_8);
}

#line 353 "debugger_interface.m"
void 
ML_DI_output_current_slots_comp(
#line 353 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__EventNumber_17,
#line 353 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__CallNumber_18,
#line 353 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__DepthNumber_19,
#line 353 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Port_20,
#line 353 "debugger_interface.m"
  MR_String mdb__debugger_interface__NameType_21,
#line 353 "debugger_interface.m"
  MR_String mdb__debugger_interface__ModuleType_22,
#line 353 "debugger_interface.m"
  MR_String mdb__debugger_interface__DefModuleName_23,
#line 353 "debugger_interface.m"
  MR_String mdb__debugger_interface__PredName_24,
#line 353 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Arity_25,
#line 353 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__ModeNum_26,
#line 353 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Determinism_27,
#line 353 "debugger_interface.m"
  MR_String mdb__debugger_interface__Path_28,
#line 353 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__LineNo_29,
#line 353 "debugger_interface.m"
  MR_Word mdb__debugger_interface__OutputStream_30)
#line 353 "debugger_interface.m"
{
#line 353 "debugger_interface.m"
	mdb__debugger_interface__output_current_slots_comp_16_p_0((MR_Integer) mdb__debugger_interface__EventNumber_17, (MR_Integer) mdb__debugger_interface__CallNumber_18, (MR_Integer) mdb__debugger_interface__DepthNumber_19, (MR_Word) mdb__debugger_interface__Port_20, (MR_String) mdb__debugger_interface__NameType_21, (MR_String) mdb__debugger_interface__ModuleType_22, (MR_String) mdb__debugger_interface__DefModuleName_23, (MR_String) mdb__debugger_interface__PredName_24, (MR_Integer) mdb__debugger_interface__Arity_25, (MR_Integer) mdb__debugger_interface__ModeNum_26, (MR_Integer) mdb__debugger_interface__Determinism_27, (MR_String) mdb__debugger_interface__Path_28, (MR_Integer) mdb__debugger_interface__LineNo_29, (MR_Word) mdb__debugger_interface__OutputStream_30);
}

#line 327 "debugger_interface.m"
void 
ML_DI_output_current_slots_user(
#line 327 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__EventNumber_17,
#line 327 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__CallNumber_18,
#line 327 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__DepthNumber_19,
#line 327 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Port_20,
#line 327 "debugger_interface.m"
  MR_Word mdb__debugger_interface__PredOrFunc_21,
#line 327 "debugger_interface.m"
  MR_String mdb__debugger_interface__DeclModuleName_22,
#line 327 "debugger_interface.m"
  MR_String mdb__debugger_interface__DefModuleName_23,
#line 327 "debugger_interface.m"
  MR_String mdb__debugger_interface__PredName_24,
#line 327 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Arity_25,
#line 327 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__ModeNum_26,
#line 327 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Determinism_27,
#line 327 "debugger_interface.m"
  MR_String mdb__debugger_interface__Path_28,
#line 327 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__LineNo_29,
#line 327 "debugger_interface.m"
  MR_Word mdb__debugger_interface__OutputStream_30)
#line 327 "debugger_interface.m"
{
#line 327 "debugger_interface.m"
	mdb__debugger_interface__output_current_slots_user_16_p_0((MR_Integer) mdb__debugger_interface__EventNumber_17, (MR_Integer) mdb__debugger_interface__CallNumber_18, (MR_Integer) mdb__debugger_interface__DepthNumber_19, (MR_Word) mdb__debugger_interface__Port_20, (MR_Word) mdb__debugger_interface__PredOrFunc_21, (MR_String) mdb__debugger_interface__DeclModuleName_22, (MR_String) mdb__debugger_interface__DefModuleName_23, (MR_String) mdb__debugger_interface__PredName_24, (MR_Integer) mdb__debugger_interface__Arity_25, (MR_Integer) mdb__debugger_interface__ModeNum_26, (MR_Integer) mdb__debugger_interface__Determinism_27, (MR_String) mdb__debugger_interface__Path_28, (MR_Integer) mdb__debugger_interface__LineNo_29, (MR_Word) mdb__debugger_interface__OutputStream_30);
}


#line 1382 "mdb.debugger_interface.c"
const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_arity_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__debugger_interface____Unify____arity_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____arity_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "arity",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1403 "mdb.debugger_interface.c"
const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_call_number_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__debugger_interface____Unify____call_number_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____call_number_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "call_number",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1424 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_0 = {
  (MR_String) "hello_reply",
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

#line 1439 "mdb.debugger_interface.c"
static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0 = {
  &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1447 "mdb.debugger_interface.c"
static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1mdbcomp__prim_data__type_ctor_info_trace_port_0 = {
  &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0
  }
};

#line 1455 "mdb.debugger_interface.c"
static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0 = {
  &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1463 "mdb.debugger_interface.c"
static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__list__ti_list_1univ__type_ctor_info_univ_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
  }
};

#line 1471 "mdb.debugger_interface.c"
static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1list__ti_list_1univ__type_ctor_info_univ_0 = {
  &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1,
  {
    (MR_TypeInfo) &mdb__debugger_interface__list__ti_list_1univ__type_ctor_info_univ_0
  }
};

#line 1479 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_1[12] = {
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1mdbcomp__prim_data__type_ctor_info_trace_port_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_pred_match_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1list__ti_list_1univ__type_ctor_info_univ_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0
};

#line 1495 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_1 = {
  (MR_String) "forward_move",
  (MR_Integer) 12,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_1,
  NULL,
  NULL,
  NULL
};

#line 1510 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_2 = {
  (MR_String) "current_slots",
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

#line 1525 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_3 = {
  (MR_String) "current_vars",
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

#line 1540 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_4 = {
  (MR_String) "current_live_var_names",
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

#line 1555 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1560 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_5 = {
  (MR_String) "current_nth_var",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 5,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_5,
  NULL,
  NULL,
  NULL
};

#line 1575 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_6 = {
  (MR_String) "abort_prog",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 6,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1590 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_7 = {
  (MR_String) "no_trace",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 7,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1605 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_8 = {
  (MR_String) "retry",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 8,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1620 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_9 = {
  (MR_String) "stack",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 9,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1635 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_10 = {
  (MR_String) "nondet_stack",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 10,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1650 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_11 = {
  (MR_String) "stack_regs",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 9,
  (MR_Integer) 11,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1665 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_12[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1670 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_12 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 12,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_12,
  NULL,
  NULL,
  NULL
};

#line 1685 "mdb.debugger_interface.c"
static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1693 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_13[1] = {
  (MR_PseudoTypeInfo) &mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 1698 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_13 = {
  (MR_String) "query",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 13,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_13,
  NULL,
  NULL,
  NULL
};

#line 1713 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_14[1] = {
  (MR_PseudoTypeInfo) &mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 1718 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_14 = {
  (MR_String) "cc_query",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 14,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_14,
  NULL,
  NULL,
  NULL
};

#line 1733 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_15[1] = {
  (MR_PseudoTypeInfo) &mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 1738 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_15 = {
  (MR_String) "io_query",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 15,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_15,
  NULL,
  NULL,
  NULL
};

#line 1753 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_16[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1758 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_16 = {
  (MR_String) "mmc_options",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 16,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_16,
  NULL,
  NULL,
  NULL
};

#line 1773 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_17[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1778 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_17 = {
  (MR_String) "browse",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 17,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_17,
  NULL,
  NULL,
  NULL
};

#line 1793 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_18[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1798 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_18 = {
  (MR_String) "link_collect",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 18,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_18,
  NULL,
  NULL,
  NULL
};

#line 1813 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_19 = {
  (MR_String) "collect",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 10,
  (MR_Integer) 19,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1828 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_20 = {
  (MR_String) "current_grade",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 11,
  (MR_Integer) 20,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1843 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_21 = {
  (MR_String) "collect_arg_on",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 12,
  (MR_Integer) 21,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1858 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_22 = {
  (MR_String) "collect_arg_off",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 13,
  (MR_Integer) 22,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1873 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_0[14] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_0,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_2,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_3,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_4,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_6,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_7,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_8,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_9,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_10,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_11,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_19,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_20,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_21,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_22
};

#line 1891 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_1[1] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_1
};

#line 1896 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_2[1] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_5
};

#line 1901 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_3[7] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_12,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_13,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_14,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_15,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_16,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_17,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_18
};

#line 1912 "mdb.debugger_interface.c"
static const MR_DuPtagLayout mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_debugger_request_0[4] = {
  {
    (MR_Integer) 14,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_2
  },
  {
    (MR_Integer) 7,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_3
  }
};

#line 1936 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_debugger_request_0[23] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_6,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_17,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_14,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_19,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_22,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_21,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_20,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_4,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_5,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_2,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_3,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_12,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_1,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_0,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_15,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_18,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_16,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_7,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_10,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_13,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_8,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_9,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_11
};

#line 1963 "mdb.debugger_interface.c"
static const MR_Integer mdb__debugger_interface__mdb__debugger_interface__functor_number_map_debugger_request_0[23] = {
  (MR_Integer) 13,
  (MR_Integer) 12,
  (MR_Integer) 9,
  (MR_Integer) 10,
  (MR_Integer) 7,
  (MR_Integer) 8,
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 20,
  (MR_Integer) 21,
  (MR_Integer) 18,
  (MR_Integer) 22,
  (MR_Integer) 11,
  (MR_Integer) 19,
  (MR_Integer) 2,
  (MR_Integer) 14,
  (MR_Integer) 16,
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 4
};

#line 1990 "mdb.debugger_interface.c"
const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_request_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__debugger_interface____Unify____debugger_request_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____debugger_request_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "debugger_request",
  {
    mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_debugger_request_0
  },
  {
    mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_debugger_request_0
  },
  (MR_Integer) 23,
  (MR_Integer) 4,
  mdb__debugger_interface__mdb__debugger_interface__functor_number_map_debugger_request_0
};

#line 2011 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_0 = {
  (MR_String) "hello",
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

#line 2026 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_1 = {
  (MR_String) "start",
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

#line 2041 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_2 = {
  (MR_String) "forward_move_match_found",
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

#line 2056 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_3 = {
  (MR_String) "forward_move_match_not_found",
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

#line 2071 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_4[13] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2088 "mdb.debugger_interface.c"
static const MR_DuArgLocn mdb__debugger_interface__mdb__debugger_interface__field_locns_debugger_response_0_4[13] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 4
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

#line 2157 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_4 = {
  (MR_String) "current_slots_user",
  (MR_Integer) 13,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 4,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_4,
  NULL,
  mdb__debugger_interface__mdb__debugger_interface__field_locns_debugger_response_0_4,
  NULL
};

#line 2172 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_5[13] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2189 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_5 = {
  (MR_String) "current_slots_comp",
  (MR_Integer) 13,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 5,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_5,
  NULL,
  NULL,
  NULL
};

#line 2204 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_6[2] = {
  (MR_PseudoTypeInfo) &mdb__debugger_interface__list__ti_list_1univ__type_ctor_info_univ_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 2210 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_6 = {
  (MR_String) "current_vars",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 6,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_6,
  NULL,
  NULL,
  NULL
};

#line 2225 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
};

#line 2230 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_7 = {
  (MR_String) "current_nth_var",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 7,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_7,
  NULL,
  NULL,
  NULL
};

#line 2245 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_8[2] = {
  (MR_PseudoTypeInfo) &mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 2251 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_8 = {
  (MR_String) "current_live_var_names",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 8,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_8,
  NULL,
  NULL,
  NULL
};

#line 2266 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_9 = {
  (MR_String) "last_event",
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

#line 2281 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_10 = {
  (MR_String) "browser_end",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 10,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2296 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_11 = {
  (MR_String) "mmc_option_ok",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 11,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2311 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_12 = {
  (MR_String) "ok",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 12,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2326 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_13[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2331 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_13 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 13,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_13,
  NULL,
  NULL,
  NULL
};

#line 2346 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_14[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2351 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_14 = {
  (MR_String) "level",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 14,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_14,
  NULL,
  NULL,
  NULL
};

#line 2366 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_15[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2375 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_15 = {
  (MR_String) "proc",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 15,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_15,
  NULL,
  NULL,
  NULL
};

#line 2390 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_16[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2398 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_16 = {
  (MR_String) "proc",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 16,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_16,
  NULL,
  NULL,
  NULL
};

#line 2413 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_17[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2418 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_17 = {
  (MR_String) "def_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 17,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_17,
  NULL,
  NULL,
  NULL
};

#line 2433 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_18[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2440 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_18 = {
  (MR_String) "detail",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 8,
  (MR_Integer) 18,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_18,
  NULL,
  NULL,
  NULL
};

#line 2455 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_19 = {
  (MR_String) "pred",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 19,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2470 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_20 = {
  (MR_String) "func",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 9,
  (MR_Integer) 20,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2485 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_21[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2490 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_21 = {
  (MR_String) "det",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 9,
  (MR_Integer) 21,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_21,
  NULL,
  NULL,
  NULL
};

#line 2505 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_22 = {
  (MR_String) "end_stack",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 10,
  (MR_Integer) 22,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2520 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_23[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2527 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_23 = {
  (MR_String) "stack_regs",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 10,
  (MR_Integer) 23,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_23,
  NULL,
  NULL,
  NULL
};

#line 2542 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_24 = {
  (MR_String) "link_collect_succeeded",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 11,
  (MR_Integer) 24,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2557 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_25 = {
  (MR_String) "link_collect_failed",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 12,
  (MR_Integer) 25,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2572 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_26 = {
  (MR_String) "collect_linked",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 13,
  (MR_Integer) 26,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2587 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_27 = {
  (MR_String) "collect_not_linked",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 14,
  (MR_Integer) 27,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2602 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_28[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2607 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_28 = {
  (MR_String) "grade",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 11,
  (MR_Integer) 28,
  mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_28,
  NULL,
  NULL,
  NULL
};

#line 2622 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_29 = {
  (MR_String) "execution_continuing",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 29,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2637 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_30 = {
  (MR_String) "execution_terminated",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 30,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2652 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_31 = {
  (MR_String) "collect_arg_on_ok",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 31,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2667 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_32 = {
  (MR_String) "collect_arg_off_ok",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 18,
  (MR_Integer) 32,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2682 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_0[19] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_0,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_1,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_2,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_3,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_9,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_10,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_11,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_12,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_19,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_20,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_22,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_24,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_25,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_26,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_27,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_29,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_30,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_31,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_32
};

#line 2705 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_1[1] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_4
};

#line 2710 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_2[1] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_5
};

#line 2715 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_3[12] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_6,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_7,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_8,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_13,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_14,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_15,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_16,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_17,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_18,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_21,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_23,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_28
};

#line 2731 "mdb.debugger_interface.c"
static const MR_DuPtagLayout mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_debugger_response_0[4] = {
  {
    (MR_Integer) 19,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_2
  },
  {
    (MR_Integer) 12,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_3
  }
};

#line 2755 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_debugger_response_0[33] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_10,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_32,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_31,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_26,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_27,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_8,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_7,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_5,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_4,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_6,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_17,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_21,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_18,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_22,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_13,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_29,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_30,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_2,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_3,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_20,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_28,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_0,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_9,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_14,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_25,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_24,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_11,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_12,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_19,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_16,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_15,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_23,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_1
};

#line 2792 "mdb.debugger_interface.c"
static const MR_Integer mdb__debugger_interface__mdb__debugger_interface__functor_number_map_debugger_response_0[33] = {
  (MR_Integer) 21,
  (MR_Integer) 32,
  (MR_Integer) 17,
  (MR_Integer) 18,
  (MR_Integer) 8,
  (MR_Integer) 7,
  (MR_Integer) 9,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 22,
  (MR_Integer) 0,
  (MR_Integer) 26,
  (MR_Integer) 27,
  (MR_Integer) 14,
  (MR_Integer) 23,
  (MR_Integer) 30,
  (MR_Integer) 29,
  (MR_Integer) 10,
  (MR_Integer) 12,
  (MR_Integer) 28,
  (MR_Integer) 19,
  (MR_Integer) 11,
  (MR_Integer) 13,
  (MR_Integer) 31,
  (MR_Integer) 25,
  (MR_Integer) 24,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 20,
  (MR_Integer) 15,
  (MR_Integer) 16,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 2829 "mdb.debugger_interface.c"
const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_response_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__debugger_interface____Unify____debugger_response_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____debugger_response_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "debugger_response",
  {
    mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_debugger_response_0
  },
  {
    mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_debugger_response_0
  },
  (MR_Integer) 33,
  (MR_Integer) 4,
  mdb__debugger_interface__mdb__debugger_interface__functor_number_map_debugger_response_0
};

#line 2850 "mdb.debugger_interface.c"
const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_depth_number_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__debugger_interface____Unify____depth_number_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____depth_number_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "depth_number",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2871 "mdb.debugger_interface.c"
const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_determinism_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__debugger_interface____Unify____determinism_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____determinism_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "determinism",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2892 "mdb.debugger_interface.c"
const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_event_number_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__debugger_interface____Unify____event_number_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____event_number_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "event_number",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2913 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_0 = {
  (MR_String) "nop",
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

#line 2928 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2933 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_1 = {
  (MR_String) "exact",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_1,
  NULL,
  NULL,
  NULL
};

#line 2948 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_2[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2953 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_2 = {
  (MR_String) "neg",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_2,
  NULL,
  NULL,
  NULL
};

#line 2968 "mdb.debugger_interface.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__debugger_interface__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2976 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_3[1] = {
  (MR_PseudoTypeInfo) &mdb__debugger_interface__list__pti_list_1__pseudo_1
};

#line 2981 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_3 = {
  (MR_String) "list",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_3,
  NULL,
  NULL,
  NULL
};

#line 2996 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_4[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 3002 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_4 = {
  (MR_String) "interval",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_4,
  NULL,
  NULL,
  NULL
};

#line 3017 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_0[1] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_0
};

#line 3022 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_1[1] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_1
};

#line 3027 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_2[1] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_2
};

#line 3032 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_3[2] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_3,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_4
};

#line 3038 "mdb.debugger_interface.c"
static const MR_DuPtagLayout mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_match_1[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_3
  }
};

#line 3062 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_match_1[5] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_1,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_4,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_3,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_2,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_0
};

#line 3071 "mdb.debugger_interface.c"
static const MR_Integer mdb__debugger_interface__mdb__debugger_interface__functor_number_map_match_1[5] = {
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 3080 "mdb.debugger_interface.c"
const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__debugger_interface____Unify____match_1_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____match_1_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "match",
  {
    mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_match_1
  },
  {
    mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_match_1
  },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mdb__debugger_interface__mdb__debugger_interface__functor_number_map_match_1
};

#line 3101 "mdb.debugger_interface.c"
static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0 = {
  &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0
  }
};

#line 3109 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_pred_match_0_0[2] = {
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0
};

#line 3115 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_0 = {
  (MR_String) "match_user_pred",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__debugger_interface__mdb__debugger_interface__field_types_pred_match_0_0,
  NULL,
  NULL,
  NULL
};

#line 3130 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_pred_match_0_1[2] = {
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0
};

#line 3136 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_1 = {
  (MR_String) "match_compiler_generated_pred",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__debugger_interface__mdb__debugger_interface__field_types_pred_match_0_1,
  NULL,
  NULL,
  NULL
};

#line 3151 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_2 = {
  (MR_String) "match_any_pred",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 3166 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_0[1] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_2
};

#line 3171 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_1[1] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_0
};

#line 3176 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_2[1] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_1
};

#line 3181 "mdb.debugger_interface.c"
static const MR_DuPtagLayout mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_pred_match_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_2
  }
};

#line 3200 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_pred_match_0[3] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_2,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_1,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_0
};

#line 3207 "mdb.debugger_interface.c"
static const MR_Integer mdb__debugger_interface__mdb__debugger_interface__functor_number_map_pred_match_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3214 "mdb.debugger_interface.c"
const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_pred_match_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__debugger_interface____Unify____pred_match_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____pred_match_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "pred_match",
  {
    mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_pred_match_0
  },
  {
    mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_pred_match_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdb__debugger_interface__mdb__debugger_interface__functor_number_map_pred_match_0
};

#line 3235 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____arity_0_0_10001(
#line 3238 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 3240 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2)
#line 3242 "mdb.debugger_interface.c"
{
#line 3244 "mdb.debugger_interface.c"
  {
#line 3246 "mdb.debugger_interface.c"
    MR_bool mdb__debugger_interface__succeeded;

#line 3249 "mdb.debugger_interface.c"
    {
#line 3251 "mdb.debugger_interface.c"
      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____arity_0_0(((MR_Integer) mdb__debugger_interface__wrapper_arg_1), ((MR_Integer) mdb__debugger_interface__wrapper_arg_2));
    }
#line 3254 "mdb.debugger_interface.c"
    return mdb__debugger_interface__succeeded;
#line 3256 "mdb.debugger_interface.c"
  }
#line 3258 "mdb.debugger_interface.c"
}

#line 3261 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____arity_0_0_10001(
#line 3264 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
#line 3266 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 3268 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3)
#line 3270 "mdb.debugger_interface.c"
{
#line 3272 "mdb.debugger_interface.c"
  {
#line 3274 "mdb.debugger_interface.c"
    MR_Word mdb__debugger_interface__conv0_HeadVar__1_1;

#line 3277 "mdb.debugger_interface.c"
    {
#line 3279 "mdb.debugger_interface.c"
      mdb__debugger_interface____Compare____arity_0_0(&mdb__debugger_interface__conv0_HeadVar__1_1, ((MR_Integer) mdb__debugger_interface__wrapper_arg_2), ((MR_Integer) mdb__debugger_interface__wrapper_arg_3));
    }
#line 3282 "mdb.debugger_interface.c"
    *mdb__debugger_interface__wrapper_arg_1 = ((MR_Box) (mdb__debugger_interface__conv0_HeadVar__1_1));
#line 3284 "mdb.debugger_interface.c"
  }
#line 3286 "mdb.debugger_interface.c"
}

#line 3289 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____call_number_0_0_10001(
#line 3292 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 3294 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2)
#line 3296 "mdb.debugger_interface.c"
{
#line 3298 "mdb.debugger_interface.c"
  {
#line 3300 "mdb.debugger_interface.c"
    MR_bool mdb__debugger_interface__succeeded;

#line 3303 "mdb.debugger_interface.c"
    {
#line 3305 "mdb.debugger_interface.c"
      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____call_number_0_0(((MR_Integer) mdb__debugger_interface__wrapper_arg_1), ((MR_Integer) mdb__debugger_interface__wrapper_arg_2));
    }
#line 3308 "mdb.debugger_interface.c"
    return mdb__debugger_interface__succeeded;
#line 3310 "mdb.debugger_interface.c"
  }
#line 3312 "mdb.debugger_interface.c"
}

#line 3315 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____call_number_0_0_10001(
#line 3318 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
#line 3320 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 3322 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3)
#line 3324 "mdb.debugger_interface.c"
{
#line 3326 "mdb.debugger_interface.c"
  {
#line 3328 "mdb.debugger_interface.c"
    MR_Word mdb__debugger_interface__conv0_HeadVar__1_1;

#line 3331 "mdb.debugger_interface.c"
    {
#line 3333 "mdb.debugger_interface.c"
      mdb__debugger_interface____Compare____call_number_0_0(&mdb__debugger_interface__conv0_HeadVar__1_1, ((MR_Integer) mdb__debugger_interface__wrapper_arg_2), ((MR_Integer) mdb__debugger_interface__wrapper_arg_3));
    }
#line 3336 "mdb.debugger_interface.c"
    *mdb__debugger_interface__wrapper_arg_1 = ((MR_Box) (mdb__debugger_interface__conv0_HeadVar__1_1));
#line 3338 "mdb.debugger_interface.c"
  }
#line 3340 "mdb.debugger_interface.c"
}

#line 3343 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_request_0_0_10001(
#line 3346 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 3348 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2)
#line 3350 "mdb.debugger_interface.c"
{
#line 3352 "mdb.debugger_interface.c"
  {
#line 3354 "mdb.debugger_interface.c"
    MR_bool mdb__debugger_interface__succeeded;

#line 3357 "mdb.debugger_interface.c"
    {
#line 3359 "mdb.debugger_interface.c"
      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____debugger_request_0_0(((MR_Word) mdb__debugger_interface__wrapper_arg_1), ((MR_Word) mdb__debugger_interface__wrapper_arg_2));
    }
#line 3362 "mdb.debugger_interface.c"
    return mdb__debugger_interface__succeeded;
#line 3364 "mdb.debugger_interface.c"
  }
#line 3366 "mdb.debugger_interface.c"
}

#line 3369 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____debugger_request_0_0_10001(
#line 3372 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
#line 3374 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 3376 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3)
#line 3378 "mdb.debugger_interface.c"
{
#line 3380 "mdb.debugger_interface.c"
  {
#line 3382 "mdb.debugger_interface.c"
    MR_Word mdb__debugger_interface__conv0_HeadVar__1_1;

#line 3385 "mdb.debugger_interface.c"
    {
#line 3387 "mdb.debugger_interface.c"
      mdb__debugger_interface____Compare____debugger_request_0_0(&mdb__debugger_interface__conv0_HeadVar__1_1, ((MR_Word) mdb__debugger_interface__wrapper_arg_2), ((MR_Word) mdb__debugger_interface__wrapper_arg_3));
    }
#line 3390 "mdb.debugger_interface.c"
    *mdb__debugger_interface__wrapper_arg_1 = ((MR_Box) (mdb__debugger_interface__conv0_HeadVar__1_1));
#line 3392 "mdb.debugger_interface.c"
  }
#line 3394 "mdb.debugger_interface.c"
}

#line 3397 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_response_0_0_10001(
#line 3400 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 3402 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2)
#line 3404 "mdb.debugger_interface.c"
{
#line 3406 "mdb.debugger_interface.c"
  {
#line 3408 "mdb.debugger_interface.c"
    MR_bool mdb__debugger_interface__succeeded;

#line 3411 "mdb.debugger_interface.c"
    {
#line 3413 "mdb.debugger_interface.c"
      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____debugger_response_0_0(((MR_Word) mdb__debugger_interface__wrapper_arg_1), ((MR_Word) mdb__debugger_interface__wrapper_arg_2));
    }
#line 3416 "mdb.debugger_interface.c"
    return mdb__debugger_interface__succeeded;
#line 3418 "mdb.debugger_interface.c"
  }
#line 3420 "mdb.debugger_interface.c"
}

#line 3423 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____debugger_response_0_0_10001(
#line 3426 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
#line 3428 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 3430 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3)
#line 3432 "mdb.debugger_interface.c"
{
#line 3434 "mdb.debugger_interface.c"
  {
#line 3436 "mdb.debugger_interface.c"
    MR_Word mdb__debugger_interface__conv0_HeadVar__1_1;

#line 3439 "mdb.debugger_interface.c"
    {
#line 3441 "mdb.debugger_interface.c"
      mdb__debugger_interface____Compare____debugger_response_0_0(&mdb__debugger_interface__conv0_HeadVar__1_1, ((MR_Word) mdb__debugger_interface__wrapper_arg_2), ((MR_Word) mdb__debugger_interface__wrapper_arg_3));
    }
#line 3444 "mdb.debugger_interface.c"
    *mdb__debugger_interface__wrapper_arg_1 = ((MR_Box) (mdb__debugger_interface__conv0_HeadVar__1_1));
#line 3446 "mdb.debugger_interface.c"
  }
#line 3448 "mdb.debugger_interface.c"
}

#line 3451 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____depth_number_0_0_10001(
#line 3454 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 3456 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2)
#line 3458 "mdb.debugger_interface.c"
{
#line 3460 "mdb.debugger_interface.c"
  {
#line 3462 "mdb.debugger_interface.c"
    MR_bool mdb__debugger_interface__succeeded;

#line 3465 "mdb.debugger_interface.c"
    {
#line 3467 "mdb.debugger_interface.c"
      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____depth_number_0_0(((MR_Integer) mdb__debugger_interface__wrapper_arg_1), ((MR_Integer) mdb__debugger_interface__wrapper_arg_2));
    }
#line 3470 "mdb.debugger_interface.c"
    return mdb__debugger_interface__succeeded;
#line 3472 "mdb.debugger_interface.c"
  }
#line 3474 "mdb.debugger_interface.c"
}

#line 3477 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____depth_number_0_0_10001(
#line 3480 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
#line 3482 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 3484 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3)
#line 3486 "mdb.debugger_interface.c"
{
#line 3488 "mdb.debugger_interface.c"
  {
#line 3490 "mdb.debugger_interface.c"
    MR_Word mdb__debugger_interface__conv0_HeadVar__1_1;

#line 3493 "mdb.debugger_interface.c"
    {
#line 3495 "mdb.debugger_interface.c"
      mdb__debugger_interface____Compare____depth_number_0_0(&mdb__debugger_interface__conv0_HeadVar__1_1, ((MR_Integer) mdb__debugger_interface__wrapper_arg_2), ((MR_Integer) mdb__debugger_interface__wrapper_arg_3));
    }
#line 3498 "mdb.debugger_interface.c"
    *mdb__debugger_interface__wrapper_arg_1 = ((MR_Box) (mdb__debugger_interface__conv0_HeadVar__1_1));
#line 3500 "mdb.debugger_interface.c"
  }
#line 3502 "mdb.debugger_interface.c"
}

#line 3505 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____determinism_0_0_10001(
#line 3508 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 3510 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2)
#line 3512 "mdb.debugger_interface.c"
{
#line 3514 "mdb.debugger_interface.c"
  {
#line 3516 "mdb.debugger_interface.c"
    MR_bool mdb__debugger_interface__succeeded;

#line 3519 "mdb.debugger_interface.c"
    {
#line 3521 "mdb.debugger_interface.c"
      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____determinism_0_0(((MR_Integer) mdb__debugger_interface__wrapper_arg_1), ((MR_Integer) mdb__debugger_interface__wrapper_arg_2));
    }
#line 3524 "mdb.debugger_interface.c"
    return mdb__debugger_interface__succeeded;
#line 3526 "mdb.debugger_interface.c"
  }
#line 3528 "mdb.debugger_interface.c"
}

#line 3531 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____determinism_0_0_10001(
#line 3534 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
#line 3536 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 3538 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3)
#line 3540 "mdb.debugger_interface.c"
{
#line 3542 "mdb.debugger_interface.c"
  {
#line 3544 "mdb.debugger_interface.c"
    MR_Word mdb__debugger_interface__conv0_HeadVar__1_1;

#line 3547 "mdb.debugger_interface.c"
    {
#line 3549 "mdb.debugger_interface.c"
      mdb__debugger_interface____Compare____determinism_0_0(&mdb__debugger_interface__conv0_HeadVar__1_1, ((MR_Integer) mdb__debugger_interface__wrapper_arg_2), ((MR_Integer) mdb__debugger_interface__wrapper_arg_3));
    }
#line 3552 "mdb.debugger_interface.c"
    *mdb__debugger_interface__wrapper_arg_1 = ((MR_Box) (mdb__debugger_interface__conv0_HeadVar__1_1));
#line 3554 "mdb.debugger_interface.c"
  }
#line 3556 "mdb.debugger_interface.c"
}

#line 3559 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____event_number_0_0_10001(
#line 3562 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 3564 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2)
#line 3566 "mdb.debugger_interface.c"
{
#line 3568 "mdb.debugger_interface.c"
  {
#line 3570 "mdb.debugger_interface.c"
    MR_bool mdb__debugger_interface__succeeded;

#line 3573 "mdb.debugger_interface.c"
    {
#line 3575 "mdb.debugger_interface.c"
      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____event_number_0_0(((MR_Integer) mdb__debugger_interface__wrapper_arg_1), ((MR_Integer) mdb__debugger_interface__wrapper_arg_2));
    }
#line 3578 "mdb.debugger_interface.c"
    return mdb__debugger_interface__succeeded;
#line 3580 "mdb.debugger_interface.c"
  }
#line 3582 "mdb.debugger_interface.c"
}

#line 3585 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____event_number_0_0_10001(
#line 3588 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
#line 3590 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 3592 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3)
#line 3594 "mdb.debugger_interface.c"
{
#line 3596 "mdb.debugger_interface.c"
  {
#line 3598 "mdb.debugger_interface.c"
    MR_Word mdb__debugger_interface__conv0_HeadVar__1_1;

#line 3601 "mdb.debugger_interface.c"
    {
#line 3603 "mdb.debugger_interface.c"
      mdb__debugger_interface____Compare____event_number_0_0(&mdb__debugger_interface__conv0_HeadVar__1_1, ((MR_Integer) mdb__debugger_interface__wrapper_arg_2), ((MR_Integer) mdb__debugger_interface__wrapper_arg_3));
    }
#line 3606 "mdb.debugger_interface.c"
    *mdb__debugger_interface__wrapper_arg_1 = ((MR_Box) (mdb__debugger_interface__conv0_HeadVar__1_1));
#line 3608 "mdb.debugger_interface.c"
  }
#line 3610 "mdb.debugger_interface.c"
}

#line 3613 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____match_1_0_10001(
#line 3616 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 3618 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 3620 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3)
#line 3622 "mdb.debugger_interface.c"
{
#line 3624 "mdb.debugger_interface.c"
  {
#line 3626 "mdb.debugger_interface.c"
    MR_bool mdb__debugger_interface__succeeded;

#line 3629 "mdb.debugger_interface.c"
    {
#line 3631 "mdb.debugger_interface.c"
      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(((MR_Word) mdb__debugger_interface__wrapper_arg_1), ((MR_Word) mdb__debugger_interface__wrapper_arg_2), ((MR_Word) mdb__debugger_interface__wrapper_arg_3));
    }
#line 3634 "mdb.debugger_interface.c"
    return mdb__debugger_interface__succeeded;
#line 3636 "mdb.debugger_interface.c"
  }
#line 3638 "mdb.debugger_interface.c"
}

#line 3641 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____match_1_0_10001(
#line 3644 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 3646 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_2,
#line 3648 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3,
#line 3650 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_4)
#line 3652 "mdb.debugger_interface.c"
{
#line 3654 "mdb.debugger_interface.c"
  {
#line 3656 "mdb.debugger_interface.c"
    MR_Word mdb__debugger_interface__conv0_HeadVar__1_1;

#line 3659 "mdb.debugger_interface.c"
    {
#line 3661 "mdb.debugger_interface.c"
      mdb__debugger_interface____Compare____match_1_0(((MR_Word) mdb__debugger_interface__wrapper_arg_1), &mdb__debugger_interface__conv0_HeadVar__1_1, ((MR_Word) mdb__debugger_interface__wrapper_arg_3), ((MR_Word) mdb__debugger_interface__wrapper_arg_4));
    }
#line 3664 "mdb.debugger_interface.c"
    *mdb__debugger_interface__wrapper_arg_2 = ((MR_Box) (mdb__debugger_interface__conv0_HeadVar__1_1));
#line 3666 "mdb.debugger_interface.c"
  }
#line 3668 "mdb.debugger_interface.c"
}

#line 3671 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____pred_match_0_0_10001(
#line 3674 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 3676 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2)
#line 3678 "mdb.debugger_interface.c"
{
#line 3680 "mdb.debugger_interface.c"
  {
#line 3682 "mdb.debugger_interface.c"
    MR_bool mdb__debugger_interface__succeeded;

#line 3685 "mdb.debugger_interface.c"
    {
#line 3687 "mdb.debugger_interface.c"
      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____pred_match_0_0(((MR_Word) mdb__debugger_interface__wrapper_arg_1), ((MR_Word) mdb__debugger_interface__wrapper_arg_2));
    }
#line 3690 "mdb.debugger_interface.c"
    return mdb__debugger_interface__succeeded;
#line 3692 "mdb.debugger_interface.c"
  }
#line 3694 "mdb.debugger_interface.c"
}

#line 3697 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____pred_match_0_0_10001(
#line 3700 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
#line 3702 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 3704 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3)
#line 3706 "mdb.debugger_interface.c"
{
#line 3708 "mdb.debugger_interface.c"
  {
#line 3710 "mdb.debugger_interface.c"
    MR_Word mdb__debugger_interface__conv0_HeadVar__1_1;

#line 3713 "mdb.debugger_interface.c"
    {
#line 3715 "mdb.debugger_interface.c"
      mdb__debugger_interface____Compare____pred_match_0_0(&mdb__debugger_interface__conv0_HeadVar__1_1, ((MR_Word) mdb__debugger_interface__wrapper_arg_2), ((MR_Word) mdb__debugger_interface__wrapper_arg_3));
    }
#line 3718 "mdb.debugger_interface.c"
    *mdb__debugger_interface__wrapper_arg_1 = ((MR_Box) (mdb__debugger_interface__conv0_HeadVar__1_1));
#line 3720 "mdb.debugger_interface.c"
  }
#line 3722 "mdb.debugger_interface.c"
}

#line 68 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Compare____pred_match_0_0(
#line 68 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
#line 68 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__2_2,
#line 68 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__3_3)
#line 68 "debugger_interface.m"
{
#line 68 "debugger_interface.m"
  {
#line 68 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 68 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__CastX_30 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;
#line 68 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__CastY_31 = (MR_Integer) mdb__debugger_interface__HeadVar__3_3;

#line 68 "debugger_interface.m"
    mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastX_30 == mdb__debugger_interface__CastY_31);
#line 68 "debugger_interface.m"
    if (mdb__debugger_interface__succeeded)
#line 3749 "mdb.debugger_interface.c"
      *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 0;
#line 68 "debugger_interface.m"
    else
#line 68 "debugger_interface.m"
      if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 68 "debugger_interface.m"
        if ((mdb__debugger_interface__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 68 "debugger_interface.m"
          *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 0;
#line 68 "debugger_interface.m"
        else
#line 68 "debugger_interface.m"
          if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3763 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
#line 68 "debugger_interface.m"
          else
#line 3767 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
#line 68 "debugger_interface.m"
      else
#line 68 "debugger_interface.m"
        if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 68 "debugger_interface.m"
          {
#line 68 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 68 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));

#line 68 "debugger_interface.m"
            if ((mdb__debugger_interface__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3782 "mdb.debugger_interface.c"
              *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
#line 68 "debugger_interface.m"
            else
#line 68 "debugger_interface.m"
              if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 68 "debugger_interface.m"
                {
#line 68 "debugger_interface.m"
                  MR_Word mdb__debugger_interface__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)));
#line 68 "debugger_interface.m"
                  MR_Word mdb__debugger_interface__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 68 "debugger_interface.m"
                  MR_Word mdb__debugger_interface__V_23_23;

#line 68 "debugger_interface.m"
                  {
#line 68 "debugger_interface.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[3], &mdb__debugger_interface__V_23_23, ((MR_Box) (mdb__debugger_interface__V_37_37)), ((MR_Box) (mdb__debugger_interface__V_21_21)));
                  }
#line 3802 "mdb.debugger_interface.c"
                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_23_23 == (MR_Integer) 0);
#line 68 "debugger_interface.m"
                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 68 "debugger_interface.m"
                  if (mdb__debugger_interface__succeeded)
#line 68 "debugger_interface.m"
                    *mdb__debugger_interface__HeadVar__1_1 = mdb__debugger_interface__V_23_23;
#line 68 "debugger_interface.m"
                  else
#line 68 "debugger_interface.m"
                    {
#line 68 "debugger_interface.m"
                      {
#line 68 "debugger_interface.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[3], mdb__debugger_interface__HeadVar__1_1, ((MR_Box) (mdb__debugger_interface__V_36_36)), ((MR_Box) (mdb__debugger_interface__V_22_22)));
#line 68 "debugger_interface.m"
                        return;
                      }
#line 68 "debugger_interface.m"
                    }
#line 68 "debugger_interface.m"
                }
#line 68 "debugger_interface.m"
              else
#line 3827 "mdb.debugger_interface.c"
                *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
#line 68 "debugger_interface.m"
          }
#line 68 "debugger_interface.m"
        else
#line 68 "debugger_interface.m"
          {
#line 68 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 68 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));

#line 68 "debugger_interface.m"
            if ((mdb__debugger_interface__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3842 "mdb.debugger_interface.c"
              *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
#line 68 "debugger_interface.m"
            else
#line 68 "debugger_interface.m"
              if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3848 "mdb.debugger_interface.c"
                *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
#line 68 "debugger_interface.m"
              else
#line 68 "debugger_interface.m"
                {
#line 68 "debugger_interface.m"
                  MR_Word mdb__debugger_interface__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)));
#line 68 "debugger_interface.m"
                  MR_Word mdb__debugger_interface__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 68 "debugger_interface.m"
                  MR_Word mdb__debugger_interface__V_8_8;

#line 68 "debugger_interface.m"
                  {
#line 68 "debugger_interface.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[6], &mdb__debugger_interface__V_8_8, ((MR_Box) (mdb__debugger_interface__V_39_39)), ((MR_Box) (mdb__debugger_interface__V_6_6)));
                  }
#line 3866 "mdb.debugger_interface.c"
                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_8_8 == (MR_Integer) 0);
#line 68 "debugger_interface.m"
                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 68 "debugger_interface.m"
                  if (mdb__debugger_interface__succeeded)
#line 68 "debugger_interface.m"
                    *mdb__debugger_interface__HeadVar__1_1 = mdb__debugger_interface__V_8_8;
#line 68 "debugger_interface.m"
                  else
#line 68 "debugger_interface.m"
                    {
#line 68 "debugger_interface.m"
                      {
#line 68 "debugger_interface.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[3], mdb__debugger_interface__HeadVar__1_1, ((MR_Box) (mdb__debugger_interface__V_38_38)), ((MR_Box) (mdb__debugger_interface__V_7_7)));
#line 68 "debugger_interface.m"
                        return;
                      }
#line 68 "debugger_interface.m"
                    }
#line 68 "debugger_interface.m"
                }
#line 68 "debugger_interface.m"
          }
#line 68 "debugger_interface.m"
  }
#line 68 "debugger_interface.m"
}

#line 68 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____pred_match_0_0(
#line 68 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__1_1,
#line 68 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__2_2)
#line 68 "debugger_interface.m"
{
#line 68 "debugger_interface.m"
  {
#line 68 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 68 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__CastX_13 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 68 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__CastY_14 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 68 "debugger_interface.m"
    mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastX_13 == mdb__debugger_interface__CastY_14);
#line 68 "debugger_interface.m"
    if (mdb__debugger_interface__succeeded)
#line 68 "debugger_interface.m"
      mdb__debugger_interface__succeeded = MR_TRUE;
#line 68 "debugger_interface.m"
    else
#line 68 "debugger_interface.m"
      if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 68 "debugger_interface.m"
        {
#line 68 "debugger_interface.m"
          MR_Integer mdb__debugger_interface__CastX_11 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 68 "debugger_interface.m"
          MR_Integer mdb__debugger_interface__CastY_12 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 68 "debugger_interface.m"
          mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_12 == mdb__debugger_interface__CastX_11);
#line 68 "debugger_interface.m"
        }
#line 68 "debugger_interface.m"
      else
#line 68 "debugger_interface.m"
        if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 68 "debugger_interface.m"
          {
#line 68 "debugger_interface.m"
            MR_Word mdb__debugger_interface__TypeCtorInfo_15_15;
#line 68 "debugger_interface.m"
            MR_Word mdb__debugger_interface__TypeCtorInfo_16_16;
#line 68 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)));
#line 68 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 68 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_9_9;
#line 68 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_10_10;

#line 68 "debugger_interface.m"
            mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 68 "debugger_interface.m"
            if (mdb__debugger_interface__succeeded)
#line 68 "debugger_interface.m"
              {
#line 68 "debugger_interface.m"
                mdb__debugger_interface__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));
#line 68 "debugger_interface.m"
                mdb__debugger_interface__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 3964 "mdb.debugger_interface.c"
                mdb__debugger_interface__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 3966 "mdb.debugger_interface.c"
                {
#line 3968 "mdb.debugger_interface.c"
                  mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_15_15, mdb__debugger_interface__V_7_7, mdb__debugger_interface__V_9_9);
                }
#line 68 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 68 "debugger_interface.m"
                  {
#line 3975 "mdb.debugger_interface.c"
                    mdb__debugger_interface__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 3977 "mdb.debugger_interface.c"
                    {
#line 3979 "mdb.debugger_interface.c"
                      return mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_16_16, mdb__debugger_interface__V_8_8, mdb__debugger_interface__V_10_10);
                    }
#line 68 "debugger_interface.m"
                  }
#line 68 "debugger_interface.m"
              }
#line 68 "debugger_interface.m"
          }
#line 68 "debugger_interface.m"
        else
#line 68 "debugger_interface.m"
          {
#line 68 "debugger_interface.m"
            MR_Word mdb__debugger_interface__TypeCtorInfo_17_17;
#line 68 "debugger_interface.m"
            MR_Word mdb__debugger_interface__TypeCtorInfo_18_18;
#line 68 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)));
#line 68 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 68 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_5_5;
#line 68 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_6_6;

#line 68 "debugger_interface.m"
            mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 68 "debugger_interface.m"
            if (mdb__debugger_interface__succeeded)
#line 68 "debugger_interface.m"
              {
#line 68 "debugger_interface.m"
                mdb__debugger_interface__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));
#line 68 "debugger_interface.m"
                mdb__debugger_interface__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 4015 "mdb.debugger_interface.c"
                mdb__debugger_interface__TypeCtorInfo_17_17 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0;
#line 4017 "mdb.debugger_interface.c"
                {
#line 4019 "mdb.debugger_interface.c"
                  mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_17_17, mdb__debugger_interface__V_3_3, mdb__debugger_interface__V_5_5);
                }
#line 68 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 68 "debugger_interface.m"
                  {
#line 4026 "mdb.debugger_interface.c"
                    mdb__debugger_interface__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4028 "mdb.debugger_interface.c"
                    {
#line 4030 "mdb.debugger_interface.c"
                      return mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_18_18, mdb__debugger_interface__V_4_4, mdb__debugger_interface__V_6_6);
                    }
#line 68 "debugger_interface.m"
                  }
#line 68 "debugger_interface.m"
              }
#line 68 "debugger_interface.m"
          }
#line 68 "debugger_interface.m"
    return mdb__debugger_interface__succeeded;
#line 68 "debugger_interface.m"
  }
#line 68 "debugger_interface.m"
}

#line 195 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Compare____match_1_0(
#line 195 "debugger_interface.m"
  MR_Word mdb__debugger_interface__TypeInfo_for_T_57,
#line 195 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
#line 195 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__2_2,
#line 195 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__3_3)
#line 195 "debugger_interface.m"
{
#line 195 "debugger_interface.m"
  {
#line 195 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 195 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__CastX_55 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;
#line 195 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__CastY_56 = (MR_Integer) mdb__debugger_interface__HeadVar__3_3;

#line 195 "debugger_interface.m"
    mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastX_55 == mdb__debugger_interface__CastY_56);
#line 195 "debugger_interface.m"
    if (mdb__debugger_interface__succeeded)
#line 4072 "mdb.debugger_interface.c"
      *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 0;
#line 195 "debugger_interface.m"
    else
#line 195 "debugger_interface.m"
      if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 195 "debugger_interface.m"
        if ((mdb__debugger_interface__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 195 "debugger_interface.m"
          *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 0;
#line 195 "debugger_interface.m"
        else
#line 195 "debugger_interface.m"
          if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4086 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
#line 195 "debugger_interface.m"
          else
#line 195 "debugger_interface.m"
            if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4092 "mdb.debugger_interface.c"
              *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
#line 195 "debugger_interface.m"
            else
#line 195 "debugger_interface.m"
              if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4098 "mdb.debugger_interface.c"
                *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
#line 195 "debugger_interface.m"
              else
#line 4102 "mdb.debugger_interface.c"
                *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
#line 195 "debugger_interface.m"
      else
#line 195 "debugger_interface.m"
        if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 195 "debugger_interface.m"
          {
#line 195 "debugger_interface.m"
            MR_Box mdb__debugger_interface__V_60_60 = (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0));

#line 195 "debugger_interface.m"
            if ((mdb__debugger_interface__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4115 "mdb.debugger_interface.c"
              *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
#line 195 "debugger_interface.m"
            else
#line 195 "debugger_interface.m"
              if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 195 "debugger_interface.m"
                {
#line 195 "debugger_interface.m"
                  MR_Box mdb__debugger_interface__V_11_11 = (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0));

#line 195 "debugger_interface.m"
                  {
#line 195 "debugger_interface.m"
                    mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_for_T_57, mdb__debugger_interface__HeadVar__1_1, mdb__debugger_interface__V_60_60, mdb__debugger_interface__V_11_11);
#line 195 "debugger_interface.m"
                    return;
                  }
#line 195 "debugger_interface.m"
                }
#line 195 "debugger_interface.m"
              else
#line 195 "debugger_interface.m"
                if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4139 "mdb.debugger_interface.c"
                  *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
#line 195 "debugger_interface.m"
                else
#line 195 "debugger_interface.m"
                  if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4145 "mdb.debugger_interface.c"
                    *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
#line 195 "debugger_interface.m"
                  else
#line 4149 "mdb.debugger_interface.c"
                    *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
#line 195 "debugger_interface.m"
          }
#line 195 "debugger_interface.m"
        else
#line 195 "debugger_interface.m"
          if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 195 "debugger_interface.m"
            {
#line 195 "debugger_interface.m"
              MR_Box mdb__debugger_interface__V_64_64 = (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0));

#line 195 "debugger_interface.m"
              if ((mdb__debugger_interface__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4164 "mdb.debugger_interface.c"
                *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
#line 195 "debugger_interface.m"
              else
#line 195 "debugger_interface.m"
                if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4170 "mdb.debugger_interface.c"
                  *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
#line 195 "debugger_interface.m"
                else
#line 195 "debugger_interface.m"
                  if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 195 "debugger_interface.m"
                    {
#line 195 "debugger_interface.m"
                      MR_Box mdb__debugger_interface__V_23_23 = (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0));

#line 195 "debugger_interface.m"
                      {
#line 195 "debugger_interface.m"
                        mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_for_T_57, mdb__debugger_interface__HeadVar__1_1, mdb__debugger_interface__V_64_64, mdb__debugger_interface__V_23_23);
#line 195 "debugger_interface.m"
                        return;
                      }
#line 195 "debugger_interface.m"
                    }
#line 195 "debugger_interface.m"
                  else
#line 195 "debugger_interface.m"
                    if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4194 "mdb.debugger_interface.c"
                      *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
#line 195 "debugger_interface.m"
                    else
#line 4198 "mdb.debugger_interface.c"
                      *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
#line 195 "debugger_interface.m"
            }
#line 195 "debugger_interface.m"
          else
#line 195 "debugger_interface.m"
            if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 195 "debugger_interface.m"
              {
#line 195 "debugger_interface.m"
                MR_Box mdb__debugger_interface__V_61_61 = (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2));
#line 195 "debugger_interface.m"
                MR_Box mdb__debugger_interface__V_62_62 = (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1));

#line 195 "debugger_interface.m"
                if ((mdb__debugger_interface__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4215 "mdb.debugger_interface.c"
                  *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
#line 195 "debugger_interface.m"
                else
#line 195 "debugger_interface.m"
                  if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4221 "mdb.debugger_interface.c"
                    *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
#line 195 "debugger_interface.m"
                  else
#line 195 "debugger_interface.m"
                    if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4227 "mdb.debugger_interface.c"
                      *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
#line 195 "debugger_interface.m"
                    else
#line 195 "debugger_interface.m"
                      if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 195 "debugger_interface.m"
                        {
#line 195 "debugger_interface.m"
                          MR_Box mdb__debugger_interface__V_52_52 = (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1));
#line 195 "debugger_interface.m"
                          MR_Box mdb__debugger_interface__V_53_53 = (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 2));
#line 195 "debugger_interface.m"
                          MR_Word mdb__debugger_interface__V_54_54;

#line 195 "debugger_interface.m"
                          {
#line 195 "debugger_interface.m"
                            mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_for_T_57, &mdb__debugger_interface__V_54_54, mdb__debugger_interface__V_62_62, mdb__debugger_interface__V_52_52);
                          }
#line 4247 "mdb.debugger_interface.c"
                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_54_54 == (MR_Integer) 0);
#line 195 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 195 "debugger_interface.m"
                          if (mdb__debugger_interface__succeeded)
#line 195 "debugger_interface.m"
                            *mdb__debugger_interface__HeadVar__1_1 = mdb__debugger_interface__V_54_54;
#line 195 "debugger_interface.m"
                          else
#line 195 "debugger_interface.m"
                            {
#line 195 "debugger_interface.m"
                              mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_for_T_57, mdb__debugger_interface__HeadVar__1_1, mdb__debugger_interface__V_61_61, mdb__debugger_interface__V_53_53);
#line 195 "debugger_interface.m"
                              return;
                            }
#line 195 "debugger_interface.m"
                        }
#line 195 "debugger_interface.m"
                      else
#line 4268 "mdb.debugger_interface.c"
                        *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
#line 195 "debugger_interface.m"
              }
#line 195 "debugger_interface.m"
            else
#line 195 "debugger_interface.m"
              {
#line 195 "debugger_interface.m"
                MR_Word mdb__debugger_interface__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));

#line 195 "debugger_interface.m"
                if ((mdb__debugger_interface__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4281 "mdb.debugger_interface.c"
                  *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
#line 195 "debugger_interface.m"
                else
#line 195 "debugger_interface.m"
                  if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4287 "mdb.debugger_interface.c"
                    *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
#line 195 "debugger_interface.m"
                  else
#line 195 "debugger_interface.m"
                    if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4293 "mdb.debugger_interface.c"
                      *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
#line 195 "debugger_interface.m"
                    else
#line 195 "debugger_interface.m"
                      if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4299 "mdb.debugger_interface.c"
                        *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
#line 195 "debugger_interface.m"
                      else
#line 195 "debugger_interface.m"
                        {
#line 195 "debugger_interface.m"
                          MR_Word mdb__debugger_interface__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));

#line 195 "debugger_interface.m"
                          {
#line 195 "debugger_interface.m"
                            mercury__list____Compare____list_1_0(mdb__debugger_interface__TypeInfo_for_T_57, mdb__debugger_interface__HeadVar__1_1, mdb__debugger_interface__V_63_63, mdb__debugger_interface__V_35_35);
#line 195 "debugger_interface.m"
                            return;
                          }
#line 195 "debugger_interface.m"
                        }
#line 195 "debugger_interface.m"
              }
#line 195 "debugger_interface.m"
  }
#line 195 "debugger_interface.m"
}

#line 195 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____match_1_0(
#line 195 "debugger_interface.m"
  MR_Word mdb__debugger_interface__TypeInfo_for_T_17,
#line 195 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__1_1,
#line 195 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__2_2)
#line 195 "debugger_interface.m"
{
#line 195 "debugger_interface.m"
  {
#line 195 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 195 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__CastX_15 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 195 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__CastY_16 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 195 "debugger_interface.m"
    mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastX_15 == mdb__debugger_interface__CastY_16);
#line 195 "debugger_interface.m"
    if (mdb__debugger_interface__succeeded)
#line 195 "debugger_interface.m"
      mdb__debugger_interface__succeeded = MR_TRUE;
#line 195 "debugger_interface.m"
    else
#line 195 "debugger_interface.m"
      if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 195 "debugger_interface.m"
        {
#line 195 "debugger_interface.m"
          MR_Integer mdb__debugger_interface__CastX_3 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 195 "debugger_interface.m"
          MR_Integer mdb__debugger_interface__CastY_4 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 195 "debugger_interface.m"
          mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_4 == mdb__debugger_interface__CastX_3);
#line 195 "debugger_interface.m"
        }
#line 195 "debugger_interface.m"
      else
#line 195 "debugger_interface.m"
        if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 195 "debugger_interface.m"
          {
#line 195 "debugger_interface.m"
            MR_Box mdb__debugger_interface__V_5_5 = (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0));
#line 195 "debugger_interface.m"
            MR_Box mdb__debugger_interface__V_6_6;

#line 195 "debugger_interface.m"
            mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 195 "debugger_interface.m"
            if (mdb__debugger_interface__succeeded)
#line 195 "debugger_interface.m"
              {
#line 195 "debugger_interface.m"
                mdb__debugger_interface__V_6_6 = (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0));
#line 4384 "mdb.debugger_interface.c"
                {
#line 4386 "mdb.debugger_interface.c"
                  return mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_for_T_17, mdb__debugger_interface__V_5_5, mdb__debugger_interface__V_6_6);
                }
#line 195 "debugger_interface.m"
              }
#line 195 "debugger_interface.m"
          }
#line 195 "debugger_interface.m"
        else
#line 195 "debugger_interface.m"
          if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 195 "debugger_interface.m"
            {
#line 195 "debugger_interface.m"
              MR_Box mdb__debugger_interface__V_7_7 = (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0));
#line 195 "debugger_interface.m"
              MR_Box mdb__debugger_interface__V_8_8;

#line 195 "debugger_interface.m"
              mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 195 "debugger_interface.m"
              if (mdb__debugger_interface__succeeded)
#line 195 "debugger_interface.m"
                {
#line 195 "debugger_interface.m"
                  mdb__debugger_interface__V_8_8 = (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0));
#line 4412 "mdb.debugger_interface.c"
                  {
#line 4414 "mdb.debugger_interface.c"
                    return mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_for_T_17, mdb__debugger_interface__V_7_7, mdb__debugger_interface__V_8_8);
                  }
#line 195 "debugger_interface.m"
                }
#line 195 "debugger_interface.m"
            }
#line 195 "debugger_interface.m"
          else
#line 195 "debugger_interface.m"
            if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 195 "debugger_interface.m"
              {
#line 195 "debugger_interface.m"
                MR_Box mdb__debugger_interface__V_11_11 = (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1));
#line 195 "debugger_interface.m"
                MR_Box mdb__debugger_interface__V_12_12 = (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2));
#line 195 "debugger_interface.m"
                MR_Box mdb__debugger_interface__V_13_13;
#line 195 "debugger_interface.m"
                MR_Box mdb__debugger_interface__V_14_14;

#line 195 "debugger_interface.m"
                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 195 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 195 "debugger_interface.m"
                  {
#line 195 "debugger_interface.m"
                    mdb__debugger_interface__V_13_13 = (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1));
#line 195 "debugger_interface.m"
                    mdb__debugger_interface__V_14_14 = (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2));
#line 4446 "mdb.debugger_interface.c"
                    {
#line 4448 "mdb.debugger_interface.c"
                      mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_for_T_17, mdb__debugger_interface__V_11_11, mdb__debugger_interface__V_13_13);
                    }
#line 195 "debugger_interface.m"
                    if (mdb__debugger_interface__succeeded)
#line 4453 "mdb.debugger_interface.c"
                      {
#line 4455 "mdb.debugger_interface.c"
                        return mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_for_T_17, mdb__debugger_interface__V_12_12, mdb__debugger_interface__V_14_14);
                      }
#line 195 "debugger_interface.m"
                  }
#line 195 "debugger_interface.m"
              }
#line 195 "debugger_interface.m"
            else
#line 195 "debugger_interface.m"
              {
#line 195 "debugger_interface.m"
                MR_Word mdb__debugger_interface__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 195 "debugger_interface.m"
                MR_Word mdb__debugger_interface__V_10_10;

#line 195 "debugger_interface.m"
                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 195 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 195 "debugger_interface.m"
                  {
#line 195 "debugger_interface.m"
                    mdb__debugger_interface__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 4479 "mdb.debugger_interface.c"
                    {
#line 4481 "mdb.debugger_interface.c"
                      return mdb__debugger_interface__succeeded = mercury__list____Unify____list_1_0(mdb__debugger_interface__TypeInfo_for_T_17, mdb__debugger_interface__V_9_9, mdb__debugger_interface__V_10_10);
                    }
#line 195 "debugger_interface.m"
                  }
#line 195 "debugger_interface.m"
              }
#line 195 "debugger_interface.m"
    return mdb__debugger_interface__succeeded;
#line 195 "debugger_interface.m"
  }
#line 195 "debugger_interface.m"
}

#line 188 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Compare____event_number_0_0(
#line 188 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
#line 188 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__2_2,
#line 188 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__3_3)
#line 188 "debugger_interface.m"
{
#line 188 "debugger_interface.m"
  {
#line 188 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 188 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__Cast_HeadVar1_4 = mdb__debugger_interface__HeadVar__2_2;
#line 188 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__Cast_HeadVar2_5 = mdb__debugger_interface__HeadVar__3_3;

#line 188 "debugger_interface.m"
    {
#line 188 "debugger_interface.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__debugger_interface__HeadVar__1_1, mdb__debugger_interface__Cast_HeadVar1_4, mdb__debugger_interface__Cast_HeadVar2_5);
#line 188 "debugger_interface.m"
      return;
    }
#line 188 "debugger_interface.m"
  }
#line 188 "debugger_interface.m"
}

#line 188 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____event_number_0_0(
#line 188 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__1_1,
#line 188 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__2_2)
#line 188 "debugger_interface.m"
{
#line 188 "debugger_interface.m"
  {
#line 188 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 188 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__Cast_HeadVar1_3 = mdb__debugger_interface__HeadVar__1_1;
#line 188 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__Cast_HeadVar2_4 = mdb__debugger_interface__HeadVar__2_2;

#line 188 "debugger_interface.m"
    mdb__debugger_interface__succeeded = (mdb__debugger_interface__Cast_HeadVar1_3 == mdb__debugger_interface__Cast_HeadVar2_4);
#line 188 "debugger_interface.m"
    return mdb__debugger_interface__succeeded;
#line 188 "debugger_interface.m"
  }
#line 188 "debugger_interface.m"
}

#line 59 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Compare____determinism_0_0(
#line 59 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
#line 59 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__2_2,
#line 59 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__3_3)
#line 59 "debugger_interface.m"
{
#line 59 "debugger_interface.m"
  {
#line 59 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 59 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__Cast_HeadVar1_4 = mdb__debugger_interface__HeadVar__2_2;
#line 59 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__Cast_HeadVar2_5 = mdb__debugger_interface__HeadVar__3_3;

#line 59 "debugger_interface.m"
    {
#line 59 "debugger_interface.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__debugger_interface__HeadVar__1_1, mdb__debugger_interface__Cast_HeadVar1_4, mdb__debugger_interface__Cast_HeadVar2_5);
#line 59 "debugger_interface.m"
      return;
    }
#line 59 "debugger_interface.m"
  }
#line 59 "debugger_interface.m"
}

#line 59 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____determinism_0_0(
#line 59 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__1_1,
#line 59 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__2_2)
#line 59 "debugger_interface.m"
{
#line 59 "debugger_interface.m"
  {
#line 59 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 59 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__Cast_HeadVar1_3 = mdb__debugger_interface__HeadVar__1_1;
#line 59 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__Cast_HeadVar2_4 = mdb__debugger_interface__HeadVar__2_2;

#line 59 "debugger_interface.m"
    mdb__debugger_interface__succeeded = (mdb__debugger_interface__Cast_HeadVar1_3 == mdb__debugger_interface__Cast_HeadVar2_4);
#line 59 "debugger_interface.m"
    return mdb__debugger_interface__succeeded;
#line 59 "debugger_interface.m"
  }
#line 59 "debugger_interface.m"
}

#line 190 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Compare____depth_number_0_0(
#line 190 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
#line 190 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__2_2,
#line 190 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__3_3)
#line 190 "debugger_interface.m"
{
#line 190 "debugger_interface.m"
  {
#line 190 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 190 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__Cast_HeadVar1_4 = mdb__debugger_interface__HeadVar__2_2;
#line 190 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__Cast_HeadVar2_5 = mdb__debugger_interface__HeadVar__3_3;

#line 190 "debugger_interface.m"
    {
#line 190 "debugger_interface.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__debugger_interface__HeadVar__1_1, mdb__debugger_interface__Cast_HeadVar1_4, mdb__debugger_interface__Cast_HeadVar2_5);
#line 190 "debugger_interface.m"
      return;
    }
#line 190 "debugger_interface.m"
  }
#line 190 "debugger_interface.m"
}

#line 190 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____depth_number_0_0(
#line 190 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__1_1,
#line 190 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__2_2)
#line 190 "debugger_interface.m"
{
#line 190 "debugger_interface.m"
  {
#line 190 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 190 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__Cast_HeadVar1_3 = mdb__debugger_interface__HeadVar__1_1;
#line 190 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__Cast_HeadVar2_4 = mdb__debugger_interface__HeadVar__2_2;

#line 190 "debugger_interface.m"
    mdb__debugger_interface__succeeded = (mdb__debugger_interface__Cast_HeadVar1_3 == mdb__debugger_interface__Cast_HeadVar2_4);
#line 190 "debugger_interface.m"
    return mdb__debugger_interface__succeeded;
#line 190 "debugger_interface.m"
  }
#line 190 "debugger_interface.m"
}

#line 204 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Compare____debugger_response_0_0(
#line 204 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
#line 204 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__2_2,
#line 204 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__3_3)
#line 204 "debugger_interface.m"
{
#line 204 "debugger_interface.m"
  {
#line 204 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 204 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__CastX_146 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;
#line 204 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__CastY_147 = (MR_Integer) mdb__debugger_interface__HeadVar__3_3;

#line 204 "debugger_interface.m"
    mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastX_146 == mdb__debugger_interface__CastY_147);
#line 204 "debugger_interface.m"
    if (mdb__debugger_interface__succeeded)
#line 4696 "mdb.debugger_interface.c"
      *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 0;
#line 204 "debugger_interface.m"
    else
#line 204 "debugger_interface.m"
      {
#line 204 "debugger_interface.m"
        MR_Integer mdb__debugger_interface__V_4_4;
#line 204 "debugger_interface.m"
        MR_Integer mdb__debugger_interface__V_5_5;

#line 204 "debugger_interface.m"
        {
#line 204 "debugger_interface.m"
          mdb__debugger_interface____Index____debugger_response_0_0(mdb__debugger_interface__HeadVar__2_2, &mdb__debugger_interface__V_4_4);
        }
#line 204 "debugger_interface.m"
        {
#line 204 "debugger_interface.m"
          mdb__debugger_interface____Index____debugger_response_0_0(mdb__debugger_interface__HeadVar__3_3, &mdb__debugger_interface__V_5_5);
        }
#line 204 "debugger_interface.m"
        mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_4_4 < mdb__debugger_interface__V_5_5);
#line 204 "debugger_interface.m"
        if (mdb__debugger_interface__succeeded)
#line 4721 "mdb.debugger_interface.c"
          *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
#line 204 "debugger_interface.m"
        else
#line 204 "debugger_interface.m"
          {
#line 204 "debugger_interface.m"
            mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_4_4 > mdb__debugger_interface__V_5_5);
#line 204 "debugger_interface.m"
            if (mdb__debugger_interface__succeeded)
#line 4731 "mdb.debugger_interface.c"
              *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
#line 204 "debugger_interface.m"
            else
#line 204 "debugger_interface.m"
              {
#line 204 "debugger_interface.m"
                MR_Word mdb__debugger_interface__V_6_6;

#line 204 "debugger_interface.m"
                if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 204 "debugger_interface.m"
                  {
#line 204 "debugger_interface.m"
                    mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 204 "debugger_interface.m"
                    mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                  }
#line 204 "debugger_interface.m"
                else
#line 204 "debugger_interface.m"
                  if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18)))))
#line 204 "debugger_interface.m"
                    {
#line 204 "debugger_interface.m"
                      mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 204 "debugger_interface.m"
                      mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                    }
#line 204 "debugger_interface.m"
                  else
#line 204 "debugger_interface.m"
                    if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 204 "debugger_interface.m"
                      {
#line 204 "debugger_interface.m"
                        mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 204 "debugger_interface.m"
                        mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                      }
#line 204 "debugger_interface.m"
                    else
#line 204 "debugger_interface.m"
                      if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 204 "debugger_interface.m"
                        {
#line 204 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 204 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                        }
#line 204 "debugger_interface.m"
                      else
#line 204 "debugger_interface.m"
                        if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 204 "debugger_interface.m"
                          {
#line 204 "debugger_interface.m"
                            mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 204 "debugger_interface.m"
                            mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                          }
#line 204 "debugger_interface.m"
                        else
#line 204 "debugger_interface.m"
                          if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 204 "debugger_interface.m"
                            {
#line 204 "debugger_interface.m"
                              mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 204 "debugger_interface.m"
                              mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                            }
#line 204 "debugger_interface.m"
                          else
#line 204 "debugger_interface.m"
                            if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 204 "debugger_interface.m"
                              {
#line 204 "debugger_interface.m"
                                mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 204 "debugger_interface.m"
                                mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                              }
#line 204 "debugger_interface.m"
                            else
#line 204 "debugger_interface.m"
                              if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 204 "debugger_interface.m"
                                {
#line 204 "debugger_interface.m"
                                  mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 204 "debugger_interface.m"
                                  mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                                }
#line 204 "debugger_interface.m"
                              else
#line 204 "debugger_interface.m"
                                if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 204 "debugger_interface.m"
                                  {
#line 204 "debugger_interface.m"
                                    mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 204 "debugger_interface.m"
                                    mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                                  }
#line 204 "debugger_interface.m"
                                else
#line 204 "debugger_interface.m"
                                  if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 204 "debugger_interface.m"
                                    {
#line 204 "debugger_interface.m"
                                      mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 204 "debugger_interface.m"
                                      mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                                    }
#line 204 "debugger_interface.m"
                                  else
#line 204 "debugger_interface.m"
                                    if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 204 "debugger_interface.m"
                                      {
#line 204 "debugger_interface.m"
                                        mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 204 "debugger_interface.m"
                                        mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                                      }
#line 204 "debugger_interface.m"
                                    else
#line 204 "debugger_interface.m"
                                      if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 204 "debugger_interface.m"
                                        {
#line 204 "debugger_interface.m"
                                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 204 "debugger_interface.m"
                                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                                        }
#line 204 "debugger_interface.m"
                                      else
#line 204 "debugger_interface.m"
                                        if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 204 "debugger_interface.m"
                                          {
#line 204 "debugger_interface.m"
                                            mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 204 "debugger_interface.m"
                                            mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                                          }
#line 204 "debugger_interface.m"
                                        else
#line 204 "debugger_interface.m"
                                          if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 204 "debugger_interface.m"
                                            {
#line 204 "debugger_interface.m"
                                              mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 204 "debugger_interface.m"
                                              mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                                            }
#line 204 "debugger_interface.m"
                                          else
#line 204 "debugger_interface.m"
                                            if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 204 "debugger_interface.m"
                                              {
#line 204 "debugger_interface.m"
                                                mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 204 "debugger_interface.m"
                                                mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                                              }
#line 204 "debugger_interface.m"
                                            else
#line 204 "debugger_interface.m"
                                              if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 204 "debugger_interface.m"
                                                {
#line 204 "debugger_interface.m"
                                                  mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 204 "debugger_interface.m"
                                                  mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                                                }
#line 204 "debugger_interface.m"
                                              else
#line 204 "debugger_interface.m"
                                                if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 204 "debugger_interface.m"
                                                  {
#line 204 "debugger_interface.m"
                                                    mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 204 "debugger_interface.m"
                                                    mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                                                  }
#line 204 "debugger_interface.m"
                                                else
#line 204 "debugger_interface.m"
                                                  if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 204 "debugger_interface.m"
                                                    {
#line 204 "debugger_interface.m"
                                                      mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 204 "debugger_interface.m"
                                                      mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                                                    }
#line 204 "debugger_interface.m"
                                                  else
#line 204 "debugger_interface.m"
                                                    if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 204 "debugger_interface.m"
                                                      {
#line 204 "debugger_interface.m"
                                                        mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 204 "debugger_interface.m"
                                                        mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                                                      }
#line 204 "debugger_interface.m"
                                                    else
#line 204 "debugger_interface.m"
                                                      if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 204 "debugger_interface.m"
                                                        {
#line 204 "debugger_interface.m"
                                                          MR_Integer mdb__debugger_interface__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));
#line 204 "debugger_interface.m"
                                                          MR_Integer mdb__debugger_interface__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                          MR_Integer mdb__debugger_interface__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 204 "debugger_interface.m"
                                                          MR_Word mdb__debugger_interface__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
#line 204 "debugger_interface.m"
                                                          MR_String mdb__debugger_interface__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 4)));
#line 204 "debugger_interface.m"
                                                          MR_String mdb__debugger_interface__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 5)));
#line 204 "debugger_interface.m"
                                                          MR_String mdb__debugger_interface__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 6)));
#line 204 "debugger_interface.m"
                                                          MR_String mdb__debugger_interface__V_52_52 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 7)));
#line 204 "debugger_interface.m"
                                                          MR_Integer mdb__debugger_interface__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 8)));
#line 204 "debugger_interface.m"
                                                          MR_Integer mdb__debugger_interface__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 9)));
#line 204 "debugger_interface.m"
                                                          MR_Integer mdb__debugger_interface__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 10)));
#line 204 "debugger_interface.m"
                                                          MR_String mdb__debugger_interface__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 11)));
#line 204 "debugger_interface.m"
                                                          MR_Integer mdb__debugger_interface__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 12)));
#line 204 "debugger_interface.m"
                                                          MR_Integer mdb__debugger_interface__V_58_58;
#line 204 "debugger_interface.m"
                                                          MR_Integer mdb__debugger_interface__V_59_59;
#line 204 "debugger_interface.m"
                                                          MR_Integer mdb__debugger_interface__V_60_60;
#line 204 "debugger_interface.m"
                                                          MR_Word mdb__debugger_interface__V_61_61;
#line 204 "debugger_interface.m"
                                                          MR_String mdb__debugger_interface__V_62_62;
#line 204 "debugger_interface.m"
                                                          MR_String mdb__debugger_interface__V_63_63;
#line 204 "debugger_interface.m"
                                                          MR_String mdb__debugger_interface__V_64_64;
#line 204 "debugger_interface.m"
                                                          MR_String mdb__debugger_interface__V_65_65;
#line 204 "debugger_interface.m"
                                                          MR_Integer mdb__debugger_interface__V_66_66;
#line 204 "debugger_interface.m"
                                                          MR_Integer mdb__debugger_interface__V_67_67;
#line 204 "debugger_interface.m"
                                                          MR_Integer mdb__debugger_interface__V_68_68;
#line 204 "debugger_interface.m"
                                                          MR_String mdb__debugger_interface__V_69_69;
#line 204 "debugger_interface.m"
                                                          MR_Integer mdb__debugger_interface__V_70_70;
#line 204 "debugger_interface.m"
                                                          MR_Word mdb__debugger_interface__V_71_71;

#line 204 "debugger_interface.m"
                                                          mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 204 "debugger_interface.m"
                                                          if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                            {
#line 204 "debugger_interface.m"
                                                              mdb__debugger_interface__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)));
#line 204 "debugger_interface.m"
                                                              mdb__debugger_interface__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                              mdb__debugger_interface__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 2)));
#line 204 "debugger_interface.m"
                                                              mdb__debugger_interface__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 3)));
#line 204 "debugger_interface.m"
                                                              mdb__debugger_interface__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 4)));
#line 204 "debugger_interface.m"
                                                              mdb__debugger_interface__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 5)));
#line 204 "debugger_interface.m"
                                                              mdb__debugger_interface__V_64_64 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 6)));
#line 204 "debugger_interface.m"
                                                              mdb__debugger_interface__V_65_65 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 7)));
#line 204 "debugger_interface.m"
                                                              mdb__debugger_interface__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 8)));
#line 204 "debugger_interface.m"
                                                              mdb__debugger_interface__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 9)));
#line 204 "debugger_interface.m"
                                                              mdb__debugger_interface__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 10)));
#line 204 "debugger_interface.m"
                                                              mdb__debugger_interface__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 11)));
#line 204 "debugger_interface.m"
                                                              mdb__debugger_interface__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 12)));
#line 204 "debugger_interface.m"
                                                              {
#line 204 "debugger_interface.m"
                                                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_71_71, mdb__debugger_interface__V_45_45, mdb__debugger_interface__V_58_58);
                                                              }
#line 5064 "mdb.debugger_interface.c"
                                                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_71_71 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                              if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_71_71;
#line 204 "debugger_interface.m"
                                                              else
#line 204 "debugger_interface.m"
                                                                {
#line 204 "debugger_interface.m"
                                                                  MR_Word mdb__debugger_interface__V_72_72;

#line 204 "debugger_interface.m"
                                                                  {
#line 204 "debugger_interface.m"
                                                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_72_72, mdb__debugger_interface__V_46_46, mdb__debugger_interface__V_59_59);
                                                                  }
#line 5084 "mdb.debugger_interface.c"
                                                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_72_72 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                  if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_72_72;
#line 204 "debugger_interface.m"
                                                                  else
#line 204 "debugger_interface.m"
                                                                    {
#line 204 "debugger_interface.m"
                                                                      MR_Word mdb__debugger_interface__V_73_73;

#line 204 "debugger_interface.m"
                                                                      {
#line 204 "debugger_interface.m"
                                                                        mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_73_73, mdb__debugger_interface__V_47_47, mdb__debugger_interface__V_60_60);
                                                                      }
#line 5104 "mdb.debugger_interface.c"
                                                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_73_73 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                      mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                      if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                        mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_73_73;
#line 204 "debugger_interface.m"
                                                                      else
#line 204 "debugger_interface.m"
                                                                        {
#line 204 "debugger_interface.m"
                                                                          MR_Word mdb__debugger_interface__V_74_74;
#line 204 "debugger_interface.m"
                                                                          MR_Integer mdb__debugger_interface__V_199_199 = (MR_Integer) mdb__debugger_interface__V_48_48;
#line 204 "debugger_interface.m"
                                                                          MR_Integer mdb__debugger_interface__V_200_200 = (MR_Integer) mdb__debugger_interface__V_61_61;

#line 204 "debugger_interface.m"
                                                                          {
#line 204 "debugger_interface.m"
                                                                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_74_74, mdb__debugger_interface__V_199_199, mdb__debugger_interface__V_200_200);
                                                                          }
#line 5128 "mdb.debugger_interface.c"
                                                                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_74_74 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                          if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                            mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_74_74;
#line 204 "debugger_interface.m"
                                                                          else
#line 204 "debugger_interface.m"
                                                                            {
#line 204 "debugger_interface.m"
                                                                              MR_Word mdb__debugger_interface__V_75_75;

#line 204 "debugger_interface.m"
                                                                              {
#line 204 "debugger_interface.m"
                                                                                mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_75_75, mdb__debugger_interface__V_49_49, mdb__debugger_interface__V_62_62);
                                                                              }
#line 5148 "mdb.debugger_interface.c"
                                                                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_75_75 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                              if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_75_75;
#line 204 "debugger_interface.m"
                                                                              else
#line 204 "debugger_interface.m"
                                                                                {
#line 204 "debugger_interface.m"
                                                                                  MR_Word mdb__debugger_interface__V_76_76;

#line 204 "debugger_interface.m"
                                                                                  {
#line 204 "debugger_interface.m"
                                                                                    mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_76_76, mdb__debugger_interface__V_50_50, mdb__debugger_interface__V_63_63);
                                                                                  }
#line 5168 "mdb.debugger_interface.c"
                                                                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_76_76 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                                  if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_76_76;
#line 204 "debugger_interface.m"
                                                                                  else
#line 204 "debugger_interface.m"
                                                                                    {
#line 204 "debugger_interface.m"
                                                                                      MR_Word mdb__debugger_interface__V_77_77;

#line 204 "debugger_interface.m"
                                                                                      {
#line 204 "debugger_interface.m"
                                                                                        mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_77_77, mdb__debugger_interface__V_51_51, mdb__debugger_interface__V_64_64);
                                                                                      }
#line 5188 "mdb.debugger_interface.c"
                                                                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_77_77 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                                      mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                                      if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                        mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_77_77;
#line 204 "debugger_interface.m"
                                                                                      else
#line 204 "debugger_interface.m"
                                                                                        {
#line 204 "debugger_interface.m"
                                                                                          MR_Word mdb__debugger_interface__V_78_78;

#line 204 "debugger_interface.m"
                                                                                          {
#line 204 "debugger_interface.m"
                                                                                            mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_78_78, mdb__debugger_interface__V_52_52, mdb__debugger_interface__V_65_65);
                                                                                          }
#line 5208 "mdb.debugger_interface.c"
                                                                                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_78_78 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                                          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                                          if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                            mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_78_78;
#line 204 "debugger_interface.m"
                                                                                          else
#line 204 "debugger_interface.m"
                                                                                            {
#line 204 "debugger_interface.m"
                                                                                              MR_Word mdb__debugger_interface__V_79_79;

#line 204 "debugger_interface.m"
                                                                                              {
#line 204 "debugger_interface.m"
                                                                                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_79_79, mdb__debugger_interface__V_53_53, mdb__debugger_interface__V_66_66);
                                                                                              }
#line 5228 "mdb.debugger_interface.c"
                                                                                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_79_79 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                                              if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_79_79;
#line 204 "debugger_interface.m"
                                                                                              else
#line 204 "debugger_interface.m"
                                                                                                {
#line 204 "debugger_interface.m"
                                                                                                  MR_Word mdb__debugger_interface__V_80_80;

#line 204 "debugger_interface.m"
                                                                                                  {
#line 204 "debugger_interface.m"
                                                                                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_80_80, mdb__debugger_interface__V_54_54, mdb__debugger_interface__V_67_67);
                                                                                                  }
#line 5248 "mdb.debugger_interface.c"
                                                                                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_80_80 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                                                  if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_80_80;
#line 204 "debugger_interface.m"
                                                                                                  else
#line 204 "debugger_interface.m"
                                                                                                    {
#line 204 "debugger_interface.m"
                                                                                                      MR_Word mdb__debugger_interface__V_81_81;

#line 204 "debugger_interface.m"
                                                                                                      {
#line 204 "debugger_interface.m"
                                                                                                        mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_81_81, mdb__debugger_interface__V_55_55, mdb__debugger_interface__V_68_68);
                                                                                                      }
#line 5268 "mdb.debugger_interface.c"
                                                                                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_81_81 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                                                      mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                                                      if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                                        mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_81_81;
#line 204 "debugger_interface.m"
                                                                                                      else
#line 204 "debugger_interface.m"
                                                                                                        {
#line 204 "debugger_interface.m"
                                                                                                          MR_Word mdb__debugger_interface__V_82_82;

#line 204 "debugger_interface.m"
                                                                                                          {
#line 204 "debugger_interface.m"
                                                                                                            mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_82_82, mdb__debugger_interface__V_56_56, mdb__debugger_interface__V_69_69);
                                                                                                          }
#line 5288 "mdb.debugger_interface.c"
                                                                                                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_82_82 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                                                          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                                                          if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                                            mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_82_82;
#line 204 "debugger_interface.m"
                                                                                                          else
#line 204 "debugger_interface.m"
                                                                                                            {
#line 204 "debugger_interface.m"
                                                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_57_57, mdb__debugger_interface__V_70_70);
                                                                                                            }
#line 204 "debugger_interface.m"
                                                                                                        }
#line 204 "debugger_interface.m"
                                                                                                    }
#line 204 "debugger_interface.m"
                                                                                                }
#line 204 "debugger_interface.m"
                                                                                            }
#line 204 "debugger_interface.m"
                                                                                        }
#line 204 "debugger_interface.m"
                                                                                    }
#line 204 "debugger_interface.m"
                                                                                }
#line 204 "debugger_interface.m"
                                                                            }
#line 204 "debugger_interface.m"
                                                                        }
#line 204 "debugger_interface.m"
                                                                    }
#line 204 "debugger_interface.m"
                                                                }
#line 204 "debugger_interface.m"
                                                              mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                                                            }
#line 204 "debugger_interface.m"
                                                        }
#line 204 "debugger_interface.m"
                                                      else
#line 204 "debugger_interface.m"
                                                        if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 204 "debugger_interface.m"
                                                          {
#line 204 "debugger_interface.m"
                                                            MR_Integer mdb__debugger_interface__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));
#line 204 "debugger_interface.m"
                                                            MR_Integer mdb__debugger_interface__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                            MR_Integer mdb__debugger_interface__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 204 "debugger_interface.m"
                                                            MR_Word mdb__debugger_interface__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 15);
#line 204 "debugger_interface.m"
                                                            MR_Word mdb__debugger_interface__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 204 "debugger_interface.m"
                                                            MR_String mdb__debugger_interface__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 4)));
#line 204 "debugger_interface.m"
                                                            MR_String mdb__debugger_interface__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 5)));
#line 204 "debugger_interface.m"
                                                            MR_String mdb__debugger_interface__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 6)));
#line 204 "debugger_interface.m"
                                                            MR_Integer mdb__debugger_interface__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 7)));
#line 204 "debugger_interface.m"
                                                            MR_Integer mdb__debugger_interface__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 8)));
#line 204 "debugger_interface.m"
                                                            MR_Integer mdb__debugger_interface__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 9)));
#line 204 "debugger_interface.m"
                                                            MR_String mdb__debugger_interface__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 10)));
#line 204 "debugger_interface.m"
                                                            MR_Integer mdb__debugger_interface__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 11)));
#line 204 "debugger_interface.m"
                                                            MR_Integer mdb__debugger_interface__V_20_20;
#line 204 "debugger_interface.m"
                                                            MR_Integer mdb__debugger_interface__V_21_21;
#line 204 "debugger_interface.m"
                                                            MR_Integer mdb__debugger_interface__V_22_22;
#line 204 "debugger_interface.m"
                                                            MR_Word mdb__debugger_interface__V_23_23;
#line 204 "debugger_interface.m"
                                                            MR_Word mdb__debugger_interface__V_24_24;
#line 204 "debugger_interface.m"
                                                            MR_String mdb__debugger_interface__V_25_25;
#line 204 "debugger_interface.m"
                                                            MR_String mdb__debugger_interface__V_26_26;
#line 204 "debugger_interface.m"
                                                            MR_String mdb__debugger_interface__V_27_27;
#line 204 "debugger_interface.m"
                                                            MR_Integer mdb__debugger_interface__V_28_28;
#line 204 "debugger_interface.m"
                                                            MR_Integer mdb__debugger_interface__V_29_29;
#line 204 "debugger_interface.m"
                                                            MR_Integer mdb__debugger_interface__V_30_30;
#line 204 "debugger_interface.m"
                                                            MR_String mdb__debugger_interface__V_31_31;
#line 204 "debugger_interface.m"
                                                            MR_Integer mdb__debugger_interface__V_32_32;
#line 204 "debugger_interface.m"
                                                            MR_Word mdb__debugger_interface__V_33_33;

#line 204 "debugger_interface.m"
                                                            mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                            if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                              {
#line 204 "debugger_interface.m"
                                                                mdb__debugger_interface__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)));
#line 204 "debugger_interface.m"
                                                                mdb__debugger_interface__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                mdb__debugger_interface__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 2)));
#line 204 "debugger_interface.m"
                                                                mdb__debugger_interface__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 3)))) & (MR_Integer) 15);
#line 204 "debugger_interface.m"
                                                                mdb__debugger_interface__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 204 "debugger_interface.m"
                                                                mdb__debugger_interface__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 4)));
#line 204 "debugger_interface.m"
                                                                mdb__debugger_interface__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 5)));
#line 204 "debugger_interface.m"
                                                                mdb__debugger_interface__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 6)));
#line 204 "debugger_interface.m"
                                                                mdb__debugger_interface__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 7)));
#line 204 "debugger_interface.m"
                                                                mdb__debugger_interface__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 8)));
#line 204 "debugger_interface.m"
                                                                mdb__debugger_interface__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 9)));
#line 204 "debugger_interface.m"
                                                                mdb__debugger_interface__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 10)));
#line 204 "debugger_interface.m"
                                                                mdb__debugger_interface__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 11)));
#line 204 "debugger_interface.m"
                                                                {
#line 204 "debugger_interface.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_33_33, mdb__debugger_interface__V_7_7, mdb__debugger_interface__V_20_20);
                                                                }
#line 5429 "mdb.debugger_interface.c"
                                                                mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_33_33 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                  mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_33_33;
#line 204 "debugger_interface.m"
                                                                else
#line 204 "debugger_interface.m"
                                                                  {
#line 204 "debugger_interface.m"
                                                                    MR_Word mdb__debugger_interface__V_34_34;

#line 204 "debugger_interface.m"
                                                                    {
#line 204 "debugger_interface.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_34_34, mdb__debugger_interface__V_8_8, mdb__debugger_interface__V_21_21);
                                                                    }
#line 5449 "mdb.debugger_interface.c"
                                                                    mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_34_34 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                    mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                    if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                      mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_34_34;
#line 204 "debugger_interface.m"
                                                                    else
#line 204 "debugger_interface.m"
                                                                      {
#line 204 "debugger_interface.m"
                                                                        MR_Word mdb__debugger_interface__V_35_35;

#line 204 "debugger_interface.m"
                                                                        {
#line 204 "debugger_interface.m"
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_35_35, mdb__debugger_interface__V_9_9, mdb__debugger_interface__V_22_22);
                                                                        }
#line 5469 "mdb.debugger_interface.c"
                                                                        mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_35_35 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                        mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                        if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                          mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_35_35;
#line 204 "debugger_interface.m"
                                                                        else
#line 204 "debugger_interface.m"
                                                                          {
#line 204 "debugger_interface.m"
                                                                            MR_Word mdb__debugger_interface__V_36_36;
#line 204 "debugger_interface.m"
                                                                            MR_Integer mdb__debugger_interface__V_201_201 = (MR_Integer) mdb__debugger_interface__V_10_10;
#line 204 "debugger_interface.m"
                                                                            MR_Integer mdb__debugger_interface__V_202_202 = (MR_Integer) mdb__debugger_interface__V_23_23;

#line 204 "debugger_interface.m"
                                                                            {
#line 204 "debugger_interface.m"
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_36_36, mdb__debugger_interface__V_201_201, mdb__debugger_interface__V_202_202);
                                                                            }
#line 5493 "mdb.debugger_interface.c"
                                                                            mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_36_36 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                            mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                            if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                              mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_36_36;
#line 204 "debugger_interface.m"
                                                                            else
#line 204 "debugger_interface.m"
                                                                              {
#line 204 "debugger_interface.m"
                                                                                MR_Word mdb__debugger_interface__V_37_37;
#line 204 "debugger_interface.m"
                                                                                MR_Integer mdb__debugger_interface__V_203_203 = (MR_Integer) mdb__debugger_interface__V_11_11;
#line 204 "debugger_interface.m"
                                                                                MR_Integer mdb__debugger_interface__V_204_204 = (MR_Integer) mdb__debugger_interface__V_24_24;

#line 204 "debugger_interface.m"
                                                                                {
#line 204 "debugger_interface.m"
                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_37_37, mdb__debugger_interface__V_203_203, mdb__debugger_interface__V_204_204);
                                                                                }
#line 5517 "mdb.debugger_interface.c"
                                                                                mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_37_37 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                                mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                                if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                  mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_37_37;
#line 204 "debugger_interface.m"
                                                                                else
#line 204 "debugger_interface.m"
                                                                                  {
#line 204 "debugger_interface.m"
                                                                                    MR_Word mdb__debugger_interface__V_38_38;

#line 204 "debugger_interface.m"
                                                                                    {
#line 204 "debugger_interface.m"
                                                                                      mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_38_38, mdb__debugger_interface__V_12_12, mdb__debugger_interface__V_25_25);
                                                                                    }
#line 5537 "mdb.debugger_interface.c"
                                                                                    mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_38_38 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                                    mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                                    if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                      mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_38_38;
#line 204 "debugger_interface.m"
                                                                                    else
#line 204 "debugger_interface.m"
                                                                                      {
#line 204 "debugger_interface.m"
                                                                                        MR_Word mdb__debugger_interface__V_39_39;

#line 204 "debugger_interface.m"
                                                                                        {
#line 204 "debugger_interface.m"
                                                                                          mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_39_39, mdb__debugger_interface__V_13_13, mdb__debugger_interface__V_26_26);
                                                                                        }
#line 5557 "mdb.debugger_interface.c"
                                                                                        mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_39_39 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                                        mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                                        if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                          mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_39_39;
#line 204 "debugger_interface.m"
                                                                                        else
#line 204 "debugger_interface.m"
                                                                                          {
#line 204 "debugger_interface.m"
                                                                                            MR_Word mdb__debugger_interface__V_40_40;

#line 204 "debugger_interface.m"
                                                                                            {
#line 204 "debugger_interface.m"
                                                                                              mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_40_40, mdb__debugger_interface__V_14_14, mdb__debugger_interface__V_27_27);
                                                                                            }
#line 5577 "mdb.debugger_interface.c"
                                                                                            mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_40_40 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                                            mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                                            if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                              mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_40_40;
#line 204 "debugger_interface.m"
                                                                                            else
#line 204 "debugger_interface.m"
                                                                                              {
#line 204 "debugger_interface.m"
                                                                                                MR_Word mdb__debugger_interface__V_41_41;

#line 204 "debugger_interface.m"
                                                                                                {
#line 204 "debugger_interface.m"
                                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_41_41, mdb__debugger_interface__V_15_15, mdb__debugger_interface__V_28_28);
                                                                                                }
#line 5597 "mdb.debugger_interface.c"
                                                                                                mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_41_41 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                                                mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                                                if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                                  mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_41_41;
#line 204 "debugger_interface.m"
                                                                                                else
#line 204 "debugger_interface.m"
                                                                                                  {
#line 204 "debugger_interface.m"
                                                                                                    MR_Word mdb__debugger_interface__V_42_42;

#line 204 "debugger_interface.m"
                                                                                                    {
#line 204 "debugger_interface.m"
                                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_42_42, mdb__debugger_interface__V_16_16, mdb__debugger_interface__V_29_29);
                                                                                                    }
#line 5617 "mdb.debugger_interface.c"
                                                                                                    mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_42_42 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                                                    mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                                                    if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                                      mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_42_42;
#line 204 "debugger_interface.m"
                                                                                                    else
#line 204 "debugger_interface.m"
                                                                                                      {
#line 204 "debugger_interface.m"
                                                                                                        MR_Word mdb__debugger_interface__V_43_43;

#line 204 "debugger_interface.m"
                                                                                                        {
#line 204 "debugger_interface.m"
                                                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_43_43, mdb__debugger_interface__V_17_17, mdb__debugger_interface__V_30_30);
                                                                                                        }
#line 5637 "mdb.debugger_interface.c"
                                                                                                        mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_43_43 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                                                        mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                                                        if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                                          mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_43_43;
#line 204 "debugger_interface.m"
                                                                                                        else
#line 204 "debugger_interface.m"
                                                                                                          {
#line 204 "debugger_interface.m"
                                                                                                            MR_Word mdb__debugger_interface__V_44_44;

#line 204 "debugger_interface.m"
                                                                                                            {
#line 204 "debugger_interface.m"
                                                                                                              mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_44_44, mdb__debugger_interface__V_18_18, mdb__debugger_interface__V_31_31);
                                                                                                            }
#line 5657 "mdb.debugger_interface.c"
                                                                                                            mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_44_44 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                                                            mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                                                            if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                                              mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_44_44;
#line 204 "debugger_interface.m"
                                                                                                            else
#line 204 "debugger_interface.m"
                                                                                                              {
#line 204 "debugger_interface.m"
                                                                                                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_19_19, mdb__debugger_interface__V_32_32);
                                                                                                              }
#line 204 "debugger_interface.m"
                                                                                                          }
#line 204 "debugger_interface.m"
                                                                                                      }
#line 204 "debugger_interface.m"
                                                                                                  }
#line 204 "debugger_interface.m"
                                                                                              }
#line 204 "debugger_interface.m"
                                                                                          }
#line 204 "debugger_interface.m"
                                                                                      }
#line 204 "debugger_interface.m"
                                                                                  }
#line 204 "debugger_interface.m"
                                                                              }
#line 204 "debugger_interface.m"
                                                                          }
#line 204 "debugger_interface.m"
                                                                      }
#line 204 "debugger_interface.m"
                                                                  }
#line 204 "debugger_interface.m"
                                                                mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                                                              }
#line 204 "debugger_interface.m"
                                                          }
#line 204 "debugger_interface.m"
                                                        else
#line 204 "debugger_interface.m"
                                                          if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 204 "debugger_interface.m"
                                                            {
#line 204 "debugger_interface.m"
                                                              MR_Word mdb__debugger_interface__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                              MR_Word mdb__debugger_interface__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 204 "debugger_interface.m"
                                                              MR_Word mdb__debugger_interface__V_92_92;
#line 204 "debugger_interface.m"
                                                              MR_Word mdb__debugger_interface__V_93_93;
#line 204 "debugger_interface.m"
                                                              MR_Word mdb__debugger_interface__V_94_94;
#line 204 "debugger_interface.m"
                                                              MR_Word mdb__debugger_interface__TypeInfo_177_177;

#line 204 "debugger_interface.m"
                                                              mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 204 "debugger_interface.m"
                                                              if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                {
#line 204 "debugger_interface.m"
                                                                  mdb__debugger_interface__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                  mdb__debugger_interface__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 2)));
#line 5729 "mdb.debugger_interface.c"
                                                                  mdb__debugger_interface__TypeInfo_177_177 = (MR_Word) &mdb__debugger_interface_scalar_common_1[5];
#line 204 "debugger_interface.m"
                                                                  {
#line 204 "debugger_interface.m"
                                                                    mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_177_177, &mdb__debugger_interface__V_94_94, ((MR_Box) (mdb__debugger_interface__V_90_90)), ((MR_Box) (mdb__debugger_interface__V_92_92)));
                                                                  }
#line 5736 "mdb.debugger_interface.c"
                                                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_94_94 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                  if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_94_94;
#line 204 "debugger_interface.m"
                                                                  else
#line 204 "debugger_interface.m"
                                                                    {
#line 204 "debugger_interface.m"
                                                                      {
#line 204 "debugger_interface.m"
                                                                        mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[5], &mdb__debugger_interface__V_6_6, ((MR_Box) (mdb__debugger_interface__V_91_91)), ((MR_Box) (mdb__debugger_interface__V_93_93)));
                                                                      }
#line 204 "debugger_interface.m"
                                                                    }
#line 204 "debugger_interface.m"
                                                                  mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                                                                }
#line 204 "debugger_interface.m"
                                                            }
#line 204 "debugger_interface.m"
                                                          else
#line 204 "debugger_interface.m"
                                                            if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 204 "debugger_interface.m"
                                                              {
#line 204 "debugger_interface.m"
                                                                MR_Word mdb__debugger_interface__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                MR_Word mdb__debugger_interface__V_89_89;

#line 204 "debugger_interface.m"
                                                                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                  {
#line 204 "debugger_interface.m"
                                                                    mdb__debugger_interface__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                    {
#line 204 "debugger_interface.m"
                                                                      mercury__univ____Compare____univ_0_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_88_88, mdb__debugger_interface__V_89_89);
                                                                    }
#line 204 "debugger_interface.m"
                                                                    mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                                                                  }
#line 204 "debugger_interface.m"
                                                              }
#line 204 "debugger_interface.m"
                                                            else
#line 204 "debugger_interface.m"
                                                              if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 204 "debugger_interface.m"
                                                                {
#line 204 "debugger_interface.m"
                                                                  MR_Word mdb__debugger_interface__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                  MR_Word mdb__debugger_interface__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 204 "debugger_interface.m"
                                                                  MR_Word mdb__debugger_interface__V_85_85;
#line 204 "debugger_interface.m"
                                                                  MR_Word mdb__debugger_interface__V_86_86;
#line 204 "debugger_interface.m"
                                                                  MR_Word mdb__debugger_interface__V_87_87;
#line 204 "debugger_interface.m"
                                                                  MR_Word mdb__debugger_interface__TypeInfo_174_174;

#line 204 "debugger_interface.m"
                                                                  mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 204 "debugger_interface.m"
                                                                  if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                    {
#line 204 "debugger_interface.m"
                                                                      mdb__debugger_interface__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                      mdb__debugger_interface__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 2)));
#line 5820 "mdb.debugger_interface.c"
                                                                      mdb__debugger_interface__TypeInfo_174_174 = (MR_Word) &mdb__debugger_interface_scalar_common_1[0];
#line 204 "debugger_interface.m"
                                                                      {
#line 204 "debugger_interface.m"
                                                                        mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_174_174, &mdb__debugger_interface__V_87_87, ((MR_Box) (mdb__debugger_interface__V_83_83)), ((MR_Box) (mdb__debugger_interface__V_85_85)));
                                                                      }
#line 5827 "mdb.debugger_interface.c"
                                                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_87_87 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                      mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                      if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                        mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_87_87;
#line 204 "debugger_interface.m"
                                                                      else
#line 204 "debugger_interface.m"
                                                                        {
#line 204 "debugger_interface.m"
                                                                          {
#line 204 "debugger_interface.m"
                                                                            mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[5], &mdb__debugger_interface__V_6_6, ((MR_Box) (mdb__debugger_interface__V_84_84)), ((MR_Box) (mdb__debugger_interface__V_86_86)));
                                                                          }
#line 204 "debugger_interface.m"
                                                                        }
#line 204 "debugger_interface.m"
                                                                      mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                                                                    }
#line 204 "debugger_interface.m"
                                                                }
#line 204 "debugger_interface.m"
                                                              else
#line 204 "debugger_interface.m"
                                                                if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 204 "debugger_interface.m"
                                                                  {
#line 204 "debugger_interface.m"
                                                                    MR_String mdb__debugger_interface__V_124_124 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                    MR_String mdb__debugger_interface__V_125_125;

#line 204 "debugger_interface.m"
                                                                    mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 204 "debugger_interface.m"
                                                                    if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                      {
#line 204 "debugger_interface.m"
                                                                        mdb__debugger_interface__V_125_125 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                        {
#line 204 "debugger_interface.m"
                                                                          mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_124_124, mdb__debugger_interface__V_125_125);
                                                                        }
#line 204 "debugger_interface.m"
                                                                        mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                                                                      }
#line 204 "debugger_interface.m"
                                                                  }
#line 204 "debugger_interface.m"
                                                                else
#line 204 "debugger_interface.m"
                                                                  if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 204 "debugger_interface.m"
                                                                    {
#line 204 "debugger_interface.m"
                                                                      MR_String mdb__debugger_interface__V_134_134 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                      MR_String mdb__debugger_interface__V_135_135;

#line 204 "debugger_interface.m"
                                                                      mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 204 "debugger_interface.m"
                                                                      if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                        {
#line 204 "debugger_interface.m"
                                                                          mdb__debugger_interface__V_135_135 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                          {
#line 204 "debugger_interface.m"
                                                                            mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_134_134, mdb__debugger_interface__V_135_135);
                                                                          }
#line 204 "debugger_interface.m"
                                                                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                                                                        }
#line 204 "debugger_interface.m"
                                                                    }
#line 204 "debugger_interface.m"
                                                                  else
#line 204 "debugger_interface.m"
                                                                    if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 204 "debugger_interface.m"
                                                                      {
#line 204 "debugger_interface.m"
                                                                        MR_Integer mdb__debugger_interface__V_126_126 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                        MR_Integer mdb__debugger_interface__V_127_127 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 204 "debugger_interface.m"
                                                                        MR_Integer mdb__debugger_interface__V_128_128 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
#line 204 "debugger_interface.m"
                                                                        MR_Integer mdb__debugger_interface__V_129_129;
#line 204 "debugger_interface.m"
                                                                        MR_Integer mdb__debugger_interface__V_130_130;
#line 204 "debugger_interface.m"
                                                                        MR_Integer mdb__debugger_interface__V_131_131;
#line 204 "debugger_interface.m"
                                                                        MR_Word mdb__debugger_interface__V_132_132;

#line 204 "debugger_interface.m"
                                                                        mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 204 "debugger_interface.m"
                                                                        if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                          {
#line 204 "debugger_interface.m"
                                                                            mdb__debugger_interface__V_129_129 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                            mdb__debugger_interface__V_130_130 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 2)));
#line 204 "debugger_interface.m"
                                                                            mdb__debugger_interface__V_131_131 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 3)));
#line 204 "debugger_interface.m"
                                                                            {
#line 204 "debugger_interface.m"
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_132_132, mdb__debugger_interface__V_126_126, mdb__debugger_interface__V_129_129);
                                                                            }
#line 5950 "mdb.debugger_interface.c"
                                                                            mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_132_132 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                            mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                            if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                              mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_132_132;
#line 204 "debugger_interface.m"
                                                                            else
#line 204 "debugger_interface.m"
                                                                              {
#line 204 "debugger_interface.m"
                                                                                MR_Word mdb__debugger_interface__V_133_133;

#line 204 "debugger_interface.m"
                                                                                {
#line 204 "debugger_interface.m"
                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_133_133, mdb__debugger_interface__V_127_127, mdb__debugger_interface__V_130_130);
                                                                                }
#line 5970 "mdb.debugger_interface.c"
                                                                                mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_133_133 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                                mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                                if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                  mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_133_133;
#line 204 "debugger_interface.m"
                                                                                else
#line 204 "debugger_interface.m"
                                                                                  {
#line 204 "debugger_interface.m"
                                                                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_128_128, mdb__debugger_interface__V_131_131);
                                                                                  }
#line 204 "debugger_interface.m"
                                                                              }
#line 204 "debugger_interface.m"
                                                                            mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                                                                          }
#line 204 "debugger_interface.m"
                                                                      }
#line 204 "debugger_interface.m"
                                                                    else
#line 204 "debugger_interface.m"
                                                                      if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 204 "debugger_interface.m"
                                                                        {
#line 204 "debugger_interface.m"
                                                                          MR_String mdb__debugger_interface__V_95_95 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                          MR_String mdb__debugger_interface__V_96_96;

#line 204 "debugger_interface.m"
                                                                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 204 "debugger_interface.m"
                                                                          if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                            {
#line 204 "debugger_interface.m"
                                                                              mdb__debugger_interface__V_96_96 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                              {
#line 204 "debugger_interface.m"
                                                                                mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_95_95, mdb__debugger_interface__V_96_96);
                                                                              }
#line 204 "debugger_interface.m"
                                                                              mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                                                                            }
#line 204 "debugger_interface.m"
                                                                        }
#line 204 "debugger_interface.m"
                                                                      else
#line 204 "debugger_interface.m"
                                                                        if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 204 "debugger_interface.m"
                                                                          {
#line 204 "debugger_interface.m"
                                                                            MR_String mdb__debugger_interface__V_144_144 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                            MR_String mdb__debugger_interface__V_145_145;

#line 204 "debugger_interface.m"
                                                                            mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 204 "debugger_interface.m"
                                                                            if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                              {
#line 204 "debugger_interface.m"
                                                                                mdb__debugger_interface__V_145_145 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                                {
#line 204 "debugger_interface.m"
                                                                                  mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_144_144, mdb__debugger_interface__V_145_145);
                                                                                }
#line 204 "debugger_interface.m"
                                                                                mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                                                                              }
#line 204 "debugger_interface.m"
                                                                          }
#line 204 "debugger_interface.m"
                                                                        else
#line 204 "debugger_interface.m"
                                                                          if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 204 "debugger_interface.m"
                                                                            {
#line 204 "debugger_interface.m"
                                                                              MR_Integer mdb__debugger_interface__V_97_97 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                              MR_Integer mdb__debugger_interface__V_98_98;

#line 204 "debugger_interface.m"
                                                                              mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 204 "debugger_interface.m"
                                                                              if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                {
#line 204 "debugger_interface.m"
                                                                                  mdb__debugger_interface__V_98_98 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                                  {
#line 204 "debugger_interface.m"
                                                                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_97_97, mdb__debugger_interface__V_98_98);
                                                                                  }
#line 204 "debugger_interface.m"
                                                                                  mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                                                                                }
#line 204 "debugger_interface.m"
                                                                            }
#line 204 "debugger_interface.m"
                                                                          else
#line 204 "debugger_interface.m"
                                                                            if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 204 "debugger_interface.m"
                                                                              {
#line 204 "debugger_interface.m"
                                                                                MR_String mdb__debugger_interface__V_113_113 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                                MR_String mdb__debugger_interface__V_114_114 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 204 "debugger_interface.m"
                                                                                MR_Integer mdb__debugger_interface__V_115_115 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
#line 204 "debugger_interface.m"
                                                                                MR_Integer mdb__debugger_interface__V_116_116 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 4)));
#line 204 "debugger_interface.m"
                                                                                MR_String mdb__debugger_interface__V_117_117;
#line 204 "debugger_interface.m"
                                                                                MR_String mdb__debugger_interface__V_118_118;
#line 204 "debugger_interface.m"
                                                                                MR_Integer mdb__debugger_interface__V_119_119;
#line 204 "debugger_interface.m"
                                                                                MR_Integer mdb__debugger_interface__V_120_120;
#line 204 "debugger_interface.m"
                                                                                MR_Word mdb__debugger_interface__V_121_121;

#line 204 "debugger_interface.m"
                                                                                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 204 "debugger_interface.m"
                                                                                if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                  {
#line 204 "debugger_interface.m"
                                                                                    mdb__debugger_interface__V_117_117 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                                    mdb__debugger_interface__V_118_118 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 2)));
#line 204 "debugger_interface.m"
                                                                                    mdb__debugger_interface__V_119_119 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 3)));
#line 204 "debugger_interface.m"
                                                                                    mdb__debugger_interface__V_120_120 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 4)));
#line 204 "debugger_interface.m"
                                                                                    {
#line 204 "debugger_interface.m"
                                                                                      mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_121_121, mdb__debugger_interface__V_113_113, mdb__debugger_interface__V_117_117);
                                                                                    }
#line 6127 "mdb.debugger_interface.c"
                                                                                    mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_121_121 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                                    mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                                    if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                      mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_121_121;
#line 204 "debugger_interface.m"
                                                                                    else
#line 204 "debugger_interface.m"
                                                                                      {
#line 204 "debugger_interface.m"
                                                                                        MR_Word mdb__debugger_interface__V_122_122;

#line 204 "debugger_interface.m"
                                                                                        {
#line 204 "debugger_interface.m"
                                                                                          mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_122_122, mdb__debugger_interface__V_114_114, mdb__debugger_interface__V_118_118);
                                                                                        }
#line 6147 "mdb.debugger_interface.c"
                                                                                        mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_122_122 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                                        mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                                        if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                          mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_122_122;
#line 204 "debugger_interface.m"
                                                                                        else
#line 204 "debugger_interface.m"
                                                                                          {
#line 204 "debugger_interface.m"
                                                                                            MR_Word mdb__debugger_interface__V_123_123;

#line 204 "debugger_interface.m"
                                                                                            {
#line 204 "debugger_interface.m"
                                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_123_123, mdb__debugger_interface__V_115_115, mdb__debugger_interface__V_119_119);
                                                                                            }
#line 6167 "mdb.debugger_interface.c"
                                                                                            mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_123_123 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                                            mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                                            if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                              mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_123_123;
#line 204 "debugger_interface.m"
                                                                                            else
#line 204 "debugger_interface.m"
                                                                                              {
#line 204 "debugger_interface.m"
                                                                                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_116_116, mdb__debugger_interface__V_120_120);
                                                                                              }
#line 204 "debugger_interface.m"
                                                                                          }
#line 204 "debugger_interface.m"
                                                                                      }
#line 204 "debugger_interface.m"
                                                                                    mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                                                                                  }
#line 204 "debugger_interface.m"
                                                                              }
#line 204 "debugger_interface.m"
                                                                            else
#line 204 "debugger_interface.m"
                                                                              if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 204 "debugger_interface.m"
                                                                                {
#line 204 "debugger_interface.m"
                                                                                  MR_String mdb__debugger_interface__V_99_99 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                                  MR_String mdb__debugger_interface__V_100_100 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 204 "debugger_interface.m"
                                                                                  MR_String mdb__debugger_interface__V_101_101 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
#line 204 "debugger_interface.m"
                                                                                  MR_Integer mdb__debugger_interface__V_102_102 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 4)));
#line 204 "debugger_interface.m"
                                                                                  MR_Integer mdb__debugger_interface__V_103_103 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 5)));
#line 204 "debugger_interface.m"
                                                                                  MR_String mdb__debugger_interface__V_104_104;
#line 204 "debugger_interface.m"
                                                                                  MR_String mdb__debugger_interface__V_105_105;
#line 204 "debugger_interface.m"
                                                                                  MR_String mdb__debugger_interface__V_106_106;
#line 204 "debugger_interface.m"
                                                                                  MR_Integer mdb__debugger_interface__V_107_107;
#line 204 "debugger_interface.m"
                                                                                  MR_Integer mdb__debugger_interface__V_108_108;
#line 204 "debugger_interface.m"
                                                                                  MR_Word mdb__debugger_interface__V_109_109;

#line 204 "debugger_interface.m"
                                                                                  mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 204 "debugger_interface.m"
                                                                                  if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                    {
#line 204 "debugger_interface.m"
                                                                                      mdb__debugger_interface__V_104_104 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                                      mdb__debugger_interface__V_105_105 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 2)));
#line 204 "debugger_interface.m"
                                                                                      mdb__debugger_interface__V_106_106 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 3)));
#line 204 "debugger_interface.m"
                                                                                      mdb__debugger_interface__V_107_107 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 4)));
#line 204 "debugger_interface.m"
                                                                                      mdb__debugger_interface__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 5)));
#line 204 "debugger_interface.m"
                                                                                      {
#line 204 "debugger_interface.m"
                                                                                        mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_109_109, mdb__debugger_interface__V_99_99, mdb__debugger_interface__V_104_104);
                                                                                      }
#line 6242 "mdb.debugger_interface.c"
                                                                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_109_109 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                                      mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                                      if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                        mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_109_109;
#line 204 "debugger_interface.m"
                                                                                      else
#line 204 "debugger_interface.m"
                                                                                        {
#line 204 "debugger_interface.m"
                                                                                          MR_Word mdb__debugger_interface__V_110_110;

#line 204 "debugger_interface.m"
                                                                                          {
#line 204 "debugger_interface.m"
                                                                                            mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_110_110, mdb__debugger_interface__V_100_100, mdb__debugger_interface__V_105_105);
                                                                                          }
#line 6262 "mdb.debugger_interface.c"
                                                                                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_110_110 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                                          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                                          if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                            mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_110_110;
#line 204 "debugger_interface.m"
                                                                                          else
#line 204 "debugger_interface.m"
                                                                                            {
#line 204 "debugger_interface.m"
                                                                                              MR_Word mdb__debugger_interface__V_111_111;

#line 204 "debugger_interface.m"
                                                                                              {
#line 204 "debugger_interface.m"
                                                                                                mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_111_111, mdb__debugger_interface__V_101_101, mdb__debugger_interface__V_106_106);
                                                                                              }
#line 6282 "mdb.debugger_interface.c"
                                                                                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_111_111 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                                              if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_111_111;
#line 204 "debugger_interface.m"
                                                                                              else
#line 204 "debugger_interface.m"
                                                                                                {
#line 204 "debugger_interface.m"
                                                                                                  MR_Word mdb__debugger_interface__V_112_112;

#line 204 "debugger_interface.m"
                                                                                                  {
#line 204 "debugger_interface.m"
                                                                                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_112_112, mdb__debugger_interface__V_102_102, mdb__debugger_interface__V_107_107);
                                                                                                  }
#line 6302 "mdb.debugger_interface.c"
                                                                                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_112_112 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                                                  if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_112_112;
#line 204 "debugger_interface.m"
                                                                                                  else
#line 204 "debugger_interface.m"
                                                                                                    {
#line 204 "debugger_interface.m"
                                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_103_103, mdb__debugger_interface__V_108_108);
                                                                                                    }
#line 204 "debugger_interface.m"
                                                                                                }
#line 204 "debugger_interface.m"
                                                                                            }
#line 204 "debugger_interface.m"
                                                                                        }
#line 204 "debugger_interface.m"
                                                                                      mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                                                                                    }
#line 204 "debugger_interface.m"
                                                                                }
#line 204 "debugger_interface.m"
                                                                              else
#line 204 "debugger_interface.m"
                                                                                {
#line 204 "debugger_interface.m"
                                                                                  MR_Integer mdb__debugger_interface__V_136_136 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                                  MR_Integer mdb__debugger_interface__V_137_137 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 204 "debugger_interface.m"
                                                                                  MR_Integer mdb__debugger_interface__V_138_138 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
#line 204 "debugger_interface.m"
                                                                                  MR_Integer mdb__debugger_interface__V_139_139;
#line 204 "debugger_interface.m"
                                                                                  MR_Integer mdb__debugger_interface__V_140_140;
#line 204 "debugger_interface.m"
                                                                                  MR_Integer mdb__debugger_interface__V_141_141;
#line 204 "debugger_interface.m"
                                                                                  MR_Word mdb__debugger_interface__V_142_142;

#line 204 "debugger_interface.m"
                                                                                  mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 204 "debugger_interface.m"
                                                                                  if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                    {
#line 204 "debugger_interface.m"
                                                                                      mdb__debugger_interface__V_139_139 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                                      mdb__debugger_interface__V_140_140 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 2)));
#line 204 "debugger_interface.m"
                                                                                      mdb__debugger_interface__V_141_141 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 3)));
#line 204 "debugger_interface.m"
                                                                                      {
#line 204 "debugger_interface.m"
                                                                                        mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_142_142, mdb__debugger_interface__V_136_136, mdb__debugger_interface__V_139_139);
                                                                                      }
#line 6365 "mdb.debugger_interface.c"
                                                                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_142_142 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                                      mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                                      if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                        mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_142_142;
#line 204 "debugger_interface.m"
                                                                                      else
#line 204 "debugger_interface.m"
                                                                                        {
#line 204 "debugger_interface.m"
                                                                                          MR_Word mdb__debugger_interface__V_143_143;

#line 204 "debugger_interface.m"
                                                                                          {
#line 204 "debugger_interface.m"
                                                                                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_143_143, mdb__debugger_interface__V_137_137, mdb__debugger_interface__V_140_140);
                                                                                          }
#line 6385 "mdb.debugger_interface.c"
                                                                                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_143_143 == (MR_Integer) 0);
#line 204 "debugger_interface.m"
                                                                                          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 204 "debugger_interface.m"
                                                                                          if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                            mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_143_143;
#line 204 "debugger_interface.m"
                                                                                          else
#line 204 "debugger_interface.m"
                                                                                            {
#line 204 "debugger_interface.m"
                                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_138_138, mdb__debugger_interface__V_141_141);
                                                                                            }
#line 204 "debugger_interface.m"
                                                                                        }
#line 204 "debugger_interface.m"
                                                                                      mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
                                                                                    }
#line 204 "debugger_interface.m"
                                                                                }
#line 204 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                  *mdb__debugger_interface__HeadVar__1_1 = mdb__debugger_interface__V_6_6;
#line 204 "debugger_interface.m"
                else
#line 204 "debugger_interface.m"
                  {
#line 204 "debugger_interface.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 204 "debugger_interface.m"
                    return;
                  }
#line 204 "debugger_interface.m"
              }
#line 204 "debugger_interface.m"
          }
#line 204 "debugger_interface.m"
      }
#line 204 "debugger_interface.m"
  }
#line 204 "debugger_interface.m"
}

#line 204 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Index____debugger_response_0_0(
#line 204 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__1_1,
#line 204 "debugger_interface.m"
  MR_Integer * mdb__debugger_interface__HeadVar__2_2)
#line 204 "debugger_interface.m"
{
#line 204 "debugger_interface.m"
  {
#line 204 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;

#line 204 "debugger_interface.m"
    if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 6448 "mdb.debugger_interface.c"
      *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 10;
#line 204 "debugger_interface.m"
    else
#line 204 "debugger_interface.m"
      if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18)))))
#line 6454 "mdb.debugger_interface.c"
        *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 32;
#line 204 "debugger_interface.m"
      else
#line 204 "debugger_interface.m"
        if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 6460 "mdb.debugger_interface.c"
          *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 31;
#line 204 "debugger_interface.m"
        else
#line 204 "debugger_interface.m"
          if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 6466 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 26;
#line 204 "debugger_interface.m"
          else
#line 204 "debugger_interface.m"
            if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 6472 "mdb.debugger_interface.c"
              *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 27;
#line 204 "debugger_interface.m"
            else
#line 204 "debugger_interface.m"
              if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 6478 "mdb.debugger_interface.c"
                *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 22;
#line 204 "debugger_interface.m"
              else
#line 204 "debugger_interface.m"
                if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 6484 "mdb.debugger_interface.c"
                  *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 29;
#line 204 "debugger_interface.m"
                else
#line 204 "debugger_interface.m"
                  if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 6490 "mdb.debugger_interface.c"
                    *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 30;
#line 204 "debugger_interface.m"
                  else
#line 204 "debugger_interface.m"
                    if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 6496 "mdb.debugger_interface.c"
                      *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 2;
#line 204 "debugger_interface.m"
                    else
#line 204 "debugger_interface.m"
                      if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 6502 "mdb.debugger_interface.c"
                        *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 3;
#line 204 "debugger_interface.m"
                      else
#line 204 "debugger_interface.m"
                        if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 6508 "mdb.debugger_interface.c"
                          *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 20;
#line 204 "debugger_interface.m"
                        else
#line 204 "debugger_interface.m"
                          if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6514 "mdb.debugger_interface.c"
                            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 0;
#line 204 "debugger_interface.m"
                          else
#line 204 "debugger_interface.m"
                            if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 6520 "mdb.debugger_interface.c"
                              *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 9;
#line 204 "debugger_interface.m"
                            else
#line 204 "debugger_interface.m"
                              if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 6526 "mdb.debugger_interface.c"
                                *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 25;
#line 204 "debugger_interface.m"
                              else
#line 204 "debugger_interface.m"
                                if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 6532 "mdb.debugger_interface.c"
                                  *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 24;
#line 204 "debugger_interface.m"
                                else
#line 204 "debugger_interface.m"
                                  if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 6538 "mdb.debugger_interface.c"
                                    *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 11;
#line 204 "debugger_interface.m"
                                  else
#line 204 "debugger_interface.m"
                                    if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 6544 "mdb.debugger_interface.c"
                                      *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 12;
#line 204 "debugger_interface.m"
                                    else
#line 204 "debugger_interface.m"
                                      if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 6550 "mdb.debugger_interface.c"
                                        *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 19;
#line 204 "debugger_interface.m"
                                      else
#line 204 "debugger_interface.m"
                                        if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 6556 "mdb.debugger_interface.c"
                                          *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 1;
#line 204 "debugger_interface.m"
                                        else
#line 204 "debugger_interface.m"
                                          if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 6562 "mdb.debugger_interface.c"
                                            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 5;
#line 204 "debugger_interface.m"
                                          else
#line 204 "debugger_interface.m"
                                            if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 6568 "mdb.debugger_interface.c"
                                              *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 4;
#line 204 "debugger_interface.m"
                                            else
#line 204 "debugger_interface.m"
                                              if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6574 "mdb.debugger_interface.c"
                                                *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 8;
#line 204 "debugger_interface.m"
                                              else
#line 204 "debugger_interface.m"
                                                if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6580 "mdb.debugger_interface.c"
                                                  *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 7;
#line 204 "debugger_interface.m"
                                                else
#line 204 "debugger_interface.m"
                                                  if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6586 "mdb.debugger_interface.c"
                                                    *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 6;
#line 204 "debugger_interface.m"
                                                  else
#line 204 "debugger_interface.m"
                                                    if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 6592 "mdb.debugger_interface.c"
                                                      *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 17;
#line 204 "debugger_interface.m"
                                                    else
#line 204 "debugger_interface.m"
                                                      if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 6598 "mdb.debugger_interface.c"
                                                        *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 21;
#line 204 "debugger_interface.m"
                                                      else
#line 204 "debugger_interface.m"
                                                        if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 6604 "mdb.debugger_interface.c"
                                                          *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 18;
#line 204 "debugger_interface.m"
                                                        else
#line 204 "debugger_interface.m"
                                                          if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6610 "mdb.debugger_interface.c"
                                                            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 13;
#line 204 "debugger_interface.m"
                                                          else
#line 204 "debugger_interface.m"
                                                            if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 6616 "mdb.debugger_interface.c"
                                                              *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 28;
#line 204 "debugger_interface.m"
                                                            else
#line 204 "debugger_interface.m"
                                                              if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 6622 "mdb.debugger_interface.c"
                                                                *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 14;
#line 204 "debugger_interface.m"
                                                              else
#line 204 "debugger_interface.m"
                                                                if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 6628 "mdb.debugger_interface.c"
                                                                  *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 16;
#line 204 "debugger_interface.m"
                                                                else
#line 204 "debugger_interface.m"
                                                                  if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 6634 "mdb.debugger_interface.c"
                                                                    *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 15;
#line 204 "debugger_interface.m"
                                                                  else
#line 6638 "mdb.debugger_interface.c"
                                                                    *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 23;
#line 204 "debugger_interface.m"
  }
#line 204 "debugger_interface.m"
}

#line 204 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_response_0_0(
#line 204 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__1_1,
#line 204 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__2_2)
#line 204 "debugger_interface.m"
{
#line 204 "debugger_interface.m"
  {
#line 204 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 204 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__CastX_143 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 204 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__CastY_144 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 204 "debugger_interface.m"
    mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastX_143 == mdb__debugger_interface__CastY_144);
#line 204 "debugger_interface.m"
    if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
      mdb__debugger_interface__succeeded = MR_TRUE;
#line 204 "debugger_interface.m"
    else
#line 204 "debugger_interface.m"
      if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 204 "debugger_interface.m"
        {
#line 204 "debugger_interface.m"
          MR_Integer mdb__debugger_interface__CastX_75 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 204 "debugger_interface.m"
          MR_Integer mdb__debugger_interface__CastY_76 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 204 "debugger_interface.m"
          mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_76 == mdb__debugger_interface__CastX_75);
#line 204 "debugger_interface.m"
        }
#line 204 "debugger_interface.m"
      else
#line 204 "debugger_interface.m"
        if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18)))))
#line 204 "debugger_interface.m"
          {
#line 204 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__CastX_141 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 204 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__CastY_142 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 204 "debugger_interface.m"
            mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_142 == mdb__debugger_interface__CastX_141);
#line 204 "debugger_interface.m"
          }
#line 204 "debugger_interface.m"
        else
#line 204 "debugger_interface.m"
          if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 204 "debugger_interface.m"
            {
#line 204 "debugger_interface.m"
              MR_Integer mdb__debugger_interface__CastX_139 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 204 "debugger_interface.m"
              MR_Integer mdb__debugger_interface__CastY_140 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 204 "debugger_interface.m"
              mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_140 == mdb__debugger_interface__CastX_139);
#line 204 "debugger_interface.m"
            }
#line 204 "debugger_interface.m"
          else
#line 204 "debugger_interface.m"
            if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 204 "debugger_interface.m"
              {
#line 204 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_129 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 204 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_130 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 204 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_130 == mdb__debugger_interface__CastX_129);
#line 204 "debugger_interface.m"
              }
#line 204 "debugger_interface.m"
            else
#line 204 "debugger_interface.m"
              if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 204 "debugger_interface.m"
                {
#line 204 "debugger_interface.m"
                  MR_Integer mdb__debugger_interface__CastX_131 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 204 "debugger_interface.m"
                  MR_Integer mdb__debugger_interface__CastY_132 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 204 "debugger_interface.m"
                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_132 == mdb__debugger_interface__CastX_131);
#line 204 "debugger_interface.m"
                }
#line 204 "debugger_interface.m"
              else
#line 204 "debugger_interface.m"
                if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 204 "debugger_interface.m"
                  {
#line 204 "debugger_interface.m"
                    MR_Integer mdb__debugger_interface__CastX_117 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 204 "debugger_interface.m"
                    MR_Integer mdb__debugger_interface__CastY_118 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 204 "debugger_interface.m"
                    mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_118 == mdb__debugger_interface__CastX_117);
#line 204 "debugger_interface.m"
                  }
#line 204 "debugger_interface.m"
                else
#line 204 "debugger_interface.m"
                  if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 204 "debugger_interface.m"
                    {
#line 204 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__CastX_135 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 204 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__CastY_136 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 204 "debugger_interface.m"
                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_136 == mdb__debugger_interface__CastX_135);
#line 204 "debugger_interface.m"
                    }
#line 204 "debugger_interface.m"
                  else
#line 204 "debugger_interface.m"
                    if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 204 "debugger_interface.m"
                      {
#line 204 "debugger_interface.m"
                        MR_Integer mdb__debugger_interface__CastX_137 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 204 "debugger_interface.m"
                        MR_Integer mdb__debugger_interface__CastY_138 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 204 "debugger_interface.m"
                        mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_138 == mdb__debugger_interface__CastX_137);
#line 204 "debugger_interface.m"
                      }
#line 204 "debugger_interface.m"
                    else
#line 204 "debugger_interface.m"
                      if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 204 "debugger_interface.m"
                        {
#line 204 "debugger_interface.m"
                          MR_Integer mdb__debugger_interface__CastX_7 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 204 "debugger_interface.m"
                          MR_Integer mdb__debugger_interface__CastY_8 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 204 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_8 == mdb__debugger_interface__CastX_7);
#line 204 "debugger_interface.m"
                        }
#line 204 "debugger_interface.m"
                      else
#line 204 "debugger_interface.m"
                        if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 204 "debugger_interface.m"
                          {
#line 204 "debugger_interface.m"
                            MR_Integer mdb__debugger_interface__CastX_9 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 204 "debugger_interface.m"
                            MR_Integer mdb__debugger_interface__CastY_10 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 204 "debugger_interface.m"
                            mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_10 == mdb__debugger_interface__CastX_9);
#line 204 "debugger_interface.m"
                          }
#line 204 "debugger_interface.m"
                        else
#line 204 "debugger_interface.m"
                          if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 204 "debugger_interface.m"
                            {
#line 204 "debugger_interface.m"
                              MR_Integer mdb__debugger_interface__CastX_113 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 204 "debugger_interface.m"
                              MR_Integer mdb__debugger_interface__CastY_114 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 204 "debugger_interface.m"
                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_114 == mdb__debugger_interface__CastX_113);
#line 204 "debugger_interface.m"
                            }
#line 204 "debugger_interface.m"
                          else
#line 204 "debugger_interface.m"
                            if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 204 "debugger_interface.m"
                              {
#line 204 "debugger_interface.m"
                                MR_Integer mdb__debugger_interface__CastX_3 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 204 "debugger_interface.m"
                                MR_Integer mdb__debugger_interface__CastY_4 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 204 "debugger_interface.m"
                                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_4 == mdb__debugger_interface__CastX_3);
#line 204 "debugger_interface.m"
                              }
#line 204 "debugger_interface.m"
                            else
#line 204 "debugger_interface.m"
                              if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 204 "debugger_interface.m"
                                {
#line 204 "debugger_interface.m"
                                  MR_Integer mdb__debugger_interface__CastX_73 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 204 "debugger_interface.m"
                                  MR_Integer mdb__debugger_interface__CastY_74 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 204 "debugger_interface.m"
                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_74 == mdb__debugger_interface__CastX_73);
#line 204 "debugger_interface.m"
                                }
#line 204 "debugger_interface.m"
                              else
#line 204 "debugger_interface.m"
                                if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 204 "debugger_interface.m"
                                  {
#line 204 "debugger_interface.m"
                                    MR_Integer mdb__debugger_interface__CastX_127 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 204 "debugger_interface.m"
                                    MR_Integer mdb__debugger_interface__CastY_128 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 204 "debugger_interface.m"
                                    mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_128 == mdb__debugger_interface__CastX_127);
#line 204 "debugger_interface.m"
                                  }
#line 204 "debugger_interface.m"
                                else
#line 204 "debugger_interface.m"
                                  if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 204 "debugger_interface.m"
                                    {
#line 204 "debugger_interface.m"
                                      MR_Integer mdb__debugger_interface__CastX_125 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 204 "debugger_interface.m"
                                      MR_Integer mdb__debugger_interface__CastY_126 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 204 "debugger_interface.m"
                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_126 == mdb__debugger_interface__CastX_125);
#line 204 "debugger_interface.m"
                                    }
#line 204 "debugger_interface.m"
                                  else
#line 204 "debugger_interface.m"
                                    if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 204 "debugger_interface.m"
                                      {
#line 204 "debugger_interface.m"
                                        MR_Integer mdb__debugger_interface__CastX_77 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 204 "debugger_interface.m"
                                        MR_Integer mdb__debugger_interface__CastY_78 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 204 "debugger_interface.m"
                                        mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_78 == mdb__debugger_interface__CastX_77);
#line 204 "debugger_interface.m"
                                      }
#line 204 "debugger_interface.m"
                                    else
#line 204 "debugger_interface.m"
                                      if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 204 "debugger_interface.m"
                                        {
#line 204 "debugger_interface.m"
                                          MR_Integer mdb__debugger_interface__CastX_79 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 204 "debugger_interface.m"
                                          MR_Integer mdb__debugger_interface__CastY_80 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 204 "debugger_interface.m"
                                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_80 == mdb__debugger_interface__CastX_79);
#line 204 "debugger_interface.m"
                                        }
#line 204 "debugger_interface.m"
                                      else
#line 204 "debugger_interface.m"
                                        if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 204 "debugger_interface.m"
                                          {
#line 204 "debugger_interface.m"
                                            MR_Integer mdb__debugger_interface__CastX_111 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 204 "debugger_interface.m"
                                            MR_Integer mdb__debugger_interface__CastY_112 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 204 "debugger_interface.m"
                                            mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_112 == mdb__debugger_interface__CastX_111);
#line 204 "debugger_interface.m"
                                          }
#line 204 "debugger_interface.m"
                                        else
#line 204 "debugger_interface.m"
                                          if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 204 "debugger_interface.m"
                                            {
#line 204 "debugger_interface.m"
                                              MR_Integer mdb__debugger_interface__CastX_5 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 204 "debugger_interface.m"
                                              MR_Integer mdb__debugger_interface__CastY_6 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 204 "debugger_interface.m"
                                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_6 == mdb__debugger_interface__CastX_5);
#line 204 "debugger_interface.m"
                                            }
#line 204 "debugger_interface.m"
                                          else
#line 204 "debugger_interface.m"
                                            if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 204 "debugger_interface.m"
                                              {
#line 204 "debugger_interface.m"
                                                MR_Integer mdb__debugger_interface__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)));
#line 204 "debugger_interface.m"
                                                MR_Integer mdb__debugger_interface__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                MR_Integer mdb__debugger_interface__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2)));
#line 204 "debugger_interface.m"
                                                MR_Word mdb__debugger_interface__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 3)));
#line 204 "debugger_interface.m"
                                                MR_String mdb__debugger_interface__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 4)));
#line 204 "debugger_interface.m"
                                                MR_String mdb__debugger_interface__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 5)));
#line 204 "debugger_interface.m"
                                                MR_String mdb__debugger_interface__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 6)));
#line 204 "debugger_interface.m"
                                                MR_String mdb__debugger_interface__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 7)));
#line 204 "debugger_interface.m"
                                                MR_Integer mdb__debugger_interface__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 8)));
#line 204 "debugger_interface.m"
                                                MR_Integer mdb__debugger_interface__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 9)));
#line 204 "debugger_interface.m"
                                                MR_Integer mdb__debugger_interface__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 10)));
#line 204 "debugger_interface.m"
                                                MR_String mdb__debugger_interface__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 11)));
#line 204 "debugger_interface.m"
                                                MR_Integer mdb__debugger_interface__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 12)));
#line 204 "debugger_interface.m"
                                                MR_Integer mdb__debugger_interface__V_50_50;
#line 204 "debugger_interface.m"
                                                MR_Integer mdb__debugger_interface__V_51_51;
#line 204 "debugger_interface.m"
                                                MR_Integer mdb__debugger_interface__V_52_52;
#line 204 "debugger_interface.m"
                                                MR_Word mdb__debugger_interface__V_53_53;
#line 204 "debugger_interface.m"
                                                MR_String mdb__debugger_interface__V_54_54;
#line 204 "debugger_interface.m"
                                                MR_String mdb__debugger_interface__V_55_55;
#line 204 "debugger_interface.m"
                                                MR_String mdb__debugger_interface__V_56_56;
#line 204 "debugger_interface.m"
                                                MR_String mdb__debugger_interface__V_57_57;
#line 204 "debugger_interface.m"
                                                MR_Integer mdb__debugger_interface__V_58_58;
#line 204 "debugger_interface.m"
                                                MR_Integer mdb__debugger_interface__V_59_59;
#line 204 "debugger_interface.m"
                                                MR_Integer mdb__debugger_interface__V_60_60;
#line 204 "debugger_interface.m"
                                                MR_String mdb__debugger_interface__V_61_61;
#line 204 "debugger_interface.m"
                                                MR_Integer mdb__debugger_interface__V_62_62;

#line 204 "debugger_interface.m"
                                                mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 204 "debugger_interface.m"
                                                if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                  {
#line 204 "debugger_interface.m"
                                                    mdb__debugger_interface__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));
#line 204 "debugger_interface.m"
                                                    mdb__debugger_interface__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                    mdb__debugger_interface__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 204 "debugger_interface.m"
                                                    mdb__debugger_interface__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
#line 204 "debugger_interface.m"
                                                    mdb__debugger_interface__V_54_54 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 4)));
#line 204 "debugger_interface.m"
                                                    mdb__debugger_interface__V_55_55 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 5)));
#line 204 "debugger_interface.m"
                                                    mdb__debugger_interface__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 6)));
#line 204 "debugger_interface.m"
                                                    mdb__debugger_interface__V_57_57 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 7)));
#line 204 "debugger_interface.m"
                                                    mdb__debugger_interface__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 8)));
#line 204 "debugger_interface.m"
                                                    mdb__debugger_interface__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 9)));
#line 204 "debugger_interface.m"
                                                    mdb__debugger_interface__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 10)));
#line 204 "debugger_interface.m"
                                                    mdb__debugger_interface__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 11)));
#line 204 "debugger_interface.m"
                                                    mdb__debugger_interface__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 12)));
#line 7045 "mdb.debugger_interface.c"
                                                    mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_37_37 == mdb__debugger_interface__V_50_50);
#line 204 "debugger_interface.m"
                                                    if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                      {
#line 7051 "mdb.debugger_interface.c"
                                                        mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_38_38 == mdb__debugger_interface__V_51_51);
#line 204 "debugger_interface.m"
                                                        if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                          {
#line 7057 "mdb.debugger_interface.c"
                                                            mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_39_39 == mdb__debugger_interface__V_52_52);
#line 204 "debugger_interface.m"
                                                            if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                              {
#line 7063 "mdb.debugger_interface.c"
                                                                mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_40_40 == mdb__debugger_interface__V_53_53);
#line 204 "debugger_interface.m"
                                                                if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                  {
#line 7069 "mdb.debugger_interface.c"
                                                                    mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_41_41, mdb__debugger_interface__V_54_54) == 0);
#line 204 "debugger_interface.m"
                                                                    if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                      {
#line 7075 "mdb.debugger_interface.c"
                                                                        mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_42_42, mdb__debugger_interface__V_55_55) == 0);
#line 204 "debugger_interface.m"
                                                                        if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                          {
#line 7081 "mdb.debugger_interface.c"
                                                                            mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_43_43, mdb__debugger_interface__V_56_56) == 0);
#line 204 "debugger_interface.m"
                                                                            if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                              {
#line 7087 "mdb.debugger_interface.c"
                                                                                mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_44_44, mdb__debugger_interface__V_57_57) == 0);
#line 204 "debugger_interface.m"
                                                                                if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                  {
#line 7093 "mdb.debugger_interface.c"
                                                                                    mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_45_45 == mdb__debugger_interface__V_58_58);
#line 204 "debugger_interface.m"
                                                                                    if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                      {
#line 7099 "mdb.debugger_interface.c"
                                                                                        mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_46_46 == mdb__debugger_interface__V_59_59);
#line 204 "debugger_interface.m"
                                                                                        if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                          {
#line 7105 "mdb.debugger_interface.c"
                                                                                            mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_47_47 == mdb__debugger_interface__V_60_60);
#line 204 "debugger_interface.m"
                                                                                            if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                              {
#line 7111 "mdb.debugger_interface.c"
                                                                                                mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_48_48, mdb__debugger_interface__V_61_61) == 0);
#line 204 "debugger_interface.m"
                                                                                                if (mdb__debugger_interface__succeeded)
#line 7115 "mdb.debugger_interface.c"
                                                                                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_49_49 == mdb__debugger_interface__V_62_62);
#line 204 "debugger_interface.m"
                                                                                              }
#line 204 "debugger_interface.m"
                                                                                          }
#line 204 "debugger_interface.m"
                                                                                      }
#line 204 "debugger_interface.m"
                                                                                  }
#line 204 "debugger_interface.m"
                                                                              }
#line 204 "debugger_interface.m"
                                                                          }
#line 204 "debugger_interface.m"
                                                                      }
#line 204 "debugger_interface.m"
                                                                  }
#line 204 "debugger_interface.m"
                                                              }
#line 204 "debugger_interface.m"
                                                          }
#line 204 "debugger_interface.m"
                                                      }
#line 204 "debugger_interface.m"
                                                  }
#line 204 "debugger_interface.m"
                                              }
#line 204 "debugger_interface.m"
                                            else
#line 204 "debugger_interface.m"
                                              if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 204 "debugger_interface.m"
                                                {
#line 204 "debugger_interface.m"
                                                  MR_Integer mdb__debugger_interface__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)));
#line 204 "debugger_interface.m"
                                                  MR_Integer mdb__debugger_interface__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                  MR_Integer mdb__debugger_interface__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2)));
#line 204 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__V_14_14 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 3)))) & (MR_Integer) 15);
#line 204 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 204 "debugger_interface.m"
                                                  MR_String mdb__debugger_interface__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 4)));
#line 204 "debugger_interface.m"
                                                  MR_String mdb__debugger_interface__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 5)));
#line 204 "debugger_interface.m"
                                                  MR_String mdb__debugger_interface__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 6)));
#line 204 "debugger_interface.m"
                                                  MR_Integer mdb__debugger_interface__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 7)));
#line 204 "debugger_interface.m"
                                                  MR_Integer mdb__debugger_interface__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 8)));
#line 204 "debugger_interface.m"
                                                  MR_Integer mdb__debugger_interface__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 9)));
#line 204 "debugger_interface.m"
                                                  MR_String mdb__debugger_interface__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 10)));
#line 204 "debugger_interface.m"
                                                  MR_Integer mdb__debugger_interface__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 11)));
#line 204 "debugger_interface.m"
                                                  MR_Integer mdb__debugger_interface__V_24_24;
#line 204 "debugger_interface.m"
                                                  MR_Integer mdb__debugger_interface__V_25_25;
#line 204 "debugger_interface.m"
                                                  MR_Integer mdb__debugger_interface__V_26_26;
#line 204 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__V_27_27;
#line 204 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__V_28_28;
#line 204 "debugger_interface.m"
                                                  MR_String mdb__debugger_interface__V_29_29;
#line 204 "debugger_interface.m"
                                                  MR_String mdb__debugger_interface__V_30_30;
#line 204 "debugger_interface.m"
                                                  MR_String mdb__debugger_interface__V_31_31;
#line 204 "debugger_interface.m"
                                                  MR_Integer mdb__debugger_interface__V_32_32;
#line 204 "debugger_interface.m"
                                                  MR_Integer mdb__debugger_interface__V_33_33;
#line 204 "debugger_interface.m"
                                                  MR_Integer mdb__debugger_interface__V_34_34;
#line 204 "debugger_interface.m"
                                                  MR_String mdb__debugger_interface__V_35_35;
#line 204 "debugger_interface.m"
                                                  MR_Integer mdb__debugger_interface__V_36_36;

#line 204 "debugger_interface.m"
                                                  mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                  if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                    {
#line 204 "debugger_interface.m"
                                                      mdb__debugger_interface__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));
#line 204 "debugger_interface.m"
                                                      mdb__debugger_interface__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                      mdb__debugger_interface__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 204 "debugger_interface.m"
                                                      mdb__debugger_interface__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 15);
#line 204 "debugger_interface.m"
                                                      mdb__debugger_interface__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 204 "debugger_interface.m"
                                                      mdb__debugger_interface__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 4)));
#line 204 "debugger_interface.m"
                                                      mdb__debugger_interface__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 5)));
#line 204 "debugger_interface.m"
                                                      mdb__debugger_interface__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 6)));
#line 204 "debugger_interface.m"
                                                      mdb__debugger_interface__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 7)));
#line 204 "debugger_interface.m"
                                                      mdb__debugger_interface__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 8)));
#line 204 "debugger_interface.m"
                                                      mdb__debugger_interface__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 9)));
#line 204 "debugger_interface.m"
                                                      mdb__debugger_interface__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 10)));
#line 204 "debugger_interface.m"
                                                      mdb__debugger_interface__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 11)));
#line 7234 "mdb.debugger_interface.c"
                                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_11_11 == mdb__debugger_interface__V_24_24);
#line 204 "debugger_interface.m"
                                                      if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                        {
#line 7240 "mdb.debugger_interface.c"
                                                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_12_12 == mdb__debugger_interface__V_25_25);
#line 204 "debugger_interface.m"
                                                          if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                            {
#line 7246 "mdb.debugger_interface.c"
                                                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_13_13 == mdb__debugger_interface__V_26_26);
#line 204 "debugger_interface.m"
                                                              if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                {
#line 7252 "mdb.debugger_interface.c"
                                                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_14_14 == mdb__debugger_interface__V_27_27);
#line 204 "debugger_interface.m"
                                                                  if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                    {
#line 7258 "mdb.debugger_interface.c"
                                                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_15_15 == mdb__debugger_interface__V_28_28);
#line 204 "debugger_interface.m"
                                                                      if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                        {
#line 7264 "mdb.debugger_interface.c"
                                                                          mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_16_16, mdb__debugger_interface__V_29_29) == 0);
#line 204 "debugger_interface.m"
                                                                          if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                            {
#line 7270 "mdb.debugger_interface.c"
                                                                              mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_17_17, mdb__debugger_interface__V_30_30) == 0);
#line 204 "debugger_interface.m"
                                                                              if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                {
#line 7276 "mdb.debugger_interface.c"
                                                                                  mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_18_18, mdb__debugger_interface__V_31_31) == 0);
#line 204 "debugger_interface.m"
                                                                                  if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                    {
#line 7282 "mdb.debugger_interface.c"
                                                                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_19_19 == mdb__debugger_interface__V_32_32);
#line 204 "debugger_interface.m"
                                                                                      if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                        {
#line 7288 "mdb.debugger_interface.c"
                                                                                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_20_20 == mdb__debugger_interface__V_33_33);
#line 204 "debugger_interface.m"
                                                                                          if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                            {
#line 7294 "mdb.debugger_interface.c"
                                                                                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_21_21 == mdb__debugger_interface__V_34_34);
#line 204 "debugger_interface.m"
                                                                                              if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                                {
#line 7300 "mdb.debugger_interface.c"
                                                                                                  mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_22_22, mdb__debugger_interface__V_35_35) == 0);
#line 204 "debugger_interface.m"
                                                                                                  if (mdb__debugger_interface__succeeded)
#line 7304 "mdb.debugger_interface.c"
                                                                                                    mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_23_23 == mdb__debugger_interface__V_36_36);
#line 204 "debugger_interface.m"
                                                                                                }
#line 204 "debugger_interface.m"
                                                                                            }
#line 204 "debugger_interface.m"
                                                                                        }
#line 204 "debugger_interface.m"
                                                                                    }
#line 204 "debugger_interface.m"
                                                                                }
#line 204 "debugger_interface.m"
                                                                            }
#line 204 "debugger_interface.m"
                                                                        }
#line 204 "debugger_interface.m"
                                                                    }
#line 204 "debugger_interface.m"
                                                                }
#line 204 "debugger_interface.m"
                                                            }
#line 204 "debugger_interface.m"
                                                        }
#line 204 "debugger_interface.m"
                                                    }
#line 204 "debugger_interface.m"
                                                }
#line 204 "debugger_interface.m"
                                              else
#line 204 "debugger_interface.m"
                                                if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 204 "debugger_interface.m"
                                                  {
#line 204 "debugger_interface.m"
                                                    MR_Word mdb__debugger_interface__TypeInfo_145_145;
#line 204 "debugger_interface.m"
                                                    MR_Word mdb__debugger_interface__TypeInfo_146_146;
#line 204 "debugger_interface.m"
                                                    MR_Word mdb__debugger_interface__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                    MR_Word mdb__debugger_interface__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2)));
#line 204 "debugger_interface.m"
                                                    MR_Word mdb__debugger_interface__V_71_71;
#line 204 "debugger_interface.m"
                                                    MR_Word mdb__debugger_interface__V_72_72;

#line 204 "debugger_interface.m"
                                                    mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 204 "debugger_interface.m"
                                                    if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                      {
#line 204 "debugger_interface.m"
                                                        mdb__debugger_interface__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                        mdb__debugger_interface__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 7361 "mdb.debugger_interface.c"
                                                        mdb__debugger_interface__TypeInfo_145_145 = (MR_Word) &mdb__debugger_interface_scalar_common_1[5];
#line 7363 "mdb.debugger_interface.c"
                                                        {
#line 7365 "mdb.debugger_interface.c"
                                                          mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_145_145, ((MR_Box) (mdb__debugger_interface__V_69_69)), ((MR_Box) (mdb__debugger_interface__V_71_71)));
                                                        }
#line 204 "debugger_interface.m"
                                                        if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                          {
#line 7372 "mdb.debugger_interface.c"
                                                            mdb__debugger_interface__TypeInfo_146_146 = (MR_Word) &mdb__debugger_interface_scalar_common_1[5];
#line 7374 "mdb.debugger_interface.c"
                                                            {
#line 7376 "mdb.debugger_interface.c"
                                                              return mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_146_146, ((MR_Box) (mdb__debugger_interface__V_70_70)), ((MR_Box) (mdb__debugger_interface__V_72_72)));
                                                            }
#line 204 "debugger_interface.m"
                                                          }
#line 204 "debugger_interface.m"
                                                      }
#line 204 "debugger_interface.m"
                                                  }
#line 204 "debugger_interface.m"
                                                else
#line 204 "debugger_interface.m"
                                                  if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 204 "debugger_interface.m"
                                                    {
#line 204 "debugger_interface.m"
                                                      MR_Word mdb__debugger_interface__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                      MR_Word mdb__debugger_interface__V_68_68;

#line 204 "debugger_interface.m"
                                                      mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                      if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                        {
#line 204 "debugger_interface.m"
                                                          mdb__debugger_interface__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 7404 "mdb.debugger_interface.c"
                                                          {
#line 7406 "mdb.debugger_interface.c"
                                                            return mdb__debugger_interface__succeeded = mercury__univ____Unify____univ_0_0(mdb__debugger_interface__V_67_67, mdb__debugger_interface__V_68_68);
                                                          }
#line 204 "debugger_interface.m"
                                                        }
#line 204 "debugger_interface.m"
                                                    }
#line 204 "debugger_interface.m"
                                                  else
#line 204 "debugger_interface.m"
                                                    if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 204 "debugger_interface.m"
                                                      {
#line 204 "debugger_interface.m"
                                                        MR_Word mdb__debugger_interface__TypeInfo_148_148;
#line 204 "debugger_interface.m"
                                                        MR_Word mdb__debugger_interface__TypeInfo_149_149;
#line 204 "debugger_interface.m"
                                                        MR_Word mdb__debugger_interface__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                        MR_Word mdb__debugger_interface__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2)));
#line 204 "debugger_interface.m"
                                                        MR_Word mdb__debugger_interface__V_65_65;
#line 204 "debugger_interface.m"
                                                        MR_Word mdb__debugger_interface__V_66_66;

#line 204 "debugger_interface.m"
                                                        mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 204 "debugger_interface.m"
                                                        if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                          {
#line 204 "debugger_interface.m"
                                                            mdb__debugger_interface__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                            mdb__debugger_interface__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 7442 "mdb.debugger_interface.c"
                                                            mdb__debugger_interface__TypeInfo_148_148 = (MR_Word) &mdb__debugger_interface_scalar_common_1[0];
#line 7444 "mdb.debugger_interface.c"
                                                            {
#line 7446 "mdb.debugger_interface.c"
                                                              mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_148_148, ((MR_Box) (mdb__debugger_interface__V_63_63)), ((MR_Box) (mdb__debugger_interface__V_65_65)));
                                                            }
#line 204 "debugger_interface.m"
                                                            if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                              {
#line 7453 "mdb.debugger_interface.c"
                                                                mdb__debugger_interface__TypeInfo_149_149 = (MR_Word) &mdb__debugger_interface_scalar_common_1[5];
#line 7455 "mdb.debugger_interface.c"
                                                                {
#line 7457 "mdb.debugger_interface.c"
                                                                  return mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_149_149, ((MR_Box) (mdb__debugger_interface__V_64_64)), ((MR_Box) (mdb__debugger_interface__V_66_66)));
                                                                }
#line 204 "debugger_interface.m"
                                                              }
#line 204 "debugger_interface.m"
                                                          }
#line 204 "debugger_interface.m"
                                                      }
#line 204 "debugger_interface.m"
                                                    else
#line 204 "debugger_interface.m"
                                                      if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 204 "debugger_interface.m"
                                                        {
#line 204 "debugger_interface.m"
                                                          MR_String mdb__debugger_interface__V_103_103 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                          MR_String mdb__debugger_interface__V_104_104;

#line 204 "debugger_interface.m"
                                                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 204 "debugger_interface.m"
                                                          if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                            {
#line 204 "debugger_interface.m"
                                                              mdb__debugger_interface__V_104_104 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 7485 "mdb.debugger_interface.c"
                                                              mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_103_103, mdb__debugger_interface__V_104_104) == 0);
#line 204 "debugger_interface.m"
                                                            }
#line 204 "debugger_interface.m"
                                                        }
#line 204 "debugger_interface.m"
                                                      else
#line 204 "debugger_interface.m"
                                                        if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 204 "debugger_interface.m"
                                                          {
#line 204 "debugger_interface.m"
                                                            MR_String mdb__debugger_interface__V_115_115 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                            MR_String mdb__debugger_interface__V_116_116;

#line 204 "debugger_interface.m"
                                                            mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 204 "debugger_interface.m"
                                                            if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                              {
#line 204 "debugger_interface.m"
                                                                mdb__debugger_interface__V_116_116 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 7510 "mdb.debugger_interface.c"
                                                                mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_115_115, mdb__debugger_interface__V_116_116) == 0);
#line 204 "debugger_interface.m"
                                                              }
#line 204 "debugger_interface.m"
                                                          }
#line 204 "debugger_interface.m"
                                                        else
#line 204 "debugger_interface.m"
                                                          if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 204 "debugger_interface.m"
                                                            {
#line 204 "debugger_interface.m"
                                                              MR_Integer mdb__debugger_interface__V_105_105 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                              MR_Integer mdb__debugger_interface__V_106_106 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2)));
#line 204 "debugger_interface.m"
                                                              MR_Integer mdb__debugger_interface__V_107_107 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 3)));
#line 204 "debugger_interface.m"
                                                              MR_Integer mdb__debugger_interface__V_108_108;
#line 204 "debugger_interface.m"
                                                              MR_Integer mdb__debugger_interface__V_109_109;
#line 204 "debugger_interface.m"
                                                              MR_Integer mdb__debugger_interface__V_110_110;

#line 204 "debugger_interface.m"
                                                              mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 204 "debugger_interface.m"
                                                              if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                {
#line 204 "debugger_interface.m"
                                                                  mdb__debugger_interface__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                  mdb__debugger_interface__V_109_109 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 204 "debugger_interface.m"
                                                                  mdb__debugger_interface__V_110_110 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
#line 7547 "mdb.debugger_interface.c"
                                                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_105_105 == mdb__debugger_interface__V_108_108);
#line 204 "debugger_interface.m"
                                                                  if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                    {
#line 7553 "mdb.debugger_interface.c"
                                                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_106_106 == mdb__debugger_interface__V_109_109);
#line 204 "debugger_interface.m"
                                                                      if (mdb__debugger_interface__succeeded)
#line 7557 "mdb.debugger_interface.c"
                                                                        mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_107_107 == mdb__debugger_interface__V_110_110);
#line 204 "debugger_interface.m"
                                                                    }
#line 204 "debugger_interface.m"
                                                                }
#line 204 "debugger_interface.m"
                                                            }
#line 204 "debugger_interface.m"
                                                          else
#line 204 "debugger_interface.m"
                                                            if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 204 "debugger_interface.m"
                                                              {
#line 204 "debugger_interface.m"
                                                                MR_String mdb__debugger_interface__V_81_81 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                MR_String mdb__debugger_interface__V_82_82;

#line 204 "debugger_interface.m"
                                                                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 204 "debugger_interface.m"
                                                                if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                  {
#line 204 "debugger_interface.m"
                                                                    mdb__debugger_interface__V_82_82 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 7584 "mdb.debugger_interface.c"
                                                                    mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_81_81, mdb__debugger_interface__V_82_82) == 0);
#line 204 "debugger_interface.m"
                                                                  }
#line 204 "debugger_interface.m"
                                                              }
#line 204 "debugger_interface.m"
                                                            else
#line 204 "debugger_interface.m"
                                                              if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 204 "debugger_interface.m"
                                                                {
#line 204 "debugger_interface.m"
                                                                  MR_String mdb__debugger_interface__V_133_133 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                  MR_String mdb__debugger_interface__V_134_134;

#line 204 "debugger_interface.m"
                                                                  mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 204 "debugger_interface.m"
                                                                  if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                    {
#line 204 "debugger_interface.m"
                                                                      mdb__debugger_interface__V_134_134 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 7609 "mdb.debugger_interface.c"
                                                                      mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_133_133, mdb__debugger_interface__V_134_134) == 0);
#line 204 "debugger_interface.m"
                                                                    }
#line 204 "debugger_interface.m"
                                                                }
#line 204 "debugger_interface.m"
                                                              else
#line 204 "debugger_interface.m"
                                                                if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 204 "debugger_interface.m"
                                                                  {
#line 204 "debugger_interface.m"
                                                                    MR_Integer mdb__debugger_interface__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                    MR_Integer mdb__debugger_interface__V_84_84;

#line 204 "debugger_interface.m"
                                                                    mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 204 "debugger_interface.m"
                                                                    if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                      {
#line 204 "debugger_interface.m"
                                                                        mdb__debugger_interface__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 7634 "mdb.debugger_interface.c"
                                                                        mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_83_83 == mdb__debugger_interface__V_84_84);
#line 204 "debugger_interface.m"
                                                                      }
#line 204 "debugger_interface.m"
                                                                  }
#line 204 "debugger_interface.m"
                                                                else
#line 204 "debugger_interface.m"
                                                                  if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 204 "debugger_interface.m"
                                                                    {
#line 204 "debugger_interface.m"
                                                                      MR_String mdb__debugger_interface__V_95_95 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                      MR_String mdb__debugger_interface__V_96_96 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2)));
#line 204 "debugger_interface.m"
                                                                      MR_Integer mdb__debugger_interface__V_97_97 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 3)));
#line 204 "debugger_interface.m"
                                                                      MR_Integer mdb__debugger_interface__V_98_98 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 4)));
#line 204 "debugger_interface.m"
                                                                      MR_String mdb__debugger_interface__V_99_99;
#line 204 "debugger_interface.m"
                                                                      MR_String mdb__debugger_interface__V_100_100;
#line 204 "debugger_interface.m"
                                                                      MR_Integer mdb__debugger_interface__V_101_101;
#line 204 "debugger_interface.m"
                                                                      MR_Integer mdb__debugger_interface__V_102_102;

#line 204 "debugger_interface.m"
                                                                      mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 204 "debugger_interface.m"
                                                                      if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                        {
#line 204 "debugger_interface.m"
                                                                          mdb__debugger_interface__V_99_99 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                          mdb__debugger_interface__V_100_100 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 204 "debugger_interface.m"
                                                                          mdb__debugger_interface__V_101_101 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
#line 204 "debugger_interface.m"
                                                                          mdb__debugger_interface__V_102_102 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 4)));
#line 7677 "mdb.debugger_interface.c"
                                                                          mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_95_95, mdb__debugger_interface__V_99_99) == 0);
#line 204 "debugger_interface.m"
                                                                          if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                            {
#line 7683 "mdb.debugger_interface.c"
                                                                              mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_96_96, mdb__debugger_interface__V_100_100) == 0);
#line 204 "debugger_interface.m"
                                                                              if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                {
#line 7689 "mdb.debugger_interface.c"
                                                                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_97_97 == mdb__debugger_interface__V_101_101);
#line 204 "debugger_interface.m"
                                                                                  if (mdb__debugger_interface__succeeded)
#line 7693 "mdb.debugger_interface.c"
                                                                                    mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_98_98 == mdb__debugger_interface__V_102_102);
#line 204 "debugger_interface.m"
                                                                                }
#line 204 "debugger_interface.m"
                                                                            }
#line 204 "debugger_interface.m"
                                                                        }
#line 204 "debugger_interface.m"
                                                                    }
#line 204 "debugger_interface.m"
                                                                  else
#line 204 "debugger_interface.m"
                                                                    if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 204 "debugger_interface.m"
                                                                      {
#line 204 "debugger_interface.m"
                                                                        MR_String mdb__debugger_interface__V_85_85 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                        MR_String mdb__debugger_interface__V_86_86 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2)));
#line 204 "debugger_interface.m"
                                                                        MR_String mdb__debugger_interface__V_87_87 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 3)));
#line 204 "debugger_interface.m"
                                                                        MR_Integer mdb__debugger_interface__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 4)));
#line 204 "debugger_interface.m"
                                                                        MR_Integer mdb__debugger_interface__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 5)));
#line 204 "debugger_interface.m"
                                                                        MR_String mdb__debugger_interface__V_90_90;
#line 204 "debugger_interface.m"
                                                                        MR_String mdb__debugger_interface__V_91_91;
#line 204 "debugger_interface.m"
                                                                        MR_String mdb__debugger_interface__V_92_92;
#line 204 "debugger_interface.m"
                                                                        MR_Integer mdb__debugger_interface__V_93_93;
#line 204 "debugger_interface.m"
                                                                        MR_Integer mdb__debugger_interface__V_94_94;

#line 204 "debugger_interface.m"
                                                                        mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 204 "debugger_interface.m"
                                                                        if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                          {
#line 204 "debugger_interface.m"
                                                                            mdb__debugger_interface__V_90_90 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                            mdb__debugger_interface__V_91_91 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 204 "debugger_interface.m"
                                                                            mdb__debugger_interface__V_92_92 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
#line 204 "debugger_interface.m"
                                                                            mdb__debugger_interface__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 4)));
#line 204 "debugger_interface.m"
                                                                            mdb__debugger_interface__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 5)));
#line 7746 "mdb.debugger_interface.c"
                                                                            mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_85_85, mdb__debugger_interface__V_90_90) == 0);
#line 204 "debugger_interface.m"
                                                                            if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                              {
#line 7752 "mdb.debugger_interface.c"
                                                                                mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_86_86, mdb__debugger_interface__V_91_91) == 0);
#line 204 "debugger_interface.m"
                                                                                if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                  {
#line 7758 "mdb.debugger_interface.c"
                                                                                    mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_87_87, mdb__debugger_interface__V_92_92) == 0);
#line 204 "debugger_interface.m"
                                                                                    if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                                      {
#line 7764 "mdb.debugger_interface.c"
                                                                                        mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_88_88 == mdb__debugger_interface__V_93_93);
#line 204 "debugger_interface.m"
                                                                                        if (mdb__debugger_interface__succeeded)
#line 7768 "mdb.debugger_interface.c"
                                                                                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_89_89 == mdb__debugger_interface__V_94_94);
#line 204 "debugger_interface.m"
                                                                                      }
#line 204 "debugger_interface.m"
                                                                                  }
#line 204 "debugger_interface.m"
                                                                              }
#line 204 "debugger_interface.m"
                                                                          }
#line 204 "debugger_interface.m"
                                                                      }
#line 204 "debugger_interface.m"
                                                                    else
#line 204 "debugger_interface.m"
                                                                      {
#line 204 "debugger_interface.m"
                                                                        MR_Integer mdb__debugger_interface__V_119_119 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                        MR_Integer mdb__debugger_interface__V_120_120 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2)));
#line 204 "debugger_interface.m"
                                                                        MR_Integer mdb__debugger_interface__V_121_121 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 3)));
#line 204 "debugger_interface.m"
                                                                        MR_Integer mdb__debugger_interface__V_122_122;
#line 204 "debugger_interface.m"
                                                                        MR_Integer mdb__debugger_interface__V_123_123;
#line 204 "debugger_interface.m"
                                                                        MR_Integer mdb__debugger_interface__V_124_124;

#line 204 "debugger_interface.m"
                                                                        mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 204 "debugger_interface.m"
                                                                        if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                          {
#line 204 "debugger_interface.m"
                                                                            mdb__debugger_interface__V_122_122 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "debugger_interface.m"
                                                                            mdb__debugger_interface__V_123_123 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 204 "debugger_interface.m"
                                                                            mdb__debugger_interface__V_124_124 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
#line 7809 "mdb.debugger_interface.c"
                                                                            mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_119_119 == mdb__debugger_interface__V_122_122);
#line 204 "debugger_interface.m"
                                                                            if (mdb__debugger_interface__succeeded)
#line 204 "debugger_interface.m"
                                                                              {
#line 7815 "mdb.debugger_interface.c"
                                                                                mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_120_120 == mdb__debugger_interface__V_123_123);
#line 204 "debugger_interface.m"
                                                                                if (mdb__debugger_interface__succeeded)
#line 7819 "mdb.debugger_interface.c"
                                                                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_121_121 == mdb__debugger_interface__V_124_124);
#line 204 "debugger_interface.m"
                                                                              }
#line 204 "debugger_interface.m"
                                                                          }
#line 204 "debugger_interface.m"
                                                                      }
#line 204 "debugger_interface.m"
    return mdb__debugger_interface__succeeded;
#line 204 "debugger_interface.m"
  }
#line 204 "debugger_interface.m"
}

#line 88 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Compare____debugger_request_0_0(
#line 88 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
#line 88 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__2_2,
#line 88 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__3_3)
#line 88 "debugger_interface.m"
{
#line 88 "debugger_interface.m"
  {
#line 88 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 88 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__CastX_58 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;
#line 88 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__CastY_59 = (MR_Integer) mdb__debugger_interface__HeadVar__3_3;

#line 88 "debugger_interface.m"
    mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastX_58 == mdb__debugger_interface__CastY_59);
#line 88 "debugger_interface.m"
    if (mdb__debugger_interface__succeeded)
#line 7858 "mdb.debugger_interface.c"
      *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 0;
#line 88 "debugger_interface.m"
    else
#line 88 "debugger_interface.m"
      {
#line 88 "debugger_interface.m"
        MR_Integer mdb__debugger_interface__V_4_4;
#line 88 "debugger_interface.m"
        MR_Integer mdb__debugger_interface__V_5_5;

#line 88 "debugger_interface.m"
        {
#line 88 "debugger_interface.m"
          mdb__debugger_interface____Index____debugger_request_0_0(mdb__debugger_interface__HeadVar__2_2, &mdb__debugger_interface__V_4_4);
        }
#line 88 "debugger_interface.m"
        {
#line 88 "debugger_interface.m"
          mdb__debugger_interface____Index____debugger_request_0_0(mdb__debugger_interface__HeadVar__3_3, &mdb__debugger_interface__V_5_5);
        }
#line 88 "debugger_interface.m"
        mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_4_4 < mdb__debugger_interface__V_5_5);
#line 88 "debugger_interface.m"
        if (mdb__debugger_interface__succeeded)
#line 7883 "mdb.debugger_interface.c"
          *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
#line 88 "debugger_interface.m"
        else
#line 88 "debugger_interface.m"
          {
#line 88 "debugger_interface.m"
            mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_4_4 > mdb__debugger_interface__V_5_5);
#line 88 "debugger_interface.m"
            if (mdb__debugger_interface__succeeded)
#line 7893 "mdb.debugger_interface.c"
              *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
#line 88 "debugger_interface.m"
            else
#line 88 "debugger_interface.m"
              {
#line 88 "debugger_interface.m"
                MR_Word mdb__debugger_interface__V_6_6;

#line 88 "debugger_interface.m"
                if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 88 "debugger_interface.m"
                  {
#line 88 "debugger_interface.m"
                    mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 88 "debugger_interface.m"
                    mdb__debugger_interface__succeeded = MR_TRUE;
#line 88 "debugger_interface.m"
                  }
#line 88 "debugger_interface.m"
                else
#line 88 "debugger_interface.m"
                  if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 88 "debugger_interface.m"
                    {
#line 88 "debugger_interface.m"
                      mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 88 "debugger_interface.m"
                      mdb__debugger_interface__succeeded = MR_TRUE;
#line 88 "debugger_interface.m"
                    }
#line 88 "debugger_interface.m"
                  else
#line 88 "debugger_interface.m"
                    if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 88 "debugger_interface.m"
                      {
#line 88 "debugger_interface.m"
                        mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 88 "debugger_interface.m"
                        mdb__debugger_interface__succeeded = MR_TRUE;
#line 88 "debugger_interface.m"
                      }
#line 88 "debugger_interface.m"
                    else
#line 88 "debugger_interface.m"
                      if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 88 "debugger_interface.m"
                        {
#line 88 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 88 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 88 "debugger_interface.m"
                        }
#line 88 "debugger_interface.m"
                      else
#line 88 "debugger_interface.m"
                        if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 88 "debugger_interface.m"
                          {
#line 88 "debugger_interface.m"
                            mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 88 "debugger_interface.m"
                            mdb__debugger_interface__succeeded = MR_TRUE;
#line 88 "debugger_interface.m"
                          }
#line 88 "debugger_interface.m"
                        else
#line 88 "debugger_interface.m"
                          if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 88 "debugger_interface.m"
                            {
#line 88 "debugger_interface.m"
                              mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 88 "debugger_interface.m"
                              mdb__debugger_interface__succeeded = MR_TRUE;
#line 88 "debugger_interface.m"
                            }
#line 88 "debugger_interface.m"
                          else
#line 88 "debugger_interface.m"
                            if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 88 "debugger_interface.m"
                              {
#line 88 "debugger_interface.m"
                                mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 88 "debugger_interface.m"
                                mdb__debugger_interface__succeeded = MR_TRUE;
#line 88 "debugger_interface.m"
                              }
#line 88 "debugger_interface.m"
                            else
#line 88 "debugger_interface.m"
                              if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 88 "debugger_interface.m"
                                {
#line 88 "debugger_interface.m"
                                  mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 88 "debugger_interface.m"
                                  mdb__debugger_interface__succeeded = MR_TRUE;
#line 88 "debugger_interface.m"
                                }
#line 88 "debugger_interface.m"
                              else
#line 88 "debugger_interface.m"
                                if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 88 "debugger_interface.m"
                                  {
#line 88 "debugger_interface.m"
                                    mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 88 "debugger_interface.m"
                                    mdb__debugger_interface__succeeded = MR_TRUE;
#line 88 "debugger_interface.m"
                                  }
#line 88 "debugger_interface.m"
                                else
#line 88 "debugger_interface.m"
                                  if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 88 "debugger_interface.m"
                                    {
#line 88 "debugger_interface.m"
                                      mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 88 "debugger_interface.m"
                                      mdb__debugger_interface__succeeded = MR_TRUE;
#line 88 "debugger_interface.m"
                                    }
#line 88 "debugger_interface.m"
                                  else
#line 88 "debugger_interface.m"
                                    if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 88 "debugger_interface.m"
                                      {
#line 88 "debugger_interface.m"
                                        mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 88 "debugger_interface.m"
                                        mdb__debugger_interface__succeeded = MR_TRUE;
#line 88 "debugger_interface.m"
                                      }
#line 88 "debugger_interface.m"
                                    else
#line 88 "debugger_interface.m"
                                      if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 88 "debugger_interface.m"
                                        {
#line 88 "debugger_interface.m"
                                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 88 "debugger_interface.m"
                                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 88 "debugger_interface.m"
                                        }
#line 88 "debugger_interface.m"
                                      else
#line 88 "debugger_interface.m"
                                        if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 88 "debugger_interface.m"
                                          {
#line 88 "debugger_interface.m"
                                            mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 88 "debugger_interface.m"
                                            mdb__debugger_interface__succeeded = MR_TRUE;
#line 88 "debugger_interface.m"
                                          }
#line 88 "debugger_interface.m"
                                        else
#line 88 "debugger_interface.m"
                                          if ((mdb__debugger_interface__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 88 "debugger_interface.m"
                                            {
#line 88 "debugger_interface.m"
                                              mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 88 "debugger_interface.m"
                                              mdb__debugger_interface__succeeded = MR_TRUE;
#line 88 "debugger_interface.m"
                                            }
#line 88 "debugger_interface.m"
                                          else
#line 88 "debugger_interface.m"
                                            if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 88 "debugger_interface.m"
                                              {
#line 88 "debugger_interface.m"
                                                MR_Integer mdb__debugger_interface__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));
#line 88 "debugger_interface.m"
                                                MR_Integer mdb__debugger_interface__V_43_43;

#line 88 "debugger_interface.m"
                                                mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 88 "debugger_interface.m"
                                                if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                  {
#line 88 "debugger_interface.m"
                                                    mdb__debugger_interface__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)));
#line 88 "debugger_interface.m"
                                                    {
#line 88 "debugger_interface.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_42_42, mdb__debugger_interface__V_43_43);
                                                    }
#line 88 "debugger_interface.m"
                                                    mdb__debugger_interface__succeeded = MR_TRUE;
#line 88 "debugger_interface.m"
                                                  }
#line 88 "debugger_interface.m"
                                              }
#line 88 "debugger_interface.m"
                                            else
#line 88 "debugger_interface.m"
                                              if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 88 "debugger_interface.m"
                                                {
#line 88 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));
#line 88 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 88 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 88 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
#line 88 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 4)));
#line 88 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 5)));
#line 88 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 6)));
#line 88 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 7)));
#line 88 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 8)));
#line 88 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 9)));
#line 88 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 10)));
#line 88 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 11)));
#line 88 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__V_19_19;
#line 88 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__V_20_20;
#line 88 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__V_21_21;
#line 88 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__V_22_22;
#line 88 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__V_23_23;
#line 88 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__V_24_24;
#line 88 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__V_25_25;
#line 88 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__V_26_26;
#line 88 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__V_27_27;
#line 88 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__V_28_28;
#line 88 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__V_29_29;
#line 88 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__V_30_30;
#line 88 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__V_31_31;
#line 88 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__TypeInfo_60_60;

#line 88 "debugger_interface.m"
                                                  mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 88 "debugger_interface.m"
                                                  if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                    {
#line 88 "debugger_interface.m"
                                                      mdb__debugger_interface__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)));
#line 88 "debugger_interface.m"
                                                      mdb__debugger_interface__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 88 "debugger_interface.m"
                                                      mdb__debugger_interface__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 2)));
#line 88 "debugger_interface.m"
                                                      mdb__debugger_interface__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 3)));
#line 88 "debugger_interface.m"
                                                      mdb__debugger_interface__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 4)));
#line 88 "debugger_interface.m"
                                                      mdb__debugger_interface__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 5)));
#line 88 "debugger_interface.m"
                                                      mdb__debugger_interface__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 6)));
#line 88 "debugger_interface.m"
                                                      mdb__debugger_interface__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 7)));
#line 88 "debugger_interface.m"
                                                      mdb__debugger_interface__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 8)));
#line 88 "debugger_interface.m"
                                                      mdb__debugger_interface__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 9)));
#line 88 "debugger_interface.m"
                                                      mdb__debugger_interface__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 10)));
#line 88 "debugger_interface.m"
                                                      mdb__debugger_interface__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 11)));
#line 8187 "mdb.debugger_interface.c"
                                                      mdb__debugger_interface__TypeInfo_60_60 = (MR_Word) &mdb__debugger_interface_scalar_common_1[1];
#line 88 "debugger_interface.m"
                                                      {
#line 88 "debugger_interface.m"
                                                        mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_60_60, &mdb__debugger_interface__V_31_31, ((MR_Box) (mdb__debugger_interface__V_7_7)), ((MR_Box) (mdb__debugger_interface__V_19_19)));
                                                      }
#line 8194 "mdb.debugger_interface.c"
                                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_31_31 == (MR_Integer) 0);
#line 88 "debugger_interface.m"
                                                      mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 88 "debugger_interface.m"
                                                      if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                        mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_31_31;
#line 88 "debugger_interface.m"
                                                      else
#line 88 "debugger_interface.m"
                                                        {
#line 88 "debugger_interface.m"
                                                          MR_Word mdb__debugger_interface__V_32_32;

#line 88 "debugger_interface.m"
                                                          {
#line 88 "debugger_interface.m"
                                                            mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[1], &mdb__debugger_interface__V_32_32, ((MR_Box) (mdb__debugger_interface__V_8_8)), ((MR_Box) (mdb__debugger_interface__V_20_20)));
                                                          }
#line 8214 "mdb.debugger_interface.c"
                                                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_32_32 == (MR_Integer) 0);
#line 88 "debugger_interface.m"
                                                          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 88 "debugger_interface.m"
                                                          if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                            mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_32_32;
#line 88 "debugger_interface.m"
                                                          else
#line 88 "debugger_interface.m"
                                                            {
#line 88 "debugger_interface.m"
                                                              MR_Word mdb__debugger_interface__V_33_33;

#line 88 "debugger_interface.m"
                                                              {
#line 88 "debugger_interface.m"
                                                                mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[1], &mdb__debugger_interface__V_33_33, ((MR_Box) (mdb__debugger_interface__V_9_9)), ((MR_Box) (mdb__debugger_interface__V_21_21)));
                                                              }
#line 8234 "mdb.debugger_interface.c"
                                                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_33_33 == (MR_Integer) 0);
#line 88 "debugger_interface.m"
                                                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 88 "debugger_interface.m"
                                                              if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_33_33;
#line 88 "debugger_interface.m"
                                                              else
#line 88 "debugger_interface.m"
                                                                {
#line 88 "debugger_interface.m"
                                                                  MR_Word mdb__debugger_interface__V_34_34;

#line 88 "debugger_interface.m"
                                                                  {
#line 88 "debugger_interface.m"
                                                                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[2], &mdb__debugger_interface__V_34_34, ((MR_Box) (mdb__debugger_interface__V_10_10)), ((MR_Box) (mdb__debugger_interface__V_22_22)));
                                                                  }
#line 8254 "mdb.debugger_interface.c"
                                                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_34_34 == (MR_Integer) 0);
#line 88 "debugger_interface.m"
                                                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 88 "debugger_interface.m"
                                                                  if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_34_34;
#line 88 "debugger_interface.m"
                                                                  else
#line 88 "debugger_interface.m"
                                                                    {
#line 88 "debugger_interface.m"
                                                                      MR_Word mdb__debugger_interface__V_35_35;

#line 88 "debugger_interface.m"
                                                                      {
#line 88 "debugger_interface.m"
                                                                        mdb__debugger_interface____Compare____pred_match_0_0(&mdb__debugger_interface__V_35_35, mdb__debugger_interface__V_11_11, mdb__debugger_interface__V_23_23);
                                                                      }
#line 8274 "mdb.debugger_interface.c"
                                                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_35_35 == (MR_Integer) 0);
#line 88 "debugger_interface.m"
                                                                      mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 88 "debugger_interface.m"
                                                                      if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                                        mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_35_35;
#line 88 "debugger_interface.m"
                                                                      else
#line 88 "debugger_interface.m"
                                                                        {
#line 88 "debugger_interface.m"
                                                                          MR_Word mdb__debugger_interface__V_36_36;

#line 88 "debugger_interface.m"
                                                                          {
#line 88 "debugger_interface.m"
                                                                            mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[3], &mdb__debugger_interface__V_36_36, ((MR_Box) (mdb__debugger_interface__V_12_12)), ((MR_Box) (mdb__debugger_interface__V_24_24)));
                                                                          }
#line 8294 "mdb.debugger_interface.c"
                                                                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_36_36 == (MR_Integer) 0);
#line 88 "debugger_interface.m"
                                                                          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 88 "debugger_interface.m"
                                                                          if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                                            mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_36_36;
#line 88 "debugger_interface.m"
                                                                          else
#line 88 "debugger_interface.m"
                                                                            {
#line 88 "debugger_interface.m"
                                                                              MR_Word mdb__debugger_interface__V_37_37;

#line 88 "debugger_interface.m"
                                                                              {
#line 88 "debugger_interface.m"
                                                                                mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[3], &mdb__debugger_interface__V_37_37, ((MR_Box) (mdb__debugger_interface__V_13_13)), ((MR_Box) (mdb__debugger_interface__V_25_25)));
                                                                              }
#line 8314 "mdb.debugger_interface.c"
                                                                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_37_37 == (MR_Integer) 0);
#line 88 "debugger_interface.m"
                                                                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 88 "debugger_interface.m"
                                                                              if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_37_37;
#line 88 "debugger_interface.m"
                                                                              else
#line 88 "debugger_interface.m"
                                                                                {
#line 88 "debugger_interface.m"
                                                                                  MR_Word mdb__debugger_interface__V_38_38;

#line 88 "debugger_interface.m"
                                                                                  {
#line 88 "debugger_interface.m"
                                                                                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[1], &mdb__debugger_interface__V_38_38, ((MR_Box) (mdb__debugger_interface__V_14_14)), ((MR_Box) (mdb__debugger_interface__V_26_26)));
                                                                                  }
#line 8334 "mdb.debugger_interface.c"
                                                                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_38_38 == (MR_Integer) 0);
#line 88 "debugger_interface.m"
                                                                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 88 "debugger_interface.m"
                                                                                  if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_38_38;
#line 88 "debugger_interface.m"
                                                                                  else
#line 88 "debugger_interface.m"
                                                                                    {
#line 88 "debugger_interface.m"
                                                                                      MR_Word mdb__debugger_interface__V_39_39;

#line 88 "debugger_interface.m"
                                                                                      {
#line 88 "debugger_interface.m"
                                                                                        mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[1], &mdb__debugger_interface__V_39_39, ((MR_Box) (mdb__debugger_interface__V_15_15)), ((MR_Box) (mdb__debugger_interface__V_27_27)));
                                                                                      }
#line 8354 "mdb.debugger_interface.c"
                                                                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_39_39 == (MR_Integer) 0);
#line 88 "debugger_interface.m"
                                                                                      mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 88 "debugger_interface.m"
                                                                                      if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                                                        mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_39_39;
#line 88 "debugger_interface.m"
                                                                                      else
#line 88 "debugger_interface.m"
                                                                                        {
#line 88 "debugger_interface.m"
                                                                                          MR_Word mdb__debugger_interface__V_40_40;

#line 88 "debugger_interface.m"
                                                                                          {
#line 88 "debugger_interface.m"
                                                                                            mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[1], &mdb__debugger_interface__V_40_40, ((MR_Box) (mdb__debugger_interface__V_16_16)), ((MR_Box) (mdb__debugger_interface__V_28_28)));
                                                                                          }
#line 8374 "mdb.debugger_interface.c"
                                                                                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_40_40 == (MR_Integer) 0);
#line 88 "debugger_interface.m"
                                                                                          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 88 "debugger_interface.m"
                                                                                          if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                                                            mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_40_40;
#line 88 "debugger_interface.m"
                                                                                          else
#line 88 "debugger_interface.m"
                                                                                            {
#line 88 "debugger_interface.m"
                                                                                              MR_Word mdb__debugger_interface__V_41_41;

#line 88 "debugger_interface.m"
                                                                                              {
#line 88 "debugger_interface.m"
                                                                                                mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[4], &mdb__debugger_interface__V_41_41, ((MR_Box) (mdb__debugger_interface__V_17_17)), ((MR_Box) (mdb__debugger_interface__V_29_29)));
                                                                                              }
#line 8394 "mdb.debugger_interface.c"
                                                                                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_41_41 == (MR_Integer) 0);
#line 88 "debugger_interface.m"
                                                                                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 88 "debugger_interface.m"
                                                                                              if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                                                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_41_41;
#line 88 "debugger_interface.m"
                                                                                              else
#line 88 "debugger_interface.m"
                                                                                                {
#line 88 "debugger_interface.m"
                                                                                                  {
#line 88 "debugger_interface.m"
                                                                                                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[3], &mdb__debugger_interface__V_6_6, ((MR_Box) (mdb__debugger_interface__V_18_18)), ((MR_Box) (mdb__debugger_interface__V_30_30)));
                                                                                                  }
#line 88 "debugger_interface.m"
                                                                                                }
#line 88 "debugger_interface.m"
                                                                                            }
#line 88 "debugger_interface.m"
                                                                                        }
#line 88 "debugger_interface.m"
                                                                                    }
#line 88 "debugger_interface.m"
                                                                                }
#line 88 "debugger_interface.m"
                                                                            }
#line 88 "debugger_interface.m"
                                                                        }
#line 88 "debugger_interface.m"
                                                                    }
#line 88 "debugger_interface.m"
                                                                }
#line 88 "debugger_interface.m"
                                                            }
#line 88 "debugger_interface.m"
                                                        }
#line 88 "debugger_interface.m"
                                                      mdb__debugger_interface__succeeded = MR_TRUE;
#line 88 "debugger_interface.m"
                                                    }
#line 88 "debugger_interface.m"
                                                }
#line 88 "debugger_interface.m"
                                              else
#line 88 "debugger_interface.m"
                                                if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 88 "debugger_interface.m"
                                                  {
#line 88 "debugger_interface.m"
                                                    MR_String mdb__debugger_interface__V_54_54 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 88 "debugger_interface.m"
                                                    MR_String mdb__debugger_interface__V_55_55;

#line 88 "debugger_interface.m"
                                                    mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 88 "debugger_interface.m"
                                                    if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                      {
#line 88 "debugger_interface.m"
                                                        mdb__debugger_interface__V_55_55 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 88 "debugger_interface.m"
                                                        {
#line 88 "debugger_interface.m"
                                                          mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_54_54, mdb__debugger_interface__V_55_55);
                                                        }
#line 88 "debugger_interface.m"
                                                        mdb__debugger_interface__succeeded = MR_TRUE;
#line 88 "debugger_interface.m"
                                                      }
#line 88 "debugger_interface.m"
                                                  }
#line 88 "debugger_interface.m"
                                                else
#line 88 "debugger_interface.m"
                                                  if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 88 "debugger_interface.m"
                                                    {
#line 88 "debugger_interface.m"
                                                      MR_Word mdb__debugger_interface__TypeInfo_75_75;
#line 88 "debugger_interface.m"
                                                      MR_Word mdb__debugger_interface__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 88 "debugger_interface.m"
                                                      MR_Word mdb__debugger_interface__V_49_49;

#line 88 "debugger_interface.m"
                                                      mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 88 "debugger_interface.m"
                                                      if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                        {
#line 88 "debugger_interface.m"
                                                          mdb__debugger_interface__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 8490 "mdb.debugger_interface.c"
                                                          mdb__debugger_interface__TypeInfo_75_75 = (MR_Word) &mdb__debugger_interface_scalar_common_1[5];
#line 88 "debugger_interface.m"
                                                          {
#line 88 "debugger_interface.m"
                                                            mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_75_75, &mdb__debugger_interface__V_6_6, ((MR_Box) (mdb__debugger_interface__V_48_48)), ((MR_Box) (mdb__debugger_interface__V_49_49)));
                                                          }
#line 88 "debugger_interface.m"
                                                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 88 "debugger_interface.m"
                                                        }
#line 88 "debugger_interface.m"
                                                    }
#line 88 "debugger_interface.m"
                                                  else
#line 88 "debugger_interface.m"
                                                    if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 88 "debugger_interface.m"
                                                      {
#line 88 "debugger_interface.m"
                                                        MR_String mdb__debugger_interface__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 88 "debugger_interface.m"
                                                        MR_String mdb__debugger_interface__V_45_45;

#line 88 "debugger_interface.m"
                                                        mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 88 "debugger_interface.m"
                                                        if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                          {
#line 88 "debugger_interface.m"
                                                            mdb__debugger_interface__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 88 "debugger_interface.m"
                                                            {
#line 88 "debugger_interface.m"
                                                              mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_44_44, mdb__debugger_interface__V_45_45);
                                                            }
#line 88 "debugger_interface.m"
                                                            mdb__debugger_interface__succeeded = MR_TRUE;
#line 88 "debugger_interface.m"
                                                          }
#line 88 "debugger_interface.m"
                                                      }
#line 88 "debugger_interface.m"
                                                    else
#line 88 "debugger_interface.m"
                                                      if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 88 "debugger_interface.m"
                                                        {
#line 88 "debugger_interface.m"
                                                          MR_Word mdb__debugger_interface__TypeInfo_76_76;
#line 88 "debugger_interface.m"
                                                          MR_Word mdb__debugger_interface__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 88 "debugger_interface.m"
                                                          MR_Word mdb__debugger_interface__V_51_51;

#line 88 "debugger_interface.m"
                                                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 88 "debugger_interface.m"
                                                          if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                            {
#line 88 "debugger_interface.m"
                                                              mdb__debugger_interface__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 8554 "mdb.debugger_interface.c"
                                                              mdb__debugger_interface__TypeInfo_76_76 = (MR_Word) &mdb__debugger_interface_scalar_common_1[5];
#line 88 "debugger_interface.m"
                                                              {
#line 88 "debugger_interface.m"
                                                                mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_76_76, &mdb__debugger_interface__V_6_6, ((MR_Box) (mdb__debugger_interface__V_50_50)), ((MR_Box) (mdb__debugger_interface__V_51_51)));
                                                              }
#line 88 "debugger_interface.m"
                                                              mdb__debugger_interface__succeeded = MR_TRUE;
#line 88 "debugger_interface.m"
                                                            }
#line 88 "debugger_interface.m"
                                                        }
#line 88 "debugger_interface.m"
                                                      else
#line 88 "debugger_interface.m"
                                                        if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 88 "debugger_interface.m"
                                                          {
#line 88 "debugger_interface.m"
                                                            MR_String mdb__debugger_interface__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 88 "debugger_interface.m"
                                                            MR_String mdb__debugger_interface__V_57_57;

#line 88 "debugger_interface.m"
                                                            mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 88 "debugger_interface.m"
                                                            if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                              {
#line 88 "debugger_interface.m"
                                                                mdb__debugger_interface__V_57_57 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 88 "debugger_interface.m"
                                                                {
#line 88 "debugger_interface.m"
                                                                  mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_56_56, mdb__debugger_interface__V_57_57);
                                                                }
#line 88 "debugger_interface.m"
                                                                mdb__debugger_interface__succeeded = MR_TRUE;
#line 88 "debugger_interface.m"
                                                              }
#line 88 "debugger_interface.m"
                                                          }
#line 88 "debugger_interface.m"
                                                        else
#line 88 "debugger_interface.m"
                                                          if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 88 "debugger_interface.m"
                                                            {
#line 88 "debugger_interface.m"
                                                              MR_String mdb__debugger_interface__V_52_52 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 88 "debugger_interface.m"
                                                              MR_String mdb__debugger_interface__V_53_53;

#line 88 "debugger_interface.m"
                                                              mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 88 "debugger_interface.m"
                                                              if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                                {
#line 88 "debugger_interface.m"
                                                                  mdb__debugger_interface__V_53_53 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 88 "debugger_interface.m"
                                                                  {
#line 88 "debugger_interface.m"
                                                                    mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_52_52, mdb__debugger_interface__V_53_53);
                                                                  }
#line 88 "debugger_interface.m"
                                                                  mdb__debugger_interface__succeeded = MR_TRUE;
#line 88 "debugger_interface.m"
                                                                }
#line 88 "debugger_interface.m"
                                                            }
#line 88 "debugger_interface.m"
                                                          else
#line 88 "debugger_interface.m"
                                                            {
#line 88 "debugger_interface.m"
                                                              MR_Word mdb__debugger_interface__TypeInfo_74_74;
#line 88 "debugger_interface.m"
                                                              MR_Word mdb__debugger_interface__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 88 "debugger_interface.m"
                                                              MR_Word mdb__debugger_interface__V_47_47;

#line 88 "debugger_interface.m"
                                                              mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 88 "debugger_interface.m"
                                                              if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                                {
#line 88 "debugger_interface.m"
                                                                  mdb__debugger_interface__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 8646 "mdb.debugger_interface.c"
                                                                  mdb__debugger_interface__TypeInfo_74_74 = (MR_Word) &mdb__debugger_interface_scalar_common_1[5];
#line 88 "debugger_interface.m"
                                                                  {
#line 88 "debugger_interface.m"
                                                                    mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_74_74, &mdb__debugger_interface__V_6_6, ((MR_Box) (mdb__debugger_interface__V_46_46)), ((MR_Box) (mdb__debugger_interface__V_47_47)));
                                                                  }
#line 88 "debugger_interface.m"
                                                                  mdb__debugger_interface__succeeded = MR_TRUE;
#line 88 "debugger_interface.m"
                                                                }
#line 88 "debugger_interface.m"
                                                            }
#line 88 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                  *mdb__debugger_interface__HeadVar__1_1 = mdb__debugger_interface__V_6_6;
#line 88 "debugger_interface.m"
                else
#line 88 "debugger_interface.m"
                  {
#line 88 "debugger_interface.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 88 "debugger_interface.m"
                    return;
                  }
#line 88 "debugger_interface.m"
              }
#line 88 "debugger_interface.m"
          }
#line 88 "debugger_interface.m"
      }
#line 88 "debugger_interface.m"
  }
#line 88 "debugger_interface.m"
}

#line 88 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Index____debugger_request_0_0(
#line 88 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__1_1,
#line 88 "debugger_interface.m"
  MR_Integer * mdb__debugger_interface__HeadVar__2_2)
#line 88 "debugger_interface.m"
{
#line 88 "debugger_interface.m"
  {
#line 88 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;

#line 88 "debugger_interface.m"
    if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 8699 "mdb.debugger_interface.c"
      *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 6;
#line 88 "debugger_interface.m"
    else
#line 88 "debugger_interface.m"
      if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 8705 "mdb.debugger_interface.c"
        *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 19;
#line 88 "debugger_interface.m"
      else
#line 88 "debugger_interface.m"
        if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 8711 "mdb.debugger_interface.c"
          *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 22;
#line 88 "debugger_interface.m"
        else
#line 88 "debugger_interface.m"
          if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 8717 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 21;
#line 88 "debugger_interface.m"
          else
#line 88 "debugger_interface.m"
            if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 8723 "mdb.debugger_interface.c"
              *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 20;
#line 88 "debugger_interface.m"
            else
#line 88 "debugger_interface.m"
              if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 8729 "mdb.debugger_interface.c"
                *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 4;
#line 88 "debugger_interface.m"
              else
#line 88 "debugger_interface.m"
                if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 8735 "mdb.debugger_interface.c"
                  *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 2;
#line 88 "debugger_interface.m"
                else
#line 88 "debugger_interface.m"
                  if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 8741 "mdb.debugger_interface.c"
                    *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 3;
#line 88 "debugger_interface.m"
                  else
#line 88 "debugger_interface.m"
                    if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 8747 "mdb.debugger_interface.c"
                      *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 0;
#line 88 "debugger_interface.m"
                    else
#line 88 "debugger_interface.m"
                      if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 8753 "mdb.debugger_interface.c"
                        *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 7;
#line 88 "debugger_interface.m"
                      else
#line 88 "debugger_interface.m"
                        if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 8759 "mdb.debugger_interface.c"
                          *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 10;
#line 88 "debugger_interface.m"
                        else
#line 88 "debugger_interface.m"
                          if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 8765 "mdb.debugger_interface.c"
                            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 8;
#line 88 "debugger_interface.m"
                          else
#line 88 "debugger_interface.m"
                            if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 8771 "mdb.debugger_interface.c"
                              *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 9;
#line 88 "debugger_interface.m"
                            else
#line 88 "debugger_interface.m"
                              if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 8777 "mdb.debugger_interface.c"
                                *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 11;
#line 88 "debugger_interface.m"
                              else
#line 88 "debugger_interface.m"
                                if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 8783 "mdb.debugger_interface.c"
                                  *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 5;
#line 88 "debugger_interface.m"
                                else
#line 88 "debugger_interface.m"
                                  if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 8789 "mdb.debugger_interface.c"
                                    *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 1;
#line 88 "debugger_interface.m"
                                  else
#line 88 "debugger_interface.m"
                                    if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 8795 "mdb.debugger_interface.c"
                                      *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 17;
#line 88 "debugger_interface.m"
                                    else
#line 88 "debugger_interface.m"
                                      if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 8801 "mdb.debugger_interface.c"
                                        *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 14;
#line 88 "debugger_interface.m"
                                      else
#line 88 "debugger_interface.m"
                                        if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 8807 "mdb.debugger_interface.c"
                                          *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 12;
#line 88 "debugger_interface.m"
                                        else
#line 88 "debugger_interface.m"
                                          if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 8813 "mdb.debugger_interface.c"
                                            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 15;
#line 88 "debugger_interface.m"
                                          else
#line 88 "debugger_interface.m"
                                            if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 8819 "mdb.debugger_interface.c"
                                              *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 18;
#line 88 "debugger_interface.m"
                                            else
#line 88 "debugger_interface.m"
                                              if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 8825 "mdb.debugger_interface.c"
                                                *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 16;
#line 88 "debugger_interface.m"
                                              else
#line 8829 "mdb.debugger_interface.c"
                                                *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 13;
#line 88 "debugger_interface.m"
  }
#line 88 "debugger_interface.m"
}

#line 88 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_request_0_0(
#line 88 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__1_1,
#line 88 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__2_2)
#line 88 "debugger_interface.m"
{
#line 88 "debugger_interface.m"
  {
#line 88 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 88 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__CastX_71 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 88 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__CastY_72 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 88 "debugger_interface.m"
    mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastX_71 == mdb__debugger_interface__CastY_72);
#line 88 "debugger_interface.m"
    if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
      mdb__debugger_interface__succeeded = MR_TRUE;
#line 88 "debugger_interface.m"
    else
#line 88 "debugger_interface.m"
      if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 88 "debugger_interface.m"
        {
#line 88 "debugger_interface.m"
          MR_Integer mdb__debugger_interface__CastX_37 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 88 "debugger_interface.m"
          MR_Integer mdb__debugger_interface__CastY_38 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 88 "debugger_interface.m"
          mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_38 == mdb__debugger_interface__CastX_37);
#line 88 "debugger_interface.m"
        }
#line 88 "debugger_interface.m"
      else
#line 88 "debugger_interface.m"
        if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 88 "debugger_interface.m"
          {
#line 88 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__CastX_63 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 88 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__CastY_64 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 88 "debugger_interface.m"
            mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_64 == mdb__debugger_interface__CastX_63);
#line 88 "debugger_interface.m"
          }
#line 88 "debugger_interface.m"
        else
#line 88 "debugger_interface.m"
          if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 88 "debugger_interface.m"
            {
#line 88 "debugger_interface.m"
              MR_Integer mdb__debugger_interface__CastX_69 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 88 "debugger_interface.m"
              MR_Integer mdb__debugger_interface__CastY_70 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 88 "debugger_interface.m"
              mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_70 == mdb__debugger_interface__CastX_69);
#line 88 "debugger_interface.m"
            }
#line 88 "debugger_interface.m"
          else
#line 88 "debugger_interface.m"
            if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 88 "debugger_interface.m"
              {
#line 88 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_67 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 88 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_68 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 88 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_68 == mdb__debugger_interface__CastX_67);
#line 88 "debugger_interface.m"
              }
#line 88 "debugger_interface.m"
            else
#line 88 "debugger_interface.m"
              if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 88 "debugger_interface.m"
                {
#line 88 "debugger_interface.m"
                  MR_Integer mdb__debugger_interface__CastX_65 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 88 "debugger_interface.m"
                  MR_Integer mdb__debugger_interface__CastY_66 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 88 "debugger_interface.m"
                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_66 == mdb__debugger_interface__CastX_65);
#line 88 "debugger_interface.m"
                }
#line 88 "debugger_interface.m"
              else
#line 88 "debugger_interface.m"
                if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 88 "debugger_interface.m"
                  {
#line 88 "debugger_interface.m"
                    MR_Integer mdb__debugger_interface__CastX_33 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 88 "debugger_interface.m"
                    MR_Integer mdb__debugger_interface__CastY_34 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 88 "debugger_interface.m"
                    mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_34 == mdb__debugger_interface__CastX_33);
#line 88 "debugger_interface.m"
                  }
#line 88 "debugger_interface.m"
                else
#line 88 "debugger_interface.m"
                  if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 88 "debugger_interface.m"
                    {
#line 88 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__CastX_29 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 88 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__CastY_30 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 88 "debugger_interface.m"
                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_30 == mdb__debugger_interface__CastX_29);
#line 88 "debugger_interface.m"
                    }
#line 88 "debugger_interface.m"
                  else
#line 88 "debugger_interface.m"
                    if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 88 "debugger_interface.m"
                      {
#line 88 "debugger_interface.m"
                        MR_Integer mdb__debugger_interface__CastX_31 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 88 "debugger_interface.m"
                        MR_Integer mdb__debugger_interface__CastY_32 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 88 "debugger_interface.m"
                        mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_32 == mdb__debugger_interface__CastX_31);
#line 88 "debugger_interface.m"
                      }
#line 88 "debugger_interface.m"
                    else
#line 88 "debugger_interface.m"
                      if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 88 "debugger_interface.m"
                        {
#line 88 "debugger_interface.m"
                          MR_Integer mdb__debugger_interface__CastX_3 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 88 "debugger_interface.m"
                          MR_Integer mdb__debugger_interface__CastY_4 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 88 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_4 == mdb__debugger_interface__CastX_3);
#line 88 "debugger_interface.m"
                        }
#line 88 "debugger_interface.m"
                      else
#line 88 "debugger_interface.m"
                        if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 88 "debugger_interface.m"
                          {
#line 88 "debugger_interface.m"
                            MR_Integer mdb__debugger_interface__CastX_39 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 88 "debugger_interface.m"
                            MR_Integer mdb__debugger_interface__CastY_40 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 88 "debugger_interface.m"
                            mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_40 == mdb__debugger_interface__CastX_39);
#line 88 "debugger_interface.m"
                          }
#line 88 "debugger_interface.m"
                        else
#line 88 "debugger_interface.m"
                          if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 88 "debugger_interface.m"
                            {
#line 88 "debugger_interface.m"
                              MR_Integer mdb__debugger_interface__CastX_45 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 88 "debugger_interface.m"
                              MR_Integer mdb__debugger_interface__CastY_46 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 88 "debugger_interface.m"
                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_46 == mdb__debugger_interface__CastX_45);
#line 88 "debugger_interface.m"
                            }
#line 88 "debugger_interface.m"
                          else
#line 88 "debugger_interface.m"
                            if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 88 "debugger_interface.m"
                              {
#line 88 "debugger_interface.m"
                                MR_Integer mdb__debugger_interface__CastX_41 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 88 "debugger_interface.m"
                                MR_Integer mdb__debugger_interface__CastY_42 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 88 "debugger_interface.m"
                                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_42 == mdb__debugger_interface__CastX_41);
#line 88 "debugger_interface.m"
                              }
#line 88 "debugger_interface.m"
                            else
#line 88 "debugger_interface.m"
                              if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 88 "debugger_interface.m"
                                {
#line 88 "debugger_interface.m"
                                  MR_Integer mdb__debugger_interface__CastX_43 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 88 "debugger_interface.m"
                                  MR_Integer mdb__debugger_interface__CastY_44 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 88 "debugger_interface.m"
                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_44 == mdb__debugger_interface__CastX_43);
#line 88 "debugger_interface.m"
                                }
#line 88 "debugger_interface.m"
                              else
#line 88 "debugger_interface.m"
                                if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 88 "debugger_interface.m"
                                  {
#line 88 "debugger_interface.m"
                                    MR_Integer mdb__debugger_interface__CastX_47 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 88 "debugger_interface.m"
                                    MR_Integer mdb__debugger_interface__CastY_48 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 88 "debugger_interface.m"
                                    mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_48 == mdb__debugger_interface__CastX_47);
#line 88 "debugger_interface.m"
                                  }
#line 88 "debugger_interface.m"
                                else
#line 88 "debugger_interface.m"
                                  if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 88 "debugger_interface.m"
                                    {
#line 88 "debugger_interface.m"
                                      MR_Integer mdb__debugger_interface__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)));
#line 88 "debugger_interface.m"
                                      MR_Integer mdb__debugger_interface__V_36_36;

#line 88 "debugger_interface.m"
                                      mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 88 "debugger_interface.m"
                                      if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                        {
#line 88 "debugger_interface.m"
                                          mdb__debugger_interface__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));
#line 9089 "mdb.debugger_interface.c"
                                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_35_35 == mdb__debugger_interface__V_36_36);
#line 88 "debugger_interface.m"
                                        }
#line 88 "debugger_interface.m"
                                    }
#line 88 "debugger_interface.m"
                                  else
#line 88 "debugger_interface.m"
                                    if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 88 "debugger_interface.m"
                                      {
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__TypeCtorInfo_74_74;
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__TypeCtorInfo_75_75;
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__TypeCtorInfo_76_76;
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__TypeCtorInfo_77_77;
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__TypeCtorInfo_78_78;
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__TypeCtorInfo_79_79;
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__TypeCtorInfo_80_80;
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__TypeCtorInfo_81_81;
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__TypeCtorInfo_82_82;
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__TypeInfo_83_83;
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__TypeCtorInfo_84_84;
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)));
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2)));
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 3)));
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 4)));
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 5)));
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 6)));
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 7)));
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 8)));
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 9)));
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 10)));
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 11)));
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__V_17_17;
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__V_18_18;
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__V_19_19;
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__V_20_20;
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__V_21_21;
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__V_22_22;
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__V_23_23;
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__V_24_24;
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__V_25_25;
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__V_26_26;
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__V_27_27;
#line 88 "debugger_interface.m"
                                        MR_Word mdb__debugger_interface__V_28_28;

#line 88 "debugger_interface.m"
                                        mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 88 "debugger_interface.m"
                                        if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                          {
#line 88 "debugger_interface.m"
                                            mdb__debugger_interface__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));
#line 88 "debugger_interface.m"
                                            mdb__debugger_interface__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 88 "debugger_interface.m"
                                            mdb__debugger_interface__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 88 "debugger_interface.m"
                                            mdb__debugger_interface__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
#line 88 "debugger_interface.m"
                                            mdb__debugger_interface__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 4)));
#line 88 "debugger_interface.m"
                                            mdb__debugger_interface__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 5)));
#line 88 "debugger_interface.m"
                                            mdb__debugger_interface__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 6)));
#line 88 "debugger_interface.m"
                                            mdb__debugger_interface__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 7)));
#line 88 "debugger_interface.m"
                                            mdb__debugger_interface__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 8)));
#line 88 "debugger_interface.m"
                                            mdb__debugger_interface__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 9)));
#line 88 "debugger_interface.m"
                                            mdb__debugger_interface__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 10)));
#line 88 "debugger_interface.m"
                                            mdb__debugger_interface__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 11)));
#line 9202 "mdb.debugger_interface.c"
                                            mdb__debugger_interface__TypeCtorInfo_74_74 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 9204 "mdb.debugger_interface.c"
                                            {
#line 9206 "mdb.debugger_interface.c"
                                              mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_74_74, mdb__debugger_interface__V_5_5, mdb__debugger_interface__V_17_17);
                                            }
#line 88 "debugger_interface.m"
                                            if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                              {
#line 9213 "mdb.debugger_interface.c"
                                                mdb__debugger_interface__TypeCtorInfo_75_75 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 9215 "mdb.debugger_interface.c"
                                                {
#line 9217 "mdb.debugger_interface.c"
                                                  mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_75_75, mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_18_18);
                                                }
#line 88 "debugger_interface.m"
                                                if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                  {
#line 9224 "mdb.debugger_interface.c"
                                                    mdb__debugger_interface__TypeCtorInfo_76_76 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 9226 "mdb.debugger_interface.c"
                                                    {
#line 9228 "mdb.debugger_interface.c"
                                                      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_76_76, mdb__debugger_interface__V_7_7, mdb__debugger_interface__V_19_19);
                                                    }
#line 88 "debugger_interface.m"
                                                    if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                      {
#line 9235 "mdb.debugger_interface.c"
                                                        mdb__debugger_interface__TypeCtorInfo_77_77 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0;
#line 9237 "mdb.debugger_interface.c"
                                                        {
#line 9239 "mdb.debugger_interface.c"
                                                          mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_77_77, mdb__debugger_interface__V_8_8, mdb__debugger_interface__V_20_20);
                                                        }
#line 88 "debugger_interface.m"
                                                        if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                          {
#line 9246 "mdb.debugger_interface.c"
                                                            {
#line 9248 "mdb.debugger_interface.c"
                                                              mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____pred_match_0_0(mdb__debugger_interface__V_9_9, mdb__debugger_interface__V_21_21);
                                                            }
#line 88 "debugger_interface.m"
                                                            if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                              {
#line 9255 "mdb.debugger_interface.c"
                                                                mdb__debugger_interface__TypeCtorInfo_78_78 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 9257 "mdb.debugger_interface.c"
                                                                {
#line 9259 "mdb.debugger_interface.c"
                                                                  mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_78_78, mdb__debugger_interface__V_10_10, mdb__debugger_interface__V_22_22);
                                                                }
#line 88 "debugger_interface.m"
                                                                if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                                  {
#line 9266 "mdb.debugger_interface.c"
                                                                    mdb__debugger_interface__TypeCtorInfo_79_79 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 9268 "mdb.debugger_interface.c"
                                                                    {
#line 9270 "mdb.debugger_interface.c"
                                                                      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_79_79, mdb__debugger_interface__V_11_11, mdb__debugger_interface__V_23_23);
                                                                    }
#line 88 "debugger_interface.m"
                                                                    if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                                      {
#line 9277 "mdb.debugger_interface.c"
                                                                        mdb__debugger_interface__TypeCtorInfo_80_80 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 9279 "mdb.debugger_interface.c"
                                                                        {
#line 9281 "mdb.debugger_interface.c"
                                                                          mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_80_80, mdb__debugger_interface__V_12_12, mdb__debugger_interface__V_24_24);
                                                                        }
#line 88 "debugger_interface.m"
                                                                        if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                                          {
#line 9288 "mdb.debugger_interface.c"
                                                                            mdb__debugger_interface__TypeCtorInfo_81_81 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 9290 "mdb.debugger_interface.c"
                                                                            {
#line 9292 "mdb.debugger_interface.c"
                                                                              mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_81_81, mdb__debugger_interface__V_13_13, mdb__debugger_interface__V_25_25);
                                                                            }
#line 88 "debugger_interface.m"
                                                                            if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                                              {
#line 9299 "mdb.debugger_interface.c"
                                                                                mdb__debugger_interface__TypeCtorInfo_82_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 9301 "mdb.debugger_interface.c"
                                                                                {
#line 9303 "mdb.debugger_interface.c"
                                                                                  mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_82_82, mdb__debugger_interface__V_14_14, mdb__debugger_interface__V_26_26);
                                                                                }
#line 88 "debugger_interface.m"
                                                                                if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                                                  {
#line 9310 "mdb.debugger_interface.c"
                                                                                    mdb__debugger_interface__TypeInfo_83_83 = (MR_Word) &mdb__debugger_interface_scalar_common_1[0];
#line 9312 "mdb.debugger_interface.c"
                                                                                    {
#line 9314 "mdb.debugger_interface.c"
                                                                                      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeInfo_83_83, mdb__debugger_interface__V_15_15, mdb__debugger_interface__V_27_27);
                                                                                    }
#line 88 "debugger_interface.m"
                                                                                    if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                                                      {
#line 9321 "mdb.debugger_interface.c"
                                                                                        mdb__debugger_interface__TypeCtorInfo_84_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 9323 "mdb.debugger_interface.c"
                                                                                        {
#line 9325 "mdb.debugger_interface.c"
                                                                                          return mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_84_84, mdb__debugger_interface__V_16_16, mdb__debugger_interface__V_28_28);
                                                                                        }
#line 88 "debugger_interface.m"
                                                                                      }
#line 88 "debugger_interface.m"
                                                                                  }
#line 88 "debugger_interface.m"
                                                                              }
#line 88 "debugger_interface.m"
                                                                          }
#line 88 "debugger_interface.m"
                                                                      }
#line 88 "debugger_interface.m"
                                                                  }
#line 88 "debugger_interface.m"
                                                              }
#line 88 "debugger_interface.m"
                                                          }
#line 88 "debugger_interface.m"
                                                      }
#line 88 "debugger_interface.m"
                                                  }
#line 88 "debugger_interface.m"
                                              }
#line 88 "debugger_interface.m"
                                          }
#line 88 "debugger_interface.m"
                                      }
#line 88 "debugger_interface.m"
                                    else
#line 88 "debugger_interface.m"
                                      if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 88 "debugger_interface.m"
                                        {
#line 88 "debugger_interface.m"
                                          MR_String mdb__debugger_interface__V_59_59 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 88 "debugger_interface.m"
                                          MR_String mdb__debugger_interface__V_60_60;

#line 88 "debugger_interface.m"
                                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 88 "debugger_interface.m"
                                          if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                            {
#line 88 "debugger_interface.m"
                                              mdb__debugger_interface__V_60_60 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 9373 "mdb.debugger_interface.c"
                                              mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_59_59, mdb__debugger_interface__V_60_60) == 0);
#line 88 "debugger_interface.m"
                                            }
#line 88 "debugger_interface.m"
                                        }
#line 88 "debugger_interface.m"
                                      else
#line 88 "debugger_interface.m"
                                        if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 88 "debugger_interface.m"
                                          {
#line 88 "debugger_interface.m"
                                            MR_Word mdb__debugger_interface__TypeInfo_73_73;
#line 88 "debugger_interface.m"
                                            MR_Word mdb__debugger_interface__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 88 "debugger_interface.m"
                                            MR_Word mdb__debugger_interface__V_54_54;

#line 88 "debugger_interface.m"
                                            mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 88 "debugger_interface.m"
                                            if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                              {
#line 88 "debugger_interface.m"
                                                mdb__debugger_interface__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 9400 "mdb.debugger_interface.c"
                                                mdb__debugger_interface__TypeInfo_73_73 = (MR_Word) &mdb__debugger_interface_scalar_common_1[5];
#line 9402 "mdb.debugger_interface.c"
                                                {
#line 9404 "mdb.debugger_interface.c"
                                                  return mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_73_73, ((MR_Box) (mdb__debugger_interface__V_53_53)), ((MR_Box) (mdb__debugger_interface__V_54_54)));
                                                }
#line 88 "debugger_interface.m"
                                              }
#line 88 "debugger_interface.m"
                                          }
#line 88 "debugger_interface.m"
                                        else
#line 88 "debugger_interface.m"
                                          if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 88 "debugger_interface.m"
                                            {
#line 88 "debugger_interface.m"
                                              MR_String mdb__debugger_interface__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 88 "debugger_interface.m"
                                              MR_String mdb__debugger_interface__V_50_50;

#line 88 "debugger_interface.m"
                                              mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 88 "debugger_interface.m"
                                              if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                {
#line 88 "debugger_interface.m"
                                                  mdb__debugger_interface__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 9430 "mdb.debugger_interface.c"
                                                  mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_49_49, mdb__debugger_interface__V_50_50) == 0);
#line 88 "debugger_interface.m"
                                                }
#line 88 "debugger_interface.m"
                                            }
#line 88 "debugger_interface.m"
                                          else
#line 88 "debugger_interface.m"
                                            if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 88 "debugger_interface.m"
                                              {
#line 88 "debugger_interface.m"
                                                MR_Word mdb__debugger_interface__TypeInfo_85_85;
#line 88 "debugger_interface.m"
                                                MR_Word mdb__debugger_interface__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 88 "debugger_interface.m"
                                                MR_Word mdb__debugger_interface__V_56_56;

#line 88 "debugger_interface.m"
                                                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 88 "debugger_interface.m"
                                                if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                  {
#line 88 "debugger_interface.m"
                                                    mdb__debugger_interface__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 9457 "mdb.debugger_interface.c"
                                                    mdb__debugger_interface__TypeInfo_85_85 = (MR_Word) &mdb__debugger_interface_scalar_common_1[5];
#line 9459 "mdb.debugger_interface.c"
                                                    {
#line 9461 "mdb.debugger_interface.c"
                                                      return mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_85_85, ((MR_Box) (mdb__debugger_interface__V_55_55)), ((MR_Box) (mdb__debugger_interface__V_56_56)));
                                                    }
#line 88 "debugger_interface.m"
                                                  }
#line 88 "debugger_interface.m"
                                              }
#line 88 "debugger_interface.m"
                                            else
#line 88 "debugger_interface.m"
                                              if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 88 "debugger_interface.m"
                                                {
#line 88 "debugger_interface.m"
                                                  MR_String mdb__debugger_interface__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 88 "debugger_interface.m"
                                                  MR_String mdb__debugger_interface__V_62_62;

#line 88 "debugger_interface.m"
                                                  mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 88 "debugger_interface.m"
                                                  if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                    {
#line 88 "debugger_interface.m"
                                                      mdb__debugger_interface__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 9487 "mdb.debugger_interface.c"
                                                      mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_61_61, mdb__debugger_interface__V_62_62) == 0);
#line 88 "debugger_interface.m"
                                                    }
#line 88 "debugger_interface.m"
                                                }
#line 88 "debugger_interface.m"
                                              else
#line 88 "debugger_interface.m"
                                                if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 88 "debugger_interface.m"
                                                  {
#line 88 "debugger_interface.m"
                                                    MR_String mdb__debugger_interface__V_57_57 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 88 "debugger_interface.m"
                                                    MR_String mdb__debugger_interface__V_58_58;

#line 88 "debugger_interface.m"
                                                    mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 88 "debugger_interface.m"
                                                    if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                      {
#line 88 "debugger_interface.m"
                                                        mdb__debugger_interface__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 9512 "mdb.debugger_interface.c"
                                                        mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_57_57, mdb__debugger_interface__V_58_58) == 0);
#line 88 "debugger_interface.m"
                                                      }
#line 88 "debugger_interface.m"
                                                  }
#line 88 "debugger_interface.m"
                                                else
#line 88 "debugger_interface.m"
                                                  {
#line 88 "debugger_interface.m"
                                                    MR_Word mdb__debugger_interface__TypeInfo_86_86;
#line 88 "debugger_interface.m"
                                                    MR_Word mdb__debugger_interface__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 88 "debugger_interface.m"
                                                    MR_Word mdb__debugger_interface__V_52_52;

#line 88 "debugger_interface.m"
                                                    mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 88 "debugger_interface.m"
                                                    if (mdb__debugger_interface__succeeded)
#line 88 "debugger_interface.m"
                                                      {
#line 88 "debugger_interface.m"
                                                        mdb__debugger_interface__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 9537 "mdb.debugger_interface.c"
                                                        mdb__debugger_interface__TypeInfo_86_86 = (MR_Word) &mdb__debugger_interface_scalar_common_1[5];
#line 9539 "mdb.debugger_interface.c"
                                                        {
#line 9541 "mdb.debugger_interface.c"
                                                          return mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_86_86, ((MR_Box) (mdb__debugger_interface__V_51_51)), ((MR_Box) (mdb__debugger_interface__V_52_52)));
                                                        }
#line 88 "debugger_interface.m"
                                                      }
#line 88 "debugger_interface.m"
                                                  }
#line 88 "debugger_interface.m"
    return mdb__debugger_interface__succeeded;
#line 88 "debugger_interface.m"
  }
#line 88 "debugger_interface.m"
}

#line 189 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Compare____call_number_0_0(
#line 189 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
#line 189 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__2_2,
#line 189 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__3_3)
#line 189 "debugger_interface.m"
{
#line 189 "debugger_interface.m"
  {
#line 189 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 189 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__Cast_HeadVar1_4 = mdb__debugger_interface__HeadVar__2_2;
#line 189 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__Cast_HeadVar2_5 = mdb__debugger_interface__HeadVar__3_3;

#line 189 "debugger_interface.m"
    {
#line 189 "debugger_interface.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__debugger_interface__HeadVar__1_1, mdb__debugger_interface__Cast_HeadVar1_4, mdb__debugger_interface__Cast_HeadVar2_5);
#line 189 "debugger_interface.m"
      return;
    }
#line 189 "debugger_interface.m"
  }
#line 189 "debugger_interface.m"
}

#line 189 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____call_number_0_0(
#line 189 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__1_1,
#line 189 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__2_2)
#line 189 "debugger_interface.m"
{
#line 189 "debugger_interface.m"
  {
#line 189 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 189 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__Cast_HeadVar1_3 = mdb__debugger_interface__HeadVar__1_1;
#line 189 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__Cast_HeadVar2_4 = mdb__debugger_interface__HeadVar__2_2;

#line 189 "debugger_interface.m"
    mdb__debugger_interface__succeeded = (mdb__debugger_interface__Cast_HeadVar1_3 == mdb__debugger_interface__Cast_HeadVar2_4);
#line 189 "debugger_interface.m"
    return mdb__debugger_interface__succeeded;
#line 189 "debugger_interface.m"
  }
#line 189 "debugger_interface.m"
}

#line 57 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Compare____arity_0_0(
#line 57 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
#line 57 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__2_2,
#line 57 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__3_3)
#line 57 "debugger_interface.m"
{
#line 57 "debugger_interface.m"
  {
#line 57 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 57 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__Cast_HeadVar1_4 = mdb__debugger_interface__HeadVar__2_2;
#line 57 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__Cast_HeadVar2_5 = mdb__debugger_interface__HeadVar__3_3;

#line 57 "debugger_interface.m"
    {
#line 57 "debugger_interface.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__debugger_interface__HeadVar__1_1, mdb__debugger_interface__Cast_HeadVar1_4, mdb__debugger_interface__Cast_HeadVar2_5);
#line 57 "debugger_interface.m"
      return;
    }
#line 57 "debugger_interface.m"
  }
#line 57 "debugger_interface.m"
}

#line 57 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____arity_0_0(
#line 57 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__1_1,
#line 57 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__2_2)
#line 57 "debugger_interface.m"
{
#line 57 "debugger_interface.m"
  {
#line 57 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 57 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__Cast_HeadVar1_3 = mdb__debugger_interface__HeadVar__1_1;
#line 57 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__Cast_HeadVar2_4 = mdb__debugger_interface__HeadVar__2_2;

#line 57 "debugger_interface.m"
    mdb__debugger_interface__succeeded = (mdb__debugger_interface__Cast_HeadVar1_3 == mdb__debugger_interface__Cast_HeadVar2_4);
#line 57 "debugger_interface.m"
    return mdb__debugger_interface__succeeded;
#line 57 "debugger_interface.m"
  }
#line 57 "debugger_interface.m"
}

#line 643 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__get_variable_name_2_p_0(
#line 643 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_3,
#line 643 "debugger_interface.m"
  MR_String * mdb__debugger_interface__Options_4)
#line 643 "debugger_interface.m"
{
#line 650 "debugger_interface.m"
  {
#line 650 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__DebuggerRequest_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 650 "debugger_interface.m"
    MR_String mdb__debugger_interface__OptionsPrime_5;

#line 648 "debugger_interface.m"
    if (mdb__debugger_interface__succeeded)
#line 648 "debugger_interface.m"
      {
#line 648 "debugger_interface.m"
        mdb__debugger_interface__OptionsPrime_5 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_3, (MR_Integer) 1)));
#line 649 "debugger_interface.m"
        *mdb__debugger_interface__Options_4 = mdb__debugger_interface__OptionsPrime_5;
#line 648 "debugger_interface.m"
      }
#line 648 "debugger_interface.m"
    else
#line 651 "debugger_interface.m"
      {
#line 651 "debugger_interface.m"
        {
#line 651 "debugger_interface.m"
          mercury__require__error_1_p_0((MR_String) "get_variable_name: not a browse request");
#line 651 "debugger_interface.m"
          return;
        }
#line 651 "debugger_interface.m"
      }
#line 650 "debugger_interface.m"
  }
#line 643 "debugger_interface.m"
}

#line 632 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__init_mercury_string_1_p_0(
#line 632 "debugger_interface.m"
  MR_String * mdb__debugger_interface__HeadVar__1_1)
#line 632 "debugger_interface.m"
{
#line 636 "debugger_interface.m"
  {
#line 636 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;

#line 636 "debugger_interface.m"
    *mdb__debugger_interface__HeadVar__1_1 = (MR_String) "";
#line 636 "debugger_interface.m"
  }
#line 632 "debugger_interface.m"
}

#line 619 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__get_object_file_name_2_p_0(
#line 619 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_3,
#line 619 "debugger_interface.m"
  MR_String * mdb__debugger_interface__ObjectFileName_4)
#line 619 "debugger_interface.m"
{
#line 626 "debugger_interface.m"
  {
#line 626 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__DebuggerRequest_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 626 "debugger_interface.m"
    MR_String mdb__debugger_interface__ObjectFileNamePrime_5;

#line 624 "debugger_interface.m"
    if (mdb__debugger_interface__succeeded)
#line 624 "debugger_interface.m"
      {
#line 624 "debugger_interface.m"
        mdb__debugger_interface__ObjectFileNamePrime_5 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_3, (MR_Integer) 1)));
#line 625 "debugger_interface.m"
        *mdb__debugger_interface__ObjectFileName_4 = mdb__debugger_interface__ObjectFileNamePrime_5;
#line 624 "debugger_interface.m"
      }
#line 624 "debugger_interface.m"
    else
#line 627 "debugger_interface.m"
      {
#line 627 "debugger_interface.m"
        {
#line 627 "debugger_interface.m"
          mercury__require__error_1_p_0((MR_String) "get_object_file_name: not a link_collect request");
#line 627 "debugger_interface.m"
          return;
        }
#line 627 "debugger_interface.m"
      }
#line 626 "debugger_interface.m"
  }
#line 619 "debugger_interface.m"
}

#line 602 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__get_mmc_options_2_p_0(
#line 602 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_3,
#line 602 "debugger_interface.m"
  MR_String * mdb__debugger_interface__Options_4)
#line 602 "debugger_interface.m"
{
#line 609 "debugger_interface.m"
  {
#line 609 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__DebuggerRequest_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 609 "debugger_interface.m"
    MR_String mdb__debugger_interface__OptionsPrim_5;

#line 607 "debugger_interface.m"
    if (mdb__debugger_interface__succeeded)
#line 607 "debugger_interface.m"
      {
#line 607 "debugger_interface.m"
        mdb__debugger_interface__OptionsPrim_5 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_3, (MR_Integer) 1)));
#line 608 "debugger_interface.m"
        *mdb__debugger_interface__Options_4 = mdb__debugger_interface__OptionsPrim_5;
#line 607 "debugger_interface.m"
      }
#line 607 "debugger_interface.m"
    else
#line 610 "debugger_interface.m"
      {
#line 610 "debugger_interface.m"
        {
#line 610 "debugger_interface.m"
          mercury__require__error_1_p_0((MR_String) "get_mmc_options: not a mmc_options request");
#line 610 "debugger_interface.m"
          return;
        }
#line 610 "debugger_interface.m"
      }
#line 609 "debugger_interface.m"
  }
#line 602 "debugger_interface.m"
}

#line 582 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__get_list_modules_to_import_3_p_0(
#line 582 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_4,
#line 582 "debugger_interface.m"
  MR_Integer * mdb__debugger_interface__ListLength_5,
#line 582 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__ModulesList_6)
#line 582 "debugger_interface.m"
{
#line 588 "debugger_interface.m"
  {
#line 588 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__DebuggerRequest_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 591 "debugger_interface.m"
    MR_Word mdb__debugger_interface__List_7;

#line 589 "debugger_interface.m"
    if (mdb__debugger_interface__succeeded)
#line 589 "debugger_interface.m"
      {
#line 589 "debugger_interface.m"
        mdb__debugger_interface__List_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_4, (MR_Integer) 1)));
#line 590 "debugger_interface.m"
        *mdb__debugger_interface__ModulesList_6 = mdb__debugger_interface__List_7;
#line 589 "debugger_interface.m"
      }
#line 589 "debugger_interface.m"
    else
#line 593 "debugger_interface.m"
      {
#line 593 "debugger_interface.m"
        MR_Word mdb__debugger_interface__List_10;

#line 591 "debugger_interface.m"
        mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__DebuggerRequest_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_4, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 591 "debugger_interface.m"
        if (mdb__debugger_interface__succeeded)
#line 591 "debugger_interface.m"
          {
#line 591 "debugger_interface.m"
            mdb__debugger_interface__List_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_4, (MR_Integer) 1)));
#line 592 "debugger_interface.m"
            *mdb__debugger_interface__ModulesList_6 = mdb__debugger_interface__List_10;
#line 591 "debugger_interface.m"
          }
#line 591 "debugger_interface.m"
        else
#line 595 "debugger_interface.m"
          {
#line 595 "debugger_interface.m"
            MR_Word mdb__debugger_interface__List_9;

#line 593 "debugger_interface.m"
            mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__DebuggerRequest_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_4, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 593 "debugger_interface.m"
            if (mdb__debugger_interface__succeeded)
#line 593 "debugger_interface.m"
              {
#line 593 "debugger_interface.m"
                mdb__debugger_interface__List_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_4, (MR_Integer) 1)));
#line 594 "debugger_interface.m"
                *mdb__debugger_interface__ModulesList_6 = mdb__debugger_interface__List_9;
#line 593 "debugger_interface.m"
              }
#line 593 "debugger_interface.m"
            else
#line 596 "debugger_interface.m"
              {
#line 596 "debugger_interface.m"
                {
#line 596 "debugger_interface.m"
                  mercury__require__error_1_p_0((MR_String) "get_list_modules_to_import: not a query request");
#line 596 "debugger_interface.m"
                  return;
                }
#line 596 "debugger_interface.m"
              }
#line 595 "debugger_interface.m"
          }
#line 593 "debugger_interface.m"
      }
#line 598 "debugger_interface.m"
    {
#line 598 "debugger_interface.m"
      mercury__list__length_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, *mdb__debugger_interface__ModulesList_6, mdb__debugger_interface__ListLength_5);
#line 598 "debugger_interface.m"
      return;
    }
#line 588 "debugger_interface.m"
  }
#line 582 "debugger_interface.m"
}

#line 551 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__read_request_from_socket_5_p_0(
#line 551 "debugger_interface.m"
  MR_Word mdb__debugger_interface__SocketStream_6,
#line 551 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__Request_7,
#line 551 "debugger_interface.m"
  MR_Integer * mdb__debugger_interface__RequestType_8)
#line 551 "debugger_interface.m"
{
#line 558 "debugger_interface.m"
  {
#line 558 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 558 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MaybeRequest_10;

#line 559 "debugger_interface.m"
    {
#line 559 "debugger_interface.m"
      mercury__io__read_4_p_0((MR_Word) &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_request_0, mdb__debugger_interface__SocketStream_6, &mdb__debugger_interface__MaybeRequest_10);
    }
#line 9942 "mdb.debugger_interface.c"
    if ((mdb__debugger_interface__MaybeRequest_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 9944 "mdb.debugger_interface.c"
      {
#line 568 "debugger_interface.m"
        *mdb__debugger_interface__Request_7 = (MR_Word) MR_mkword(MR_mktag(3), &mdb__debugger_interface_scalar_common_1[7]);
#line 666 "debugger_interface.m"
        *mdb__debugger_interface__RequestType_8 = (MR_Integer) 6;
#line 9950 "mdb.debugger_interface.c"
      }
#line 9952 "mdb.debugger_interface.c"
    else
#line 9954 "mdb.debugger_interface.c"
      if (((MR_tag((MR_Word) mdb__debugger_interface__MaybeRequest_10)) == (MR_mktag((MR_Integer) 2))))
#line 9956 "mdb.debugger_interface.c"
        {
#line 9958 "mdb.debugger_interface.c"
          MR_String mdb__debugger_interface__ErrorMsg_12 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__MaybeRequest_10, (MR_Integer) 0)));
#line 564 "debugger_interface.m"
          MR_Integer mdb__debugger_interface___LineNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__MaybeRequest_10, (MR_Integer) 1)));

#line 565 "debugger_interface.m"
          {
#line 565 "debugger_interface.m"
            MR_Word base;
#line 565 "debugger_interface.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 565 "debugger_interface.m"
            *mdb__debugger_interface__Request_7 = base;
#line 565 "debugger_interface.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 565 "debugger_interface.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__debugger_interface__ErrorMsg_12));
#line 565 "debugger_interface.m"
          }
#line 666 "debugger_interface.m"
          *mdb__debugger_interface__RequestType_8 = (MR_Integer) 6;
#line 9979 "mdb.debugger_interface.c"
        }
#line 9981 "mdb.debugger_interface.c"
      else
#line 9983 "mdb.debugger_interface.c"
        {
#line 561 "debugger_interface.m"
          *mdb__debugger_interface__Request_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__MaybeRequest_10, (MR_Integer) 0)));
#line 660 "debugger_interface.m"
          if ((*mdb__debugger_interface__Request_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 665 "debugger_interface.m"
            *mdb__debugger_interface__RequestType_8 = (MR_Integer) 5;
#line 660 "debugger_interface.m"
          else
#line 660 "debugger_interface.m"
            if ((*mdb__debugger_interface__Request_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 679 "debugger_interface.m"
              *mdb__debugger_interface__RequestType_8 = (MR_Integer) 19;
#line 660 "debugger_interface.m"
            else
#line 660 "debugger_interface.m"
              if ((*mdb__debugger_interface__Request_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 682 "debugger_interface.m"
                *mdb__debugger_interface__RequestType_8 = (MR_Integer) 22;
#line 660 "debugger_interface.m"
              else
#line 660 "debugger_interface.m"
                if ((*mdb__debugger_interface__Request_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 681 "debugger_interface.m"
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 21;
#line 660 "debugger_interface.m"
                else
#line 660 "debugger_interface.m"
                  if ((*mdb__debugger_interface__Request_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 680 "debugger_interface.m"
                    *mdb__debugger_interface__RequestType_8 = (MR_Integer) 20;
#line 660 "debugger_interface.m"
                  else
#line 660 "debugger_interface.m"
                    if ((*mdb__debugger_interface__Request_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 667 "debugger_interface.m"
                      *mdb__debugger_interface__RequestType_8 = (MR_Integer) 7;
#line 660 "debugger_interface.m"
                    else
#line 660 "debugger_interface.m"
                      if ((*mdb__debugger_interface__Request_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 663 "debugger_interface.m"
                        *mdb__debugger_interface__RequestType_8 = (MR_Integer) 3;
#line 660 "debugger_interface.m"
                      else
#line 660 "debugger_interface.m"
                        if ((*mdb__debugger_interface__Request_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 662 "debugger_interface.m"
                          *mdb__debugger_interface__RequestType_8 = (MR_Integer) 2;
#line 660 "debugger_interface.m"
                        else
#line 660 "debugger_interface.m"
                          if ((*mdb__debugger_interface__Request_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 660 "debugger_interface.m"
                            *mdb__debugger_interface__RequestType_8 = (MR_Integer) 0;
#line 660 "debugger_interface.m"
                          else
#line 660 "debugger_interface.m"
                            if ((*mdb__debugger_interface__Request_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 664 "debugger_interface.m"
                              *mdb__debugger_interface__RequestType_8 = (MR_Integer) 4;
#line 660 "debugger_interface.m"
                            else
#line 660 "debugger_interface.m"
                              if ((*mdb__debugger_interface__Request_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 671 "debugger_interface.m"
                                *mdb__debugger_interface__RequestType_8 = (MR_Integer) 11;
#line 660 "debugger_interface.m"
                              else
#line 660 "debugger_interface.m"
                                if ((*mdb__debugger_interface__Request_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 669 "debugger_interface.m"
                                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 9;
#line 660 "debugger_interface.m"
                                else
#line 660 "debugger_interface.m"
                                  if ((*mdb__debugger_interface__Request_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 670 "debugger_interface.m"
                                    *mdb__debugger_interface__RequestType_8 = (MR_Integer) 10;
#line 660 "debugger_interface.m"
                                  else
#line 660 "debugger_interface.m"
                                    if ((*mdb__debugger_interface__Request_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 672 "debugger_interface.m"
                                      *mdb__debugger_interface__RequestType_8 = (MR_Integer) 12;
#line 660 "debugger_interface.m"
                                    else
#line 660 "debugger_interface.m"
                                      if (((MR_tag((MR_Word) *mdb__debugger_interface__Request_7)) == (MR_mktag((MR_Integer) 2))))
#line 668 "debugger_interface.m"
                                        *mdb__debugger_interface__RequestType_8 = (MR_Integer) 8;
#line 660 "debugger_interface.m"
                                      else
#line 660 "debugger_interface.m"
                                        if (((MR_tag((MR_Word) *mdb__debugger_interface__Request_7)) == (MR_mktag((MR_Integer) 1))))
#line 661 "debugger_interface.m"
                                          *mdb__debugger_interface__RequestType_8 = (MR_Integer) 1;
#line 660 "debugger_interface.m"
                                        else
#line 660 "debugger_interface.m"
                                          if (((((MR_tag((MR_Word) *mdb__debugger_interface__Request_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), *mdb__debugger_interface__Request_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 677 "debugger_interface.m"
                                            *mdb__debugger_interface__RequestType_8 = (MR_Integer) 17;
#line 660 "debugger_interface.m"
                                          else
#line 660 "debugger_interface.m"
                                            if (((((MR_tag((MR_Word) *mdb__debugger_interface__Request_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), *mdb__debugger_interface__Request_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 674 "debugger_interface.m"
                                              *mdb__debugger_interface__RequestType_8 = (MR_Integer) 14;
#line 660 "debugger_interface.m"
                                            else
#line 660 "debugger_interface.m"
                                              if (((((MR_tag((MR_Word) *mdb__debugger_interface__Request_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), *mdb__debugger_interface__Request_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 666 "debugger_interface.m"
                                                *mdb__debugger_interface__RequestType_8 = (MR_Integer) 6;
#line 660 "debugger_interface.m"
                                              else
#line 660 "debugger_interface.m"
                                                if (((((MR_tag((MR_Word) *mdb__debugger_interface__Request_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), *mdb__debugger_interface__Request_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 675 "debugger_interface.m"
                                                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 15;
#line 660 "debugger_interface.m"
                                                else
#line 660 "debugger_interface.m"
                                                  if (((((MR_tag((MR_Word) *mdb__debugger_interface__Request_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), *mdb__debugger_interface__Request_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 678 "debugger_interface.m"
                                                    *mdb__debugger_interface__RequestType_8 = (MR_Integer) 18;
#line 660 "debugger_interface.m"
                                                  else
#line 660 "debugger_interface.m"
                                                    if (((((MR_tag((MR_Word) *mdb__debugger_interface__Request_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), *mdb__debugger_interface__Request_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 676 "debugger_interface.m"
                                                      *mdb__debugger_interface__RequestType_8 = (MR_Integer) 16;
#line 660 "debugger_interface.m"
                                                    else
#line 673 "debugger_interface.m"
                                                      *mdb__debugger_interface__RequestType_8 = (MR_Integer) 13;
#line 10121 "mdb.debugger_interface.c"
        }
#line 558 "debugger_interface.m"
  }
#line 551 "debugger_interface.m"
}

#line 506 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface__found_match_comp_14_p_0(
#line 506 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__EventNumber_15,
#line 506 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__CallNumber_16,
#line 506 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__DepthNumber_17,
#line 506 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Port_18,
#line 506 "debugger_interface.m"
  MR_String mdb__debugger_interface__NameType_19,
#line 506 "debugger_interface.m"
  MR_String mdb__debugger_interface__ModuleType_20,
#line 506 "debugger_interface.m"
  MR_String mdb__debugger_interface__DefModuleName_21,
#line 506 "debugger_interface.m"
  MR_String mdb__debugger_interface__PredName_22,
#line 506 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Arity_23,
#line 506 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__ModeNum_24,
#line 506 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Determinism_25,
#line 506 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Args_26,
#line 506 "debugger_interface.m"
  MR_String mdb__debugger_interface__Path_27,
#line 506 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_28)
#line 506 "debugger_interface.m"
{
#line 545 "debugger_interface.m"
  {
#line 545 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__DebuggerRequest_28)) == (MR_mktag((MR_Integer) 1)));
#line 545 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchEventNumber_29;
#line 545 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchCallNumber_30;
#line 545 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchDepthNumber_31;
#line 545 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchPort_32;
#line 545 "debugger_interface.m"
    MR_Word mdb__debugger_interface__CompilerGeneratedPredMatch_33;
#line 545 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchDefModuleName_34;
#line 545 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchPredName_35;
#line 545 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchArity_36;
#line 545 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchModeNum_37;
#line 545 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchDeterminism_38;
#line 545 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchArgs_39;
#line 545 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchPath_40;

#line 518 "debugger_interface.m"
    if (mdb__debugger_interface__succeeded)
#line 518 "debugger_interface.m"
      {
#line 518 "debugger_interface.m"
        mdb__debugger_interface__MatchEventNumber_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 0)));
#line 518 "debugger_interface.m"
        mdb__debugger_interface__MatchCallNumber_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 1)));
#line 518 "debugger_interface.m"
        mdb__debugger_interface__MatchDepthNumber_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 2)));
#line 518 "debugger_interface.m"
        mdb__debugger_interface__MatchPort_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 3)));
#line 518 "debugger_interface.m"
        mdb__debugger_interface__CompilerGeneratedPredMatch_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 4)));
#line 518 "debugger_interface.m"
        mdb__debugger_interface__MatchDefModuleName_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 5)));
#line 518 "debugger_interface.m"
        mdb__debugger_interface__MatchPredName_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 6)));
#line 518 "debugger_interface.m"
        mdb__debugger_interface__MatchArity_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 7)));
#line 518 "debugger_interface.m"
        mdb__debugger_interface__MatchModeNum_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 8)));
#line 518 "debugger_interface.m"
        mdb__debugger_interface__MatchDeterminism_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 9)));
#line 518 "debugger_interface.m"
        mdb__debugger_interface__MatchArgs_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 10)));
#line 518 "debugger_interface.m"
        mdb__debugger_interface__MatchPath_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 11)));
#line 524 "debugger_interface.m"
        {
#line 524 "debugger_interface.m"
          MR_Word mdb__debugger_interface__TypeCtorInfo_44_44 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 524 "debugger_interface.m"
          MR_Word mdb__debugger_interface__TypeCtorInfo_45_45;
#line 524 "debugger_interface.m"
          MR_Word mdb__debugger_interface__TypeCtorInfo_47_47;
#line 524 "debugger_interface.m"
          MR_Word mdb__debugger_interface__TypeInfo_48_48;
#line 535 "debugger_interface.m"
          MR_Word mdb__debugger_interface__MatchNameType_41;
#line 535 "debugger_interface.m"
          MR_Word mdb__debugger_interface__MatchModuleType_42;

#line 524 "debugger_interface.m"
          {
#line 524 "debugger_interface.m"
            mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_44_44, mdb__debugger_interface__MatchEventNumber_29, ((MR_Box) (mdb__debugger_interface__EventNumber_15)));
          }
#line 524 "debugger_interface.m"
          if (mdb__debugger_interface__succeeded)
#line 524 "debugger_interface.m"
            {
#line 525 "debugger_interface.m"
              {
#line 525 "debugger_interface.m"
                mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_44_44, mdb__debugger_interface__MatchCallNumber_30, ((MR_Box) (mdb__debugger_interface__CallNumber_16)));
              }
#line 524 "debugger_interface.m"
              if (mdb__debugger_interface__succeeded)
#line 524 "debugger_interface.m"
                {
#line 526 "debugger_interface.m"
                  {
#line 526 "debugger_interface.m"
                    mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_44_44, mdb__debugger_interface__MatchDepthNumber_31, ((MR_Box) (mdb__debugger_interface__DepthNumber_17)));
                  }
#line 524 "debugger_interface.m"
                  if (mdb__debugger_interface__succeeded)
#line 524 "debugger_interface.m"
                    {
#line 10260 "mdb.debugger_interface.c"
                      mdb__debugger_interface__TypeCtorInfo_45_45 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0;
#line 527 "debugger_interface.m"
                      {
#line 527 "debugger_interface.m"
                        mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_45_45, mdb__debugger_interface__MatchPort_32, ((MR_Box) (mdb__debugger_interface__Port_18)));
                      }
#line 524 "debugger_interface.m"
                      if (mdb__debugger_interface__succeeded)
#line 524 "debugger_interface.m"
                        {
#line 529 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__CompilerGeneratedPredMatch_33)) == (MR_mktag((MR_Integer) 2)));
#line 529 "debugger_interface.m"
                          if (mdb__debugger_interface__succeeded)
#line 529 "debugger_interface.m"
                            {
#line 529 "debugger_interface.m"
                              mdb__debugger_interface__MatchNameType_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__CompilerGeneratedPredMatch_33, (MR_Integer) 0)));
#line 529 "debugger_interface.m"
                              mdb__debugger_interface__MatchModuleType_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__CompilerGeneratedPredMatch_33, (MR_Integer) 1)));
#line 533 "debugger_interface.m"
                              {
#line 533 "debugger_interface.m"
                                MR_Word mdb__debugger_interface__TypeCtorInfo_46_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

#line 533 "debugger_interface.m"
                                {
#line 533 "debugger_interface.m"
                                  mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_46_46, mdb__debugger_interface__MatchNameType_41, ((MR_Box) (mdb__debugger_interface__NameType_19)));
                                }
#line 533 "debugger_interface.m"
                                if (mdb__debugger_interface__succeeded)
#line 534 "debugger_interface.m"
                                  {
#line 534 "debugger_interface.m"
                                    mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_46_46, mdb__debugger_interface__MatchModuleType_42, ((MR_Box) (mdb__debugger_interface__ModuleType_20)));
                                  }
#line 533 "debugger_interface.m"
                              }
#line 529 "debugger_interface.m"
                            }
#line 529 "debugger_interface.m"
                          else
#line 536 "debugger_interface.m"
                            mdb__debugger_interface__succeeded = (mdb__debugger_interface__CompilerGeneratedPredMatch_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 524 "debugger_interface.m"
                          if (mdb__debugger_interface__succeeded)
#line 524 "debugger_interface.m"
                            {
#line 10310 "mdb.debugger_interface.c"
                              mdb__debugger_interface__TypeCtorInfo_47_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 538 "debugger_interface.m"
                              {
#line 538 "debugger_interface.m"
                                mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_47_47, mdb__debugger_interface__MatchDefModuleName_34, ((MR_Box) (mdb__debugger_interface__DefModuleName_21)));
                              }
#line 524 "debugger_interface.m"
                              if (mdb__debugger_interface__succeeded)
#line 524 "debugger_interface.m"
                                {
#line 539 "debugger_interface.m"
                                  {
#line 539 "debugger_interface.m"
                                    mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_47_47, mdb__debugger_interface__MatchPredName_35, ((MR_Box) (mdb__debugger_interface__PredName_22)));
                                  }
#line 524 "debugger_interface.m"
                                  if (mdb__debugger_interface__succeeded)
#line 524 "debugger_interface.m"
                                    {
#line 540 "debugger_interface.m"
                                      {
#line 540 "debugger_interface.m"
                                        mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_44_44, mdb__debugger_interface__MatchArity_36, ((MR_Box) (mdb__debugger_interface__Arity_23)));
                                      }
#line 524 "debugger_interface.m"
                                      if (mdb__debugger_interface__succeeded)
#line 524 "debugger_interface.m"
                                        {
#line 541 "debugger_interface.m"
                                          {
#line 541 "debugger_interface.m"
                                            mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_44_44, mdb__debugger_interface__MatchModeNum_37, ((MR_Box) (mdb__debugger_interface__ModeNum_24)));
                                          }
#line 524 "debugger_interface.m"
                                          if (mdb__debugger_interface__succeeded)
#line 524 "debugger_interface.m"
                                            {
#line 542 "debugger_interface.m"
                                              {
#line 542 "debugger_interface.m"
                                                mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_44_44, mdb__debugger_interface__MatchDeterminism_38, ((MR_Box) (mdb__debugger_interface__Determinism_25)));
                                              }
#line 524 "debugger_interface.m"
                                              if (mdb__debugger_interface__succeeded)
#line 524 "debugger_interface.m"
                                                {
#line 10357 "mdb.debugger_interface.c"
                                                  mdb__debugger_interface__TypeInfo_48_48 = (MR_Word) &mdb__debugger_interface_scalar_common_1[0];
#line 543 "debugger_interface.m"
                                                  {
#line 543 "debugger_interface.m"
                                                    mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeInfo_48_48, mdb__debugger_interface__MatchArgs_39, ((MR_Box) (mdb__debugger_interface__Args_26)));
                                                  }
#line 524 "debugger_interface.m"
                                                  if (mdb__debugger_interface__succeeded)
#line 544 "debugger_interface.m"
                                                    {
#line 544 "debugger_interface.m"
                                                      return mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_47_47, mdb__debugger_interface__MatchPath_40, ((MR_Box) (mdb__debugger_interface__Path_27)));
                                                    }
#line 524 "debugger_interface.m"
                                                }
#line 524 "debugger_interface.m"
                                            }
#line 524 "debugger_interface.m"
                                        }
#line 524 "debugger_interface.m"
                                    }
#line 524 "debugger_interface.m"
                                }
#line 524 "debugger_interface.m"
                            }
#line 524 "debugger_interface.m"
                        }
#line 524 "debugger_interface.m"
                    }
#line 524 "debugger_interface.m"
                }
#line 524 "debugger_interface.m"
            }
#line 524 "debugger_interface.m"
        }
#line 518 "debugger_interface.m"
      }
#line 518 "debugger_interface.m"
    else
#line 546 "debugger_interface.m"
      {
#line 546 "debugger_interface.m"
        {
#line 546 "debugger_interface.m"
          mercury__require__error_1_p_0((MR_String) "found_match: forward_move expected");
        }
#line 546 "debugger_interface.m"
        mdb__debugger_interface__succeeded = MR_TRUE;
#line 546 "debugger_interface.m"
      }
#line 545 "debugger_interface.m"
    return mdb__debugger_interface__succeeded;
#line 545 "debugger_interface.m"
  }
#line 506 "debugger_interface.m"
}

#line 489 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface__match_2_p_0(
#line 489 "debugger_interface.m"
  MR_Word mdb__debugger_interface__TypeInfo_for_T_14,
#line 489 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__1_1,
#line 489 "debugger_interface.m"
  MR_Box mdb__debugger_interface__HeadVar__2_2)
#line 489 "debugger_interface.m"
{
#line 491 "debugger_interface.m"
  {
#line 491 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;

#line 491 "debugger_interface.m"
    if ((mdb__debugger_interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 491 "debugger_interface.m"
      mdb__debugger_interface__succeeded = MR_TRUE;
#line 491 "debugger_interface.m"
    else
#line 491 "debugger_interface.m"
      if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 492 "debugger_interface.m"
        {
#line 492 "debugger_interface.m"
          MR_Box mdb__debugger_interface__X_4 = (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0));

#line 492 "debugger_interface.m"
          {
#line 492 "debugger_interface.m"
            return mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_for_T_14, mdb__debugger_interface__HeadVar__2_2, mdb__debugger_interface__X_4);
          }
#line 492 "debugger_interface.m"
        }
#line 491 "debugger_interface.m"
      else
#line 491 "debugger_interface.m"
        if (((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 493 "debugger_interface.m"
          {
#line 493 "debugger_interface.m"
            MR_Box mdb__debugger_interface__X_5 = (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0));

#line 493 "debugger_interface.m"
            {
#line 493 "debugger_interface.m"
              mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_for_T_14, mdb__debugger_interface__X_5, mdb__debugger_interface__HeadVar__2_2);
            }
#line 493 "debugger_interface.m"
            mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 493 "debugger_interface.m"
          }
#line 491 "debugger_interface.m"
        else
#line 491 "debugger_interface.m"
          if (((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 495 "debugger_interface.m"
            {
#line 495 "debugger_interface.m"
              MR_Box mdb__debugger_interface__Low_9 = (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1));
#line 495 "debugger_interface.m"
              MR_Box mdb__debugger_interface__High_10 = (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2));
#line 495 "debugger_interface.m"
              MR_Word mdb__debugger_interface__LE_12;
#line 495 "debugger_interface.m"
              MR_Word mdb__debugger_interface__GE_13;

#line 497 "debugger_interface.m"
              {
#line 497 "debugger_interface.m"
                mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_for_T_14, &mdb__debugger_interface__LE_12, mdb__debugger_interface__HeadVar__2_2, mdb__debugger_interface__High_10);
              }
#line 498 "debugger_interface.m"
              if ((mdb__debugger_interface__LE_12 == (MR_Integer) 1))
#line 498 "debugger_interface.m"
                mdb__debugger_interface__succeeded = MR_TRUE;
#line 498 "debugger_interface.m"
              else
#line 498 "debugger_interface.m"
                if ((mdb__debugger_interface__LE_12 == (MR_Integer) 0))
#line 498 "debugger_interface.m"
                  mdb__debugger_interface__succeeded = MR_TRUE;
#line 498 "debugger_interface.m"
                else
#line 498 "debugger_interface.m"
                  mdb__debugger_interface__succeeded = MR_FALSE;
#line 495 "debugger_interface.m"
              if (mdb__debugger_interface__succeeded)
#line 495 "debugger_interface.m"
                {
#line 499 "debugger_interface.m"
                  {
#line 499 "debugger_interface.m"
                    mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_for_T_14, &mdb__debugger_interface__GE_13, mdb__debugger_interface__HeadVar__2_2, mdb__debugger_interface__Low_9);
                  }
#line 500 "debugger_interface.m"
                  if ((mdb__debugger_interface__GE_13 == (MR_Integer) 0))
#line 500 "debugger_interface.m"
                    mdb__debugger_interface__succeeded = MR_TRUE;
#line 500 "debugger_interface.m"
                  else
#line 500 "debugger_interface.m"
                    if ((mdb__debugger_interface__GE_13 == (MR_Integer) 2))
#line 500 "debugger_interface.m"
                      mdb__debugger_interface__succeeded = MR_TRUE;
#line 500 "debugger_interface.m"
                    else
#line 500 "debugger_interface.m"
                      mdb__debugger_interface__succeeded = MR_FALSE;
#line 495 "debugger_interface.m"
                }
#line 495 "debugger_interface.m"
            }
#line 491 "debugger_interface.m"
          else
#line 494 "debugger_interface.m"
            {
#line 494 "debugger_interface.m"
              MR_Word mdb__debugger_interface__L_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));

#line 494 "debugger_interface.m"
              {
#line 494 "debugger_interface.m"
                return mdb__debugger_interface__succeeded = mercury__list__member_2_p_0(mdb__debugger_interface__TypeInfo_for_T_14, mdb__debugger_interface__HeadVar__2_2, mdb__debugger_interface__L_7);
              }
#line 494 "debugger_interface.m"
            }
#line 491 "debugger_interface.m"
    return mdb__debugger_interface__succeeded;
#line 491 "debugger_interface.m"
  }
#line 489 "debugger_interface.m"
}

#line 444 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface__found_match_user_14_p_0(
#line 444 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__EventNumber_15,
#line 444 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__CallNumber_16,
#line 444 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__DepthNumber_17,
#line 444 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Port_18,
#line 444 "debugger_interface.m"
  MR_Word mdb__debugger_interface__PredOrFunc_19,
#line 444 "debugger_interface.m"
  MR_String mdb__debugger_interface__DeclModuleName_20,
#line 444 "debugger_interface.m"
  MR_String mdb__debugger_interface__DefModuleName_21,
#line 444 "debugger_interface.m"
  MR_String mdb__debugger_interface__PredName_22,
#line 444 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Arity_23,
#line 444 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__ModeNum_24,
#line 444 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Determinism_25,
#line 444 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Args_26,
#line 444 "debugger_interface.m"
  MR_String mdb__debugger_interface__Path_27,
#line 444 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_28)
#line 444 "debugger_interface.m"
{
#line 482 "debugger_interface.m"
  {
#line 482 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__DebuggerRequest_28)) == (MR_mktag((MR_Integer) 1)));
#line 482 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchEventNumber_29;
#line 482 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchCallNumber_30;
#line 482 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchDepthNumber_31;
#line 482 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchPort_32;
#line 482 "debugger_interface.m"
    MR_Word mdb__debugger_interface__UserPredMatch_33;
#line 482 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchDefModuleName_34;
#line 482 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchPredName_35;
#line 482 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchArity_36;
#line 482 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchModeNum_37;
#line 482 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchDeterminism_38;
#line 482 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchArgs_39;
#line 482 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchPath_40;

#line 456 "debugger_interface.m"
    if (mdb__debugger_interface__succeeded)
#line 456 "debugger_interface.m"
      {
#line 456 "debugger_interface.m"
        mdb__debugger_interface__MatchEventNumber_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 0)));
#line 456 "debugger_interface.m"
        mdb__debugger_interface__MatchCallNumber_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 1)));
#line 456 "debugger_interface.m"
        mdb__debugger_interface__MatchDepthNumber_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 2)));
#line 456 "debugger_interface.m"
        mdb__debugger_interface__MatchPort_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 3)));
#line 456 "debugger_interface.m"
        mdb__debugger_interface__UserPredMatch_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 4)));
#line 456 "debugger_interface.m"
        mdb__debugger_interface__MatchDefModuleName_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 5)));
#line 456 "debugger_interface.m"
        mdb__debugger_interface__MatchPredName_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 6)));
#line 456 "debugger_interface.m"
        mdb__debugger_interface__MatchArity_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 7)));
#line 456 "debugger_interface.m"
        mdb__debugger_interface__MatchModeNum_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 8)));
#line 456 "debugger_interface.m"
        mdb__debugger_interface__MatchDeterminism_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 9)));
#line 456 "debugger_interface.m"
        mdb__debugger_interface__MatchArgs_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 10)));
#line 456 "debugger_interface.m"
        mdb__debugger_interface__MatchPath_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 11)));
#line 462 "debugger_interface.m"
        {
#line 462 "debugger_interface.m"
          MR_Word mdb__debugger_interface__TypeCtorInfo_44_44 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 462 "debugger_interface.m"
          MR_Word mdb__debugger_interface__TypeCtorInfo_45_45;
#line 462 "debugger_interface.m"
          MR_Word mdb__debugger_interface__TypeCtorInfo_48_48;
#line 462 "debugger_interface.m"
          MR_Word mdb__debugger_interface__TypeInfo_49_49;
#line 472 "debugger_interface.m"
          MR_Word mdb__debugger_interface__MatchPredOrFunc_41;
#line 472 "debugger_interface.m"
          MR_Word mdb__debugger_interface__MatchDeclModuleName_42;

#line 462 "debugger_interface.m"
          {
#line 462 "debugger_interface.m"
            mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_44_44, mdb__debugger_interface__MatchEventNumber_29, ((MR_Box) (mdb__debugger_interface__EventNumber_15)));
          }
#line 462 "debugger_interface.m"
          if (mdb__debugger_interface__succeeded)
#line 462 "debugger_interface.m"
            {
#line 463 "debugger_interface.m"
              {
#line 463 "debugger_interface.m"
                mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_44_44, mdb__debugger_interface__MatchCallNumber_30, ((MR_Box) (mdb__debugger_interface__CallNumber_16)));
              }
#line 462 "debugger_interface.m"
              if (mdb__debugger_interface__succeeded)
#line 462 "debugger_interface.m"
                {
#line 464 "debugger_interface.m"
                  {
#line 464 "debugger_interface.m"
                    mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_44_44, mdb__debugger_interface__MatchDepthNumber_31, ((MR_Box) (mdb__debugger_interface__DepthNumber_17)));
                  }
#line 462 "debugger_interface.m"
                  if (mdb__debugger_interface__succeeded)
#line 462 "debugger_interface.m"
                    {
#line 10683 "mdb.debugger_interface.c"
                      mdb__debugger_interface__TypeCtorInfo_45_45 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0;
#line 465 "debugger_interface.m"
                      {
#line 465 "debugger_interface.m"
                        mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_45_45, mdb__debugger_interface__MatchPort_32, ((MR_Box) (mdb__debugger_interface__Port_18)));
                      }
#line 462 "debugger_interface.m"
                      if (mdb__debugger_interface__succeeded)
#line 462 "debugger_interface.m"
                        {
#line 467 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__UserPredMatch_33)) == (MR_mktag((MR_Integer) 1)));
#line 467 "debugger_interface.m"
                          if (mdb__debugger_interface__succeeded)
#line 467 "debugger_interface.m"
                            {
#line 467 "debugger_interface.m"
                              mdb__debugger_interface__MatchPredOrFunc_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__UserPredMatch_33, (MR_Integer) 0)));
#line 467 "debugger_interface.m"
                              mdb__debugger_interface__MatchDeclModuleName_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__UserPredMatch_33, (MR_Integer) 1)));
#line 470 "debugger_interface.m"
                              {
#line 470 "debugger_interface.m"
                                MR_Word mdb__debugger_interface__TypeCtorInfo_47_47;

#line 470 "debugger_interface.m"
                                {
#line 470 "debugger_interface.m"
                                  mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0, mdb__debugger_interface__MatchPredOrFunc_41, ((MR_Box) (mdb__debugger_interface__PredOrFunc_19)));
                                }
#line 470 "debugger_interface.m"
                                if (mdb__debugger_interface__succeeded)
#line 470 "debugger_interface.m"
                                  {
#line 10718 "mdb.debugger_interface.c"
                                    mdb__debugger_interface__TypeCtorInfo_47_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 471 "debugger_interface.m"
                                    {
#line 471 "debugger_interface.m"
                                      mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_47_47, mdb__debugger_interface__MatchDeclModuleName_42, ((MR_Box) (mdb__debugger_interface__DeclModuleName_20)));
                                    }
#line 470 "debugger_interface.m"
                                  }
#line 470 "debugger_interface.m"
                              }
#line 467 "debugger_interface.m"
                            }
#line 467 "debugger_interface.m"
                          else
#line 473 "debugger_interface.m"
                            mdb__debugger_interface__succeeded = (mdb__debugger_interface__UserPredMatch_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 462 "debugger_interface.m"
                          if (mdb__debugger_interface__succeeded)
#line 462 "debugger_interface.m"
                            {
#line 10739 "mdb.debugger_interface.c"
                              mdb__debugger_interface__TypeCtorInfo_48_48 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 475 "debugger_interface.m"
                              {
#line 475 "debugger_interface.m"
                                mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_48_48, mdb__debugger_interface__MatchDefModuleName_34, ((MR_Box) (mdb__debugger_interface__DefModuleName_21)));
                              }
#line 462 "debugger_interface.m"
                              if (mdb__debugger_interface__succeeded)
#line 462 "debugger_interface.m"
                                {
#line 476 "debugger_interface.m"
                                  {
#line 476 "debugger_interface.m"
                                    mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_48_48, mdb__debugger_interface__MatchPredName_35, ((MR_Box) (mdb__debugger_interface__PredName_22)));
                                  }
#line 462 "debugger_interface.m"
                                  if (mdb__debugger_interface__succeeded)
#line 462 "debugger_interface.m"
                                    {
#line 477 "debugger_interface.m"
                                      {
#line 477 "debugger_interface.m"
                                        mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_44_44, mdb__debugger_interface__MatchArity_36, ((MR_Box) (mdb__debugger_interface__Arity_23)));
                                      }
#line 462 "debugger_interface.m"
                                      if (mdb__debugger_interface__succeeded)
#line 462 "debugger_interface.m"
                                        {
#line 478 "debugger_interface.m"
                                          {
#line 478 "debugger_interface.m"
                                            mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_44_44, mdb__debugger_interface__MatchModeNum_37, ((MR_Box) (mdb__debugger_interface__ModeNum_24)));
                                          }
#line 462 "debugger_interface.m"
                                          if (mdb__debugger_interface__succeeded)
#line 462 "debugger_interface.m"
                                            {
#line 479 "debugger_interface.m"
                                              {
#line 479 "debugger_interface.m"
                                                mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_44_44, mdb__debugger_interface__MatchDeterminism_38, ((MR_Box) (mdb__debugger_interface__Determinism_25)));
                                              }
#line 462 "debugger_interface.m"
                                              if (mdb__debugger_interface__succeeded)
#line 462 "debugger_interface.m"
                                                {
#line 10786 "mdb.debugger_interface.c"
                                                  mdb__debugger_interface__TypeInfo_49_49 = (MR_Word) &mdb__debugger_interface_scalar_common_1[0];
#line 480 "debugger_interface.m"
                                                  {
#line 480 "debugger_interface.m"
                                                    mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeInfo_49_49, mdb__debugger_interface__MatchArgs_39, ((MR_Box) (mdb__debugger_interface__Args_26)));
                                                  }
#line 462 "debugger_interface.m"
                                                  if (mdb__debugger_interface__succeeded)
#line 481 "debugger_interface.m"
                                                    {
#line 481 "debugger_interface.m"
                                                      return mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_48_48, mdb__debugger_interface__MatchPath_40, ((MR_Box) (mdb__debugger_interface__Path_27)));
                                                    }
#line 462 "debugger_interface.m"
                                                }
#line 462 "debugger_interface.m"
                                            }
#line 462 "debugger_interface.m"
                                        }
#line 462 "debugger_interface.m"
                                    }
#line 462 "debugger_interface.m"
                                }
#line 462 "debugger_interface.m"
                            }
#line 462 "debugger_interface.m"
                        }
#line 462 "debugger_interface.m"
                    }
#line 462 "debugger_interface.m"
                }
#line 462 "debugger_interface.m"
            }
#line 462 "debugger_interface.m"
        }
#line 456 "debugger_interface.m"
      }
#line 456 "debugger_interface.m"
    else
#line 483 "debugger_interface.m"
      {
#line 483 "debugger_interface.m"
        {
#line 483 "debugger_interface.m"
          mercury__require__error_1_p_0((MR_String) "found_match: forward_move expected");
        }
#line 483 "debugger_interface.m"
        mdb__debugger_interface__succeeded = MR_TRUE;
#line 483 "debugger_interface.m"
      }
#line 482 "debugger_interface.m"
    return mdb__debugger_interface__succeeded;
#line 482 "debugger_interface.m"
  }
#line 444 "debugger_interface.m"
}

#line 429 "debugger_interface.m"
static MR_Integer MR_CALL 
mdb__debugger_interface__get_var_number_1_f_0(
#line 429 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_3)
#line 429 "debugger_interface.m"
{
#line 434 "debugger_interface.m"
  {
#line 434 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__DebuggerRequest_3)) == (MR_mktag((MR_Integer) 2)));
#line 434 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__VarNumber_4;
#line 434 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__Var_5;

#line 432 "debugger_interface.m"
    if (mdb__debugger_interface__succeeded)
#line 432 "debugger_interface.m"
      {
#line 432 "debugger_interface.m"
        mdb__debugger_interface__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__DebuggerRequest_3, (MR_Integer) 0)));
#line 433 "debugger_interface.m"
        mdb__debugger_interface__VarNumber_4 = mdb__debugger_interface__Var_5;
#line 432 "debugger_interface.m"
      }
#line 432 "debugger_interface.m"
    else
#line 435 "debugger_interface.m"
      {
#line 435 "debugger_interface.m"
        {
#line 435 "debugger_interface.m"
          mercury__require__error_1_p_0((MR_String) "get_var_number: not a current_nth_var request");
        }
#line 435 "debugger_interface.m"
      }
#line 434 "debugger_interface.m"
    return mdb__debugger_interface__VarNumber_4;
#line 434 "debugger_interface.m"
  }
#line 429 "debugger_interface.m"
}

#line 410 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__output_current_live_var_names_5_p_0(
#line 410 "debugger_interface.m"
  MR_Word mdb__debugger_interface__LiveVarNameList_6,
#line 410 "debugger_interface.m"
  MR_Word mdb__debugger_interface__LiveVarTypeList_7,
#line 410 "debugger_interface.m"
  MR_Word mdb__debugger_interface__OutputStream_8)
#line 410 "debugger_interface.m"
{
#line 414 "debugger_interface.m"
  {
#line 414 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 414 "debugger_interface.m"
    MR_Word mdb__debugger_interface__CurrentTraceInfo_10;

#line 415 "debugger_interface.m"
    {
#line 415 "debugger_interface.m"
      mdb__debugger_interface__CurrentTraceInfo_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 415 "debugger_interface.m"
      MR_hl_field(MR_mktag(3), mdb__debugger_interface__CurrentTraceInfo_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 415 "debugger_interface.m"
      MR_hl_field(MR_mktag(3), mdb__debugger_interface__CurrentTraceInfo_10, 1) = ((MR_Box) (mdb__debugger_interface__LiveVarNameList_6));
#line 415 "debugger_interface.m"
      MR_hl_field(MR_mktag(3), mdb__debugger_interface__CurrentTraceInfo_10, 2) = ((MR_Box) (mdb__debugger_interface__LiveVarTypeList_7));
#line 415 "debugger_interface.m"
    }
#line 417 "debugger_interface.m"
    {
#line 417 "debugger_interface.m"
      mercury__io__write_4_p_0((MR_Word) &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_response_0, mdb__debugger_interface__OutputStream_8, ((MR_Box) (mdb__debugger_interface__CurrentTraceInfo_10)));
    }
#line 418 "debugger_interface.m"
    {
#line 418 "debugger_interface.m"
      mercury__io__print_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__debugger_interface__OutputStream_8, ((MR_Box) ((MR_String) ".\n")));
    }
#line 419 "debugger_interface.m"
    {
#line 419 "debugger_interface.m"
      mercury__io__flush_output_3_p_0(mdb__debugger_interface__OutputStream_8);
#line 419 "debugger_interface.m"
      return;
    }
#line 414 "debugger_interface.m"
  }
#line 410 "debugger_interface.m"
}

#line 397 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__output_current_nth_var_4_p_0(
#line 397 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Var_5,
#line 397 "debugger_interface.m"
  MR_Word mdb__debugger_interface__OutputStream_6)
#line 397 "debugger_interface.m"
{
#line 400 "debugger_interface.m"
  {
#line 400 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 400 "debugger_interface.m"
    MR_Word mdb__debugger_interface__CurrentTraceInfo_8;

#line 401 "debugger_interface.m"
    {
#line 401 "debugger_interface.m"
      mdb__debugger_interface__CurrentTraceInfo_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 401 "debugger_interface.m"
      MR_hl_field(MR_mktag(3), mdb__debugger_interface__CurrentTraceInfo_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 401 "debugger_interface.m"
      MR_hl_field(MR_mktag(3), mdb__debugger_interface__CurrentTraceInfo_8, 1) = ((MR_Box) (mdb__debugger_interface__Var_5));
#line 401 "debugger_interface.m"
    }
#line 402 "debugger_interface.m"
    {
#line 402 "debugger_interface.m"
      mercury__io__write_4_p_0((MR_Word) &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_response_0, mdb__debugger_interface__OutputStream_6, ((MR_Box) (mdb__debugger_interface__CurrentTraceInfo_8)));
    }
#line 403 "debugger_interface.m"
    {
#line 403 "debugger_interface.m"
      mercury__io__print_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__debugger_interface__OutputStream_6, ((MR_Box) ((MR_String) ".\n")));
    }
#line 404 "debugger_interface.m"
    {
#line 404 "debugger_interface.m"
      mercury__io__flush_output_3_p_0(mdb__debugger_interface__OutputStream_6);
#line 404 "debugger_interface.m"
      return;
    }
#line 400 "debugger_interface.m"
  }
#line 397 "debugger_interface.m"
}

#line 382 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__output_current_vars_5_p_0(
#line 382 "debugger_interface.m"
  MR_Word mdb__debugger_interface__VarList_6,
#line 382 "debugger_interface.m"
  MR_Word mdb__debugger_interface__StringList_7,
#line 382 "debugger_interface.m"
  MR_Word mdb__debugger_interface__OutputStream_8)
#line 382 "debugger_interface.m"
{
#line 385 "debugger_interface.m"
  {
#line 385 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 385 "debugger_interface.m"
    MR_Word mdb__debugger_interface__CurrentTraceInfo_10;

#line 386 "debugger_interface.m"
    {
#line 386 "debugger_interface.m"
      mdb__debugger_interface__CurrentTraceInfo_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 386 "debugger_interface.m"
      MR_hl_field(MR_mktag(3), mdb__debugger_interface__CurrentTraceInfo_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 386 "debugger_interface.m"
      MR_hl_field(MR_mktag(3), mdb__debugger_interface__CurrentTraceInfo_10, 1) = ((MR_Box) (mdb__debugger_interface__VarList_6));
#line 386 "debugger_interface.m"
      MR_hl_field(MR_mktag(3), mdb__debugger_interface__CurrentTraceInfo_10, 2) = ((MR_Box) (mdb__debugger_interface__StringList_7));
#line 386 "debugger_interface.m"
    }
#line 387 "debugger_interface.m"
    {
#line 387 "debugger_interface.m"
      mercury__io__write_4_p_0((MR_Word) &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_response_0, mdb__debugger_interface__OutputStream_8, ((MR_Box) (mdb__debugger_interface__CurrentTraceInfo_10)));
    }
#line 388 "debugger_interface.m"
    {
#line 388 "debugger_interface.m"
      mercury__io__print_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__debugger_interface__OutputStream_8, ((MR_Box) ((MR_String) ".\n")));
    }
#line 389 "debugger_interface.m"
    {
#line 389 "debugger_interface.m"
      mercury__io__flush_output_3_p_0(mdb__debugger_interface__OutputStream_8);
#line 389 "debugger_interface.m"
      return;
    }
#line 385 "debugger_interface.m"
  }
#line 382 "debugger_interface.m"
}

#line 358 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__output_current_slots_comp_16_p_0(
#line 358 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__EventNumber_17,
#line 358 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__CallNumber_18,
#line 358 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__DepthNumber_19,
#line 358 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Port_20,
#line 358 "debugger_interface.m"
  MR_String mdb__debugger_interface__NameType_21,
#line 358 "debugger_interface.m"
  MR_String mdb__debugger_interface__ModuleType_22,
#line 358 "debugger_interface.m"
  MR_String mdb__debugger_interface__DefModuleName_23,
#line 358 "debugger_interface.m"
  MR_String mdb__debugger_interface__PredName_24,
#line 358 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Arity_25,
#line 358 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__ModeNum_26,
#line 358 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Determinism_27,
#line 358 "debugger_interface.m"
  MR_String mdb__debugger_interface__Path_28,
#line 358 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__LineNo_29,
#line 358 "debugger_interface.m"
  MR_Word mdb__debugger_interface__OutputStream_30)
#line 358 "debugger_interface.m"
{
#line 367 "debugger_interface.m"
  {
#line 367 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 367 "debugger_interface.m"
    MR_Word mdb__debugger_interface__CurrentTraceInfo_32;

#line 368 "debugger_interface.m"
    {
#line 368 "debugger_interface.m"
      mdb__debugger_interface__CurrentTraceInfo_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL));
#line 368 "debugger_interface.m"
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 0) = ((MR_Box) (mdb__debugger_interface__EventNumber_17));
#line 368 "debugger_interface.m"
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 1) = ((MR_Box) (mdb__debugger_interface__CallNumber_18));
#line 368 "debugger_interface.m"
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 2) = ((MR_Box) (mdb__debugger_interface__DepthNumber_19));
#line 368 "debugger_interface.m"
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 3) = ((MR_Box) (mdb__debugger_interface__Port_20));
#line 368 "debugger_interface.m"
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 4) = ((MR_Box) (mdb__debugger_interface__NameType_21));
#line 368 "debugger_interface.m"
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 5) = ((MR_Box) (mdb__debugger_interface__ModuleType_22));
#line 368 "debugger_interface.m"
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 6) = ((MR_Box) (mdb__debugger_interface__DefModuleName_23));
#line 368 "debugger_interface.m"
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 7) = ((MR_Box) (mdb__debugger_interface__PredName_24));
#line 368 "debugger_interface.m"
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 8) = ((MR_Box) (mdb__debugger_interface__Arity_25));
#line 368 "debugger_interface.m"
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 9) = ((MR_Box) (mdb__debugger_interface__ModeNum_26));
#line 368 "debugger_interface.m"
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 10) = ((MR_Box) (mdb__debugger_interface__Determinism_27));
#line 368 "debugger_interface.m"
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 11) = ((MR_Box) (mdb__debugger_interface__Path_28));
#line 368 "debugger_interface.m"
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 12) = ((MR_Box) (mdb__debugger_interface__LineNo_29));
#line 368 "debugger_interface.m"
    }
#line 371 "debugger_interface.m"
    {
#line 371 "debugger_interface.m"
      mercury__io__write_4_p_0((MR_Word) &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_response_0, mdb__debugger_interface__OutputStream_30, ((MR_Box) (mdb__debugger_interface__CurrentTraceInfo_32)));
    }
#line 372 "debugger_interface.m"
    {
#line 372 "debugger_interface.m"
      mercury__io__print_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__debugger_interface__OutputStream_30, ((MR_Box) ((MR_String) ".\n")));
    }
#line 373 "debugger_interface.m"
    {
#line 373 "debugger_interface.m"
      mercury__io__flush_output_3_p_0(mdb__debugger_interface__OutputStream_30);
#line 373 "debugger_interface.m"
      return;
    }
#line 367 "debugger_interface.m"
  }
#line 358 "debugger_interface.m"
}

#line 332 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__output_current_slots_user_16_p_0(
#line 332 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__EventNumber_17,
#line 332 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__CallNumber_18,
#line 332 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__DepthNumber_19,
#line 332 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Port_20,
#line 332 "debugger_interface.m"
  MR_Word mdb__debugger_interface__PredOrFunc_21,
#line 332 "debugger_interface.m"
  MR_String mdb__debugger_interface__DeclModuleName_22,
#line 332 "debugger_interface.m"
  MR_String mdb__debugger_interface__DefModuleName_23,
#line 332 "debugger_interface.m"
  MR_String mdb__debugger_interface__PredName_24,
#line 332 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Arity_25,
#line 332 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__ModeNum_26,
#line 332 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Determinism_27,
#line 332 "debugger_interface.m"
  MR_String mdb__debugger_interface__Path_28,
#line 332 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__LineNo_29,
#line 332 "debugger_interface.m"
  MR_Word mdb__debugger_interface__OutputStream_30)
#line 332 "debugger_interface.m"
{
#line 341 "debugger_interface.m"
  {
#line 341 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 341 "debugger_interface.m"
    MR_Word mdb__debugger_interface__CurrentTraceInfo_32;

#line 342 "debugger_interface.m"
    {
#line 342 "debugger_interface.m"
      mdb__debugger_interface__CurrentTraceInfo_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL));
#line 342 "debugger_interface.m"
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 0) = ((MR_Box) (mdb__debugger_interface__EventNumber_17));
#line 342 "debugger_interface.m"
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 1) = ((MR_Box) (mdb__debugger_interface__CallNumber_18));
#line 342 "debugger_interface.m"
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 2) = ((MR_Box) (mdb__debugger_interface__DepthNumber_19));
#line 342 "debugger_interface.m"
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 3) = ((MR_Box) ((mdb__debugger_interface__Port_20 | ((mdb__debugger_interface__PredOrFunc_21 << (MR_Integer) 4)))));
#line 342 "debugger_interface.m"
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 4) = ((MR_Box) (mdb__debugger_interface__DeclModuleName_22));
#line 342 "debugger_interface.m"
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 5) = ((MR_Box) (mdb__debugger_interface__DefModuleName_23));
#line 342 "debugger_interface.m"
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 6) = ((MR_Box) (mdb__debugger_interface__PredName_24));
#line 342 "debugger_interface.m"
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 7) = ((MR_Box) (mdb__debugger_interface__Arity_25));
#line 342 "debugger_interface.m"
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 8) = ((MR_Box) (mdb__debugger_interface__ModeNum_26));
#line 342 "debugger_interface.m"
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 9) = ((MR_Box) (mdb__debugger_interface__Determinism_27));
#line 342 "debugger_interface.m"
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 10) = ((MR_Box) (mdb__debugger_interface__Path_28));
#line 342 "debugger_interface.m"
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 11) = ((MR_Box) (mdb__debugger_interface__LineNo_29));
#line 342 "debugger_interface.m"
    }
#line 345 "debugger_interface.m"
    {
#line 345 "debugger_interface.m"
      mercury__io__write_4_p_0((MR_Word) &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_response_0, mdb__debugger_interface__OutputStream_30, ((MR_Box) (mdb__debugger_interface__CurrentTraceInfo_32)));
    }
#line 346 "debugger_interface.m"
    {
#line 346 "debugger_interface.m"
      mercury__io__print_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__debugger_interface__OutputStream_30, ((MR_Box) ((MR_String) ".\n")));
    }
#line 347 "debugger_interface.m"
    {
#line 347 "debugger_interface.m"
      mercury__io__flush_output_3_p_0(mdb__debugger_interface__OutputStream_30);
#line 347 "debugger_interface.m"
      return;
    }
#line 341 "debugger_interface.m"
  }
#line 332 "debugger_interface.m"
}

#line 36 "debugger_interface.m"
void MR_CALL 
mdb__debugger_interface__dummy_pred_to_avoid_warning_about_nothing_exported_0_p_0(void)
#line 36 "debugger_interface.m"
{
#line 53 "debugger_interface.m"
  {
#line 53 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;

#line 53 "debugger_interface.m"
  }
#line 36 "debugger_interface.m"
}

void mercury__mdb__debugger_interface__init(void)
{
}

void mercury__mdb__debugger_interface__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_arity_0);
	MR_register_type_ctor_info(&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_call_number_0);
	MR_register_type_ctor_info(&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_request_0);
	MR_register_type_ctor_info(&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_response_0);
	MR_register_type_ctor_info(&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_depth_number_0);
	MR_register_type_ctor_info(&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_determinism_0);
	MR_register_type_ctor_info(&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_event_number_0);
	MR_register_type_ctor_info(&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1);
	MR_register_type_ctor_info(&mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_pred_match_0);
}

void mercury__mdb__debugger_interface__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdb.debugger_interface. */
